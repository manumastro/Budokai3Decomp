#!/usr/bin/env python3
"""Compiles a C file with Metrowerks compilers and compares its functions with the original executable.

    mwmatch.py FILE.c FUNC=ADDR [FUNC=ADDR ...] [--versions V1,V2|all] [--flags "-O2,p" --flags "-O4,p" ...] [-v]

For each compiler version (tools/mwcps2/<version>/) and each set of flags it prints how many instructions of each
function differ from the original (relocated fields masked: jal targets, %hi/%lo/%gp_rel immediates). `0` is a match.
-v prints the first differing function side by side. Needs the tools from scripts/get_tools.py (--all-compilers for
the version matrix) and disc/SLUS_209.98.rom from configure.py.
"""

import argparse
import os
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

ROOT = Path(__file__).resolve().parent.parent
TOOLS = ROOT / "tools"
ROM = ROOT / "disc" / "SLUS_209.98.rom"
VRAM = 0x100000
OBJDUMP = TOOLS / "binutils" / "mips-ps2-decompals-objdump"
DEFAULT_FLAGS = ["-O2", "-O2,p", "-O3,p", "-O4,p", "-O4,s"]


def compile_c(version, flags, src, out):
    cmd = [str(TOOLS / "wibo"), str(TOOLS / "mwcps2" / version / "mwccps2.exe"), "-c", *flags.split(),
           "-Iinclude", str(src), "-o", str(out)]
    env = dict(os.environ, MWCIncludes=str(ROOT / "include"))
    r = subprocess.run(cmd, cwd=ROOT, env=env, capture_output=True, text=True)
    if r.returncode != 0 or not out.exists():
        return r.stdout + r.stderr
    return None


def functions(obj):
    """{name: (words, set of word indices with a relocation)} for each function symbol in .text."""
    # mwccps2 puts every function in a .text section of its own, each with its own .rel.text.
    with open(obj, "rb") as f:
        elf = ELFFile(f)
        texts, relocs = {}, {}
        for i, s in enumerate(elf.iter_sections()):
            if s.name == ".text":
                texts[i] = s.data()
            elif isinstance(s, RelocationSection) and s.name in (".rel.text", ".rela.text"):
                relocs.setdefault(s["sh_info"], set()).update(r["r_offset"] // 4 for r in s.iter_relocations())
        out = {}
        symtab = elf.get_section_by_name(".symtab")
        for sym in symtab.iter_symbols():
            idx = sym["st_shndx"]
            if sym["st_info"]["type"] == "STT_FUNC" and idx in texts:
                start, size = sym["st_value"], sym["st_size"]
                words = list(struct.unpack(f"<{size // 4}I", texts[idx][start:start + size]))
                rel = relocs.get(idx, set())
                out[sym.name] = (words, {i - start // 4 for i in rel if start // 4 <= i < (start + size) // 4})
        return out


def mask(word, relocated):
    op = word >> 26
    if op in (2, 3):                      # j / jal
        return word & 0xFC000000
    if relocated:
        return word & 0xFFFF0000
    return word


def compare(mine, relocs, addr, rom):
    off = addr - VRAM
    orig = list(struct.unpack(f"<{len(mine)}I", rom[off:off + 4 * len(mine)]))
    diffs = []
    for i, (a, b) in enumerate(zip(mine, orig)):
        if mask(a, i in relocs) != mask(b, i in relocs):
            diffs.append(i)
    return diffs, orig


def show(mine, orig, addr):
    with tempfile.TemporaryDirectory() as d:
        lines = []
        for words, name in ((mine, "mine"), (orig, "orig")):
            p = Path(d) / name
            p.write_bytes(struct.pack(f"<{len(words)}I", *words))
            r = subprocess.run([str(OBJDUMP), "-D", "-b", "binary", "-m", "mips:5900", "-EL",
                                f"--adjust-vma={addr:#x}", str(p)], capture_output=True, text=True)
            lines.append([l.split("\t", 2)[-1] for l in r.stdout.splitlines() if l.startswith("  ")])
        for i, (a, b) in enumerate(zip(*lines)):
            mark = "  " if a == b else "!="
            print(f"  {addr + 4 * i:08X} {a:40} {mark} {b}")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("src", type=Path)
    ap.add_argument("funcs", nargs="+", help="NAME=0xADDR")
    ap.add_argument("--versions", default="all")
    ap.add_argument("--flags", action="append")
    ap.add_argument("-v", action="store_true")
    args = ap.parse_args()
    rom = ROM.read_bytes()
    targets = [(n, int(a, 16)) for n, a in (f.split("=") for f in args.funcs)]
    versions = sorted(p.name for p in (TOOLS / "mwcps2").iterdir()) if args.versions == "all" \
        else args.versions.split(",")
    flagsets = args.flags or DEFAULT_FLAGS
    shown = False
    with tempfile.TemporaryDirectory() as d:
        for v in versions:
            for flags in flagsets:
                obj = Path(d) / f"{v}.o"
                if obj.exists():
                    obj.unlink()
                err = compile_c(v, flags, args.src.resolve(), obj)
                if err:
                    print(f"{v:18} {flags:28} compile error: {err.strip().splitlines()[-1] if err.strip() else '?'}")
                    continue
                fns = functions(obj)
                res = []
                for name, addr in targets:
                    if name not in fns:
                        res.append(f"{name}: missing")
                        continue
                    words, relocs = fns[name]
                    diffs, orig = compare(words, relocs, addr, rom)
                    res.append(f"{name}: {len(diffs)}/{len(words)}")
                    if args.v and not shown and diffs:
                        print(f"--- {v} {flags} {name}")
                        show(words, orig, addr)
                        shown = True
                print(f"{v:18} {flags:28} " + "  ".join(res))


if __name__ == "__main__":
    main()
