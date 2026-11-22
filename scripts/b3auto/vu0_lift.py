#!/usr/bin/env python3
"""Automatic VU0/COP2 lifter + m2c + b3perm pipeline for Metrowerks PS2 functions.

Replaces contiguous VU0/COP2 instruction blocks in a scratch copy of each .s file with
`sw $zero, <magic_off>($reg)` sentinels so m2c preserves GPR liveness and decompiles all
surrounding C control flow/FPU/struct accesses cleanly, then re-injects exact
`__asm__ volatile ("..." : : "r"(expr0), ...)` blocks and sweeps with b3perm.

Usage:
    .venv/bin/python scripts/b3auto/vu0_lift.py [--limit N] [--jobs 16] [--budget 800] [--seconds 6]
"""

import argparse
import bisect
import concurrent.futures
import json
import os
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
import m2c_draft  # noqa: E402
import m2c_fix  # noqa: E402
import mwmatch  # noqa: E402
import sweep_parked  # noqa: E402

B3PERM = ROOT / "build" / "b3auto" / "b3perm"
M2C = ROOT / "tools" / "m2c" / "m2c.py"
ROM = ROOT / "disc" / "SLUS_209.98.rom"
WIBO = ROOT / "tools" / "wibo"
MWCC = ROOT / "tools" / "mwcps2" / configure.MWCC_VERSION / "mwccps2.exe"
INC = ROOT / "include"
OUT_DIR = ROOT / "build" / "b3auto" / "vu0"

INC_RE = re.compile(r'INCLUDE_ASM\("([^"]+)",\s*([A-Za-z0-9_]+)\)')
INSN_RE = re.compile(r"^(\s*/\*[^*]+\*/\s+)(\S+)(?:\s+(.*))?$")

# VU0 / COP2 opcodes
VU0_MEM_RE = re.compile(r"^(lqc2|sqc2)$")
VU0_PURE_RE = re.compile(
    r"^(vadd|vsub|vmul|vmadd|vmsub|vadda|vsuba|vmula|vmadda|vmsuba|"
    r"vopmula|vopmsub|vdiv|vsqrt|vrsqrt|vwaitq|vclip|vitof|vftoi|"
    r"vabs|vmax|vmin|vmove|vmr32|vnop|visub|viadd|viand|vior|viaddi|"
    r"vilwr|viswr|vlqi|vsqi|vlqd|vsqd|vcallms|vcallmsr|vrnext|vrget|vrinit|vrxor)"
)
VU0_GPR_IN_RE = re.compile(r"^(qmtc2|ctc2)$")
VU0_GPR_OUT_RE = re.compile(r"^(qmfc2|cfc2)$")
BRANCH_RE = re.compile(r"^(b|j|jal|jr|jalr|beq|bne|beqz|bnez|bltz|bgez|blez|bgtz|bc1t|bc1f|bc1tl|bc1fl|beql|bnel|bltzl|bgezl|blezl|bgtzl)$")


def lift_s_file(s_text):
    """Replace VU0 blocks with `sw $zero, MAGIC($reg)` sentinels.
    Returns (lifted_s_text, blocks) or (None, None) if unsupported (e.g. qmfc2 output or delay-slot VU0)."""
    lines = s_text.splitlines()
    out_lines = []
    blocks = []  # list of dict: {id, magic_base, insns_tmpl, in_regs}
    cur_block = None
    prev_was_branch = False

    def flush_block():
        nonlocal cur_block
        if cur_block is None:
            return
        bid = len(blocks)
        magic_base = 0x7100 + bid * 0x40
        cur_block["id"] = bid
        cur_block["magic_base"] = magic_base
        blocks.append(cur_block)
        # Emit one `sw $zero, MAGIC($reg)` sentinel per unique input GPR
        for k, reg in enumerate(cur_block["in_regs"]):
            off = magic_base + k * 4
            out_lines.append(f"    /* VU0_SENTINEL_{bid}_{k} */  sw         $zero, 0x{off:X}({reg})")
        if not cur_block["in_regs"]:
            # Pure VU0 block with no GPR input: anchor to $sp so m2c emits a statement
            out_lines.append(f"    /* VU0_SENTINEL_{bid}_0 */  sw         $zero, 0x{magic_base:X}($sp)")
        cur_block = None

    for ln in lines:
        m = INSN_RE.match(ln)
        if not m:
            flush_block()
            prev_was_branch = False
            out_lines.append(ln)
            continue
        prefix, op, ops = m.group(1), m.group(2), (m.group(3) or "").strip()
        is_vu_mem = bool(VU0_MEM_RE.match(op))
        is_vu_pure = bool(VU0_PURE_RE.match(op))
        is_vu_in = bool(VU0_GPR_IN_RE.match(op))
        is_vu_out = bool(VU0_GPR_OUT_RE.match(op))

        if is_vu_out:
            # Output to GPR not yet handled in v1
            return None, None

        if is_vu_mem or is_vu_pure or is_vu_in:
            if prev_was_branch:
                # VU0 instruction inside branch delay slot: skip in v1
                return None, None
            if cur_block is None:
                cur_block = {"insns": [], "in_regs": []}
            if is_vu_mem:
                # e.g. "$vf1, 0x0($a0)" or "$vf1, ($a0)"
                mm = re.match(r"^(\$\w+),\s*([^()]*)\((\$\w+)\)$", ops)
                if not mm:
                    return None, None
                vf, off_s, gpr = mm.group(1), mm.group(2).strip() or "0x0", mm.group(3)
                if gpr not in cur_block["in_regs"]:
                    cur_block["in_regs"].append(gpr)
                idx = cur_block["in_regs"].index(gpr)
                cur_block["insns"].append(f"{op} {vf}, {off_s}(%{idx})")
            elif is_vu_in:
                # e.g. "$a0, $vf1"
                mm = re.match(r"^(\$\w+),\s*(\$\w+)$", ops)
                if not mm:
                    return None, None
                gpr, vf = mm.group(1), mm.group(2)
                if gpr not in cur_block["in_regs"]:
                    cur_block["in_regs"].append(gpr)
                idx = cur_block["in_regs"].index(gpr)
                cur_block["insns"].append(f"{op} %{idx}, {vf}")
            else:
                # Pure VU0 arithmetic
                cur_block["insns"].append(f"{op} {ops}".strip())
            prev_was_branch = False
        else:
            flush_block()
            out_lines.append(ln)
            prev_was_branch = bool(BRANCH_RE.match(op))

    flush_block()
    if not blocks:
        return None, None
    return "\n".join(out_lines) + "\n", blocks


def inject_vu0_asm(c_text, blocks):
    """Replace M2C_FIELD(expr, s32 *, 0x7100) = 0; sentinels with __asm__ volatile (...)."""
    lines = c_text.splitlines()
    for blk in blocks:
        mbase = blk["magic_base"]
        n_in = max(1, len(blk["in_regs"]))
        # Find the lines matching each sentinel offset for this block
        exprs = {}
        line_idxs = []
        for idx, ln in enumerate(lines):
            for k in range(n_in):
                off = mbase + k * 4
                pat = rf"M2C_FIELD\((.+),\s*(?:s32|u32|int)\s*\*,\s*0x{off:X}\)\s*=\s*0;"
                mm = re.search(pat, ln)
                if mm:
                    exprs[k] = mm.group(1).strip()
                    line_idxs.append(idx)
                    break
        if len(exprs) != n_in:
            return None
        # Build __asm__ volatile statement
        asm_body = " ; ".join(blk["insns"])
        if blk["in_regs"]:
            operands = ", ".join(f'"r"({exprs[k]})' for k in range(len(blk["in_regs"])))
            asm_stmt = f'    __asm__ volatile ("{asm_body}" : : {operands});'
        else:
            asm_stmt = f'    __asm__ volatile ("{asm_body}");'
        first = min(line_idxs)
        lines[first] = asm_stmt
        for idx in line_idxs:
            if idx != first:
                lines[idx] = ""
    # Clean empty lines and replace M2C_FIELD with standard pointer casts for MWCC
    out = "\n".join(l for l in lines if l is not None)
    return out


def run_one_vu0(args_tuple):
    src_path, fn, s_path, addr, orig_size, preamble_text, ctx_h, budget, seconds, batch = args_tuple
    s_text = s_path.read_text(errors="ignore")
    lifted_s, blocks = lift_s_file(s_text)
    if not lifted_s:
        return {"func": fn, "file": str(src_path.relative_to(ROOT)), "status": "SKIP_VU0"}

    work = OUT_DIR / "work" / fn
    work.mkdir(parents=True, exist_ok=True)
    ls_f = work / f"{fn}.s"
    ls_f.write_text(lifted_s)

    # Run m2c on the lifted .s (15s timeout so huge functions never hang)
    cmd_m2c = [
        sys.executable, str(M2C), "-t", "mipsee-mwcc-c", "--valid-syntax",
        "--context", str(ctx_h), str(ls_f)
    ]
    try:
        rm = subprocess.run(cmd_m2c, capture_output=True, text=True, timeout=15)
    except subprocess.TimeoutExpired:
        return {"func": fn, "file": str(src_path.relative_to(ROOT)), "status": "M2C_TIMEOUT"}
    if rm.returncode != 0 or fn not in rm.stdout:
        return {"func": fn, "file": str(src_path.relative_to(ROOT)), "status": "M2C_FAIL"}

    c_raw = rm.stdout
    c_inj = inject_vu0_asm(c_raw, blocks)
    if not c_inj:
        return {"func": fn, "file": str(src_path.relative_to(ROOT)), "status": "INJECT_FAIL"}

    # Clean up M2C_FIELD macros and void* pointer arithmetic for MWCC
    c_inj = re.sub(r"M2C_FIELD\(([^,]+),\s*([^,]+),\s*([^)]+)\)", r"(*(\2)((u8 *)(\1) + (\3)))", c_inj)
    c_inj = re.sub(r'"r"\(\((var_\w+|arg\d+)\s*\+\s*(0x[0-9A-Fa-f]+|\d+)\)\)', r'"r"((u8 *)\1 + \2)', c_inj)
    ep, fc = sweep_parked.split_externs_and_func(c_inj, fn)
    if not fc:
        return {"func": fn, "file": str(src_path.relative_to(ROOT)), "status": "PARSE_FAIL"}
    fc = re.sub(r"\bvoid\s*\*", "u8 *", fc)
    pre_syms = set(re.findall(r"\b([A-Za-z_]\w*)\s*(?:\(|\[|;)", preamble_text))
    ep_kept = []
    for ln in (ep or "").splitlines(keepends=True):
        mm = re.search(r"\b([A-Za-z_]\w*)\s*(?:\(|\[|;)", ln)
        if mm and mm.group(1) in pre_syms:
            continue
        ep_kept.append(ln)
    ep = "".join(ep_kept)

    rel = src_path.resolve().relative_to(ROOT)
    flags = configure.mwcc_flags(rel)
    pre_clean, ep_clean = sweep_parked.dedup_externs(preamble_text, ep)
    pre_clean = re.sub(r"#ifndef M2C_BITWISE.*?#endif\s*", "", pre_clean, flags=re.S)
    add_lines = [l for l in ep_clean.splitlines() if l.strip()]

    # Caret-driven repair loop via m2c_fix.fix() (up to 8 rounds)
    test_c = Path(f"/dev/shm/vu0fix_{os.getpid()}_{fn}.c")
    test_o = Path(f"/dev/shm/vu0fix_{os.getpid()}_{fn}.o")
    compiled_ok = False
    for _ in range(8):
        pre_blk = pre_clean + "\n" + m2c_draft.MACROS + "\n" + "\n".join(add_lines) + "\n"
        scratch = pre_blk + fc
        test_c.write_text(scratch)
        if test_o.exists():
            test_o.unlink()
        err = mwmatch.compile_c(configure.MWCC_VERSION, flags, test_c, test_o)
        if err is None:
            compiled_ok = True
            break
        base_line = pre_blk.count("\n") + 1
        new_fc, new_add, notes = m2c_fix.fix(fc, add_lines, scratch, err, fn, base=base_line)
        if not notes or (new_fc == fc and new_add == add_lines):
            break
        fc, add_lines = new_fc, new_add
    if test_c.exists():
        test_c.unlink()
    if test_o.exists():
        test_o.unlink()
    if not compiled_ok:
        return {"func": fn, "file": str(rel), "size": orig_size, "status": "DONE", "line": "STATUS=NOCOMPILE"}

    ep_clean = "\n".join(add_lines) + ("\n" if add_lines else "")
    pre_f = work / "pre.c"
    in_f = work / "in.c"
    out_f = work / "best.c"
    pre_f.write_text(pre_clean + "\n" + m2c_draft.MACROS + "\n" + ep_clean + "\n")
    in_f.write_text(fc)
    if out_f.exists():
        out_f.unlink()

    cmd = [
        str(B3PERM),
        "--rom", str(ROM), "--wibo", str(WIBO), "--mwcc", str(MWCC), "--inc", str(INC),
        "--flags", flags, "--preamble", str(pre_f), "--func", fn,
        "--addr", f"0x{addr:08X}", "--size", f"0x{orig_size:X}",
        "--input", str(in_f), "--out", str(out_f),
        "--batch", str(batch), "--budget", str(budget), "--seconds", str(seconds),
    ]
    r = subprocess.run(cmd, capture_output=True, text=True)
    line = (r.stdout.strip().splitlines() or ["STATUS=ERR"])[-1]
    res = {"func": fn, "file": str(rel), "size": orig_size, "status": "DONE", "line": line, "matched": False}
    if "STATUS=MATCH" in line and out_f.exists():
        res["matched"] = True
        mdir = OUT_DIR / "matches"
        mdir.mkdir(parents=True, exist_ok=True)
        (mdir / f"{fn}.c").write_text((ep_clean or "") + out_f.read_text())
        (mdir / f"{fn}.json").write_text(json.dumps({"func": fn, "file": str(rel), "addr": f"0x{addr:08X}", "line": line}, indent=2))
    return res


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--jobs", type=int, default=16)
    ap.add_argument("--budget", type=int, default=800)
    ap.add_argument("--seconds", type=int, default=6)
    ap.add_argument("--batch", type=int, default=32)
    args = ap.parse_args()

    OUT_DIR.mkdir(parents=True, exist_ok=True)
    ctx_h = ROOT / "build" / "m2c" / "ctx.h"
    if not ctx_h.exists():
        m2c_draft.build_context()

    syms = fdiff.symbol_addresses()
    starts = fdiff.function_starts()
    preambles = {}
    jobs = []

    for d in ["src/battle", "src/menu", "src/story", "src/unk", "src/sys"]:
        for path in sorted((ROOT / d).rglob("*.c")):
            txt = path.read_text(errors="ignore")
            for m in INC_RE.finditer(txt):
                folder, fn = m.group(1), m.group(2)
                s_path = ROOT / folder / f"{fn}.s"
                if not s_path.exists():
                    continue
                stxt = s_path.read_text(errors="ignore")
                if not re.search(r"\b(lqc2|sqc2|vadd|vsub|vmul)\b", stxt):
                    continue
                am = re.fullmatch(r"func_([0-9A-Fa-f]{8})", fn)
                addr = int(am.group(1), 16) if am else syms.get(fn)
                if addr is None:
                    continue
                pos = bisect.bisect_right(starts, addr)
                if pos >= len(starts):
                    continue
                orig_size = starts[pos] - addr
                if orig_size <= 0 or orig_size > 0x2000:
                    continue
                if path not in preambles:
                    preambles[path] = sweep_parked.strip_func_bodies(txt)
                jobs.append((path, fn, s_path, addr, orig_size, preambles[path], ctx_h, args.budget, args.seconds, args.batch))

    jobs.sort(key=lambda j: j[4])  # smallest VU0 functions first
    if args.limit > 0:
        jobs = jobs[:args.limit]

    print(f"VU0 Lift+Perm sweep: {len(jobs)} VU0 functions ({args.jobs} workers)...")
    t0 = time.time()
    counts = {"MATCH": 0, "IMPROVED": 0, "SAME": 0, "NOCOMPILE": 0, "SKIP": 0}
    matches = []

    with concurrent.futures.ThreadPoolExecutor(max_workers=args.jobs) as ex:
        futs = [ex.submit(run_one_vu0, j) for j in jobs]
        for idx, f in enumerate(concurrent.futures.as_completed(futs), 1):
            r = f.result()
            ln = r.get("line", r.get("status", ""))
            if "STATUS=MATCH" in ln:
                counts["MATCH"] += 1
                matches.append(r)
                print(f"  [VU0 MATCH #{counts['MATCH']}] {r['func']} ({r['file']}, 0x{r['size']:X}) :: {ln}", flush=True)
            elif "STATUS=IMPROVED" in ln:
                counts["IMPROVED"] += 1
            elif "STATUS=SAME" in ln:
                counts["SAME"] += 1
            elif "STATUS=NOCOMPILE" in ln:
                counts["NOCOMPILE"] += 1
            else:
                counts["SKIP"] += 1
            if idx % 20 == 0 or idx == len(jobs):
                print(f"Progress {idx}/{len(jobs)} ({time.time()-t0:.1f}s): {counts}", flush=True)

    dt = time.time() - t0
    print(f"\nVU0 DONE in {dt:.1f}s | {counts}")
    (OUT_DIR / "summary.json").write_text(json.dumps({"counts": counts, "matches": matches, "seconds": dt}, indent=2))


if __name__ == "__main__":
    main()
