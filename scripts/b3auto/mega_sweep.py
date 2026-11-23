#!/usr/bin/env python3
"""Mega zero-LLM sweep across ALL untapped pools with b3perm v2:
  1) All parked #if 0 + draft_diff (resuming from best.c if available)
  2) All drafts/ size functions within +/- 20 instructions
  3) All sim_clone near-misses (build/sim/clones.json)
  4) All compilable VU0 functions from build/b3auto/vu0/work/

Usage:
    .venv/bin/python scripts/b3auto/mega_sweep.py [--pool all|parked|size|clones|vu0] [--jobs 18] [--budget 4000] [--seconds 25]
"""

import argparse
import bisect
import concurrent.futures
import json
import re
import subprocess
import sys
import tempfile
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.insert(0, str(ROOT / "scripts" / "b3auto"))
sys.path.insert(0, str(ROOT))

import configure  # noqa: E402
import fdiff  # noqa: E402
import fix_externs  # noqa: E402
import m2c_draft  # noqa: E402
import m2c_fix  # noqa: E402
import mwmatch  # noqa: E402
import sweep_parked  # noqa: E402

B3PERM = ROOT / "build" / "b3auto" / "b3ast"
if not B3PERM.exists():
    B3PERM = ROOT / "build" / "b3auto" / "b3perm"
ROM = ROOT / "disc" / "SLUS_209.98.rom"
WIBO = ROOT / "tools" / "wibo"
MWCC = ROOT / "tools" / "mwcps2" / configure.MWCC_VERSION / "mwccps2.exe"
INC = ROOT / "include"
OUT_DIR = ROOT / "build" / "b3auto" / "mega"
MATCH_DIR = ROOT / "build" / "b3auto" / "sweep" / "matches"
INC_RE = re.compile(r'INCLUDE_ASM\("([^"]+)",\s*([A-Za-z0-9_]+)\)')


def collect_active_inc():
    """Map fn -> (src_path, addr, orig_size) for all remaining Metrowerks INCLUDE_ASM functions."""
    syms = fdiff.symbol_addresses()
    starts = fdiff.function_starts()
    active = {}
    for d in ["src/battle", "src/menu", "src/story", "src/unk", "src/sys"]:
        for path in sorted((ROOT / d).rglob("*.c")):
            txt = path.read_text(errors="ignore")
            for m in INC_RE.finditer(txt):
                fn = m.group(2)
                am = re.fullmatch(r"func_([0-9A-Fa-f]{8})", fn)
                addr = int(am.group(1), 16) if am else syms.get(fn)
                if addr is None:
                    continue
                pos = bisect.bisect_right(starts, addr)
                if pos >= len(starts):
                    continue
                sz = starts[pos] - addr
                if 0 < sz <= 0x4000:
                    active[fn] = (path, addr, sz)
    return active


def build_jobs(pool, budget, seconds, batch):
    active = collect_active_inc()
    preambles = {}
    jobs = []
    seen = set()

    def get_pre(path):
        if path not in preambles:
            preambles[path] = sweep_parked.strip_func_bodies(path.read_text(errors="ignore"))
        return preambles[path]

    # Pool 1: sim_clone near-misses (highest priority!)
    if pool in ("all", "clones"):
        cjson = ROOT / "build" / "sim" / "clones.json"
        if cjson.exists():
            for ent in json.loads(cjson.read_text()):
                fn = ent.get("name")
                if fn not in active or fn in seen:
                    continue
                if ent.get("status") not in ("diff", "size"):
                    continue
                ep, fc = sweep_parked.split_externs_and_func(ent.get("c", ""), fn)
                if fc:
                    path, addr, sz = active[fn]
                    jobs.append((path, fn, addr, sz, f"clone_{ent['status']}", ep, fc, get_pre(path), budget, seconds, batch, None))
                    seen.add(fn)

    # Pool 2: Existing improved best.c from sweep_parked (parked #if 0 + draft_diff)
    if pool in ("all", "parked"):
        swork = ROOT / "build" / "b3auto" / "sweep" / "work"
        sjson = ROOT / "build" / "b3auto" / "sweep" / "summary.json"
        scores = {}
        if sjson.exists():
            for r in json.loads(sjson.read_text()).get("results", []):
                ms = re.search(r"best_score=(\d+)", r.get("line", ""))
                if ms:
                    scores[r["func"]] = int(ms.group(1))
        if swork.exists():
            for d in sorted(swork.iterdir()):
                fn = d.name
                if fn not in active or fn in seen:
                    continue
                # Prioritize functions with score <= 1200 (or not yet scored)
                sc = scores.get(fn, 500)
                if sc > 1500:
                    continue
                best_f = d / "best.c"
                in_f = best_f if best_f.exists() else (d / "in.c")
                pre_f = d / "pre.c"
                if in_f.exists() and pre_f.exists():
                    path, addr, sz = active[fn]
                    jobs.append((path, fn, addr, sz, f"parked_sc{sc}", "", in_f.read_text(), None, budget, seconds, batch, pre_f))
                    seen.add(fn)

    # Pool 3: drafts/INDEX.md `size` drafts within <= 20 diff instructions
    if pool in ("all", "size"):
        idx_path = ROOT / "drafts" / "INDEX.md"
        if idx_path.exists():
            for ln in idx_path.read_text(errors="ignore").splitlines():
                if not ln.startswith("| ") or ln.startswith("| Function") or ln.startswith("|---"):
                    continue
                p = [x.strip() for x in ln.strip().strip("|").split("|")]
                if len(p) < 7:
                    continue
                fn, st, df = p[0], p[4], p[5]
                if fn not in active or fn in seen:
                    continue
                if st not in ("diff", "size"):
                    continue
                if st == "size" and (not df.isdigit() or int(df) > 20):
                    continue
                m = re.search(r"\(([^)]+)\)", p[6])
                if not m:
                    continue
                dpath = ROOT / "drafts" / m.group(1)
                if not dpath.exists():
                    continue
                ep, fc = sweep_parked.split_externs_and_func(dpath.read_text(errors="ignore"), fn)
                if fc and "{" in fc:
                    path, addr, sz = active[fn]
                    jobs.append((path, fn, addr, sz, f"draft_{st}_{df}", ep, fc, get_pre(path), budget, seconds, batch, None))
                    seen.add(fn)

    # Pool 4: Compilable VU0 lifted functions from build/b3auto/vu0/work/
    if pool in ("all", "vu0"):
        vwork = ROOT / "build" / "b3auto" / "vu0" / "work"
        if vwork.exists():
            for d in sorted(vwork.iterdir()):
                fn = d.name
                if fn not in active or fn in seen:
                    continue
                best_f = d / "best.c"
                if best_f.exists() and (d / "pre.c").exists():
                    path, addr, sz = active[fn]
                    jobs.append((path, fn, addr, sz, "vu0_lifted", "", best_f.read_text(), None, budget, seconds, batch, d / "pre.c"))
                    seen.add(fn)

    # Sort: clones first, then smallest size
    jobs.sort(key=lambda j: (0 if j[4].startswith("clone_") else (1 if j[4].startswith("parked_") else 2), j[3]))
    return jobs


def run_one(item):
    src_path, fn, addr, orig_size, kind, ep, fc, preamble_text, budget, seconds, batch, pre_override = item
    rel = src_path.resolve().relative_to(ROOT)
    flags = configure.mwcc_flags(rel)

    work = OUT_DIR / "work" / fn
    work.mkdir(parents=True, exist_ok=True)
    pre_f = work / "pre.c"
    in_f = work / "in.c"
    out_f = work / "best.c"

    if pre_override is not None:
        pre_txt = pre_override.read_text()
        ep_clean = ""
    else:
        pre_clean, ep_clean = sweep_parked.dedup_externs(preamble_text, ep)
        pre_clean = re.sub(r"#ifndef M2C_BITWISE.*?#endif\s*", "", pre_clean, flags=re.S)
        pre_txt = pre_clean + "\n" + m2c_draft.MACROS + "\n" + ep_clean + "\n"
    pre_txt, fc_fixed, n_gp = fix_externs.fix_gp_externs(pre_txt, fc)
    pre_txt, _ = fix_externs.fix_known_sigs(pre_txt, fc_fixed, ROOT)
    if n_gp > 0 and ep_clean:
        ep_clean, _, _ = fix_externs.fix_gp_externs(ep_clean, "")
    pre_f.write_text(pre_txt)
    in_f.write_text(fc_fixed)
    if out_f.exists():
        out_f.unlink()

    cmd = [
        str(B3PERM), "--rom", str(ROM), "--wibo", str(WIBO), "--mwcc", str(MWCC), "--inc", str(INC),
        "--flags", flags, "--preamble", str(pre_f), "--func", fn,
        "--addr", f"0x{addr:08X}", "--size", f"0x{orig_size:X}",
        "--input", str(in_f), "--out", str(out_f),
        "--batch", str(batch), "--budget", str(budget), "--seconds", str(seconds),
    ]
    r = subprocess.run(cmd, capture_output=True, text=True)
    line = (r.stdout.strip().splitlines() or ["STATUS=ERR"])[-1]
    if "NOCOMPILE" in line or "STATUS=ERR" in line:
        # Auto-repair compile errors with m2c_fix (up to 4 passes) and retry b3ast once
        try:
            cur_pre = pre_txt
            cur_fc = fc_fixed
            repaired = False
            with tempfile.TemporaryDirectory(dir="/dev/shm") as td:
                tc = Path(td) / "t.c"
                to = Path(td) / "t.o"
                for _ in range(4):
                    scratch = cur_pre + "\n" + cur_fc
                    tc.write_text(scratch)
                    cerr = mwmatch.compile_c(configure.MWCC_VERSION, flags, tc, to)
                    if not cerr:
                        repaired = True
                        break
                    new_fc, _, notes = m2c_fix.fix(cur_fc, [], scratch, cerr, fn)
                    if not notes or new_fc == cur_fc:
                        break
                    cur_fc = new_fc
            if repaired:
                cur_pre, cur_fc, _ = fix_externs.fix_gp_externs(cur_pre, cur_fc)
                cur_pre, _ = fix_externs.fix_known_sigs(cur_pre, cur_fc, ROOT)
                pre_f.write_text(cur_pre)
                in_f.write_text(cur_fc)
                r = subprocess.run(cmd, capture_output=True, text=True)
                line = (r.stdout.strip().splitlines() or ["STATUS=ERR"])[-1]
        except Exception:
            pass
    matched = "STATUS=MATCH" in line and out_f.exists()
    if matched:
        MATCH_DIR.mkdir(parents=True, exist_ok=True)
        (MATCH_DIR / f"{fn}.c").write_text((ep_clean or "") + out_f.read_text())
        (MATCH_DIR / f"{fn}.json").write_text(json.dumps({
            "func": fn, "file": str(rel), "addr": f"0x{addr:08X}", "kind": kind, "line": line
        }, indent=2))
    return {"func": fn, "file": str(rel), "kind": kind, "matched": matched, "line": line}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--pool", default="all", choices=["all", "parked", "size", "clones", "vu0"])
    ap.add_argument("--jobs", type=int, default=20)
    ap.add_argument("--budget", type=int, default=5000)
    ap.add_argument("--seconds", type=int, default=20)
    ap.add_argument("--batch", type=int, default=64)
    args = ap.parse_args()

    OUT_DIR.mkdir(parents=True, exist_ok=True)
    jobs = build_jobs(args.pool, args.budget, args.seconds, args.batch)
    print(f"MEGA SWEEP v2 ({args.pool}): {len(jobs)} targets ({args.jobs} workers, budget={args.budget}, {args.seconds}s/fn)...")
    t0 = time.time()
    counts = {"MATCH": 0, "IMPROVED": 0, "SAME": 0, "NOCOMPILE": 0}
    total_evals = 0
    matches = []
    all_results = []

    with concurrent.futures.ThreadPoolExecutor(max_workers=args.jobs) as ex:
        futs = [ex.submit(run_one, j) for j in jobs]
        for idx, f in enumerate(concurrent.futures.as_completed(futs), 1):
            r = f.result()
            all_results.append(r)
            ln = r["line"]
            m_ev = re.search(r"evals=(\d+)", ln)
            if m_ev:
                total_evals += int(m_ev.group(1))
            if r["matched"]:
                counts["MATCH"] += 1
                matches.append(r)
                print(f"  [MEGA MATCH #{counts['MATCH']}] {r['func']} ({r['file']}, {r['kind']}) :: {ln}", flush=True)
            elif "STATUS=IMPROVED" in ln:
                counts["IMPROVED"] += 1
            elif "STATUS=SAME" in ln:
                counts["SAME"] += 1
            else:
                counts["NOCOMPILE"] += 1
            if idx % 25 == 0 or idx == len(jobs):
                dt = time.time() - t0
                print(f"Progress {idx}/{len(jobs)} ({dt:.1f}s, {total_evals/max(dt,0.1):.0f} cands/s): {counts}", flush=True)

    dt = time.time() - t0
    print(f"\nMEGA SWEEP DONE in {dt:.1f}s | evals={total_evals} ({total_evals/max(dt,0.1):.0f} cands/s) | {counts}")
    (OUT_DIR / "summary.json").write_text(json.dumps({"counts": counts, "matches": matches, "seconds": dt, "evals": total_evals, "results": all_results}, indent=2))


if __name__ == "__main__":
    main()
