#!/usr/bin/env python3
"""Sorts the m2c drafts that compile to the wrong size by probable cause, comparing the compiled draft with the
original instruction by instruction class.

    size_causes.py --csv build/g3/game.csv --drafts build/g3/c [--sample 60 --seed 1] [-j 6] [--out causes.csv]

For each sampled `size` draft it recompiles DRAFTS/NAME.size.c (scripts/m2c_draft.py --c mode), disassembles both
sides and counts calls, branches, loads/stores, float and VU0/MMI instructions and the stack frame. The first rule
that fits names the cause:
  m2c-error   the draft holds M2C_ERROR (an instruction m2c cannot express: VU0 macro mode, mula.s, ...)
  vu0-mmi     the original uses VU0 / MMI / 128-bit instructions (lqc2, vmul, qmfc2, pextlw, lq/sq of data ...)
  jumptable   the original dispatches through a jump table (a C switch would bring its own table)
  calls       a different number of calls (an inline function the original expanded, or one it kept)
  frame       the same calls but another stack frame (locals, saved registers: variables m2c split or merged)
  float       a different number of float instructions (float constants, conversions, f32 vs s32 types)
  memory      a different number of loads/stores (struct copies, pointer reloads, u8* offsets vs fields)
  branches    a different number of branches (loop shape, && / || layout, goto structure)
  other       the counts agree: scheduling / register allocation level differences
"""
import argparse
import csv
import random
import re
import struct
import subprocess
import sys
import tempfile
from collections import Counter
from multiprocessing import Pool
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import m2c_draft  # noqa: E402
import mwmatch  # noqa: E402

VU = re.compile(r"^(v\w+|qmfc2|qmtc2|lqc2|sqc2|ctc2|cfc2|vcallms\w*|mula\.s|madda\.s|msuba\.s|madd\.s|msub\.s|p\w+|lq|sq|mfsa|mtsa|plzcw|pmfhl|pmthl)$")


def mnems(words, addr):
    with tempfile.TemporaryDirectory() as d:
        p = Path(d) / "b"
        p.write_bytes(struct.pack(f"<{len(words)}I", *words))
        r = subprocess.run([str(mwmatch.OBJDUMP), "-D", "-b", "binary", "-m", "mips:5900", "-EL",
                            f"--adjust-vma={addr:#x}", str(p)], capture_output=True, text=True)
    return [l.split("\t")[2].split()[0] if len(l.split("\t")) > 2 else "?" for l in r.stdout.splitlines() if l.startswith("  ")]


def feats(ms):
    f = Counter()
    for m in ms:
        if m in ("jal", "jalr"):
            f["calls"] += 1
        elif m.startswith("b") or m in ("j", "jr"):
            f["branches"] += 1
        if VU.match(m) and m not in ("pref",):
            f["vu"] += 1
        if m in ("lb", "lbu", "lh", "lhu", "lw", "lwu", "ld", "sb", "sh", "sw", "sd", "lwc1", "swc1"):
            f["mem"] += 1
        if m.endswith(".s") or m in ("mtc1", "mfc1", "lwc1", "swc1", "cvt.s.w", "cvt.w.s"):
            f["float"] += 1
    return f


def frame(ms_words):
    return ms_words[0] if ms_words else 0


def work(job):
    name, rel, cfile = job
    text = Path(cfile).read_text()
    body = "\n".join(l for l in text.splitlines() if not l.startswith("// src/"))
    try:
        r = m2c_draft.draft(ROOT / rel, name, c_override=body)
    except Exception as e:
        return dict(function=name, file=rel, cause="error", note=str(e)[:80])
    info = m2c_draft.asm_info(name, (ROOT / rel).read_text())
    asm, size, addr = info[0], info[1], info[2]
    rom = mwmatch.ROM.read_bytes()
    orig = list(struct.unpack(f"<{size // 4}I", rom[addr - 0x100000:addr - 0x100000 + size]))
    words = r.get("words") or []
    if not words:
        return dict(function=name, file=rel, cause="nocompile", note=r["status"])
    a, b = mnems(words, addr), mnems(orig, addr)
    fa, fb = feats(a), feats(b)
    asmtext = asm.read_text()
    note = f"draft {len(a)} orig {len(b)}; calls {fa['calls']}/{fb['calls']} br {fa['branches']}/{fb['branches']} mem {fa['mem']}/{fb['mem']} fl {fa['float']}/{fb['float']} vu {fa['vu']}/{fb['vu']}"
    fr_a = words[0] & 0xFFFF if words and (words[0] >> 16) == 0x27BD else 0
    fr_b = orig[0] & 0xFFFF if orig and (orig[0] >> 16) == 0x27BD else 0
    if "M2C_ERROR" in body:
        cause = "m2c-error"
    elif fb["vu"] > fa["vu"]:
        cause = "vu0-mmi"
    elif "jtbl_" in asmtext:
        cause = "jumptable"
    elif fa["calls"] != fb["calls"]:
        cause = "calls"
    elif fr_a != fr_b:
        cause = "frame"
    elif fa["float"] != fb["float"]:
        cause = "float"
    elif fa["mem"] != fb["mem"]:
        cause = "memory"
    elif fa["branches"] != fb["branches"]:
        cause = "branches"
    else:
        cause = "other"
    return dict(function=name, file=rel, cause=cause, note=note + f"; frame {fr_a:#x}/{fr_b:#x}")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--csv", required=True)
    ap.add_argument("--drafts", required=True)
    ap.add_argument("--sample", type=int, default=60)
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--status", default="size")
    ap.add_argument("-j", type=int, default=6)
    ap.add_argument("--out", default="size_causes.csv")
    a = ap.parse_args()
    jobs = []
    for r in csv.DictReader(open(a.csv)):
        cf = Path(a.drafts) / f"{r['function']}.{r['status']}.c"
        if r["status"] == a.status and cf.exists():
            jobs.append((r["function"], r["file"], str(cf)))
    random.Random(a.seed).shuffle(jobs)
    jobs = jobs[:a.sample] if a.sample else jobs
    rows = []
    with Pool(a.j) as pool:
        for r in pool.imap_unordered(work, jobs):
            rows.append(r)
    with open(a.out, "w", newline="") as fh:
        w = csv.DictWriter(fh, fieldnames=["function", "file", "cause", "note"])
        w.writeheader()
        w.writerows(rows)
    for k, v in Counter(r["cause"] for r in rows).most_common():
        print(f"{v:4} {k}")


if __name__ == "__main__":
    main()
