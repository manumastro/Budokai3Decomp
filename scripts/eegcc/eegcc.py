#!/usr/bin/env python3
"""Runs Sony's ee-gcc builds (decomp.me's compiler archive, in tools/eegcc/<version>/) on this machine.

    scripts/eegcc/eegcc.py VERSION [ee-gcc arguments ...]     one compile, in the current folder
    scripts/eegcc/eegcc.py --as VERSION [as arguments ...]    that build's own assembler (Linux builds only)
    scripts/eegcc/eegcc.py --list | --stop

Two kinds of build are in the archive:

- Linux builds (2.9-ee-99xxxx, 2.96-ee-001003-1, 3.2-ee-0309xx / 0409xx): 32-bit i386 programs. On an x86-64
  Linux host with the i386 C library (/lib/ld-linux.so.2: `dpkg --add-architecture i386; apt install libc6:i386`)
  they run directly, same argv, with the container's small fixed environment: a few ms a compile instead of
  ~0.3 s, objects byte-identical to the container's (checked over every library C file, 2026-11-19).
  Otherwise, or with B3_EEGCC_DOCKER=1, they run in a long-lived Docker container of the image `budokai3-eegcc` (scripts/eegcc/Dockerfile: Debian with the i386 C
  library, nothing else), started on first use with the checkout and tools/ mounted at their own paths. The image
  is built for linux/amd64; on Apple Silicon Docker runs it under Rosetta or QEMU. One `docker exec` costs about
  0.3 s, so callers with many compiles batch them (`run_many`).
- Windows builds (SN Systems' 2.95.2 / 2.95.3): run directly by wibo (tools/wibo), as the Metrowerks compiler is.

Paths given to the compiler must lie inside the checkout or tools/ (the container sees nothing else): temporary
files go under build/. The 3.2 beta of 2003-02-10 is a Cygwin program that wibo cannot run; it is left out.
"""

import hashlib
import os
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent.parent
TOOLS = ROOT / "tools"
EEGCC = TOOLS / "eegcc"
WIBO = TOOLS / "wibo"
IMAGE = "budokai3-eegcc"
DOCKERFILE_DIR = ROOT / "scripts" / "eegcc"

# version -> (kind, folder of cc1 under lib/gcc-lib/ee/)
VERSIONS = {
    "2.9-990721": ("linux", "2.9-ee-990721"),
    "2.9-991111": ("linux", "2.9-ee-991111"),
    "2.9-991111-01": ("linux", "2.9-ee-991111-01"),
    "2.9-991111a": ("linux", "2.9-ee-991111-01"),
    "2.95.2-273a": ("win", "2.95.2"),
    "2.95.2-274": ("win", "2.95.2"),
    "2.95.3-107": ("win", "2.95.3"),
    "2.95.3-114": ("win", "2.95.3"),
    "2.95.3-136": ("win", "2.95.3"),
    "2.96": ("linux", "2.96-ee-001003-1"),
    "3.2-030926": ("linux", "3.2-ee-030926"),
    "3.2-040921": ("linux", "3.2-ee-040921"),
}


# what the compilers get as environment when run directly: the container's (nothing of the caller's leaks in)
NATIVE_ENV = {"PATH": "/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin", "HOME": "/root"}


def native():
    """True when the Linux builds run on this host without the container."""
    if os.environ.get("B3_EEGCC_DOCKER") == "1":
        return False
    return (sys.platform.startswith("linux") and os.uname().machine in ("x86_64", "i686", "i386")
            and os.path.exists("/lib/ld-linux.so.2"))


def _real(p):
    return Path(os.path.realpath(p))


def mounts():
    """Host folders the container needs: the checkout and, when tools/ is a link elsewhere, its target."""
    out = [_real(ROOT)]
    t = _real(TOOLS)
    if not any(t == m or m in t.parents for m in out):
        out.append(t)
    return out


def container_name():
    return f"{IMAGE}-{hashlib.sha1(str(_real(ROOT)).encode()).hexdigest()[:8]}"


def _docker(*args, check=True, **kw):
    return subprocess.run(["docker", *args], check=check, capture_output=True, text=True, **kw)


def ensure_container():
    name = container_name()
    r = _docker("inspect", "-f", "{{.State.Running}}", name, check=False)
    if r.returncode == 0 and r.stdout.strip() == "true":
        return name
    if r.returncode == 0:
        _docker("rm", "-f", name, check=False)
    if _docker("image", "inspect", IMAGE, check=False).returncode != 0:
        print(f"eegcc: building the Docker image {IMAGE} (once)", file=sys.stderr)
        subprocess.run(["docker", "build", "--platform", "linux/amd64", "-t", IMAGE, str(DOCKERFILE_DIR)],
                       check=True, env=dict(os.environ, DOCKER_BUILDKIT="1"))
    vols = []
    for m in mounts():
        vols += ["-v", f"{m}:{m}"]
    r = _docker("run", "-d", "--rm", "--name", name, *vols, IMAGE, check=False)
    if r.returncode:
        # ninja starts many compiles at once: another one may have started the container meanwhile
        # (it can take a few seconds to reach the running state)
        import time
        for _ in range(40):
            again = _docker("inspect", "-f", "{{.State.Running}}", name, check=False)
            if again.returncode == 0 and again.stdout.strip() == "true":
                break
            time.sleep(0.5)
        else:
            raise subprocess.CalledProcessError(r.returncode, r.args, r.stdout, r.stderr)
    return name


def stop():
    _docker("rm", "-f", container_name(), check=False)


def kind(version):
    if version not in VERSIONS:
        sys.exit(f"eegcc: unknown version {version} (known: {', '.join(VERSIONS)})")
    return VERSIONS[version][0]


def command(version, args, assembler=False):
    """The argv that runs this compiler (or its assembler) with args, as seen from where it runs."""
    k, inner = VERSIONS[version]
    base = _real(EEGCC / version)
    if k == "linux":
        if assembler:
            return [str(base / "ee" / "bin" / "as"), *args]
        return [str(base / "bin" / "ee-gcc"), f"-B{base / 'lib' / 'gcc-lib' / 'ee' / inner}/", *args]
    if assembler:
        sys.exit(f"eegcc: {version} is a Windows build; its assembler is not wrapped")
    return [str(WIBO), str(base / "bin" / "ee-gcc.exe"), *args]


def run_many(jobs, cwd=None, workers=8):
    """Runs [(version, args)] (args: list of str, `assembler`: optional 3rd item). Returns [(returncode, output)].

    Linux jobs run directly in parallel threads when native(), else in the container in one `docker exec` (a
    generated shell script under build/eegcc/); Windows jobs run in parallel threads."""
    cwd = _real(cwd or os.getcwd())
    results = [None] * len(jobs)
    linux = [(i, j) for i, j in enumerate(jobs) if kind(j[0]) == "linux"]
    win = [(i, j) for i, j in enumerate(jobs) if kind(j[0]) == "win"]
    if linux and native():
        win, linux = win + linux, []

    def one_win(item):
        i, j = item
        if kind(j[0]) == "linux":
            # an output the container left (owned by root) cannot be rewritten in place: remove it first
            args = list(j[1])
            for k, a in enumerate(args[:-1]):
                if a == "-o":
                    o = Path(cwd) / args[k + 1]
                    if o.exists() and not os.access(o, os.W_OK):
                        o.unlink()
            # stdout and stderr in one stream, trailing newlines dropped: what the container's log gives
            r = subprocess.run(command(j[0], j[1], *j[2:]), cwd=cwd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                               stdin=subprocess.DEVNULL, text=True, env=NATIVE_ENV)
            results[i] = (r.returncode, r.stdout.rstrip("\n"))
            return
        r = subprocess.run(command(j[0], j[1]), cwd=cwd, capture_output=True, text=True)
        results[i] = (r.returncode, r.stdout + r.stderr)

    if len(win) == 1 and not linux:
        one_win(win[0])
        return results
    with ThreadPoolExecutor(workers) as pool:
        futures = [pool.submit(one_win, item) for item in win]
        if linux:
            name = ensure_container()
            work = _real(ROOT / "build" / "eegcc")
            work.mkdir(parents=True, exist_ok=True)
            tag = f"{os.getpid()}_{id(jobs)}"
            script = work / f"batch_{tag}.sh"
            lines = ["#!/bin/sh", f"cd '{cwd}'"]
            for i, j in linux:
                argv = " ".join("'" + a.replace("'", "'\\''") + "'" for a in command(j[0], j[1], *j[2:]))
                log = work / f"batch_{tag}_{i}.log"
                lines.append(f"{argv} > '{log}' 2>&1; echo $? >> '{log}'")
            script.write_text("\n".join(lines) + "\n")
            subprocess.run(["docker", "exec", name, "sh", str(script)], check=True, stdin=subprocess.DEVNULL,
                           timeout=max(600, 60 * len(linux)))
            for i, _ in linux:
                log = work / f"batch_{tag}_{i}.log"
                text = log.read_text().rstrip("\n").split("\n")
                results[i] = (int(text[-1]), "\n".join(text[:-1]))
                log.unlink()
            script.unlink()
        for f in futures:
            f.result()
    return results


def run(version, args, cwd=None, assembler=False):
    return run_many([(version, args, assembler)], cwd)[0]


def main():
    argv = sys.argv[1:]
    if not argv or argv[0] in ("-h", "--help"):
        sys.exit(__doc__)
    if argv[0] == "--list":
        for v, (k, _) in VERSIONS.items():
            have = (EEGCC / v).exists()
            print(f"{v:16} {k:6} {'installed' if have else 'missing (scripts/get_tools.py --eegcc)'}")
        return
    if argv[0] == "--stop":
        stop()
        return
    assembler = argv[0] == "--as"
    if assembler:
        argv = argv[1:]
    rc, out = run(argv[0], argv[1:], assembler=assembler)
    sys.stderr.write(out + ("\n" if out and not out.endswith("\n") else ""))
    sys.exit(rc)


if __name__ == "__main__":
    main()
