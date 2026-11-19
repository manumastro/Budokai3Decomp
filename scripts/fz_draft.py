#!/usr/bin/env python3
"""Drafts for our remaining library functions from another game's C of the same library (F-Zero GX's Sofdec).

    fz_draft.py [--map build/fz/map_all.csv] [--min-score 0.45] [--top 3] [--funcs F ...] [-j 6]

For each function of ours still INCLUDE_ASM in the map (scripts/fz_map.py map --all), and each of its --top fzgx
candidates: compiles the fzgx file with ee-gcc, aligns its instructions with ours (difflib on instruction classes),
and reads every relocated symbol of the fzgx code off the aligned instruction of ours (jal targets; %lo addresses
with the lui that pairs with them, minus the fzgx addend), majority vote per symbol. The fzgx file, preprocessed
with its own headers, becomes a snippet: those symbols renamed to ours (func_XXXXXXXX / D_XXXXXXXX or the build's
name at that address), the function renamed to ours. scripts/lib_try.py scores it. Snippets in build/fz/drafts/
FUNC__FZFN.c, results in build/fz/drafts.csv (function, fz function, status, differing instructions, words).
"""
import argparse
import csv
import difflib
import os
import re
import struct
import subprocess
import sys
from collections import Counter, defaultdict
from multiprocessing import Pool
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
OUT = ROOT / "build" / "fz"
FZ = ROOT / "build" / "ext" / "fzgxm"
PY = sys.executable

import fz_map  # noqa: E402


def fz_inc():
    t = (ROOT / "build" / "ext" / "fz_inc.txt").read_text().replace("-I ", "-I").split()
    return [x[2:] for x in t if x.startswith("-I")]


def compile_fz(path):
    """{name: (words, [(index, type, symbol, addend)])} of the fzgx file compiled by ee-gcc 2.96 -O2 -G0."""
    import gccmatch as g
    from elftools.elf.elffile import ELFFile
    from elftools.elf.relocation import RelocationSection
    from elftools.elf.descriptions import describe_reloc_type
    objs, work = g.compile_matrix(Path(path), ["2.96"], ["-O2 -G0"], "gas",
                                  ["PERMUTER", "M2CTX", "SKIP_ASM", "NON_MATCHING"], include_dirs=fz_inc())
    obj = objs[("2.96", "-O2 -G0")]
    if not isinstance(obj, Path):
        return None
    out = {}
    with open(obj, "rb") as f:
        elf = ELFFile(f)
        tidx = next(i for i, s in enumerate(elf.iter_sections()) if s.name == ".text")
        text = elf.get_section(tidx).data()
        symtab = elf.get_section_by_name(".symtab")
        rel = []
        for s in elf.iter_sections():
            if isinstance(s, RelocationSection) and s["sh_info"] == tidx:
                for r in s.iter_relocations():
                    sym = symtab.get_symbol(r["r_info_sym"])
                    rel.append((r["r_offset"], describe_reloc_type(r["r_info_type"], elf), sym.name))
        funcs = sorted((s["st_value"], s["st_size"], s.name) for s in symtab.iter_symbols()
                       if s["st_info"]["type"] == "STT_FUNC" and s["st_shndx"] == tidx)
        for k, (st, size, name) in enumerate(funcs):
            if not size:
                size = (funcs[k + 1][0] if k + 1 < len(funcs) else len(text)) - st
            words = list(struct.unpack(f"<{size // 4}I", text[st:st + size]))
            rl = []
            for off, t, sname in rel:
                if st <= off < st + size:
                    i = (off - st) // 4
                    rl.append((i, t, sname))
            out[name] = (words, rl)
    import shutil
    shutil.rmtree(work, ignore_errors=True)
    return out


def sext(v):
    return v - 0x10000 if v & 0x8000 else v


def our_lo_address(words, j, addr0):
    """The address an instruction with a 16-bit low part at word j forms with the lui of its base register."""
    w = words[j]
    base = (w >> 21) & 31
    for k in range(j - 1, max(-1, j - 40), -1):
        x = words[k]
        if x >> 26 == 0x0F and ((x >> 16) & 31) == base:
            return ((x & 0xFFFF) << 16) + sext(w & 0xFFFF)
    return None


def symbol_map(fz_words, fz_rel, our_words, our_addr):
    """{fzgx symbol: our address} read off the aligned instructions."""
    a = [fz_map.tok(w) for w in fz_words]
    b = [fz_map.tok(w) for w in our_words]
    sm = difflib.SequenceMatcher(None, a, b, autojunk=False)
    pos = {}
    for t, i1, i2, j1, j2 in sm.get_opcodes():
        if t == "equal" or (t == "replace" and i2 - i1 == j2 - j1):
            for k in range(i2 - i1):
                pos[i1 + k] = j1 + k
    hi = {}
    for i, t, s in fz_rel:
        if t == "R_MIPS_HI16":
            hi.setdefault(i, s)
    votes = defaultdict(Counter)
    for i, t, s in fz_rel:
        j = pos.get(i)
        if j is None or not s or s.startswith("."):
            continue
        ow, fw = our_words[j], fz_words[i]
        if t == "R_MIPS_26":
            if ow >> 26 in (2, 3):
                votes[s][((our_addr + 4 * j) & 0xF0000000) | ((ow & 0x3FFFFFF) << 2)] += 1
        elif t == "R_MIPS_LO16":
            if (ow >> 26) != (fw >> 26):
                continue
            full = our_lo_address(our_words, j, our_addr)
            if full is None:
                continue
            # the fzgx addend: its lui's high part + this low part
            fz_full = our_lo_address(fz_words, i, 0) or sext(fw & 0xFFFF)
            votes[s][full - fz_full] += 1
    # struct offsets: aligned loads/stores of the same kind off a non-stack base register
    relocated = {i for i, t, s in fz_rel}
    offs = defaultdict(Counter)
    for i, j in pos.items():
        fw, ow = fz_words[i], our_words[j]
        if fw >> 26 == ow >> 26 and 0x20 <= fw >> 26 <= 0x3F and i not in relocated \
                and (fw >> 21) & 31 != 29 and (ow >> 21) & 31 != 29:
            offs[sext(fw & 0xFFFF)][sext(ow & 0xFFFF)] += 1
    offmap = {x: c.most_common(1)[0][0] for x, c in offs.items()}
    return {s: c.most_common(1)[0][0] for s, c in votes.items()}, offmap


PAD = re.compile(r"^(\s*(?:unsigned char|signed char|char|u8|s8)\s+[A-Za-z]\w*?_?(?:0x)?([0-9A-Fa-f]{1,5})\s*\[\s*)"
                 r"(0x[0-9A-Fa-f]+|\d+)(\s*\]\s*;)", re.M)


def fix_pads(src, offmap):
    """Pads named after their start offset (`u8 pad_1AEC[0x20];`): resized so the field after the pad sits at the
    offset our code uses (offmap: their offset -> ours, read off the aligned loads/stores). Returns (src, changes)."""
    out, shift, changes = [], 0, 0
    for line in src.splitlines(keepends=True):
        if re.match(r"\s*(typedef\s+)?(struct|union)\b.*\{\s*$", line) or line.lstrip().startswith("}"):
            shift = 0
        m = PAD.match(line)
        if m:
            start, n = int(m.group(2), 16), int(m.group(3), 0)
            end = start + n
            if end in offmap and offmap[end] != end + shift:
                new_n = n + (offmap[end] - end) - shift
                if new_n > 0:
                    line = m.group(1) + hex(new_n) + m.group(4) + line[m.end():]
                    shift = offmap[end] - end
                    changes += 1
        out.append(line)
    return "".join(out), changes


_NAMES = None


def names_at():
    global _NAMES
    if _NAMES is None:
        from elftools.elf.elffile import ELFFile
        _NAMES = {}
        with open(ROOT / "build" / "SLUS_209.98.elf", "rb") as f:
            for s in ELFFile(f).get_section_by_name(".symtab").iter_symbols():
                if s.name and s["st_info"]["bind"] != "STB_LOCAL" and s["st_shndx"] != "SHN_UNDEF" \
                        and not s.name.startswith(("_gp", ".")) and "." not in s.name:
                    cur = _NAMES.get(s["st_value"])
                    if cur is None or (cur.startswith(("func_", "D_")) and not s.name.startswith(("func_", "D_"))):
                        _NAMES[s["st_value"]] = s.name
    return _NAMES


def preprocess(path):
    inc = [f"-I{ROOT / d}" for d in fz_inc()]
    r = subprocess.run(["cpp", "-P", "-nostdinc", *inc, "-DPERMUTER", "-DM2CTX", "-DSKIP_ASM", "-DNON_MATCHING",
                        "-D__attribute__(x)=", str(path)], capture_output=True, text=True)
    return r.stdout if r.returncode == 0 else None


def make_snippet(fz_file, fz_fn, our_name, smap, fz_fn_names, offmap=None):
    src = preprocess(fz_file)
    if src is None:
        return None
    pads = 0
    if offmap:
        src, pads = fix_pads(src, offmap)
    names = names_at()
    ren = {}
    for s, addr in smap.items():
        if s == fz_fn:
            continue
        n = names.get(addr)
        if n is None:
            n = (f"func_{addr:08X}" if s in fz_fn_names else f"D_{addr:08X}")
        ren[s] = n
    ren[fz_fn] = our_name
    # one name of ours for two fzgx symbols would declare it twice: keep the first
    seen = {}
    for s in sorted(ren):
        if ren[s] in seen.values() and s != fz_fn:
            del ren[s]
        else:
            seen[s] = ren[s]
    if ren:
        pat = re.compile(r"\b(" + "|".join(map(re.escape, sorted(ren, key=len, reverse=True))) + r")\b")
        src = pat.sub(lambda m: ren[m.group(1)], src)
    # the snippet ends with the function: drop what follows it (other functions after it in the file)
    m = re.search(rf"^[^\n;{{}}]*\b{our_name}\s*\([^;{{}}]*\)\s*\{{", src, re.M)
    if not m:
        return None
    depth, i = 0, m.end() - 1
    while i < len(src):
        if src[i] == "{":
            depth += 1
        elif src[i] == "}":
            depth -= 1
            if depth == 0:
                break
        i += 1
    src = re.sub(r"^\s*#\s*pragma.*\n", "", src[:i + 1], flags=re.M) + "\n"
    # GameCube `long` is 32 bits, ee-gcc's is 64: s32/u32/size_t typedefs and plain longs become int
    src = re.sub(r"(?<!long )\blong\b(?! long)", "int", src)
    src = re.sub(r"\b__cntlzw\b", "__builtin_clz", src)
    head = f"/* draft from fzgx {Path(fz_file).name} ({fz_fn}); symbols read off the aligned code: " + \
           ", ".join(f"{k}={v}" for k, v in sorted(ren.items()) if k != fz_fn) + " */\n"
    return head + src


LINE = re.compile(r"^\s+[0-9A-F]{8} (\S+(?:\t\S+)?)?\s+(?:!= )?(\S+(?:\t\S+)?)?\s*$")


def aligned_diff(out):
    """Differing instructions of lib_try's side-by-side listing, the two columns aligned (sizes may differ)."""
    a, b = [], []
    for ln in out.splitlines():
        m = LINE.match(ln)
        if m:
            x, y = (m.group(1) or "").strip(), (m.group(2) or "").strip()
            if x:
                a.append(re.sub(r"\s+", " ", x))
            if y:
                b.append(re.sub(r"\s+", " ", y))
    if not a and not b:
        return -1
    sm = difflib.SequenceMatcher(None, a, b, autojunk=False)
    return max(len(a), len(b)) - sum(bl.size for bl in sm.get_matching_blocks())


def lib_try(name, path):
    """(status, differing instructions aligned, lib_try's text)."""
    r = subprocess.run([PY, str(ROOT / "scripts/lib_try.py"), name, str(path)], capture_output=True, text=True,
                       cwd=ROOT, timeout=300)
    out = r.stdout
    if r.returncode == 0 and "MATCH" in out:
        return "match", 0, out
    if "COMPILE ERROR" in out:
        return "cerr", -1, out
    st = "other"
    for key in ("DIFF", "SIZE", "UNDEFINED", "DATA", "OTHERS"):
        if re.search(rf"^{key}\b", out, re.M):
            st = key.lower()
            break
    return st, aligned_diff(out) if st in ("diff", "size") else (0 if st != "other" else -1), out


def job(args):
    """All the candidates of one function of ours, one after the other (lib_try's temporary file is per function)."""
    our_addr, our_name, cands = args
    import gccmatch as g
    rom = g.ROM.read_bytes()
    size = fz_map_size(our_addr)
    ow = list(struct.unpack(f"<{size // 4}I", rom[our_addr - g.VRAM:our_addr - g.VRAM + size]))
    rows = []
    for fz_fn, fz_file, why in cands:
        row = dict(function=our_name, fz=fz_fn, how=why, status="", diff=-1, words=len(ow), mapped=0, pads=0, path="")
        comp = compile_fz(fz_file)
        if not comp or fz_fn not in comp:
            row["status"] = "fzcompile"
            rows.append(row)
            continue
        fw, frel = comp[fz_fn]
        smap, offmap = symbol_map(fw, frel, ow, our_addr)
        fz_fn_names = {s for _, t, s in frel if t == "R_MIPS_26"}
        d = OUT / "drafts"
        d.mkdir(parents=True, exist_ok=True)
        best = None
        for use_pads in (False, True):
            snip = make_snippet(fz_file, fz_fn, our_name, smap, fz_fn_names, offmap if use_pads else None)
            if snip is None:
                continue
            p = d / f"{our_name}__{fz_fn}{'_pads' if use_pads else ''}.c"
            p.write_text(snip)
            st, diff, _ = lib_try(our_name, p)
            r = dict(row, status=st, diff=diff, mapped=len(smap), pads=int(use_pads), path=str(p.relative_to(ROOT)))
            if best is None or (0 <= r["diff"] < best["diff"]) or best["diff"] < 0:
                best = r
        rows.append(best or dict(row, status="nosnippet"))
    return rows

_SIZES = None


def fz_map_size(addr):
    global _SIZES
    if _SIZES is None:
        _SIZES = {a: 4 * len(w) for a, n, w, left in fz_map.ours(0x100000, 0x200000, False)}
    return _SIZES[addr]


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--map", default=str(OUT / "map_all.csv"), help="fz_map.py map --all output (content candidates)")
    ap.add_argument("--order", default=str(OUT / "order.csv"), help="fz_map.py order output (link-order pairs)")
    ap.add_argument("--min-score", type=float, default=0.45)
    ap.add_argument("--top", type=int, default=2, help="content candidates per function besides the order pair")
    ap.add_argument("--funcs", nargs="*")
    ap.add_argument("-j", type=int, default=6)
    ap.add_argument("--out", default=str(OUT / "drafts.csv"))
    a = ap.parse_args()
    objs = __import__("json").loads((OUT / "objs.json").read_text())
    order = {}
    if Path(a.order).exists():
        order = {r["name"]: r["fz"] for r in csv.DictReader(open(a.order)) if r["fz"]}
    jobs = []
    for r in csv.DictReader(open(a.map)):
        if r["left"] != "1" or (a.funcs and r["name"] not in a.funcs):
            continue
        cands = []
        if order.get(r["name"]) in objs:
            cands.append((order[r["name"]], "order"))
        content = [(r["fz"], float(r["score"]))] + [(x.split(":")[0], float(x.split(":")[1])) for x in r["alts"].split()]
        for fz_fn, sc in content[:a.top]:
            if fz_fn and sc >= a.min_score and fz_fn in objs and fz_fn not in [c[0] for c in cands]:
                cands.append((fz_fn, f"content{sc:.2f}"))
        if cands:
            jobs.append((int(r["addr"], 16), r["name"], [(f, objs[f]["file"], why) for f, why in cands]))
    print(f"{len(jobs)} functions, {sum(len(j[2]) for j in jobs)} drafts to try", file=sys.stderr)
    rows = []
    fields = ["function", "fz", "how", "status", "diff", "words", "mapped", "pads", "path"]
    with Pool(a.j) as pool, open(a.out, "w", newline="") as fh:
        w = csv.DictWriter(fh, fieldnames=fields)
        w.writeheader()
        for k, rs in enumerate(pool.imap_unordered(job, jobs)):
            for r in rs:
                rows.append(r)
                w.writerow(r)
                print(f"{k + 1}/{len(jobs)} {r['function']} {r['fz']} ({r['how']}) {r['status']} {r['diff']}/{r['words']}",
                      file=sys.stderr, flush=True)
            fh.flush()
    best = {}
    for r in rows:
        if r["diff"] >= 0 and (r["function"] not in best or r["diff"] < best[r["function"]]["diff"]):
            best[r["function"]] = r
    near = sorted((r for r in best.values() if r["diff"] <= 20), key=lambda r: r["diff"])
    print(f"{len(rows)} drafts; {len(best)} functions with a compiled draft; within 20 differing instructions: "
          f"{len(near)}")
    for r in near:
        print(f"  {r['function']} <- {r['fz']} ({r['how']}): {r['status']} {r['diff']} of {r['words']}  {r['path']}")


if __name__ == "__main__":
    main()
