#!/usr/bin/env python3
"""Machine pass for the gcc libraries: m2c drafts compiled with the library's ee-gcc and compared with the original.

    lib_m2c.py draft [--region sdk|libc|cri|all] [--limit N] [--jobs N] [--out FILE]
    lib_m2c.py apply FILE            (the matches of a draft run go into the C files of the libraries)

draft: for every function of the library regions that is still assembly, runs m2c (target mipsee-gcc-c) on its
assembly, makes the output compilable for the old ee-gcc (no `?` types, M2C macros expanded), compiles it with the
build of the function's library group (configure.py GCC_GROUPS, a few flag sets) and compares the instructions
(relocated words masked). A function matches when every word is the same, the size is right and the object defines
no data. Matches are written to FILE (json: address, name, flags, declarations, function text).
apply: each library segment (asm piece) that has a match becomes a C file of INCLUDE_ASM lines (scripts/asm2c.py)
and the matches replace their lines."""
import argparse
import json
import os
import re
import shutil
import subprocess
import sys
import tempfile
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import gccmatch as g  # noqa: E402
import libport as lp  # noqa: E402

ROOT = g.ROOT
M2C = ROOT / "tools" / "m2c" / "m2c.py"
REGIONS = {"sdk": (0x100218, 0x11B4E8), "libc": (0x11B4E8, 0x12C360), "cri": (0x14E5D0, 0x1A19D0)}
FLAGSETS = ["-O2 -G0", "-O1 -G0", "-O3 -G0"]


def group_of(addr):
    for name, (lo, hi) in REGIONS.items():
        if lo <= addr < hi:
            return name
    return None


def function_asm():
    """{address: (name, text)} of every library function that is still in an assembly file."""
    out = {}
    glabel = re.compile(r"^glabel (\S+)")
    for p in sorted((ROOT / "asm").rglob("*.s")):
        rel = p.relative_to(ROOT / "asm")
        if rel.parts[0] in ("data", "rodata", "sdata", "nonmatchings") and not (
                rel.parts[0] == "nonmatchings" and rel.parts[1] in ("sdk", "cri")):
            continue
        if rel.parts[0] not in ("sdk", "cri", "nonmatchings"):
            continue
        lines = p.read_text().splitlines()
        starts = [i for i, l in enumerate(lines) if glabel.match(l)]
        for k, i in enumerate(starts):
            end = starts[k + 1] if k + 1 < len(starts) else len(lines)
            # the function ends at the next glabel; keep the nonmatching header out of the way
            body = lines[i:end]
            while body and body[-1].startswith("nonmatching"):
                body.pop()
            m = re.search(r"/\* \w+ ([0-9A-F]{8}) ", "\n".join(body))
            if not m:
                continue
            addr = int(m.group(1), 16)
            out[addr] = (glabel.match(lines[i]).group(1), "\n".join(body) + "\n")
    return out


def m2c_text(name, text, opts=()):
    with tempfile.TemporaryDirectory() as td:
        f = Path(td) / "f.s"
        f.write_text(".set noat\n.set noreorder\n\n" + text)
        r = subprocess.run([sys.executable, str(M2C), "-t", "mipsee-gcc-c", "--valid-syntax", "--no-cache",
                            *opts, "-f", name, str(f)], capture_output=True, text=True, timeout=120)
    return r.returncode, r.stdout, r.stderr


def expand(text):
    sys.path.insert(0, str(ROOT / "scripts"))
    import m2c_draft
    return m2c_draft.expand_macros(text)


def make_c(name, out):
    """(declarations, function) of m2c's output, in plain C89."""
    lines = out.splitlines()
    start = next((i for i, l in enumerate(lines) if re.match(rf"^\S.*\b{re.escape(name)}\(", l)
                  and not l.rstrip().endswith(";")), None)
    if start is None:
        return None
    decls = []
    for l in lines[:start]:
        if not l.strip():
            continue
        l = l.replace("?", "int") if re.match(r"^\?", l) else l
        m = re.match(r"^(\w[\w ]*?)\s+(\w+)\((.*)\);$", l)
        if m:
            l = f"{m.group(1)} {m.group(2)}();"
        l = expand(l)
        l = re.sub(r"M2C_UNK", "int", l)
        l = re.sub(r"(?<![\w])\?(?![\w])", "int", l)
        decls.append(l)
    func = "\n".join(lines[start:]) + "\n"
    func = re.sub(r"\bvoid \*", "u8 *", func)
    func = expand(func)
    # m2c writes `?` for a type it could not tell; a `?` of a conditional expression follows an operand instead
    func = re.sub(r"(^|[(,;{]\s*)\?(?=\s*[\w*(])", lambda m: m.group(1) + "int", func, flags=re.M)
    head = func.splitlines()[0]
    if "(" in head and re.search(r"\(\s*void\s*\)", head) is None and re.search(r"\bint\b\s*\)", head) is None:
        pass
    return decls, func


VARIANTS = [(), ("--no-andor",), ("--gotos-only",), ("--no-switches",), ("--stack-structs",), ("--no-unk-inference",)]


def try_variants(addr, name, text, exe):
    """try_one with each m2c option set; the best result (match first, then fewest differing words) wins."""
    best = None
    for opts in VARIANTS:
        r = try_one(addr, name, text, exe, opts)
        if r is None:
            continue
        r["m2c_opts"] = " ".join(opts)
        key = (0 if r["status"] == "match" else 1 if r["status"] == "diff" else 2 if r["status"] == "size" else 3,
               r.get("diff", 1 << 30))
        if best is None or key < best[0]:
            best = (key, r)
        if r["status"] == "match":
            break
    return best[1] if best else None


def try_one(addr, name, text, exe, opts=()):
    size = exe.sizes.get(addr)
    if size is None:
        return None
    if re.search(r"jtbl_|%gp_rel|\$f\d|c1|\.float|%hi\(D_\w+\)\s*$", text) and re.search(r"jtbl_", text):
        return {"addr": addr, "name": name, "status": "jtbl"}
    rc, out, err = m2c_text(name, text, opts)
    if rc != 0:
        return {"addr": addr, "name": name, "status": "m2cfail", "detail": err.strip().splitlines()[-1:] or ""}
    r = make_c(name, out)
    if r is None:
        return {"addr": addr, "name": name, "status": "m2cfail", "detail": "no function in the output"}
    decls, func = r
    grp = group_of(addr)
    import configure
    version, _ = configure.gcc_group("src/sdk/x.c" if grp == "sdk" else "src/sdk/libc_x.c" if grp == "libc"
                                     else "src/cri/x.c")
    best = try_compile(addr, name, decls, func, size, exe, grp)
    if best.get("status") == "cerr":
        knr = [re.sub(r"^(\w[\w \*]*?\b\w+)\((.*)\);(.*)$", r"\1();", d) if "(" in d and "(*" not in d else d
               for d in decls]
        if knr != decls:
            alt = try_compile(addr, name, knr, func, size, exe, grp)
            if alt.get("status") != "cerr":
                alt["decl_style"] = "unprototyped"
                best = alt
    return best


def try_compile(addr, name, decls, func, size, exe, grp):
    import configure
    version, _ = configure.gcc_group("src/sdk/x.c" if grp == "sdk" else "src/sdk/libc_x.c" if grp == "libc"
                                     else "src/cri/x.c")
    body = '#include "common.h"\n\n' + "\n".join(dict.fromkeys(decls)) + "\n\n" + func
    work = ROOT / "build" / "m2c" / "lib"
    work.mkdir(parents=True, exist_ok=True)
    src = work / f"d_{addr:08X}.c"
    src.write_text(body)
    best = None
    for flags in FLAGSETS:
        objs, w = g.compile_matrix(src, [version], [flags], "gas", ["NO_INCLUDE_ASM"], include_dirs=["include", "src"],
                                   keep=str(Path("build/m2c/lib") / f"w_{addr:08X}"))
        obj = objs[(version, flags)]
        if not isinstance(obj, Path):
            res = {"status": "cerr", "detail": str(obj)[-160:]}
        else:
            ob = lp.Obj(obj)
            fns = g.objects_functions(obj)
            if name not in fns:
                res = {"status": "cerr", "detail": "no function"}
            else:
                words, masks = fns[name]
                diffs, _ = g.compare(words, masks, addr, exe.rom)
                data = any(ob.secs.get(s, (0, 0))[1] for s in (".data", ".rodata", ".bss", ".sdata", ".sbss", ".lit4", ".lit8"))
                if 4 * len(words) != size:
                    res = {"status": "size", "diff": abs(4 * len(words) - size) or 1}
                elif diffs:
                    res = {"status": "diff", "diff": len(diffs)}
                elif data:
                    res = {"status": "data"}
                else:
                    res = {"status": "match"}
        shutil.rmtree(w, ignore_errors=True)
        res.update(addr=addr, name=name, flags=flags, version=version, decls=decls, func=func)
        if res["status"] == "match":
            return res
        if best is None or res.get("diff", 1 << 30) < best.get("diff", 1 << 30):
            best = res
    return best


def draft(a):
    exe = lp.Exe()
    funcs = function_asm()
    import lib_remaining
    still = {r[0] for r in lib_remaining.remaining()}  # asm/ keeps stale files of functions now in C
    todo = sorted(ad for ad in funcs if ad in still and group_of(ad) and (a.region in ("all", group_of(ad))))
    if a.only:
        keep = {r["addr"] for r in json.loads(Path(a.only).read_text()) if r["status"] in a.only_status.split(",")}
        todo = [ad for ad in todo if ad in keep]
    if a.limit:
        todo = todo[:a.limit]
    results = []

    def job(ad):
        name, text = funcs[ad]
        try:
            return (try_variants if a.variants else try_one)(ad, name, text, exe)
        except Exception as e:  # noqa: BLE001
            return {"addr": ad, "name": name, "status": "error", "detail": repr(e)[:160]}

    with ThreadPoolExecutor(a.jobs) as pool:
        for r in pool.map(job, todo):
            if r:
                results.append(r)
    counts = {}
    for r in results:
        counts[r["status"]] = counts.get(r["status"], 0) + 1
    print(counts)
    Path(a.out).write_text(json.dumps(results, indent=0))


YAML = ROOT / "config" / "SLUS_209.98.yaml"
ENTRY = re.compile(r"^(\s+)- \[0x([0-9A-Fa-f]+), (\w+), ([\w/]+)\]", re.M)


def piece_of(addr):
    """(type, name) of the yaml segment that holds addr."""
    ents = [(int(m.group(2), 16), m.group(3), m.group(4)) for m in ENTRY.finditer(YAML.read_text())]
    best = [e for e in ents if e[0] <= addr - 0x100000][-1]
    return best[1], best[2]


def check_tu(rel):
    r = subprocess.run([sys.executable, "scripts/gccdiff.py", rel, "-q"], cwd=ROOT, capture_output=True, text=True)
    return r.returncode == 0, (r.stdout + r.stderr).strip().splitlines()[-1:] or [""]


def insert(text, m):
    """The file's text with the draft in place of its INCLUDE_ASM line, and its declarations at the top."""
    name = m["name"]
    pat = re.compile(r'^INCLUDE_ASM\("[^"]+", ' + re.escape(name) + r'\);[ \t]*$', re.M)
    if not pat.search(text):
        return None
    decls = []
    for d in m["decls"]:
        sym = re.search(r"(\w+)\s*(\(|;|\[)", d)
        if sym and re.search(r"^[^\n(]*\b" + sym.group(1) + r"\b[^\n]*[;{]\s*$", text, re.M):
            continue
        if d not in text:
            decls.append(d)
    text = pat.sub(lambda _: m["func"].rstrip("\n"), text, count=1)
    if decls:
        mm = re.search(r'#include "common.h"\n', text)
        pos = mm.end() if mm else 0
        text = text[:pos] + "\n" + "\n".join(decls) + "\n" + text[pos:]
    return text


def apply(a):
    ms = [m for m in json.loads(Path(a.file).read_text()) if m["status"] == "match"]
    ms.sort(key=lambda m: m["addr"])
    if a.limit:
        ms = ms[:a.limit]
    todo = {}
    for m in ms:
        kind, name = piece_of(m["addr"])
        todo.setdefault((kind, name), []).append(m)
    for (kind, name), lst in todo.items():
        if kind == "asm":
            subprocess.run([sys.executable, "scripts/asm2c.py", name], cwd=ROOT, check=True, capture_output=True)
        elif kind != "c":
            print(f"skip {name}: a {kind} segment")
            todo[(kind, name)] = []
    done = 0
    for (kind, name), lst in todo.items():
        rel = f"src/{name}.c"
        path = ROOT / rel
        if not lst or not path.exists():
            continue
        text = path.read_text()
        ok = 0
        for m in lst:
            new = insert(text, m)
            if new is None:
                continue
            path.write_text(new)
            good, msg = check_tu(rel)
            if good:
                text = new
                ok += 1
            else:
                path.write_text(text)
                if a.verbose:
                    print(f"  {name}: {m['name']} refused: {msg}")
        done += ok
        print(f"{rel}: {ok} of {len(lst)}")
    print(f"{done} functions of {len(ms)} applied")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    d = sub.add_parser("draft")
    d.add_argument("--region", default="all")
    d.add_argument("--limit", type=int, default=0)
    d.add_argument("--jobs", type=int, default=12)
    d.add_argument("--variants", action="store_true", help="try several m2c option sets, keep the best")
    d.add_argument("--only", help="json of an earlier run: redo only its functions with these statuses (--only-status)")
    d.add_argument("--only-status", default="diff,size,cerr")
    d.add_argument("--out", default="build/m2c/lib_matches.json")
    p = sub.add_parser("apply")
    p.add_argument("file")
    p.add_argument("--limit", type=int, default=0)
    p.add_argument("-v", dest="verbose", action="store_true")
    a = ap.parse_args()
    if a.cmd == "apply":
        sys.path.insert(0, str(ROOT))
        apply(a)
    if a.cmd == "draft":
        sys.path.insert(0, str(ROOT))
        draft(a)


if __name__ == "__main__":
    main()
