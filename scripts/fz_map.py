#!/usr/bin/env python3
"""Fuzzy map of another game's library C (e.g. F-Zero GX's GameCube Sofdec) onto our functions.

    fz_map.py compile --src DIR --inc-file INC.txt [--defs-file DEFS.txt] [-j 8]   -> build/fz/objs.json
    fz_map.py map [--range 0x170800-0x1A1E80] [--all]                             -> build/fz/map.csv

`compile` compiles every C file of DIR with ee-gcc 2.96 -O2 -G0 (as lib_scan.py does) and keeps each function's
words. `map` compares every function of ours in the range (only the ones still INCLUDE_ASM unless --all) with every
compiled function: the instruction class sequence (opcode / funct, registers dropped) through difflib, plus the
immediates of loads, stores and ALU ops (struct offsets and constants survive between platforms of the same CRI
version). Prints the best candidates with their ratio and the estimated number of differing instructions.

    fz_map.py order [--anchor 0.5 --min-sim 0.35]     -> build/fz/order.csv (the pairs scripts/fz_draft.py uses)
    fz_map.py graph                                   -> build/fz/graph.csv (call-graph spreading; weaker, kept)

`order` uses the link order: mutual-best content pairs are anchors, and between two anchors of the same run the
functions in between are aligned by dynamic programming (gaps allowed). Metrowerks GC lays an object's functions
out in reverse order, so most runs go backwards on the fzgx side.

Recipe (F-Zero GX Sofdec, ~/psvita/b3-ext4/r5/fzgx; the scan copy of its tree in build/ext/fzgxm):
    fz_map.py compile --src build/ext/fzgxm/src/rel/movie_module --inc-file build/ext/fz_inc.txt \\
                      --defs-file ~/psvita/b3-scan8/fzgxm/defs.txt
    fz_map.py map --all --out build/fz/map_all.csv && fz_map.py order --anchor 0.5 --min-sim 0.35
    fz_draft.py -j 8
"""
import argparse
import csv
import difflib
import json
import os
import re
import struct
import sys
from collections import Counter
from multiprocessing import Pool
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
OUT = ROOT / "build" / "fz"


def tok(w):
    op = w >> 26
    if op == 0:
        return f"s{w & 63}"
    if op == 1:
        return f"r{(w >> 16) & 31}"
    if op in (0x10, 0x11, 0x12):
        return f"c{op}.{(w >> 21) & 31}.{w & 63 if (w >> 21) & 31 >= 16 else 0}"
    if op == 0x1C:
        return f"m{w & 63}.{(w >> 6) & 31}"
    return f"o{op}"


def imms(words, masks):
    """Immediates of I-type instructions (not relocated, not branches), as a multiset."""
    c = Counter()
    for i, w in enumerate(words):
        op = w >> 26
        if masks.get(i) or op in (0, 1, 2, 3, 4, 5, 6, 7, 0x14, 0x15, 0x16, 0x17, 0x10, 0x11, 0x12, 0x1C):
            continue
        imm = w & 0xFFFF
        if op == 0x09 and ((w >> 21) & 31) == 29:  # addiu sp: frame size differs
            continue
        if ((w >> 21) & 31) == 29:  # stack slots
            continue
        c[(op, imm)] += 1
    return c


def _calls_of(obj):
    """{function: [called symbol, in code order]} from the R_MIPS_26 relocations of an object."""
    from elftools.elf.elffile import ELFFile
    from elftools.elf.relocation import RelocationSection
    from elftools.elf.descriptions import describe_reloc_type
    with open(obj, "rb") as f:
        elf = ELFFile(f)
        tidx = next((i for i, s in enumerate(elf.iter_sections()) if s.name == ".text"), None)
        if tidx is None:
            return {}
        symtab = elf.get_section_by_name(".symtab")
        funcs = sorted((s["st_value"], s.name) for s in symtab.iter_symbols()
                       if s["st_info"]["type"] == "STT_FUNC" and s["st_shndx"] == tidx)
        rel = []
        for s in elf.iter_sections():
            if isinstance(s, RelocationSection) and s["sh_info"] == tidx:
                for r in s.iter_relocations():
                    if describe_reloc_type(r["r_info_type"], elf) == "R_MIPS_26":
                        rel.append((r["r_offset"], symtab.get_symbol(r["r_info_sym"]).name))
    out = {}
    for off, name in sorted(rel):
        owner = [n for a, n in funcs if a <= off]
        if owner and name:
            out.setdefault(owner[-1], []).append(name)
    return out


def our_calls(addr, words):
    """Called addresses (jal, and j outside the function) in code order."""
    out = []
    end = addr + 4 * len(words)
    for i, w in enumerate(words):
        op = w >> 26
        if op in (2, 3):
            t = ((addr + 4 * i) & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
            if op == 3 or not addr <= t < end:
                out.append(t)
    return out


def _compile_one(args):
    f, inc, defs = args
    import gccmatch as g
    try:
        objs, work = g.compile_matrix(Path(f), ["2.96"], ["-O2 -G0"], "gas", defs, include_dirs=inc)
    except Exception as e:  # noqa: BLE001
        return f, {}, f"error {e}"
    obj = objs[("2.96", "-O2 -G0")]
    if not isinstance(obj, Path):
        return f, {}, str(obj)
    out = {}
    calls = _calls_of(obj)
    for name, (w, masks) in g.objects_functions(obj, resolve=False).items():
        out[name] = {"w": w, "m": {str(k): v for k, v in masks.items()}, "calls": calls.get(name, [])}
    import shutil
    shutil.rmtree(work, ignore_errors=True)
    return f, out, ""


def cmd_compile(a):
    files = sorted(str(p) for p in Path(a.src).rglob("*.c"))
    inc = Path(a.inc_file).read_text().replace("-I ", "-I").split() if a.inc_file else []
    inc = [x[2:] for x in inc if x.startswith("-I")]
    defs = Path(a.defs_file).read_text().replace("-D ", "-D").split() if a.defs_file else []
    defs = [x[2:] for x in defs if x.startswith("-D")]
    OUT.mkdir(parents=True, exist_ok=True)
    res, errs = {}, 0
    with Pool(a.j) as pool:
        for k, (f, fn, err) in enumerate(pool.imap_unordered(_compile_one, [(f, inc, defs) for f in files])):
            if err:
                errs += 1
            for name, d in fn.items():
                d["file"] = f
                res[name] = d
            if k % 50 == 0:
                print(f"{k}/{len(files)} files, {len(res)} functions, {errs} errors", file=sys.stderr, flush=True)
    (OUT / "objs.json").write_text(json.dumps(res))
    print(f"{len(files)} files, {len(res)} functions, {errs} errors -> {OUT / 'objs.json'}")


def ours(lo, hi, only_asm):
    """[(address, name, words, still asm)] of our functions in [lo, hi), from the last build's ELF symbols."""
    import gccmatch as g
    from elftools.elf.elffile import ELFFile
    rom = g.ROM.read_bytes()
    asm_left = set()
    for p in (ROOT / "src").rglob("*.c"):
        for m in re.finditer(r'^INCLUDE_ASM\("[^"]+",\s*(\w+)\);', p.read_text(errors="replace"), re.M):
            asm_left.add(m.group(1))
    funcs = {}
    with open(ROOT / "build" / "SLUS_209.98.elf", "rb") as f:
        for s in ELFFile(f).get_section_by_name(".symtab").iter_symbols():
            if s["st_info"]["type"] == "STT_FUNC" and lo <= s["st_value"] < hi and s["st_size"] >= 8:
                a = s["st_value"]
                # one name an address: a real name before func_XXXXXXXX
                if a not in funcs or (funcs[a][0].startswith("func_") and not s.name.startswith("func_")):
                    funcs[a] = (s.name, s["st_size"])
    out = []
    for addr, (name, size) in sorted(funcs.items()):
        left = name in asm_left or f"func_{addr:08X}" in asm_left
        if only_asm and not left:
            continue
        off = addr - g.VRAM
        words = list(struct.unpack(f"<{size // 4}I", rom[off:off + size]))
        while words and words[-1] == 0:
            words.pop()
        out.append((addr, name, words, left))
    return out


def cmd_map(a):
    lo, hi = (int(x, 16) for x in a.range.split("-"))
    objs = json.loads((OUT / "objs.json").read_text())
    theirs = []
    for name, d in objs.items():
        m = {int(k): v for k, v in d["m"].items()}
        theirs.append((name, d["file"], [tok(w) for w in d["w"]], imms(d["w"], m), len(d["w"])))
    rows = []
    mine = ours(lo, hi, not a.all)
    print(f"{len(mine)} functions of ours, {len(theirs)} compiled", file=sys.stderr)
    for addr, name, words, left in mine:
        ta = [tok(w) for w in words]
        ia = imms(words, {})
        sm = difflib.SequenceMatcher(None, autojunk=False)
        sm.set_seq2(ta)
        cands = []
        for tn, tf, tb, ib, n in theirs:
            if not (0.6 * len(ta) <= n <= 1.6 * len(ta) + 4):
                continue
            sm.set_seq1(tb)
            if sm.real_quick_ratio() < 0.5 or sm.quick_ratio() < 0.5:
                continue
            r = sm.ratio()
            if r < 0.5:
                continue
            inter = sum((ia & ib).values())
            union = sum((ia | ib).values()) or 1
            ji = inter / union
            diff = sum(max(i2 - i1, j2 - j1) for t, i1, i2, j1, j2 in sm.get_opcodes() if t != "equal")
            cands.append((r * 0.7 + ji * 0.3, r, ji, diff, tn, tf))
        cands.sort(reverse=True)
        best = cands[0] if cands else None
        second = cands[1][0] if len(cands) > 1 else 0
        rows.append(dict(addr=f"{addr:08X}", name=name, left=int(left), words=len(words),
                         fz=best[4] if best else "", fz_file=Path(best[5]).name if best else "",
                         score=round(best[0], 3) if best else 0, ratio=round(best[1], 3) if best else 0,
                         imm=round(best[2], 3) if best else 0, est_diff=best[3] if best else -1,
                         margin=round(best[0] - second, 3) if best else 0,
                         alts=" ".join(f"{c[4]}:{c[0]:.2f}" for c in cands[1:4])))
    OUT.mkdir(parents=True, exist_ok=True)
    with open(a.out, "w", newline="") as fh:
        w = csv.DictWriter(fh, fieldnames=list(rows[0].keys()))
        w.writeheader()
        w.writerows(rows)
    good = [r for r in rows if r["score"] >= 0.6]
    print(f"{len(rows)} functions; best score >= 0.6: {len(good)}; est. diff <= 20: "
          f"{sum(1 for r in rows if 0 <= r['est_diff'] <= 20 and r['score'] >= 0.6)} -> {a.out}")


def fz_sizes(path):
    """{name: size} of the other game's functions (a decomp-toolkit symbols.txt)."""
    out = {}
    if path and Path(path).exists():
        for m in re.finditer(r"^(\w+) = \.text:0x[0-9A-Fa-f]+; // type:function size:0x([0-9A-Fa-f]+)",
                             Path(path).read_text(), re.M):
            out[m.group(1)] = int(m.group(2), 16)
    return out


def cmd_graph(a):
    """Pairs from the content map, spread through the call graphs (callees in code order)."""
    lo, hi = (int(x, 16) for x in a.range.split("-"))
    objs = json.loads((OUT / "objs.json").read_text())
    fzsz = fz_sizes(a.fz_symbols)
    for n, d in objs.items():
        fzsz.setdefault(n, 4 * len(d["w"]))
    fz_calls = {n: d.get("calls", []) for n, d in objs.items()}
    mine = {addr: (name, words, left) for addr, name, words, left in ours(lo, hi, False)}
    by_name = {}
    for addr, (name, _, _) in mine.items():
        by_name[re.sub(r"_x[0-9A-F]{8}$", "", name).lower()] = addr
    pair, how, rev = {}, {}, {}

    def add(o, f, why):
        if o in pair or f in rev or o not in mine:
            return False
        sz = fzsz.get(f)
        if sz and not 0.4 <= (4 * len(mine[o][1])) / sz <= 2.5:
            return False
        pair[o], rev[f], how[o] = f, o, why
        return True

    for f in fzsz:
        if not f.startswith(("fn_", "lbl_", "_prolog", "_epilog")) and f.lower() in by_name:
            add(by_name[f.lower()], f, "name")
    rows = list(csv.DictReader(open(a.map)))
    for r in sorted(rows, key=lambda r: -float(r["score"])):
        if r["fz"] and float(r["score"]) >= a.anchor and float(r["margin"]) >= a.margin:
            add(int(r["addr"], 16), r["fz"], "content")
    anchors = len(pair)
    changed = True
    rounds = 0
    while changed and rounds < 20:
        changed, rounds = False, rounds + 1
        votes = Counter()
        for o, f in list(pair.items()):
            co = our_calls(o, mine[o][1])
            cf = [x for x in fz_calls.get(f, []) if x != f]
            if not cf:
                continue
            ta = [pair.get(x, f"?o{x}") for x in co]
            tb = [x if x in rev else f"?f{x}" for x in cf]
            sm = difflib.SequenceMatcher(None, ta, tb, autojunk=False)
            for t, i1, i2, j1, j2 in sm.get_opcodes():
                if t == "replace" and i2 - i1 == j2 - j1:
                    for k in range(i2 - i1):
                        if co[i1 + k] not in pair and cf[j1 + k] not in rev:
                            votes[(co[i1 + k], cf[j1 + k])] += 1
        # strongest first; a vote for an already-paired side is dropped by add()
        for (o, f), v in votes.most_common():
            if v >= 1 and add(o, f, f"graph{rounds}"):
                changed = True
    out = []
    for addr, (name, words, left) in sorted(mine.items()):
        f = pair.get(addr, "")
        out.append(dict(addr=f"{addr:08X}", name=name, left=int(left), words=len(words), fz=f, how=how.get(addr, ""),
                        fz_c=int(f in objs), fz_size=fzsz.get(f, 0)))
    with open(a.out, "w", newline="") as fh:
        w = csv.DictWriter(fh, fieldnames=list(out[0].keys()))
        w.writeheader()
        w.writerows(out)
    left = [r for r in out if r["left"]]
    print(f"{anchors} anchors, {len(pair)} pairs after {rounds} rounds; of {len(left)} functions still asm: "
          f"{sum(1 for r in left if r['fz'])} paired, {sum(1 for r in left if r['fz_c'])} with fzgx C -> {a.out}")
    # agreement of the graph pairs with the content map's best candidate (a check of the spreading)
    best = {int(r["addr"], 16): r["fz"] for r in rows}
    g = [(o, f) for o, f in pair.items() if how[o].startswith("graph") and best.get(o)]
    print(f"graph pairs whose content map has a candidate: {len(g)}, same as its best: "
          f"{sum(1 for o, f in g if best[o] == f)}")


def fz_order(path):
    """[(name, size)] of the other game's functions in address order."""
    out = []
    for m in re.finditer(r"^(\w+) = \.text:0x([0-9A-Fa-f]+); // type:function size:0x([0-9A-Fa-f]+)",
                         Path(path).read_text(), re.M):
        out.append((int(m.group(2), 16), m.group(1), int(m.group(3), 16)))
    return [(n, s) for a, n, s in sorted(out)]


def cmd_order(a):
    """Pairs from the link order: CRI objects keep their function order (Metrowerks GC reverses it inside an
    object), so between two anchor pairs of the same run the functions in between are aligned (dynamic
    programming on the instruction-class similarity, gaps allowed: our build has functions the other lacks)."""
    lo, hi = (int(x, 16) for x in a.range.split("-"))
    objs = json.loads((OUT / "objs.json").read_text())
    fz = fz_order(a.fz_symbols)
    fzi = {n: i for i, (n, s) in enumerate(fz)}
    mine = ours(lo, hi, False)
    rows = list(csv.DictReader(open(a.map)))
    oi = {int(r["addr"], 16): i for i, r in enumerate(rows)}
    assert [x[0] for x in mine] == [int(r["addr"], 16) for r in rows], "map.csv is not from the same build/range"
    toks_o = [[tok(w) for w in m[2]] for m in mine]
    toks_f = {n: [tok(w) for w in d["w"]] for n, d in objs.items()}
    best_of = {}
    for r in rows:
        if r["fz"] and (r["fz"] not in best_of or float(r["score"]) > best_of[r["fz"]][0]):
            best_of[r["fz"]] = (float(r["score"]), r["addr"])
    anch = sorted((oi[int(r["addr"], 16)], fzi[r["fz"]]) for r in rows
                  if r["fz"] in fzi and float(r["score"]) >= a.anchor and best_of[r["fz"]][1] == r["addr"])
    pair = {o: (f, "anchor", 1.0) for o, f in anch}

    def sim(o, f):
        n, size = fz[f]
        ro = len(toks_o[o]) * 4 / max(size, 4)
        if not 0.4 <= ro <= 2.5:
            return 0.0
        tb = toks_f.get(n)
        if tb is None:  # no C for it: the size alone, weak
            return 0.3 * min(ro, 1 / ro)
        sm = difflib.SequenceMatcher(None, toks_o[o], tb, autojunk=False)
        return sm.ratio()

    filled = 0
    for (o1, f1), (o2, f2) in zip(anch, anch[1:]):
        do, df = o2 - o1, f2 - f1
        if do < 2 or df == 0 or abs(df) > do + 2 or do > abs(df) + a.max_extra:
            continue
        step = 1 if df > 0 else -1
        os_ = list(range(o1 + 1, o2))
        fs_ = list(range(f1 + step, f2, step))
        if not os_ or not fs_:
            continue
        # global alignment, gaps cost nothing, a pair scores its similarity minus a threshold
        n, m = len(os_), len(fs_)
        S = [[sim(o, f) for f in fs_] for o in os_]
        D = [[0.0] * (m + 1) for _ in range(n + 1)]
        B = [[0] * (m + 1) for _ in range(n + 1)]
        for i in range(1, n + 1):
            for j in range(1, m + 1):
                c = [D[i - 1][j], D[i][j - 1], D[i - 1][j - 1] + S[i - 1][j - 1] - a.min_sim]
                k = max(range(3), key=lambda x: c[x])
                D[i][j], B[i][j] = c[k], k
        i, j = n, m
        while i and j:
            k = B[i][j]
            if k == 2:
                if S[i - 1][j - 1] >= a.min_sim:
                    pair[os_[i - 1]] = (fs_[j - 1], "order", round(S[i - 1][j - 1], 3))
                    filled += 1
                i, j = i - 1, j - 1
            elif k == 0:
                i -= 1
            else:
                j -= 1
    out = []
    for o, (addr, name, words, left) in enumerate(mine):
        f, why, s = pair.get(o, (None, "", 0))
        fn = fz[f][0] if f is not None else ""
        out.append(dict(addr=f"{addr:08X}", name=name, left=int(left), words=len(words), fz=fn, how=why, sim=s,
                        fz_c=int(fn in objs), fz_words=fz[f][1] // 4 if f is not None else 0))
    with open(a.out, "w", newline="") as fh:
        w = csv.DictWriter(fh, fieldnames=list(out[0].keys()))
        w.writeheader()
        w.writerows(out)
    left = [r for r in out if r["left"]]
    print(f"{len(anch)} anchors, {filled} pairs from the order; of {len(left)} functions still asm: "
          f"{sum(1 for r in left if r['fz'])} paired, {sum(1 for r in left if r['fz_c'])} with fzgx C -> {a.out}")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sp = ap.add_subparsers(dest="cmd", required=True)
    c = sp.add_parser("compile")
    c.add_argument("--src", required=True)
    c.add_argument("--inc-file")
    c.add_argument("--defs-file")
    c.add_argument("-j", type=int, default=8)
    m = sp.add_parser("map")
    m.add_argument("--range", default="0x170800-0x1A1E80")
    m.add_argument("--all", action="store_true")
    m.add_argument("--out", default=str(OUT / "map.csv"))
    gr = sp.add_parser("graph")
    gr.add_argument("--range", default="0x170800-0x1A1E80")
    gr.add_argument("--map", default=str(OUT / "map_all.csv"))
    gr.add_argument("--fz-symbols", default=str(Path.home() / "psvita/b3-ext4/r5/fzgx/config/GFZE01/movie_module/symbols.txt"))
    gr.add_argument("--anchor", type=float, default=0.7)
    gr.add_argument("--margin", type=float, default=0.08)
    gr.add_argument("--out", default=str(OUT / "graph.csv"))
    od = sp.add_parser("order")
    od.add_argument("--range", default="0x170800-0x1A1E80")
    od.add_argument("--map", default=str(OUT / "map_all.csv"))
    od.add_argument("--fz-symbols", default=str(Path.home() / "psvita/b3-ext4/r5/fzgx/config/GFZE01/movie_module/symbols.txt"))
    od.add_argument("--anchor", type=float, default=0.6)
    od.add_argument("--min-sim", type=float, default=0.4)
    od.add_argument("--max-extra", type=int, default=40)
    od.add_argument("--out", default=str(OUT / "order.csv"))
    a = ap.parse_args()
    {"compile": cmd_compile, "map": cmd_map, "graph": cmd_graph, "order": cmd_order}[a.cmd](a)


if __name__ == "__main__":
    main()
