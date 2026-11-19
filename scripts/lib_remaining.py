#!/usr/bin/env python3
"""List the library functions (sdk, libc, cri regions) still in assembly: INCLUDE_ASM lines of C segments and the
functions of asm segments. Prints `addr name segment kind` per function (kind = c or asm); --json FILE writes them."""
import argparse, json, re, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
REGIONS = {"sdk": (0x100218, 0x11B4E8), "libc": (0x11B4E8, 0x12C360), "cri": (0x14E5D0, 0x1A19D0)}
ENTRY = re.compile(r"^\s+- \[0x([0-9A-Fa-f]+), (\w+), ([\w/]+)\]", re.M)
GL = re.compile(r"^glabel (\w+)", re.M)
AD = re.compile(r"/\* \w+ ([0-9A-F]{8}) ")
INC = re.compile(r"^INCLUDE_ASM\(\"([^\"]+)\", (\w+)\);", re.M)

def group_of(a):
    for n, (lo, hi) in REGIONS.items():
        if lo <= a < hi:
            return n

def funcs_in_asm(p):
    out = []
    t = p.read_text()
    starts = [m for m in GL.finditer(t)]
    for k, m in enumerate(starts):
        end = starts[k + 1].start() if k + 1 < len(starts) else len(t)
        mm = AD.search(t, m.end(), end)
        if mm:
            out.append((int(mm.group(1), 16), m.group(1)))
    return out

def remaining(all_regions=False):
    y = (ROOT / "config" / "SLUS_209.98.yaml").read_text()
    res = []
    for m in ENTRY.finditer(y):
        kind, seg = m.group(2), m.group(3)
        if kind == "asm":
            p = ROOT / "asm" / f"{seg}.s"
            if p.exists() and not (ROOT / "src" / f"{seg}.s").exists():  # src/<seg>.s: original assembly, done
                for a, n in funcs_in_asm(p):
                    res.append((a, n, seg, "asm"))
        elif kind == "c":
            p = ROOT / "src" / f"{seg}.c"
            if not p.exists():
                continue
            for d, n in INC.findall(p.read_text()):
                q = ROOT / f"{d}/{n}.s"
                a = None
                if q.exists():
                    mm = AD.search(q.read_text())
                    a = int(mm.group(1), 16) if mm else None
                if a is not None:
                    res.append((a, n, seg, "c"))
    return [r for r in res if all_regions or group_of(r[0])]

if __name__ == "__main__":
    ap = argparse.ArgumentParser()
    ap.add_argument("--json")
    ap.add_argument("--all", action="store_true", help="every region, game code too")
    a = ap.parse_args()
    r = remaining(a.all)
    from collections import Counter
    print(len(r), dict(Counter((group_of(x[0]) or "game", x[3]) for x in r)), file=sys.stderr)
    if a.json:
        Path(a.json).write_text(json.dumps([dict(addr=x[0], name=x[1], seg=x[2], kind=x[3]) for x in r]))
    else:
        for x in r:
            print(f"{x[0]:08X} {x[1]} {x[2]} {x[3]}")
