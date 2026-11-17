#!/usr/bin/env python3
"""Lists the functions of C files that are still INCLUDE_ASM, with their size in bytes, in file order.

    todo.py src/battle/btb_draw.c [...]        one line per function: size, name, [calls to other functions]
    todo.py --sort src/battle/btb_draw.c       smallest first
"""
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sort = "--sort" in sys.argv
for arg in [a for a in sys.argv[1:] if not a.startswith("--")]:
    path = Path(arg)
    area, stem = path.parts[-2], path.stem
    rows = []
    for name in re.findall(r'^INCLUDE_ASM\("[^"]+",\s*(\w+)\)', path.read_text(), re.M):
        s = ROOT / f"asm/nonmatchings/{area}/{stem}/{name}.s"
        if not s.exists():
            continue
        txt = s.read_text()
        m = re.search(r"nonmatching \w+, (0x[0-9A-Fa-f]+)", txt)
        size = int(m.group(1), 16)
        calls = len(re.findall(r"\bjal\b", txt))
        rows.append((size, name, calls))
    if sort:
        rows.sort()
    print(f"# {path}: {len(rows)} functions left, {sum(r[0] for r in rows)} bytes")
    for size, name, calls in rows:
        print(f"{size:6d} {name} jal={calls}")
