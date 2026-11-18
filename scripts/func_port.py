#!/usr/bin/env python3
"""Function-level port of library code from other decompilations: one function at a time, into our C files.

    func_port.py --repo fz [--scan ~/psvita/b3-scan/fz] [--min 6] [--jobs 8] --out build/port/fz.json
    func_port.py ... --apply              (then: configure.py && ninja; CHECK)

For every function a scan (scan_repo.sh + lib_scan.py output) found in our executable that is still INCLUDE_ASM (or in
an asm segment), the source file is compiled with the ee-gcc build of the function's library group (configure.py
GCC_GROUPS), paired with the executable (scripts/libport.py: address by address, relocations bound to the
executable's symbols) and preprocessed. The function's text plus the declarations it needs (the closure of the
typedefs, tags, enum constants, prototypes and extern objects it names, from the preprocessed source) become one
item for scripts/func_insert.py, which renames all of them for that function only and binds each object and
function to the executable's symbol with an asm label, so no header is copied and nothing clashes with the file.
String literals become externs of the executable's own strings. A provenance comment (repository, file, licence)
heads every inserted function.

Symbols the executable has at a bound address but our build does not define yet are written to
config/port_syms.ld (`D_XXXXXXXX = 0xXXXXXXXX;`), which configure.py passes to the linker."""
import argparse
import json
import os
import re
import shutil
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.insert(0, str(ROOT))
import cparse  # noqa: E402
import gccmatch as g  # noqa: E402
import libport as lp  # noqa: E402
import lib_remaining as LR  # noqa: E402
g.eegcc  # the compiler wrapper gccmatch loads
eegcc = g.eegcc

SCAN = Path.home() / "psvita" / "b3-scan"
LICENSES = {
    "fz": ("https://github.com/karamzov123/fzero-gx-decomp", "CC0-1.0"),
    "ico": ("https://github.com/nathanialf/ico-pc", "MIT"),
    "kfiv": ("https://github.com/Voicedrew11/kfiv-decomp", "MIT"),
    "mk": ("https://github.com/ShulkMaster/mk-deception", "CC0-1.0"),
    "newlib": ("newlib 1.10.0 (sourceware.org)", "BSD-style, notices in LICENSES/THIRD_PARTY.md"),
    "rg": ("https://github.com/Dorgengoa/RGDecomp", "CC0-1.0"),
    "recvx": ("https://github.com/AshfordFamily/recvx-decomp", "MIT"),
    "s3": ("https://github.com/crowded-street/3s-decomp", "AGPL-3.0"),
}
DATA_SECS = (".data", ".rodata", ".bss", ".sdata", ".sbss", ".lit4", ".lit8")
PORT_LD = ROOT / "config" / "port_syms.ld"


def scan_hits(repo, min_words):
    """{file: {func: addr}} of the scan's unique hits."""
    d = SCAN / repo
    files = (d / "files.txt").read_text().split()
    fmap = {f.replace("/", "_"): f for f in files}
    out = {}
    for p in sorted(d.glob("2.*.txt")):
        b = p.name[:-4]
        v = b.split("_")[0]
        f = fmap.get(b[len(v) + 1:])
        if f is None:
            continue
        for line in p.read_text(errors="replace").splitlines():
            m = re.match(r"(\S+):(\S+)\s+(\d+)w\s+(0x[0-9a-f]+)$", line.strip())
            if m and int(m.group(3)) >= min_words:
                out.setdefault(f, {})[m.group(2)] = int(m.group(4), 16)
    return out


def elf_symbols():
    """{address: [names]} of the global symbols of the last build's ELF."""
    from elftools.elf.elffile import ELFFile
    out = {}
    with open(ROOT / "build" / "SLUS_209.98.elf", "rb") as f:
        for s in ELFFile(f).get_section_by_name(".symtab").iter_symbols():
            if s.name and s["st_info"]["bind"] == "STB_GLOBAL" and s["st_shndx"] != "SHN_UNDEF":
                out.setdefault(s["st_value"], []).append(s.name)
    return out


def identifiers(text):
    text = re.sub(r'"(\\.|[^"\\])*"', '""', text)
    text = re.sub(r"'(\\.|[^'\\])*'", "0", text)
    return set(re.findall(r"[A-Za-z_]\w*", text))


def closure(items, func_item, own):
    """The declarations (in source order) the function needs, functions as prototypes, data as extern."""
    import func_insert as FI
    by_name = {}
    for k, it in enumerate(items):
        if it.kind == "pp" or it.kind == "asmblob":
            continue
        if it.kind == "func":
            names = [it.name]
        elif it.kind == "data":
            names = [it.name] + FI.decl_names(it.text)
        else:
            names = FI.decl_names(it.text)
        for n in names:
            by_name.setdefault(n, []).append(k)
    need = set()
    seen = set()
    todo = list(identifiers(func_item.text) - {own})
    while todo:
        n = todo.pop()
        if n in seen:
            continue
        seen.add(n)
        for k in by_name.get(n, []):
            if k in need or items[k] is func_item:
                continue
            need.add(k)
            it = items[k]
            if it.kind == "func":
                txt = it.head
            elif it.kind == "data":
                txt = it.head
            else:
                txt = it.text
            todo += list(identifiers(txt) - seen - {own})
    out = []
    for k in sorted(need):
        it = items[k]
        if it.kind == "func":
            if re.search(r"\binline\b|__inline", it.head):
                return None, f"needs the inline function {it.name}"
            h = re.sub(r"\b(static|extern)\b\s*", "", cparse.strip_attr(it.head)).strip()
            out.append(("func", it.name, h + ";"))
        elif it.kind == "data":
            h = re.sub(r"\b(static|extern|const)\b\s*", lambda m: "const " if m.group(1) == "const" else "",
                       cparse.strip_attr(it.head)).strip()
            out.append(("data", it.name, "extern " + h + ";"))
        else:
            t = cparse._strip_comments(it.text).strip()
            if re.match(r"^extern\b", t) or "(" in t or t.startswith(("typedef", "struct", "union", "enum")):
                out.append(("decl", None, " ".join(t.split()) if not t.startswith(("typedef", "struct", "union", "enum"))
                            else t))
            else:
                out.append(("decl", None, "extern " + t))
    return out, None


class Unit:
    """One external source file compiled with our group's compiler, paired with the executable."""

    def __init__(self, repo, src, version, flags, exe):
        self.repo, self.src, self.version, self.flags, self.exe = repo, src, version, flags, exe
        inc = (SCAN / repo / "inc.txt").read_text().replace("-I", "").split()
        self.inc = ["include", str(Path(src).parent), *inc]
        keep = f"build/port/w/{repo}_{abs(hash(src)) % 10**10}_{version}"
        objs, self.work = g.compile_matrix(ROOT / src, [version], [flags], "gas", [], include_dirs=self.inc, keep=keep)
        obj = objs[(version, flags)]
        self.err = None if isinstance(obj, Path) else str(obj)
        if self.err:
            return
        self.ob = lp.Obj(obj)
        self.an = lp.Analysis(self.ob, exe)
        self.addr = self.an.resolve()
        _, self.status = self.an.bind(self.addr)
        pre = Path(self.work) / "pre.c"
        rc, txt = eegcc.run_many([(version, [*flags.split(), *[f"-I{ROOT / d}" for d in self.inc], "-E", "-P",
                                            str(ROOT / src), "-o", str(pre)])], cwd=ROOT)[0]
        if rc != 0 or not pre.exists():
            self.err = "preprocess: " + txt[-200:]
            return
        self.pre = pre.read_text(errors="replace")
        self.items = cparse.split_items(self.pre)
        self.rodata = {s: lp.section_bytes(self.ob.path, s) for s in (".rodata", ".data", ".rodata.str1.4")}


def make_item(u, ext_name, addr, our_name, syms, new_syms):
    """The func_insert.py item for one function, or (None, reason)."""
    if u.status.get(ext_name) is not None:
        return None, f"bind: {u.status[ext_name]}"
    if u.addr.get(ext_name) != addr:
        return None, "address not resolved"
    fi = next((it for it in u.items if it.kind == "func" and it.name == ext_name), None)
    if fi is None:
        return None, "no function text"
    decls, why = closure(u.items, fi, ext_name)
    if decls is None:
        return None, why
    bind_all, _ = u.an.bind({ext_name: addr})

    def label(a, kind):
        names = [n for n in syms.get(a, []) if not n.startswith(".")]
        if names:
            pref = [n for n in names if re.fullmatch(r"(func|D)_[0-9A-F]{8}", n)]
            return (pref or names)[0]
        n = new_syms.get(a) or (f"func_{a:08X}" if kind == "func" else f"D_{a:08X}")
        new_syms[a] = n
        return n

    bind = {}
    lits = {}
    for key, a in bind_all.items():
        if key[0] in ("sym", "func"):
            bind[key[1]] = label(a, "func" if a in u.exe.sizes else "data")
        elif key[0] == "data":
            bind[key[1]] = label(a, "data")
        elif key[0] == "lit":
            d = lp.section_bytes(u.ob.path, key[1])
            end = d.find(b"\0", key[2])
            lits[d[key[2]:end]] = label(a, "data")
    func = fi.text
    if re.search(r"\b(static|const)\b[^;{}()]*=", func[func.index("{"):]):
        return None, "local static or const data"
    extra = []
    k = 0
    for s, e, tok in reversed(cparse.string_tokens(func)):
        v = cparse.c_string_value(tok)
        if v is None or v not in lits:
            return None, "a string that is not the executable's"
        nm = f"ext_str{k}"
        k += 1
        func = func[:s] + nm + func[e:]
        extra.append(f"extern char {nm}[];")
        bind[nm] = lits[v]
    # drop declarations of names bound to nothing that the function does not use as types: fine to keep them
    dl = [t for kind, n, t in decls if n != ext_name]
    func = re.sub(r"\b" + re.escape(ext_name) + r"\b", our_name, func)
    dl = [re.sub(r"\b" + re.escape(ext_name) + r"\b", our_name, t) for t in dl]
    dl = [t for t in dl if not re.search(r"\b" + re.escape(our_name) + r"\s*\(", t)]
    if our_name != ext_name:
        bind.pop(ext_name, None)
    url, lic = LICENSES.get(u.repo, ("", ""))
    origin = u.src.split(f"build/ext/{u.repo}/", 1)[-1]
    head = f"/* {ext_name}: from {url} ({origin}, {lic}); ee-gcc {u.version} {u.flags} */\n"
    notice = re.match(r"\s*(/\*.*?\*/)", (ROOT / u.src).read_text(errors="replace"), re.S)
    if notice and re.search(r"copyright|permission|licen[cs]e", notice.group(1), re.I):
        head = notice.group(1) + "\n" + head  # the source's own notice goes with the function
    return dict(addr=addr, name=our_name, decls=dl + extra, func=func, note=head, bind=bind, repo=u.repo, src=origin, ext_name=ext_name, status="match"), None


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--repo", required=True)
    ap.add_argument("--min", type=int, default=6)
    ap.add_argument("--jobs", type=int, default=8)
    ap.add_argument("--out", required=True)
    ap.add_argument("--apply", action="store_true")
    a = ap.parse_args()
    import configure
    exe = lp.Exe()
    syms = elf_symbols()
    rem = {r[0]: r for r in LR.remaining(True)}
    hits = scan_hits(a.repo, a.min)
    work = []
    for f, fns in hits.items():
        want = {n: ad for n, ad in fns.items() if ad in rem}
        if not want:
            continue
        seg = rem[next(iter(want.values()))][2]
        version, flags = configure.gcc_group(f"src/{seg}.c")
        work.append((f, version, flags, want))
    new_syms = {}
    results = []

    def job(w):
        f, version, flags, want = w
        try:
            u = Unit(a.repo, f, version, flags, exe)
        except Exception as e:  # noqa: BLE001
            return [dict(addr=ad, name=rem[ad][1], status="error", detail=repr(e)[:200]) for ad in want.values()]
        out = []
        if u.err:
            out = [dict(addr=ad, name=rem[ad][1], status="cerr", detail=u.err[-200:]) for ad in want.values()]
        else:
            for n, ad in want.items():
                it, why = make_item(u, n, ad, rem[ad][1], syms, new_syms)
                out.append(it if it else dict(addr=ad, name=rem[ad][1], ext_name=n, src=f, status="skip", detail=why))
        shutil.rmtree(u.work, ignore_errors=True)
        return out

    with ThreadPoolExecutor(a.jobs) as pool:
        for r in pool.map(job, work):
            results += r
    # one item per address: the first match
    seen = {}
    for r in results:
        if r["addr"] not in seen or (seen[r["addr"]]["status"] != "match" and r["status"] == "match"):
            seen[r["addr"]] = r
    results = sorted(seen.values(), key=lambda r: r["addr"])
    from collections import Counter
    print(a.repo, dict(Counter(r["status"] for r in results)))
    Path(a.out).parent.mkdir(parents=True, exist_ok=True)
    Path(a.out).write_text(json.dumps(dict(items=results, new_syms={f"{k:08X}": v for k, v in new_syms.items()}),
                                      indent=0))
    if a.apply:
        apply_items([r for r in results if r["status"] == "match"], new_syms, a.jobs, f"{a.out}.log")


def apply_items(items, new_syms, jobs, log):
    import func_insert as FI
    lines = PORT_LD.read_text().splitlines() if PORT_LD.exists() else [
        "/* Symbols that functions taken from other decompilations refer to (scripts/func_port.py). */"]
    have = set(lines)
    used = set()
    for it in items:
        used |= set(it["bind"].values())
    for a, n in sorted(new_syms.items()):
        a = int(a, 16) if isinstance(a, str) else a
        ln = f"{n} = 0x{a:08X};"
        if n in used and ln not in have:
            lines.append(ln)
            have.add(ln)
    PORT_LD.write_text("\n".join(lines) + "\n")
    for it in items:
        it["func"] = it["note"] + it["func"]
    return FI.apply(items, jobs, log)


if __name__ == "__main__":
    main()
