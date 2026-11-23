#!/usr/bin/env python3
"""Deterministic GP-window extern & known-signature fixer (ZERO LLM) for Budokai 3 MWCCPS2.

1. GP-window fix:
   SLUS_209.98 has gp_value = 0x00477CF0, so GP-relative addressing (.sdata/.sbss)
   covers [0x0046FCF0, 0x0047FCEF]. Under `-sdatathreshold 8`, MWCC emits GP-relative
   `lw/lwc1 0(gp)` for any scalar `extern T D_XXXXXXXX;` <= 8 bytes, even when
   0xXXXXXXXX is outside the GP window (where the original code uses `lui/addiu`).
   Converting out-of-GP scalar externs `extern T D_XXXXXXXX;` -> `extern T D_XXXXXXXX[4];`
   and rewriting bare uses `D_XXXXXXXX` -> `D_XXXXXXXX[0]` forces `lui + offset`.

2. Known-signature fix:
   Indexes all already-matched C function definitions across `src/` so wrong
   `extern` prototypes (e.g. missing/wrong parameter types) in drafts/preambles
   are replaced with the real verified signature when argument counts match.
"""

import re
from pathlib import Path

GP_VALUE = 0x00477CF0
GP_LO = GP_VALUE - 0x8000  # 0x0046FCF0
GP_HI = GP_VALUE + 0x7FFF  # 0x0047FCEF

SCALAR_EXT_RE = re.compile(
    r"^(\s*extern\s+(?:const\s+)?(?:u8|s8|u16|s16|u32|s32|f32|f64|int|short|char|float|double|unsigned\s+int|void\s*\*|u8\s*\*|s8\s*\*|s32\s*\*|u32\s*\*)\s+)(D_([0-9A-Fa-f]{8}))\s*;\s*$",
    re.M,
)

FUNC_DEF_RE = re.compile(
    r"^((?:void|s32|u32|s16|u16|s8|u8|f32|f64|int|short|char|float|double|unsigned\s+int|void\s*\*|s32\s*\*|u32\s*\*|u8\s*\*|s8\s*\*|char\s*\*)\s+([A-Za-z_][A-Za-z0-9_]*)\s*\(([^;\n{}]*)\))\s*\{",
    re.M,
)

_SIG_CACHE = None


def is_in_gp(addr: int) -> bool:
    return GP_LO <= addr <= GP_HI


def get_known_sigs(root: Path = None):
    """Build {func_name: (ret_and_name, param_types_list, full_extern)} from matched C in src/."""
    global _SIG_CACHE
    if _SIG_CACHE is not None:
        return _SIG_CACHE
    if root is None:
        root = Path(__file__).resolve().parent.parent.parent
    sigs = {}
    for p in (root / "src").rglob("*.c"):
        txt = p.read_text(errors="ignore")
        # Skip #if 0 blocks
        txt = re.sub(r"#if\s+0\b.*?#endif", "", txt, flags=re.S)
        for m in FUNC_DEF_RE.finditer(txt):
            header, name, params = m.group(1).strip(), m.group(2), m.group(3).strip()
            if name in ("if", "for", "while", "switch", "return"):
                continue
            if params == "" or params == "void":
                nargs = 0
                norm_params = "void"
            else:
                parts = [x.strip() for x in params.split(",") if x.strip()]
                # Keep only primitive/void* types so the extern compiles in any TU without custom typedefs
                ok = True
                ptypes = []
                for pt in parts:
                    # strip param name at end
                    t = re.sub(r"\b[A-Za-z_][A-Za-z0-9_]*\s*$", "", pt).strip() if not pt.endswith("*") else pt
                    if not t:
                        t = pt
                    if not re.fullmatch(r"(?:const\s+)?(?:void|s32|u32|s16|u16|s8|u8|f32|f64|int|short|char|float|double|unsigned\s+int)(?:\s*\*+)?", t):
                        ok = False
                        break
                    ptypes.append(t)
                if not ok:
                    continue
                nargs = len(ptypes)
                norm_params = ", ".join(ptypes)
            ret = header[:header.find(name)].strip()
            sigs[name] = (nargs, f"extern {ret} {name}({norm_params});")
    _SIG_CACHE = sigs
    return sigs


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
        new_fc = re.sub(rf"\b{sym}\b(?!\s*\[)", f"{sym}[0]", new_fc)
    return new_pre, new_fc, len(to_array)


def fix_known_sigs(preamble: str, func_code: str, root: Path = None):
    """Replace vague `extern ... fn();` declarations with verified signatures from src/ when call-site arity matches."""
    sigs = get_known_sigs(root)
    if not sigs:
        return preamble, 0
    n_fix = 0
    lines = preamble.splitlines()
    out = []
    for ln in lines:
        m = re.match(r"^\s*extern\s+[^(;]+\b([A-Za-z_][A-Za-z0-9_]*)\s*\(\s*\)\s*;\s*$", ln)
        if m and m.group(1) in sigs:
            fn = m.group(1)
            if re.search(rf"\b{re.escape(fn)}\s*\(", func_code):
                nargs, full_ext = sigs[fn]
                # Check call site arity roughly matches (don't break varargs or mismatched calls)
                cm = re.search(rf"\b{re.escape(fn)}\s*\(([^;()]*)\)", func_code)
                if cm:
                    arg_s = cm.group(1).strip()
                    call_n = 0 if not arg_s else len([a for a in arg_s.split(",") if a.strip()])
                    if call_n == nargs:
                        out.append(full_ext)
                        n_fix += 1
                        continue
        # Also upgrade non-extern/extern prototypes missing f32/f64 args when verified sig has float args & same arity
        m2 = re.match(r"^\s*(?:extern\s+)?[^(;]+\b([A-Za-z_][A-Za-z0-9_]*)\s*\(([^()]+)\)\s*;\s*$", ln)
        if m2 and m2.group(1) in sigs:
            fn = m2.group(1)
            cur_params = m2.group(2)
            nargs, full_ext = sigs[fn]
            if ("f32" in full_ext or "f64" in full_ext or "float" in full_ext) and ("f32" not in cur_params and "float" not in cur_params):
                cur_n = len([x for x in cur_params.split(",") if x.strip()])
                if cur_n == nargs and re.search(rf"\b{re.escape(fn)}\s*\(", func_code):
                    out.append(full_ext)
                    n_fix += 1
                    continue
        out.append(ln)
    return "\n".join(out) + ("\n" if preamble.endswith("\n") else ""), n_fix
