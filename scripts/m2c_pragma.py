#!/usr/bin/env python3
"""Recompiles the m2c drafts that differ with per-function Metrowerks pragmas, to see whether a function was built
with other settings than its file.

    m2c_pragma.py --csv build/g3/game.csv --drafts build/g3/c [--max-diff 40] [-j 6] --out build/g3/pragma.csv

For each `diff` / `size` row of an m2c_batch.py CSV, the saved draft (DRAFTS/NAME.STATUS.c) is compiled again inside
`#pragma push` / `#pragma pop` with each setting of PRAGMAS (optimization level 0-3, peephole off, scheduling off,
optimize_for_size on, and some pairs), through scripts/m2c_draft.py's checker (`--c` mode). The output CSV lists
each function's original status and the best setting; a `match` here means the function matches when its C is
wrapped with that pragma (apply it by hand: the pragma lines go around the function in the file).
"""

import argparse
import csv
import sys
import tempfile
from multiprocessing import Pool
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import m2c_draft  # noqa: E402

PRAGMAS = [
    ["optimization_level 0"], ["optimization_level 1"], ["optimization_level 2"], ["optimization_level 3"],
    ["peephole off"], ["scheduling off"], ["optimize_for_size on"],
    ["optimization_level 3", "peephole off"], ["optimization_level 2", "peephole off"],
    ["optimization_level 1", "optimize_for_size on"], ["opt_common_subs off"], ["opt_loop_invariants off"],
    ["opt_propagation off"], ["opt_dead_assignments off"], ["opt_strength_reduction off"], ["opt_lifetimes off"],
]
RANK = m2c_draft.RANK


def work(job):
    name, rel, cfile, status, diff = job
    text = Path(cfile).read_text()
    body = "\n".join(l for l in text.splitlines() if not l.startswith("// src/"))
    best = (RANK.get(status, 9), diff, "none", status)
    log = []
    for prag in PRAGMAS:
        wrapped = "#pragma push\n" + "".join(f"#pragma {p}\n" for p in prag) + body.rstrip() + "\n#pragma pop\n"
        try:
            r = m2c_draft.draft(ROOT / rel, name, c_override=wrapped)
        except Exception as e:  # keep going
            log.append(f"{'+'.join(prag)}:error")
            continue
        d = r["diff"] if r["status"] in ("diff", "size") else 0
        log.append(f"{'+'.join(prag)}:{r['status']}:{r['diff']}")
        key = (RANK.get(r["status"], 9), d)
        if key < best[:2]:
            best = (key[0], key[1], "+".join(prag), r["status"])
        if r["status"] == "match":
            break
    return dict(function=name, file=rel, status=status, diff=diff, best_pragma=best[2], best_status=best[3],
                best_diff=best[1], log=" ".join(log))


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--csv", required=True)
    ap.add_argument("--drafts", required=True)
    ap.add_argument("--max-diff", type=int, default=40)
    ap.add_argument("-j", type=int, default=6)
    ap.add_argument("--out", default="m2c_pragma.csv")
    args = ap.parse_args()
    jobs = []
    for r in csv.DictReader(open(args.csv)):
        cf = Path(args.drafts) / f"{r['function']}.{r['status']}.c"
        if r["status"] in ("diff", "size") and int(r["diff"]) <= args.max_diff and cf.exists():
            jobs.append((r["function"], r["file"], str(cf), r["status"], int(r["diff"])))
    print(f"{len(jobs)} drafts x {len(PRAGMAS)} pragma sets, -j{args.j}", file=sys.stderr)
    with Pool(args.j) as pool, open(args.out, "w", newline="") as fh:
        w = None
        n = 0
        for r in pool.imap_unordered(work, jobs):
            if w is None:
                w = csv.DictWriter(fh, fieldnames=list(r))
                w.writeheader()
            w.writerow(r)
            fh.flush()
            n += 1
            print(f"{n}/{len(jobs)} {r['function']} {r['status']} {r['diff']} -> {r['best_pragma']} {r['best_status']} {r['best_diff']}", file=sys.stderr)


if __name__ == "__main__":
    main()
