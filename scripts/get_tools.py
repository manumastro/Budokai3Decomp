#!/usr/bin/env python3
"""Downloads the build tools into tools/ (git-ignored). Run it once, from the repository's root:

    python3 scripts/get_tools.py [--all-compilers]

- binutils-mips-ps2-decompals (assembler, linker, objcopy), with the mips-linux-gnu-* aliases splat calls;
- wibo, which runs the Windows-only Metrowerks compiler on Linux and macOS;
- Metrowerks CodeWarrior for PS2 (mwccps2.exe / mwldps2.exe) from decomp.me's compiler archive: the version the game
  was built with (see docs/plan.md, "Compiler"), or every archived version with --all-compilers (for comparisons);
- mwccgap (lets a C file pull in assembly for the functions not decompiled yet).
"""

import io
import os
import platform
import shutil
import stat
import subprocess
import sys
import tarfile
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
TOOLS = ROOT / "tools"

BINUTILS_URL = "https://github.com/decompals/binutils-mips-ps2-decompals/releases/download/v0.10/" \
               "binutils-mips-ps2-decompals-{}.tar.gz"
WIBO_URL = "https://github.com/decompals/wibo/releases/download/1.2.0/{}"
COMPILERS_URL = "https://github.com/decompme/compilers/releases/download/compilers/mwcps2-{}.tar.gz"
MWCCGAP_REPO = "https://github.com/mkst/mwccgap.git"
MWCCGAP_COMMIT = "147598b36b198f267e80adbe04dd5804d070dbb3"

# Builds that are only in decomp.me's combined archive, under this folder name.
COMBINED_URL = "https://github.com/decompme/compilers/releases/download/compilers/ps2_compilers.tar.xz"
COMBINED = {"3.0b22-020926"}

# The compiler of the game (docs/plan.md, "Compiler"): the 3.0bXX builds tie on every function matched so far.
GAME_COMPILERS = ["3.0b52-030722"]
ALL_COMPILERS = [
    "2.3.3-000906", "2.4-001213", "3.0-011126", "3.0.1-020123", "3.0.3-020716",
    "3.0b22-020926", "3.0b38-030307", "3.0b50-030527", "3.0b52-030722",
    "3.0.1b44-030325", "3.0.1b51-030512", "3.0.1b74-030811", "3.0.1b75-030916", "3.0.1b87-031208",
    "3.0.1b95-040309", "3.0.1b103-040528", "3.0.1b119-040914", "3.0.1b145-050209",
]


# tarfile's extraction filter, where this Python has it (3.12, and the 3.8-3.11 security releases).
SAFE = {"filter": "data"} if hasattr(tarfile, "data_filter") else {}


def host():
    system, machine = platform.system(), platform.machine().lower()
    if system == "Darwin":
        # wibo's macOS build is x86_64 and runs under Rosetta on Apple Silicon.
        return "macos-arm64", "wibo-macos"
    if system == "Linux" and machine in ("x86_64", "amd64"):
        return "linux-x86-64", "wibo-x86_64"
    sys.exit(f"no prebuilt tools for {system} {machine}: use a Linux x86-64 machine or container")


def fetch(url):
    print("fetch", url)
    with urllib.request.urlopen(url) as r:
        return r.read()


def make_executable(path):
    path.chmod(path.stat().st_mode | stat.S_IXUSR | stat.S_IXGRP | stat.S_IXOTH)


def get_binutils(flavor):
    dest = TOOLS / "binutils"
    if (dest / "mips-ps2-decompals-as").exists():
        return
    dest.mkdir(parents=True, exist_ok=True)
    with tarfile.open(fileobj=io.BytesIO(fetch(BINUTILS_URL.format(flavor)))) as t:
        t.extractall(dest, **SAFE)
    for p in dest.iterdir():
        make_executable(p)
    # splat runs mips-linux-gnu-* tools by name.
    bindir = TOOLS / "bin"
    bindir.mkdir(exist_ok=True)
    for tool in ("as", "ld", "objcopy", "objdump", "readelf", "nm", "strip"):
        link = bindir / f"mips-linux-gnu-{tool}"
        if not link.exists():
            link.symlink_to(Path("..") / "binutils" / f"mips-ps2-decompals-{tool}")


def get_wibo(name):
    dest = TOOLS / "wibo"
    if dest.exists():
        return
    dest.write_bytes(fetch(WIBO_URL.format(name)))
    make_executable(dest)


def get_compiler(version):
    dest = TOOLS / "mwcps2" / version
    if (dest / "mwccps2.exe").exists():
        return
    dest.mkdir(parents=True, exist_ok=True)
    if version in COMBINED:
        prefix = f"mwcps2-{version}/"
        with tarfile.open(fileobj=io.BytesIO(fetch(COMBINED_URL))) as t:
            for m in t.getmembers():
                if m.isfile() and m.name.startswith(prefix):
                    (dest / m.name[len(prefix):]).write_bytes(t.extractfile(m).read())
    else:
        with tarfile.open(fileobj=io.BytesIO(fetch(COMPILERS_URL.format(version)))) as t:
            t.extractall(dest, **SAFE)
    for p in dest.iterdir():
        make_executable(p)


def get_mwccgap():
    dest = TOOLS / "mwccgap"
    if not dest.exists():
        subprocess.run(["git", "clone", "-q", MWCCGAP_REPO, str(dest)], check=True)
    subprocess.run(["git", "-C", str(dest), "checkout", "-q", MWCCGAP_COMMIT], check=True)


def main():
    flavor, wibo = host()
    TOOLS.mkdir(exist_ok=True)
    get_binutils(flavor)
    get_wibo(wibo)
    for v in ALL_COMPILERS if "--all-compilers" in sys.argv else GAME_COMPILERS:
        get_compiler(v)
    get_mwccgap()
    print("tools ready in", TOOLS.relative_to(ROOT))


if __name__ == "__main__":
    main()
