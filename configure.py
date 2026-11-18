#!/usr/bin/env python3
"""Extracts the executable from the disc image, splits it with splat and writes build.ninja.

    python3 scripts/get_tools.py              (once)
    .venv/bin/python configure.py [--iso DISC.iso]
    .venv/bin/ninja

The build rebuilds the flat image (the ELF's one loaded segment) from the split, wraps it in an ELF the way
mwldps2 laid it out, and checks both against the original: build/SLUS_209.98.ok means byte-identical.
"""

import argparse
import hashlib
import os
import re
import shlex
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent
DISC = ROOT / "disc"
ISO_DIR = ROOT / "iso"
NAME = "SLUS_209.98"
YAML = f"config/{NAME}.yaml"

ELF_MD5 = "a0d2708790227c28cd770a05b3d8af28"   # SLUS_209.98 of the USA release (PCSX2 CRC 2A4B60EB)
IMAGE_OFFSET, IMAGE_SIZE = 0x80, 0x370200

BINUTILS = "tools/binutils/mips-ps2-decompals-"
AS_FLAGS = "-EL -march=r5900 -mabi=eabi -G0 -no-pad-sections -Iinclude"

# The game's own code: Metrowerks CodeWarrior for PS2 (see docs/plan.md, "Compiler"). Used once a C file is linked.
MWCC_VERSION = "3.0b52-030722"
MWCC = f"tools/mwcps2/{MWCC_VERSION}/mwccps2.exe"
# -str readonly: the game's string literals, short ones included, are in .rodata (without it Metrowerks puts strings of
# 8 bytes or less in .sdata and reaches them through $gp).
MWCC_FLAGS = "-O4,p -sdatathreshold 8 -str readonly -Iinclude -Isrc"
# Dimps' am* library (the Metrowerks code linked before CRI, and amMc.c / amCdFs.c in the game part) was built at
# -O1,p: the same compiler, without instruction scheduling, tail calls or common subexpressions; `,p` (speed)
# keeps the nops that align branch targets (docs/plan.md, "Compiler").
AM_FLAGS = "-O1,p -sdatathreshold 8 -str readonly -Iinclude -Isrc"
# Per-file flags: the first entry whose path prefix matches a C file wins; other files get MWCC_FLAGS.
# scripts/fdiff.py reads the same table through mwcc_flags().
FILE_FLAGS = [
    ("src/sys/unk_1", AM_FLAGS),
    ("src/sys/am", AM_FLAGS),
    ("src/sys/script.c", AM_FLAGS),
]
WIBO = "tools/wibo"

# The libraries: Sony's ee-gcc builds (docs/plan.md, "The libraries' compilers"), per path under src/. Keys are a
# folder (with its slash) or a file stem (matching STEM.c, STEM/... and STEM_*.c); the first match wins. ee-gcc writes
# assembly (scripts/eegcc/eegcc.py runs it: Docker or wibo), the modern gas assembles it with include/gcc_prelude.inc
# (Sony's assembler's quirks) as o64, and scripts/set_eabi64.py sets the ABI tag the link expects.
GCC_GROUPS = [
    ("src/sdk/libm", "2.96", "-O2 -G0"),          # newlib's libm, libgcc and libc: ee-gcc 2.96
    ("src/sdk/libgcc", "2.96", "-O2 -G0"),
    ("src/sdk/libc", "2.96", "-O2 -G0"),
    ("src/sdk/", "2.9-991111-01", "-O2 -G0"),     # Sony's libraries (libmtap too): the 2.9-ee builds tie
    ("src/cri/", "2.96", "-O2 -G0"),              # CRI ADX and Sofdec
]
GCC_AS_FLAGS = "-EL -march=r5900 -mabi=o64 -no-pad-sections -mno-pdr -G0 -Iinclude"


def gcc_group(src):
    """(version, flags) of the ee-gcc build for a C file, or None for Metrowerks (the game)."""
    path = str(src)
    for key, version, flags in GCC_GROUPS:
        if key.endswith("/"):
            if path.startswith(key):
                return version, flags
        elif path == key + ".c" or path.startswith(key + "/") or path.startswith(key + "_"):
            return version, flags
    return None


def gcc_extra_includes(src):
    """-I flags of a library file taken from a public decompilation: its headers are under include/ext/<repo>/ in the
    repository's own layout, and the file's first lines list the folders to search (`ext-include: repo:dir,dir`)."""
    head = (ROOT / src).read_text(errors="replace")[:800]
    flags = []
    for repo, dirs in re.findall(r"ext-include:\s*(\w+):(\S+)", head):
        flags += [f"-Iinclude/ext/{repo}/{d}" for d in dirs.split(",")]
    return " ".join(flags)


def include_asm_files(src):
    """The assembly files a C file pulls in with INCLUDE_ASM (implicit inputs of its object)."""
    text = (ROOT / src).read_text()
    return [f"{folder}/{name}.s" for folder, name in re.findall(r'INCLUDE_ASM\(\s*"([^"]+)"\s*,\s*(\w+)\s*\)', text)]


def mwcc_flags(src):
    """The compiler flags of one C file (a path relative to the repository's root)."""
    src = Path(src).as_posix()
    return next((flags for prefix, flags in FILE_FLAGS if src.startswith(prefix)), MWCC_FLAGS)


def run(cmd, **kwargs):
    print("$", " ".join(shlex.quote(str(c)) for c in cmd))
    subprocess.run([str(c) for c in cmd], check=True, cwd=ROOT, **kwargs)


def md5(path):
    return hashlib.md5(path.read_bytes()).hexdigest()


def extract(iso):
    elf = DISC / NAME
    if not elf.exists():
        if iso is None:
            found = sorted(p for p in ISO_DIR.glob("*") if p.suffix.lower() == ".iso") if ISO_DIR.exists() else []
            if not found:
                sys.exit(f"put the disc image in iso/ or pass --iso, or copy {NAME} into disc/")
            iso = found[0]
        DISC.mkdir(exist_ok=True)
        tool = shutil.which("bsdtar") or shutil.which("7z")
        if tool is None:
            sys.exit("needs bsdtar (libarchive) or 7z to read the disc image")
        if tool.endswith("bsdtar"):
            run([tool, "-xf", iso, "-C", DISC, NAME])
        else:
            run([tool, "x", "-y", f"-o{DISC}", iso, NAME], stdout=subprocess.DEVNULL)
        elf.chmod(0o644)
    if md5(elf) != ELF_MD5:
        sys.exit(f"{elf.relative_to(ROOT)} is not the expected executable (md5 {md5(elf)}, expected {ELF_MD5})")
    image = elf.read_bytes()[IMAGE_OFFSET:IMAGE_OFFSET + IMAGE_SIZE]
    (DISC / f"{NAME}.rom").write_bytes(image)


def split():
    env = dict(os.environ, PATH=f"{ROOT / 'tools' / 'bin'}{os.pathsep}{os.environ['PATH']}")
    run([sys.executable, "-m", "splat", "split", YAML], env=env, stdout=subprocess.DEVNULL)
    local_branch_targets()


def local_branch_targets():
    """Gives each jump-table label a function also branches to a local twin, and points the branches at the twin.

    A jump-table label (`jlabel`) is global, because the table in .rodata refers to it from another object. A branch
    to a global symbol leaves an R_MIPS_PC16 relocation in the object, and mwccgap keeps such a symbol in the
    assembler's section index instead of the function's .text section, so the link fails ("relocation truncated to
    fit"). A branch to a local label is resolved by the assembler: same bytes, no relocation.
    """
    for path in (ROOT / "asm" / "nonmatchings").rglob("*.s"):
        text = path.read_text()
        if ".section .rodata" in text:
            # Data that splat moved into the function (a jump table, a string): mwccgap's preprocessor does not take
            # the "nonmatching <symbol>" line splat writes before it (the line before the function has a size).
            stripped = re.sub(r"^nonmatching \w+\n", "", text, flags=re.M)
            if stripped != text:
                path.write_text(stripped)
                text = stripped
        labels = re.findall(r"^\s*jlabel (\.L\w+)$", text, re.M)
        if not labels:
            continue
        new = text
        for label in labels:
            branch = re.compile(rf"^(\s*/\*.*\*/\s+b\w*\s+(?:\S+,\s*)*){re.escape(label)}$", re.M)
            if not branch.search(new):
                continue
            twin = label.replace(".L", ".Lb_", 1)
            new = branch.sub(rf"\g<1>{twin}", new)
            new = re.sub(rf"^(\s*jlabel {re.escape(label)})$", rf"\1\n{twin}:", new, flags=re.M)
        if new != text:
            path.write_text(new)


def sources(top, suffix):
    found = []
    for path in sorted((ROOT / top).rglob(f"*{suffix}")):
        rel = path.relative_to(ROOT)
        if "nonmatchings" in rel.parts:
            continue
        found.append(rel)
    return found


def linked_c_files():
    text = (ROOT / YAML).read_text()
    return {Path("src") / f"{name}.c" for name in re.findall(r"\[0x[0-9A-Fa-f]+, c, ([\w/]+)\]", text)}


def write_c_labels(linked):
    """build/c_labels.ld: the address of every code label that the INCLUDE_ASM functions of the linked C files
    leave without a global definition (include/macro_cc.inc): their jump-table labels (.L0014A900, local there),
    their alternative entries (alabel, not defined there), and the labels that a hand-written function branches to
    inside another function. The addresses are the original ones, which holds since the build is byte-identical."""
    labels = {}
    for src in linked:
        folder = ROOT / "asm" / "nonmatchings" / src.relative_to("src").with_suffix("")
        for path in folder.glob("*.s") if folder.is_dir() else []:
            text = path.read_text()
            defined = set(re.findall(r"^\s*(\.L[0-9A-F]{8}):", text, re.M))
            for name in re.findall(r"^\s*jlabel (\.L[0-9A-F]{8})$", text, re.M):
                labels[name] = int(name[2:], 16)
            for name in set(re.findall(r"[ ,](\.L[0-9A-F]{8})$", text, re.M)) - defined:
                labels[name] = int(name[2:], 16)
            for name, addr in re.findall(r"^\s*alabel (\S+)\n\s+/\* \w+ ([0-9A-F]{8}) ", text, re.M):
                labels[name] = int(addr, 16)
    lines = ["/* Generated by configure.py (write_c_labels). */"]
    lines += [f'"{name}" = 0x{addr:08X};' for name, addr in sorted(labels.items())]
    # The library functions that scripts/lib_port.py named: C files of the game still call them func_XXXXXXXX.
    names = ROOT / "config" / "symbols" / "lib_names.txt"
    for name, addr in re.findall(r"^(\w+) = 0x([0-9A-F]{8}); // type:func", names.read_text() if names.exists() else "",
                                 re.M):
        lines.append(f"func_{addr} = 0x{addr};")
    (ROOT / "build").mkdir(exist_ok=True)
    (ROOT / "build" / "c_labels.ld").write_text("\n".join(lines) + "\n")


def write_ninja():
    py = sys.executable
    out = [
        f"as = {BINUTILS}as",
        f"ld = {BINUTILS}ld",
        f"objcopy = {BINUTILS}objcopy",
        f"as_flags = {AS_FLAGS}",
        "",
        "rule as",
        "  command = $as $as_flags $in -o $out",
        "  description = AS $in",
        "",
        # splat's `bin` subsegments: the bytes as they are, in the section the linker script expects.
        "rule bin",
        "  command = printf '.section .data, \"wa\"\\n.incbin \"%s\"\\n' $in > $out.s && $as $as_flags $out.s -o $out",
        "  description = BIN $in",
        "",
        # C through mwccgap: it compiles with mwccps2 (run by wibo) and splices in the INCLUDE_ASM functions;
        # fix_jlabels.py then puts the jump-table labels of INCLUDE_ASM functions in their function's section.
        "rule cc",
        f"  command = {py} tools/mwccgap/mwccgap.py --use-wibo --wibo-path={WIBO} --mwcc-path={MWCC} "
        f"--as-path={BINUTILS}as --as-march=r5900 --as-mabi=eabi --macro-inc-path=include/macro_cc.inc "
        f"$in $out $mwcc_flags",
        "  description = CC $in",
        "",
        # C through ee-gcc (the libraries): compile to assembly, assemble with gas and the prelude, retag the ABI.
        "rule gcc",
        f"  command = {py} scripts/eegcc/eegcc.py $gcc_version $gcc_flags -Iinclude -Isrc $gcc_inc -S $in -o $out.s && "
        f"$as {GCC_AS_FLAGS} include/gcc_prelude.inc $out.s -o $out && {py} scripts/set_eabi64.py $out",
        "  description = GCC $in",
        "",
        "rule ld",
        "  command = $ld -EL $scripts -Map $out.map -o $out",
        "  description = LD $out",
        "",
        "rule rom",
        "  command = $objcopy -O binary --gap-fill=0x00 $in $out",
        "  description = OBJCOPY $out",
        "",
        "rule elf",
        f"  command = {py} scripts/mkelf.py $in $out",
        "  description = MKELF $out",
        "",
        "rule check",
        "  command = cmp build/SLUS_209.98.rom disc/SLUS_209.98.rom && cmp build/SLUS_209.98 disc/SLUS_209.98 "
        "&& touch $out",
        "  description = CHECK $out",
        "",
    ]
    objs = []
    for src in sources("asm", ".s"):
        obj = Path("build") / src.with_suffix(".o")
        out.append(f"build {obj}: as {src} | include/macro.inc")
        objs.append(obj)
    for src in sources("assets", ".bin"):
        obj = Path("build") / src.with_suffix(".o")
        out.append(f"build {obj}: bin {src}")
        objs.append(obj)
    linked = linked_c_files()
    headers = " ".join(str(h) for h in sources("include", ".h"))
    for src in [p for p in sources("src", ".c") if p in linked]:
        obj = Path("build") / src.with_suffix(".o")
        deps = " ".join([headers, *include_asm_files(src)])
        group = gcc_group(src)
        if group is None:
            out.append(f"build {obj}: cc {src} | {deps} include/macro_cc.inc")
            out.append(f"  mwcc_flags = {mwcc_flags(src)}")
        else:
            out.append(f"build {obj}: gcc {src} | {deps} include/gcc_prelude.inc include/macro.inc")
            out.append(f"  gcc_version = {group[0]}")
            out.append(f"  gcc_flags = {group[1]}")
            out.append(f"  gcc_inc = {gcc_extra_includes(src)}")
        objs.append(obj)
    write_c_labels(linked)
    scripts = [f"build/{NAME}.ld", "build/undefined_funcs_auto.txt", "build/undefined_syms_auto.txt",
               "build/c_labels.ld", "config/linker_script_extra.ld"]
    if (ROOT / "config" / "port_syms.ld").exists():
        scripts.append("config/port_syms.ld")  # symbols of functions taken from other decompilations
    out += [
        f"build build/{NAME}.elf: ld | {' '.join(map(str, objs))} {' '.join(scripts)}",
        f"  scripts = {' '.join('-T ' + s for s in scripts)}",
        f"build build/{NAME}.rom: rom build/{NAME}.elf",
        f"build build/{NAME}: elf build/{NAME}.rom | scripts/mkelf.py",
        f"build build/{NAME}.ok: check build/{NAME}.rom build/{NAME} | disc/{NAME}.rom disc/{NAME}",
        f"default build/{NAME}.ok",
        "",
    ]
    (ROOT / "build.ninja").write_text("\n".join(out))


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--iso", type=Path, help="the disc image (default: the .iso in iso/)")
    ap.add_argument("--no-split", action="store_true", help="only rewrite build.ninja")
    args = ap.parse_args()
    if not args.no_split:
        extract(args.iso)
        split()
    write_ninja()


if __name__ == "__main__":
    main()
