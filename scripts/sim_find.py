#!/usr/bin/env python3
"""Finds, for every function still in assembly, the most similar function already written in C.

    sim_find.py [--out build/sim/siblings.json] [--min 0.6]

Both sides are read from the original executable (disc/SLUS_209.98.rom), so a C function is compared through the
bytes it matches. Each instruction becomes a token with the registers kept and the immediates / jump targets
masked (relocated fields and struct offsets alike). Candidates come from an inverted index of token 4-grams (rare
n-grams weigh more), limited to the same compiler family (Metrowerks game code, or the gcc libraries) and sizes
within a factor of 1.5; the best candidates are scored with difflib's ratio on the token sequences.

Output (JSON, one entry per function in assembly):
  {name: {addr, size, part, sibling, sibling_addr, sibling_size, sibling_file, score, identical, same_length}}
`identical` means the token sequences are equal (only immediates, symbols and jump targets can differ);
scripts/sim_clone.py then tries to turn the sibling's C into the function. Needs a finished build (build/src
objects and the linked map, as scripts/progress.py).
"""
import argparse
import json
import math
import re
import struct
import sys
from collections import Counter, defaultdict
from difflib import SequenceMatcher
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import progress  # noqa: E402

ROM = ROOT / "disc" / "SLUS_209.98.rom"
VRAM = 0x100000
N = 4


def family(addr):
    """mw (game and am* layer) or gcc (SDK, libc, CRI)."""
    if 0x12C360 <= addr < 0x14E5D0 or 0x1A1E80 <= addr < 0x310980:
        return "mw"
    return "gcc"


def token(w):
    op = w >> 26
    if op in (2, 3):              # j / jal
        return w & 0xFC000000
    if op == 0 or op == 0x1C:     # SPECIAL, MMI: register forms
        return w
    if op in (0x10, 0x11, 0x12):  # COP0/1/2: branches have an offset, the rest are register forms
        rs = (w >> 21) & 0x1F
        return w & 0xFFFF0000 if rs == 8 else w
    return w & 0xFFFF0000         # I-type: opcode, rs, rt kept; immediate masked


def tokens(rom, addr, size):
    off = addr - VRAM
    words = struct.unpack(f"<{size // 4}I", rom[off:off + size])
    # trailing nops (alignment padding) are not part of the code
    n = len(words)
    while n > 1 and words[n - 1] == 0:
        n -= 1
    return [token(w) for w in words[:n]], list(words[:n])


def c_files():
    """{function name: C file} of the functions written in C (top-level definitions)."""
    out = {}
    for p in sorted((ROOT / "src").rglob("*.c")):
        for m in re.finditer(r"^[A-Za-z_][\w \*]*?\b(\w+)\([^;{}]*\)\s*\{", p.read_text(), re.M):
            out.setdefault(m.group(1), p.relative_to(ROOT).as_posix())
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--out", default="build/sim/siblings.json")
    ap.add_argument("--min", type=float, default=0.5)
    ap.add_argument("--top", type=int, default=25, help="candidates scored per function")
    a = ap.parse_args()
    rom = ROM.read_bytes()
    asm = progress.asm_functions()
    cfun = progress.c_functions()
    files = c_files()
    C = {}
    for addr, (name, size) in cfun.items():
        if size >= 8 and name in files:
            t, _ = tokens(rom, addr, size)
            C[addr] = (name, size, t)
    index = defaultdict(list)
    for addr, (_, _, t) in C.items():
        for g in set(tuple(t[i:i + N]) for i in range(len(t) - N + 1)):
            index[g].append(addr)
    exact = defaultdict(list)
    for addr, (_, _, t) in C.items():
        exact[(family(addr), tuple(t))].append(addr)
    nC = max(len(C), 1)
    res = {}
    for addr, (name, size) in sorted(asm.items()):
        if size < 8 or addr in cfun:
            continue  # (an INCLUDE_ASM's .s stays in asm/ after the function is written in C)
        t, _ = tokens(rom, addr, size)
        fam = family(addr)
        best = None
        hit = [c for c in exact.get((fam, tuple(t)), [])]
        if hit:
            best = (1.0, hit[0])
        else:
            score = Counter()
            grams = set(tuple(t[i:i + N]) for i in range(len(t) - N + 1))
            for g in grams:
                lst = index.get(g)
                if not lst or len(lst) > 300:
                    continue
                w = math.log(nC / len(lst))
                for c in lst:
                    if family(c) == fam:
                        score[c] += w
            for c, _ in score.most_common(a.top):
                ct = C[c][2]
                if not (len(t) / 1.5 <= len(ct) <= len(t) * 1.5):
                    continue
                r = SequenceMatcher(None, t, ct, autojunk=False).ratio()
                if best is None or r > best[0]:
                    best = (r, c)
        if best is None or best[0] < a.min:
            continue
        r, c = best
        cname, csize, ct = C[c]
        res[name] = dict(addr=f"0x{addr:08X}", size=size, part=fam, sibling=cname, sibling_addr=f"0x{c:08X}",
                         sibling_size=csize, sibling_file=files.get(cname), score=round(r, 4),
                         identical=t == ct, same_length=len(t) == len(ct))
    out = ROOT / a.out
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(res, indent=1, sort_keys=True))
    vals = list(res.values())
    for fam in ("mw", "gcc"):
        v = [x for x in vals if x["part"] == fam]
        print(f"{fam}: {len(v)} with a sibling >= {a.min}; identical {sum(x['identical'] for x in v)}, "
              f">= 0.95 {sum(x['score'] >= 0.95 for x in v)}, >= 0.90 {sum(x['score'] >= 0.9 for x in v)}, "
              f">= 0.80 {sum(x['score'] >= 0.8 for x in v)}")
    print(f"asm functions: {len(asm)}, C functions indexed: {len(C)} -> {out}")


if __name__ == "__main__":
    main()
