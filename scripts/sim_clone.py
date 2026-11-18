#!/usr/bin/env python3
"""Turns the C of a matched sibling into the C of a function still in assembly (scripts/sim_find.py's pairs).

    sim_clone.py [--sim build/sim/siblings.json] [--min 0.95] [-j 8] [--apply] [--out build/sim/clones.json]

For each Metrowerks pair whose instruction tokens have the same length (identical or within --min), the two
functions' original words are walked side by side and every difference is turned into a rename:
  jal / j targets                  callee name of the sibling -> callee name of the function
  %hi/%lo pairs, $gp-relative      the global the sibling's C names -> the global at the function's address
                                   (same offset into the symbol on both sides)
  other immediates                 a literal of the sibling's C (hex or decimal, when it occurs once) -> new value
The sibling's function is copied with those renames and its own name replaced, together with the declarations of
its file that the renamed names need, and checked in the function's own file with scripts/m2c_draft.py's checker
(the file's flags; the compile-error repairs of m2c_fix.py apply). --apply puts every exact match in place of the
INCLUDE_ASM line (the whole build must still be run). Library (gcc) pairs are listed but not cloned.
"""
import argparse
import bisect
import json
import re
import struct
import sys
from multiprocessing import Pool
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import m2c_draft  # noqa: E402

ROM = ROOT / "disc" / "SLUS_209.98.rom"
VRAM = 0x100000
SYMS = None
ADDRS = None
GP = None


def load_syms():
    global SYMS, ADDRS, GP
    text = (ROOT / "build" / "SLUS_209.98.elf.map").read_text()
    m = re.search(r"0x([0-9a-f]+)\s+_gp = ", text)
    GP = int(m.group(1), 16)
    syms = {}
    for a, n in re.findall(r"^\s+0x([0-9a-f]{8,16})\s+([A-Za-z_][\w.]*)$", text, re.M):
        if n.endswith(".NON_MATCHING") or n.startswith("."):
            continue
        syms.setdefault(int(a, 16), n)
    SYMS = syms
    ADDRS = sorted(syms)


def sym_at(addr):
    """(name, offset) of the symbol that holds addr."""
    i = bisect.bisect_right(ADDRS, addr) - 1
    if i < 0:
        return None, 0
    a = ADDRS[i]
    return SYMS[a], addr - a


def words(rom, addr, n):
    off = addr - VRAM
    return list(struct.unpack(f"<{n}I", rom[off:off + 4 * n]))


def sext(v):
    return v - 0x10000 if v & 0x8000 else v


def references(ws, base):
    """{index: ('call', target) | ('addr', address) | ('imm', value)} for each word."""
    out = {}
    hi = {}
    for i, w in enumerate(ws):
        op, rs, rt, imm = w >> 26, (w >> 21) & 31, (w >> 16) & 31, w & 0xFFFF
        if op in (2, 3):
            out[i] = ("call", ((base + 4 * i) & 0xF0000000) | ((w & 0x3FFFFFF) << 2))
        elif op == 0x0F:  # lui
            hi[rt] = imm << 16
            out[i] = ("hi", imm)
        elif op in (0x09, 0x20, 0x21, 0x23, 0x24, 0x25, 0x27, 0x28, 0x29, 0x2B, 0x31, 0x39, 0x37, 0x3F, 0x1E, 0x1F, 0x36, 0x3E):
            if rs == 28:
                out[i] = ("addr", GP + sext(imm))
            elif rs in hi:
                out[i] = ("addr", hi[rs] + sext(imm))
                if op != 0x09:
                    pass
            else:
                out[i] = ("imm", imm)
            if op == 0x09 and rt == rs:
                hi.pop(rs, None)
        elif op in (0x0C, 0x0D, 0x0E, 0x0A, 0x0B, 0x08, 0x19, 0x18):
            out[i] = ("imm", imm)
        if op not in (0x0F,) and rt in hi and op not in (0x2B, 0x29, 0x28, 0x39, 0x3F, 0x1F, 0x3E) and op != 0x09:
            hi.pop(rt, None)
    return out


def literal_variants(v):
    return [f"0x{v:X}", f"0x{v:x}", str(v)]


def function_text(path, name):
    text = (ROOT / path).read_text()
    vis = text
    m = re.search(rf"^[A-Za-z_][^\n;{{}}]*\b{re.escape(name)}\([^;{{}}]*\)\s*\{{", vis, re.M)
    if not m:
        return None, text
    i = vis.index("{", m.start())
    depth = 0
    while i < len(vis):
        if vis[i] == "{":
            depth += 1
        elif vis[i] == "}":
            depth -= 1
            if depth == 0:
                return vis[m.start():i + 1] + "\n", text
        i += 1
    return None, text


def clone(job):
    name, info = job
    rom = ROM.read_bytes()
    if SYMS is None:
        load_syms()
    sfile, sname = info["sibling_file"], info["sibling"]
    t_addr, s_addr = int(info["addr"], 16), int(info["sibling_addr"], 16)
    n = min(info["size"], info["sibling_size"]) // 4
    tw, sw = words(rom, t_addr, info["size"] // 4), words(rom, s_addr, info["sibling_size"] // 4)
    while tw and tw[-1] == 0:
        tw.pop()
    while sw and sw[-1] == 0:
        sw.pop()
    if len(tw) != len(sw):
        return dict(name=name, status="skip", why="different length")
    tr, sr = references(tw, t_addr), references(sw, s_addr)
    ren, lits = {}, {}
    for i in range(len(tw)):
        if tw[i] == sw[i]:
            continue
        a, b = sr.get(i), tr.get(i)
        if not a or not b or a[0] != b[0]:
            continue
        if a[0] == "call":
            sn, so = sym_at(a[1])
            tn, to = sym_at(b[1])
            if sn and tn and so == 0 and to == 0 and sn != tn:
                ren[sn] = tn
        elif a[0] == "addr":
            sn, so = sym_at(a[1])
            tn, to = sym_at(b[1])
            if sn and tn and sn != tn:
                ren[sn] = tn
                if so != to:
                    lits[so] = to
        elif a[0] == "imm":
            lits[a[1]] = b[1]
    ftext, sfull = function_text(sfile, sname)
    if not ftext:
        return dict(name=name, status="skip", why="sibling text not found")
    used = set(re.findall(r"[A-Za-z_]\w*", ftext))
    # the sibling file's declarations of the names the function uses (prototypes, externs, typedef'd helpers)
    decls = []
    for line in m2c_draft.strip_if0(sfull.splitlines()):
        s = line.strip()
        if re.match(r"^(extern\b|[A-Za-z_][\w \*]*\b\w+\([^;{}]*\)\s*;)", s) and s.endswith(";"):
            ids = set(re.findall(r"[A-Za-z_]\w*", s))
            if ids & used and sname not in ids:
                decls.append(s)
    # typedefs (struct types) of the sibling's file that the function uses
    alltypes = []
    for m in re.finditer(r"^typedef\s+(?:struct|union)\s*\w*\s*\{.*?^\}\s*(\w+)\s*;|^typedef\s[^;{]*?\b(\w+)\s*;"
                         r"|^(?:struct|union)\s+(\w+)\s*\{.*?^\}\s*;", "\n".join(m2c_draft.strip_if0(sfull.splitlines())), re.M | re.S):
        alltypes.append((m.group(1) or m.group(2) or m.group(3), m.group(0), m.start()))
    # the types the function and its declarations use, and the types those use (in the file's order)
    need = set(used) | {w for d in decls for w in re.findall(r"[A-Za-z_]\w*", d)}
    chosen = set()
    while True:
        more = [t for t in alltypes if t[0] in need and t[0] not in chosen]
        if not more:
            break
        for tn, txt, _ in more:
            chosen.add(tn)
            need |= set(re.findall(r"[A-Za-z_]\w*", txt))
    types = [txt for tn, txt, _ in sorted(alltypes, key=lambda t: t[2]) if tn in chosen]
    def rename(text):
        for old, new in sorted(ren.items(), key=lambda kv: -len(kv[0])):
            text = re.sub(rf"\b{re.escape(old)}\b", new, text)
        return re.sub(rf"\b{re.escape(sname)}\b", name, text)
    items = [rename(t) for t in types] + [rename(d) for d in dict.fromkeys(decls)]
    func = rename(ftext)
    for old, new in lits.items():
        for v in literal_variants(old):
            pat = rf"(?<![\w.]){re.escape(v)}(?![\w.])"
            if len(re.findall(pat, func)) == 1:
                func = re.sub(pat, f"0x{new:X}", func, count=1)
                break
    body = "\n".join(items) + "\n" + func
    tfile = None
    for p in sorted((ROOT / "src").rglob("*.c")):
        if re.search(rf'^INCLUDE_ASM\(\s*"[^"]+"\s*,\s*{re.escape(name)}\s*\);', p.read_text(), re.M):
            tfile = p.relative_to(ROOT).as_posix()
            break
    if tfile is None:
        return dict(name=name, status="noc", why="not an INCLUDE_ASM of a C file (still an assembly segment)", c=body)
    # what the target file already declares above the function stays as it is: drop those lines of the copy
    ttext = (ROOT / tfile).read_text()
    mpos = re.search(rf'^INCLUDE_ASM\(\s*"[^"]+"\s*,\s*{re.escape(name)}\s*\);', ttext, re.M).start()
    above = re.sub(r"^INCLUDE_(?:ASM|RODATA)\(.*$", "", m2c_draft.visible(ttext[:mpos]), flags=re.M)
    keep = [l for l in re.findall(r'^#include\s+"[^"]+"', sfull, re.M) if l not in ttext]
    for it in items:
        tm = re.search(r"(\w+)\s*;\s*$", it) if it.startswith("typedef") else None
        dm = None if tm else m2c_draft.DECL_SYM_RE.search(it)
        sym = tm.group(1) if tm else (dm.group(1) if dm else None)
        if sym and re.search(rf"\b{re.escape(sym)}\b", above):
            continue  # the target file has its own declaration of it
        keep.append(it)
    body = "\n".join(keep) + "\n" + func
    r = m2c_draft.draft(ROOT / tfile, name, c_override=body)
    return dict(name=name, file=tfile, status=r["status"], diff=r["diff"], why=r["detail"][:120], c=r["c"] or body,
                renames=len(ren), literals=len(lits))


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--sim", default="build/sim/siblings.json")
    ap.add_argument("--min", type=float, default=0.95)
    ap.add_argument("-j", type=int, default=8)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--out", default="build/sim/clones.json")
    a = ap.parse_args()
    sim = json.loads((ROOT / a.sim).read_text())
    jobs = [(n, i) for n, i in sim.items() if i["part"] == "mw" and i["same_length"] and i["score"] >= a.min
            and i["sibling_file"] and n != i["sibling"]]
    print(f"{len(jobs)} pairs", file=sys.stderr)
    res = []
    with Pool(a.j) as pool:
        for r in pool.imap_unordered(clone, jobs):
            res.append(r)
            print(r["name"], r["status"], r.get("diff", ""), r.get("why", "")[:80], file=sys.stderr)
    (ROOT / a.out).write_text(json.dumps(res, indent=1))
    from collections import Counter
    print(Counter(r["status"] for r in res))
    if a.apply:
        for r in sorted(res, key=lambda r: r["name"]):
            if r["status"] == "match":
                if not m2c_draft.asm_info(r["name"], (ROOT / r["file"]).read_text()):
                    continue
                # checked again in the file as it is now (an earlier clone may have added clashing declarations)
                again = clone((r["name"], sim[r["name"]]))
                if again["status"] != "match":
                    print("skipped", r["name"], again["status"], again.get("why", "")[:80])
                    continue
                add, ctext = m2c_draft.split_draft(again["c"], r["name"])
                old = m2c_draft.apply_function(ROOT / r["file"], r["name"], add, ctext)
                import subprocess
                out = subprocess.run([sys.executable, "scripts/fdiff.py", r["file"]], capture_output=True, text=True,
                                     cwd=ROOT).stdout
                if f"{r['name']}: OK" in out and " 0 differ" in out:
                    print("applied", r["name"], r["file"])
                else:
                    (ROOT / r["file"]).write_text(old)
                    print("undone", r["name"], out.strip().splitlines()[-1:] if out.strip() else "")


if __name__ == "__main__":
    main()
