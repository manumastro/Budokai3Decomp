#!/usr/bin/env python3
"""Writes the prototypes m2c inferred for the functions still in assembly, for scripts/m2c_draft.py's context.

    m2c_protos.py DRAFTS_DIR [DRAFTS_DIR ...] > build/m2c/protos.h
    M2C_PROTOS=build/m2c/protos.h scripts/m2c_batch.py ...

DRAFTS_DIR is an m2c_batch.py --drafts folder (NAME.STATUS.c). The signature line of each draft (the parameters m2c
read from $a0-$a3 / $f12-$f15 and the return register it saw used) becomes `extern T NAME(T1, T2);`; only primitive
types are kept (u8 *, s32, f32, ...: what m2c's context understands). Functions already written in C keep their own
prototype (build_context() lets the C files win)."""
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import m2c_draft  # noqa: E402


def main():
    seen = {}
    for d in sys.argv[1:]:
        for f in sorted(Path(d).glob("*.c")):
            name = f.name.split(".")[0]
            if name in seen:
                continue
            for line in f.read_text().splitlines():
                m = re.match(rf"^([\w \*]+?)\s*\b{re.escape(name)}\(([^;{{}}]*)\)\s*\{{", line)
                if m:
                    decl = f"extern {m.group(1).strip()} {name}({m2c_draft.param_types(m.group(2).strip()) or 'void'});"
                    if m2c_draft.only_primitive(decl, name) and "..." not in decl:
                        seen[name] = decl
                    break
    print("\n".join(seen.values()))


if __name__ == "__main__":
    main()
