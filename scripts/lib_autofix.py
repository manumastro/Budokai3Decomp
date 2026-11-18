#!/usr/bin/env python3
"""Mechanical repairs of library drafts (drafts/**/<func>.c), each checked with lib_try.py as func_insert.py will insert it.

    lib_autofix.py QUEUE.txt [--jobs 8] [--out build/lh/auto] [--log build/lh/auto.log]

QUEUE.txt: one function name a line. For each function the original is disassembled from the ROM and scanned once,
in order (delay slots before their branch):
- the function's arguments: every argument register ($a0-$a3, $t0-$t3 = args 0-7) read before it is written;
- each call (jal/j to a function): the callee's arity (its own arguments, found the same way from its code, or the
  highest argument register set up before the call) and which of its arguments are this function's own arguments
  passed on untouched.
m2c names a parameter after its register (arg2 = $a2), so a draft that dropped unused leading parameters is repaired by
giving the function one parameter per register, 0..N-1, keeping the draft's names and types; a call whose
pass-through arguments m2c dropped gets them back (`g(3)` -> `g(arg0, arg1, 3)`). Then variants: callee prototypes
unprototyped or all-s32 with the right arity, the return type as drafted / void / s32 (`return` on a last call).
The first variant that prints MATCH is written to OUT/<func>.c (lib_try.py --items turns those into func_insert items);
the log line of every function says which rule matched, or the best diff.
"""
import argparse
import contextlib
import io
import re
import struct
import subprocess
import sys
from concurrent.futures import ProcessPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))

ARGREGS = ["a0", "a1", "a2", "a3", "t0", "t1", "t2", "t3"]
STORES = {"sb", "sh", "sw", "sd", "sq", "swl", "swr", "sdl", "sdr", "swc1", "sdc1", "sqc2", "usw"}
NODEST = {"jr", "j", "b", "mtc1", "ctc1", "mthi", "mtlo", "mthi1", "mtlo1", "mtsab", "sync", "sync.l", "sync.p",
          "nop", "syscall", "break", "teq", "tne", "ei", "di", "eret", "cache", "pref", "mtc0", "dmtc1", "mtsa"}
BRANCH = re.compile(r"^(b\w*|j|jr|jal|jalr)$")
REG = re.compile(r"\b(zero|at|v[01]|a[0-3]|t[0-9]|s[0-8]|k[01]|gp|sp|fp|ra)\b")

_ELF = None


def elf_syms():
    global _ELF
    if _ELF is None:
        from elftools.elf.elffile import ELFFile
        byname, byaddr = {}, {}
        with open(ROOT / "build" / "SLUS_209.98.elf", "rb") as f:
            for s in ELFFile(f).get_section_by_name(".symtab").iter_symbols():
                if s["st_info"]["type"] == "STT_FUNC" and s.name and s["st_size"]:
                    byname[s.name] = (s["st_value"], s["st_size"])
                    byaddr.setdefault(s["st_value"], s.name)
        _ELF = (byname, byaddr)
    return _ELF


_ROM = None


def disasm(name):
    """[(mnemonic, [operands])] of a function of the original, from the ROM."""
    global _ROM
    byname, byaddr = elf_syms()
    if name not in byname:
        return None
    addr, size = byname[name]
    if _ROM is None:
        _ROM = (ROOT / "disc" / "SLUS_209.98.rom").read_bytes()
    tmp = ROOT / "build" / "lh" / f"dis_{name}.bin"
    tmp.parent.mkdir(parents=True, exist_ok=True)
    tmp.write_bytes(_ROM[addr - 0x100000:addr - 0x100000 + size])
    r = subprocess.run([str(ROOT / "tools/binutils/mips-ps2-decompals-objdump"), "-D", "-b", "binary", "-m",
                        "mips:5900", "-EL", f"--adjust-vma={addr:#x}", str(tmp)], capture_output=True, text=True)
    tmp.unlink()
    out = []
    for line in r.stdout.splitlines():
        if not line.startswith("  "):
            continue
        txt = line.split("\t", 2)[-1].strip()
        parts = txt.split(None, 1)
        ops = [o.strip() for o in parts[1].split(",")] if len(parts) > 1 else []
        mn = parts[0]
        if mn in ("jal", "j") and ops:
            try:
                t = int(ops[0].split()[0], 16)
                ops = [byaddr.get(t, f"0x{t:x}")]
            except ValueError:
                pass
        out.append((mn, ops))
    return out


def regs_of(op):
    return REG.findall(op)


def dest_src(mn, ops):
    if mn in STORES or mn in NODEST or (BRANCH.match(mn) and mn not in ("jal", "jalr")):
        return None, [r for o in ops for r in regs_of(o)]
    if mn == "jal":
        return "ra", []
    if mn == "jalr":
        rs = [r for o in ops for r in regs_of(o)]
        return "ra", rs[-1:]
    if mn in ("mult", "multu", "div", "divu", "mult1", "multu1", "div1", "divu1", "madd", "maddu") and len(ops) == 2:
        return None, [r for o in ops for r in regs_of(o)]
    if not ops:
        return None, []
    d = regs_of(ops[0])
    src = [r for o in ops[1:] for r in regs_of(o)]
    if ops[0].startswith("$f") or not d:
        return None, src
    return d[0], src


_ARITY = {}


def analyse(name, depth=0):
    """(n_args, calls): n_args = 1 + highest argument register read before written; calls = [(callee, arity,
    {position: own arg index passed through}, set of positions set up in the block)]."""
    code = disasm(name)
    if code is None:
        return None
    written = set()
    blockw = set()
    used = -1
    calls = []
    called = False
    pending = None

    def do_call(callee):
        nonlocal used, called
        ar = None
        if callee and not callee.startswith("0x") and depth < 2:
            if callee not in _ARITY:
                a = analyse(callee, depth + 1)
                _ARITY[callee] = a[0] if a else None
            ar = _ARITY[callee]
        hi = max([ARGREGS.index(r) for r in blockw if r in ARGREGS], default=-1) + 1
        k = max(ar if ar is not None else 0, hi)
        through = {}
        for i in range(k):
            r = ARGREGS[i]
            if r not in blockw and r not in written and not called:
                through[i] = i
                used = max(used, i)
        calls.append((callee, k, through, {ARGREGS.index(r) for r in blockw if r in ARGREGS}))
        for r in ARGREGS + ["v0", "v1", "at"]:
            written.add(r)
        called = True
        blockw.clear()

    for mn, ops in code:
        d, src = dest_src(mn, ops)
        for r in src:
            if r in ARGREGS and r not in written:
                used = max(used, ARGREGS.index(r))
        if d:
            written.add(d)
            blockw.add(d)
        if pending is not None:
            do_call(pending)
            pending = None
        if mn == "jal" or (mn == "j" and ops and not ops[0].startswith("0x")):
            pending = ops[0] if ops else None
        elif mn == "jalr":
            pending = ""
    return used + 1, calls


def split_args(s):
    import func_insert as FI
    s = s.strip()
    return [] if not s else [p.strip() for p in FI.split_top(s)]


def find_calls(body, callee):
    """[(start of args, end of args)] of each call of callee in body."""
    out = []
    for m in re.finditer(rf"\b{re.escape(callee)}\s*\(", body):
        i, depth = m.end(), 1
        while i < len(body) and depth:
            if body[i] == "(":
                depth += 1
            elif body[i] == ")":
                depth -= 1
            i += 1
        out.append((m.end(), i - 1))
    return out


def variants(name, text):
    import lib_try as LT
    decls, func = LT.split_snippet(text, name)
    a = analyse(name)
    if a is None:
        return
    nargs, calls = a
    m = re.match(r"^([^\n{]*?)\b(\w+)\s*\(([^)]*)\)\s*\{", func)
    if not m:
        return
    ret, fname, params = m.group(1).strip(), m.group(2), m.group(3)
    body = func[m.end():]
    plist = [] if params.strip() in ("", "void") else split_args(params)
    bynum, other = {}, []
    for p in plist:
        pm = re.search(r"\barg(\d+)\s*$", p)
        if pm:
            bynum[int(pm.group(1))] = p
        else:
            other.append(p)
    n = max([nargs] + [k + 1 for k in bynum])
    if other:
        newparams = plist + [f"s32 arg{i}" for i in range(len(plist), n)]
        rule_p = "params(appended)"
    else:
        newparams = [bynum.get(i, f"s32 arg{i}") for i in range(n)]
        rule_p = "params" if newparams != plist else ""
    # pass-through arguments of the calls
    newbody, rule_c = body, ""
    by_callee = {}
    for c in calls:
        by_callee.setdefault(c[0], []).append(c)
    arity = {}
    for callee, lst in by_callee.items():
        if not callee:
            continue
        arity[callee] = max(c[1] for c in lst)
        sites = find_calls(newbody, callee)
        if len(sites) != len(lst) or not sites:
            continue
        for (callee_, k, through, setpos), (s, e) in reversed(list(zip(lst, sites))):
            args = split_args(newbody[s:e])
            setp = [i for i in range(k) if i not in through]
            if not through or len(args) != len(setp) or (args and len(args) == k):
                continue
            new = []
            it = iter(args)
            for i in range(k):
                new.append(f"arg{i}" if i in through else next(it))
            newbody = newbody[:s] + ", ".join(new) + newbody[e:]
            rule_c = "passthrough"
    head_names = {re.sub(r"[^\w]", "", p.split()[-1]) for p in newparams}
    rets = [ret]
    has_ret_val = re.search(r"\breturn\s+[^;\s]", newbody)
    if ret != "void" and not has_ret_val:
        rets.append("void")
    if ret == "void":
        rets.append("s32")
    decl_sets = [("", decls)]
    unp = []
    for d in decls:
        dm = re.match(r"^(?:extern\s+)?([\w\s\*]+?)\b(\w+)\s*\((.*)\)\s*;$", d)
        if dm and dm.group(2) in arity:
            unp.append(f"{dm.group(1).strip()} {dm.group(2)}();")
        else:
            unp.append(d)
    if unp != decls:
        decl_sets.append(("unproto", unp))
    s32p = []
    for d in decls:
        dm = re.match(r"^(?:extern\s+)?([\w\s\*]+?)\b(\w+)\s*\((.*)\)\s*;$", d)
        if dm and dm.group(2) in arity and arity[dm.group(2)]:
            s32p.append(f"{dm.group(1).strip()} {dm.group(2)}(" + ", ".join(["s32"] * arity[dm.group(2)]) + ");")
        else:
            s32p.append(d)
    if s32p != decls and s32p != unp:
        decl_sets.append(("s32proto", s32p))
    # callees m2c did not declare at all
    for callee in arity:
        if not any(re.search(rf"\b{re.escape(callee)}\b", d) for d in decls) and callee.startswith("func_"):
            for _, ds in decl_sets:
                ds.append(f"s32 {callee}();")
    seen = set()
    for r in rets:
        b = newbody
        if r == "s32" and ret == "void":
            # `f(...);` as the last statement becomes `return f(...);`
            b2 = re.sub(r"\n(\s*)(\w+\([^;]*\);)(\s*\}\s*)$", r"\n\1return \2\3", b)
            if b2 == b:
                continue
            b = b2
        for dname, ds in decl_sets:
            src = "\n".join(ds) + "\n\n" + f"{r} {name}(" + (", ".join(newparams) or "void") + ") {" + b
            if src in seen:
                continue
            seen.add(src)
            rule = "+".join(x for x in (rule_p, rule_c, dname, "ret:" + r if r != ret else "",
                                        "rename" if fname != name else "") if x) or "asis"
            yield rule, src


def asm_text(name):
    """The original's splat assembly of a function still in assembly (with its symbols)."""
    import lib_try as LT
    addr, _, seg, kind = LT.find_item(name)
    p = ROOT / "asm" / "nonmatchings" / seg / f"{name}.s"
    if kind == "c" and p.exists():
        t = p.read_text()
    else:
        t = (ROOT / "asm" / f"{seg}.s").read_text()
        i = t.index(f"glabel {name}\n")
        k = t.find("\nglabel ", i + 1)
        t = t[i:k if k > 0 else len(t)]
    lines = [l for l in t.splitlines() if not l.startswith(("nonmatching", ".set", "endlabel"))]
    return "\n".join(lines) + "\n"


INS = re.compile(r"^\s+/\*[^*]*\*/\s+(\S+)\s*(.*)$")


def hoist_tail_delay(text):
    """m2c drops the delay slot of a tail `j func`: move that instruction before the jump."""
    lines = text.splitlines()
    out, i, changed = [], 0, False
    while i < len(lines):
        m = INS.match(lines[i])
        if m and m.group(1) == "j" and not m.group(2).strip().startswith(".") and i + 1 < len(lines):
            d = INS.match(lines[i + 1])
            if d and d.group(1) != "nop":
                out += [lines[i + 1], lines[i], "    /* 0 0 0 */  nop"]
                i += 2
                changed = True
                continue
        out.append(lines[i])
        i += 1
    return "\n".join(out) + "\n", changed


def redrafts(name):
    """Fresh m2c drafts of the original with the tail-call delay slots hoisted."""
    import lib_m2c as LM
    try:
        text, changed = hoist_tail_delay(asm_text(name))
    except Exception:  # noqa: BLE001
        return []
    out = []
    for opts in ((), ("--no-andor",)):
        try:
            rc, o, _ = LM.m2c_text(name, text, opts)
        except Exception:  # noqa: BLE001
            continue
        if rc != 0:
            continue
        r = LM.make_c(name, o)
        if r:
            out.append(("m2c" + ("+hoist" if changed else "") + ("+" + opts[0][2:] if opts else ""),
                        "\n".join(dict.fromkeys(r[0])) + "\n\n" + r[1]))
    return out


def transforms(name, src):
    """Conditional rewrites the original's code asks for; yields (rule, src) including the plain src."""
    src = src.replace("M2C_SYNC()", '__asm__ __volatile__("sync.l")')
    yield "", src
    try:
        asm = asm_text(name)
    except Exception:  # noqa: BLE001
        return
    alts = []
    # a global reached through its full address (lui/addiu then 0(reg)): a volatile object
    if re.search(r"addiu\s+\$\w+, \$\w+, %lo\(D_", asm):
        v = re.sub(r"^(extern\s+)(?!volatile)([^;(]*\bD_[0-9A-F]{8}\b[^;(]*;)$", r"\1volatile \2", src, flags=re.M)
        if v != src:
            alts.append(("volatile", v))
    # a last call kept as jal + jr: no sibling call in the original
    if re.search(r"\bjal\s", asm) and not re.search(r"\bj\s+(?!\.)\w", asm):
        k = src.rstrip().rfind("}")
        alts.append(("nosib", src[:k] + '    __asm__ __volatile__("");\n' + src[k:]))
    # pointer strides: typed pointers whose arithmetic m2c/permuter wrote in bytes
    k = src.find("{", src.find(f"{name}("))
    if k > 0:
        head, body = src[:k], src[k:]
        hm = head.rfind(f"{name}(")
        newhead = head[:hm] + re.sub(r"\b(?:s32|u32|s16|u16|s8|int|unsigned int|s64|u64)\s*\*\s*(?=\w)", "u8 *", head[hm:])
        newbody = re.sub(r"^(\s+)(?:s32|u32|s16|u16|s8|int|s64|u64)\s*\*\s*(\w+;)$", r"\1u8 *\2", body, flags=re.M)
        if newhead + newbody != src:
            alts.append(("u8ptr", newhead + newbody))
    # m2c's `p += 4` on an s32 *p counts bytes: divide by the element size
    SZ = {"s32": 4, "u32": 4, "int": 4, "f32": 4, "s16": 2, "u16": 2, "s64": 8, "u64": 8}
    ptrs = {m.group(2): SZ[m.group(1)] for m in re.finditer(r"\b(s32|u32|int|f32|s16|u16|s64|u64)\s*\*\s*(\w+)\s*[;,)]", src)}

    def fix(m):
        name_, op, num = m.group(1), m.group(2), m.group(3)
        n = int(num, 0)
        s = ptrs.get(name_)
        if not s or n % s:
            return m.group(0)
        return f"{name_} {op} {n // s};"
    st = re.sub(r"\b(\w+)\s*(\+=|-=)\s*(0x[0-9A-Fa-f]+|\d+);", fix, src)
    if st != src:
        alts.append(("stride", st))
    # m2c passes `sp` (the frame's first bytes) without declaring it: a stack buffer up to the next local
    fb = src.find("{", src.find(f"{name}("))
    if fb > 0 and re.search(r"\bsp\b", src[fb:]) and not re.search(r"\b\w+\s*\**\s*sp\s*[;\[=]", src[fb:]):
        offs = sorted(int(o, 16) for o in re.findall(r"\bsp([0-9A-F]+)\b", src[fb:]))
        sizes = {offs[0] if offs and offs[0] else 16, 16, 8}
        for n in sorted(sizes):
            alts.append((f"spbuf{n}", src[:fb + 1] + f"\n    u8 sp[{n}];" + src[fb + 1:]))
    for rule, s in alts:
        yield rule, s
    if len(alts) == 2:
        s = alts[0][1]
        k = s.rstrip().rfind("}")
        yield "volatile+nosib", s[:k] + '    __asm__ __volatile__("");\n' + s[k:]


def candidates(name, text):
    try:
        yield from variants(name, text)
    except SystemExit:
        m = re.search(r"^[^\n;{}]*\b(\w+)\s*\([^;{]*\)\s*\{", text, re.M)
        if m and m.group(1) != name:
            try:
                for rule, s in variants(name, re.sub(rf"\b{m.group(1)}\b", name, text)):
                    yield rule + "+rename", s
            except SystemExit:
                pass


def one(name, budget=24):
    import lib_try as LT
    drafts = list((ROOT / "drafts").glob(f"*/*/{name}.c")) + list((ROOT / "drafts").glob(f"*/{name}.c"))
    sources = []
    if drafts:
        text = re.sub(r"/\*.*?\*/", "", drafts[0].read_text(), flags=re.S)
        sources.append(("draft", re.sub(r"//[^\n]*", "", text)))
    best, n, seen = None, 0, set()

    def attempts():
        for sname, text in sources:
            for rule, src in candidates(name, text):
                for trule, s in transforms(name, src):
                    yield sname, "+".join(x for x in (rule, trule) if x), s
        for sname, text in redrafts(name):
            for rule, src in candidates(name, text):
                for trule, s in transforms(name, src):
                    yield sname, "+".join(x for x in (rule, trule) if x), s

    try:
        for sname, rule, src in attempts():
            if src in seen:
                continue
            seen.add(src)
            n += 1
            if n > budget:
                break
            buf = io.StringIO()
            try:
                with contextlib.redirect_stdout(buf):
                    ok, _ = LT.try_snippet(name, src, quiet=True)
            except SystemExit as e:
                ok = False
                buf.write(str(e))
            out = buf.getvalue()
            if ok:
                return name, src, f"MATCH {sname}:{rule or 'asis'}"
            m = re.search(r"DIFF: (\d+)", out)
            score = int(m.group(1)) if m else 1 << 20 if "SIZE" in out else 1 << 30
            if best is None or score < best[0]:
                best = (score, f"{sname}:{rule or 'asis'}", out.strip().splitlines()[0][:80] if out.strip() else "?")
                miss = ROOT / "build" / "lh" / "miss"
                miss.mkdir(parents=True, exist_ok=True)
                (miss / f"{name}.c").write_text(src)
    except Exception as e:  # noqa: BLE001
        return name, None, f"error: {type(e).__name__} {e}"[:120]
    if best is None:
        return name, None, "no candidate"
    return name, None, f"miss best={best[1]} {best[2]}"


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("queue")
    ap.add_argument("--jobs", type=int, default=8)
    ap.add_argument("--out", default="build/lh/auto")
    ap.add_argument("--log", default="build/lh/auto.log")
    a = ap.parse_args()
    names = [l.strip() for l in open(a.queue) if l.strip()]
    out = ROOT / a.out
    out.mkdir(parents=True, exist_ok=True)
    n = 0
    with ProcessPoolExecutor(a.jobs) as pool, open(ROOT / a.log, "a") as log:
        for name, src, msg in pool.map(one, names):
            if src:
                (out / f"{name}.c").write_text(src)
                n += 1
            log.write(f"{name} {msg}\n")
            log.flush()
    print(f"{n} of {len(names)} matched; sources in {a.out}, log {a.log}")


if __name__ == "__main__":
    main()
