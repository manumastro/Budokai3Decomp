#!/usr/bin/env python3
"""Fast compile + disassemble steps for decomp-permuter (scripts/fastperm/perm.py uses them).

What one permuter candidate cost before (compile.sh: bash, realpath, mktemp, the ee-gcc driver, cc1, the modern gas
reading include/gcc_prelude.inc; then objdump): ~50-65 ms, most of it start-up: gas alone needs ~18 ms to build its
opcode tables and ~15 ms more to read the prelude's macros, objdump ~5 ms. Here:
- cc1 is run directly with the exact argv the driver would give it (captured once per version/flags by a fake
  cc1 under -B, then the fake folder replaced by the real one), no bash, no driver;
- gas and objdump run as zygotes (zygote.c, LD_PRELOAD): started once per process, they stop where they would open
  their input (gas after the prelude) and fork a child per candidate, which continues from there.

    fastcc.py --selftest [--limit N]     every library C file of build.ninja: driver vs direct cc1 (.s byte for
                                         byte), fresh gas vs zygote gas, fresh objdump vs zygote objdump
    fastcc.py --bench DIR [-n 200]       times the old compile.sh + objdump against the fast path on a permuter folder

A permuter folder opts in with fast.json (scripts/lib_permute.py writes it):
    {"kind": "gcc", "version": "2.96", "flags": "-O2 -G0", "as": [argv with {in} {out}], "cwd": ROOT}
"""

import json
import os
import re
import shutil
import socket
import struct
import subprocess
import sys
import tempfile
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent
sys.path.insert(0, str(ROOT / "scripts" / "eegcc"))
sys.path.insert(0, str(ROOT / "scripts"))
import eegcc  # noqa: E402

WORK = ROOT / "build" / "fastperm"
ZYG_SRC = Path(__file__).resolve().parent / "zygote.c"


def elf_bits(path):
    """32 or 64: the ELF class of a program."""
    with open(path, "rb") as f:
        return 32 if f.read(5)[4] == 1 else 64


def zygote_so(bits=64):
    """build/fastperm/zygote<bits>.so, built when missing or older than zygote.c (no system headers needed)."""
    so = WORK / f"zygote{bits}.so"
    if so.exists() and so.stat().st_mtime >= ZYG_SRC.stat().st_mtime:
        return so
    WORK.mkdir(parents=True, exist_ok=True)
    tmp = WORK / f"zygote{bits}.{os.getpid()}.so"
    subprocess.run(["cc", f"-m{bits}", "-O2", "-shared", "-fPIC", "-nostdlib", "-fno-stack-protector", "-o", str(tmp),
                    str(ZYG_SRC)], check=True)
    os.replace(tmp, so)
    return so


_LIVE = []


def _close_all():
    # kill and reap the zygotes (their children's CPU time then counts in this process's RUSAGE_CHILDREN)
    for z in list(_LIVE):
        z.close()


import atexit  # noqa: E402

atexit.register(_close_all)


class ZygoteError(Exception):
    pass


class Zygote:
    """A program (argv with "{mark}" / "{marko}" placeholders) turned into a fork server; run(in, out) is one run."""

    def __init__(self, argv, cwd=None, mark_suffix=".s", mark_content=b"", marko_suffix=None, env=None):
        self.argv, self.cwd, self.env = argv, cwd, env
        self.mark_suffix, self.mark_content, self.marko_suffix = mark_suffix, mark_content, marko_suffix
        self.proc, self.pid = None, None

    def start(self):
        self.close()
        self.dir = tempfile.mkdtemp(prefix="zyg")
        self.mark = os.path.join(self.dir, "mark" + self.mark_suffix)
        Path(self.mark).write_bytes(self.mark_content)
        self.marko = os.path.join(self.dir, "marko" + self.marko_suffix) if self.marko_suffix else ""
        self.sock = os.path.join(self.dir, "sock")
        argv = [a.replace("{mark}", self.mark).replace("{marko}", self.marko) for a in self.argv]
        env = dict(self.env if self.env is not None else os.environ, LD_PRELOAD=str(zygote_so(elf_bits(argv[0]))),
                   ZYG_SOCK=self.sock,
                   ZYG_MARK=self.mark, ZYG_MARKO=self.marko)
        self.proc = subprocess.Popen(argv, cwd=self.cwd, env=env, stdin=subprocess.DEVNULL, stdout=subprocess.DEVNULL,
                                     stderr=subprocess.DEVNULL)
        self.pid = os.getpid()
        _LIVE.append(self)
        t0 = time.time()
        while not os.path.exists(self.sock):
            if self.proc.poll() is not None or time.time() - t0 > 10:
                raise ZygoteError(f"zygote did not start: {argv[0]}")
            time.sleep(0.002)

    def close(self):
        if self.proc and self.pid == os.getpid():
            self.proc.kill()
            self.proc.wait()
        if self in _LIVE:
            _LIVE.remove(self)
        self.proc = None
        if getattr(self, "dir", None):
            shutil.rmtree(self.dir, ignore_errors=True)
            self.dir = None

    def run(self, inp, out, log, timeout=60):
        """Returns the exit code of one run (output in `out`, stdout+stderr in `log`)."""
        for attempt in range(2):
            if self.proc is None or self.pid != os.getpid() or self.proc.poll() is not None:
                self.start()
            try:
                s = socket.socket(socket.AF_UNIX, socket.SOCK_STREAM)
                s.settimeout(timeout)
                s.connect(self.sock)
                s.sendall(f"{inp}\0{out}\0{log}\0".encode())
                data = b""
                while len(data) < 4:
                    chunk = s.recv(4 - len(data))
                    if not chunk:
                        break
                    data += chunk
                s.close()
                if len(data) == 4:
                    return os.waitstatus_to_exitcode(struct.unpack("i", data)[0])
            except OSError as e:
                err = e
            else:
                err = "no answer"
            self.close()
        raise ZygoteError(f"zygote run failed twice ({self.argv[0]}): {err}")


_CC1 = {}


def cc1_argv(version, flags):
    """The argv the driver gives cc1 for `ee-gcc FLAGS -S {in} -o {out}`, with {in}/{out}/{base} placeholders."""
    key = (version, flags)
    if key in _CC1:
        return _CC1[key]
    real = eegcc.command(version, [])[1]  # -B<real cc1 folder>/
    assert real.startswith("-B")
    real = real[2:]
    WORK.mkdir(parents=True, exist_ok=True)
    fake = Path(tempfile.mkdtemp(prefix="fakeb", dir=WORK))
    try:
        dump = fake / "argv"
        (fake / "cc1").write_text(f'#!/bin/sh\nfor a in "$@"; do printf "%s\\0" "$a"; done > "{dump}"\n')
        (fake / "cc1").chmod(0o755)
        (fake / "ZZIN.c").write_text("")
        argv = [eegcc.command(version, [])[0], f"-B{fake}/", *flags.split(), "-S", "ZZIN.c", "-o", "ZZOUT.s"]
        subprocess.run(argv, cwd=fake, env=eegcc.NATIVE_ENV, capture_output=True, check=True)
        got = dump.read_bytes().split(b"\0")[:-1]
    finally:
        shutil.rmtree(fake, ignore_errors=True)
    out = [str(Path(real) / "cc1")]
    for a in got:
        a = a.decode().replace(f"{fake}/", real)
        a = {"ZZIN.c": "{in}", "ZZOUT.s": "{out}"}.get(a, a)
        out.append(a)
    # -dumpbase takes the input's base name
    for i, a in enumerate(out[:-1]):
        if a == "-dumpbase" and out[i + 1] == "ZZIN.c":
            out[i + 1] = "{base}"
    if any("ZZIN" in a or str(fake) in a for a in out):
        raise SystemExit(f"cc1_argv: unexpected argv {out}")
    _CC1[key] = out
    return out


_EAS = {}


def era_as_argv(version):
    """The argv of the version's own (Sony, 2000-era) assembler as its driver calls it for -c, {in}/{out} placeholders."""
    if version in _EAS:
        return _EAS[version]
    WORK.mkdir(parents=True, exist_ok=True)
    d = Path(tempfile.mkdtemp(prefix="eas", dir=WORK))
    try:
        (d / "e.c").write_text("int x;\n")
        r = subprocess.run(eegcc.command(version, ["-v", "-O2", "-G0", "-c", "e.c", "-o", "e.o"]), cwd=d,
                           env=eegcc.NATIVE_ENV, capture_output=True, text=True)
    finally:
        shutil.rmtree(d, ignore_errors=True)
    line = next(l for l in r.stderr.splitlines() if l.strip().split()[0].endswith("/as"))
    argv = line.split()
    out = [os.path.realpath(argv[0])]
    skip = False
    for i, a in enumerate(argv[1:], 1):
        if skip:
            skip = False
            continue
        if a == "-v":
            continue
        if a == "-o":
            out += ["-o", "{out}"]
            skip = True
        elif a.endswith(".s") and i == len(argv) - 1:
            out.append("{in}")
        else:
            out.append(a)
    _EAS[version] = out
    return out


def fill(argv, **kw):
    return [a.format(**kw) if "{" in a else a for a in argv]


ERA_AS = "2.96"  # the 2.96 build's assembler (GNU as 2.10-ee-001003-1) serves every version (2.9's own differs)

GLOBL = re.compile(r"^\s*\.globl\s+([A-Za-z_.$][\w.$]*)\s*$", re.M)
ENT = re.compile(r"^\s*\.ent\s+([A-Za-z_.$][\w.$]*)\s*$", re.M)


def weaken(s_path):
    """Puts `.weak NAME` in front of cc1's .s for each global function it defines.

    Sony's era assembler gives the same instructions as the build's modern gas + include/gcc_prelude.inc
    (fastcc.py --selftest: every library C file), ~3 ms instead of ~30, with one difference undone here: it
    relocates references to global functions of the same file against .text; for a weak symbol it keeps the symbol,
    as the modern gas does. Static functions stay .text-relative in both."""
    text = Path(s_path).read_text(errors="replace")
    globs = set(GLOBL.findall(text)) & set(ENT.findall(text))
    if globs:
        Path(s_path).write_text("".join(f"\t.weak\t{n}\n" for n in sorted(globs)) + text)


def era_assemble(s_path, o_path, show_errors=False):
    """weaken() + Sony's era assembler, a fresh process; returns the exit code."""
    weaken(s_path)
    r = subprocess.run(fill(era_as_argv(ERA_AS), **{"in": s_path, "out": o_path}), env=eegcc.NATIVE_ENV,
                       stdin=subprocess.DEVNULL, stdout=None if show_errors else subprocess.DEVNULL,
                       stderr=None if show_errors else subprocess.DEVNULL)
    return r.returncode


# the cc1 zygote's -dumpbase: as long as the permuter's candidate names (permuterXXXXXXXX.c), so that the compiler's
# memory holds strings of the same lengths as in a fresh run on a candidate (ee-gcc's CSE hashes string addresses)
ZYG_DUMPBASE = "permuterzygote00.c"


class FastGcc:
    """compile(c_path, o_path) -> True/False: the folder's compile.sh, faster.

    cc1 (the argv the driver gives it) and Sony's era assembler (after weaken()) run as zygotes (B3_FASTPERM_ZYG=0:
    fresh processes). B3_FASTPERM_AS=gas (or cfg["assembler"] = "gas"): the build's own modern gas + prelude as a
    zygote instead, the very same .o as compile.sh (~3x slower)."""

    def __init__(self, cfg):
        self.cfg = cfg
        self.cc1 = cc1_argv(cfg["version"], cfg["flags"])
        self.cwd = cfg.get("cwd", str(ROOT))
        self.era = cfg.get("assembler", os.environ.get("B3_FASTPERM_AS", "era")) == "era"
        self.zyg = os.environ.get("B3_FASTPERM_ZYG", "1") != "0"
        self.gas = None if self.era else Zygote([a.replace("{in}", "{mark}").replace("{out}", "{marko}")
                                                 for a in cfg["as"]], cwd=self.cwd, mark_suffix=".s", marko_suffix=".o")
        if self.zyg:
            env = eegcc.NATIVE_ENV
            self.cc1_z = Zygote(fill(self.cc1, **{"in": "{mark}", "out": "{marko}", "base": ZYG_DUMPBASE}),
                                cwd=self.cwd, mark_suffix=".c", marko_suffix=".s", env=env)
            self.as_z = Zygote(fill(era_as_argv(ERA_AS), **{"in": "{mark}", "out": "{marko}"}), cwd=self.cwd,
                               mark_suffix=".s", marko_suffix=".o", env=env) if self.era else None

    def compile(self, c_path, o_path, show_errors=False):
        base = os.path.splitext(o_path)[0]
        s_path, log = base + ".s", base + ".log"
        try:
            if self.zyg:
                rc = self.cc1_z.run(c_path, s_path, log)
            else:
                rc = subprocess.run(fill(self.cc1, **{"in": c_path, "out": s_path, "base": os.path.basename(c_path)}),
                                    cwd=self.cwd, env=eegcc.NATIVE_ENV, stdin=subprocess.DEVNULL, stdout=subprocess.DEVNULL,
                                    stderr=None if show_errors else subprocess.DEVNULL).returncode
            if show_errors and self.zyg and os.path.exists(log):
                sys.stderr.write(Path(log).read_text(errors="replace"))
            if rc:
                return False
            if self.era and self.zyg:
                weaken(s_path)
                rc = self.as_z.run(s_path, o_path, log)
            elif self.era:
                rc = era_assemble(s_path, o_path, show_errors)
            else:
                rc = self.gas.run(s_path, o_path, log)
            if show_errors and os.path.exists(log) and not (self.era and not self.zyg):
                sys.stderr.write(Path(log).read_text(errors="replace"))
            return rc == 0
        finally:
            for p in (s_path, log):
                try:
                    os.unlink(p)
                except FileNotFoundError:
                    pass


class FastMwcc:
    """compile(c_path, o_path): a Metrowerks folder's compile.sh (wibo + mwccps2) without bash and realpath."""

    def __init__(self, cfg):
        self.argv, self.cwd = cfg["argv"], cfg.get("cwd", str(ROOT))
        self.env = dict(os.environ, **cfg.get("env", {}))

    def compile(self, c_path, o_path, show_errors=False):
        q = None if show_errors else subprocess.DEVNULL
        r = subprocess.run(fill(self.argv, **{"in": os.path.realpath(c_path), "out": os.path.realpath(o_path)}),
                           cwd=self.cwd, env=self.env, stdin=subprocess.DEVNULL, stdout=q, stderr=q)
        return r.returncode == 0 and os.path.exists(o_path) and os.path.getsize(o_path) > 0


def fast_compiler(cfg):
    """The fast compiler of a folder's fast.json, or None."""
    if not cfg:
        return None
    return {"gcc": FastGcc, "mwcc": FastMwcc}.get(cfg.get("kind"), lambda c: None)(cfg)


class FastObjdump:
    """objdump_text(o_path) -> the text `objdump_command o_path` prints."""

    def __init__(self, cmd, sample_o):
        self.z = Zygote([*cmd, "{mark}"], mark_suffix=".o", mark_content=Path(sample_o).read_bytes())

    def text(self, o_path):
        fd, log = tempfile.mkstemp(prefix="zygdump", suffix=".txt")
        os.close(fd)
        try:
            rc = self.z.run(o_path, "", log)
            if rc:
                raise subprocess.CalledProcessError(rc, "objdump", Path(log).read_text(errors="replace")[-400:])
            # the header names the file objdump opened by name: the marker; put the candidate's name back
            return Path(log).read_text().replace(self.z.mark, o_path, 1)
        finally:
            os.unlink(log)


def load_cfg(d):
    p = Path(d) / "fast.json"
    return json.loads(p.read_text()) if p.exists() else None


# ------------------------------------------------------------------------------------------------ checks


def simplified(text, stack_differences=True):
    """The rows the permuter's scorer compares, from objdump's text."""
    if str(ROOT / "tools" / "permuter") not in sys.path:
        sys.path.insert(0, str(ROOT / "tools" / "permuter"))
    from src.objdump import simplify_objdump, MIPS_SETTINGS
    return [(l.row, l.mnemonic, l.has_symbol) for l in
            simplify_objdump(text.splitlines(), MIPS_SETTINGS, stack_differences=stack_differences,
                             ign_branch_targets=True)]


def selftest(limit=None):
    sys.path.insert(0, str(ROOT / "scripts" / "eegcc"))
    import selftest as st
    import gccmatch as g
    es = st.edges()[:limit] if limit else st.edges()
    tmp = Path(tempfile.mkdtemp(prefix="fastcc_selftest", dir=WORK if WORK.exists() else None))
    bad = {"cc1": 0, "gas": 0, "objdump": 0}
    gas_cmd = [str(g.BINUTILS) + "as", *g.GAS_FLAGS, "-G0", "-Iinclude", str(g.PRELUDE)]
    dump_cmd = [str(g.BINUTILS) + "objdump", "-drz", "-m", "mips:5900"]
    gas_z = Zygote([*gas_cmd, "{mark}", "-o", "{marko}"], cwd=str(ROOT), mark_suffix=".s", marko_suffix=".o")
    dump_z = None
    era_bad, era_n, era_rows = [], 0, 0
    zcc, zyg_n = {}, 0
    as_z = Zygote(fill(era_as_argv(ERA_AS), **{"in": "{mark}", "out": "{marko}"}), cwd=str(ROOT), mark_suffix=".s",
                  marko_suffix=".o", env=eegcc.NATIVE_ENV)
    t = {"driver": 0.0, "cc1": 0.0, "gas": 0.0, "gasz": 0.0, "dump": 0.0, "dumpz": 0.0}
    for i, (obj, src, ver, flags, inc) in enumerate(es):
        incs = ["-Iinclude", "-Isrc", *inc.split()]
        full_flags = " ".join([*flags.split(), *incs])
        a, b = tmp / f"{i}.drv.s", tmp / f"{i}.cc1.s"
        t0 = time.time()
        r1 = subprocess.run(eegcc.command(ver, [*full_flags.split(), "-S", src, "-o", str(a)]), cwd=ROOT,
                            env=eegcc.NATIVE_ENV, capture_output=True)
        t1 = time.time()
        r2 = subprocess.run(fill(cc1_argv(ver, full_flags), **{"in": src, "out": str(b), "base": os.path.basename(src)}),
                            cwd=ROOT, env=eegcc.NATIVE_ENV, capture_output=True)
        t2 = time.time()
        t["driver"] += t1 - t0
        t["cc1"] += t2 - t1
        if r1.returncode != r2.returncode or (r1.returncode == 0 and a.read_bytes() != b.read_bytes()):
            bad["cc1"] += 1
            print(f"cc1 DIFF {src}")
            continue
        if r1.returncode:
            continue
        o1, o2 = tmp / f"{i}.fresh.o", tmp / f"{i}.zyg.o"
        t0 = time.time()
        g1 = subprocess.run([*gas_cmd, str(a), "-o", str(o1)], cwd=ROOT, capture_output=True)
        t1 = time.time()
        g2 = gas_z.run(str(a), str(o2), str(tmp / f"{i}.log"))
        t2 = time.time()
        t["gas"] += t1 - t0
        t["gasz"] += t2 - t1
        if g1.returncode != g2 or (g2 == 0 and o1.read_bytes() != o2.read_bytes()):
            bad["gas"] += 1
            print(f"gas DIFF {src}: rc {g1.returncode} vs {g2}")
            continue
        if g2:
            continue  # both refuse it (the build runs scripts/gcc_rebind.py first on such files)
        if dump_z is None:
            dump_z = FastObjdump(dump_cmd, o1)
        t0 = time.time()
        d1 = subprocess.run([*dump_cmd, str(o2)], capture_output=True, text=True).stdout
        t1 = time.time()
        try:
            d2 = dump_z.text(str(o2))
        except subprocess.CalledProcessError as e:
            d2 = None
            print(f"objdump zygote failed on {src}: {e.output}")
        t2 = time.time()
        t["dump"] += t1 - t0
        t["dumpz"] += t2 - t1
        if d1 != d2:
            bad["objdump"] += 1
            print(f"objdump DIFF {src}")
        # the version's own era assembler instead of the modern gas + prelude: what the permuter's scorer sees
        # (C functions only, as in a permuter candidate: INCLUDE_ASM left out)
        o3, o4, cs = tmp / f"{i}.era.o", tmp / f"{i}.gas.o", tmp / f"{i}.c.s"
        r4 = subprocess.run(fill(cc1_argv(ver, full_flags + " -DNO_INCLUDE_ASM"),
                                 **{"in": src, "out": str(cs), "base": os.path.basename(src)}),
                            cwd=ROOT, env=eegcc.NATIVE_ENV, capture_output=True)
        if r4.returncode or subprocess.run([*gas_cmd, str(cs), "-o", str(o4)], cwd=ROOT,
                                           capture_output=True).returncode:
            continue
        era_n += 1
        t0 = time.time()
        g3 = era_assemble(str(cs), str(o3))
        t["era_as"] = t.get("era_as", 0.0) + time.time() - t0
        # what the scorer compares, both with and without --stack-diffs
        for sd in (True, False):
            rows = [simplified(subprocess.run([*dump_cmd, str(o)], capture_output=True, text=True).stdout, sd)
                    for o in (o4, o3)] if g3 == 0 else [1, 2]
            if rows[0] != rows[1]:
                break
        era_rows += len(rows[0]) if g3 == 0 else 0
        if rows[0] != rows[1]:
            era_bad.append(src)
            if g3 == 0:
                k = next(k for k in range(min(len(rows[0]), len(rows[1])) + 1)
                         if k >= min(len(rows[0]), len(rows[1])) or rows[0][k] != rows[1][k])
                print(f"era as DIFF {src}: row {k}/{len(rows[0])}: "
                      f"{rows[0][k] if k < len(rows[0]) else '-'!r} vs {rows[1][k] if k < len(rows[1]) else '-'!r}")
            else:
                print(f"era as FAILS {src}")
            continue
        # cc1 and the era assembler as zygotes against fresh runs. The fresh cc1 compiles a copy of the source at a
        # path as long as the zygote's marker, with the same -dumpbase (compilers' memory then holds strings of the
        # same lengths); the .s may only differ in the `.file` line naming the input.
        key = (ver, full_flags)
        if key not in zcc:
            zcc[key] = Zygote(fill(cc1_argv(ver, full_flags + " -DNO_INCLUDE_ASM"),
                                   **{"in": "{mark}", "out": "{marko}", "base": ZYG_DUMPBASE}),
                              cwd=str(ROOT), mark_suffix=".c", marko_suffix=".s", env=eegcc.NATIVE_ENV)
        fd, cp = tempfile.mkstemp(prefix="permuter", suffix=".c", dir="/tmp")
        os.close(fd)
        shutil.copy(ROOT / src, cp)
        fs, zs = tmp / f"{i}.fresh.s", tmp / f"{i}.zyg.s"
        t0 = time.time()
        rf = subprocess.run(fill(cc1_argv(ver, full_flags + " -DNO_INCLUDE_ASM"),
                                 **{"in": cp, "out": str(fs), "base": ZYG_DUMPBASE}),
                            cwd=ROOT, env=eegcc.NATIVE_ENV, capture_output=True).returncode
        t1 = time.time()
        rz = zcc[key].run(cp, str(zs), str(tmp / f"{i}.zlog"))
        t2 = time.time()
        os.unlink(cp)
        t["cc1_fresh"] = t.get("cc1_fresh", 0.0) + t1 - t0
        t["cc1_zyg"] = t.get("cc1_zyg", 0.0) + t2 - t1
        if rf:
            continue  # this file needs its own folder for includes
        drop_file = lambda p: re.sub(r'^\s*\.file\s.*\n', "", p.read_text(), flags=re.M)  # noqa: E731
        if rz or drop_file(fs) != drop_file(zs):
            bad["cc1_zygote"] = bad.get("cc1_zygote", 0) + 1
            print(f"cc1 zygote DIFF {src} (rc {rz})")
            continue
        zyg_n += 1
        weaken(str(fs))
        of, oz = tmp / f"{i}.efresh.o", tmp / f"{i}.ezyg.o"
        t0 = time.time()
        r5 = subprocess.run(fill(era_as_argv(ERA_AS), **{"in": str(fs), "out": str(of)}), env=eegcc.NATIVE_ENV,
                            capture_output=True).returncode
        t1 = time.time()
        r6 = as_z.run(str(fs), str(oz), str(tmp / f"{i}.alog"))
        t2 = time.time()
        t["as_fresh"] = t.get("as_fresh", 0.0) + t1 - t0
        t["as_zyg"] = t.get("as_zyg", 0.0) + t2 - t1
        body = lambda o: subprocess.run([*dump_cmd, str(o)], capture_output=True, text=True).stdout.split("\n", 3)[-1]  # noqa: E731,E501
        if r5 != r6 or (r5 == 0 and body(of) != body(oz)):
            bad["as_zygote"] = bad.get("as_zygote", 0) + 1
            print(f"era as zygote DIFF {src}: rc {r5} vs {r6}")
    for z in zcc.values():
        z.close()
    as_z.close()
    print(f"zygote cc1 + era as checked on {zyg_n} files")
    gas_z.close()
    if dump_z:
        dump_z.z.close()
    shutil.rmtree(tmp, ignore_errors=True)
    n = len(es)
    print(f"{n} files; differences: {bad}; era assembler: {era_n} C-only files, {era_rows} instruction rows, files that differ: {len(era_bad)}")
    print("ms per file: " + ", ".join(f"{k} {1000 * v / n:.1f}" for k, v in t.items()))
    return not any(bad.values()) and not era_bad


def bench(d, n):
    """Old compile.sh + objdump against the fast path on one permuter folder's base.c."""
    d = Path(d)
    cfg = load_cfg(d)
    dump_cmd = re.search(r'objdump_command = "([^"]+)"', (d / "settings.toml").read_text()).group(1).split()
    tmp = Path(tempfile.mkdtemp(prefix="fastcc_bench"))
    c = tmp / "permuterabcdefgh.c"
    c.write_text((d / "base.c").read_text())
    q = dict(stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    t0 = time.time()
    for _ in range(n):
        subprocess.run(["bash", str(d / "compile.sh"), str(c), "-o", str(tmp / "a.o")], check=True, **q)
        subprocess.run([*dump_cmd, str(tmp / "a.o")], check=True, capture_output=True)
    old = (time.time() - t0) / n
    fg = FastGcc(cfg)
    fd = FastObjdump(dump_cmd, d / "target.o")
    fg.compile(str(c), str(tmp / "b.o"))
    t0 = time.time()
    for _ in range(n):
        assert fg.compile(str(c), str(tmp / "b.o"))
        fd.text(str(tmp / "b.o"))
    new = (time.time() - t0) / n
    s_path = tmp / "p.s"
    t0 = time.time()
    for _ in range(n):
        subprocess.run(fill(fg.cc1, **{"in": str(c), "out": str(s_path), "base": c.name}), cwd=fg.cwd,
                       env=eegcc.NATIVE_ENV, check=True, **q)
    t_cc1 = (time.time() - t0) / n
    t0 = time.time()
    for _ in range(n):
        era_assemble(str(s_path), str(tmp / "c.o"))
    t_as = (time.time() - t0) / n
    t0 = time.time()
    for _ in range(n):
        fd.text(str(tmp / "c.o"))
    t_dump = (time.time() - t0) / n
    ra = simplified(subprocess.run([*dump_cmd, str(tmp / "a.o")], capture_output=True, text=True).stdout)
    rb = simplified(fd.text(str(tmp / "b.o")))
    print(f"{d.name}: compile+objdump per candidate: old {old * 1000:.1f} ms, fast {new * 1000:.1f} ms "
          f"({old / new:.1f}x; cc1 {t_cc1 * 1000:.1f}, era as {t_as * 1000:.1f}, objdump zygote {t_dump * 1000:.1f}); "
          f"scorer rows identical: {ra == rb} ({len(ra)} rows)")
    fd.z.close()
    shutil.rmtree(tmp, ignore_errors=True)


def check_dirs(dirs):
    """For each permuter folder: base.c through compile.sh + objdump and through the fast path give the same rows."""
    bad = 0
    tmp = Path(tempfile.mkdtemp(prefix="fastcc_check"))
    for d in map(Path, dirs):
        cfg = load_cfg(d)
        if not cfg:
            continue
        dump_cmd = re.search(r'objdump_command = "([^"]+)"', (d / "settings.toml").read_text()).group(1).split()
        c = tmp / "permuterabcdefgh.c"
        c.write_text((d / "base.c").read_text())
        q = dict(stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        r1 = subprocess.run(["bash", str(d / "compile.sh"), str(c), "-o", str(tmp / "a.o")], **q).returncode
        ok2 = fast_compiler(cfg).compile(str(c), str(tmp / "b.o"))
        rows = [simplified(subprocess.run([*dump_cmd, str(tmp / o)], capture_output=True, text=True).stdout, sd)
                for o in ("a.o", "b.o") for sd in (True, False)] if r1 == 0 and ok2 else None
        same = (r1 != 0 and not ok2) or (rows is not None and rows[0] == rows[2] and rows[1] == rows[3])
        if not same:
            bad += 1
            print(f"DIFF {d.name}: compile.sh rc {r1}, fast ok {ok2}")
        for o in ("a.o", "b.o"):
            (tmp / o).unlink(missing_ok=True)
    shutil.rmtree(tmp, ignore_errors=True)
    print(f"{len(dirs)} folders, {bad} differ")
    return bad == 0


def main():
    import argparse
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--selftest", action="store_true")
    ap.add_argument("--limit", type=int)
    ap.add_argument("--bench")
    ap.add_argument("--check-dirs", nargs="+")
    ap.add_argument("-n", type=int, default=100)
    a = ap.parse_args()
    if a.selftest:
        sys.exit(0 if selftest(a.limit) else 1)
    if a.bench:
        bench(a.bench, a.n)
    if a.check_dirs:
        sys.exit(0 if check_dirs(a.check_dirs) else 1)


if __name__ == "__main__":
    main()
