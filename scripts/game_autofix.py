#!/usr/bin/env python3
"""The libraries' mechanical draft repairs (scripts/lib_autofix.py: parameters by the argument registers the
original reads, pass-through call arguments, unprototyped / all-s32 callee prototypes, void / s32 return) applied
to the game's m2c drafts, each variant checked with the Metrowerks checker of scripts/m2c_draft.py.

    game_autofix.py --csv build/g3/game.csv --drafts build/g3/c [-j 8] [--out build/gaf] [--apply]

Reads the best draft of each diff / size / cerr row (DRAFTS/NAME.STATUS.c), tries lib_autofix.variants() on it
(at most --tries), and writes the first exact one to OUT/NAME.c plus a CSV OUT/autofix.csv (function, file, result,
rule, best status). --apply then puts the matches in place with scripts/apply_drafts.py's one-at-a-time check.
lib_autofix.py comes from the libraries' branch (scripts/, or build/ until it is merged).
"""
import argparse
import csv
import re
import sys
from multiprocessing import Pool
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.append(str(ROOT / "build"))
import m2c_draft  # noqa: E402
import lib_autofix as LA  # noqa: E402

TRIES = 10


class _Shim:
    """lib_autofix.variants() only needs lib_try.split_snippet: (declaration lines, function text)."""
    @staticmethod
    def split_snippet(text, name):
        add, func = m2c_draft.split_draft(text, name)
        return [a.strip() for a in add if a.strip()], func


def work(job):
    name, rel, cfile = job
    text = Path(cfile).read_text()
    text = "\n".join(l for l in text.splitlines() if not l.startswith("// src/"))
    sys.modules["lib_try"] = _Shim
    try:
        vs = list(LA.variants(name, text))
    except BaseException as e:  # noqa: BLE001 (variants() may SystemExit on a parse failure)
        return dict(function=name, file=rel, result="error", rule=f"{type(e).__name__}: {e}"[:80], best="")
    best = None
    for rule, src in vs[:TRIES]:
        r = m2c_draft.draft(ROOT / rel, name, c_override=src)
        if r["status"] == "match" and not r.get("relaxed"):
            return dict(function=name, file=rel, result="match", rule=rule, best="match 0", src=src)
        key = (m2c_draft.RANK.get(r["status"], 9), r["diff"] if r["status"] in ("diff", "size") else 0)
        if best is None or key < best[0]:
            best = (key, f"{r['status']} {r['diff']}", rule, src)
    if best is None:
        return dict(function=name, file=rel, result="novariant", rule="", best="")
    return dict(function=name, file=rel, result="miss", rule=best[2], best=best[1], src=best[3], key=best[0])


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--csv", required=True)
    ap.add_argument("--drafts", required=True)
    ap.add_argument("-j", type=int, default=8)
    ap.add_argument("--out", default="build/gaf")
    ap.add_argument("--apply", action="store_true")
    a = ap.parse_args()
    out = ROOT / a.out
    out.mkdir(parents=True, exist_ok=True)
    jobs, orig = [], {}
    for r in csv.DictReader(open(a.csv)):
        f = Path(a.drafts) / f"{r['function']}.{r['status']}.c"
        if r["status"] in ("diff", "size", "cerr") and f.exists():
            jobs.append((r["function"], r["file"], str(f)))
            orig[r["function"]] = (m2c_draft.RANK.get(r["status"], 9), int(r["diff"]) if r["status"] in ("diff", "size") else 0)
    print(f"{len(jobs)} drafts", file=sys.stderr)
    rows = []
    with Pool(a.j) as pool, open(out / "autofix.csv", "w", newline="") as fh:
        w = csv.writer(fh)
        w.writerow(["function", "file", "result", "rule", "best", "better_than_draft"])
        for r in pool.imap_unordered(work, jobs):
            better = "key" in r and r["key"] < orig[r["function"]]
            if r["result"] == "match" or better:
                (out / f"{r['function']}.{'match' if r['result'] == 'match' else 'better'}.c").write_text(r["src"])
            w.writerow([r["function"], r["file"], r["result"], r["rule"], r["best"], int(better or r["result"] == "match")])
            fh.flush()
            rows.append(r)
            print(r["function"], r["result"], r["rule"], r["best"], file=sys.stderr)
    n = sum(r["result"] == "match" for r in rows)
    print(f"{n} matches of {len(rows)}; {sum(1 for r in rows if r.get('key') and r['key'] < orig[r['function']])} improved drafts")
    if a.apply and n:
        import apply_drafts
        for r in sorted(rows, key=lambda r: (r["file"], r["function"])):
            if r["result"] == "match":
                print(r["function"], apply_drafts.apply_one(r["file"], r["function"], r["src"]))


if __name__ == "__main__":
    main()
