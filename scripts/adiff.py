#!/usr/bin/env python3
"""Aligned diff of one compiled function against the original (after mh2-decomp's tools/adiff.py).

    adiff.py src/battle/btl_cmd.c func_001A84B0 [-q] [-c N] [-D NAME] [--c ALT.c]

fdiff.py compares word by word, so one extra or missing instruction makes every later word differ. This lines the
two disassemblies up first (difflib), so an inserted instruction shows as one line and the rest match again.

Marks: '!' differs, '~' same except a relocated operand, '>' same branch except its target (shifted by an insertion
elsewhere). The last line is `FUNC mn=M full=F orig=O ours=N`: M counts differences in the mnemonic sequence alone
(registers and constants ignored), F the differing aligned instructions, O and N the lengths. Rank near drafts by F,
then M. Exit status 0 only on a full match.

-q prints only the summary; -c N shows N lines of context around each difference (default: everything);
-D NAME defines a macro for the compile (for a function under #ifdef NON_MATCHING); --c ALT.c compiles ALT.c
(placed next to the real file, same flags) instead of the file, for a scratch attempt. The function must be defined
in C in the compiled text (a parked `#if 0` attempt is not compiled: use --c with the block moved out).
"""

import argparse
import difflib
import re
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import fdiff  # noqa: E402
import mwmatch  # noqa: E402

ROOT = fdiff.ROOT


def disasm(words, addr, relocs):
    """[(text, mnemonic, is_branch, is_relocated)] per word, address-free so equal code compares equal."""
    with tempfile.TemporaryDirectory() as d:
        p = Path(d) / "f.bin"
        p.write_bytes(struct.pack(f"<{len(words)}I", *words))
        r = subprocess.run([str(mwmatch.OBJDUMP), "-D", "-z", "-b", "binary", "-m", "mips:5900", "-EL",
                            f"--adjust-vma={addr:#x}", str(p)], capture_output=True, text=True)
    out = []
    for line in r.stdout.splitlines():
        if not line.startswith("  "):
            continue
        parts = line.split("\t")
        if len(parts) < 3:
            continue
        text = parts[2].strip() if len(parts) < 4 else (parts[2] + " " + parts[3]).strip()
        text = re.sub(r"\s*<.*>$", "", text)
        mn = text.split()[0] if text else ""
        out.append((text, mn))
    return out


def norm(text, branch_target=False):
    if branch_target:
        return re.sub(r"0x[0-9a-f]+$", "T", text)
    return text


def run(src, func, defines=(), alt=None):
    """(words, relocs, orig_words, addr, name) for FUNC compiled from SRC (or ALT, placed beside SRC)."""
    version, flags = fdiff.game_compiler(src)
    flags += "".join(f" -D{d}" for d in defines)
    syms = fdiff.symbol_addresses()
    with tempfile.TemporaryDirectory() as d:
        obj = Path(d) / "out.o"
        csrc = (alt or src).resolve()
        err = mwmatch.compile_c(version, flags, csrc, obj)
        if err:
            return None, err
        fns = mwmatch.functions(obj)
    if func not in fns:
        return None, f"{func}: not defined in C in {csrc.name} (compiled: {', '.join(list(fns)[:8])}...)"
    words, relocs = fns[func]
    m = re.fullmatch(r"func_([0-9A-F]{8})", func)
    addr = int(m.group(1), 16) if m else syms.get(func)
    if addr is None:
        return None, f"{func}: no address"
    rom = mwmatch.ROM.read_bytes()
    starts = fdiff.function_starts()
    nxt = next((a for a in starts if a > addr), addr + 4 * len(words))
    n = (nxt - addr) // 4
    # strip trailing alignment padding (nops) the next function start includes
    orig = list(struct.unpack(f"<{n}I", rom[addr - mwmatch.VRAM:addr - mwmatch.VRAM + 4 * n]))
    while orig and orig[-1] == 0 and len(orig) > len(words):
        orig.pop()
    return (words, relocs, orig, addr), None


def align(words, relocs, orig, addr):
    """Aligned rows [(mark, ours_text, orig_text)] and (mn, full)."""
    ours = disasm(words, addr, relocs)
    theirs = disasm(orig, addr, set())
    mw = [mwmatch.mask(w, i in relocs) for i, w in enumerate(words)]
    ow = [mwmatch.mask(w, i in relocs) for i, w in enumerate(orig)]
    key_a = [(t, mn) for t, mn in ours]
    key_b = [(t, mn) for t, mn in theirs]
    # compare on masked words, not text: robust against relocated operands and branch targets
    sm = difflib.SequenceMatcher(None, mw, ow, autojunk=False)
    rows = []
    full = mn_diff = 0
    for tag, a0, a1, b0, b1 in sm.get_opcodes():
        if tag == "equal":
            for i, j in zip(range(a0, a1), range(b0, b1)):
                rows.append((" ", key_a[i][0], key_b[j][0]))
            continue
        n = max(a1 - a0, b1 - b0)
        for k in range(n):
            i = a0 + k if a0 + k < a1 else None
            j = b0 + k if b0 + k < b1 else None
            ta = key_a[i][0] if i is not None else ""
            tb = key_b[j][0] if j is not None else ""
            mark = "!"
            if i is not None and j is not None:
                if norm(ta, True) == norm(tb, True) and ta.split()[0:1] and ta.split()[0] in (
                        "b", "beq", "bne", "beqz", "bnez", "bgez", "bgtz", "blez", "bltz", "beql", "bnel", "j"):
                    mark = ">"
                    full -= 1
                if ta.split()[:1] != tb.split()[:1]:
                    mn_diff += 1
            else:
                mn_diff += 1
            rows.append((mark, ta, tb))
            full += 1
    # relocated operands that differ only in target are the '~' rows: words equal under mask but text differs
    fixed = []
    for mark, ta, tb in rows:
        if mark == " " and ta != tb:
            mark = "~"
        fixed.append((mark, ta, tb))
    return fixed, mn_diff, max(full, 0)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("src", type=Path)
    ap.add_argument("func")
    ap.add_argument("-q", action="store_true")
    ap.add_argument("-c", type=int, default=-1)
    ap.add_argument("-D", action="append", default=[])
    ap.add_argument("--c", dest="alt", type=Path)
    args = ap.parse_args()
    res, err = run(args.src, args.func, args.D, args.alt)
    if err:
        print(err)
        sys.exit(2)
    words, relocs, orig, addr = res
    rows, mn, full = align(words, relocs, orig, addr)
    if not args.q:
        keep = set()
        for i, (mark, _, _) in enumerate(rows):
            if mark in "!>":
                keep.update(range(max(0, i - args.c), min(len(rows), i + args.c + 1))) if args.c >= 0 else None
        for i, (mark, ta, tb) in enumerate(rows):
            if args.c >= 0 and i not in keep:
                continue
            print(f"{mark} {ta:44} | {tb}")
    print(f"{args.func} mn={mn} full={full} orig={len(orig)} ours={len(words)}")
    sys.exit(0 if full == 0 and len(words) == len(orig) else 1)


if __name__ == "__main__":
    main()
