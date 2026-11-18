#!/usr/bin/env python3
"""Whole-object verification of library sources compiled with an ee-gcc against the ROM.

  lib_apply.py --version 2.96 --flags "-O2 -G0" --range 0x1221A8-0x12C360 -I DIR ... FILE.c ...

For each source: compile, take the whole .text of the object (relocation words masked), find it in the ROM
range (candidate starts come from the first unmasked word) and print
`file  MATCH|no  words  addresses  data sections`. MATCH means the whole .text is found byte for byte."""
import argparse
import shutil
import struct
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import gccmatch as g
from elftools.elf.descriptions import describe_reloc_type
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection


def text_of(obj):
    with open(obj, "rb") as f:
        elf = ELFFile(f)
        ti = None
        text = b""
        secs = {}
        for i, s in enumerate(elf.iter_sections()):
            secs[s.name] = s["sh_size"]
            if s.name == ".text":
                ti, text = i, s.data()
        if ti is None:
            return None, {}, {}
        masks = {}
        for s in elf.iter_sections():
            if isinstance(s, RelocationSection) and s["sh_info"] == ti:
                for r in s.iter_relocations():
                    t = describe_reloc_type(r["r_info_type"], elf)
                    k = r["r_offset"] // 4
                    masks[k] = masks.get(k, 0) | g.RELOC_MASK.get(t, 0xFFFFFFFF)
        return struct.unpack(f"<{len(text) // 4}I", text), masks, secs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("files", nargs="+", type=Path)
    ap.add_argument("--version", default="2.96")
    ap.add_argument("--flags", default="-O2 -G0")
    ap.add_argument("--range", default="0x1221A8-0x12C360")
    ap.add_argument("-I", dest="inc", action="append", default=[])
    ap.add_argument("-D", dest="defs", action="append", default=[])
    ap.add_argument("--min", type=int, default=3)
    a = ap.parse_args()
    lo, hi = (int(x, 16) for x in a.range.split("-"))
    rom = g.ROM.read_bytes()
    nw = (hi - lo) // 4
    words = struct.unpack(f"<{nw}I", rom[lo - g.VRAM:hi - g.VRAM])
    idx = defaultdict(list)
    for i, w in enumerate(words):
        idx[w].append(i)
    inc = ["include", *a.inc]
    for f in a.files:
        objs, work = g.compile_matrix(f.resolve(), [a.version], [a.flags], "gas", a.defs, include_dirs=inc)
        obj = objs[(a.version, a.flags)]
        if not isinstance(obj, Path):
            errs = [l for l in str(obj).splitlines() if "error" in l]
            print(f"{f.name}\tERR\t{(errs[0] if errs else str(obj)[-80:])[-120:]}")
            continue
        w, masks, secs = text_of(obj)
        data = {k: v for k, v in secs.items() if k in (".data", ".bss", ".sbss", ".sdata", ".rodata") and v}
        if not w or len(w) < a.min:
            print(f"{f.name}\tSHORT\t{0 if not w else len(w)}w\t{data}")
            shutil.rmtree(work, ignore_errors=True)
            continue
        k = next((i for i in range(len(w)) if not masks.get(i, 0)), None)
        hits = []
        if k is not None:
            for p in idx.get(w[k], []):
                s = p - k
                if s < 0 or s + len(w) > nw:
                    continue
                if all(((w[j] ^ words[s + j]) & ~masks.get(j, 0) & 0xFFFFFFFF) == 0 for j in range(len(w))):
                    hits.append(lo + 4 * s)
        print(f"{f.name}\t{'MATCH' if hits else 'no'}\t{len(w)}w\t" + " ".join(f"{h:#x}" for h in hits) + f"\t{data}")
        shutil.rmtree(work, ignore_errors=True)


main()
