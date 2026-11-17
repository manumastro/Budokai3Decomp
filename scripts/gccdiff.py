#!/usr/bin/env python3
"""Compiles one C file of the libraries (ee-gcc) and compares each of its C functions with the original.

    gccdiff.py src/sdk/libmtap.c [FUNC ...] [-v] [-q]

The gcc counterpart of fdiff.py: the file is compiled with the ee-gcc build and flags configure.py's GCC_GROUPS give
its path, with NO_INCLUDE_ASM defined, so only the functions written in C are compared. A function's address comes
from its name (func_XXXXXXXX) or from the symbol files listed in the yaml. Prints `OK` or the number of differing
instructions (relocated fields masked); a compiled size other than the original's (splat's `nonmatching` size) is
reported too. -v prints each differing function side by side (original on the right); -q prints only the summary.

Safe to run in parallel (one scratch folder per run under build/gccmatch/). It does not check data, nor the whole
build: ninja does that.
"""

import argparse
import re
import shutil
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import gccmatch  # noqa: E402

ROOT = gccmatch.ROOT
sys.path.insert(0, str(ROOT))
import configure  # noqa: E402


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("src", type=Path)
    ap.add_argument("funcs", nargs="*")
    ap.add_argument("-v", action="store_true")
    ap.add_argument("-q", action="store_true")
    args = ap.parse_args()
    src = args.src.resolve()
    rel = src.relative_to(ROOT.resolve())
    group = configure.gcc_group(rel)
    if group is None:
        sys.exit(f"{rel}: not a gcc path (configure.py GCC_GROUPS); use scripts/fdiff.py")
    version, flags = group
    objs, work = gccmatch.compile_matrix(src, [version], [flags], "gas", defines=["NO_INCLUDE_ASM"],
                                         include_dirs=("include", "src"))
    obj = objs[(version, flags)]
    if not isinstance(obj, Path):
        shutil.rmtree(work, ignore_errors=True)
        sys.exit(obj)
    fns = gccmatch.objects_functions(obj)
    shutil.rmtree(work, ignore_errors=True)
    rom = gccmatch.ROM.read_bytes()
    syms = gccmatch.symbol_addresses()
    sizes = gccmatch.function_sizes()
    ok = bad = 0
    for name, (words, masks) in fns.items():
        if args.funcs and name not in args.funcs:
            continue
        m = re.fullmatch(r"func_([0-9A-F]{8})", name)
        addr = int(m.group(1), 16) if m else syms.get(name)
        if addr is None:
            print(f"{name}: no address (name it func_XXXXXXXX or add it to a symbol file)")
            bad += 1
            continue
        diffs, orig = gccmatch.compare(words, masks, addr, rom)
        size = sizes.get(addr)
        if size is not None and size != 4 * len(words):
            bad += 1
            print(f"{name}: compiled size 0x{4 * len(words):X}, the original is 0x{size:X}")
            if args.v:
                o = list(struct.unpack(f"<{size // 4}I", rom[addr - gccmatch.VRAM:addr - gccmatch.VRAM + size]))
                gccmatch.show(words, o, addr, set(diffs))
            continue
        if diffs:
            bad += 1
            if not args.q:
                print(f"{name}: {len(diffs)} of {len(words)} instructions differ")
            if args.v:
                gccmatch.show(words, orig, addr, set(diffs))
        else:
            ok += 1
            if not args.q:
                print(f"{name}: OK")
    print(f"{args.src} ({version} {flags}): {ok} OK, {bad} differ")
    sys.exit(0 if bad == 0 else 1)


if __name__ == "__main__":
    main()
