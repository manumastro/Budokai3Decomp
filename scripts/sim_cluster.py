#!/usr/bin/env python3
"""Clusters the functions still in assembly by instruction similarity among themselves (not against C).

    sim_cluster.py [--min 0.85] [--mode reg|norm] [--fam mw|gcc] [--out build/sim/clusters.json]

reg  : tokens as sim_find.py (registers kept, immediates masked)
norm : registers renamed by first appearance inside the function (catches clones whose allocation differs)
A cluster = connected component of pairs with ratio >= --min and lengths within 10 %.
Reports: clusters, members, bytes; "unlock" = members - clusters (functions a single match per cluster could clone).
"""
import argparse, json, math, sys
from collections import Counter, defaultdict
from difflib import SequenceMatcher
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))
import progress  # noqa
import sim_find  # noqa

N = 4


def norm_tokens(words):
    """Opcode skeleton with registers renamed by first appearance (rs, rt, rd fields)."""
    out = []
    ren = {}

    def r(x):
        if x == 0:
            return 0
        if x not in ren:
            ren[x] = len(ren) + 1
        return ren[x]
    for w in words:
        op = w >> 26
        if op in (2, 3):
            out.append(("J", op)); continue
        rs, rt, rd = (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
        if op == 0 or op == 0x1C:
            out.append((op, w & 0x3F, r(rs), r(rt), r(rd), (w >> 6) & 31)); continue
        if op in (0x10, 0x11, 0x12):
            out.append((op, rs, rt if rs == 8 else ((w >> 11) & 31, w & 0x7FF))); continue
        out.append((op, r(rs), r(rt)))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--min", type=float, default=0.85)
    ap.add_argument("--mode", default="reg")
    ap.add_argument("--fam", default="mw")
    ap.add_argument("--minsize", type=int, default=0x20)
    ap.add_argument("--out", default="build/sim/clusters.json")
    a = ap.parse_args()
    rom = sim_find.ROM.read_bytes()
    asm = progress.asm_functions()
    cfun = progress.c_functions()
    F = {}
    for addr, (name, size) in asm.items():
        if size < a.minsize or addr in cfun or sim_find.family(addr) != a.fam:
            continue
        t, words = sim_find.tokens(rom, addr, size)
        if a.mode == "norm":
            t = norm_tokens(words)
        F[addr] = (name, size, t)
    index = defaultdict(list)
    for addr, (_, _, t) in F.items():
        for g in set(tuple(t[i:i + N]) for i in range(len(t) - N + 1)):
            index[g].append(addr)
    nF = len(F)
    parent = {x: x for x in F}

    def find(x):
        while parent[x] != x:
            parent[x] = parent[parent[x]]
            x = parent[x]
        return x
    pairs = []
    for addr, (name, size, t) in F.items():
        score = Counter()
        for g in set(tuple(t[i:i + N]) for i in range(len(t) - N + 1)):
            lst = index[g]
            if len(lst) > 200:
                continue
            w = math.log(nF / len(lst))
            for c in lst:
                if c > addr:
                    score[c] += w
        for c, _ in score.most_common(15):
            ct = F[c][2]
            if not (len(t) / 1.1 <= len(ct) <= len(t) * 1.1):
                continue
            rt = SequenceMatcher(None, t, ct, autojunk=False).ratio()
            if rt >= a.min:
                pairs.append((addr, c, rt))
                parent[find(addr)] = find(c)
    comp = defaultdict(list)
    for x in F:
        comp[find(x)].append(x)
    cl = [sorted(v) for v in comp.values() if len(v) > 1]
    cl.sort(key=lambda v: -len(v))
    mem = sum(len(v) for v in cl)
    byts = sum(F[x][1] for v in cl for x in v)
    unlock_b = sum(sum(F[x][1] for x in v) - min(F[x][1] for x in v) for v in cl)
    print(f"{a.fam} mode={a.mode} min={a.min}: {nF} functions, {len(cl)} clusters, {mem} members, "
          f"unlock {mem - len(cl)} functions / {unlock_b} bytes (of {sum(f[1] for f in F.values())})")
    hist = Counter(len(v) for v in cl)
    print("cluster sizes:", dict(sorted(hist.items())))
    out = [[dict(name=F[x][0], addr=f"0x{x:08X}", size=F[x][1]) for x in v] for v in cl]
    p = ROOT / a.out
    p.write_text(json.dumps(out, indent=1))
    for v in cl[:12]:
        print(len(v), " ".join(f"{F[x][0]}({F[x][1]:#x})" for x in v[:8]))


if __name__ == "__main__":
    main()
