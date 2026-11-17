#!/usr/bin/env python3
"""Shared reader for the split: functions of the code parts with the data symbols each one references.

    from funcinfo import load
    funcs, strings = load()

funcs: list of dicts {name, addr, size, part, refs: [D_xxxxxxxx...], calls: [names]} in address order;
strings: {address: text} for every string splat recognised in the data files. Run after configure.py.
"""

import glob
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def load_strings():
    out = {}
    for path in glob.glob(str(ROOT / "asm/data/**/*.s"), recursive=True):
        for line in open(path):
            m = re.match(r'\s+/\* \w+ ([0-9A-F]{8}) \*/ \.asciz "(.*)"', line)
            if m:
                out[int(m.group(1), 16)] = m.group(2)
    return out


def load():
    funcs = []
    files = sorted(glob.glob(str(ROOT / "asm/**/*.s"), recursive=True))
    for path in files:
        rel = Path(path).relative_to(ROOT)
        if rel.parts[1] == "data" or "nonmatchings" in rel.parts:
            continue
        cur = None
        for line in open(path):
            m = re.match(r"glabel (\S+)", line)
            if m:
                cur = {"name": m.group(1), "addr": None, "end": None, "file": str(rel), "refs": [], "calls": []}
                funcs.append(cur)
                continue
            if cur is None:
                continue
            m = re.match(r"\s+/\* \w+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(\S+)\s*(.*)", line)
            if not m:
                continue
            addr = int(m.group(1), 16)
            if cur["addr"] is None:
                cur["addr"] = addr
            cur["end"] = addr + 4
            op, args = m.group(2), m.group(3)
            for sym in re.findall(r"%(?:lo|gp_rel)\((\w+)\)", args):
                cur["refs"].append(sym)
            if op in ("jal", "j") and not args.startswith("."):
                cur["calls"].append(args.strip())
    funcs.sort(key=lambda f: f["addr"])
    return funcs, load_strings()


def sym_addr(name):
    m = re.search(r"([0-9A-F]{6,8})$", name)
    return int(m.group(1), 16) if m else None
