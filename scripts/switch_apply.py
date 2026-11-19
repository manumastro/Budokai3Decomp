#!/usr/bin/env python3
"""Puts in place functions whose code matches but that define their own switch table (status `data`), for files that
own their switch tables' .rodata range in the yaml (`[0x..., .rodata, area/file]`), and lets the whole build judge.

    switch_apply.py NAME=SOURCE.c [NAME=SOURCE.c ...]      (SOURCE: a permuter output or a draft holding NAME)

Each function is checked with scripts/m2c_draft.py (it must come out `data` or `match`: same instructions), applied,
then configure.py + ninja run once; when CHECK fails the functions are taken out again one at a time (bisection by
halves) until the build passes. Prints what stayed.
"""
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import m2c_draft  # noqa: E402
import permuter_import as pi  # noqa: E402


def find_file(name):
    for p in sorted((ROOT / "src").rglob("*.c")):
        if re.search(rf'^INCLUDE_ASM\(\s*"[^"]+"\s*,\s*{re.escape(name)}\s*\);', p.read_text(), re.M):
            return p.relative_to(ROOT).as_posix()
    return None


def function_from(name, path):
    text = Path(path).read_text()
    chs = pi.chunks(text)
    fn = [c for c in chs if pi.is_function_def(c) and pi.function_name(c) == name]
    if not fn:
        return None
    helpers = [c for c in chs if pi.is_function_def(c) and re.match(r"inline_fn\d*$", pi.function_name(c) or "")
               and pi.function_name(c) in fn[0]]
    return "".join(re.sub(r"^inline\b", "static inline", h.strip()) + "\n" for h in helpers) + fn[0].strip() + "\n"


def build_ok():
    r = subprocess.run("(.venv/bin/python configure.py && .venv/bin/ninja) > build/switch_apply.log 2>&1", shell=True,
                       cwd=ROOT)
    log = (ROOT / "build/switch_apply.log").read_text().rstrip().splitlines()
    return r.returncode == 0 and log and "CHECK build/SLUS_209.98.ok" in log[-1]


def main():
    items = []
    for arg in sys.argv[1:]:
        name, src = arg.split("=", 1)
        rel = find_file(name)
        if not rel:
            print(name, "not INCLUDE_ASM")
            continue
        fn = function_from(name, src)
        if not fn:
            print(name, "no function in", src)
            continue
        drafts = sorted(Path("build/g3/c_run1").glob(f"{name}.*.c")) + sorted(Path("build/g3/c").glob(f"{name}.*.c"))
        add = []
        if drafts:
            add, _ = m2c_draft.split_draft(drafts[0].read_text(), name)
            add = [a for a in add if not a.startswith("//")]
        r = m2c_draft.draft(ROOT / rel, name, c_override="\n".join(add) + "\n" + fn)
        if r["status"] not in ("data", "match"):
            print(name, "code differs:", r["status"], r["diff"])
            continue
        items.append((name, rel, add, fn))
    applied = []
    for name, rel, add, fn in items:
        old = m2c_draft.apply_function(ROOT / rel, name, add, fn)
        applied.append((name, rel, old))
    def undo(lst):
        for name, rel, old in reversed(lst):
            (ROOT / rel).write_text(old)
    # bisection: keep the largest prefix that builds, then go on with the rest
    kept = []
    todo = applied
    if build_ok():
        kept = applied
        todo = []
    else:
        undo(applied)
        for name, rel, _ in [(n, r, o) for n, r, o in applied]:
            pass
        # one at a time (the number of candidates is small)
        for name, rel, add, fn in items:
            old = m2c_draft.apply_function(ROOT / rel, name, add, fn)
            if build_ok():
                kept.append((name, rel, old))
                print(name, "kept")
            else:
                (ROOT / rel).write_text(old)
                print(name, "breaks the build: undone")
        build_ok()
    print("kept:", " ".join(n for n, _, _ in kept))


if __name__ == "__main__":
    main()
