#!/usr/bin/env python3
"""Builds the input of scripts/lib_permute.py run for a long decomp-permuter pass over the library near misses.

    auto_perm_in.py OUT.json --items A.json [--items B.json ...] [--best DIR ...] [--max-diff 40] [--max-size 24]

--items: lib_m2c.py / lib_permute.py json lists ({addr, name, status, diff, flags, version, decls, func}); the
closest entry per function wins. --best: folders of an earlier permuter pass's best results (DIR/NAME.c, first line
`// NAME ADDR FLAGS ee-gcc VERSION: score A -> B`, then the declarations, then the function): such a function starts
from that result instead of its draft. Only functions still in assembly are kept (scripts/lib_remaining.py), the ones
with an earlier permuter result first (lowest score first), then by status/diff.
"""
import argparse
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import lib_remaining as LR  # noqa: E402

RANK = {"diff": 0, "size": 1}


def parse_best(p):
    text = p.read_text()
    head, _, rest = text.partition("\n")
    m = re.match(r"//\s*(\w+)\s+([0-9A-Fa-f]{8})\s+(.*?)\s+ee-gcc\s+(\S+):\s*score\s+(\d+)\s*->\s*(\d+)", head)
    if not m:
        return None
    name = m.group(1)
    fm = re.search(rf"^[A-Za-z_][^\n;]*\b{re.escape(name)}\s*\([^;]*?\)\s*\{{", rest, re.M)
    if not fm:
        return None
    decls = [l for l in rest[:fm.start()].splitlines() if l.strip()]
    return dict(addr=int(m.group(2), 16), name=name, flags=m.group(3), version=m.group(4), decls=decls,
                func=rest[fm.start():].strip() + "\n", status="diff", diff=0, score=int(m.group(6)))


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("out")
    ap.add_argument("--items", action="append", default=[])
    ap.add_argument("--best", action="append", default=[])
    ap.add_argument("--max-diff", type=int, default=40)
    ap.add_argument("--max-size", type=int, default=24)
    a = ap.parse_args()
    left = {n for _, n, _, _ in LR.remaining()}
    by = {}
    for f in a.items:
        for e in json.load(open(f)):
            if e["name"] not in left or e.get("status") not in RANK:
                continue
            lim = a.max_diff if e["status"] == "diff" else a.max_size
            if e.get("diff", 999) > lim:
                continue
            k = (RANK[e["status"]], e.get("diff", 999))
            if e["name"] not in by or k < by[e["name"]][0]:
                by[e["name"]] = (k, e)
    best = {}
    for d in a.best:
        for p in sorted(Path(d).glob("*.c")):
            b = parse_best(p)
            if b and b["name"] in left and (b["name"] not in best or b["score"] < best[b["name"]]["score"]):
                best[b["name"]] = b
    out = []
    for n, b in sorted(best.items(), key=lambda kv: kv[1]["score"]):
        out.append(b)
    for n, (k, e) in sorted(by.items(), key=lambda kv: kv[1][0]):
        if n not in best:
            out.append(e)
    # lib_permute.candidates() keeps status diff <= --max-diff: the earlier results carry diff 0 so they stay in
    Path(a.out).write_text(json.dumps(out, indent=0))
    print(f"{len(out)} functions ({len(best)} from earlier permuter results) -> {a.out}")


if __name__ == "__main__":
    main()
