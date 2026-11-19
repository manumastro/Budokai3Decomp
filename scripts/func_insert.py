#!/usr/bin/env python3
"""Puts single C functions in place of their INCLUDE_ASM lines, each with its own isolated declarations.

    func_insert.py ITEMS.json [--only-status match] [--jobs 12] [--log FILE] [--out FILE]

ITEMS.json: a list of {addr, name, decls: [C declarations], func: "function text"} (lib_m2c.py draft output, or
func_port.py output; an optional "bind" maps a declared name to the symbol it must resolve to). Every file-scope
identifier that the declarations declare (and the function's own name) is renamed with a suffix only that function
uses, and objects/functions are bound back to their real symbol with an asm label:

    extern s32 D_0012AB00_x0015A2C0[] __asm__("D_0012AB00");

so a draft compiled alone compiles the same inside any file, whatever that file already declares (no "previous
declaration", "conflicting types", "too many arguments"). A segment still in assembly is turned into a C file of
INCLUDE_ASM lines first (asm2c.py). Each insertion is kept only when gccdiff.py says the function matches in its
file; the whole build (configure.py && ninja, CHECK) must still be run after, as for any change of the libraries."""
import argparse
import os
import threading
import json
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
import lib_remaining as LR  # noqa: E402

KEYWORDS = set("""auto break case char const continue default do double else enum extern float for goto if int long
register return short signed sizeof static struct switch typedef union unsigned void volatile while asm __asm__
__attribute__ inline __inline__""".split())


def strip_comments(d):
    return re.sub(r"//[^\n]*", " ", re.sub(r"/\*.*?\*/", " ", d, flags=re.S)).strip()


def split_top(s, sep=","):
    depth, cur, parts = 0, "", []
    for ch in s:
        if ch in "([{":
            depth += 1
        elif ch in ")]}":
            depth -= 1
        if ch == sep and depth == 0:
            parts.append(cur)
            cur = ""
        else:
            cur += ch
    parts.append(cur)
    return parts


def declarator_name(p):
    p = re.sub(r"__asm__\s*\(.*?\)", "", p.split("=")[0])
    p = re.sub(r"__attribute__\s*\(\(.*?\)\)", "", p)
    k = p.find("(")
    if k >= 0:
        # the first bracket decides: `name(` is a function, `(*name)` a pointer to function or array
        m = re.match(r"\(\s*\*+\s*(?:const\s+|volatile\s+)*(\w+)", p[k:])
        if m:
            return m.group(1)
        m = re.search(r"(\w+)\s*$", p[:k])
        if m and m.group(1) not in KEYWORDS:
            return m.group(1)
    ids = [i for i in re.findall(r"[A-Za-z_]\w*", re.sub(r"\[.*?\]", "", p)) if i not in KEYWORDS]
    return ids[-1] if ids else None


def decl_names(d):
    """File-scope names a declaration declares: objects, functions, typedef names, tags, enum constants."""
    d = strip_comments(d)
    names = []
    m = re.match(r"^(?:typedef\s+)?(?:const\s+)?(struct|union|enum)\s+(\w+)\s*\{", d)
    if m:
        names.append(m.group(2))
    if re.match(r"^(?:typedef\s+)?enum\b", d) and "{" in d:
        body = d[d.index("{") + 1:d.rindex("}")]
        names += [p.split("=")[0].strip() for p in split_top(body) if p.strip()]
    if "{" in d:
        tail = d[d.rindex("}") + 1:]
        if not d.startswith("typedef") and not tail.strip(" ;"):
            return names
    else:
        tail = d
        if re.match(r"^(struct|union|enum)\s+\w+\s*;$", d):
            return [d.split()[1].rstrip(";")]
    if "{" not in d:
        # drop the type specifiers: the declarators follow the last specifier word
        pass
    tail = tail.rstrip().rstrip(";")
    parts = split_top(tail)
    if "{" not in d:
        # first part carries the type; the declarator is still its last name
        pass
    for p in parts:
        n = declarator_name(p)
        if n:
            names.append(n)
    return [n for n in dict.fromkeys(names) if n]


def is_type_decl(st):
    st = st.strip()
    if st.startswith("typedef") or re.match(r"^(struct|union|enum)\s+\w+\s*;$", st):
        return True
    return bool(re.match(r"^(?:const\s+|volatile\s+)*(struct|union|enum)\s*\w*\s*\{", st)) and "}" in st \
        and st[st.rindex("}") + 1:].strip() == ";"


def is_func_def(st):
    st = st.rstrip()
    return st.endswith("}") and "(" in st[:st.find("{")] if "{" in st else False


def take_attributes(p):
    """(p without its __attribute__((...)) groups, [the groups]) with balanced parentheses."""
    attrs = []
    while True:
        m = re.search(r"\s*__attribute__\s*\(", p)
        if not m:
            return p, attrs
        depth, j = 0, m.end() - 1
        while j < len(p):
            depth += p[j] == "("
            depth -= p[j] == ")"
            j += 1
            if depth == 0:
                break
        attrs.append(" " + p[m.start():j].strip())
        p = p[:m.start()] + p[j:]


def isolate(item, pad=0):
    """The text that replaces the INCLUDE_ASM line: renamed declarations, then the renamed function."""
    tag = f"_x{item['addr']:08X}" + "_" * pad  # pad: see apply()
    name = item["name"]
    bind = item.get("bind", {})
    decls = [strip_comments(d) for d in item["decls"] if strip_comments(d)]
    stubs = [d[len("B3STUB:"):] for d in decls if d.startswith("B3STUB:")]
    decls = [d for d in decls if not d.startswith("B3STUB:")]
    # B3LOCAL: a static object of the function's own (func_port.py): renamed, defined here, never bound
    local = {k for k, d in enumerate(decls) if d.startswith("B3LOCAL:")}
    decls = [d[len("B3LOCAL:"):] if k in local else d for k, d in enumerate(decls)]
    ren, labels = {}, {}
    for k, st in enumerate(decls):
        for n in decl_names(st):
            ren[n] = n + tag
            if not is_type_decl(st) and not is_func_def(st) and k not in local:
                labels[n] = bind.get(n, n)
        if is_func_def(st):
            # a static inline helper copied whole (func_port.py): renamed, never bound to a symbol
            m = re.search(r"(\w+)\s*\([^()]*\)\s*$", st[:st.index("{")])
            if m:
                ren[m.group(1)] = m.group(1) + tag
    ren[name] = name + tag
    pat = re.compile(r"\b(" + "|".join(sorted(map(re.escape, ren), key=len, reverse=True)) + r")\b")
    out = []
    for st in decls:
        new = pat.sub(lambda m: ren[m.group(1)], st)
        ns = [n for n in decl_names(st) if n in labels]
        if ns and new.endswith(";") and not is_type_decl(st) and not is_func_def(st):
            new = re.sub(r"^static\s+", "", new)
            parts = split_top(new.rstrip(";"))
            if len(parts) > 1:
                # one declarator per declaration, each with its label: repeat the base type of the first one
                first = parts[0]
                nm = ns[0] + tag
                base = first[:first.index(nm)] if nm in first else ""
                base = re.sub(r"[*\s(]+$", "", base) + " "
                parts = [first] + [base + p.strip() for p in parts[1:]]
            fixed = []
            for p, n in zip(parts, ns):
                p = p.strip()
                eq = p.find("=")
                if eq >= 0 and p.find("{") < 0 or (eq >= 0 and eq < p.find("{")):
                    p = p[:eq].rstrip()
                # gcc wants the asm label before any attribute of the declarator
                p, attrs = take_attributes(p)
                d = f'{p} __asm__("{labels[n]}"){"".join(attrs)};'
                if not d.startswith("extern ") and not re.search(r"\b" + re.escape(n + tag) + r"\s*\(", d):
                    d = "extern " + d
                fixed.append(d)
            new = "\n".join(fixed)
        out.append(new)
    for st in stubs:
        # the origin defines this callee before the function (func_port.py): an empty weak definition in .b3stub,
        # a section the link drops, so ee-gcc compiles the calls as it did there; the real one is linked
        st = pat.sub(lambda m: ren[m.group(1)], st).rstrip(";").strip()
        if re.search(r"\(\s*\)\s*$", st):
            continue  # an old-style head: nothing to define the same way
        out.append(f'{st} __attribute__((weak, section(".b3stub")));\n{st} {{}}')
    func = pat.sub(lambda m: ren[m.group(1)], item["func"].rstrip("\n"))
    head = strip_comments(func[:func.index("{")])
    head = re.sub(r"^static\s+", "", head)
    func = re.sub(r"^((?:/\*.*?\*/\s*)*)static\s+", r"\1", func, flags=re.S)
    out.append(f'{head} __asm__("{name}");')
    tail = ""
    if item.get("rebind"):
        # its jump tables / static data / constants are the executable's (scripts/gcc_rebind.py)
        tail = f'\n__asm__("# rebind {name} 0x{item["addr"]:08X}");'
    return "\n".join(out) + "\n" + func + tail


_KNOWN = None
PADS = int(os.environ.get("B3_PADS", "32"))  # apply(): renaming-suffix lengths tried
_CACHE = {}


def _cached(key, fn):
    if key not in _CACHE:
        _CACHE[key] = fn()
    return _CACHE[key]


def known_symbols():
    """Names the link can resolve: the last build's ELF symbols, config/port_syms.ld and build/c_labels.ld."""
    global _KNOWN
    if _KNOWN is None:
        from elftools.elf.elffile import ELFFile
        names = set()
        with open(ROOT / "build" / "SLUS_209.98.elf", "rb") as f:
            for s in ELFFile(f).get_section_by_name(".symtab").iter_symbols():
                if s.name and s["st_shndx"] != "SHN_UNDEF":
                    names.add(s.name)
        for p in (ROOT / "config" / "port_syms.ld", ROOT / "build" / "c_labels.ld",
                  ROOT / "build" / "undefined_syms_auto.txt", ROOT / "build" / "undefined_funcs_auto.txt"):
            if p.exists():
                names |= set(re.findall(r"^\s*(\w+)\s*=", p.read_text(), re.M))
        _KNOWN = names
    return _KNOWN


def check(rel, name):
    """(ok, message): the function compiles in its file to the original's words, size included, and every symbol
    the object needs from outside is one the link knows."""
    import shutil
    import gccmatch
    sys.path.insert(0, str(ROOT))
    import configure
    from elftools.elf.elffile import ELFFile
    version, flags = configure.gcc_group(rel)
    objs, work = gccmatch.compile_matrix(ROOT / rel, [version], [flags], "gas", defines=["NO_INCLUDE_ASM"],
                                         include_dirs=("include", "src", *configure.gcc_extra_includes(rel)
                                                       .replace("-I", "").split()),
                                         keep=f"build/gccmatch/fi_{os.getpid()}_{threading.get_ident()}")
    obj = objs[(version, flags)]
    try:
        if not isinstance(obj, Path):
            return False, str(obj)[-200:]
        fns = gccmatch.objects_functions(obj)
        if name not in fns:
            return False, "not compiled"
        words, masks = fns[name]
        m = re.fullmatch(r"func_([0-9A-F]{8})", name)
        addr = int(m.group(1), 16) if m else _cached("syms", gccmatch.symbol_addresses).get(name)
        diffs, _ = gccmatch.compare(words, masks, addr, _cached("rom", gccmatch.ROM.read_bytes))
        size = _cached("sizes", gccmatch.function_sizes).get(addr)
        if diffs or (size is not None and size != 4 * len(words)):
            return False, f"{len(diffs)} differ, size {4 * len(words):#x}/{size:#x}" if size else "differs"
        with open(obj, "rb") as f:
            und = {s.name for s in ELFFile(f).get_section_by_name(".symtab").iter_symbols()
                   if s.name and s["st_shndx"] == "SHN_UNDEF"}
        bad = sorted(n for n in und - known_symbols() if not n.startswith(".") and n != "_gp")
        if bad:
            return False, "undefined: " + " ".join(bad[:5])
        with open(obj, "rb") as f:
            # the libraries' data is all in the data segments: data an object keeps would shift the link
            data = [f"{s.name} {s['sh_size']:#x}" for s in ELFFile(f).iter_sections()
                    if s.name in (".rodata", ".data", ".bss", ".sdata", ".sbss", ".lit4", ".lit8") and s["sh_size"]]
        if data:
            return False, "the object keeps data: " + ", ".join(data)
        return True, "OK"
    finally:
        shutil.rmtree(work, ignore_errors=True)


def tail_pad(seg, name):
    """The INCLUDE_PAD line a C function needs when its assembly file ends with more alignment words than gcc's own
    8-byte alignment of the next function would give (e.g. a 64-byte aligned exception handler follows it)."""
    p = ROOT / "asm" / "nonmatchings" / seg / f"{name}.s"
    if not p.exists():
        return ""
    t = p.read_text()
    m = re.search(r"^nonmatching \S+, 0x([0-9A-Fa-f]+)", t, re.M)
    if not m:
        return ""
    size = int(m.group(1), 16)
    total = 4 * len(re.findall(r"/\* [0-9A-F]+ [0-9A-F]{8} [0-9A-F]{8} \*/", t))
    if total <= (size + 7) // 8 * 8:
        return ""
    return f"\nINCLUDE_PAD({total - size});"


def apply(items, jobs=12, log=None, dry=False, real=False):
    rem = {r[0]: r for r in LR.remaining(True)}
    byseg = {}
    for it in items:
        r = rem.get(it["addr"])
        if r is None or r[1] != it["name"]:
            continue
        byseg.setdefault((r[2], r[3]), []).append(it)
    # an asm segment with data labels in its code (words splat could not read as instructions) cannot be turned
    # into a C file of INCLUDE_ASM lines: asm2c.py would drop those words
    for (seg, kind) in list(byseg):
        if kind != "asm":
            continue
        txt = (ROOT / "asm" / f"{seg}.s").read_text()
        # INCLUDE_ASM aligns every function to 8 (.align 3): a function at an address that is not a multiple of 8
        # would move
        starts = [int(m.group(1), 16) for m in re.finditer(r"^[gj]label \S+\n\s+/\* \w+ ([0-9A-F]{8}) ", txt, re.M)]
        if re.search(r"^dlabel ", txt, re.M) or any(s % 8 for s in starts):
            del byseg[(seg, kind)]
    conv = [seg for (seg, kind) in byseg if kind == "asm"]
    for seg in conv:
        subprocess.run([sys.executable, "scripts/asm2c.py", seg], cwd=ROOT, check=True, capture_output=True)
    if conv:
        subprocess.run([sys.executable, "configure.py"], cwd=ROOT, capture_output=True)
        for seg in conv:
            subprocess.run([sys.executable, "scripts/asm2c.py", "--fix-pad", seg], cwd=ROOT, check=True)
    segs = {}
    for (seg, kind), lst in byseg.items():
        segs.setdefault(seg, []).extend(lst)

    def one(seg):
        rel = f"src/{seg}.c"
        path = ROOT / rel
        text = path.read_text()
        ok, msgs = [], []
        for it in sorted(segs[seg], key=lambda i: i["addr"]):
            pat = re.compile(r'^INCLUDE_ASM\("[^"]+", ' + re.escape(it["name"]) + r'\);[ \t]*$', re.M)
            if not pat.search(text):
                continue
            # pad 0, then longer renaming suffixes: ee-gcc 2.96's CSE hashes symbols by the address of their
            # name, so the length of the names allocated before a function can change its code (or another
            # function's, later in the file); a few lengths are tried when the words differ
            for pad in range(0, PADS + 1):
                rep = isolate(it, pad) + tail_pad(seg, it["name"])
                new = pat.sub(lambda _: rep, text, count=1)  # a function replacement is taken literally
                path.write_text(new)
                good, msg = check(rel, it["name"])
                if good and real:
                    # the build compiles the file with its INCLUDE_ASM blocks in: gcc can then compile another
                    # function of the file differently (scripts/lib_filecheck.py)
                    import lib_filecheck
                    bad = lib_filecheck.check(rel)
                    if bad:
                        good, msg = False, "build-mode compile: " + "; ".join(bad)[:160]
                if good or not re.search(r"differ", msg):
                    break
            if good:
                text = new
                ok.append(it)
            else:
                path.write_text(text)
                msgs.append(f"  {seg}: {it['name']} refused: {msg}")
        return seg, ok, msgs

    done = []
    with ThreadPoolExecutor(jobs) as pool:
        for seg, ok, msgs in pool.map(one, list(segs)):
            done += ok
            line = f"src/{seg}.c: {len(ok)} of {len(segs[seg])}"
            print(line, flush=True)
            if log:
                with open(log, "a") as f:
                    f.write(line + "\n" + "".join(m + "\n" for m in msgs))
    # a segment turned into C for nothing goes back to assembly
    got = {}
    for it in done:
        got[rem[it["addr"]][2]] = True
    y = ROOT / "config" / "SLUS_209.98.yaml"
    for seg in conv:
        if not got.get(seg):
            (ROOT / "src" / f"{seg}.c").unlink()
            y.write_text(y.read_text().replace(f", c, {seg}]", f", asm, {seg}]"))
    print(f"{len(done)} functions applied")
    return done


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("items")
    ap.add_argument("--only-status", default="match")
    ap.add_argument("--jobs", type=int, default=12)
    ap.add_argument("--log")
    ap.add_argument("--out", help="json of the applied items")
    ap.add_argument("--real", action="store_true", help="also check the whole file compiled as the build does")
    a = ap.parse_args()
    items = json.loads(Path(a.items).read_text())
    if a.only_status:
        items = [i for i in items if i.get("status", "match") == a.only_status]
    done = apply(items, a.jobs, a.log, real=a.real)
    if a.out:
        Path(a.out).write_text(json.dumps([{"addr": d["addr"], "name": d["name"]} for d in done]))


if __name__ == "__main__":
    main()
