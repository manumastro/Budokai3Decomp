#!/usr/bin/env python3
"""Runs scripts/lib_port.py --apply over the files of the scans (~/psvita/b3-scan/<repo>/), best candidates first.

    lib_batch.py REPO [REPO ...] [--scan-dir DIR] [--limit N]

A scan (scan_repo.sh) leaves, per file and ee-gcc build, a text file of `file.c:function  words  addresses`. A file
is tried when some function has an address; the build with more addresses goes first, the other follows if the first
is refused (segment group, a function that does not verify). Prints one line per file."""
import argparse
import os
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
VERSIONS = ["2.9-991111-01", "2.96"]


def scan_hits(path):
    n = 0
    if not path.exists():
        return 0
    for line in path.read_text(errors="replace").splitlines():
        t = line.split()
        if len(t) >= 3 and ":" in t[0] and t[1].endswith("w") and t[2].startswith("0x"):
            n += 1
    return n


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("repos", nargs="+")
    ap.add_argument("--scan-dir", default=str(Path.home() / "psvita" / "b3-scan"))
    ap.add_argument("--limit", type=int, default=0)
    a = ap.parse_args()
    jobs = []
    for repo in a.repos:
        d = Path(a.scan_dir) / repo
        for f in (d / "files.txt").read_text().split():
            tag = f.replace("/", "_")
            hits = [(scan_hits(d / f"{v}_{tag}.txt"), v) for v in VERSIONS]
            if max(h for h, _ in hits) == 0:
                continue
            order = [v for h, v in sorted(hits, key=lambda x: -x[0]) if h]
            jobs.append((max(h for h, _ in hits), repo, f, order))
    jobs.sort(key=lambda j: -j[0])
    if a.limit:
        jobs = jobs[:a.limit]
    done = 0
    for hits, repo, f, order in jobs:
        for v in order:
            r = subprocess.run([sys.executable, "scripts/lib_port.py", "--repo", repo, "--src", f, "--seg", "auto",
                                "--version", v, "--apply", "-q"], cwd=ROOT, capture_output=True, text=True)
            out = (r.stdout + r.stderr).strip().splitlines()
            last = out[-2:] if out else [""]
            print(f"{r.returncode} {repo} {f} {v}: {' | '.join(last)[:230]}", flush=True)
            if r.returncode == 0:
                done += 1
                break
    print(f"ported {done} files of {len(jobs)}")


if __name__ == "__main__":
    main()
