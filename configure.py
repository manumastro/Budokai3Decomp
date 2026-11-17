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
MWCC_FLAGS = "-O4,p -sdatathreshold 8 -Iinclude -Isrc"
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


def include_asm_files(src):
    """The assembly files a C file pulls in with INCLUDE_ASM (implicit inputs of its object)."""
    text = (ROOT / src).read_text()
    return [f"{folder}/{name}.s" for folder, name in re.findall(r'INCLUDE_ASM\(\s*"([^"]+)"\s*,\s*(\w+)\s*\)', text)]


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
        # C through mwccgap: it compiles with mwccps2 (run by wibo) and splices in the INCLUDE_ASM functions.
        "rule cc",
        f"  command = {py} tools/mwccgap/mwccgap.py --use-wibo --wibo-path={WIBO} --mwcc-path={MWCC} "
        f"--as-path={BINUTILS}as --as-march=r5900 --as-mabi=eabi --macro-inc-path=include/macro.inc "
        f"$in $out {MWCC_FLAGS}",
        "  description = CC $in",
        "",
        # C through ee-gcc (the libraries): compile to assembly, assemble with gas and the prelude, retag the ABI.
        "rule gcc",
        f"  command = {py} scripts/eegcc/eegcc.py $gcc_version $gcc_flags -Iinclude -Isrc -S $in -o $out.s && "
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
    headers = " ".join(str(p.relative_to(ROOT)) for p in sorted((ROOT / "include").rglob("*.h")))
    for src in [p for p in sources("src", ".c") if p in linked]:
        obj = Path("build") / src.with_suffix(".o")
        deps = " ".join([headers, *include_asm_files(src)])
        group = gcc_group(src)
        if group is None:
            out.append(f"build {obj}: cc {src} | {deps}")
        else:
            out.append(f"build {obj}: gcc {src} | {deps} include/gcc_prelude.inc include/macro.inc")
            out.append(f"  gcc_version = {group[0]}")
            out.append(f"  gcc_flags = {group[1]}")
        objs.append(obj)
    scripts = [f"build/{NAME}.ld", "build/undefined_funcs_auto.txt", "build/undefined_syms_auto.txt",
               "config/linker_script_extra.ld"]
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
