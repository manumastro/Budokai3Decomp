#!/usr/bin/env python3
"""Writes the best machine draft of every function still in assembly to drafts/ (tracked, never built).

    drafts_write.py --lib build/m2c/lib_rerun.json [--lib-best DIR] --game build/m2c/game.csv --game-drafts DIR

drafts/<segment>/<function>.c: a header comment (address, size, compiler, status, how many instructions differ,
how it was made) and the C: the declarations the draft needs, then the function. drafts/INDEX.md lists every
draft, closest first (status order: diff by count, size, compile error, m2c failure, none).

Library drafts come from scripts/lib_m2c.py draft (json; m2c -t mipsee-gcc-c --valid-syntax, compiled with the
library's ee-gcc and flag sets -O2/-O1/-O3) and, when given, the permuter's best attempt per function (--lib-best
DIR/<name>.c and DIR/../perm_report.csv). Game drafts come from scripts/m2c_batch.py --variants --drafts DIR (CSV +
DIR/<name>.<status>.c; m2c -t mipsee-mwcc-c with option variants, compiled with Metrowerks 3.0b52 -O4,p). A function
with no draft at all gets a stub that only points to its assembly."""
import argparse
import csv
import json
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import lib_remaining as LR  # noqa: E402

RANK = {"match": 0, "diff": 1, "size": 2, "data": 2, "cerr": 3, "jtbl": 4, "m2cfail": 4, "error": 4, "none": 5}


def sizes():
    import gccmatch
    return gccmatch.function_sizes()


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--lib", action="append", default=[], help="lib_m2c.py draft json (several: the best wins)")
    ap.add_argument("--lib-best", help="folder of the permuter's best C per function")
    ap.add_argument("--perm-csv", help="the permuter's report (name, addr, base, best, seconds, status)")
    ap.add_argument("--game", help="m2c_batch.py CSV")
    ap.add_argument("--game-drafts", help="m2c_batch.py --drafts folder")
    ap.add_argument("--out", default="drafts")
    a = ap.parse_args()
    out = ROOT / a.out
    rem = LR.remaining(True)
    sz = sizes()
    lib = {}
    for f in a.lib:
        for r in json.loads(Path(f).read_text()):
            old = lib.get(r["addr"])
            key = (RANK.get(r["status"], 5), r.get("diff", 1 << 30) or 0)
            if old is None or key < (RANK.get(old["status"], 5), old.get("diff", 1 << 30) or 0):
                lib[r["addr"]] = r
    perm = {}
    if a.perm_csv and Path(a.perm_csv).exists():
        for row in csv.DictReader(open(a.perm_csv)):
            perm[row.get("name") or row.get("function")] = row
    game = {}
    if a.game and Path(a.game).exists():
        for row in csv.DictReader(open(a.game)):
            game[row["function"]] = row
    index = []
    for addr, name, seg, kind in rem:
        grp = LR.group_of(addr)
        size = sz.get(addr, 0)
        d = out / seg / f"{name}.c"
        d.parent.mkdir(parents=True, exist_ok=True)
        body, status, diff, how, compiler = "", "none", None, "", ""
        if grp:
            sys.path.insert(0, str(ROOT))
            import configure
            v, fl = configure.gcc_group(f"src/{seg}.c") or ("2.96", "-O2 -G0")
            compiler = f"ee-gcc {v} {fl}"
            r = lib.get(addr)
            if r and r.get("func"):
                status, diff = r["status"], r.get("diff")
                how = (f"m2c -t mipsee-gcc-c --valid-syntax; compiled with {r.get('version', v)} {r.get('flags', fl)}"
                       + ("; declarations unprototyped" if r.get("decl_style") else ""))
                if r.get("detail"):
                    how += f"; compile error: {str(r['detail'])[-120:]}"
                body = "\n".join(dict.fromkeys(r.get("decls", []))) + "\n\n" + r["func"]
            elif r:
                status, how = r["status"], f"m2c: {str(r.get('detail', ''))[-120:]}"
            p = perm.get(name)
            if a.lib_best and p and (Path(a.lib_best) / f"{name}.c").exists():
                try:
                    best = int(p.get("best_score") or p.get("best") or 0)
                    base = int(p.get("base_score") or p.get("base") or 0)
                except ValueError:
                    best = base = 0
                if best < base:
                    body = (Path(a.lib_best) / f"{name}.c").read_text()
                    how += f"; then decomp-permuter: score {base} -> {best}"
        else:
            compiler = "Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)"
            row = game.get(name)
            if row:
                status = row["status"]
                diff = int(row["diff"]) if row.get("diff", "").isdigit() else None
                how = "m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)"
                if row.get("detail"):
                    how += f"; {row['detail'][-120:]}"
                if a.game_drafts:
                    cands = sorted(Path(a.game_drafts).glob(f"{name}.*.c"))
                    if cands:
                        body = cands[0].read_text()
        asm = f"asm/nonmatchings/{seg}/{name}.s" if kind == "c" else f"asm/{seg}.s"
        head = (f"/* Draft (not built): {name} at 0x{addr:08X}, size 0x{size:X}, segment {seg} ({kind})\n"
                f" * Compiler: {compiler}\n"
                f" * Status: {status}" + (f", {diff} instructions differ" if diff is not None and status in ("diff", "size") else "") + "\n"
                f" * Made with: {how or 'no machine draft'}\n"
                f" * Original: {asm} */\n\n")
        d.write_text(head + (body.strip() + "\n" if body.strip() else "/* no draft: decompile from the assembly */\n"))
        index.append((RANK.get(status, 5), diff if diff is not None else 1 << 30, size, name, seg, addr, status, grp or "game"))
    index.sort()
    lines = ["# Drafts of the functions still in assembly", "",
             "Machine drafts (m2c, decomp-permuter) for every function that is still INCLUDE_ASM or in an asm segment;",
             "not compiled by the build. Closest first. Status: match = compiles to the original alone but did not fit in",
             "its file yet; diff = same size, N instructions differ; size = different size; cerr = does not compile;",
             "m2cfail/jtbl = no draft (m2c failed / jump table); none = no machine draft. Made by scripts/drafts_write.py.", "",
             "| Function | Address | Size | Region | Status | Differ | Draft |", "|---|---|---|---|---|---|---|"]
    for rank, diff, size, name, seg, addr, status, grp in index:
        lines.append(f"| {name} | 0x{addr:08X} | 0x{size:X} | {grp} | {status} | "
                     f"{diff if diff != 1 << 30 else ''} | [{seg}/{name}.c]({seg}/{name}.c) |")
    (out / "INDEX.md").write_text("\n".join(lines) + "\n")
    from collections import Counter
    print(len(index), dict(Counter((i[7], i[6]) for i in index)))


if __name__ == "__main__":
    main()
