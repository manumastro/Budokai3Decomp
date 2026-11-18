#!/usr/bin/env python3
"""Applies the matches of scripts/m2c_pragma.py: the draft goes in place of its INCLUDE_ASM line, wrapped in
`#pragma push` / the pragma(s) / `#pragma pop`, then scripts/fdiff.py checks the file (undone when not OK).

    pragma_apply.py --csv build/g3/pragma.csv --drafts build/g3/c
"""
import argparse
import csv
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import m2c_draft  # noqa: E402


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--csv", required=True)
    ap.add_argument("--drafts", required=True)
    a = ap.parse_args()
    for r in csv.DictReader(open(a.csv)):
        if r["best_status"] != "match":
            continue
        name, rel = r["function"], r["file"]
        if not m2c_draft.asm_info(name, (ROOT / rel).read_text()):
            print(name, "already C")
            continue
        text = (Path(a.drafts) / f"{name}.{r['status']}.c").read_text()
        body = "\n".join(l for l in text.splitlines() if not l.startswith("// src/")) + "\n"
        add, ctext = m2c_draft.split_draft(body, name)
        prag = "".join(f"#pragma {p}\n" for p in r["best_pragma"].split("+"))
        ctext = f"// compiled with {r['best_pragma']} (the rest of the file is not)\n#pragma push\n{prag}{ctext.rstrip()}\n#pragma pop\n"
        old = m2c_draft.apply_function(ROOT / rel, name, add, ctext)
        out = subprocess.run([sys.executable, "scripts/fdiff.py", rel], capture_output=True, text=True, cwd=ROOT).stdout
        if f"{name}: OK" in out and " 0 differ" in out:
            print(name, "applied", r["best_pragma"])
        else:
            print(out); (ROOT / rel).write_text(old)
            print(name, "undone:", out.strip().splitlines()[-3:])


if __name__ == "__main__":
    main()
