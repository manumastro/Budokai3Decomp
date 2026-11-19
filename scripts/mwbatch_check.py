#!/usr/bin/env python3
"""Batch-compile experiment for the Metrowerks permuter path.

    batchcc.py PERMDIR FUNC N [--variants DIR]

Compiles PERMDIR/base.c alone (FUNC once) and as one translation unit holding N renamed copies of FUNC
(FUNC__k), times both, and checks that every copy's code is byte-identical to the single compile (relocations
compared by symbol name with the copy suffix removed). With --variants, the copies are the *.c sources in DIR
(each a full base.c variant): each is compiled alone and inside the batch, and the per-function bytes compared.
"""
import os, re, subprocess, sys, tempfile, time
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
WIBO = ROOT / "tools/wibo"
MW = ROOT / "tools/mwcps2/3.0b52-030722/mwccps2.exe"
OBJDUMP = ROOT / "tools/binutils/mips-ps2-decompals-objdump"
FLAGS = ["-c", "-O4,p", "-sdatathreshold", "8", "-str", "readonly", "-Iinclude", "-Isrc"]


def cc(src, out):
    env = dict(os.environ, MWCIncludes=str(ROOT / "include"))
    t = time.perf_counter()
    r = subprocess.run([str(WIBO), str(MW), *FLAGS, str(src), "-o", str(out)], cwd=ROOT, env=env,
                       capture_output=True, text=True)
    dt = time.perf_counter() - t
    if r.returncode:
        raise RuntimeError(r.stdout[-300:])
    return dt


def funcs(obj):
    """{name: [instruction text with relocation symbol]} from objdump -dr."""
    txt = subprocess.run([str(OBJDUMP), "-dr", "-z", str(obj)], capture_output=True, text=True).stdout
    out, cur = {}, None
    for ln in txt.splitlines():
        m = re.match(r"^[0-9a-f]+ <(\S+)>:", ln)
        if m:
            cur = out.setdefault(m.group(1), []); continue
        if cur is None:
            continue
        m = re.match(r"^\s+[0-9a-f]+:\s+([0-9a-f]{8})\s+(.*)", ln)
        if m:
            cur.append(re.sub(r" <[^>]*>", "", m.group(2).split("#")[0]).strip()); continue
        m = re.match(r"^\s+[0-9a-f]+: (R_\S+)\s+(\S+)", ln)
        if m:
            cur.append(m.group(1) + " " + re.sub(r"@\d+", "@L", re.sub(r"__\d+", "", m.group(2))))
    return out


def split(base, func):
    lines = base.splitlines(keepends=True)
    start = next(i for i, l in enumerate(lines) if re.match(rf"^\S.*\b{func}\(", l) and not l.rstrip().endswith(";"))
    depth, end = 0, None
    for i in range(start, len(lines)):
        depth += lines[i].count("{") - lines[i].count("}")
        if "{" in "".join(lines[start:i + 1]) and depth == 0:
            end = i; break
    return "".join(lines[:start]), "".join(lines[start:end + 1]), "".join(lines[end + 1:])


def main():
    d, func, n = Path(sys.argv[1]), sys.argv[2], int(sys.argv[3])
    vdir = Path(sys.argv[5]) if len(sys.argv) > 5 else None
    tmp = Path(tempfile.mkdtemp(prefix="bcc", dir=ROOT / "build"))
    base = (d / "base.c").read_text()
    pre, body, post = split(base, func)
    if vdir:
        srcs = sorted(vdir.glob("*.c"))[:n]
        bodies = []
        pre, _, post = split(srcs[0].read_text(), func)
        for p in srcs:
            pv, bv, _ = split(p.read_text(), func)
            if pv.strip() == pre.strip():
                bodies.append(bv)
        n = len(bodies)
        print(f"{len(srcs)} variants, {n} with the base context")
    else:
        bodies = [body] * n
    # singles
    t_single = 0.0
    single = []
    for k, b in enumerate(bodies):
        s = tmp / f"s{k}.c"
        s.write_text(pre + b + post)
        t_single += cc(s, tmp / f"s{k}.o")
        single.append(funcs(tmp / f"s{k}.o")[func])
    # batch: copies renamed; the extern declaration line of FUNC in pre stays (harmless)
    src = pre + "".join(re.sub(rf"\b{func}\b", f"{func}__{k}", b, count=1) + "\n" for k, b in enumerate(bodies)) + post
    (tmp / "batch.c").write_text(src)
    t_batch = cc(tmp / "batch.c", tmp / "batch.o")
    fb = funcs(tmp / "batch.o")
    same = sum(fb.get(f"{func}__{k}") == single[k] for k in range(n))
    print(f"{func}: N={n} single total {t_single*1000:.0f} ms ({t_single/n*1000:.1f} ms each), "
          f"batch {t_batch*1000:.0f} ms ({t_batch/n*1000:.1f} ms each); identical {same}/{n}")
    for k in range(min(n, 2)):
        if fb.get(f"{func}__{k}") != single[k]:
            a, b = single[k], fb.get(f"{func}__{k}") or []
            diff = [(i, x, y) for i, (x, y) in enumerate(zip(a, b)) if x != y][:3]
            print(f"  copy {k}: len {len(a)} vs {len(b)}; first diffs {diff}")


if __name__ == "__main__":
    main()
