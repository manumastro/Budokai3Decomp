#!/usr/bin/env python3
"""C drafts of INCLUDE_ASM functions with m2c, checked against the original with the project's own compiler.

    m2c_draft.py src/unk/unk_2CD5F0.c func_002CDA30 [-v] [--keep DIR]

For one INCLUDE_ASM function this
  1. builds (once, cached in build/m2c/ctx.h) a context from the whole of src/: the primitive-typed `extern`
     declarations and the prototypes of the functions already written in C, so that m2c knows every callee's
     arguments and every global's type;
  2. runs m2c (tools/m2c, target mipsee-gcc-c, --valid-syntax; env M2C_TARGET and M2C_EXTRA override the target and add options) on asm/nonmatchings/.../NAME.s;
  3. makes the draft compilable for Metrowerks (unknown struct fields become byte-offset accesses on `u8 *`);
  4. splices it in place of the INCLUDE_ASM line in a scratch copy of the file, compiles that copy with the flags
     configure.py gives the file (the same compiler call as scripts/fdiff.py) and compares the function with the
     original.

The last line is `RESULT name status diff total detail`, where status is
  match      every non-relocated instruction is the same, the size is right and the object defines no data
  diff       it compiles but N of M instructions differ
  size       it compiles but to another size (diff is then the instruction count of the difference, at least 1)
  data       it compiles to the same instructions but the object defines data (string, float, switch table)
  cerr       the compiler refused it (detail: the first error)
  m2cfail    m2c produced no function (detail: why)
Nothing in the repository is changed (everything goes to a temporary folder, or --keep DIR); scripts/m2c_batch.py
applies the matches. Needs tools/m2c (git clone https://github.com/matt-kempster/m2c tools/m2c), the compiler of
scripts/get_tools.py and disc/SLUS_209.98.rom (configure.py). Safe to run in parallel.
"""

import argparse
import difflib
import json
import os
import re
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.insert(0, str(ROOT))
import mwmatch  # noqa: E402
import m2c_fix  # noqa: E402

MAX_ROUNDS = int(os.environ.get("M2C_ROUNDS", "16"))

M2C = ROOT / "tools" / "m2c" / "m2c.py"
CACHE = ROOT / "build" / "m2c"
PRIM = r"(?:void|s8|u8|s16|u16|s32|u32|s64|u64|f32|char|int|float|double)"
EXTERN_RE = re.compile(rf"^extern\s+{PRIM}(?:\s*\*+)?\s*\*?\s*(\w+)(?:\[[^\]]*\])?(?:\(.*\))?\s*;")
DEF_RE = re.compile(rf"^({PRIM}(?:\s*\*+)?)\s*(\w+)\(([^;{{]*)\)\s*\{{")
MACROS = """#ifndef M2C_MACROS_H
#define M2C_MACROS_H
/* the macros of m2c --valid-syntax, as far as Metrowerks takes them (tools/m2c/m2c_macros.h) */
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
#ifndef S128_DEFINED
#define S128_DEFINED
typedef __int128 s128;
#endif
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((u8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_SYNC() (0)
#define M2C_BREAK() (0)
#define M2C_TRAP_IF(cond) (0)
#define M2C_PREFETCH(addr) (0)
#define M2C_UNALIGNED32(expr) (expr)
#define M2C_FIRST3BYTES(expr) (expr)
#define M2C_LWL(expr) (expr)
#define M2C_MEMCPY_ALIGNED memcpy
#define M2C_MEMCPY_UNALIGNED memcpy
#define M2C_STRUCT_COPY memcpy
#define MULT_HI(a, b) (0)
#define MULTU_HI(a, b) (0)
#define CLZ(x) (0)
#define GLUE_F64(a, b) (0.0)
#endif
"""


def strip_if0(lines):
    """The lines of a C file outside `#if 0 ... #endif` blocks (the parked attempts)."""
    out, depth = [], 0
    for line in lines:
        s = line.strip()
        if depth:
            if s.startswith("#if"):
                depth += 1
            elif s.startswith("#endif"):
                depth -= 1
            continue
        if s == "#if 0":
            depth = 1
            continue
        out.append(line)
    return out


def visible(text):
    """The text the compiler sees: no `#if 0` blocks, no comments."""
    text = "\n".join(strip_if0(text.splitlines()))
    return re.sub(r"//[^\n]*|/\*.*?\*/", "", text, flags=re.S)


def norm_decl(line):
    line = re.sub(r"/\*.*?\*/", "", line)
    line = re.sub(r"//.*", "", line)
    return re.sub(r"\s+", " ", line).strip()


TYPE_WORDS = {"extern", "const", "unsigned", "signed", "void", "s8", "u8", "s16", "u16", "s32", "u32", "s64", "u64",
              "f32", "char", "int", "float", "double", "long", "short"}


def only_primitive(decl, sym):
    """True when the declaration uses nothing but the primitive types (m2c's context knows no structs)."""
    rest = re.sub(rf"\b{re.escape(sym)}\b", "", decl, count=1)
    rest = re.sub(r"0[xX][0-9A-Fa-f]+|\d+", "", rest)
    return all(w in TYPE_WORDS for w in re.findall(r"[A-Za-z_]\w*", rest))


def param_types(params):
    """The parameter list without the parameter names (`u8 *p, s32 n` -> `u8 *, s32`)."""
    out = []
    for p in (x.strip() for x in params.split(",")):
        words = re.findall(r"[A-Za-z_]\w*", p)
        if len(words) > 1 and words[-1] not in TYPE_WORDS:
            p = re.sub(r"\s*\b%s\b(\[[^\]]*\])?\s*$" % words[-1], "", p)
        out.append(p)
    return ", ".join(o for o in out if o)


def build_context():
    """Writes build/m2c/ctx.h: types.h's typedefs, the primitive extern declarations of every C file and the
    prototypes of the functions written in C. Returns {symbol: declaration}."""
    CACHE.mkdir(parents=True, exist_ok=True)
    decls = {}
    for path in sorted((ROOT / "src").rglob("*.c")):
        for sym, d in parse_decls(path.read_text()).items():
            decls.setdefault(sym, d)
    text = ctx_text(decls)
    ctx = CACHE / "ctx.h"
    if not ctx.exists() or ctx.read_text() != text:
        tmp = CACHE / f"ctx.{os.getpid()}.tmp"
        tmp.write_text(text)
        os.replace(tmp, ctx)
    return decls


def parse_decls(text):
    """{symbol: declaration} of the primitive-typed externs and the function definitions of one C file's text."""
    decls = {}
    for raw in strip_if0(text.splitlines()):
        line = norm_decl(raw)
        m = EXTERN_RE.match(line)
        if m:
            if only_primitive(line, m.group(1)):
                decls.setdefault(m.group(1), line)
            continue
        m = DEF_RE.match(line)
        if m and "..." not in m.group(3):
            d = f"extern {m.group(1)} {m.group(2)}({param_types(m.group(3).strip()) or 'void'});"
            if only_primitive(d, m.group(2)):
                decls.setdefault(m.group(2), d)
    return decls


def ctx_text(decls, skip=None):
    types = "\n".join(l for l in (ROOT / "include" / "types.h").read_text().splitlines() if l.startswith("typedef"))
    return types + "\n" + "\n".join(d for s, d in decls.items() if s != skip) + "\n"


def asm_info(name, src):
    """(.s path, size, address, the INCLUDE_ASM match) of an INCLUDE_ASM function of a C file."""
    m = re.search(rf'^INCLUDE_ASM\(\s*"([^"]+)"\s*,\s*{re.escape(name)}\s*\);', src, re.M)
    if not m:
        return None
    path = ROOT / m.group(1) / f"{name}.s"
    if not path.exists():
        return None
    txt = path.read_text()
    size = int(re.search(r"nonmatching \w+, (0x[0-9A-Fa-f]+)", txt).group(1), 16)
    addr = int(re.search(r"/\* [0-9A-F]+ ([0-9A-F]{8}) ", txt).group(1), 16)
    return path, size, addr, m


def jump_tables():
    """{label: text} of every jtbl_XXXXXXXX block of asm/data (cached in build/m2c/jtbl.json)."""
    cache = CACHE / "jtbl.json"
    if cache.exists():
        return json.loads(cache.read_text())
    out = {}
    for path in sorted((ROOT / "asm" / "data").rglob("*.s")):
        cur = None
        for line in path.read_text().splitlines():
            if cur is None:
                m = re.match(r"dlabel (jtbl_\w+)$", line)
                if m:
                    cur = m.group(1)
                    out[cur] = [line]
            else:
                out[cur].append(line)
                if line.startswith("enddlabel"):
                    cur = None
    out = {k: "\n".join(v) for k, v in out.items()}
    tmp = CACHE / f"jtbl.{os.getpid()}.tmp"
    tmp.write_text(json.dumps(out))
    os.replace(tmp, cache)
    return out


def run_m2c(asm, name, decls, extra=()):
    # the context without the function itself: its own (often guessed) prototype would hide its arguments
    with tempfile.TemporaryDirectory() as td:
        ctx = Path(td) / "ctx.h"
        ctx.write_text(ctx_text(decls, skip=name))
        files = [str(asm)]
        used = sorted(set(re.findall(r"\bjtbl_\w+", Path(asm).read_text())))
        if used:
            tables = jump_tables()
            jt = Path(td) / "jtbl.s"
            jt.write_text(".section .rodata\n" + "\n".join(tables[u] for u in used if u in tables) + "\n")
            files.append(str(jt))
        # M2C_TARGET / M2C_EXTRA (space separated) override the target and add options to every run (for A/B tests)
        cmd = [sys.executable, str(M2C), "-t", os.environ.get("M2C_TARGET", "mipsee-gcc-c"), "--valid-syntax", "--no-cache",
               "--context", str(ctx), "-f", name, *extra, *os.environ.get("M2C_EXTRA", "").split(), *files]
        r = subprocess.run(cmd, capture_output=True, text=True, timeout=120)
    return r.returncode, r.stdout, r.stderr


def split_output(out, name):
    """(declaration lines before the function, the function text) of m2c's output."""
    lines = out.splitlines()
    start = next((i for i, l in enumerate(lines) if re.match(rf"^\S.*\b{re.escape(name)}\(", l)
                  and not l.rstrip().endswith(";")), None)
    if start is None:
        return None, None
    func = lines[start:]
    # `void *argN` parameters: the draft treats them as byte pointers (arithmetic and M2C_FIELD)
    func = [re.sub(r"\bvoid \*", "u8 *", l) for l in func]
    return [expand_macros(l) for l in lines[:start] if l.strip()], expand_macros("\n".join(func) + "\n")


def wrapped(s):
    """True when the whole string is one parenthesised group."""
    if not (s.startswith("(") and s.endswith(")")):
        return False
    depth = 0
    for k, ch in enumerate(s):
        depth += {"(": 1, ")": -1}.get(ch, 0)
        if depth == 0 and k < len(s) - 1:
            return False
    return True


def expand_macros(text):
    """M2C_FIELD(expr, type, off) -> (*type((u8 *)(expr) + (off))), M2C_BITWISE(type, e) -> ((type)(e)), M2C_UNK -> s32:
    plain C in the project's style, no macro header needed (any other M2C_ macro stays and blocks applying)."""
    text = re.sub(r"\bM2C_UNK(8|16|32|64)?\b", lambda mm: {"8": "s8", "16": "s16", "64": "s64"}.get(mm.group(1), "s32"), text)
    while True:
        i = text.rfind("M2C_FIELD(")
        if i < 0:
            break
        depth, j = 1, i + len("M2C_FIELD(")
        while j < len(text) and depth:
            depth += {"(": 1, ")": -1}.get(text[j], 0)
            j += 1
        args = [a.strip() for a in split_top(text[i + len("M2C_FIELD("):j - 1])]
        if len(args) != 3:
            text = text[:i] + "M2C_FIELD_BAD(" + text[i + len("M2C_FIELD("):]
            continue
        a0 = args[0]
        while wrapped(a0) and re.fullmatch(r"\([\w.]+\)", a0):
            a0 = a0[1:-1]
        base = a0 if re.fullmatch(r"[\w.]+", a0) or wrapped(a0) else f"({a0})"
        expr = f"*({args[1]})((u8 *){base} + {args[2]})"
        text = text[:i] + (f"({expr})" if text[j:j + 1] in ("[", ".", "-", "(", "+") else expr) + text[j:]
    return text.replace("M2C_FIELD_BAD(", "M2C_FIELD(")


def known(text, sym):
    return re.search(rf"\b{re.escape(sym)}\b", text) is not None


def compile_scratch(path, version, flags, out, incs):
    cmd = [str(mwmatch.TOOLS / "wibo"), str(mwmatch.TOOLS / "mwcps2" / version / "mwccps2.exe"), "-c", *flags.split(),
           "-Iinclude", *[f"-I{i}" for i in incs], str(path), "-o", str(out)]
    env = dict(os.environ, MWCIncludes=str(ROOT / "include"))
    r = subprocess.run(cmd, cwd=ROOT, env=env, capture_output=True, text=True, timeout=300)
    if r.returncode != 0 or not out.exists():
        return r.stdout + r.stderr
    return None


def first_error(msg):
    lines = [l.strip().lstrip("#").strip() for l in msg.splitlines() if l.strip()]
    for i, l in enumerate(lines):
        if l.startswith("Error:") and set(l[6:].strip()) <= set("^"):
            # Metrowerks: the source line, then `Error: ^^^`, then the message
            text = " ".join(x for x in lines[i + 1:i + 4] if not x.startswith("###") and not x.startswith("Errors"))
            return (text + " @ " + lines[i - 1])[:300]
    return (lines[-1] if lines else "?")[:300]


def data_sections(obj):
    from elftools.elf.elffile import ELFFile
    out = []
    with open(obj, "rb") as f:
        for s in ELFFile(f).iter_sections():
            if s["sh_flags"] & 2 and s["sh_size"] and s.name not in (".text", ".mwcats"):
                out.append(f"{s.name} 0x{s['sh_size']:X}")
    return out


def own_prototype(ctext, name):
    m = re.match(rf"^([^\n{{}};]*?)\b{name}\(([^{{}};]*?)\)\s*\{{", ctext.lstrip())
    if not m:
        return None
    return f"extern {m.group(1).strip()} {name}({param_types(m.group(2)) or 'void'});"


def splice(src, m, ctext, add, name, macros=True):
    """The file with the INCLUDE_ASM line replaced by the declarations and the function. The file's own declaration
    of the function (often a guess) is replaced by the draft's prototype."""
    head = src[:m.start()]
    proto = own_prototype(ctext, name)
    decl_re = re.compile(rf"^extern [^\n;]*\b{name}\(.*\);[^\n]*\n", re.M)
    if proto and decl_re.search(head):
        seen = []

        def repl(_):
            seen.append(1)
            return proto + "\n" if len(seen) == 1 else ""
        head = decl_re.sub(repl, head)
    if macros and "m2c_macros.h" not in head:
        if '#include "common.h"\n' in head:
            head = head.replace('#include "common.h"\n', '#include "common.h"\n#include "m2c_macros.h"\n', 1)
        else:
            head = '#include "m2c_macros.h"\n' + head
    tail = src[m.end():]
    if proto:
        tail = decl_re.sub("", tail)
    return head + "".join(a + "\n" for a in add) + ctext + tail


def split_draft(text, name):
    """(declaration lines, function text) of a draft as draft()['c'] returns it."""
    lines = text.splitlines(True)
    k = next(i for i, l in enumerate(lines) if re.match(rf"^\S.*\b{re.escape(name)}\(", l) and not l.rstrip().endswith(";"))
    return [l.rstrip("\n") for l in lines[:k]], "".join(lines[k:])


DECL_SYM_RE = re.compile(r"\b(\w+)\s*(?:\[[^\]]*\])?\s*(?:\(.*)?;\s*$")


def apply_function(path, name, add, ctext, filter_known=True):
    """Puts the function in place of the INCLUDE_ASM line of `name` in the C file, and removes the parked `#if 0`
    attempt and its note just above it. Returns the old text of the file (to undo with path.write_text)."""
    path = Path(path)
    src = path.read_text()
    old = src
    m = asm_info(name, src)[3]
    head = src[:m.start()]
    park = re.search(r"#if 0\n(?:(?!#if 0).)*?#endif\n(?://[^\n]*\n)*\Z", head, re.S)
    if park:
        head = head[:park.start()]
        # the failure notes written above the parked block ("// differs: ...", "// GIVEN UP ...") are stale now
        head = re.sub(r"(?:^//[^\n]*(?:differs|GIVEN UP|tried|%s)[^\n]*\n)+\Z" % re.escape(name), "", head, flags=re.M)
        src = head + src[m.start():]
        m = asm_info(name, src)[3]
    rest =visible(src[:m.start()] + src[m.end():])
    if filter_known:
        add = [a for a in add if not (DECL_SYM_RE.search(a) and known(rest, DECL_SYM_RE.search(a).group(1)))]
    path.write_text(splice(src, m, ctext, add, name, macros=False))
    return old


C_TYPES = {"unsigned char *": "u8 *", "signed char *": "s8 *", "char *": "char *", "int": "s32", "unsigned int": "u32",
           "short": "s16", "unsigned short": "u16", "int *": "s32 *", "unsigned int *": "u32 *", "short *": "s16 *",
           "unsigned short *": "u16 *", "void *": "void *", "float": "f32", "long": "s64", "unsigned long": "u64",
           "signed char": "s8", "unsigned char": "u8", "float *": "f32 *", "void **": "void **", "int **": "s32 **",
           "unsigned char **": "u8 **"}
IMPLICIT_RE = re.compile(r"#\s+\d+:\s?(.*?)\r?\n#\s+Error:\s+\^+\r?\n#\s+illegal implicit conversion from '(.*?)' to\r?\n#\s+'(.*?)'")


UNDEF_RE = re.compile(r"undefined identifier '(\w+)'")
ARITY_RE =re.compile(r"#\s+\d+:\s?(.*?)\r?\n#\s+Error:\s+\^+\r?\n#\s+function call '(\w+)\(.*?\)' does not match\r?\n#\s+'\w+\((.*?)\)'")
ARRAY_RE = re.compile(r"#\s+\d+:\s?(.*?)\r?\n#\s+Error:\s+\^+\r?\n#\s+illegal (?:operands|implicit conversion)[^\n]*?'?(\w+(?: \w+)*)\[\]'")
PROTOMISMATCH_RE = re.compile(r"#\s+\d+:\s?(.*?)\r?\n#\s+Error:\s+\^+\r?\n#\s+function call does not match prototype")
NONFUNC_RE =re.compile(r"#\s+\d+:\s?(.*?)\r?\n#\s+Error:\s+\^+\r?\n#\s+call of non-function")
VOIDPLUS_RE =re.compile(r"#\s+\d+:\s?(.*?)\r?\n#\s+Error:\s+\^+\r?\n#\s+illegal operands 'void \*' \+ 'int'")


def split_top(s, sep=","):
    out, depth, cur = [], 0, ""
    for ch in s:
        if ch in "([{":
            depth += 1
        elif ch in ")]}":
            depth -= 1
        if ch == sep and depth == 0:
            out.append(cur)
            cur = ""
        else:
            cur += ch
    out.append(cur)
    return out


def repair(ctext, cerr, decls, filetext=""):
    """Adds the casts Metrowerks asks for (`illegal implicit conversion` between an integer and a pointer, or
    between pointers) on the statement it names: the right side of an assignment, or the arguments of a call
    whose prototype is known. A cast to the type the value already has does not change the code."""
    lines = ctext.split("\n")
    changed = False
    for srcline, callee, proto in ARITY_RE.findall(cerr):
        # m2c guessed another number of arguments than the file's prototype: follow the prototype
        want_n = [p for p in split_top(proto) if p.strip()]
        want_n = [] if want_n == ["void"] else want_n
        for i, l in enumerate(lines):
            if srcline.strip() in l:
                mm = re.search(rf"\b{callee}\(", l)
                if mm:
                    depth, j = 1, mm.end()
                    while j < len(l) and depth:
                        depth += {"(": 1, ")": -1}.get(l[j], 0)
                        j += 1
                    inner = l[mm.end():j - 1]
                    args = [a.strip() for a in split_top(inner)] if inner.strip() else []
                    args = (args + ["0"] * len(want_n))[:len(want_n)]
                    lines[i] = l[:mm.end()] + ", ".join(args) + l[j - 1:]
                    changed = True
                break
    for srcline, op in ARRAY_RE.findall(cerr):
        # a global declared as an array of unknown size used as a scalar: `D_x` -> `D_x[0]`
        for i, l in enumerate(lines):
            if srcline.strip() in l:
                def fix(mm):
                    sym = mm.group(2)
                    d = decls.get(sym, "")
                    if "[" in d and not mm.group(1).endswith("&") and mm.group(3) != "[":
                        return mm.group(1) + sym + "[0]" + mm.group(3)
                    return mm.group(0)
                lines[i] = re.sub(r"(\W|^)(\w+)(\W|$)", lambda mm: fix(mm), l)
                changed = changed or lines[i] != l
                break
    for srcline in PROTOMISMATCH_RE.findall(cerr):
        # a call through a function-pointer global with the wrong number of arguments: follow its declared parameters
        for i, l in enumerate(lines):
            if srcline.strip() not in l:
                continue
            for mm in re.finditer(r"\b([A-Za-z_]\w*)(?:\[0\])?\(", l):
                fp = re.search(rf"\(\s*\*\s*{mm.group(1)}\s*(?:\[[^\]]*\])?\s*\)\s*\(([^)]*)\)", filetext)
                if not fp:
                    continue
                want_n = [p for p in split_top(fp.group(1)) if p.strip() and p.strip() != "void"]
                depth, j = 1, mm.end()
                while j < len(l) and depth:
                    depth += {"(": 1, ")": -1}.get(l[j], 0)
                    j += 1
                inner = l[mm.end():j - 1]
                args = [a.strip() for a in split_top(inner)] if inner.strip() else []
                args = (args + ["0"] * len(want_n))[:len(want_n)]
                lines[i] = l[:mm.end()] + ", ".join(args) + l[j - 1:]
                changed = True
                break
            break
    for srcline in NONFUNC_RE.findall(cerr):
        # a call through a global that holds a function pointer: `D_x(a)` -> `((void (*)())D_x)(a)`
        for i, l in enumerate(lines):
            if srcline.strip() in l:
                def fixcall(mm):
                    sym = mm.group(1)
                    d = decls.get(sym, "")
                    fp = re.search(rf"\(\s*\*\s*{sym}\s*(\[[^\]]*\])?\s*\)\s*\(", filetext)
                    if fp:
                        return f"{sym}{'[0]' if fp.group(1) else ''}("
                    if d and "(" not in d:
                        return f"((void (*)()){sym}{'[0]' if '[' in d else ''})("
                    return mm.group(0)
                new = re.sub(r"\b([A-Za-z_]\w*)\(", fixcall, l)
                changed = changed or new != l
                lines[i] = new
                break
    for srcline in VOIDPLUS_RE.findall(cerr):
        for i, l in enumerate(lines):
            if srcline.strip() in l:
                new = re.sub(r"(?<![\w)\]])([A-Za-z_]\w*) \+ ", r"((u8 *)\1) + ", l)
                changed = changed or new != l
                lines[i] = new
                break
    for srcline, frm, to in IMPLICIT_RE.findall(cerr):
        want = C_TYPES.get(to) or (to if to.startswith("struct ") and to.endswith("*") else None)
        if not want:
            continue
        for i, l in enumerate(lines):
            if srcline.strip() not in l:
                continue
            ind = l[:len(l) - len(l.lstrip())]
            body = l.strip()
            m = re.match(r"^(?:[\w ]+\s+)?(\*?[\w\[\]\.\->\(\)\*\s]+?)\s=\s(.*);$", body)
            call = re.match(r"^(?:(.*?)\s=\s)?(\w+)\((.*)\);$", body)
            if call and call.group(1) and frm.endswith("*") and to.endswith("*"):
                # a pointer returned into a differently typed pointer lhs: cast the call result (the args are never pointers here)
                if not re.search(r"=\s*\(%s\)\s*%s\(" % (re.escape(want), call.group(2)), body):
                    lines[i] = f"{ind}{call.group(1)} = ({want}){call.group(2)}({call.group(3)});"
                    changed = True
                    break
            if call and call.group(2) in decls:
                proto = decls[call.group(2)]
                pm = re.match(r"^extern .*?\b%s\((.*)\);" % call.group(2), proto)
                ptypes = [p.strip() for p in split_top(pm.group(1))] if pm else []
                args = [a.strip() for a in split_top(call.group(3))] if call.group(3).strip() else []
                if len(ptypes) == len(args) and ptypes != ["void"]:
                    new = []
                    for a, p in zip(args, ptypes):
                        pt = p.replace("const ", "")
                        simple = re.fullmatch(r"-?(0x[0-9A-Fa-f]+|\d+)", a)
                        if pt in C_TYPES.values() and pt not in ("f32", "f32 *") and not simple and not a.startswith(f"({pt})"):
                            new.append(f"({pt})({a})")
                        else:
                            new.append(a)
                    if new != args:
                        lhs = (call.group(1) + " = ") if call.group(1) else ""
                        lines[i] = f"{ind}{lhs}{call.group(2)}({', '.join(new)});"
                        changed = True
                        break
            if call and call.group(3).strip():
                args = [a.strip() for a in split_top(call.group(3))]
                lits = [bool(re.fullmatch(r"-?(0x[0-9A-Fa-f]+|\d+)", a)) for a in args]
                if lits.count(False) == 1:
                    k = lits.index(False)
                    args[k] = f"({want})({args[k]})"
                    lhs = (call.group(1) + " = ") if call.group(1) else ""
                    lines[i] = f"{ind}{lhs}{call.group(2)}({', '.join(args)});"
                    changed = True
                    break
            if m and not re.match(r"^(if|while|for|return)\b", body):
                lhs, rhs = m.group(1), m.group(2)
                if not rhs.startswith(f"({want})"):
                    lines[i] = f"{ind}{body[:body.index(' = ') + 3]}({want})({rhs});"
                    changed = True
            break
    return "\n".join(lines) if changed else ctext


_MEMO = {}


def draft(srcpath, name, keep=None, verbose=False, decls=None, extra_m2c=(), c_override=None):
    """Returns a dict: name, size, status, diff, total, detail, c (the declarations and function)."""
    import configure
    srcpath = Path(srcpath)
    res = dict(name=name, file=str(srcpath), size=0, status="m2cfail", diff=-1, total=0, detail="", c="")
    src = srcpath.read_text()
    info = asm_info(name, src)
    if info is None:
        res["detail"] = "no INCLUDE_ASM / asm file"
        return res
    asm, size, addr, m = info
    res["size"] = size
    if decls is None:
        decls = build_context()
    # the file's own declarations win over the other files' (they are the ones the draft has to compile with)
    decls = dict(decls)
    decls.update(parse_decls(src[:m.start()] + src[m.end():]))
    if c_override is None:
        rc, out, err = run_m2c(asm, name, decls, extra_m2c)
        if rc != 0 or not out.strip():
            res["detail"] = first_error(err or out)
            return res
        pre, ctext = split_output(out, name)
        if ctext is None:
            res["detail"] = "no function in m2c output: " + first_error(err or out)
            return res
        # another option variant often gives the same text: reuse its result
        memo_key = (str(srcpath), name, "\n".join(pre), ctext)
        if memo_key in _MEMO:
            return dict(_MEMO[memo_key])
        res = draft(srcpath, name, keep, verbose, decls, extra_m2c, c_override="\n".join(pre) + "\n\x00" + ctext)
        _MEMO[memo_key] = dict(res)
        return res
    elif "\x00" in c_override:
        # (from the memo path above: m2c's declarations, then the function)
        p, ctext = c_override.split("\x00", 1)
        pre = [l for l in p.split("\n") if l.strip()]
    else:
        pre, ctext = [], c_override
    # declarations the file lacks: m2c's own for symbols the context did not have, the context's for the others
    before = visible(src[:m.start()] + src[m.end():])
    add = []
    # a symbol the file only declares further down (below the function) needs its declaration moved up
    head_vis, tail_vis = visible(src[:m.start()]), visible(src[m.end():])
    for line in re.findall(r"^extern[^\n;]*;", tail_vis, re.M):
        names = [w for w in re.findall(r"[A-Za-z_]\w*", line) if w not in TYPE_WORDS and w != name]
        if any(known(ctext, w) and not known(head_vis, w) for w in names) and not any(known(a, names[0]) for a in add if names):
            add.append(line)
    for l in pre:
        s = norm_decl(l)
        sm = re.search(r"(\w+)\s*(?:\[[^\]]*\])?\s*(?:\(.*)?;\s*$", s)
        if sm and sm.group(1) != name and not known(before, sm.group(1)):
            add.append(re.sub(r"\s*/\*.*?\*/", "", l))
    for sym, d in decls.items():
        if sym != name and known(ctext, sym) and not known(before, sym) and not any(known(a, sym) for a in add):
            add.append(d)
    version, flags = configure.MWCC_VERSION, configure.mwcc_flags(srcpath.resolve().relative_to(ROOT))
    with tempfile.TemporaryDirectory() as td:
        d = Path(keep) if keep else Path(td)
        d.mkdir(parents=True, exist_ok=True)
        (d / "m2c_macros.h").write_text(MACROS)
        scratch = d / f"{name}.c"
        obj = d / "out.o"
        incs = [d, srcpath.resolve().parent]
        relaxed = False
        res["repairs"] = 0
        # the file's own prototype of the function (callers elsewhere in the file were written against it)
        fp = re.search(rf"^(?:extern\s+)?[^\n;(){{}}#=]*\b{re.escape(name)}\([^;{{}}]*\)\s*;", before, re.M)
        fileproto = fp.group(0) if fp else None
        for attempt in range(MAX_ROUNDS):
            full = splice(src, m, ctext, add, name)
            scratch.write_text(full)
            obj.unlink(missing_ok=True)
            cerr = compile_scratch(scratch, version, flags, obj, incs)
            if not cerr:
                break
            if os.environ.get("M2C_DEBUG"): print("ATTEMPT", attempt, first_error(cerr), file=sys.stderr)
            pos = full.find("".join(x + "\n" for x in add) + ctext)
            cbase = full[:pos].count("\n") + len(add) + 1 if pos >= 0 else None
            new, add, notes = m2c_fix.fix(ctext, add, full, cerr, name, fileproto, cbase)
            if os.environ.get("M2C_DEBUG"): print("   fixes:", notes, file=sys.stderr)
            if notes and new == ctext:
                new = ctext + " "  # only the declarations changed
            new = repair(new, cerr, decls, before) if new == ctext else new
            for sym in UNDEF_RE.findall(cerr):
                # a symbol m2c used but nobody declared (a callee whose address is taken, a global of another type)
                if re.match(r"(func_|D_|g[A-Z])", sym) and not known("\n".join(add), sym):
                    add.append(f"extern void {sym}(void);" if sym.startswith("func_") else f"extern s32 {sym};")
                    new = new if new != ctext else ctext + " "
            if new == ctext:
                break
            ctext = new
            res["repairs"] += 1
        res["c"] = "".join(a + "\n" for a in add) + ctext
        if cerr:
            # pointer type checks off: the same code generation, but the draft needs casts before it can be applied
            res["strict_error"] = first_error(cerr)
            obj.unlink(missing_ok=True)
            cerr = compile_scratch(scratch, version, flags + " -relax_pointers", obj, incs)
            relaxed = True
        if cerr:
            res.update(status="cerr", detail=first_error(cerr))
            return res
        res["relaxed"] = relaxed
        fns = mwmatch.functions(obj)
        if name not in fns:
            res.update(status="cerr", detail="function missing from the object")
            return res
        words, relocs = fns[name]
        res["total"] = len(words)
        data = data_sections(obj)
    rom = mwmatch.ROM.read_bytes()
    n = len(words)
    diffs, orig = mwmatch.compare(words, relocs, addr, rom)
    if n * 4 != size:
        tail_zero = n * 4 < size and not any(rom[addr - 0x100000 + n * 4:addr - 0x100000 + size]) and size - n * 4 <= 8
        if not tail_zero:
            # instructions of the original that the draft does not reproduce, aligned (a shifted block counts once)
            full = list(struct.unpack(f"<{size // 4}I", rom[addr - 0x100000:addr - 0x100000 + size]))
            a = [mwmatch.mask(w, i in relocs) for i, w in enumerate(words)]
            b = [mwmatch.mask(w, False) for w in full]
            sm = difflib.SequenceMatcher(None, a, b, autojunk=False)
            matched = sum(bl.size for bl in sm.get_matching_blocks())
            if verbose:
                pad = max(len(words), len(full))
                mwmatch.show(words + [0] * (pad - len(words)), full + [0] * (pad - len(full)), addr)
            res.update(status="size", diff=max(len(b) - matched, 1), detail=f"compiled 0x{n * 4:X}, original 0x{size:X}")
            return res
    if verbose:
        mwmatch.show(words, orig, addr)
    if diffs:
        res.update(status="diff", diff=len(diffs))
    elif data:
        res.update(status="data", diff=0, detail=", ".join(data))
    else:
        res.update(status="relaxmatch" if relaxed else "match", diff=0,
                   detail="identical code, but it only compiles with -relax_pointers: add the pointer casts" if relaxed else "")
    return res


VARIANTS = [
    ("default", []),
    ("regvars", ["--reg-vars", "s0,s1,s2,s3,s4,s5,s6,s7,fp"]),
    ("noandor", ["--no-andor"]),
    ("noswitch", ["--no-switches"]),
    ("regvars+noandor", ["--reg-vars", "s0,s1,s2,s3,s4,s5,s6,s7,fp", "--no-andor"]),
    ("gotos", ["--gotos-only"]),
]
RANK = {"match": 0, "relaxmatch": 0, "data": 1, "diff": 2, "size": 3, "cerr": 4, "m2cfail": 5, "error": 6}


def draft_best(srcpath, name, decls=None, variants=VARIANTS):
    """Tries m2c's option variants and returns the best result (a match, else the fewest differing instructions).
    The result gets `variant` and `variants` (status/diff of each)."""
    best, log, seen = None, [], set()
    for vname, extra in variants:
        r = draft(srcpath, name, decls=decls, extra_m2c=extra)
        r["variant"] = vname
        key = (RANK.get(r["status"], 9), r["diff"] if r["status"] in ("diff", "size") else 0, not r.get("relaxed", False) is False)
        log.append(f"{vname}:{r['status']}:{r['diff']}")
        if r["c"] in seen and r["status"] in ("cerr", "m2cfail"):
            continue
        seen.add(r["c"])
        if best is None or key < best[0]:
            best = (key, r)
        if r["status"] == "match":
            break
    best[1]["variants"] = " ".join(log)
    return best[1]


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("src", type=Path)
    ap.add_argument("name")
    ap.add_argument("-v", action="store_true", help="print the draft and the side-by-side diff")
    ap.add_argument("--keep", help="keep the scratch file and object in this folder")
    ap.add_argument("--variants", action="store_true", help="try m2c's option variants and keep the best")
    ap.add_argument("--c", type=Path, help="check this C (the function, with its declarations above it) instead of m2c's draft")
    args = ap.parse_args()
    if args.c:
        r = draft(args.src, args.name, keep=args.keep, verbose=True, c_override=args.c.read_text())
    else:
        r = draft_best(args.src, args.name) if args.variants else draft(args.src, args.name, keep=args.keep, verbose=args.v)
    if args.v and not args.c:
        print(r["c"])
    print(f"RESULT {r['name']} {r['status']} {r['diff']} {r['total']} {r['detail']}")


if __name__ == "__main__":
    main()
