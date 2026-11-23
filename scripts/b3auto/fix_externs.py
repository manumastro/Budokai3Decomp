#!/usr/bin/env python3
"""Deterministic GP-window extern fixer (zero LLM) for Budokai 3 MWCCPS2.

SLUS_209.98 has gp_value = 0x00477CF0, so GP-relative addressing (.sdata/.sbss)
covers [0x0046FCF0, 0x0047FCEF]. Under `-sdatathreshold 8`, MWCC emits GP-relative
`lw/lwc1 0(gp)` for any scalar `extern T D_XXXXXXXX;` <= 8 bytes, even when
0xXXXXXXXX is outside the GP window (where the original code uses `lui/addiu`).

Converting out-of-GP scalar externs `extern T D_XXXXXXXX;` -> `extern T D_XXXXXXXX[4];`
and rewriting bare scalar uses `D_XXXXXXXX` -> `D_XXXXXXXX[0]` (while preserving
`&D_XXXXXXXX` -> `&D_XXXXXXXX[0]`) forces MWCC to emit `lui + offset` deterministically.
"""

import re

GP_VALUE = 0x00477CF0
GP_LO = GP_VALUE - 0x8000  # 0x0046FCF0
GP_HI = GP_VALUE + 0x7FFF  # 0x0047FCEF

SCALAR_EXT_RE = re.compile(
    r"^(\s*extern\s+(?:const\s+)?(?:u8|s8|u16|s16|u32|s32|f32|f64|int|short|char|float|double|unsigned\s+int|void\s*\*|u8\s*\*|s8\s*\*|s32\s*\*|u32\s*\*)\s+)(D_([0-9A-Fa-f]{8}))\s*;\s*$",
    re.M,
)


def is_in_gp(addr: int) -> bool:
    return GP_LO <= addr <= GP_HI


def fix_gp_externs(preamble: str, func_code: str):
    """Return (new_preamble, new_func_code, n_fixed)."""
    to_array = set()

    def repl_ext(m):
        prefix, sym, hexaddr = m.group(1), m.group(2), m.group(3)
        addr = int(hexaddr, 16)
        if not is_in_gp(addr):
            to_array.add(sym)
            return f"{prefix}{sym}[4];"
        return m.group(0)

    new_pre = SCALAR_EXT_RE.sub(repl_ext, preamble)
    if not to_array:
        return preamble, func_code, 0

    new_fc = func_code
    for sym in to_array:
        # Replace bare `sym` (not followed by `[` or identifier char) with `sym[0]`
        new_fc = re.sub(rf"\b{sym}\b(?!\s*\[)", f"{sym}[0]", new_fc)
    return new_pre, new_fc, len(to_array)
