#!/usr/bin/env python3
"""Puts a checked C function (declarations + function in one file) in place of an INCLUDE_ASM line.

    apply_c.py src/unk/unk_1D5B30.c func_001D89E0 /tmp/haiku/func_001D89E0.c

The C file is what `m2c_draft.py FILE NAME --c C` checks (and what a cheap per-function task produces). The function
replaces the INCLUDE_ASM line, the parked `#if 0` attempt above it is removed, declarations the file lacks are added,
and scripts/fdiff.py must say OK for the function or the file is restored. Run ninja and commit afterwards.
"""

import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import m2c_draft  # noqa: E402


def main():
    rel, name, cfile = sys.argv[1], sys.argv[2], Path(sys.argv[3])
    add, ctext = m2c_draft.split_draft(cfile.read_text(), name)
    path = ROOT / rel
    old = m2c_draft.apply_function(path, name, add, ctext)
    r = subprocess.run([sys.executable, "scripts/fdiff.py", rel, name], capture_output=True, text=True, cwd=ROOT)
    if f"{name}: OK" in r.stdout:
        print(f"{name}: applied, fdiff OK")
        return 0
    path.write_text(old)
    print(f"{name}: NOT applied (fdiff says: {r.stdout.strip().splitlines()[-1] if r.stdout.strip() else 'nothing'})")
    return 1


if __name__ == "__main__":
    sys.exit(main())
