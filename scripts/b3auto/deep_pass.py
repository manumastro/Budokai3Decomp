#!/usr/bin/env python3
"""Deep-pass b3perm on all near-miss functions from sweep_parked (starting from their best.c)."""

import concurrent.futures
import json
import re
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.insert(0, str(ROOT))
import configure  # noqa: E402
import fdiff  # noqa: E402

B3PERM = ROOT / "build" / "b3auto" / "b3perm"
ROM = ROOT / "disc" / "SLUS_209.98.rom"
WIBO = ROOT / "tools" / "wibo"
MWCC = ROOT / "tools" / "mwcps2" / configure.MWCC_VERSION / "mwccps2.exe"
INC = ROOT / "include"
SWEEP_DIR = ROOT / "build" / "b3auto" / "sweep"


def run_one(item):
    fn, rel, addr, orig_size, kind, score = item
    work = SWEEP_DIR / "work" / fn
    pre_f = work / "pre.c"
    best_f = work / "best.c"
    in_f = best_f if best_f.exists() else (work / "in.c")
    out_f = work / "deep_best.c"
    if out_f.exists():
        out_f.unlink()
    flags = configure.mwcc_flags(Path(rel))
    cmd = [
        str(B3PERM),
        "--rom", str(ROM), "--wibo", str(WIBO), "--mwcc", str(MWCC), "--inc", str(INC),
        "--flags", flags, "--preamble", str(pre_f), "--func", fn,
        "--addr", f"0x{addr:08X}", "--size", f"0x{orig_size:X}",
        "--input", str(in_f), "--out", str(out_f),
        "--batch", "32", "--budget", "4000", "--seconds", "20",
    ]
    r = subprocess.run(cmd, capture_output=True, text=True)
    line = (r.stdout.strip().splitlines() or ["STATUS=ERR"])[-1]
    matched = "STATUS=MATCH" in line and out_f.exists()
    if matched:
        mdir = SWEEP_DIR / "matches"
        mdir.mkdir(parents=True, exist_ok=True)
        # Preserve extra_pre from original pre.c? We'll re-extract from source during apply!
        (mdir / f"{fn}.c").write_text(out_f.read_text())
        (mdir / f"{fn}.json").write_text(json.dumps({
            "func": fn, "file": rel, "addr": f"0x{addr:08X}", "kind": kind, "line": line
        }, indent=2))
    return {"func": fn, "file": rel, "matched": matched, "line": line}


def main():
    d = json.loads((SWEEP_DIR / "summary.json").read_text())
    syms = fdiff.symbol_addresses()
    items = []
    for r in d["results"]:
        if r.get("matched"):
            continue
        ms = re.search(r"best_score=(\d+)", r["line"])
        if not ms:
            continue
        sc = int(ms.group(1))
        if sc > 300:
            continue
        fn = r["func"]
        am = re.fullmatch(r"func_([0-9A-Fa-f]{8})", fn)
        addr = int(am.group(1), 16) if am else syms.get(fn)
        if addr is None:
            continue
        items.append((fn, r["file"], addr, r["size"], r["kind"], sc))
    items.sort(key=lambda x: x[5])
    print(f"Deep-pass on {len(items)} near-miss functions (score <= 300, 18 workers, 20s/fn)...")
    t0 = time.time()
    n_match = 0
    with concurrent.futures.ThreadPoolExecutor(max_workers=18) as ex:
        futs = [ex.submit(run_one, it) for it in items]
        for idx, f in enumerate(concurrent.futures.as_completed(futs), 1):
            r = f.result()
            if r["matched"]:
                n_match += 1
                print(f"  [DEEP MATCH #{n_match}] {r['func']} ({r['file']}) :: {r['line']}", flush=True)
            if idx % 15 == 0 or idx == len(items):
                print(f"Progress {idx}/{len(items)} ({time.time()-t0:.1f}s): matches={n_match}", flush=True)
    print(f"\nDEEP PASS DONE in {time.time()-t0:.1f}s: {n_match} new matches!")


if __name__ == "__main__":
    main()
