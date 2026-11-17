#!/usr/bin/env python3
"""Sets up a decomp-permuter folder for one function of the Metrowerks code.

    permuter_import.py src/unk/unk_2CD5F0.c func_002CDA30 [--c ATTEMPT.c] [--if0] [-o build/permuter/NAME]

The folder (default build/permuter/<function>, git-ignored) holds what tools/permuter/permuter.py needs:
  base.c       the C attempt plus the file's declarations (the file preprocessed, the other functions dropped)
  target.o     the original function, assembled from asm/nonmatchings/.../NAME.s
  compile.sh   mwccps2 through wibo with the flags configure.py gives the file (the call of scripts/fdiff.py)
  settings.toml  compiler_type = "mwcc", the r5900 objdump
Where the C attempt comes from (first that applies):
  --c FILE     a file holding the function (and the helper declarations it needs)
  --if0        the `#if 0 ... #endif` block just above the INCLUDE_ASM line (the parked near-miss of the round notes)
  otherwise    the function written in the C file, when it is already C (to improve a function that differs)
Then run it with scripts/permuter_run.py, or by hand: tools/permuter/permuter.py FOLDER -j8 --stop-on-zero.
`score 0` in the permuter means the compiled function is identical to the original (relocations compared by name);
check the result with scripts/fdiff.py before applying it (permuter_run.py does this).
Needs tools/permuter (git clone https://github.com/simonlindholm/decomp-permuter tools/permuter; pip install toml
Levenshtein in the venv) and cpp.
"""

import argparse
import re
import shlex
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT))
sys.path.insert(0, str(ROOT / "scripts"))

KEEP_HEAD = re.compile(r"^\s*(typedef|struct|union|enum)\b")


KNR_HEAD = re.compile(r"^[^;(){}=]*\(\s*\w+(?:\s*,\s*\w+)*\s*\)\s*[^;(){}]+;$")


def preprocess(path):
    cmd = ["cpp", "-P", "-undef", "-D__MWERKS__", "-D__attribute__(x)=", f"-I{ROOT / 'include'}", f"-I{ROOT / 'src'}",
           str(path)]
    r = subprocess.run(cmd, capture_output=True, text=True, cwd=ROOT)
    if r.returncode:
        raise SystemExit(r.stderr)
    return r.stdout


def chunks(text):
    """Top-level pieces of a preprocessed C file: declarations up to `;` and definitions up to their closing brace."""
    out, depth, cur = [], 0, ""
    for ch in text:
        cur += ch
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0 and not KEEP_HEAD.match(cur) and "=" not in cur.split("{")[0]:
                out.append(cur.strip())
                cur = ""
        elif ch == ";" and depth == 0:
            if KNR_HEAD.match(cur.strip()):
                continue  # `void f(p) u8 *p; {`: the parameter declarations of a K&R definition
            out.append(cur.strip())
            cur = ""
    if cur.strip():
        out.append(cur.strip())
    return out


def is_function_def(chunk):
    head = chunk.split("{")[0]
    return chunk.endswith("}") and "(" in head and not KEEP_HEAD.match(chunk) and "=" not in head


def function_name(chunk):
    m = re.search(r"(\w+)\s*\([^()]*(?:\([^()]*\)[^()]*)*\)\s*(?:\w+\s*)*\{", chunk)
    return m.group(1) if m else None


def find_if0(src, name):
    """The text of the `#if 0` block just above the INCLUDE_ASM line of `name`, without the trailing comments."""
    m = re.search(rf'^INCLUDE_ASM\(\s*"[^"]+"\s*,\s*{re.escape(name)}\s*\);', src, re.M)
    if not m:
        return None
    before = src[:m.start()].rstrip("\n")
    end = before.rfind("#endif")
    start = before.rfind("#if 0", 0, end)
    if end < 0 or start < 0 or before[end:].strip() != "#endif":
        return None
    body = before[start + len("#if 0"):end]
    body = "\n".join(l for l in body.splitlines() if not l.strip().startswith("//"))
    return body.strip() + "\n"


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("src", type=Path)
    ap.add_argument("name")
    ap.add_argument("--c", type=Path)
    ap.add_argument("--if0", action="store_true")
    ap.add_argument("-o", "--out", type=Path)
    args = ap.parse_args()
    import configure
    src_path = (ROOT / args.src) if not args.src.is_absolute() else args.src
    src = src_path.read_text()
    out = args.out or ROOT / "build" / "permuter" / args.name
    out.mkdir(parents=True, exist_ok=True)
    for old in out.glob("output-*"):
        shutil.rmtree(old)
    folder = re.search(rf'^INCLUDE_ASM\(\s*"([^"]+)"\s*,\s*{re.escape(args.name)}\s*\);', src, re.M)
    if folder:
        asm = ROOT / folder.group(1) / f"{args.name}.s"
    else:
        found = list((ROOT / "asm" / "nonmatchings").rglob(f"{args.name}.s"))
        if not found:
            raise SystemExit(f"no asm for {args.name}")
        asm = found[0]
    # the attempt: the parked `#if 0` block switched on (so the file's macros and typedefs apply to it), or the given
    # C put where the INCLUDE_ASM line is; every other function of the file is dropped below
    inc = re.search(rf'^INCLUDE_ASM\(\s*"[^"]+"\s*,\s*{re.escape(args.name)}\s*\);', src, re.M)
    if args.c:
        if not inc:
            raise SystemExit("no INCLUDE_ASM line for the function")
        scratch_src = src[:inc.start()] + args.c.read_text() + "\n" + src[inc.end():]
    elif args.if0:
        before = src[:inc.start()].rstrip("\n") if inc else ""
        end = before.rfind("#endif")
        start = before.rfind("#if 0", 0, end)
        if not inc or end < 0 or start < 0 or before[end:].strip() != "#endif":
            raise SystemExit("no #if 0 block above the INCLUDE_ASM line")
        scratch_src = src[:start] + "#if 1" + src[start + len("#if 0"):]
    else:
        scratch_src = src
    # context: the file with every function definition and INCLUDE_ASM dropped
    tmp = out / "_ctx.c"
    tmp.write_text(scratch_src)
    ctx = preprocess(tmp)
    tmp.unlink()
    pieces = chunks(ctx)
    keep, mine = [], None
    protos = []
    for c in pieces:
        if is_function_def(c):
            if function_name(c) == args.name:
                mine = c
            else:
                # the other functions of the file stay callable: a prototype from their header (when nothing declares them)
                protos.append((function_name(c), c.split("{")[0].strip() + ";"))
            continue
        keep.append(c)
    for fname, proto in protos:
        if fname and fname != args.name and not any(re.search(r"\b%s\s*\(" % re.escape(fname), k) for k in keep) \
                and "asm" not in proto.split("(")[0].split():
            keep.append(proto)
    if not mine:
        raise SystemExit("no C function found for the attempt")
    # a prototype of the function itself in the context is harmless; drop duplicates of identical lines
    seen, uniq = set(), []
    for c in keep:
        if re.search(r"\b%s\s*\(" % re.escape(args.name), c) and not is_function_def(c):
            continue  # the file's own prototype of the function would clash with the attempt's
        if c not in seen:
            seen.add(c)
            uniq.append(c)
    (out / "base.c").write_text("\n".join(c if c.endswith(("}", ";")) else c + ";" for c in uniq) + "\n\n" + mine + "\n")
    # target.o
    tgt = out / "target.s"
    tgt.write_text(f'.include "macro.inc"\n.set gp=64\n' + asm.read_text())
    as_cmd = [str(ROOT / "tools/binutils/mips-ps2-decompals-as"), *configure.AS_FLAGS.split(), str(tgt),
              "-o", str(out / "target.o")]
    r = subprocess.run(as_cmd, capture_output=True, text=True, cwd=ROOT)
    if r.returncode:
        raise SystemExit("assembling the target failed:\n" + r.stderr)
    # compile.sh
    rel = src_path.resolve().relative_to(ROOT)
    flags = configure.mwcc_flags(rel)
    (out / "compile.sh").write_text(f"""#!/bin/bash
# input.c -o output.o, as the permuter calls it: the compiler call of scripts/fdiff.py for {rel}
ROOT={shlex.quote(str(ROOT))}
IN=$(realpath "$1"); OUT=$(realpath -m "$3")
cd "$ROOT"
MWCIncludes="$ROOT/include" "$ROOT/tools/wibo" "$ROOT/tools/mwcps2/{configure.MWCC_VERSION}/mwccps2.exe" -c {flags} "$IN" -o "$OUT"
""")
    (out / "compile.sh").chmod(0o755)
    objdump = ROOT / "tools/binutils/mips-ps2-decompals-objdump"
    (out / "settings.toml").write_text(f'func_name = "{args.name}"\ncompiler_type = "mwcc"\n'
                                       f'objdump_command = "{objdump} -drz -m mips:5900"\n')
    (out / "function.txt").write_text(args.name + "\n")
    # sanity: does it compile, and how far is it
    (out / "base.o").unlink(missing_ok=True)
    r = subprocess.run(["bash", str(out / "compile.sh"), str(out / "base.c"), "-o", str(out / "base.o")])
    print(f"{out}: " + ("base.c compiles" if (out / "base.o").exists() else "base.c does NOT compile (fix base.c by hand)"))


if __name__ == "__main__":
    main()
