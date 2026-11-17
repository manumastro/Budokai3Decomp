#!/usr/bin/env python3
"""Prints symbol entries for library functions whose own name appears in an error string they reference.

    names_from_strings.py > config/symbols/lib_strings.txt

Only 1:1 cases are emitted: the function references exactly one such name, and no other function references that
name. The libraries (Sony's, CRI's) print their own function's name in their error messages, e.g.
"E9040822:'adxf' is NULL.(ADXF_Stop)" or "sceGsSyncPath: VU1 does not terminate". Run after a split (configure.py),
from the repository's root. After the model of z3xox/Tenkaichi3Decomp's scripts/names_from_strings.py.
"""

import collections
import glob
import re

TEXT_FILES = ["asm/sdk/text.s", "asm/cri/text.s"]

# "...(Name)" at the end, "E123 Name: ..." / "Name: ..." at the start, "Name;" (CRI's mwSfdGetTime;).
# "Name(): ..." is left out: it often names a callee that failed ("ADXF_GetFnameRangeEx() faild.").
NAME_RE = re.compile(
    r"\(([A-Za-z_]\w{3,})\)\s*(?:\\[rn])*$"
    r"|^(?:[EW]\d+\w*\s*:?\s*)?([A-Za-z_]\w*[A-Z_]\w*)\s*[:;]"
)
# Words that are not the name of the function printing them.
NOT_A_NAME = re.compile(r"^(Error|Internal|ERROR|SRD|HTCI|DVCI|PS2RNA|SND|MC|TTY|SVM|HST|MWSFD|BDEC|null|libpad|libmc|"
                        r"[EW]\d+\w*)$")


def strings():
    out = {}
    for path in glob.glob("asm/data/**/*.s", recursive=True):
        cur = None
        for line in open(path):
            if m := re.match(r"dlabel (\S+)", line):
                cur = m.group(1)
            elif (m := re.search(r'\.asciz "(.*)"', line)) and cur and cur not in out:
                out[cur] = m.group(1)
    return out


def main():
    text = strings()
    names = collections.defaultdict(set)      # function -> names found in its strings
    users = collections.defaultdict(set)      # name -> functions using it
    for path in TEXT_FILES:
        func = None
        for line in open(path):
            if m := re.match(r"glabel (\S+)", line):
                func = m.group(1)
                continue
            for sym in re.findall(r"%lo\((D_[0-9A-F]{8})\)", line):
                s = text.get(sym)
                if not s or func is None:
                    continue
                m = NAME_RE.search(s)
                if not m:
                    continue
                name = next(g for g in m.groups() if g)
                if NOT_A_NAME.match(name) or not func.startswith("func_"):
                    continue
                names[func].add(name)
                users[name].add(func)
    picked = sorted((int(f[5:], 16), next(iter(n)), f) for f, n in names.items()
                    if len(n) == 1 and len(users[next(iter(n))]) == 1)
    print("// Library functions named after the error strings they print (scripts/names_from_strings.py).")
    print("// Only 1:1 cases: the function references one such name, and no other function references it.")
    for addr, name, _ in picked:
        print(f"{name} = 0x{addr:08X}; // type:func")


if __name__ == "__main__":
    main()
