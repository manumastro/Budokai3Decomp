#!/usr/bin/env python3
"""Run m2c_draft.py + b3perm on all remaining INCLUDE_ASM functions of a given C file (e.g. src/menu/mn_CharSelChip.c)."""

import bisect
import concurrent.futures
import json
import os
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
import m2c_draft  # noqa: E402
import sweep_parked  # noqa: E402

B3PERM = ROOT / "build" / "b3auto" / "b3perm"
ROM = ROOT / "disc" / "SLUS_209.98.rom"
WIBO = ROOT / "tools" / "wibo"
MWCC = ROOT / "tools" / "mwcps2" / configure.MWCC_VERSION / "mwccps2.exe"
INC = ROOT / "include"
OUT_DIR = ROOT / "build" / "b3auto" / "file_sweep"
INC_RE = re.compile(r'INCLUDE_ASM\("([^"]+)",\s*([A-Za-z0-9_]+)\)')


def extract_single_func(full_c, fn):
    """Extract only the single function definition `fn(...) { ... }` and any externs added at top."""
    m = re.search(rf"(?m)^[^\n;{{}}]*\b{re.escape(fn)}\s*\([^{{}};]*\)\s*\{{", full_c)
    if not m:
        return "", None
    i = m.end() - 1
    depth = 0
    n = len(full_c)
    while i < n:
        c = full_c[i]
        if c == "{":
            depth += 1
        elif c == "}":
            depth -= 1
            if depth == 0:
                fc = full_c[m.start():i + 1] + "\n"
                break
        i += 1
    else:
        return "", None
    # Collect externs declared in full_c before function
    ext_lines = [l for l in full_c[:m.start()].splitlines(keepends=True) if l.lstrip().startswith("extern ")]
    return "".join(ext_lines), fc


def run_one(item):
    src_path, fn, addr, orig_size, preamble_text = item
    keep_dir = OUT_DIR / "m2c" / fn
    keep_dir.mkdir(parents=True, exist_ok=True)
    draft_c = keep_dir / f"{fn}.c"
    st = "cached"
    if not draft_c.exists():
        env = dict(os.environ, M2C_TARGET="mipsee-mwcc-c")
        r = subprocess.run(
            [sys.executable, str(ROOT / "scripts" / "m2c_draft.py"), str(src_path), fn, "--keep", str(keep_dir)],
            capture_output=True, text=True, env=env, timeout=45
        )
        out = r.stdout + r.stderr
        m_res = re.search(r"RESULT\s+\S+\s+(\S+)\s+(\S+)\s+(\S+)", out)
        st = m_res.group(1) if m_res else "err"
    if not draft_c.exists():
        return {"func": fn, "status": st, "matched": False, "line": f"m2c={st}"}

    c_txt = draft_c.read_text(errors="ignore")
    ep, fc = extract_single_func(c_txt, fn)
    if not fc:
        return {"func": fn, "status": st, "matched": False, "line": f"m2c={st} extractfail"}

    rel = src_path.resolve().relative_to(ROOT)
    mdir = ROOT / "build" / "b3auto" / "sweep" / "matches"
    mdir.mkdir(parents=True, exist_ok=True)

    work = OUT_DIR / "work" / fn
    work.mkdir(parents=True, exist_ok=True)
    pre_clean, ep_clean = sweep_parked.dedup_externs(preamble_text, ep)
    pre_clean = re.sub(r"#ifndef M2C_BITWISE.*?#endif\s*", "", pre_clean, flags=re.S)
    pre_f = work / "pre.c"
    in_f = work / "in.c"
    out_f = work / "best.c"
    pre_f.write_text(pre_clean + "\n" + m2c_draft.MACROS + "\n" + ep_clean + "\n")
    in_f.write_text(fc)
    if out_f.exists():
        out_f.unlink()
    flags = configure.mwcc_flags(rel)
    rp = subprocess.run([
        str(B3PERM), "--rom", str(ROM), "--wibo", str(WIBO), "--mwcc", str(MWCC), "--inc", str(INC),
        "--flags", flags, "--preamble", str(pre_f), "--func", fn,
        "--addr", f"0x{addr:08X}", "--size", f"0x{orig_size:X}",
        "--input", str(in_f), "--out", str(out_f),
        "--batch", "32", "--budget", "2000", "--seconds", "15",
    ], capture_output=True, text=True)
    line = (rp.stdout.strip().splitlines() or ["STATUS=ERR"])[-1]
    if "STATUS=MATCH" in line and out_f.exists():
        (mdir / f"{fn}.c").write_text((ep_clean or "") + out_f.read_text())
        (mdir / f"{fn}.json").write_text(json.dumps({"func": fn, "file": str(rel), "addr": f"0x{addr:08X}", "kind": f"m2c+b3perm", "line": line}, indent=2))
        return {"func": fn, "status": "MATCH", "matched": True, "line": line}
    return {"func": fn, "status": st, "matched": False, "line": line}


def main():
    src_path = (ROOT / sys.argv[1]).resolve()
    txt = src_path.read_text(errors="ignore")
    pre = sweep_parked.strip_func_bodies(txt)
    syms = fdiff.symbol_addresses()
    starts = fdiff.function_starts()
    items = []
    for m in INC_RE.finditer(txt):
        fn = m.group(2)
        am = re.fullmatch(r"func_([0-9A-Fa-f]{8})", fn)
        addr = int(am.group(1), 16) if am else syms.get(fn)
        if addr is None:
            continue
        pos = bisect.bisect_right(starts, addr)
        if pos >= len(starts):
            continue
        items.append((src_path, fn, addr, starts[pos] - addr, pre))

    print(f"m2c + b3perm on {len(items)} functions in {src_path.name}...")
    t0 = time.time()
    n_match = 0
    with concurrent.futures.ThreadPoolExecutor(max_workers=12) as ex:
        for r in ex.map(run_one, items):
            if r["matched"]:
                n_match += 1
            print(f"  {r['func']:16s} [{r['status']:10s}] {r['line']}", flush=True)
    print(f"\nDONE in {time.time()-t0:.1f}s: {n_match}/{len(items)} matched!")


if __name__ == "__main__":
    main()
