#!/usr/bin/env python3
"""Checks that the native ee-gcc runs give the same output as the Docker container's.

    scripts/eegcc/selftest.py [--jobs 8] [--limit N]

Takes every `gcc` edge of build.ninja (every library C file, with its version, flags and include folders) and
compiles it to assembly twice, as the build's rule does (-S, paths relative to the checkout): once natively, once
in the container (B3_EEGCC_DOCKER=1). Compares the two .s files byte for byte, and the compiler messages. Prints
one line per difference and a summary; the exit status is 1 when anything differs. Run configure.py first.
"""

import argparse
import filecmp
import os
import re
import shlex
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent
sys.path.insert(0, str(ROOT / "scripts" / "eegcc"))
import eegcc  # noqa: E402


def edges():
    text = (ROOT / "build.ninja").read_text()
    out = []
    for m in re.finditer(r"^build (\S+): gcc (\S+)[^\n]*\n((?:  [^\n]*\n)*)", text, re.M):
        var = dict(re.findall(r"^  (\w+) = ?(.*)$", m.group(3), re.M))
        out.append((m.group(1), m.group(2), var.get("gcc_version"), var.get("gcc_flags", ""), var.get("gcc_inc", "")))
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--jobs", type=int, default=8)
    ap.add_argument("--limit", type=int)
    ap.add_argument("--all-versions", action="store_true", help="every file with every Linux build, not only its own")
    a = ap.parse_args()
    if not eegcc.native():
        sys.exit("selftest: this host cannot run the Linux builds natively (needs /lib/ld-linux.so.2)")
    es = edges()[:a.limit] if a.limit else edges()
    if a.all_versions:
        es = [(o, s, v, f, i) for (o, s, _v, f, i) in es for v, (k, _) in eegcc.VERSIONS.items()
              if k == "linux" and (eegcc.EEGCC / v).exists()]
    work = Path("build") / "eegcc_selftest"
    (ROOT / work).mkdir(parents=True, exist_ok=True)
    jobs = {"native": [], "docker": []}
    for i, (obj, src, ver, flags, inc) in enumerate(es):
        for how in jobs:
            args = [*shlex.split(flags), "-Iinclude", "-Isrc", *shlex.split(inc), "-S", src, "-o", str(work / f"{i}.{how}.s")]
            jobs[how].append((ver, args))
    times = {}
    res = {}
    for how in ("native", "docker"):
        if how == "docker":
            os.environ["B3_EEGCC_DOCKER"] = "1"
        t0 = time.time()
        res[how] = eegcc.run_many(jobs[how], cwd=ROOT, workers=a.jobs)
        times[how] = time.time() - t0
        os.environ.pop("B3_EEGCC_DOCKER", None)
    bad = 0
    for i, (obj, src, *_r) in enumerate(es):
        n, d = res["native"][i], res["docker"][i]
        sn, sd = ROOT / work / f"{i}.native.s", ROOT / work / f"{i}.docker.s"
        same = n == d and sn.exists() == sd.exists() and (not sn.exists() or filecmp.cmp(sn, sd, shallow=False))
        if not same:
            bad += 1
            print(f"DIFF {src}: rc {n[0]} vs {d[0]}; messages {'same' if n[1] == d[1] else 'differ'}")
        for p in (sn, sd):
            p.unlink(missing_ok=True)
    print(f"{len(es)} files: {len(es) - bad} identical, {bad} different; native {times['native']:.1f} s, "
          f"docker {times['docker']:.1f} s ({a.jobs} jobs)")
    sys.exit(1 if bad else 0)


if __name__ == "__main__":
    main()
