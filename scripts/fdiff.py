#!/usr/bin/env python3
"""Compiles one C file of the Metrowerks code and compares each of its C functions with the original.

    fdiff.py src/battle/btl_main.c [FUNC ...] [-v] [-q]

The file is compiled on its own with the compiler and the flags configure.py gives it (MWCC_VERSION, and
mwcc_flags(): MWCC_FLAGS for the game, AM_FLAGS for the am* library);
INCLUDE_ASM lines are empty for the compiler, so only the functions written in C are compared. A function's
address comes from its name (func_XXXXXXXX) or from the symbol files listed in the yaml. Prints `OK` or the
number of differing instructions (relocated fields masked: jal targets, %hi/%lo/%gp_rel immediates); -v prints
each differing function side by side (original on the right). -q prints only the summary line.

Safe to run in parallel (it writes only to a temporary folder). It does not check the data the C file would
define, nor that the whole build still matches: ninja does that.
"""

import argparse
import re
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import mwmatch  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent


def game_compiler(src):
    """The compiler version and the flags configure.py gives this C file (its FILE_FLAGS table)."""
    sys.path.insert(0, str(ROOT))
    import configure  # noqa: E402
    rel = src.resolve().relative_to(ROOT)
    return configure.MWCC_VERSION, configure.mwcc_flags(rel)


def symbol_addresses():
    out = {}
    yaml = (ROOT / "config" / "SLUS_209.98.yaml").read_text()
    for path in re.findall(r"^\s+- (config/\S+\.txt)$", yaml, re.M):
        for line in (ROOT / path).read_text().splitlines():
            m = re.match(r"(\w+) = 0x([0-9A-Fa-f]+);", line)
            if m:
                out[m.group(1)] = int(m.group(2), 16)
    return out


def data_sections(obj):
    """The non-empty allocated sections of the object other than .text (and Metrowerks' .mwcats)."""
    from elftools.elf.elffile import ELFFile
    out = []
    with open(obj, "rb") as f:
        for s in ELFFile(f).iter_sections():
            if s["sh_flags"] & 2 and s["sh_size"] and s.name not in (".text", ".mwcats"):
                out.append(f"{s.name} 0x{s['sh_size']:X}")
    return out


def function_starts():
    """Addresses of every function still in assembly (split files and INCLUDE_ASM files)."""
    starts = set()
    for path in (ROOT / "asm").rglob("*.s"):
        if "data" in path.parts[len(ROOT.parts) + 1:len(ROOT.parts) + 2]:
            continue
        prev = None
        for line in open(path):
            if line.startswith("glabel ") or line.startswith("jlabel "):
                prev = True
                continue
            if prev:
                m = re.match(r"\s+/\* \w+ ([0-9A-F]{8}) ", line)
                if m:
                    starts.add(int(m.group(1), 16))
                    prev = None
    return sorted(starts)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("src", type=Path)
    ap.add_argument("funcs", nargs="*")
    ap.add_argument("-v", action="store_true")
    ap.add_argument("-q", action="store_true")
    args = ap.parse_args()
    version, flags = game_compiler(args.src)
    rom = mwmatch.ROM.read_bytes()
    syms = symbol_addresses()
    with tempfile.TemporaryDirectory() as d:
        obj = Path(d) / "out.o"
        err = mwmatch.compile_c(version, flags, args.src.resolve(), obj)
        if err:
            print(err)
            sys.exit(1)
        fns = mwmatch.functions(obj)
        data = data_sections(obj)
    if data:
        # A string literal, a float constant, a switch table or a static variable: the object would add data the
        # original keeps in the assembly data files, and the linked image would shift (docs/decomp_guide.md).
        print(f"{args.src}: defines data ({', '.join(data)}); use the D_XXXXXXXX symbols instead")
        sys.exit(1)
    starts = function_starts()
    ok = bad = 0
    for name, (words, relocs) in fns.items():
        if args.funcs and name not in args.funcs:
            continue
        m = re.fullmatch(r"func_([0-9A-F]{8})", name)
        addr = int(m.group(1), 16) if m else syms.get(name)
        if addr is None:
            print(f"{name}: no address (name it func_XXXXXXXX or add it to a symbol file)")
            bad += 1
            continue
        diffs, orig = mwmatch.compare(words, relocs, addr, rom)
        # The original runs up to the next function; past the compiled length it may hold only padding.
        nxt = next((a for a in starts if a > addr), None)
        if nxt is not None:
            tail = rom[addr - 0x100000 + 4 * len(words):nxt - 0x100000]
            if any(tail) or len(tail) >= 16:
                print(f"{name}: compiled size 0x{4 * len(words):X}, the original is 0x{nxt - addr:X} long")
                bad += 1
                continue
        if diffs:
            bad += 1
            if not args.q:
                print(f"{name}: {len(diffs)} of {len(words)} instructions differ")
            if args.v:
                mwmatch.show(words, orig, addr)
        else:
            ok += 1
            if not args.q:
                print(f"{name}: OK")
    print(f"{args.src}: {ok} OK, {bad} differ")


if __name__ == "__main__":
    main()
