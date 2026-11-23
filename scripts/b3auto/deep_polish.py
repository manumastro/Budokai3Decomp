#!/usr/bin/env python3
"""Multi-stage zero-LLM polish over the closest near-misses across ALL pools (mega + fresh_m2c + clones).

For every near-miss with best_diffs <= --max-diffs:
  1. Runs fix_gp_externs + fix_known_sigs
  2. Runs clone_patcher.patch_one_clone() (deterministic imm16 / lui-const / struct-offset patcher)
  3. Runs b3ast with 20 internal threads and higher budget (default 15,000 evals / 20s)
  4. Saves verified 0-diff matches to build/b3auto/sweep/matches/ for apply_matches.py.
"""

import argparse
import bisect
import json
import re
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.insert(0, str(ROOT / "scripts" / "b3auto"))
sys.path.insert(0, str(ROOT))

import clone_patcher  # noqa: E402
import configure  # noqa: E402
import fdiff  # noqa: E402
import fix_externs  # noqa: E402
import sweep_parked  # noqa: E402

B3AST = ROOT / "build" / "b3auto" / "b3ast"
ROM = ROOT / "disc" / "SLUS_209.98.rom"
WIBO = ROOT / "tools" / "wibo"
MWCC = ROOT / "tools" / "mwcps2" / configure.MWCC_VERSION / "mwccps2.exe"
INC = ROOT / "include"
MATCH_DIR = ROOT / "build" / "b3auto" / "sweep" / "matches"
INC_RE = re.compile(r'INCLUDE_ASM\("([^"]+)",\s*([A-Za-z0-9_]+)\)')


def collect_active():
    syms = fdiff.symbol_addresses()
    starts = fdiff.function_starts()
    active = {}
    for d in ["src/battle", "src/menu", "src/story", "src/unk", "src/sys"]:
        for p in sorted((ROOT / d).rglob("*.c")):
            for m in INC_RE.finditer(p.read_text(errors="ignore")):
                fn = m.group(2)
                am = re.fullmatch(r"func_([0-9A-Fa-f]{8})", fn)
                addr = int(am.group(1), 16) if am else syms.get(fn)
                if addr is None:
                    continue
                pos = bisect.bisect_right(starts, addr)
                if pos >= len(starts):
                    continue
                active[fn] = (p, addr, starts[pos] - addr)
    return active


def gather_candidates(active, max_diffs, max_score):
    best = {}  # fn -> (diffs, score, work_dir, source_tag)

    def consider(fn, d, sc, wdir, tag):
        if fn not in active:
            return
        if d > max_diffs or sc > max_score:
            return
        if not (wdir / "pre.c").exists():
            return
        if not ((wdir / "best.c").exists() or (wdir / "in.c").exists()):
            return
        prev = best.get(fn)
        if prev is None or (d, sc) < (prev[0], prev[1]):
            best[fn] = (d, sc, wdir, tag)

    # 1. mega_sweep summary
    msum = ROOT / "build" / "b3auto" / "mega" / "summary.json"
    if msum.exists():
        for r in json.loads(msum.read_text()).get("results", []):
            ln = r.get("line", "")
            md = re.search(r"best_diffs=(\d+)", ln)
            ms = re.search(r"best_score=(\d+)", ln)
            if md and ms:
                consider(r["func"], int(md.group(1)), int(ms.group(1)),
                         ROOT / "build" / "b3auto" / "mega" / "work" / r["func"], "mega")

    # 2. fresh_m2c summary
    fsum = ROOT / "build" / "b3auto" / "fresh_m2c" / "summary.json"
    if fsum.exists():
        for r in json.loads(fsum.read_text()).get("results", []):
            ln = r.get("detail", "")
            md = re.search(r"best_diffs=(\d+)", ln)
            ms = re.search(r"best_score=(\d+)", ln)
            if md and ms:
                consider(r["func"], int(md.group(1)), int(ms.group(1)),
                         ROOT / "build" / "b3auto" / "fresh_m2c" / "work" / r["func"], "fresh")

    rows = [(d, sc, fn, wdir, tag) for fn, (d, sc, wdir, tag) in best.items()]
    rows.sort()
    return rows


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--max-diffs", type=int, default=8)
    ap.add_argument("--max-score", type=int, default=800)
    ap.add_argument("--limit", type=int, default=60)
    ap.add_argument("--budget", type=int, default=15000)
    ap.add_argument("--seconds", type=int, default=20)
    args = ap.parse_args()

    rom = ROM.read_bytes()
    active = collect_active()
    cands = gather_candidates(active, args.max_diffs, args.max_score)[:args.limit]
    print(f"DEEP POLISH: {len(cands)} top near-misses (diffs<={args.max_diffs}, score<={args.max_score})...", flush=True)
    matched = []

    for idx, (d0, sc0, fn, wdir, tag) in enumerate(cands, 1):
        path, addr, sz = active[fn]
        rel = path.resolve().relative_to(ROOT)
        flags = configure.mwcc_flags(rel)
        pre_txt = (wdir / "pre.c").read_text()
        fc_txt = (wdir / "best.c").read_text() if (wdir / "best.c").exists() else (wdir / "in.c").read_text()
        if "FAKEMATCH" in fc_txt or "asm {" in fc_txt or "__asm__" in fc_txt:
            continue

        # Stage 1: fix_externs
        pre_txt, fc_txt, _ = fix_externs.fix_gp_externs(pre_txt, fc_txt)
        pre_txt, _ = fix_externs.fix_known_sigs(pre_txt, fc_txt, ROOT)

        # Stage 2: deterministic immediate/offset patcher
        fc_patched, nd = clone_patcher.patch_one_clone(pre_txt, fc_txt, fn, flags, addr, rom)
        if nd < d0:
            fc_txt = fc_patched
        if nd == 0:
            extra_ep = ""
            if "#endif" in pre_txt:
                tail = pre_txt.rsplit("#endif", 1)[1].strip()
                if tail:
                    extra_ep = tail + "\n\n"
            MATCH_DIR.mkdir(parents=True, exist_ok=True)
            (MATCH_DIR / f"{fn}.c").write_text(extra_ep + fc_txt)
            (MATCH_DIR / f"{fn}.json").write_text(json.dumps({
                "func": fn, "file": str(rel), "addr": f"0x{addr:08X}",
                "kind": f"deep_polish_imm_{tag}", "line": f"STATUS=MATCH diffs=0 (was {d0})"
            }, indent=2))
            matched.append(fn)
            print(f"  [{idx}/{len(cands)}] [MATCH-IMM] {fn} ({rel}, {sz}B, was d={d0})", flush=True)
            continue

        # Stage 3: b3ast deep 20-thread search
        pre_f = wdir / "pre_polish.c"
        in_f = wdir / "in_polish.c"
        out_f = wdir / "best_polish.c"
        pre_f.write_text(pre_txt)
        in_f.write_text(fc_txt)
        if out_f.exists():
            out_f.unlink()
        cmd = [
            str(B3AST), "--rom", str(ROM), "--wibo", str(WIBO), "--mwcc", str(MWCC), "--inc", str(INC),
            "--flags", flags, "--preamble", str(pre_f), "--func", fn,
            "--addr", f"0x{addr:08X}", "--size", f"0x{sz:X}",
            "--input", str(in_f), "--out", str(out_f),
            "--threads", "20", "--batch", "64", "--budget", str(args.budget), "--seconds", str(args.seconds),
        ]
        r = subprocess.run(cmd, capture_output=True, text=True)
        line = (r.stdout.strip().splitlines() or ["STATUS=ERR"])[-1]
        if "STATUS=MATCH" in line and out_f.exists():
            extra_ep = ""
            if "#endif" in pre_txt:
                tail = pre_txt.rsplit("#endif", 1)[1].strip()
                if tail:
                    extra_ep = tail + "\n\n"
            MATCH_DIR.mkdir(parents=True, exist_ok=True)
            (MATCH_DIR / f"{fn}.c").write_text(extra_ep + out_f.read_text())
            (MATCH_DIR / f"{fn}.json").write_text(json.dumps({
                "func": fn, "file": str(rel), "addr": f"0x{addr:08X}",
                "kind": f"deep_polish_ast_{tag}", "line": line
            }, indent=2))
            matched.append(fn)
            print(f"  [{idx}/{len(cands)}] [MATCH-AST] {fn} ({rel}, {sz}B): {line}", flush=True)
        elif "STATUS=IMPROVED" in line:
            print(f"  [{idx}/{len(cands)}] [IMPROVED ] {fn} ({rel}, {tag}, was d={d0}): {line}", flush=True)

    print(f"\nDEEP POLISH DONE: {len(matched)} EXACT MATCHES ({matched})", flush=True)


if __name__ == "__main__":
    main()
