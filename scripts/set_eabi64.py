#!/usr/bin/env python3
# From z3xox/Tenkaichi3Decomp (https://github.com/z3xox/Tenkaichi3Decomp), scripts/set_eabi64.py as of commit 06e4671
# (MIT licence, its README "Licence"; the file is unchanged since). Copyright (c) 2026 z3xox and contributors;
# licence text: LICENSES/Tenkaichi3Decomp-MIT.txt.
"""Rewrites an object's ELF e_flags to the EABI64 value the rest of the link uses.

C output is assembled as o64 (see CC_AS_FLAGS in configure.py); the code is identical but the
linker refuses to mix the two ABI tags, so the tag is patched after assembling.
"""

import struct
import sys

E_FLAGS_OFFSET = 0x24
EABI64_FLAGS = 0x20924001  # noreorder, 5900, eabi64, mips3: same as the original executable

with open(sys.argv[1], "r+b") as f:
    f.seek(E_FLAGS_OFFSET)
    f.write(struct.pack("<I", EABI64_FLAGS))
