#!/usr/bin/env python3
"""Turns one assembly subsegment of the yaml into a C file whose functions are all INCLUDE_ASM.

    asm2c.py battle/btl_main          (then: configure.py && ninja)

The yaml line `[0xADDR, asm, battle/btl_main]` becomes `[0xADDR, c, battle/btl_main]` and src/battle/btl_main.c is
written with one INCLUDE_ASM per function, in address order. splat then writes each function's assembly to
asm/nonmatchings/battle/btl_main/<name>.s, which mwccgap splices into the compiled object. Decompiling a function
means replacing its INCLUDE_ASM line with C. Run from the repository's root, after a split (configure.py).
"""

import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
YAML = ROOT / "config" / "SLUS_209.98.yaml"


def fix_pad(name):
    """After the split: drop the tail pad when the last function's own file already holds those words."""
    src = ROOT / "src" / f"{name}.c"
    text = src.read_text()
    m = re.search(r"^INCLUDE_PAD\((\d+)\); /\* asm2c tail ([0-9A-F]{8}) \*/\n", text, re.M)
    if not m:
        return
    last = re.findall(r'^INCLUDE_ASM\("([^"]+)", (\w+)\);', text[:m.start()], re.M)
    if not last:
        return
    d, f = last[-1]
    p = ROOT / d / f"{f}.s"
    if p.exists() and f" {m.group(2)} " in p.read_text():
        src.write_text(text[:m.start()] + text[m.end():])


def main():
    if len(sys.argv) == 3 and sys.argv[1] == "--fix-pad":
        return fix_pad(sys.argv[2])
    if len(sys.argv) != 2:
        sys.exit(__doc__)
    name = sys.argv[1]
    asm = ROOT / "asm" / f"{name}.s"
    src = ROOT / "src" / f"{name}.c"
    if src.exists():
        sys.exit(f"{src.relative_to(ROOT)} exists already")
    text = YAML.read_text()
    pat = re.compile(rf"^(\s+- \[0x[0-9A-Fa-f]+, )asm(, {re.escape(name)}\])", re.M)
    if not pat.search(text):
        sys.exit(f"no asm subsegment named {name} in the yaml")
    # A function referred to only from a table that the split took for a jump table starts with a `jlabel` (at the
    # start of the line, unlike the jump-table labels inside functions).
    funcs = re.findall(r"^[gj]label (\S+)", asm.read_text(), re.M)
    lines = ['#include "common.h"', ""]
    lines += [f'INCLUDE_ASM("asm/nonmatchings/{name}", {f});' for f in funcs]
    # words after the last function (alignment nops) are not in any function's file: pad the object like the original
    # (unless the split puts them in the last function's file: `asm2c.py --fix-pad NAME` after the split checks)
    tail = asm.read_text().rsplit("\nendlabel ", 1)[-1].splitlines()[1:]
    words = [m.group(1) for t in tail for m in [re.match(r"\s+/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/", t)] if m]
    if words:
        lines.append(f"INCLUDE_PAD({4 * len(words)}); /* asm2c tail {words[0]} */")
    src.parent.mkdir(parents=True, exist_ok=True)
    src.write_text("\n".join(lines) + "\n")
    YAML.write_text(pat.sub(r"\1c\2", text))
    print(f"{src.relative_to(ROOT)}: {len(funcs)} functions as INCLUDE_ASM")


if __name__ == "__main__":
    main()
