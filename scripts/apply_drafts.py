#!/usr/bin/env python3
"""Applies the `match` rows of an m2c_batch.py CSV from its saved drafts, one at a time, each checked in its file.

    apply_drafts.py --csv build/g6/segs.csv --drafts build/g6/c

Each draft is checked again with scripts/m2c_draft.py's checker in the file as it is now (an earlier insertion may
have added declarations that clash), put in place of the INCLUDE_ASM line, and kept only when scripts/fdiff.py says
the whole file is OK. A function that is no longer INCLUDE_ASM (written meanwhile, e.g. on origin/main) is skipped.
The whole build (configure.py && ninja, CHECK) must still be run after.
"""
import argparse
import csv
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import m2c_draft  # noqa: E402


def apply_one(rel, name, ctext_full):
    path = ROOT / rel
    if not m2c_draft.asm_info(name, path.read_text()):
        return "gone"
    r = m2c_draft.draft(path, name, c_override=ctext_full)
    if r["status"] != "match" or r.get("relaxed"):
        return f"now {r['status']}"
    add, ctext = m2c_draft.split_draft(r["c"], name)
    old = m2c_draft.apply_function(path, name, add, ctext)
    out = subprocess.run([sys.executable, "scripts/fdiff.py", rel], capture_output=True, text=True, cwd=ROOT).stdout
    if f"{name}: OK" in out and " 0 differ" in out:
        return "applied"
    path.write_text(old)
    return "undone"


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--csv", required=True)
    ap.add_argument("--drafts", required=True)
    a = ap.parse_args()
    n = 0
    for r in sorted(csv.DictReader(open(a.csv)), key=lambda r: (r["file"], r["function"])):
        if r["status"] != "match" or r.get("relaxed") == "1":
            continue
        f = Path(a.drafts) / f"{r['function']}.match.c"
        if not f.exists():
            continue
        text = "\n".join(l for l in f.read_text().splitlines() if not l.startswith("// src/")) + "\n"
        res = apply_one(r["file"], r["function"], text)
        n += res == "applied"
        print(r["function"], r["file"], res)
    print(f"{n} applied")


if __name__ == "__main__":
    main()
