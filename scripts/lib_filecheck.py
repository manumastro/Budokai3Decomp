#!/usr/bin/env python3
"""Compiles library C files the way the build does (INCLUDE_ASM blocks in) and compares every function with the original.

    lib_filecheck.py src/cri/adx_0014EF28.c [...]

gccdiff.py and func_insert.py compile with NO_INCLUDE_ASM (the C functions alone). ee-gcc 2.96 can compile a function
differently once the assembly blocks are in the same output (seen: `lw $3,D_x($4)` became lui/addiu/addu/lw when the
INCLUDE_ASM line before it was replaced with C), so a batch can pass every per-function check and still fail the
whole build. This prints, per file, the functions whose words or size differ in the build's own compile.
"""
import re
import shutil
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import gccmatch as G  # noqa: E402

ROOT = G.ROOT
sys.path.insert(0, str(ROOT))
import configure  # noqa: E402


def check(rel):
    version, flags = configure.gcc_group(rel)
    inc = ("include", "src", *configure.gcc_extra_includes(rel).replace("-I", "").split())
    objs, work = G.compile_matrix(ROOT / rel, [version], [flags], "gas", defines=[], include_dirs=inc,
                                  keep=f"build/gccmatch/fc_{Path(rel).stem}")
    obj = objs[(version, flags)]
    if not isinstance(obj, Path):
        shutil.rmtree(work, ignore_errors=True)
        return [f"compile: {obj}"]
    fns = G.objects_functions(obj)
    shutil.rmtree(work, ignore_errors=True)
    syms = G.symbol_addresses()
    rom = G.ROM.read_bytes()
    text = (ROOT / rel).read_text()
    asm_names = set(re.findall(r'INCLUDE_ASM\("[^"]+", (\w+)\)', text))
    bad = []
    for name, (words, masks) in fns.items():
        if name in asm_names:
            continue
        m = re.fullmatch(r"func_([0-9A-F]{8})", name)
        addr = int(m.group(1), 16) if m else syms.get(name)
        if addr is None:
            continue
        diffs, _ = G.compare(words, masks, addr, rom)
        if diffs:
            bad.append(f"{name}: {len(diffs)} words differ")
    return bad


def main():
    rc = 0
    for rel in sys.argv[1:]:
        bad = check(rel)
        print(f"{rel}: {'OK' if not bad else '; '.join(bad)}")
        rc |= bool(bad)
    sys.exit(rc)


if __name__ == "__main__":
    main()
