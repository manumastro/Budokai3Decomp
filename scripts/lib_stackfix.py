#!/usr/bin/env python3
"""Library near misses whose only differences are stack offsets: sweeps the size of the function's stack buffer.

    lib_stackfix.py OUTDIR SOURCE.c|DIR ... [--jobs 8]

Each SOURCE is a lib_try.py snippet named after its function (FUNC.c; a DIR gives its *.c). The source is checked
with lib_try.py; when every differing instruction differs only in a stack offset (`N(sp)`, `addiu sp,sp,N`,
`addiu aX,sp,N`), the frame has the wrong size: the local arrays of the function are resized by the frame
difference (and +-4..16 bytes around it), or, without one, an unused `u8 pad[N]` is added. A variant that prints
MATCH is written to OUTDIR/FUNC.c (lib_try.py --items turns it into a func_insert item).

Typical source: m2c's `u8 sp[8]` for a sprintf buffer the original reserved 16 or 24 bytes for; the permuter
scored those 0 before it ran with --stack-diffs. Prints a line per function and a heartbeat every minute.
"""
import argparse
import re
import subprocess
import sys
import time
from multiprocessing import get_context
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
LINE = re.compile(r"\s+[0-9A-F]{8} (.*?)\s+!=\s+(.*)$")


def norm(s):
    s = re.sub(r"-?\d+\(sp\)", "X(sp)", s)
    s = re.sub(r"sp,sp,-?\d+", "sp,sp,X", s)
    s = re.sub(r",sp,-?\d+", ",sp,X", s)
    return " ".join(s.split())


def frame_delta(text):
    """Original frame minus ours when every difference is a stack offset, else None."""
    rows = [l for l in text.splitlines() if " != " in l]
    if not rows or not text.startswith("DIFF"):
        return None
    for l in rows:
        m = LINE.match(l)
        if not m or norm(m.group(1)) != norm(m.group(2)):
            return None
    for l in text.splitlines():
        m = re.match(r"\s+[0-9A-F]{8} addiu\s+sp,sp,(-\d+)\s+(?:!=|  )\s+addiu\s+sp,sp,(-\d+)", l)
        if m:
            return int(m.group(1)) - int(m.group(2))
    return None


def lib_try(name, path):
    r = subprocess.run([sys.executable, str(ROOT / "scripts/lib_try.py"), name, str(path)], capture_output=True,
                       text=True, timeout=180, cwd=ROOT)
    return r.returncode, r.stdout + r.stderr


def variants(src, name, delta):
    out = []
    head = re.search(rf"^[^\n;{{}}]*\b{re.escape(name)}\s*\([^;{{]*\)\s*\{{", src, re.M)
    if not head:
        return out
    body_at = head.end()
    # m2c's stack locals (sp, sp4, sp8, ...: named after their offset) as one array: gcc gives every scalar whose
    # address is taken a slot of its own (aligned), the original had them side by side
    locs = list(re.finditer(r"^[ \t]+(u8|s8|s32|u32|int|void \*|u8 \*|s32 \*)\s*(sp([0-9A-F]*))(?:\[(\d+)\])?;[ \t]*\n",
                            src[body_at:], re.M))
    if len(locs) >= 2 and all(m.group(1) in ("s32", "u32", "int", "void *", "u8 *", "s32 *") or
                              (m.group(1) in ("u8", "s8") and m.group(4) and int(m.group(4)) % 4 == 0) for m in locs):
        offs = {m.group(2): int(m.group(3) or "0", 16) for m in locs}
        top = max(offs[m.group(2)] + (int(m.group(4)) if m.group(4) else 4) for m in locs)
        if all(o % 4 == 0 for o in offs.values()):
            body = src[body_at:]
            for m in reversed(locs):
                body = body[:m.start()] + body[m.end():]
            first = locs[0]
            body = body[:first.start()] + f"    s32 sp[{(top + 3) // 4}];\n" + body[first.start():]
            for nm, o in sorted(offs.items(), key=lambda x: -len(x[0])):
                if nm == "sp":
                    continue
                body = re.sub(rf"&{nm}\b", f"&sp[{o // 4}]", body)
                body = re.sub(rf"\b{nm}\b", f"sp[{o // 4}]", body)
            out.append(src[:body_at] + body)
    arrs =[m for m in re.finditer(r"\b(u8|s8|char|s32|u32|s16|u16|int)\s+(\w+)\[(\d+)\];", src) if m.start() > body_at]
    steps = sorted({delta + d for d in (0, -4, 4, -8, 8, -12, 12, -16, 16)}, key=lambda x: abs(x - delta))
    for m in arrs:
        el = {"u8": 1, "s8": 1, "char": 1, "s16": 2, "u16": 2}.get(m.group(1), 4)
        n = int(m.group(3))
        for d in steps:
            if d % el == 0 and n + d // el > 0:
                out.append(src[:m.start(3)] + str(n + d // el) + src[m.end(3):])
    if not arrs:
        for d in steps:
            if d > 0:
                out.append(src[:body_at] + f"\n    u8 pad[{d}];" + src[body_at:])
    return out


def job(args):
    name, srcs, outdir = args
    tmp = ROOT / "build" / "stackfix"
    tmp.mkdir(parents=True, exist_ok=True)
    for src_path in srcs:
        try:
            src = Path(src_path).read_text()
            rc, full = lib_try(name, src_path)
        except Exception:  # noqa: BLE001
            continue
        if rc == 0:
            Path(outdir, f"{name}.c").write_text(src)
            return name, "MATCH as is"
        delta = frame_delta(full)
        if delta is None:
            continue
        for k, v in enumerate(variants(src, name, delta)):
            p = tmp / f"{name}_{k}.c"
            p.write_text(v)
            try:
                rc, _ = lib_try(name, p)
            except subprocess.TimeoutExpired:
                continue
            finally:
                p.unlink(missing_ok=True)
            if rc == 0:
                Path(outdir, f"{name}.c").write_text(v)
                return name, f"MATCH frame {delta:+d}"
        return name, f"no (frame {delta:+d})"
    return name, "no (not stack-only)"


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("outdir")
    ap.add_argument("sources", nargs="+")
    ap.add_argument("--jobs", type=int, default=8)
    a = ap.parse_args()
    Path(a.outdir).mkdir(parents=True, exist_ok=True)
    by = {}
    for s in a.sources:
        p = Path(s)
        for f in (sorted(p.glob("*.c")) if p.is_dir() else [p]):
            by.setdefault(f.stem, []).append(str(f.resolve()))
    jobs = [(n, s, a.outdir) for n, s in by.items()]
    print(f"{len(jobs)} functions", flush=True)
    t0, got, done = time.time(), 0, 0
    with get_context("spawn").Pool(a.jobs) as pool:
        it = pool.imap_unordered(job, jobs)
        while True:
            try:
                name, msg = it.next(timeout=60)
            except StopIteration:
                break
            except Exception as ex:  # noqa: BLE001
                if type(ex).__name__ != "TimeoutError":
                    raise
                print(f"[stackfix] {done}/{len(jobs)} {time.time() - t0:.0f}s", flush=True)
                continue
            done += 1
            got += msg.startswith("MATCH")
            print(name, msg, flush=True)
    print(f"{got} of {len(jobs)} matched")


if __name__ == "__main__":
    main()
