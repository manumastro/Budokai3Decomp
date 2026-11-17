#!/usr/bin/env python3
"""Proposes the source-file boundaries of the Metrowerks code from the order of its data.

    find_files.py [--yaml]         (after configure.py; prints a table, or yaml subsegment lines with --yaml)

The linker lays out every section object by object in the same order, so the file-local data of object k
(its statics in .data, .sdata, .sbss, .bss) all lies before that of object k+1, while inside one object the
variables come in declaration order, unrelated to the order of the functions. So in each data section, a
place where every variable before it is used only by functions before every function using the variables after
it is (nearly always) a boundary between objects; inside an object such a place is rare. The text boundary lies
somewhere between the last user before and the first user after; the earliest function start in that interval is
taken. Variables used from far apart (span over SPAN) are shared, not file-local, and are left out, as are
variables out of line with their neighbours (likely a reference from another file).

Names: a function that passes a file name string ("btl_main.c", the source of an assertion or allocation) names
its file. Files without such a string are named after their first function's address (unk_XXXXXX). This is a
proposal for the yaml; the boundaries are inferred, not checked.
"""

import collections
import re
import sys

from funcinfo import load, sym_addr

PARTS = [("mw_a", 0x12C360, 0x14E5D0), ("mw_b", 0x1A1E80, 0x310980)]
# .data, .sdata, .sbss, .bss (.rodata is left out: string literals come in function order, so it cuts inside files).
SECTIONS = [(0x310980, 0x45CB80), (0x46FD00, 0x470200), (0x470200, 0x470A00), (0x470A00, 0x5D0100)]
SPAN = 0x3000
OUTLIER = 0x6000


def area(name, part):
    """The folder of a file: by the prefix of its name; unnamed files by part."""
    for prefix, folder in (("am", "sys"), ("script", "sys"), ("cnv_sys", "sys"), ("mc_opr", "sys"),
                           ("btl_", "battle"), ("btb_", "battle"), ("char", "battle"), ("skill_", "battle"),
                           ("a2d", "battle"), ("scr_func", "battle"),
                           ("mn_", "menu"), ("ess_", "menu"), ("skl_", "menu"),
                           ("str_", "story"), ("zny_", "story"), ("evt_", "story"), ("opening", "story")):
        if name.startswith(prefix):
            return folder
    return "sys" if part == "mw_a" else "unk"


def cuts_for(users, lo, hi, part_lo, part_hi):
    syms = sorted(a for a in users if lo <= a < hi)
    seq = []
    for a in syms:
        u = [x for x in users[a] if part_lo <= x < part_hi]
        if not u or len(u) != len(users[a]) or max(u) - min(u) >= SPAN:
            continue
        seq.append((min(u), max(u)))
    # Drop values far from the median of their neighbours.
    keep = []
    for i, (l, h) in enumerate(seq):
        win = sorted(x[0] for x in seq[max(0, i - 4):i + 5])
        med = win[len(win) // 2]
        if abs(l - med) <= OUTLIER:
            keep.append((l, h))
    n = len(keep)
    out = []
    pmax = 0
    smin = [0] * (n + 1)
    smin[n] = 1 << 40
    for i in range(n - 1, -1, -1):
        smin[i] = min(smin[i + 1], keep[i][0])
    for i in range(n - 1):
        pmax = max(pmax, keep[i][1])
        if pmax < smin[i + 1]:
            out.append((pmax, smin[i + 1]))
    return out


def main():
    funcs, strings = load()
    users = collections.defaultdict(set)
    filename = {}
    for f in funcs:
        for r in f["refs"]:
            a = sym_addr(r)
            if a is None:
                continue
            if a >= 0x310980:
                users[a].add(f["addr"])
            s = strings.get(a)
            if s and re.fullmatch(r"\w+\.c", s):
                filename.setdefault(f["addr"], s[:-2])
    result = []
    for part, plo, phi in PARTS:
        # Metrowerks starts every function (so every object) on 16 bytes; other labels are inner entries.
        starts = [f["addr"] for f in funcs if plo <= f["addr"] < phi and f["addr"] % 16 == 0]
        bounds = {plo}
        for lo, hi in SECTIONS:
            for a, b in cuts_for(users, lo, hi, plo, phi):
                cand = [s for s in starts if a < s <= b]
                if cand:
                    bounds.add(cand[0])
        bounds = sorted(bounds)
        # Name each file after the file-name strings used inside it; a file with two names is split before the
        # second name's first user (the earliest such function: the boundary is then a guess).
        named = []
        for i, b in enumerate(bounds):
            e = bounds[i + 1] if i + 1 < len(bounds) else phi
            names = [(a, n) for a, n in sorted(filename.items()) if b <= a < e and a % 16 == 0]
            seen = []
            for a, n in names:
                if n not in [x[1] for x in seen]:
                    seen.append((a, n))
            if not seen:
                named.append((b, None))
                continue
            named.append((b, seen[0][1]))
            for a, n in seen[1:]:
                named.append((a, n))
        for b, n in named:
            result.append((part, b, n))
    if "--yaml" in sys.argv:
        used = collections.Counter()
        for part, b, n in result:
            name = n or f"unk_{b:06X}"
            used[name] += 1
            if used[name] > 1:
                name = f"{name}_{used[name]}"
            print(f"      - [0x{b - 0x100000:06X}, asm, {area(name, part)}/{name}]")
    else:
        for part, b, n in result:
            print(f"{part} {b:08X} {n or '-'}")
        print(len(result), "files,", sum(1 for r in result if r[2]), "named", file=sys.stderr)


if __name__ == "__main__":
    main()
