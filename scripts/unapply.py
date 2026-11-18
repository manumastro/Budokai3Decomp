#!/usr/bin/env python3
"""Puts a function back to INCLUDE_ASM: removes its C (and the declarations added just above it, up to the
previous INCLUDE_ASM line or function end) and writes the INCLUDE_ASM line again.

    unapply.py src/sys/cnv_sys.c func_002A1330 asm/nonmatchings/sys/cnv_sys
"""
import re
import sys
from pathlib import Path


def unapply(path, name, folder):
    p = Path(path)
    lines = p.read_text().split("\n")
    sig = next(i for i, l in enumerate(lines) if re.match(rf"^[A-Za-z_][^;{{}}]*\b{re.escape(name)}\(", l)
               and not l.rstrip().endswith(";"))
    depth, end = 0, None
    for i in range(sig, len(lines)):
        depth += lines[i].count("{") - lines[i].count("}")
        if depth == 0 and "}" in lines[i]:
            end = i
            break
    start = sig
    while start > 0 and not (lines[start - 1].startswith("INCLUDE_ASM(") or lines[start - 1].rstrip() == "}"):
        start -= 1
    new = lines[:start] + [f'INCLUDE_ASM("{folder}", {name});'] + lines[end + 1:]
    p.write_text("\n".join(new))


if __name__ == "__main__":
    unapply(*sys.argv[1:4])
