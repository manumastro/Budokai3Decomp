#!/usr/bin/env python3
"""Writes the brief for a cheap per-function task: the m2c draft, how it differs from the original, and the rules.

    m2c_task.py src/unk/unk_2CD5F0.c func_002CDA30 > task.md

The brief holds: where the function is, the best m2c draft (all option variants tried) with its status, the side-by-side
diff of the compiled draft against the original (the original on the right), the original assembly's path, and the
short list of recipes of docs/decomp_guide.md. A small model (Haiku) then only has to adapt the draft to the diff, run
`scripts/fdiff.py`, and stop after a fixed number of attempts. Nothing is written to the repository.
"""

import contextlib
import io
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import m2c_draft  # noqa: E402

RECIPES = """- Register / operand-order differences: declare locals in another order (the first declared local gets the highest saved
  register), write the pointer first, `(s32)` cast on one operand of an address sum, `n = K; while (n--)` for a count-down.
- A guard `if (q != 0) do {...} while (n != 0)` gives beqz + bnez; `0 < n` gives slt + beqz, `n > 0` blez.
- A global of at most 8 bytes is reached with $gp: declare it `extern s32 D_x;`; bigger, or when the original uses lui,
  declare an array `extern u8 D_x[];` and use `D_x[0]`.
- Check the PROTOTYPES of the callees first (an f32 declared s32, a missing parameter) before touching the body.
- `#pragma inline_depth(0)` before the function keeps a call that would be inlined.
- Do not define data in C (no string literals, no switch tables, no float constants outside the `lui/mtc1` form).
- The checker puts your text where the INCLUDE_ASM line is, after the file's own declarations: do not redeclare what the
  file already declares (a clashing `extern` is a compile error), but do add prototypes the file lacks. Status
  `relaxmatch` = identical code that only compiles with pointer checks off: add the casts (e.g. `D_x` instead of `&D_x`
  for an array, `(u8 *)` on sums) until it says `match`. Status `data`: the code matches but the object defines data
  (a switch table): report it, do not fight it.
- 8 attempts at most; if it still differs, put the best attempt in `#if 0 ... #endif` above the INCLUDE_ASM line with a
  one-line note of what differs, and stop."""


def main():
    src, name = Path(sys.argv[1]), sys.argv[2]
    best = m2c_draft.draft_best(src, name)
    variant = dict(m2c_draft.VARIANTS)[best["variant"]]
    buf = io.StringIO()
    with contextlib.redirect_stdout(buf):
        again = m2c_draft.draft(src, name, extra_m2c=variant, verbose=True)
    info = m2c_draft.asm_info(name, Path(src).read_text())
    print(f"# Task: match {name} in {src}\n")
    print(f"Original assembly: {info[0].relative_to(ROOT)} ({info[1]:#x} bytes). Compiler: Metrowerks mwccps2 3.0b52, flags of configure.py.")
    print(f"Check with `.venv/bin/python scripts/fdiff.py {src} {name} -v` (OK = identical; the original is on the right).\n")
    print(f"m2c variant `{best['variant']}`: status **{best['status']}**" +
          (f", {best['diff']} of {best['total']} instructions differ" if best["status"] in ("diff", "size") else "") +
          (f" ({best['detail']})" if best["detail"] else "") + f". All variants: {best.get('variants', '')}\n")
    print("## Draft (replace the INCLUDE_ASM line with it)\n\n```c\n" + best["c"].rstrip() + "\n```\n")
    if best["status"] in ("diff", "size"):
        print("## Compiled draft against the original\n\n```\n" + buf.getvalue().rstrip() + "\n```\n")
    elif best["status"] == "cerr":
        print("## Compile error\n\n" + best["detail"] + "\n")
    print("## Recipes\n\n" + RECIPES)


if __name__ == "__main__":
    main()
