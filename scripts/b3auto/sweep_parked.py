#!/usr/bin/env python3
"""Harvest and sweep all parked #if 0 attempts and close m2c drafts using the native C engine b3perm.

Usage:
    .venv/bin/python scripts/b3auto/sweep_parked.py [--limit N] [--jobs 16] [--budget 1200]
                                                    [--seconds 10] [--only-diff] [--apply]
"""

import argparse
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
sys.path.insert(0, str(ROOT))

import configure  # noqa: E402
import fdiff  # noqa: E402

B3PERM = ROOT / "build" / "b3auto" / "b3perm"
ROM = ROOT / "disc" / "SLUS_209.98.rom"
WIBO = ROOT / "tools" / "wibo"
MWCC = ROOT / "tools" / "mwcps2" / configure.MWCC_VERSION / "mwccps2.exe"
INC = ROOT / "include"
OUT_DIR = ROOT / "build" / "b3auto" / "sweep"

INC_RE = re.compile(r'INCLUDE_ASM\("([^"]+)",\s*([A-Za-z0-9_]+)\)')


def strip_func_bodies(c_text):
    """Extract file-level preamble: #include, #define, typedef, struct/union/enum, extern, static inline.
    Drops regular function bodies and #if 0 blocks so mwcc compiles batches in ~2-3 ms."""
    out = []
    lines = c_text.splitlines(keepends=True)
    i = 0
    n = len(lines)
    while i < n:
        s = lines[i].strip()
        # Skip #if 0 ... #endif blocks
        if s.startswith("#if 0"):
            depth = 1
            i += 1
            while i < n and depth > 0:
                t = lines[i].strip()
                if t.startswith("#if"):
                    depth += 1
                elif t.startswith("#endif"):
                    depth -= 1
                i += 1
            continue
        # Skip INCLUDE_ASM / INCLUDE_RODATA lines
        if "INCLUDE_ASM(" in s or "INCLUDE_RODATA(" in s:
            i += 1
            continue
        # Keep preprocessor directives (including multi-line #define)
        if s.startswith("#"):
            out.append(lines[i])
            while lines[i].rstrip().endswith("\\") and i + 1 < n:
                i += 1
                out.append(lines[i])
            i += 1
            continue
        # Keep typedef / struct / union / enum blocks (may contain braces)
        if re.match(r"^(typedef|struct|union|enum)\b", s):
            buf = [lines[i]]
            brace = lines[i].count("{") - lines[i].count("}")
            i += 1
            while i < n and (brace > 0 or not buf[-1].rstrip().endswith(";")):
                buf.append(lines[i])
                brace += lines[i].count("{") - lines[i].count("}")
                i += 1
                if brace <= 0 and buf[-1].rstrip().endswith(";"):
                    break
            out.extend(buf)
            continue
        # Keep static inline functions
        if s.startswith("static inline ") or s.startswith("inline "):
            buf = [lines[i]]
            brace = lines[i].count("{") - lines[i].count("}")
            i += 1
            while i < n and brace > 0:
                buf.append(lines[i])
                brace += lines[i].count("{") - lines[i].count("}")
                i += 1
            out.extend(buf)
            continue
        # Keep extern / prototype lines (no '{')
        if s.startswith("extern "):
            # Skip multi-line externs or function defs
            if "{" not in s:
                out.append(lines[i])
            i += 1
            continue
        # Skip non-inline function definitions (keep a forward prototype if simple)
        if "{" in s and not s.startswith("//") and not s.startswith("/*"):
            # Skip to matching closing brace
            brace = lines[i].count("{") - lines[i].count("}")
            hdr = lines[i].split("{", 1)[0].strip()
            # Emit extern prototype only if single-line clean signature
            if "(" in hdr and ")" in hdr and not hdr.startswith("static ") and ";" not in hdr and "=" not in hdr:
                out.append(f"extern {hdr};\n")
            i += 1
            while i < n and brace > 0:
                brace += lines[i].count("{") - lines[i].count("}")
                i += 1
            continue
        # Keep simple prototypes ending in ';'
        if s.endswith(";") and "(" in s and ")" in s and not s.startswith("static ") and "=" not in s:
            out.append(lines[i])
            i += 1
            continue
        i += 1
    # Guard against unbalanced #if/#endif caused by stripped blocks
    pre = "".join(out)
    # Remove any stray #if 0 blocks that might remain
    pre = re.sub(r"(?m)^\s*#if\s+0\b.*?^\s*#endif[^\n]*\n?", "", pre, flags=re.S)
    # Add M2C_BITWISE helper if not defined
    pre += "\n#ifndef M2C_BITWISE\n#define M2C_BITWISE(T, x) (*(T *)&(x))\n#endif\n"
    return pre


def dedup_externs(preamble, extra_pre):
    """If extra_pre declares `extern ... SYM`, drop conflicting `extern ... SYM` lines from preamble."""
    if not extra_pre:
        return preamble, ""
    # Strip any stray #if/#endif lines inside extra_pre
    ep_lines = [l for l in extra_pre.splitlines(keepends=True) if not re.match(r"^\s*#(if|else|elif|endif)\b", l)]
    extra_clean = "".join(ep_lines)
    # Find symbol names declared in extra_clean
    extra_syms = set(re.findall(r"\bextern\b[^;]*?\b([A-Za-z_]\w*)\s*(?:\[|\(|;)", extra_clean))
    if not extra_syms:
        return preamble, extra_clean
    kept = []
    for l in preamble.splitlines(keepends=True):
        if l.lstrip().startswith("extern "):
            m = re.search(r"\b([A-Za-z_]\w*)\s*(?:\[|\(|;)", l)
            if m and m.group(1) in extra_syms:
                continue
        kept.append(l)
    return "".join(kept), extra_clean


def split_externs_and_func(block, fn_name):
    """Separate leading extern/typedef/struct lines inside a #if 0 or draft block from the function definition."""
    # Remove #if 0 / #endif wrappers
    lines = block.splitlines(keepends=True)
    if lines and lines[0].strip().startswith("#if 0"):
        lines = lines[1:]
    if lines and lines[-1].strip().startswith("#endif"):
        lines = lines[:-1]
    text = "".join(lines)
    # Strip block comments cleanly so partial comment lines never leak into pre.c
    text = re.sub(r"/\*.*?\*/", "", text, flags=re.S)
    lines = text.splitlines(keepends=True)
    extra_pre = []
    fn_start = None
    fn_pat = re.compile(rf"\b{re.escape(fn_name)}\s*\(")
    for idx, ln in enumerate(lines):
        s = ln.strip()
        if s.startswith("//") or s == "":
            continue
        if fn_pat.search(ln) and not s.startswith("extern ") and not s.endswith(";"):
            fn_start = idx
            break
        extra_pre.append(ln)
    if fn_start is None:
        return None, None
    return "".join(extra_pre), "".join(lines[fn_start:])


def extract_targets(only_diff=False):
    """Collect all (src_path, fn_name, addr, orig_size, source_kind, extra_pre, func_code)."""
    syms = fdiff.symbol_addresses()
    starts = fdiff.function_starts()
    import bisect

    # Parse drafts/INDEX.md for diff/size drafts
    draft_info = {}
    idx_path = ROOT / "drafts" / "INDEX.md"
    if idx_path.exists():
        for ln in idx_path.read_text(errors="ignore").splitlines():
            if ln.startswith("| ") and not ln.startswith("| Function") and not ln.startswith("|---"):
                p = [x.strip() for x in ln.strip().strip("|").split("|")]
                if len(p) >= 7:
                    m = re.search(r"\(([^)]+)\)", p[6])
                    if m:
                        draft_info[p[0]] = (p[4], p[5], ROOT / "drafts" / m.group(1))

    targets = []
    seen_fns = set()
    for d in ["src/battle", "src/menu", "src/story", "src/unk", "src/sys"]:
        for path in sorted((ROOT / d).rglob("*.c")):
            lines = path.read_text(errors="ignore").splitlines(keepends=True)
            for i, line in enumerate(lines):
                m = INC_RE.search(line)
                if not m:
                    continue
                fn = m.group(2)
                if fn in seen_fns:
                    continue
                am = re.fullmatch(r"func_([0-9A-Fa-f]{8})", fn)
                addr = int(am.group(1), 16) if am else syms.get(fn)
                if addr is None:
                    continue
                pos = bisect.bisect_right(starts, addr)
                if pos >= len(starts):
                    continue
                orig_size = starts[pos] - addr
                if orig_size <= 0 or orig_size > 0x4000:
                    continue

                # 1. Check for parked #if 0 directly above INCLUDE_ASM (ignoring blank and // comment lines)
                j = i - 1
                while j >= 0 and (lines[j].strip() == "" or lines[j].strip().startswith("//")):
                    j -= 1
                parked_found = False
                if not only_diff and j >= 0 and lines[j].strip().startswith("#endif"):
                    k = j - 1
                    depth = 1
                    while k >= 0 and depth > 0:
                        t = lines[k].strip()
                        if t.startswith("#if"):
                            depth -= 1
                        elif t.startswith("#endif"):
                            depth += 1
                        k -= 1
                    k += 1
                    if lines[k].strip().startswith("#if 0"):
                        blk = "".join(lines[k:j + 1])
                        ep, fc = split_externs_and_func(blk, fn)
                        if fc and "{" in fc:
                            targets.append((path, fn, addr, orig_size, "parked", ep, fc))
                            seen_fns.add(fn)
                            parked_found = True

                # 2. Check drafts/INDEX.md for same-size diff (or close size)
                if not parked_found and fn in draft_info:
                    st, df, dpath = draft_info[fn]
                    if st == "diff" and dpath.exists():
                        blk = dpath.read_text(errors="ignore")
                        ep, fc = split_externs_and_func(blk, fn)
                        if fc and "{" in fc:
                            targets.append((path, fn, addr, orig_size, f"draft_diff_{df}", ep, fc))
                            seen_fns.add(fn)
    return targets


def is_fake_match(code, orig_s_path):
    """Reject any fake-match tricks."""
    if "FAKEMATCH" in code or "fake" in code.lower():
        return True
    if re.search(r"if\s*\([^)]*\)\s*\{\s*\}", code):
        return True
    if re.search(r"\b(\w+)\s*&&\s*\1\b", code):
        return True
    if "__asm__" in code or "asm(" in code or "asm {" in code:
        # Allow inline asm only if original .s contains VU0/COP2/MMI
        if orig_s_path and orig_s_path.exists():
            stxt = orig_s_path.read_text(errors="ignore")
            if not re.search(r"\b(lqc2|sqc2|qmfc2|qmtc2|vadd|vsub|vmul|lq|sq)\b", stxt):
                return True
        else:
            return True
    return False


def run_one(args_tuple):
    src_path, fn, addr, orig_size, kind, extra_pre, func_code, preamble_text, budget, seconds, batch = args_tuple
    rel = src_path.resolve().relative_to(ROOT)
    flags = configure.mwcc_flags(rel)

    work = OUT_DIR / "work" / fn
    work.mkdir(parents=True, exist_ok=True)
    pre_f = work / "pre.c"
    in_f = work / "in.c"
    out_f = work / "best.c"

    pre_clean, ep_clean = dedup_externs(preamble_text, extra_pre)
    pre_f.write_text(pre_clean + "\n" + ep_clean + "\n")
    in_f.write_text(func_code)
    if out_f.exists():
        out_f.unlink()

    cmd = [
        str(B3PERM),
        "--rom", str(ROM),
        "--wibo", str(WIBO),
        "--mwcc", str(MWCC),
        "--inc", str(INC),
        "--flags", flags,
        "--preamble", str(pre_f),
        "--func", fn,
        "--addr", f"0x{addr:08X}",
        "--size", f"0x{orig_size:X}",
        "--input", str(in_f),
        "--out", str(out_f),
        "--batch", str(batch),
        "--budget", str(budget),
        "--seconds", str(seconds),
    ]
    r = subprocess.run(cmd, capture_output=True, text=True)
    line = (r.stdout.strip().splitlines() or ["STATUS=ERR"])[-1]
    res = {"func": fn, "file": str(rel), "kind": kind, "size": orig_size, "line": line, "matched": False}
    if "STATUS=MATCH" in line and out_f.exists():
        matched_code = out_f.read_text()
        res["matched"] = True
        mdir = OUT_DIR / "matches"
        mdir.mkdir(parents=True, exist_ok=True)
        (mdir / f"{fn}.c").write_text((extra_pre or "") + matched_code)
        (mdir / f"{fn}.json").write_text(json.dumps({
            "func": fn, "file": str(rel), "addr": f"0x{addr:08X}",
            "kind": kind, "extra_pre": extra_pre or "", "line": line
        }, indent=2))
    return res


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--jobs", type=int, default=16)
    ap.add_argument("--budget", type=int, default=1200)
    ap.add_argument("--seconds", type=int, default=10)
    ap.add_argument("--batch", type=int, default=32)
    ap.add_argument("--only-diff", action="store_true")
    ap.add_argument("--only-new", action="store_true", help="skip functions already in build/b3auto/sweep/work/")
    args = ap.parse_args()

    OUT_DIR.mkdir(parents=True, exist_ok=True)
    targets = extract_targets(only_diff=args.only_diff)
    if args.only_new:
        done_dir = OUT_DIR / "work"
        targets = [t for t in targets if not (done_dir / t[1]).exists()]
    # Sort smallest first for fastest wins
    targets.sort(key=lambda t: (0 if t[4].startswith("draft_diff") else 1, t[3]))
    if args.limit > 0:
        targets = targets[:args.limit]

    # Cache file preambles
    preambles = {}
    jobs = []
    for path, fn, addr, orig_size, kind, ep, fc in targets:
        if path not in preambles:
            preambles[path] = strip_func_bodies(path.read_text(errors="ignore"))
        jobs.append((path, fn, addr, orig_size, kind, ep, fc, preambles[path], args.budget, args.seconds, args.batch))

    print(f"Sweeping {len(jobs)} targets ({args.jobs} parallel workers, batch={args.batch}, budget={args.budget}, {args.seconds}s/fn)...")
    t0 = time.time()
    counts = {"MATCH": 0, "IMPROVED": 0, "SAME": 0, "NOCOMPILE": 0, "OTHER": 0}
    total_evals = 0
    matches = []
    all_res = []

    with concurrent.futures.ThreadPoolExecutor(max_workers=args.jobs) as ex:
        futs = [ex.submit(run_one, j) for j in jobs]
        for idx, f in enumerate(concurrent.futures.as_completed(futs), 1):
            r = f.result()
            all_res.append(r)
            ln = r["line"]
            m_ev = re.search(r"evals=(\d+)", ln)
            if m_ev:
                total_evals += int(m_ev.group(1))
            if "STATUS=MATCH" in ln:
                counts["MATCH"] += 1
                matches.append(r)
                print(f"  [MATCH #{counts['MATCH']}] {r['func']} ({r['file']}, {r['kind']}) :: {ln}", flush=True)
            elif "STATUS=IMPROVED" in ln:
                counts["IMPROVED"] += 1
            elif "STATUS=SAME" in ln:
                counts["SAME"] += 1
            elif "STATUS=NOCOMPILE" in ln:
                counts["NOCOMPILE"] += 1
            else:
                counts["OTHER"] += 1
            if idx % 20 == 0 or idx == len(jobs):
                dt = time.time() - t0
                print(f"Progress {idx}/{len(jobs)} ({dt:.1f}s, {total_evals/max(dt,0.1):.0f} cands/s): {counts}", flush=True)

    dt = time.time() - t0
    print(f"\nDONE in {dt:.1f}s | total_evals={total_evals} ({total_evals/max(dt,0.1):.0f} cands/s) | {counts}")
    (OUT_DIR / "summary.json").write_text(json.dumps({
        "counts": counts, "matches": matches, "seconds": dt, "evals": total_evals, "results": all_res
    }, indent=2))


if __name__ == "__main__":
    main()
