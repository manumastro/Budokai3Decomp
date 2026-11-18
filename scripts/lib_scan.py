#!/usr/bin/env python3
"""Name-agnostic scan: compile library sources with an ee-gcc and find each compiled function in the ELF.

  lib_scan.py --version 2.96 --flags "-O2 -G0" --range 0x1221A8-0x12C360 -I build/nl/stub -I build/nl/libc110/include
              FILE.c [FILE.c ...]

For every function of every object, searches the ROM range for a word sequence equal to it (relocation words
masked) and prints `file:func  addr  bad/words`; exact matches are `0/N`. Only unique, full-length matches count."""
import argparse, struct, sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import gccmatch as g

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("files", nargs="+", type=Path)
    ap.add_argument("--version", default="2.96")
    ap.add_argument("--flags", default="-O2 -G0")
    ap.add_argument("--range", default="0x1221A8-0x12C360")
    ap.add_argument("-I", dest="inc", action="append", default=[])
    ap.add_argument("-D", dest="defs", action="append", default=[])
    ap.add_argument("--min", type=int, default=3, help="minimum function words")
    ap.add_argument("--no-own-include", action="store_true", help="do not put our include/ first")
    a = ap.parse_args()
    lo, hi = (int(x, 16) for x in a.range.split("-"))
    rom = g.ROM.read_bytes()
    nw = (hi - lo) // 4
    words = struct.unpack(f"<{nw}I", rom[lo - g.VRAM:hi - g.VRAM])
    idx = defaultdict(list)
    for i, w in enumerate(words):
        idx[w].append(i)
    inc = a.inc if a.no_own_include else ["include", *a.inc]
    for f in a.files:
        src = f.resolve()
        objs, work = g.compile_matrix(src, [a.version], [a.flags], "gas", a.defs, include_dirs=inc)
        obj = objs[(a.version, a.flags)]
        if not isinstance(obj, Path):
            print(f"{f}: {obj}")
            continue
        for name, (w, masks) in g.objects_functions(obj).items():
            if len(w) < a.min:
                continue
            k = next((i for i in range(len(w)) if not masks.get(i, 0)), None)
            if k is None:
                continue
            hits = []
            for p in idx.get(w[k], []):
                s = p - k
                if s < 0 or s + len(w) > nw:
                    continue
                if all(((w[j] ^ words[s + j]) & ~masks.get(j, 0) & 0xFFFFFFFF) == 0 for j in range(len(w))):
                    hits.append(lo + 4 * s)
            print(f"{f.name}:{name}  {len(w)}w  " + (" ".join(f"{h:#x}" for h in hits) if hits else "-"))
        import shutil; shutil.rmtree(work, ignore_errors=True)

main()
