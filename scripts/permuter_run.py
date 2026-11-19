#!/usr/bin/env python3
"""Runs decomp-permuter on near-miss functions in parallel (each with a time budget) and applies the ones it closes.

    permuter_run.py --funcs func_002CDA30 func_002CE630 ... --budget 600 -P 5 -T 3 --csv perm.csv [--apply]
    permuter_run.py --all-if0 --max 60 ...        every function with a parked `#if 0` attempt above its INCLUDE_ASM

For each function: scripts/permuter_import.py --if0 builds build/permuter/NAME (the parked attempt as the base),
tools/permuter/permuter.py runs on it for at most --budget seconds with -T threads (-P functions at the same time:
-P x -T is the CPU count used), stopping at the first score 0. A score 0 means the compiled function is identical to
the original; --apply then writes that C into the working tree (the permuter's function replaces the one of the
`#if 0` block; the block's own helper declarations stay), checks the file with scripts/fdiff.py and undoes the
change if the function is not OK. Run ninja, `CHECK build/SLUS_209.98.ok` and commit in a worktree afterwards.
CSV: function, file, base_score, best_score, seconds, status (zero / improved / same / nocompile / error).
"""

import argparse
import csv
import re
import subprocess
import sys
import time
from multiprocessing import Pool
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
PY = sys.executable


def find_file(name):
    for p in sorted((ROOT / "src").rglob("*.c")):
        if re.search(rf'^INCLUDE_ASM\(\s*"[^"]+"\s*,\s*{re.escape(name)}\s*\);', p.read_text(), re.M):
            return p.relative_to(ROOT).as_posix()
    return None


def job(args):
    name, rel, budget, threads, cfile = args
    t0 = time.time()
    d = ROOT / "build" / "permuter" / name
    src_arg = ["--c", cfile] if cfile else ["--if0"]
    r = subprocess.run([PY, str(ROOT / "scripts/permuter_import.py"), rel, name, *src_arg], capture_output=True, text=True, cwd=ROOT)
    if r.returncode or "does NOT compile" in r.stdout:
        return dict(function=name, file=rel, base=-1, best=-1, seconds=round(time.time() - t0), status="nocompile",
                    detail=(r.stderr or r.stdout).strip().splitlines()[-1][:120] if (r.stderr or r.stdout).strip() else "")
    try:
        p = subprocess.run(["timeout", str(budget), PY, str(ROOT / "tools/permuter/permuter.py"), str(d), "-j", str(threads),
                            "--stop-on-zero", "--stack-diffs"], capture_output=True, text=True, cwd=ROOT / "tools/permuter")
        out = p.stdout
    except Exception as e:
        return dict(function=name, file=rel, base=-1, best=-1, seconds=round(time.time() - t0), status="error", detail=str(e)[:100])
    base = re.findall(r"base score = (\d+)", out)
    news = re.findall(r"new best score! \((\d+) vs", out)
    b = int(base[0]) if base else -1
    best = min([int(x) for x in news] + ([b] if b >= 0 else [])) if (news or b >= 0) else -1
    status = "zero" if any(d.glob("output-0-*")) else ("improved" if best < b else "same")
    return dict(function=name, file=rel, base=b, best=best, seconds=round(time.time() - t0), status=status, detail="")


def top_level_function(text, name):
    m = re.search(rf"^[A-Za-z_][^\n;{{}}]*\b{re.escape(name)}\([^\n]*\)\s*\{{?\s*$", text, re.M)
    if not m:
        return None
    start = m.start()
    brace = text.index("{", start)
    depth, i = 0, brace
    while i < len(text):
        if text[i] == "{":
            depth += 1
        elif text[i] == "}":
            depth -= 1
            if depth == 0:
                return start, i + 1
        i += 1
    return None


def apply_one(rel, name, cfile=None):
    """Writes the permuter's zero-score function into the file; returns True when fdiff says OK."""
    d = ROOT / "build" / "permuter" / name
    srcs = sorted(d.glob("output-0-*/source.c"))
    if not srcs:
        return False
    import permuter_import as pi
    fn = [c for c in pi.chunks(srcs[0].read_text()) if pi.is_function_def(c) and pi.function_name(c) == name]
    if not fn:
        return False
    import m2c_draft
    path = ROOT / rel
    # helpers the permuter wrote (`inline int inline_fn(...)`) go in front of the function
    helpers = [c for c in pi.chunks(srcs[0].read_text()) if pi.is_function_def(c)
               and re.match(r"inline_fn\d*$", pi.function_name(c) or "") and pi.function_name(c) in fn[0]]
    new_fn = "".join(re.sub(r"^inline\b", "static inline", h.strip()) + "\n" for h in helpers) + fn[0] + "\n"
    if cfile:
        # a draft: the declarations it needs come with it
        add, _ = m2c_draft.split_draft(Path(cfile).read_text(), name)
        old = m2c_draft.apply_function(path, name, [l for l in add if not l.startswith("//")], new_fn)
    else:
        # the parked attempt: its own helper declarations (typedefs...) stay, the permuter's function replaces its function
        src = path.read_text()
        m = re.search(rf'^INCLUDE_ASM\(\s*"[^"]+"\s*,\s*{re.escape(name)}\s*\);\n?', src, re.M)
        block = re.search(r"#if 0\n((?:(?!#if 0).)*?)#endif\n(?://[^\n]*\n)*\Z", src[:m.start()], re.S)
        span = top_level_function(block.group(1), name) if block else None
        helpers = block.group(1)[:span[0]].strip("\n") if span else ""
        old = m2c_draft.apply_function(path, name, [helpers] if helpers else [], new_fn, filter_known=False)
    import apply_drafts
    if apply_drafts.file_ok(rel, name, old):
        return True
    path.write_text(old)
    return False


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--funcs", nargs="*", default=[])
    ap.add_argument("--all-if0", action="store_true")
    ap.add_argument("--max", type=int)
    ap.add_argument("--budget", type=int, default=600, help="seconds per function")
    ap.add_argument("-P", type=int, default=5, help="functions at the same time")
    ap.add_argument("-T", type=int, default=3, help="permuter threads per function")
    ap.add_argument("--csv", default="permuter_run.csv")
    ap.add_argument("--from-csv", help="a CSV of scripts/m2c_batch.py: start from its drafts that differ by at most --max-diff instructions")
    ap.add_argument("--drafts", help="the folder of the drafts (m2c_batch.py --drafts)")
    ap.add_argument("--max-diff", type=int, default=6)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--apply-only", action="store_true", help="no search: apply the score-0 results already in build/permuter")
    args = ap.parse_args()
    jobs = []
    if args.all_if0:
        for p in sorted((ROOT / "src").rglob("*.c")):
            rel = p.relative_to(ROOT).as_posix()
            if rel.startswith(("src/sdk", "src/cri")):
                continue
            for m in re.finditer(r'#if 0\n.*?#endif\nINCLUDE_ASM\("[^"]+",\s*(\w+)\);', p.read_text(), re.S):
                jobs.append((m.group(1), rel, None))
    for f in args.funcs:
        rel = find_file(f)
        if rel:
            jobs.append((f, rel, None))
        else:
            print(f"{f}: not an INCLUDE_ASM function", file=sys.stderr)
    if args.from_csv:
        # m2c drafts that compile but differ by a few instructions: the permuter starts from the draft
        for row in csv.DictReader(open(args.from_csv)):
            cf = Path(args.drafts) / f"{row['function']}.{row['status']}.c"
            if row["status"] in ("diff", "size") and 0 < int(row["diff"]) <= args.max_diff and cf.exists():
                jobs.append((row["function"], row["file"], str(cf)))
    if args.max:
        jobs = jobs[:args.max]
    print(f"{len(jobs)} functions, {args.P} x {args.T} CPUs, {args.budget}s each", file=sys.stderr)
    rows = []
    if args.apply_only:
        # no search: apply the zero-score outputs that a previous run left in build/permuter
        cfiles = {n: c for n, f, c in jobs}
        rows = [dict(function=n, file=f, status="zero") for n, f, c in jobs if any((ROOT / "build/permuter" / n).glob("output-0-*"))]
        jobs = []
        args.apply = True
    with Pool(args.P) as pool, open(args.csv, "w", newline="") as fh:
        w = csv.writer(fh)
        w.writerow(["function", "file", "base_score", "best_score", "seconds", "status", "detail"])
        for r in pool.imap_unordered(job, [(n, f, args.budget, args.T, c) for n, f, c in jobs]):
            rows.append(r)
            w.writerow([r["function"], r["file"], r["base"], r["best"], r["seconds"], r["status"], r["detail"]])
            fh.flush()
            print(f"{len(rows)}/{len(jobs)} {r['function']} base {r['base']} best {r['best']} {r['status']} {r['seconds']}s", file=sys.stderr)
    if args.apply:
        done = []
        cfiles = cfiles if args.apply_only else {n: c for n, f, c in jobs}
        for r in rows:
            if r["status"] == "zero" and apply_one(r["file"], r["function"], cfiles.get(r["function"])):
                done.append(r["function"])
                print("applied", r["function"], r["file"])
        print(f"applied {len(done)} of {sum(1 for r in rows if r['status'] == 'zero')} zero scores")


if __name__ == "__main__":
    main()
