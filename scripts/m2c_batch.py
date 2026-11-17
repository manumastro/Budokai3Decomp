#!/usr/bin/env python3
"""Runs scripts/m2c_draft.py over many INCLUDE_ASM functions in parallel, writes a CSV, applies the exact matches.

    m2c_batch.py --sample 100 --seed 1 -j 16 --csv out.csv --drafts DIR     a stratified sample (by size) of the repo
    m2c_batch.py --files src/unk/unk_2B98D0.c src/unk/unk_25D740.c -j 16     every INCLUDE_ASM of those files
    m2c_batch.py --list names.txt ...                                        lines `src/x/file.c func_00123456`
    m2c_batch.py ... --apply                                                 write the matches into the working tree

CSV columns: function, file, size, status, diff, total, detail, seconds (status: see m2c_draft.py). --drafts DIR also
saves each draft as DIR/NAME.<status>.c (the declarations it needs and the function), for the cheap per-function LLM
tasks that start from a draft. --apply edits the C files of the current checkout: it replaces the INCLUDE_ASM line
of each `match` with its draft and then runs scripts/fdiff.py on every changed file; it does not run ninja and does
not commit (do that in a worktree: ninja, `CHECK build/SLUS_209.98.ok`, git commit).
Scratch files go to temporary folders; the repository is read only until --apply.
"""

import argparse
import csv
import random
import re
import subprocess
import sys
import time
from multiprocessing import Pool
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import m2c_draft  # noqa: E402

DECLS = None
VARIANTS = False


def init(variants=False):
    global DECLS, VARIANTS
    DECLS = m2c_draft.build_context()
    VARIANTS = variants


def work(job):
    src, name, drafts = job
    t = time.time()
    try:
        r = (m2c_draft.draft_best if VARIANTS else m2c_draft.draft)(ROOT / src, name, decls=DECLS)
    except Exception as e:  # keep the batch going
        r = dict(name=name, file=src, size=0, status="error", diff=-1, total=0, detail=f"{type(e).__name__}: {e}"[:200], c="")
    r["file"] = src
    r["seconds"] = round(time.time() - t, 1)
    if drafts and r.get("c"):
        Path(drafts).mkdir(parents=True, exist_ok=True)
        (Path(drafts) / f"{name}.{r['status']}.c").write_text(f"// {src} {name} {r['status']} diff={r['diff']}/{r['total']}\n" + r["c"])
    return r


def all_functions(files=None):
    out = []
    paths = [ROOT / f for f in files] if files else sorted((ROOT / "src").rglob("*.c"))
    for p in paths:
        rel = p.relative_to(ROOT).as_posix()
        if rel.startswith("src/sdk/") or rel.startswith("src/cri/"):
            continue  # the libraries are ee-gcc code
        for folder, name in re.findall(r'^INCLUDE_ASM\(\s*"([^"]+)"\s*,\s*(\w+)\s*\);', p.read_text(), re.M):
            s = ROOT / folder / f"{name}.s"
            if not s.exists():
                continue
            size = int(re.search(r"nonmatching \w+, (0x[0-9A-Fa-f]+)", s.read_text()).group(1), 16)
            out.append((rel, name, size))
    return out


def stratified(funcs, n, seed):
    bins = [(0, 0x20), (0x20, 0x60), (0x60, 0x100), (0x100, 0x200), (0x200, 0x400), (0x400, 1 << 30)]
    rng = random.Random(seed)
    per = [n // len(bins) + (1 if i < n % len(bins) else 0) for i in range(len(bins))]
    out = []
    for (lo, hi), k in zip(bins, per):
        pool = [f for f in funcs if lo <= f[2] < hi]
        rng.shuffle(pool)
        out += pool[:k]
    return out


def apply_matches(rows):
    """Replaces the INCLUDE_ASM line of every match in the working tree; returns the changed files."""
    changed = set()
    for r in sorted(rows, key=lambda r: (r["file"], r["name"])):
        if r["status"] != "match" or "M2C_" in r["c"] or r.get("relaxed"):
            continue  # a draft that needs the macro header or relaxed pointer checks is not plain project C
        path = ROOT / r["file"]
        src = path.read_text()
        info = m2c_draft.asm_info(r["name"], src)
        if not info:
            continue
        m = info[3]
        # the draft text holds the declarations it needs, then the function (the line with its name)
        lines = r["c"].splitlines(True)
        k = next(i for i, l in enumerate(lines) if re.match(rf"^\S.*\b{re.escape(r['name'])}\(", l) and not l.rstrip().endswith(";"))
        add = [l.rstrip("\n") for l in lines[:k]]
        ctext = "".join(lines[k:])
        # the parked `#if 0` attempt (and its note) just above the INCLUDE_ASM line goes away with the match
        head = src[:m.start()]
        park = re.search(r"#if 0\n(?:(?!#if 0).)*?#endif\n(?://[^\n]*\n)*\Z", head, re.S)
        if park:
            src = head[:park.start()] + src[m.start():]
            m = m2c_draft.asm_info(r["name"], src)[3]
        new = m2c_draft.splice(src, m, ctext, add, r["name"], macros=False)
        path.write_text(new)
        changed.add(r["file"])
    return sorted(changed)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--sample", type=int)
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--files", nargs="*")
    ap.add_argument("--list")
    ap.add_argument("--max", type=int, help="at most N functions per run (after sorting by size, smallest first)")
    ap.add_argument("-j", type=int, default=12)
    ap.add_argument("--csv", default="m2c_batch.csv")
    ap.add_argument("--drafts")
    ap.add_argument("--variants", action="store_true", help="try several m2c option sets per function and keep the best")
    ap.add_argument("--apply", action="store_true")
    args = ap.parse_args()
    if args.list:
        wanted = [l.split() for l in Path(args.list).read_text().splitlines() if l.strip() and not l.startswith("#")]
        sizes = {(f, n): s for f, n, s in all_functions({w[0] for w in wanted})}
        funcs = [(w[0], w[1], sizes.get((w[0], w[1]), 0)) for w in wanted]
    else:
        funcs = all_functions(args.files)
        if args.sample:
            funcs = stratified(funcs, args.sample, args.seed)
    if args.max:
        funcs = sorted(funcs, key=lambda f: f[2])[:args.max]
    print(f"{len(funcs)} functions, -j{args.j}", file=sys.stderr)
    t0 = time.time()
    rows = []
    with Pool(args.j, initializer=init, initargs=(args.variants,)) as pool, open(args.csv, "w", newline="") as fh:
        w = csv.writer(fh)
        w.writerow(["function", "file", "size", "status", "diff", "total", "detail", "seconds", "relaxed", "variant"])
        for r in pool.imap_unordered(work, [(f, n, args.drafts) for f, n, s in funcs]):
            rows.append(r)
            w.writerow([r["name"], r["file"], r["size"], r["status"], r["diff"], r["total"], r["detail"], r["seconds"], int(bool(r.get("relaxed"))), r.get("variants", "")])
            fh.flush()
            print(f"{len(rows)}/{len(funcs)} {r['name']} {r['status']} {r['diff']}/{r['total']}", file=sys.stderr)
    from collections import Counter
    c = Counter(r["status"] + ("+relax" if r.get("relaxed") else "") for r in rows)
    print(f"done in {time.time() - t0:.0f}s: " + ", ".join(f"{k} {v}" for k, v in sorted(c.items())))
    if args.apply:
        files = apply_matches(rows)
        print("applied to:", " ".join(files))
        for f in files:
            subprocess.run([sys.executable, "scripts/fdiff.py", f, "-q"], cwd=ROOT)


if __name__ == "__main__":
    main()
