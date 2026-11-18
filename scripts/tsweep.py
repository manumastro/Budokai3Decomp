#!/usr/bin/env python3
"""Declaration-order and local-type sweep for one function (the idea of mh2-decomp's regalloc type sweep).

    tsweep.py src/battle/btl_cmd.c func_001A8300 [--mode order|types|both] [--max N] [-j N] [--out FILE.c]

MWCC numbers a function's values in declaration order (parameters, locals, then compiler temporaries) and colours
them with a Chaitin-style allocator, so the order of the local declarations and the integer type of each local
(s8/u8/s16/u16/s32/u32: a narrower type adds sign/zero extensions and changes lifetimes) decide most saved-register
and temp-register swaps. This tries them mechanically and ranks the variants by instruction differences against the
original (aligned, relocated fields masked), exactly what fdiff measures.

Phases (mode both): baseline; each integer local through every integer type; every declaration order (all
permutations up to 7 locals, else --max random ones); then the best variant is swept again until nothing improves.
Only the leading block of simple declarations (`type name;`, `type a, *b;`, with or without `= init`) is permuted;
a variant that does not compile (an initialiser used before its variable) is skipped. The function must be
defined in C in the file (take it out of `#if 0` first). Prints the ranking and, with --out, writes the best whole
file there (then check it with fdiff/adiff and copy the declarations over by hand: the output is a hint, the
file itself is never changed). Exit status 0 when a variant matches exactly.
"""

import argparse
import itertools
import os
import random
import re
import struct
import sys
import tempfile
import difflib
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import fdiff  # noqa: E402
import mwmatch  # noqa: E402

INTS = ["s8", "u8", "s16", "u16", "s32", "u32"]
INT_ALIASES = {"int": "s32", "unsigned": "u32", "unsigned int": "u32", "signed int": "s32", "short": "s16",
               "unsigned short": "u16", "char": "s8", "unsigned char": "u8", "u8": "u8", "s8": "s8", "u16": "u16",
               "s16": "s16", "u32": "u32", "s32": "s32"}
TYPE_WORDS = r"(?:(?:const|volatile|register|unsigned|signed|struct|union|enum)\s+)*[A-Za-z_]\w*(?:\s+(?:int|long|char|short))*"
DECL = re.compile(rf"^(\s*)({TYPE_WORDS})\s+(\**\s*[A-Za-z_]\w*(?:\[[^\]]*\])?(?:\s*=[^;]*)?(?:\s*,\s*\**\s*[A-Za-z_]\w*"
                  rf"(?:\[[^\]]*\])?(?:\s*=[^;]*)?)*)\s*;\s*(?://.*|/\*.*\*/)?\s*$")


def split_declarators(s):
    parts, depth, cur = [], 0, ""
    for ch in s:
        if ch in "([":
            depth += 1
        elif ch in ")]":
            depth -= 1
        if ch == "," and depth == 0:
            parts.append(cur.strip())
            cur = ""
        else:
            cur += ch
    parts.append(cur.strip())
    return parts


def find_function(text, name):
    m = re.search(rf"^[^\n;#/]*\b{re.escape(name)}\s*\([^;{{]*\)\s*\{{", text, re.M)
    if not m:
        return None
    start = m.end()  # just after the opening brace
    depth, i = 1, start
    while i < len(text) and depth:
        depth += {"{": 1, "}": -1}.get(text[i], 0)
        i += 1
    return start, i - 1  # body without the braces


def parse_locals(body):
    """Leading simple declarations: [(indent, type, declarator)] and the remaining text after them."""
    lines = body.split("\n")
    decls, idx = [], 1  # lines[0] is the rest of the brace line (empty)
    while idx < len(lines):
        line = lines[idx]
        if not line.strip():
            idx += 1
            continue
        m = DECL.match(line)
        if not m or m.group(2).split()[0] in ("return", "goto", "else", "if", "while", "for", "do", "switch"):
            break
        for d in split_declarators(m.group(3)):
            decls.append((m.group(1), m.group(2), d))
        idx += 1
    return decls, "\n".join(lines[idx:]), lines[:1]


def render(decls, rest, head):
    out = list(head)
    for ind, ty, d in decls:
        out.append(f"{ind}{ty} {d};")
    return "\n".join(out) + "\n" + rest


def int_type(ty, d):
    return INT_ALIASES.get(" ".join(ty.split())) if not d.lstrip().startswith("*") and "[" not in d else None


class Sweep:
    def __init__(self, src, func):
        self.src = src.resolve()
        self.func = func
        self.text = self.src.read_text()
        loc = find_function(self.text, func)
        if not loc:
            sys.exit(f"{func}: no C definition found in {src} (take it out of #if 0)")
        self.a, self.b = loc
        self.decls, self.rest, self.head = parse_locals(self.text[self.a:self.b])
        self.version, self.flags = fdiff.game_compiler(src)
        m = re.fullmatch(r"func_([0-9A-F]{8})", func)
        self.addr = int(m.group(1), 16) if m else fdiff.symbol_addresses().get(func)
        if self.addr is None:
            sys.exit(f"{func}: no address")
        rom = mwmatch.ROM.read_bytes()
        starts = fdiff.function_starts()
        nxt = next((a for a in starts if a > self.addr), self.addr + 4)
        n = (nxt - self.addr) // 4
        orig = list(struct.unpack(f"<{n}I", rom[self.addr - mwmatch.VRAM:self.addr - mwmatch.VRAM + 4 * n]))
        while orig and orig[-1] == 0:
            orig.pop()
        self.orig = orig
        self.cache = {}

    def variant_text(self, decls):
        return self.text[:self.a] + render(decls, self.rest, self.head) + self.text[self.b:]

    def score(self, decls, tag=0):
        key = tuple(decls)
        if key in self.cache:
            return self.cache[key]
        text = self.variant_text(decls)
        fd, path = tempfile.mkstemp(suffix=".c", prefix=".tsweep_", dir=self.src.parent)
        os.close(fd)
        obj = Path(path + ".o")
        try:
            Path(path).write_text(text)
            err = mwmatch.compile_c(self.version, self.flags, Path(path), obj)
            if err:
                res = (10 ** 6, None)
            else:
                fns = mwmatch.functions(obj)
                if self.func not in fns:
                    res = (10 ** 6, None)
                else:
                    words, relocs = fns[self.func]
                    mw = [mwmatch.mask(w, i in relocs) for i, w in enumerate(words)]
                    ow = [mwmatch.mask(w, i in relocs) for i, w in enumerate(self.orig)]
                    if len(mw) == len(ow):
                        full = sum(1 for x, y in zip(mw, ow) if x != y)
                    else:
                        sm = difflib.SequenceMatcher(None, mw, ow, autojunk=False)
                        full = max(len(mw), len(ow)) - sum(bl.size for bl in sm.get_matching_blocks())
                        full += abs(len(mw) - len(ow))
                    res = (full, text)
        finally:
            for p in (Path(path), obj):
                try:
                    p.unlink()
                except OSError:
                    pass
        self.cache[key] = res
        return res


def type_variants(decls):
    for i, (ind, ty, d) in enumerate(decls):
        cur = int_type(ty, d)
        if cur is None:
            continue
        for t in INTS:
            if t != cur:
                yield tuple(decls[:i]) + ((ind, t, d),) + tuple(decls[i + 1:])


def order_variants(decls, limit, rng):
    n = len(decls)
    idx = list(range(n))
    if n <= 7:
        perms = list(itertools.permutations(idx))
        rng.shuffle(perms)
    else:
        perms = []
        for _ in range(limit):
            p = idx[:]
            rng.shuffle(p)
            perms.append(tuple(p))
    for p in perms[:limit]:
        yield tuple(decls[i] for i in p)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("src", type=Path)
    ap.add_argument("func")
    ap.add_argument("--mode", choices=["order", "types", "both"], default="both")
    ap.add_argument("--max", type=int, default=1500, help="most orders tried per round")
    ap.add_argument("-j", type=int, default=8)
    ap.add_argument("--out", type=Path)
    ap.add_argument("--top", type=int, default=5)
    args = ap.parse_args()
    sw = Sweep(args.src, args.func)
    rng = random.Random(1)
    base = tuple(sw.decls)
    print(f"{args.func}: {len(base)} leading locals, original {len(sw.orig)} instructions", file=sys.stderr)
    base_score = sw.score(base)[0]
    print(f"baseline: {base_score} differ", file=sys.stderr)
    best, best_score = base, base_score
    pool = ThreadPoolExecutor(args.j)

    def run(cands):
        cands = list(dict.fromkeys(cands))
        return list(zip(cands, pool.map(lambda c: sw.score(c)[0], cands)))

    rounds = 0
    while best_score > 0 and rounds < 4:
        rounds += 1
        improved = False
        if args.mode in ("types", "both"):
            for c, s in run(type_variants(best)):
                if s < best_score:
                    best, best_score, improved = c, s, True
        if args.mode in ("order", "both") and len(best) > 1:
            for c, s in run(order_variants(best, args.max, rng)):
                if s < best_score:
                    best, best_score, improved = c, s, True
        print(f"round {rounds}: best {best_score} ({len(sw.cache)} variants compiled)", file=sys.stderr)
        if not improved:
            break
    ranked = sorted(((s, k) for k, (s, _) in sw.cache.items()), key=lambda x: x[0])
    for s, k in ranked[:args.top]:
        if s >= 10 ** 6:
            continue
        print(f"--- {s} instructions differ")
        for ind, ty, d in k:
            print(f"{ind}{ty} {d};")
    if args.out and sw.cache[best][1]:
        args.out.write_text(sw.cache[best][1])
        print(f"best variant written to {args.out}", file=sys.stderr)
    print(f"RESULT {args.func}: baseline {base_score} -> best {best_score} ({len(sw.cache)} variants)")
    sys.exit(0 if best_score == 0 else 1)


if __name__ == "__main__":
    main()
