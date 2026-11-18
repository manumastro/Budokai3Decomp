#!/usr/bin/env python3
"""Ports the matching functions of a public C source file into the repository's library C files.

    lib_port.py --repo ico --src build/ext/ico/sce/libgraph/graph006.c --seg sdk/libgraph/ico_graph006 [--apply]

The source (a file of a permissively licensed decompilation, copied under build/ext/<repo>/) is compiled with the
ee-gcc build of its library group, each function is looked up in the executable (scripts/libport.py), and for every
function that matches and whose relocations all resolve to a function, a data symbol or a string, the C file
src/<seg>.c is written: the function as the source has it, the data it uses declared `extern` under the
executable's own symbol (`__asm__("D_xxxxxxxx")`), strings replaced by the executable's string symbols, the
functions of the range that did not match as INCLUDE_ASM. The written file is compiled and each function is
compared with the executable again; a function that does not match is dropped and the file is written again.
With --apply it also copies the headers the file needs (include/ext/<repo>/), adds the symbol names
(config/symbols/lib_names.txt) and carves the yaml. Without it, prints the plan only.
"""
import argparse
import re
import shutil
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import cparse  # noqa: E402
import gccmatch as g  # noqa: E402
import libport as lp  # noqa: E402

ROOT = g.ROOT
YAML = ROOT / "config" / "SLUS_209.98.yaml"
NAMES = ROOT / "config" / "symbols" / "lib_names.txt"
AUTO = re.compile(r"(func|D|jtbl|L|sub|lbl)_[0-9A-Fa-f]{6,8}$")
DATA_SECS = (".data", ".rodata", ".bss", ".sdata", ".sbss", ".lit4", ".lit8", ".rdata")

LICENSES = {
    "ico": ("https://github.com/nathanialf/ico-pc", "MIT"),
    "kfiv": ("https://github.com/Voicedrew11/kfiv-decomp", "MIT"),
    "recvx": ("https://github.com/AshfordFamily/recvx-decomp", "MIT"),
    "mk": ("https://github.com/ShulkMaster/mk-deception", "CC0-1.0"),
    "fz": ("https://github.com/karamzov123/fzero-gx-decomp", "CC0-1.0"),
    "newlib": ("https://sourceware.org/newlib/", "BSD-style"),
}


def include_paths(repo):
    base = ROOT / "build" / "ext" / repo
    return sorted({str(p.parent.relative_to(ROOT)) for p in base.rglob("*.h")})


def collect_headers(text, here, dirs, seen):
    """Header files a source includes, transitively, found in the repo's own folders."""
    out = []
    for m in re.finditer(r'^\s*#\s*include\s*([<"])([^>"]+)[>"]', text, re.M):
        cands = ([here / m.group(2)] if m.group(1) == '"' else []) + [ROOT / d / m.group(2) for d in dirs]
        for c in cands:
            if c.exists():
                if c not in seen:
                    seen.add(c)
                    out.append(c)
                    out += collect_headers(c.read_text(errors="replace"), c.parent, dirs, seen)
                break
    return out


class Port:
    def __init__(self, a, exe):
        self.a, self.exe = a, exe
        self.src = (ROOT / a.src).resolve()
        self.dirs = include_paths(a.repo)
        keepdir = f"build/gccmatch/port_{a.repo}_{self.src.stem}"
        objs, self.work = g.compile_matrix(self.src, [a.version], [a.flags], "gas", [],
                                           include_dirs=["include", *self.dirs], keep=keepdir)
        obj = objs[(a.version, a.flags)]
        if not isinstance(obj, Path):
            raise SystemExit(f"{a.src}: {obj}")
        self.ob = lp.Obj(obj)
        self.an = lp.Analysis(self.ob, exe)
        self.addr = self.an.resolve()
        _, self.status = self.an.bind(self.addr)
        self.folders = []
        self.text = self.src.read_text(errors="replace")
        self.items = cparse.split_items(self.text)

    def candidates(self):
        a = self.a
        only = set(a.only.split(",")) if a.only else None
        has_item = {it.name for it in self.items if it.kind == "func"}
        return {n: ad for n, ad in self.addr.items() if self.status[n] is None and n in has_item
                and len(self.an.words[n]) >= a.min_words and (only is None or n in only)}

    def generate(self, keep, seg=None):
        a, exe, an, ob = self.a, self.exe, self.an, self.ob
        bind, _ = an.bind(keep)
        in_obj = set(an.funcs)
        new_syms = {}      # address -> (name, kind)
        defines = {}       # source name -> symbol the executable has for it

        def exe_name(address):
            return exe.addr2name.get(address)

        def taken(nm, address):
            return (nm in exe.syms and exe.syms[nm] != address) or \
                any(v[0] == nm and ad != address for ad, v in new_syms.items())

        def claim(address, want, kind):
            have = exe_name(address) or new_syms.get(address, (None,))[0]
            if have is None or AUTO.match(have):
                if address in new_syms:
                    nm = new_syms[address][0]
                else:
                    nm = f"{want}_{address:08X}" if taken(want, address) else want
                    new_syms[address] = (nm, kind)
                if nm != want:
                    defines[want] = nm
                return nm
            if have != want:
                defines[want] = have
            return have

        for n, ad in keep.items():
            claim(ad, n, "func")
        for key, ad in bind.items():
            if key[0] in ("sym", "func"):
                claim(ad, key[1], "func" if ad in exe.sizes else "")
        data_name = {}
        for key, ad in bind.items():
            if key[0] == "data":
                have = exe_name(ad) or new_syms.get(ad, (None,))[0]
                if have is None:
                    have = f"D_{ad:08X}"
                    new_syms[ad] = (have, "")
                data_name[key[1]] = have
        data_secs = {}
        for key, ad in bind.items():
            if key[0] == "lit":
                have = exe_name(ad) or new_syms.get(ad, (None,))[0]
                if have is None:
                    have = f"D_{ad:08X}"
                    new_syms[ad] = (have, "")
                d = lp.section_bytes(ob.path, key[1])
                end = d.find(b"\0", key[2])
                data_secs[d[key[2]:end]] = have

        elf_funcs = sorted(exe.sizes)
        lo, hi_f = min(keep.values()), max(keep.values())
        nxt = [x for x in elf_funcs if x > hi_f]
        hi = nxt[0] if nxt else hi_f + exe.sizes[hi_f]
        seq = [x for x in elf_funcs if lo <= x < hi]
        kept_by_addr = {ad: n for n, ad in keep.items()}
        func_item = {it.name: it for it in self.items if it.kind == "func"}

        def fix_text(t):
            for s, e, tok in reversed(cparse.string_tokens(t)):
                v = cparse.c_string_value(tok)
                if v is not None and v in data_secs:
                    t = t[:s] + data_secs[v] + t[e:]
            return t

        out_head = []
        defs_at = None
        for it in self.items:
            if defs_at is None and it.kind in ("data", "func"):
                defs_at = len(out_head)
            if it.kind == "pp":
                out_head.append(it.lead + it.text)
            elif it.kind == "decl":
                out_head.append(it.lead + fix_text(it.text))
            elif it.kind == "data":
                nm = it.name
                if nm in data_name:
                    d = re.sub(r"\bstatic\b\s*", "", it.head)
                    d = cparse.strip_attr(d).strip()
                    m = re.search(r"\b" + re.escape(nm) + r"\b((?:\s*\[[^\]]*\])*)", d)
                    # a header may declare the name already: rename it with a macro, not with an asm label
                    if nm != data_name[nm]:
                        defines[nm] = data_name[nm]
                    out_head.append(it.lead + f"extern {d};")
            elif it.kind == "func":
                if it.name in keep:
                    continue
                if it.name in in_obj:
                    out_head.append(it.lead + re.sub(r"\bstatic\b\s*", "", it.head).strip() + ";")
                else:
                    out_head.append(it.lead + fix_text(it.text))
        externs = [f"extern char {nm}[];" for nm in dict.fromkeys(data_secs.values())]
        asm_dir = f"asm/nonmatchings/{seg or a.seg}"
        out_body = []
        for k, ad in enumerate(seq):
            if ad in kept_by_addr:
                it = func_item[kept_by_addr[ad]]
                out_body.append(it.lead + fix_text(re.sub(r"^(\s*)static\s+", r"\1", it.text)))
                # the asm function that follows starts where the alignment nops end; the C object has none there
                if k + 1 < len(seq) and seq[k + 1] not in kept_by_addr:
                    mid = seq[k + 1] - (ad + exe.sizes[ad])
                    if mid > 0:
                        out_body.append(f"INCLUDE_PAD({mid});")
            else:
                nm = new_syms.get(ad, (None,))[0] or exe_name(ad) or f"func_{ad:08X}"
                out_body.append(f'INCLUDE_ASM("{asm_dir}", {nm});')
        pad = hi - (hi_f + exe.sizes[hi_f])
        if pad > 0:
            out_body.append(f"INCLUDE_PAD({pad});")
        url, lic = LICENSES.get(a.repo, ("", ""))
        origin = a.origin or str(a.src).split(f"build/ext/{a.repo}/", 1)[-1]
        hdr = (f"/* Taken from {url} ({origin}, {lic}); compiled with ee-gcc {a.version} {a.flags}.\n"
               f" * Data and strings are the executable's own: see the extern declarations. */\n"
               f"/* ext-include: {a.repo}:{','.join(self.folders)} */\n")
        defs = "".join(f"#define {k} {v}\n" for k, v in sorted(defines.items()))
        if defs:
            out_head.insert(len(out_head) if defs_at is None else defs_at, "\n" + defs)
        result = hdr + '#include "common.h"\n\n' \
            + "\n".join(x.strip("\n") + "\n" for x in out_head if x.strip()) + "\n" + "\n".join(externs) \
            + ("\n\n" if externs else "\n") + "\n".join(out_body) + "\n"
        return dict(result=result, new_syms=new_syms, defines=defines, lo=lo, hi=hi, seq=seq,
                    kept_by_addr=kept_by_addr)

    def write_headers(self):
        """Copies the headers the source needs under include/ext/<repo>/, keeping their layout. Returns the folders
        (relative to the repository's root) to search, in the order the compile used."""
        seen = set()
        heads = collect_headers(self.text, self.src.parent, self.dirs, seen)
        base = ROOT / "build" / "ext" / self.a.repo
        dst = ROOT / "include" / "ext" / self.a.repo
        folders = set()
        for h in heads:
            rel = h.relative_to(base)
            t = dst / rel
            t.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy(h, t)
            folders.add(str(rel.parent))
        order = [str(Path(d).relative_to(base.relative_to(ROOT))) for d in self.dirs]
        self.folders = [d for d in order if d in folders]
        return self.folders

    def verify(self, gen, keep):
        """Compile the written file alone and compare every kept function. Returns the names that differ."""
        a = self.a
        path = ROOT / "build" / "gccmatch" / f"verify_{a.repo}_{self.src.stem}.c"
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_text(gen["result"])
        objs, w = g.compile_matrix(path, [a.version], [a.flags], "gas", ["NO_INCLUDE_ASM"],
                                   include_dirs=["include", "src", *[f"include/ext/{a.repo}/{d}" for d in self.folders]])
        obj = objs[(a.version, a.flags)]
        if not isinstance(obj, Path):
            shutil.rmtree(w, ignore_errors=True)
            return set(keep), str(obj)[-200:]
        ob = lp.Obj(obj)
        fns = g.objects_functions(obj)
        bad = set()
        if any(ob.secs.get(s, (0, 0))[1] for s in DATA_SECS):
            bad |= set(keep)
            msg = "the object defines data"
        else:
            msg = ""
            for n, ad in keep.items():
                cname = gen["defines"].get(n, n)
                if cname not in fns:
                    bad.add(n)
                    continue
                words, masks = fns[cname]
                diffs, _ = g.compare(words, masks, ad, self.exe.rom)
                if diffs or 4 * len(words) != self.exe.sizes[ad]:
                    bad.add(n)
        shutil.rmtree(w, ignore_errors=True)
        return bad, msg


def segment_of(lo):
    """The name (without a _ADDR suffix) of the yaml segment that holds address lo."""
    rx = re.compile(r"^\s+- \[0x([0-9A-Fa-f]+), (\w+), ([\w/]+)\]")
    ents = [(int(m.group(1), 16), m.group(2), m.group(3)) for l in YAML.read_text().splitlines()
            for m in [rx.match(l)] if m]
    best = [e for e in ents if e[0] <= lo - 0x100000][-1]
    return best[1], re.sub(r"_[0-9A-F]{8}$", "", best[2])


def carve(lo, hi, seg):
    """Cuts [lo, hi) out of the asm piece of the yaml that holds it and makes it the C segment `seg`."""
    lines = YAML.read_text().splitlines()
    rx = re.compile(r"^(\s+)- \[0x([0-9A-Fa-f]+), (\w+), ([\w/]+)\](.*)$")
    ents = [(i, int(m.group(2), 16), m) for i, l in enumerate(lines) for m in [rx.match(l)] if m]
    for k, (i, off, m) in enumerate(ents):
        nxt = ents[k + 1][1] if k + 1 < len(ents) else None
        if off <= lo - 0x100000 < (nxt or 1 << 40):
            break
    else:
        return "no yaml segment holds the range"
    if m.group(3) != "asm" or nxt is None or hi - 0x100000 > nxt:
        return f"range {lo:#x}-{hi:#x} does not sit in one asm segment ({m.group(0).strip()})"
    ind, name = m.group(1), m.group(4)
    new = []
    if lo - 0x100000 > off:
        new.append(f"{ind}- [0x{off:06X}, asm, {name}]{m.group(5)}")
    new.append(f"{ind}- [0x{lo - 0x100000:06X}, c, {seg}]")
    if hi - 0x100000 < nxt:
        new.append(f"{ind}- [0x{hi - 0x100000:06X}, asm, {re.sub(r'_[0-9A-F]{8}$', '', name)}_{hi:08X}]")
    lines[i:i + 1] = new
    YAML.write_text("\n".join(lines) + "\n")
    return None


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--repo", required=True)
    ap.add_argument("--src", required=True, type=Path)
    ap.add_argument("--seg", required=True, help="yaml segment name of the new file, e.g. sdk/libgraph/ico_graph006")
    ap.add_argument("--version", default="2.9-991111-01")
    ap.add_argument("--flags", default="-O2 -G0")
    ap.add_argument("--min-words", type=int, default=2)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--verify", action="store_true", help="compile and compare the written file, apply nothing")
    ap.add_argument("--only", help="comma list of function names to port")
    ap.add_argument("--origin", help="path of the file inside the original repository (for the credit)")
    ap.add_argument("-q", action="store_true")
    a = ap.parse_args()
    exe = lp.Exe()
    p = Port(a, exe)
    keep = p.candidates()
    if not keep:
        print(f"{a.src}: nothing to port")
        return 1
    if a.apply or a.verify:
        p.write_headers()
    for attempt in range(4):
        gen = p.generate(keep)
        if not (a.apply or a.verify):
            break
        bad, msg = p.verify(gen, keep)
        if not bad:
            break
        if not a.q or a.verify:
            print(f"  dropped after verify: {sorted(bad)} {msg}")
        keep = {n: ad for n, ad in keep.items() if n not in bad}
        if not keep:
            print(f"{a.src}: nothing verified")
            return 1
    print(f"{a.src}: {len(keep)} functions in C [{', '.join(keep)}], range {gen['lo']:#x}-{gen['hi']:#x}, "
          f"{sum(1 for x in gen['seq'] if x not in gen['kept_by_addr'])} INCLUDE_ASM")
    if not a.apply:
        if not a.q:
            print(gen["result"][:3000])
        return 0
    kind, base = segment_of(gen["lo"])
    seg = a.seg if a.seg != "auto" else f"{base}/{a.repo}_{p.src.stem}"
    if kind != "asm":
        print(f"{a.src}: {gen['lo']:#x} is in a {kind} segment already")
        return 2
    sys.path.insert(0, str(ROOT))
    import configure
    grp = configure.gcc_group(f"src/{seg}.c")
    if grp != (a.version, a.flags):
        print(f"{a.src}: {seg} is built with {grp}, the source matched with {(a.version, a.flags)}")
        return 2
    gen = p.generate(keep, seg)
    out_path = ROOT / "src" / f"{seg}.c"
    err = carve(gen["lo"], gen["hi"], seg)
    if err:
        print(f"{a.src}: {err}")
        return 2
    out_path.parent.mkdir(parents=True, exist_ok=True)
    out_path.write_text(gen["result"])
    cur = NAMES.read_text() if NAMES.exists() else "// Names the library port gives (scripts/lib_port.py).\n"
    for ad, (nm, kind) in sorted(gen["new_syms"].items()):
        if f"= 0x{ad:08X};" in cur:
            continue
        cur += f"{nm} = 0x{ad:08X};" + (f" // type:{kind}" if kind else "") + "\n"
    NAMES.write_text(cur)
    print(f"wrote {out_path.relative_to(ROOT)}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
