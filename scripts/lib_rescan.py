#!/usr/bin/env python3
"""Re-checks every saved source of the library functions still in assembly with lib_try.py.

    lib_rescan.py scan OUT.jsonl [--jobs 8] [--names a,b] [--deadline SEC] [--src GLOB ...] [--json FILE ...]
    lib_rescan.py queue SCAN.jsonl OUT.json [--max-diff 40] [--max-size 24]
    lib_rescan.py matches SCAN.jsonl OUTDIR

scan: the sources of each function are its drafts (drafts/**), and by default the near misses the earlier passes
left in the sibling worktrees (.wt/*/build/lh/{miss,auto,perm*/best}, .wt/*/build/auto/**, .wt/*/build/hand2/**) and
the draft/permuter json lists (.wt/*/build/m2c/lib_all.json, .wt/*/build/auto/perm_in.json, perm_matches.json);
--src / --json add more. Identical sources are checked once; a function stops at its first MATCH. One process per
function (lib_try's scratch names are per function: never run two scans on the same checkout), each check under a
time limit, a heartbeat line a minute. Each row: name, origin, the checked copy (build/rescan/src), lib_try's verdict.
queue: the permuter input (scripts/lib_permute.py run --input) from a scan: the closest source of each function
(DIFF before SIZE, fewest differing instructions), with the build's compiler and flags.
matches: copies every MATCH source to OUTDIR/FUNC.c (then lib_try.py --items and func_insert.py --real).
"""
import argparse
import glob
import json
import re
import shutil
import subprocess
import sys
import time
from multiprocessing import get_context
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
WT = ROOT.parent if ROOT.parent.name == ".wt" else ROOT / ".wt"
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.insert(0, str(ROOT))

SRC_GLOBS = ["drafts/**/*.c", "{wt}/*/build/lh/miss/*.c", "{wt}/*/build/lh/perm*/best/*.c", "{wt}/*/build/lh/auto/*.c",
             "{wt}/*/build/auto/**/*.c", "{wt}/*/build/hand2/**/*.c"]
JSON_GLOBS = ["{wt}/*/build/m2c/lib_all.json", "{wt}/*/build/auto/perm_in.json", "{wt}/*/build/lh/perm*/perm_matches.json",
              "{wt}/*/build/auto/perm/perm_matches.json"]
WORK = ROOT / "build" / "rescan"


def collect(names, src_globs, json_globs):
    src = {n: [] for n in names}
    for g in src_globs:
        g = g.format(wt=WT)
        for f in glob.glob(g if g.startswith("/") else str(ROOT / g), recursive=True):
            if Path(f).stem in src:
                src[Path(f).stem].append(("file", f))
    for g in json_globs:
        g = g.format(wt=WT)
        for j in glob.glob(g if g.startswith("/") else str(ROOT / g)):
            try:
                data = json.load(open(j))
            except Exception:  # noqa: BLE001
                continue
            for e in data if isinstance(data, list) else []:
                n = e.get("name")
                if n in src and e.get("func"):
                    src[n].append((f"json:{j}", "\n".join(dict.fromkeys(e.get("decls", []))) + "\n\n" + e["func"]))
    return src


def work(args):
    name, srcs = args
    out, seen = [], set()
    d = WORK / "src"
    d.mkdir(parents=True, exist_ok=True)
    for i, (kind, s) in enumerate(srcs):
        try:
            text = Path(s).read_text(errors="replace") if kind == "file" else s
        except Exception:  # noqa: BLE001
            continue
        origin = s if kind == "file" else kind
        key = re.sub(r"\s+", " ", re.sub(r"/\*.*?\*/|//[^\n]*", "", text, flags=re.S)).strip()
        if key in seen:
            continue
        seen.add(key)
        p = d / f"{name}_{i}.c"
        p.write_text(text)
        try:
            r = subprocess.run([sys.executable, str(ROOT / "scripts/lib_try.py"), name, str(p), "-q"],
                               capture_output=True, text=True, timeout=180, cwd=ROOT)
            txt, rc = (r.stdout + r.stderr).strip(), r.returncode
        except subprocess.TimeoutExpired:
            txt, rc = "TIMEOUT", 99
        out.append(dict(name=name, origin=origin, src=str(p), rc=rc, first=(txt.splitlines() or [""])[0][:200],
                        text=txt[-3000:]))
        if rc == 0:
            break
    return name, out


def scan(a):
    import lib_remaining as LR
    names = [r[1] for r in LR.remaining(False)]
    if a.names:
        want = set(a.names.split(","))
        names = [n for n in names if n in want]
    src = collect(names, SRC_GLOBS + (a.src or []), JSON_GLOBS + (a.json or []))
    jobs = [(n, s) for n, s in src.items() if s]
    print(f"{len(names)} library functions in assembly, {len(jobs)} with sources, "
          f"{sum(len(s) for _, s in jobs)} sources", flush=True)
    t0, done, got = time.time(), 0, 0
    with open(a.out, "w") as fo, get_context("spawn").Pool(a.jobs) as pool:
        it = pool.imap_unordered(work, jobs)
        while True:
            try:
                name, rows = it.next(timeout=60)
            except StopIteration:
                break
            except Exception as ex:  # noqa: BLE001
                if type(ex).__name__ != "TimeoutError":
                    raise
                print(f"[rescan] {done}/{len(jobs)} {got} match {time.time() - t0:.0f}s", flush=True)
                if a.deadline and time.time() - t0 > a.deadline:
                    pool.terminate()
                    break
                continue
            done += 1
            for r in rows:
                fo.write(json.dumps(r) + "\n")
            fo.flush()
            m = [r for r in rows if r["rc"] == 0]
            if m:
                got += 1
                print(f"MATCH {name} {m[0]['origin']}", flush=True)
    print(f"[rescan] done: {done} functions, {got} match, {time.time() - t0:.0f}s", flush=True)


def rows_of(path):
    for l in open(path):
        try:
            yield json.loads(l)
        except Exception:  # noqa: BLE001
            pass


def queue(a):
    import configure
    import lib_remaining as LR
    import lib_try as LT
    rem = {r[1]: r for r in LR.remaining(False)}
    best = {}
    for r in rows_of(a.scan):
        if r["name"] not in rem:
            continue
        m = re.match(r"DIFF: (\d+) of", r["first"])
        s = re.match(r"SIZE: compiled 0x([0-9A-F]+) bytes, the original is 0x([0-9A-F]+)", r["first"])
        if m and int(m.group(1)) <= a.max_diff:
            key = (0, int(m.group(1)))
        elif s and abs(int(s.group(1), 16) - int(s.group(2), 16)) <= a.max_size:
            key = (1, abs(int(s.group(1), 16) - int(s.group(2), 16)))
        else:
            continue
        if r["name"] not in best or key < best[r["name"]][0]:
            best[r["name"]] = (key, r)
    out = []
    for name, (key, r) in sorted(best.items(), key=lambda x: x[1][0]):
        try:
            decls, func = LT.split_snippet(Path(r["src"]).read_text(), name)
        except SystemExit:
            continue
        addr, _, seg, _ = rem[name]
        version, flags = configure.gcc_group(f"src/{seg}.c")
        out.append(dict(addr=addr, name=name, status="diff" if key[0] == 0 else "size", diff=key[1], flags=flags,
                        version=version, decls=decls, func=func, origin=r["origin"]))
    Path(a.out).write_text(json.dumps(out, indent=0))
    print(f"{len(out)} near misses -> {a.out} (diff {sum(e['status'] == 'diff' for e in out)}, "
          f"size {sum(e['status'] == 'size' for e in out)})")


def matches(a):
    Path(a.outdir).mkdir(parents=True, exist_ok=True)
    n = 0
    for r in rows_of(a.scan):
        if r["rc"] == 0:
            shutil.copy(r["src"], Path(a.outdir) / f"{r['name']}.c")
            n += 1
    print(f"{n} matching sources -> {a.outdir}")


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    s = sub.add_parser("scan")
    s.add_argument("out")
    s.add_argument("--jobs", type=int, default=8)
    s.add_argument("--names")
    s.add_argument("--deadline", type=int, default=0)
    s.add_argument("--src", action="append")
    s.add_argument("--json", action="append")
    q = sub.add_parser("queue")
    q.add_argument("scan")
    q.add_argument("out")
    q.add_argument("--max-diff", type=int, default=40)
    q.add_argument("--max-size", type=int, default=24)
    m = sub.add_parser("matches")
    m.add_argument("scan")
    m.add_argument("outdir")
    a = ap.parse_args()
    {"scan": scan, "queue": queue, "matches": matches}[a.cmd](a)


if __name__ == "__main__":
    main()
