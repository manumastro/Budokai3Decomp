#!/usr/bin/env python3
"""Merges several m2c_batch.py runs into one CSV + drafts folder, keeping the best draft of each function.

    m2c_merge.py --out-csv build/g3/game.csv --out-drafts build/g3/best  RUN.csv:DRAFTS_DIR [RUN.csv:DRAFTS_DIR ...]

Order of quality: match < data < diff (fewer differing instructions first) < size (fewer first) < cerr < m2cfail.
On a tie the earlier run wins. A `source` column says which run gave the kept row. Functions no longer
INCLUDE_ASM in the working tree are dropped (they are in C now)."""
import argparse
import csv
import re
import shutil
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
RANK = {"match": 0, "relaxmatch": 0, "data": 1, "diff": 2, "size": 3, "cerr": 4, "m2cfail": 5, "error": 6}


def still_asm():
    out = set()
    for p in (ROOT / "src").rglob("*.c"):
        out.update(re.findall(r'^INCLUDE_ASM\(\s*"[^"]+"\s*,\s*(\w+)\s*\);', p.read_text(), re.M))
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("runs", nargs="+")
    ap.add_argument("--out-csv", required=True)
    ap.add_argument("--out-drafts", required=True)
    a = ap.parse_args()
    best, fields = {}, None
    for spec in a.runs:
        path, drafts = spec.split(":")
        for r in csv.DictReader(open(path)):
            fields = fields or list(r) + ["source"]
            key = (RANK.get(r["status"], 9), int(r["diff"]) if r["status"] in ("diff", "size") else 0)
            r["source"] = path
            r["_draft"] = str(Path(drafts) / f"{r['function']}.{r['status']}.c")
            if r["function"] not in best or key < best[r["function"]][0]:
                best[r["function"]] = (key, r)
    live = still_asm()
    out = Path(a.out_drafts)
    out.mkdir(parents=True, exist_ok=True)
    tmp = Path(a.out_csv + ".tmp")
    with open(tmp, "w", newline="") as fh:
        w = csv.DictWriter(fh, fieldnames=fields, extrasaction="ignore")
        w.writeheader()
        for name, (_, r) in sorted(best.items()):
            if name not in live:
                continue
            w.writerow(r)
            src = Path(r["_draft"])
            if src.exists() and src.resolve() != (out / src.name).resolve():
                for old in out.glob(f"{name}.*.c"):
                    old.unlink()
                shutil.copy(src, out / src.name)
    tmp.replace(a.out_csv)
    print(f"{sum(1 for n in best if n in live)} functions -> {a.out_csv}, drafts in {out}")


if __name__ == "__main__":
    main()
