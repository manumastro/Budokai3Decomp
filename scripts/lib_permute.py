#!/usr/bin/env python3
"""decomp-permuter over the m2c drafts of the gcc library functions (Sony SDK, libc, CRI) that are close but not exact.

    lib_permute.py run [--input lib_all.json] [--out DIR] [--budget 120] [--cpus 12] [--max-diff 15] [--max-size 8]
                       [--names a,b,c] [--limit N]
    lib_permute.py check NAME ...          set up NAME(s) and print the permuter's base score only

Input: the json of scripts/lib_m2c.py draft (list of {addr, name, status, diff, flags, version, decls, func}).
Candidates: status "diff" with diff <= --max-diff instructions and status "size" with diff <= --max-size bytes,
closest first. For each: a permuter folder build/permute/NAME holding
  base.c        `#include "common.h"` + decls + func, preprocessed by that build's ee-cpp (-P, no directives left)
  target.o      the original function: asm/ text assembled as an INCLUDE_ASM in the build is (gcc_prelude.inc + macro.inc)
  compile.sh    ee-gcc (native: the 32-bit builds run in WSL; no docker) with the draft's flags, then the build's
                assembler call (gcc_prelude.inc) -> the .o the permuter scores
  settings.toml func_name, compiler_type "gcc", the r5900 objdump
then tools/permuter/permuter.py -j1 --stop-on-zero for --budget seconds, --cpus functions at a time.
Every score-0 output is re-checked with gccmatch (same compile + word compare as lib_m2c.py: every word equal,
same size, no data). Outputs under --out (default ~/b3-scan/perm, or $B3_SCAN/perm):
  perm_matches.json   [{addr, name, decls, func, status: "match", flags, version, source: "permuter"}]
  perm_report.csv     name, addr, base, best, seconds, status (zero / improved / same / nocompile / error / unverified)
  best/NAME.c         the best non-zero result's function (with its declarations)
Needs the venv's toml and Levenshtein, tools/permuter, tools/eegcc/<version>, disc/ and asm/ (configure.py).
"""

import argparse
import csv
import json
import os
import re
import shutil
import subprocess
import sys
import tempfile
import time
from multiprocessing import Pool
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT))
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.insert(0, str(ROOT / "scripts" / "eegcc"))
import eegcc  # noqa: E402
import gccmatch as g  # noqa: E402
import libport as lp  # noqa: E402
import lib_m2c  # noqa: E402
import permuter_import as pi  # noqa: E402  (chunks / is_function_def / function_name)

PY = sys.executable
WORK = ROOT / "build" / "permute"
DEFAULT_OUT = Path(os.environ.get("B3_SCAN", Path.home() / "b3-scan")) / "perm"
EE_DEFS = ["-DNO_INCLUDE_ASM", "-I" + str(ROOT / "include"), "-I" + str(ROOT / "src")]


def native_cmd(version):
    """The argv prefix of ee-gcc for this version, run directly (Linux builds only)."""
    k, _ = eegcc.VERSIONS[version]
    if k != "linux":
        raise SystemExit(f"{version}: not a Linux build")
    return eegcc.command(version, [])


def source_text(e):
    return '#include "common.h"\n\n' + "\n".join(dict.fromkeys(e["decls"])) + "\n\n" + e["func"]


_ASM = {}


def func_asm_text(addr):
    if not _ASM:
        _ASM.update(lib_m2c.function_asm())
    return _ASM.get(addr)


def setup(e):
    """Builds build/permute/NAME. Returns (dir, None) or (None, error text)."""
    name = e["name"]
    d = WORK / name
    shutil.rmtree(d, ignore_errors=True)
    d.mkdir(parents=True)
    ent = func_asm_text(e["addr"])
    if not ent:
        return None, "no asm"
    # base.c: the preprocessed draft
    (d / "_src.c").write_text(source_text(e))
    r = subprocess.run([*native_cmd(e["version"]), "-E", "-P", "-D__attribute__(x)=", *EE_DEFS, str(d / "_src.c")],
                       capture_output=True, text=True, cwd=ROOT)
    if r.returncode:
        return None, "cpp: " + r.stderr.strip()[-120:]
    pieces = pi.chunks(r.stdout)
    keep, mine = [], None
    for c in pieces:
        if pi.is_function_def(c) and pi.function_name(c) == name:
            mine = c
        else:
            keep.append(c)
    if not mine:
        return None, "function not found after cpp"
    (d / "base.c").write_text("\n".join(c if c.endswith(("}", ";")) else c + ";" for c in keep) + "\n\n" + mine + "\n")
    (d / "_src.c").unlink()
    # target.o
    (d / "target.s").write_text('.include "macro.inc"\n.set noat\n.set noreorder\n' + ent[1])
    r = subprocess.run([str(g.BINUTILS) + "as", *g.GAS_FLAGS, "-G0", "-Iinclude", str(g.PRELUDE), str(d / "target.s"), "-o",
                        str(d / "target.o")], capture_output=True, text=True, cwd=ROOT)
    if r.returncode:
        return None, "target as: " + r.stderr.strip()[-120:]
    # compile.sh
    cmd = " ".join(shlex_quote(a) for a in native_cmd(e["version"]))
    flags = e["flags"]
    (d / "compile.sh").write_text(f"""#!/bin/bash
# input.c -o output.o as the permuter calls it: ee-gcc {e['version']} {flags}, then the build's assembler call
IN=$(realpath "$1"); OUT=$(realpath -m "$3")
S=$(mktemp --suffix=.s)
trap 'rm -f "$S"' EXIT
cd {shlex_quote(str(ROOT))}
{cmd} {flags} -S "$IN" -o "$S" || exit 1
{g.BINUTILS}as {' '.join(g.GAS_FLAGS)} -G0 -Iinclude {g.PRELUDE} "$S" -o "$OUT"
""")
    (d / "compile.sh").chmod(0o755)
    objdump = f"{g.BINUTILS}objdump -drz -m mips:5900"
    (d / "settings.toml").write_text(f'func_name = "{name}"\ncompiler_type = "gcc"\nobjdump_command = "{objdump}"\n')
    (d / "function.txt").write_text(name + "\n")
    r = subprocess.run(["bash", str(d / "compile.sh"), str(d / "base.c"), "-o", str(d / "base.o")],
                       capture_output=True, text=True)
    if r.returncode or not (d / "base.o").exists():
        return None, "base.c does not compile: " + (r.stderr.strip().splitlines() or [""])[-1][:120]
    return d, None


def shlex_quote(s):
    import shlex
    return shlex.quote(s)


def verify(e, func):
    """gccmatch's check of decls + func with the entry's flags/version. Returns True when it is an exact match."""
    exe = lp.Exe()
    size = exe.sizes.get(e["addr"])
    body = source_text(dict(e, func=func))
    src = ROOT / "build" / "permute" / f"v_{e['addr']:08X}.c"
    src.write_text(body)
    objs, w = g.compile_matrix(src, [e["version"]], [e["flags"]], "gas", ["NO_INCLUDE_ASM"],
                               include_dirs=["include", "src"], keep=str(Path("build/permute") / f"vw_{e['addr']:08X}"))
    try:
        obj = objs[(e["version"], e["flags"])]
        if not isinstance(obj, Path):
            return False
        fns = g.objects_functions(obj)
        if e["name"] not in fns:
            return False
        words, masks = fns[e["name"]]
        diffs, _ = g.compare(words, masks, e["addr"], exe.rom)
        ob = lp.Obj(obj)
        data = any(ob.secs.get(s, (0, 0))[1] for s in (".data", ".rodata", ".bss", ".sdata", ".sbss", ".lit4", ".lit8"))
        return size is not None and 4 * len(words) == size and not diffs and not data
    finally:
        shutil.rmtree(w, ignore_errors=True)
        src.unlink(missing_ok=True)


def output_func(d, name):
    """Function text of a permuter output folder (source.c)."""
    for c in pi.chunks((d / "source.c").read_text()):
        if pi.is_function_def(c) and pi.function_name(c) == name:
            return c + "\n"
    return None


def job(args):
    e, budget, out = args
    name = e["name"]
    t0 = time.time()
    row = dict(name=name, addr=f"{e['addr']:08X}", base=-1, best=-1, seconds=0, status="error")
    try:
        d, err = setup(e)
        if d is None:
            row.update(status="nocompile", detail=err)
            row["seconds"] = round(time.time() - t0)
            return row, None
        p = subprocess.run(["timeout", str(budget), PY, str(ROOT / "tools/permuter/permuter.py"), str(d), "-j", "1",
                            "--stop-on-zero"], capture_output=True, text=True, cwd=ROOT / "tools/permuter")
        txt = p.stdout
        base = re.findall(r"base score = (\d+)", txt)
        news = [int(x) for x in re.findall(r"new best score! \((\d+) vs", txt)]
        b = int(base[0]) if base else -1
        best = min(news + ([b] if b >= 0 else [])) if (news or b >= 0) else -1
        row.update(base=b, best=best)
        if b < 0:
            row.update(status="error", detail=(txt + p.stderr).strip()[-160:])
        elif best == 0:
            z = sorted(d.glob("output-0-*"))
            func = output_func(z[0], name) if z else None
            if func and verify(e, func):
                row["status"] = "zero"
                res = dict(addr=e["addr"], name=name, decls=e["decls"], func=func, status="match", flags=e["flags"],
                           version=e["version"], source="permuter")
                row["seconds"] = round(time.time() - t0)
                return row, res
            row["status"] = "unverified"
        elif best < b:
            row["status"] = "improved"
            outs = sorted(d.glob("output-*"), key=lambda x: int(x.name.split("-")[1]))
            func = output_func(outs[0], name) if outs else None
            if func:
                (out / "best").mkdir(parents=True, exist_ok=True)
                (out / "best" / f"{name}.c").write_text(
                    f"// {name} {e['addr']:08X} {e['flags']} ee-gcc {e['version']}: score {b} -> {best}\n"
                    + "\n".join(dict.fromkeys(e["decls"])) + "\n\n" + func)
        else:
            row["status"] = "same"
    except Exception as ex:  # noqa: BLE001
        row.update(status="error", detail=repr(ex)[:160])
    row["seconds"] = round(time.time() - t0)
    shutil.rmtree(WORK / name, ignore_errors=True) if row["status"] in ("same", "nocompile") else None
    return row, None


def candidates(a):
    data = json.load(open(a.input))
    c = [e for e in data if (e["status"] == "diff" and e.get("diff", 99) <= a.max_diff)
         or (e["status"] == "size" and e.get("diff", 99) <= a.max_size)]
    c = [e for e in c if func_asm_text(e["addr"])]  # already converted to C: nothing to permute
    if a.names:
        ns = set(a.names.split(","))
        c = [e for e in data if e["name"] in ns and func_asm_text(e["addr"])]
    else:
        c.sort(key=lambda e: (e["status"] != "diff", e["diff"], e["addr"]))
    return c[:a.limit] if a.limit else c


def run(a):
    out = Path(a.out)
    out.mkdir(parents=True, exist_ok=True)
    WORK.mkdir(parents=True, exist_ok=True)
    cands = candidates(a)
    print(f"{len(cands)} drafts, budget {a.budget}s, {a.cpus} at a time", flush=True)
    rows, matches = [], []
    csvp = out / "perm_report.csv"
    with Pool(a.cpus) as pool:
        for row, res in pool.imap_unordered(job, [(e, a.budget, out) for e in cands]):
            rows.append(row)
            if res:
                matches.append(res)
            print(row["name"], row["base"], row["best"], row["status"], flush=True)
            if len(rows) % 10 == 0 or res:
                write_outputs(out, csvp, rows, matches)
    write_outputs(out, csvp, rows, matches)
    cnt = {}
    for r in rows:
        cnt[r["status"]] = cnt.get(r["status"], 0) + 1
    print(cnt)


def write_outputs(out, csvp, rows, matches):
    (out / "perm_matches.json").write_text(json.dumps(matches, indent=0))
    with open(csvp, "w", newline="") as f:
        w = csv.writer(f)
        w.writerow(["name", "addr", "base", "best", "seconds", "status"])
        for r in sorted(rows, key=lambda r: r["addr"]):
            w.writerow([r["name"], r["addr"], r["base"], r["best"], r["seconds"], r["status"]])


def check(a):
    data = {e["name"]: e for e in json.load(open(a.input))}
    for n in a.names_list:
        e = data[n]
        d, err = setup(e)
        if d is None:
            print(n, "SETUP FAIL", err)
            continue
        p = subprocess.run(["timeout", "20", PY, str(ROOT / "tools/permuter/permuter.py"), str(d), "-j", "1",
                            "--stop-on-zero"], capture_output=True, text=True, cwd=ROOT / "tools/permuter")
        print(n, e["status"], e.get("diff"), re.findall(r"base score = (\d+)", p.stdout) or p.stdout[-200:])


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    for nm in ("run", "check"):
        s = sub.add_parser(nm)
        s.add_argument("--input", default=str(DEFAULT_OUT / "lib_all.json"))
        if nm == "run":
            s.add_argument("--out", default=str(DEFAULT_OUT))
            s.add_argument("--budget", type=int, default=120)
            s.add_argument("--cpus", type=int, default=12)
            s.add_argument("--max-diff", type=int, default=15)
            s.add_argument("--max-size", type=int, default=8)
            s.add_argument("--names")
            s.add_argument("--limit", type=int)
        else:
            s.add_argument("names_list", nargs="+")
    a = ap.parse_args()
    {"run": run, "check": check}[a.cmd](a)


if __name__ == "__main__":
    main()
