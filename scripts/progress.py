#!/usr/bin/env python3
"""Counts the functions written in C (matching: the build is byte-identical) against all, per part of the code.

    progress.py              prints the table
    progress.py --write      also rewrites the table in docs/progress.md

Run after a successful ninja (the counts come from the objects in build/src). A function counts as matched when
it is defined in a C file's object and is not an INCLUDE_ASM (mwccgap marks those with a NAME.NON_MATCHING
symbol). A segment whose original source was assembly (libkernl's syscall stubs) is a hand-written src/<seg>.s
that the build assembles in place of splat's asm/<seg>.s: its functions count as done too ("original assembly").
Everything else in asm/ counts as not yet decompiled.
"""

import datetime
import glob
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
NM = ROOT / "tools" / "binutils" / "mips-ps2-decompals-nm"
PARTS = [
    ("Sony SDK + C library (gcc)", 0x100000, 0x12C360),
    ("Metrowerks, linked before CRI (am* layer, main)", 0x12C360, 0x14E5D0),
    ("CRI ADX / Sofdec, libmtap (gcc)", 0x14E5D0, 0x1A1E80),
    ("Metrowerks, linked after CRI (the game)", 0x1A1E80, 0x310980),
]
DOC = ROOT / "docs" / "progress.md"
BEGIN, END = "<!-- progress table -->", "<!-- end of progress table -->"


def hand_asm(path):
    """True when asm/<seg>.s is replaced by a hand-written src/<seg>.s (code whose original source is assembly)."""
    rel = Path(path).relative_to(ROOT / "asm")
    return (ROOT / "src" / rel).exists()


def asm_functions(hand=False):
    """{address: (name, size)} of every function still in assembly (whole files and INCLUDE_ASM files); with
    hand=True, those of the segments whose original source is assembly instead."""
    out = {}
    for path in glob.glob(str(ROOT / "asm/**/*.s"), recursive=True):
        if "/data/" in path or hand_asm(path) != hand:
            continue
        name = None
        for line in open(path):
            m = re.match(r"nonmatching (\S+), (0x[0-9A-Fa-f]+)", line)
            if m:
                name, size = m.group(1), int(m.group(2), 16)
                continue
            m = re.match(r"\s+/\* \w+ ([0-9A-F]{8}) ", line)
            if m and name:
                out.setdefault(int(m.group(1), 16), (name, size))
                name = None
    return out


def c_functions():
    """{address: (name, size)} of the functions defined in C, from the linked map."""
    out = {}
    nonmatching = set()
    defined = {}
    for obj in glob.glob(str(ROOT / "build/src/**/*.o"), recursive=True):
        r = subprocess.run([str(NM), "-S", obj], capture_output=True, text=True)
        for line in r.stdout.splitlines():
            parts = line.split()
            if len(parts) == 4 and parts[2] in "Tt":
                if parts[3].endswith(".NON_MATCHING"):
                    nonmatching.add(parts[3][:-len(".NON_MATCHING")])
                else:
                    defined[parts[3]] = int(parts[1], 16)
    mapfile = (ROOT / "build" / "SLUS_209.98.elf.map").read_text()
    for name, size in defined.items():
        if name in nonmatching:
            continue
        m = re.search(rf"^\s+0x([0-9a-f]{{8}})\s+{re.escape(name)}$", mapfile, re.M)
        if m:
            out[int(m.group(1), 16)] = (name, size)
    return out


def table():
    asm = asm_functions()
    c = {**c_functions(), **asm_functions(hand=True)}  # C, or the original's own assembly
    rows = []
    tot = [0, 0, 0, 0]
    for label, lo, hi in PARTS:
        n_all = len({a for a in list(asm) + list(c) if lo <= a < hi})
        n_c = sum(1 for a in c if lo <= a < hi)
        b_all = sum(s for a, (_, s) in {**asm, **c}.items() if lo <= a < hi)
        b_c = sum(s for a, (_, s) in c.items() if lo <= a < hi)
        rows.append((label, n_c, n_all, b_c, b_all))
        for i, v in enumerate((n_c, n_all, b_c, b_all)):
            tot[i] += v
    rows.append(("All", *tot))
    out = ["| Part | Functions done | All | % | Bytes done | All bytes | % |", "|---|---|---|---|---|---|---|"]
    for label, n_c, n_all, b_c, b_all in rows:
        out.append(f"| {label} | {n_c:,} | {n_all:,} | {100 * n_c / max(n_all, 1):.2f} | {b_c:,} | {b_all:,} | "
                   f"{100 * b_c / max(b_all, 1):.2f} |")
    return "\n".join(out)


def main():
    t = table()
    print(t)
    if "--write" in sys.argv:
        text = DOC.read_text()
        start, end = text.index(BEGIN) + len(BEGIN), text.index(END)
        stamp = f"\n\nMeasured {datetime.date.today().isoformat()} (scripts/progress.py).\n\n"
        DOC.write_text(text[:start] + stamp + t + "\n\n" + text[end:])


if __name__ == "__main__":
    main()
