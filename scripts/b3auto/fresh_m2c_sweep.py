#!/usr/bin/env python3
"""Fresh m2c_draft + fix_externs + b3ast sweep over untapped MW INCLUDE_ASM functions (ZERO LLM).

Because headers, structs, and function prototypes in src/ have grown dramatically since drafts/
was first generated, re-running m2c_draft on remaining functions unlocks fresh direct matches
and low-diff seeds that b3ast can finish automatically.

Usage:
    .venv/bin/python scripts/b3auto/fresh_m2c_sweep.py [--max-size 0x200] [--jobs 16] [--budget 5000] [--seconds 12]
"""

import argparse
import bisect
import concurrent.futures
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

import configure  # noqa: E402
import fdiff  # noqa: E402
import fix_externs  # noqa: E402
import m2c_draft  # noqa: E402
import sweep_parked  # noqa: E402

B3AST = ROOT / "build" / "b3auto" / "b3ast"
ROM = ROOT / "disc" / "SLUS_209.98.rom"
WIBO = ROOT / "tools" / "wibo"
MWCC = ROOT / "tools" / "mwcps2" / configure.MWCC_VERSION / "mwccps2.exe"
INC = ROOT / "include"
OUT_DIR = ROOT / "build" / "b3auto" / "fresh_m2c"
MATCH_DIR = ROOT / "build" / "b3auto" / "sweep" / "matches"
INC_RE = re.compile(r'INCLUDE_ASM\("([^"]+)",\s*([A-Za-z0-9_]+)\)')


def collect_targets(max_size, include_mega):
    syms = fdiff.symbol_addresses()
    starts = fdiff.function_starts()
    mega_work = ROOT / "build" / "b3auto" / "mega" / "work"
    targets = []
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
                if not (0 < sz <= max_size):
                    continue
                if not include_mega and (mega_work / fn / "in.c").exists():
                    continue
                targets.append((sz, path, fn, addr))
    targets.sort(key=lambda x: x[0])
    return targets


def run_one(item):
    sz, path, fn, addr, budget, seconds, batch = item
    rel = path.resolve().relative_to(ROOT)
    try:
        r = m2c_draft.draft(path, fn)
    except Exception as e:
        return {"func": fn, "file": str(rel), "size": sz, "status": "err", "detail": str(e)[:80]}

    st = r.get("status", "err")
    c_txt = r.get("c", "")
    diff_n = r.get("diff", -1)

    if st == "match" and c_txt:
        MATCH_DIR.mkdir(parents=True, exist_ok=True)
        (MATCH_DIR / f"{fn}.c").write_text(c_txt)
        (MATCH_DIR / f"{fn}.json").write_text(json.dumps({
            "func": fn, "file": str(rel), "addr": f"0x{addr:08X}",
            "kind": "fresh_m2c_direct", "line": "STATUS=MATCH diffs=0 (m2c_draft direct)"
        }, indent=2))
        return {"func": fn, "file": str(rel), "size": sz, "status": "MATCH_DIRECT", "detail": "0 diffs"}

    if st not in ("diff", "size") or not c_txt:
        return {"func": fn, "file": str(rel), "size": sz, "status": st, "detail": r.get("detail", "")[:60]}

    if st == "size":
        # Check compiled vs original byte delta instead of raw diff_n (which inflates on GP shifts)
        md = re.search(r"compiled\s+0x([0-9A-Fa-f]+),\s*original\s+0x([0-9A-Fa-f]+)", r.get("detail", ""))
        if md:
            delta = abs(int(md.group(1), 16) - int(md.group(2), 16))
            if delta > 0x24:
                return {"func": fn, "file": str(rel), "size": sz, "status": "size_far", "detail": f"dsize=0x{delta:X}"}
        elif diff_n < 0 or diff_n > 20:
            return {"func": fn, "file": str(rel), "size": sz, "status": "size_far", "detail": f"diff={diff_n}"}

    # Feed into fix_externs + b3ast!
    flags = configure.mwcc_flags(rel)
    pre_raw = sweep_parked.strip_func_bodies(path.read_text(errors="ignore"))
    ep, fc = sweep_parked.split_externs_and_func(c_txt, fn)
    if not fc or "{" not in fc:
        return {"func": fn, "file": str(rel), "size": sz, "status": "nofunc", "detail": ""}
    pre_clean, ep_clean = sweep_parked.dedup_externs(pre_raw, ep)
    pre_clean = re.sub(r"#ifndef M2C_BITWISE.*?#endif\s*", "", pre_clean, flags=re.S)
    pre_txt = pre_clean + "\n" + m2c_draft.MACROS + "\n" + ep_clean + "\n"
    pre_txt, fc_fixed, n_gp = fix_externs.fix_gp_externs(pre_txt, fc)
    pre_txt, _ = fix_externs.fix_known_sigs(pre_txt, fc_fixed, ROOT)
    if n_gp > 0 and ep_clean:
        ep_clean, _, _ = fix_externs.fix_gp_externs(ep_clean, "")

    work = OUT_DIR / "work" / fn
    work.mkdir(parents=True, exist_ok=True)
    pre_f = work / "pre.c"
    in_f = work / "in.c"
    out_f = work / "best.c"
    pre_f.write_text(pre_txt)
    in_f.write_text(fc_fixed)
    if out_f.exists():
        out_f.unlink()

    cmd = [
        str(B3AST), "--rom", str(ROM), "--wibo", str(WIBO), "--mwcc", str(MWCC), "--inc", str(INC),
        "--flags", flags, "--preamble", str(pre_f), "--func", fn,
        "--addr", f"0x{addr:08X}", "--size", f"0x{sz:X}",
        "--input", str(in_f), "--out", str(out_f),
        "--batch", str(batch), "--budget", str(budget), "--seconds", str(seconds),
    ]
    res = subprocess.run(cmd, capture_output=True, text=True)
    line = (res.stdout.strip().splitlines() or ["STATUS=ERR"])[-1]
    if "STATUS=MATCH" in line and out_f.exists():
        MATCH_DIR.mkdir(parents=True, exist_ok=True)
        (MATCH_DIR / f"{fn}.c").write_text((ep_clean or "") + "\n" + out_f.read_text())
        (MATCH_DIR / f"{fn}.json").write_text(json.dumps({
            "func": fn, "file": str(rel), "addr": f"0x{addr:08X}",
            "kind": f"fresh_m2c_{st}+b3ast", "line": line
        }, indent=2))
        return {"func": fn, "file": str(rel), "size": sz, "status": "MATCH_AST", "detail": line}
    return {"func": fn, "file": str(rel), "size": sz, "status": f"ast_{st}", "detail": line}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--max-size", type=lambda x: int(x, 0), default=0x200)
    ap.add_argument("--include-mega", action="store_true")
    ap.add_argument("--jobs", type=int, default=16)
    ap.add_argument("--budget", type=int, default=5000)
    ap.add_argument("--seconds", type=int, default=12)
    ap.add_argument("--batch", type=int, default=64)
    args = ap.parse_args()

    OUT_DIR.mkdir(parents=True, exist_ok=True)
    targets = collect_targets(args.max_size, args.include_mega)
    print(f"FRESH M2C + B3AST SWEEP: {len(targets)} untapped targets (<=0x{args.max_size:X}, {args.jobs} workers)...", flush=True)
    items = [(sz, p, fn, addr, args.budget, args.seconds, args.batch) for sz, p, fn, addr in targets]
    t0 = time.time()
    counts = {}
    matches = []
    results = []

    with concurrent.futures.ThreadPoolExecutor(max_workers=args.jobs) as ex:
        futs = [ex.submit(run_one, it) for it in items]
        for idx, f in enumerate(concurrent.futures.as_completed(futs), 1):
            r = f.result()
            results.append(r)
            st = r["status"]
            counts[st] = counts.get(st, 0) + 1
            if st.startswith("MATCH"):
                matches.append(r)
                print(f"  [FRESH MATCH #{len(matches)}] {r['func']} ({r['file']}, {r['size']}B, {st}) :: {r['detail']}", flush=True)
            if idx % 25 == 0 or idx == len(items):
                dt = time.time() - t0
                print(f"Progress {idx}/{len(items)} ({dt:.1f}s): {counts}", flush=True)

    dt = time.time() - t0
    print(f"\nFRESH M2C SWEEP DONE in {dt:.1f}s | {len(matches)} MATCHES | {counts}", flush=True)
    (OUT_DIR / "summary.json").write_text(json.dumps({
        "seconds": dt, "counts": counts, "matches": matches, "results": results
    }, indent=2))


if __name__ == "__main__":
    main()
