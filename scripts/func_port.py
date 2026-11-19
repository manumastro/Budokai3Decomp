#!/usr/bin/env python3
"""Function-level port of library code from other decompilations: one function at a time, into our C files.

    func_port.py --repo fz [--scan ~/b3-scan/fz] [--min 6] [--jobs 8] --out build/port/fz.json
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

SCAN = Path(os.environ.get("B3_SCAN", Path.home() / "b3-scan"))  # scan_repo.sh output folders
LICENSES = {
    "fz": ("https://github.com/karamzov123/fzero-gx-decomp", "CC0-1.0"),
    "ico": ("https://github.com/nathanialf/ico-pc", "MIT"),
    "kfiv": ("https://github.com/Voicedrew11/kfiv-decomp", "MIT"),
    "mk": ("https://github.com/ShulkMaster/mk-deception", "CC0-1.0"),
    "newlib": ("newlib 1.10.0 (sourceware.org)", "BSD-style, notices in LICENSES/THIRD_PARTY.md"),
    "rg": ("https://github.com/Dorgengoa/RGDecomp", "CC0-1.0"),
    "recvx": ("https://github.com/AshfordFamily/recvx-decomp", "MIT"),
    "gh": ("https://github.com/LucasPicoli/god-hand-decomp", "MIT"),
    "rez": ("https://github.com/new-coke/rez-decomp", "MIT"),
    "sotc": ("https://github.com/TheRealestNwah/sotc-decomp", "CC0-1.0"),
    "cwoc": ("https://github.com/denzi-gh/crashwoc-decomp-ps2", "GPL-3.0"),
    "lomb": ("https://github.com/lombyte-project/Lombyte", "GPL-3.0"),
    "rac1": ("https://github.com/OpenRAC/rac1-decomp", "GPL-3.0"),
    "rac2": ("https://github.com/OpenRAC/rac2-decomp", "GPL-3.0"),
    "s3": ("https://github.com/crowded-street/3s-decomp", "AGPL-3.0-only"),
    "BT2-Recomp": ("https://github.com/RexxColder/BT2-Recomp", "CC0-1.0"),
    "shadow-decomp": ("https://github.com/dev-camo/shadow-decomp", "no licence stated by the repository"),
    "sonic-adventure": ("https://github.com/reshaped/sonic-adventure", "no licence stated by the repository"),
    "p4cri": ("https://github.com/Raikaru/Persona4-Decompilation", "no licence stated by the repository"),
    "pes6cri": ("https://github.com/Subarasheese/pes6decomp", "no licence stated for its own code"),
    "socom2-decomp": ("https://github.com/DabDavis/socom2-decomp", "no licence stated by the repository"),
    "recvx-decomp-ps2_sdk": ("https://github.com/ShizCalev/recvx-decomp-ps2_sdk", "no licence stated by the repository"),
    "HWVX-PS2-Decomp": ("https://github.com/Alaxend0l/HWVX-PS2-Decomp", "no licence stated by the repository"),
    "dds-decomp": ("https://github.com/Megami-Decomps/dds-decomp", "no licence stated by the repository"),
    "dds-decompb": ("https://github.com/Megami-Decomps/dds-decomp", "no licence stated by the repository"),
    "smt3-decomp": ("https://github.com/Megami-Decomps/smt3-decomp", "no licence stated by the repository"),
    "smt3-decompb": ("https://github.com/Megami-Decomps/smt3-decomp", "no licence stated by the repository"),
    "raidou-decomp": ("https://github.com/Megami-Decomps/raidou-decomp", "no licence stated by the repository"),
    "raidou-decompb": ("https://github.com/Megami-Decomps/raidou-decomp", "no licence stated by the repository"),
    "syphon-filter-omega-strain-decomp": ("https://github.com/zm2283145/syphon-filter-omega-strain-decomp", "no licence stated by the repository"),
    "syphon-filter-omega-strain-decompb": ("https://github.com/zm2283145/syphon-filter-omega-strain-decomp", "no licence stated by the repository"),
    "virtua-tennis-decomp": ("https://github.com/consolesplayingconsoles/virtua-tennis-decomp", "no licence stated by the repository"),
    "virtua-tennis-decompb": ("https://github.com/consolesplayingconsoles/virtua-tennis-decomp", "no licence stated by the repository"),
    "guilty-gear-x-plus": ("https://github.com/devin-thomas/guilty-gear-x-plus", "CC0-1.0"),
    "guilty-gear-x-plusb": ("https://github.com/devin-thomas/guilty-gear-x-plus", "CC0-1.0"),
    "dotr-decomp": ("https://github.com/kira-502/dotr-decomp", "CC0-1.0"),
    "Timesplitters": ("https://github.com/GTTeancum/Timesplitters", "no licence stated by the repository"),
    "DW4_Decomp": ("https://github.com/crashbashash/DW4_Decomp", "decompiled src/: no licence granted by the repository (its tools are CC0-1.0)"),
    "DW4b": ("https://github.com/crashbashash/DW4_Decomp", "decompiled src/: no licence granted by the repository (its tools are CC0-1.0)"),
    "re4": ("https://github.com/adonis-singh/re4", "licence file not recognised (NOASSERTION)"),
    "P3FES-Decompilation": ("https://github.com/C-GBL/P3FES-Decompilation", "no licence stated by the repository"),
    "sly2-decomp": ("https://github.com/Komasia/sly2-decomp", "no licence stated by the repository"),
    "re4dc": ("https://github.com/lamb2k/re4dc", "CC0-1.0"),
    "project-titan-magenta-edition": ("https://github.com/sobecapaklebs-dev/project-titan-magenta-edition", "MIT"),
    "recvx-pc": ("https://github.com/ViolentlyVia/recvx-pc", "MIT"),
    "EggGame": ("https://github.com/MedicineHatMan/EggGame", "MIT"),
    "wavelength": ("https://github.com/Tatsh/wavelength", "MIT"),
    "sonic-adventure-decomp": ("https://github.com/consolesplayingconsoles/sonic-adventure-decomp", "no licence stated by the repository"),
    "sly3-decomp": ("https://github.com/NaGaa95/sly3-decomp", "no licence stated by the repository"),
    "DragonRage360": ("https://github.com/Vtgamer998/DragonRage360", "AGPL-3.0"),
    "OpenFD": ("https://github.com/tahasoomra9/OpenFD", "GPL-3.0"),
    "champions-of-norrath": ("https://github.com/ensapra/champions-of-norrath", "licence file not recognised (NOASSERTION)"),
    "Precursor": ("https://github.com/thebardockgames/Precursor", "ISC"),
    "OpenRadical": ("https://github.com/RyanJGray/OpenRadical", "no licence stated by the repository"),
    "memory-of-alessa": ("https://github.com/dreamingmoths/memory-of-alessa", "MIT"),
    "RAC2Decomp": ("https://github.com/platypet2217-star/RAC2Decomp", "MIT"),
    "smt3-reconstructed-sources": ("https://github.com/smt-ret/smt3-reconstructed-sources", "no licence stated by the repository"),
    "mh1-xbox": ("https://github.com/itsbigcforme67/mh1-xbox", "licence file not recognised (NOASSERTION)"),
    "GotYaForce": ("https://github.com/abhidya/GotYaForce", "no licence stated by the repository"),
    "area51": ("https://github.com/ProjectDreamland/area51", "no licence stated by the repository"),
    "ratchet-project": ("https://github.com/ProjectRYNO/ratchet-project", "no licence stated by the repository"),
    "kelly-slaters-pro-surfer": ("https://github.com/historicalsource/kelly-slaters-pro-surfer", "no licence stated by the repository"),
    "mvc2-port-and-decomp": ("https://github.com/g-guthrie/mvc2-port-and-decomp", "no licence stated by the repository"),
    "kl2_lv": ("https://github.com/entriphy/kl2_lv", "no licence stated by the repository"),
    "pvz-ps2-wii": ("https://github.com/OptiJuegos/pvz-ps2-wii", "CC0-1.0"),
    "grandia_xtreme": ("https://github.com/gekoii/grandia_xtreme", "no licence stated by the repository"),
    "rac5-sm-decomp": ("https://github.com/OpenRAC/rac5-sm-decomp", "GPL-3.0"),
    "Kazarov": ("https://github.com/TheMoonPeople/Kazarov", "MIT"),
    "kh1": ("https://github.com/ethteck/kh1", "no licence stated by the repository"),
    "sonicheroes": ("https://github.com/Jovinull/sonicheroes", "MIT"),
    "OpenHuey": ("https://github.com/ArnautDaniel/OpenHuey", "GPL-3.0"),
    "ProjectStonehenge": ("https://github.com/Onaga00/ProjectStonehenge", "GPL-3.0"),
    "Kaido-Decomp-Racer": ("https://github.com/ShawnDarr96/Kaido-Decomp-Racer", "no licence stated by the repository"),
    "TekkenTagDecomp": ("https://github.com/adanft/TekkenTagDecomp", "AGPL-3.0"),
    "Gauntlet-Dark-Legacy-Decompilation": ("https://github.com/sabishii-bit/Gauntlet-Dark-Legacy-Decompilation", "no licence stated by the repository"),
    "jak1-decomp": ("https://github.com/water111/jak1-decomp", "no licence stated by the repository"),
    "MikuPan": ("https://github.com/Mikompilation/MikuPan", "AGPL-3.0"),
    "MioPan": ("https://github.com/Mikompilation/MioPan", "AGPL-3.0"),
    "recvx-enhanced-port": ("https://github.com/aikatore/recvx-enhanced-port", "MIT"),
    "crashwoc-nuworld": ("https://github.com/denzi-gh/crashwoc-nuworld", "GPL-3.0"),
    "re4-to-android": ("https://github.com/MDCIrony/re4-to-android", "licence file not recognised (NOASSERTION)"),
    "3s-decomp-ogxb": ("https://github.com/Manya3084/3s-decomp-ogxb", "MIT"),
    "recvx-gc-decomp": ("https://github.com/fmil95/recvx-gc-decomp", "CC0-1.0"),
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
    elf, ok = ROOT / "build" / "SLUS_209.98.elf", ROOT / "build" / "SLUS_209.98.ok"
    if not ok.exists() or ok.stat().st_mtime < elf.stat().st_mtime:
        sys.exit("the last build did not pass CHECK: its symbols cannot be trusted (build a matching tree first)")
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


def more_declarators(text):
    """The declarators after the first of a data definition (`T a = 1, *b = 0, c[2] = {..};`): [(name, declarator)]
    without their initializers; [] for a single one."""
    t = cparse._strip_comments(text).strip().rstrip(";")
    parts, depth, cur = [], 0, []
    i = 0
    while i < len(t):
        c = t[i]
        if c in "\"'":
            j = cparse._skip_string(t, i)
            cur.append(t[i:j])
            i = j
            continue
        if c in "({[":
            depth += 1
        elif c in ")}]":
            depth -= 1
        elif c == "," and depth == 0:
            parts.append("".join(cur))
            cur = []
            i += 1
            continue
        cur.append(c)
        i += 1
    parts.append("".join(cur))
    out = []
    for p in parts[1:]:
        d = p.split("=", 1)[0].strip()
        m = re.search(r"(\w+)(?:\s*\[[^\]]*\])*\s*$", d)
        if m:
            out.append((m.group(1), d))
    return out


def closure(items, func_item, own, local=()):
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
                # an inline helper is copied whole (func_insert.py renames it), so its body's names are needed too
                txt = it.text if re.search(r"\binline\b|__inline", it.head) else it.head
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
                t = cparse._strip_comments(it.text).strip()
                if not re.search(r"\bstatic\b", it.head):
                    # a plain (or extern) inline also emits an out-of-line copy: as static it only inlines
                    t = "static " + re.sub(r"^\s*extern\s+", "", t)
                out.append(("inline", it.name, t))
                continue
            h = re.sub(r"\b(static|extern)\b\s*", "", cparse.strip_attr(it.head)).strip()
            if cparse.kr_head(cparse._strip_comments(h)):
                # a K&R definition (`int f(a) T a;`): declared without a prototype, as its callers saw it
                h = re.sub(r"\(.*$", "()", cparse._strip_comments(h), flags=re.S).strip()
            out.append(("func", it.name, h + ";"))
            if k < items.index(func_item) and it.name in identifiers(func_item.text):
                # the origin compiles this callee before the function: ee-gcc 2.96 then marks the calls to it
                # (REG_EH_REGION 0), which changes the blocks and the delay slots it fills; an empty weak stub in
                # a section the link drops (.b3stub) gives the same context without code (func_insert.py)
                out.append(("stub", it.name, "B3STUB:" + h))
        elif it.kind == "data" and it.name in local:
            # an object the pairing found at two addresses: kept as the function's own static, each reference
            # then bound to the executable's address by gcc_rebind.py
            t = cparse._strip_comments(it.text).strip()
            t = t if re.match(r"^static\b", t) else "static " + re.sub(r"^\s*extern\s+", "", t)
            out.append(("local", it.name, "B3LOCAL:" + t))
        elif it.kind == "data":
            h = re.sub(r"\b(static|extern|const)\b\s*", lambda m: "const " if m.group(1) == "const" else "",
                       cparse.strip_attr(it.head)).strip()
            more = more_declarators(it.text)
            if more:
                # `static const float a = 1, b = 2;`: one extern per declarator the function names
                m = re.match(r"(.*?)([\s\*]*\b\w+(?:\s*\[[^\]]*\])*)\s*$", h, re.S)
                typ = m.group(1).strip() if m else h
                for name, d in [(it.name, h[len(typ):].strip())] + more:
                    if name in seen:
                        out.append(("data", name, f"extern {typ} {d};"))
                continue
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
        defs_file = SCAN / repo / "defs.txt"  # scan_repo2.sh: the origin's own defines, no include/ of ours first
        self.defs = defs_file.read_text().replace("-D", "").split() if defs_file.exists() else []
        self.inc = ([] if defs_file.exists() else ["include"]) + [str(Path(src).parent), *inc]
        keep = f"build/port/w/{repo}_{abs(hash(src)) % 10**10}_{version}"
        objs, self.work = g.compile_matrix(ROOT / src, [version], [flags], "gas", self.defs, include_dirs=self.inc,
                                           keep=keep)
        obj = objs[(version, flags)]
        self.err = None if isinstance(obj, Path) else str(obj)
        if self.err:
            return
        self.ob = lp.Obj(obj)
        self.an = lp.Analysis(self.ob, exe)
        # the literals become externs of the executable's own strings, so their text in the origin may differ
        self.an.loose_strings = True
        self.addr = self.an.resolve()
        _, self.status = self.an.bind(self.addr)
        pre = Path(self.work) / "pre.c"
        rc, txt = eegcc.run_many([(version, [*flags.split(), *[f"-I{ROOT / d}" for d in self.inc],
                                            *[f"-D{d}" for d in self.defs], "-E", "-P",
                                            str(ROOT / src), "-o", str(pre)])], cwd=ROOT)[0]
        if rc != 0 or not pre.exists():
            self.err = "preprocess: " + txt[-200:]
            return
        self.pre = pre.read_text(errors="replace")
        self.items = cparse.split_items(self.pre)
        self.rodata = {s: lp.section_bytes(self.ob.path, s) for s in (".rodata", ".data", ".rodata.str1.4")}


def in_asm(text, pos):
    """True when text[pos] lies inside the parentheses of an asm statement (__asm__, asm, __asm)."""
    best = None
    for m in re.finditer(r"\b(?:__asm__|__asm|asm)\b(?:\s*(?:volatile|__volatile__))?\s*\(", text[:pos]):
        best = m
    if best is None:
        return False
    depth = 0
    seg = re.sub(r'"(\\.|[^"\\])*"', '""', cparse._strip_comments(text[best.end() - 1:pos]))
    for ch in seg:
        depth += ch == "("
        depth -= ch == ")"
        if depth == 0:
            return False  # that asm statement closed before pos
    return depth > 0


def make_item(u, ext_name, addr, our_name, syms, new_syms):
    """The func_insert.py item for one function, or (None, reason)."""
    if u.status.get(ext_name) is not None:
        return None, f"bind: {u.status[ext_name]}"
    if u.addr.get(ext_name) != addr:
        return None, "address not resolved"
    fi = next((it for it in u.items if it.kind == "func" and it.name == ext_name), None)
    if fi is None:
        return None, "no function text"
    decls, why = closure(u.items, fi, ext_name, getattr(u.an, "rebind_data", set()))
    if decls is None:
        return None, why
    bind_all, _ = u.an.bind({ext_name: addr})

    def label(a, kind):
        names = [n for n in syms.get(a, []) if "." not in n]
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
    # a file-scope static table of the origin the pairing bound to nothing (e.g. only reached through an index
    # register): kept as the function's own static, its references bound to the executable's copy (gcc_rebind.py)
    unbound = {n for kind, n, t in decls if kind == "data" and n and n not in bind}
    statics = {it.name for it in u.items if it.kind == "data" and it.name in unbound
               and re.match(r"\s*static\b", cparse._strip_comments(it.text))}
    if statics:
        decls, why = closure(u.items, fi, ext_name, set(getattr(u.an, "rebind_data", set())) | statics)
        if decls is None:
            return None, why
    # calls the compiler makes by itself (libgcc: __divdi3, __floatdisf, dptoli ...): their names go to
    # config/port_syms.ld at the executable's address when the build does not define them
    used = identifiers(fi.text)
    known = {n for ns in syms.values() for n in ns}
    aliases = {k[1]: a for k, a in bind_all.items() if k[0] == "sym" and k[1] not in used and k[1] not in known}
    func = fi.text
    # a jump table, a local static/const or a non-string constant: the function's own data is bound to the
    # executable's copy, reference by reference, when the file is assembled (scripts/gcc_rebind.py)
    rebind = bool(re.search(r"\bswitch\b", func) or ext_name in getattr(u.an, "rebind", ())
                  or re.search(r"\bstatic\b", func[func.index("{"):]) or statics)
    extra = []
    k = 0
    toks = [(s, e, tok) for s, e, tok in reversed(cparse.string_tokens(func)) if not in_asm(func, s)]
    if any(cparse.c_string_value(tok) not in lits for _, _, tok in toks):
        rebind = True  # a literal the pairing could not tie to one string: bound per reference instead
    # a rebound function keeps its literals: gcc_rebind.py points each reference at the executable's string
    for s, e, tok in ([] if rebind else toks):
        v = cparse.c_string_value(tok)
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
    # a callee the origin calls with no declaration in scope (C89's implicit `int f()`): declared so, so that
    # func_insert.py can bind it to the executable's function like any other
    declared = set(re.findall(r"\b(\w+)\s*(?:\)\s*)?\(", "\n".join(dl))) | set(re.findall(r"\b(\w+)\s*(?:\[|;|,|=)",
                                                                                            "\n".join(dl)))
    for n in sorted(bind):
        if n not in declared and n != our_name and re.search(r"\b" + re.escape(n) + r"\s*\(", func):
            dl.append(f"int {n}();")
    url, lic = LICENSES.get(u.repo, ("", ""))
    origin = u.src.split(f"build/ext/{u.repo}/", 1)[-1]
    head = f"/* {ext_name}: from {url} ({origin}, {lic}); ee-gcc {u.version} {u.flags} */\n"
    notice = re.match(r"\s*(/\*.*?\*/)", (ROOT / u.src).read_text(errors="replace"), re.S)
    if notice and re.search(r"copyright|permission|licen[cs]e", notice.group(1), re.I):
        head = notice.group(1) + "\n" + head  # the source's own notice goes with the function
    return dict(addr=addr, name=our_name, decls=dl + extra, func=func, note=head, bind=bind, repo=u.repo, src=origin, ext_name=ext_name, status="match", rebind=rebind, aliases=aliases,
                noswap="-O1" in os.environ.get("B3_AS_EXTRA", "").split()), None


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--repo", required=True)
    ap.add_argument("--min", type=int, default=6)
    ap.add_argument("--jobs", type=int, default=8)
    ap.add_argument("--out", required=True)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--real", action="store_true", help="apply: also check each file compiled as the build does")
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
        grp = configure.gcc_group(f"src/{seg}.c")
        if grp is None:
            continue  # not a gcc library file
        version, flags = grp
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
        # B3_AS_EXTRA=-O1 found the matches; in the file each one is noswap, the rest keeps gas's filling
        os.environ.pop("B3_AS_EXTRA", None)
        apply_items([r for r in results if r["status"] == "match"], new_syms, a.jobs, f"{a.out}.log", real=a.real)


def apply_items(items, new_syms, jobs, log, real=False):
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
    for it in items:
        for n, a in sorted(it.get("aliases", {}).items()):
            ln = f"{n} = 0x{a:08X};"
            if ln not in have and not any(x.startswith(f"{n} = ") for x in have):
                lines.append(ln)
                have.add(ln)
    PORT_LD.write_text("\n".join(lines) + "\n")
    for it in items:
        it["func"] = it["note"] + it["func"]
    return FI.apply(items, jobs, log, real=real)


if __name__ == "__main__":
    main()
