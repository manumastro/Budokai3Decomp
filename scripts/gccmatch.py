#!/usr/bin/env python3
"""Compiles a C file with Sony's ee-gcc builds and compares its functions with the original executable.

    gccmatch.py FILE.c [FUNC[=ADDR] ...] [--versions V1,V2|all] [--flags "-O2 -G0" --flags ...] [--as gas|sony] [-v]

For each ee-gcc version (tools/eegcc/<version>/, scripts/get_tools.py --eegcc) and each set of flags it prints how
many instructions of each function differ from the original (relocated fields masked by relocation type: jal
targets, %hi/%lo immediates). `0` is a match; a function whose compiled size differs from the original's extent
(splat's `nonmatching` size) prints `size`. Without FUNC arguments every function of the file is compared; a FUNC without =ADDR takes its address from func_XXXXXXXX or the symbol files.

The assembler: `gas` (default) is the modern binutils with include/gcc_prelude.inc, as the build uses; `sony` is the
Linux build's own 2000-era assembler run in the container (SN's Windows builds then use 2.96's), the reference when
a near-miss might be the prelude's. -v prints each differing function side by side (original on the right) for the
first version and flag set where it differs.

Needs disc/SLUS_209.98.rom and asm/ from configure.py. Temporary files go under build/gccmatch/ (the container
sees only the checkout), one folder per run, so runs can go in parallel.
"""

import argparse
import os
import re
import shutil
import struct
import subprocess
import sys
from pathlib import Path

from elftools.elf.descriptions import describe_reloc_type
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

sys.path.insert(0, str(Path(__file__).resolve().parent))
sys.path.insert(0, str(Path(__file__).resolve().parent / "eegcc"))
import eegcc  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent
ROM = ROOT / "disc" / "SLUS_209.98.rom"
VRAM = 0x100000
BINUTILS = ROOT / "tools" / "binutils" / "mips-ps2-decompals-"
PRELUDE = ROOT / "include" / "gcc_prelude.inc"
GAS_FLAGS = ["-EL", "-march=r5900", "-mabi=o64", "-no-pad-sections", "-mno-pdr"]
DEFAULT_FLAGS = ["-O1 -G0", "-O2 -G0", "-O2 -G0 -fno-strict-aliasing", "-O3 -G0", "-Os -G0"]
SONY_AS_FOR_WINDOWS = "2.96"

RELOC_MASK = {
    "R_MIPS_26": 0x03FFFFFF,
    "R_MIPS_HI16": 0xFFFF,
    "R_MIPS_LO16": 0xFFFF,
    "R_MIPS_GPREL16": 0xFFFF,
    "R_MIPS_LITERAL": 0xFFFF,
    "R_MIPS_GOT16": 0xFFFF,
    "R_MIPS_CALL16": 0xFFFF,
}


def symbol_addresses():
    out = {}
    yaml = (ROOT / "config" / "SLUS_209.98.yaml").read_text()
    for path in re.findall(r"^\s+- (config/\S+\.txt)$", yaml, re.M):
        for line in (ROOT / path).read_text().splitlines():
            m = re.match(r"(\w+) = 0x([0-9A-Fa-f]+);", line)
            if m:
                out[m.group(1)] = int(m.group(2), 16)
    return out


def function_sizes():
    """{address: size} of every function in the split, from splat's `nonmatching NAME, SIZE` lines (the size
    without the alignment padding after the function); data folders excluded."""
    sizes = {}
    for path in (ROOT / "asm").rglob("*.s"):
        rel = path.relative_to(ROOT / "asm")
        if rel.parts[0] in ("data", "rodata", "sdata"):
            continue
        size = None
        want = False
        for line in open(path):
            m = re.match(r"nonmatching \S+, (0x[0-9A-Fa-f]+)", line)
            if m:
                size = int(m.group(1), 16)
                continue
            if line.startswith("glabel "):
                want = True
                continue
            if want:
                m = re.match(r"\s+/\* \w+ ([0-9A-F]{8}) ", line)
                if m:
                    if size is not None:
                        sizes[int(m.group(1), 16)] = size
                    want = False
                    size = None
    return sizes


_LINKED = None


def linked_symbols():
    """{name: address} of the global symbols of the last build's ELF (build/SLUS_209.98.elf), or {} without one."""
    global _LINKED
    if _LINKED is None:
        _LINKED = {}
        elf_path = ROOT / "build" / "SLUS_209.98.elf"
        if elf_path.exists() and not os.environ.get("B3_NO_RESOLVE"):
            with open(elf_path, "rb") as f:
                for s in ELFFile(f).get_section_by_name(".symtab").iter_symbols():
                    if s.name and s["st_shndx"] != "SHN_UNDEF" and s["st_info"]["bind"] != "STB_LOCAL" \
                            and s["st_info"]["type"] in ("STT_FUNC", "STT_OBJECT", "STT_NOTYPE"):
                        _LINKED.setdefault(s.name, s["st_value"])
    return _LINKED


def _sext16(v):
    return v - 0x10000 if v & 0x8000 else v


def resolve_relocations(text, relocs):
    """Applies the relocations of .text whose symbol the last build's ELF knows (a global name: an extern variable,
    a called function), as the linker would. Returns (patched text bytes, {offset: mask}) where the masks are left
    only for the fields that could not be resolved (section-relative: local labels, the file's own static data).

    Without this the compared words held 0 in every relocated field (`jal 0x0`, `lui a0,0x0`, `addiu a0,a0,0`):
    the comparison masked those fields, so a wrong global or a wrong offset into the right one passed, and the
    side-by-side diffs showed address 0 where the original has the real one."""
    known = linked_symbols()
    buf = bytearray(text)
    masks = {}

    def word(o):
        return struct.unpack_from("<I", buf, o)[0]

    def put(o, v):
        struct.pack_into("<I", buf, o, v & 0xFFFFFFFF)

    # REL: a HI16's addend is completed by the low half of its LO16, the next LO16 of the same symbol in the
    # relocation table (gas puts each HI16 right before the LO16 it pairs with)
    todo = list(relocs)
    for k, (off, t, name) in enumerate(todo):
        s = known.get(name) if name else None
        if s is None or t not in ("R_MIPS_26", "R_MIPS_HI16", "R_MIPS_LO16"):
            masks[off] = masks.get(off, 0) | RELOC_MASK.get(t, 0xFFFFFFFF)
            continue
        w = word(off)
        if t == "R_MIPS_26":
            a = (w & 0x03FFFFFF) << 2
            put(off, (w & 0xFC000000) | (((s + a) >> 2) & 0x03FFFFFF))
        elif t == "R_MIPS_LO16":
            put(off, (w & 0xFFFF0000) | ((s + _sext16(w & 0xFFFF)) & 0xFFFF))
        else:
            lo = next((o2 for (o2, t2, n2) in todo[k + 1:] if t2 == "R_MIPS_LO16" and n2 == name), None)
            if lo is None:
                masks[off] = masks.get(off, 0) | 0xFFFF
                continue
            ahl = ((w & 0xFFFF) << 16) + _sext16(struct.unpack_from("<I", text, lo)[0] & 0xFFFF)
            put(off, (w & 0xFFFF0000) | (((s + ahl + 0x8000) >> 16) & 0xFFFF))
    return bytes(buf), masks


def objects_functions(obj, resolve=True):
    """{name: (words, {word index: mask})} for the functions of the object's .text.

    Relocated fields against a global the last build knows are filled with the linked value (resolve_relocations);
    the others are masked. Sizes come from the symbol table; a zero size (no `.size` / `.end`) is replaced by the
    distance to the next function symbol or the end of .text."""
    with open(obj, "rb") as f:
        elf = ELFFile(f)
        text_idx = None
        for i, s in enumerate(elf.iter_sections()):
            if s.name == ".text":
                text_idx = i
                text = s.data()
        if text_idx is None:
            return {}
        relocs = []
        symtab = elf.get_section_by_name(".symtab")
        for s in elf.iter_sections():
            if isinstance(s, RelocationSection) and s["sh_info"] == text_idx:
                for r in s.iter_relocations():
                    t = describe_reloc_type(r["r_info_type"], elf)
                    sym = symtab.get_symbol(r["r_info_sym"])
                    # only a global symbol resolves by name; a section symbol or a local label stays masked
                    name = sym.name if sym.name and sym["st_info"]["bind"] != "STB_LOCAL" \
                        and sym["st_info"]["type"] != "STT_SECTION" else None
                    relocs.append((r["r_offset"], t, name))
        if resolve:
            text, masks = resolve_relocations(text, relocs)
        else:
            masks = {}
            for off, t, _ in relocs:
                masks[off] = masks.get(off, 0) | RELOC_MASK.get(t, 0xFFFFFFFF)
        syms = []
        for sym in elf.get_section_by_name(".symtab").iter_symbols():
            if sym["st_info"]["type"] == "STT_FUNC" and sym["st_shndx"] == text_idx:
                syms.append((sym["st_value"], sym["st_size"], sym.name))
        syms.sort()
        out = {}
        for k, (start, size, name) in enumerate(syms):
            if size == 0:
                size = (syms[k + 1][0] if k + 1 < len(syms) else len(text)) - start
                # The next function starts on 8 bytes: drop one alignment nop.
                if size % 8 == 0 and size >= 8 and text[start + size - 4:start + size] == b"\0\0\0\0":
                    size -= 4
            words = list(struct.unpack(f"<{size // 4}I", text[start:start + size]))
            out[name] = (words, {(o - start) // 4: m for o, m in masks.items() if start <= o < start + size})
        return out


def compare(words, masks, addr, rom):
    off = addr - VRAM
    orig = list(struct.unpack(f"<{len(words)}I", rom[off:off + 4 * len(words)]))
    return [i for i, (a, b) in enumerate(zip(words, orig)) if (a ^ b) & ~masks.get(i, 0) & 0xFFFFFFFF], orig


def disasm_words(words, addr):
    tmp = ROOT / "build" / "gccmatch" / f"dis_{os.getpid()}.bin"
    tmp.parent.mkdir(parents=True, exist_ok=True)
    tmp.write_bytes(struct.pack(f"<{len(words)}I", *words))
    r = subprocess.run([f"{BINUTILS}objdump", "-D", "-b", "binary", "-m", "mips:5900", "-EL",
                        f"--adjust-vma={addr:#x}", str(tmp)], capture_output=True, text=True)
    tmp.unlink()
    return [line.split("\t", 2)[-1] for line in r.stdout.splitlines() if line.startswith("  ")]


def show(words, orig, addr, bad):
    a, b = disasm_words(words, addr), disasm_words(orig, addr)
    for i in range(max(len(a), len(b))):
        left = a[i] if i < len(a) else ""
        right = b[i] if i < len(b) else ""
        mark = "!=" if i in bad else "  "
        print(f"  {addr + 4 * i:08X} {left:44} {mark} {right}")


def assemble(asm, obj, version, how, include_dirs):
    """Assembles ee-gcc output; returns an error text or None."""
    if how == "gas":
        r = subprocess.run([f"{BINUTILS}as", *GAS_FLAGS, "-G0", *[f"-I{d}" for d in include_dirs], str(PRELUDE),
                            str(asm), "-o", str(obj)], capture_output=True, text=True, cwd=ROOT)
        return None if r.returncode == 0 else r.stderr
    v = version if eegcc.kind(version) == "linux" else SONY_AS_FOR_WINDOWS
    rc, out = eegcc.run(v, ["-EL", "-G0", *[f"-I{d}" for d in include_dirs], str(asm), "-o", str(obj)],
                        cwd=ROOT, assembler=True)
    return None if rc == 0 else out


def _rel(d):
    """An include folder as the build names it: relative to the checkout when inside it (cpp passes the header
    paths on to cc1, where they are allocated like the file name, see compile_matrix)."""
    try:
        return Path(os.path.abspath(ROOT / d)).relative_to(ROOT).as_posix()
    except ValueError:
        return str(ROOT / d)


def compile_matrix(src, versions, flagsets, how, defines=(), include_dirs=("include",), keep=None):
    """Compiles src with every version x flag set. Returns {(version, flags): object path or error text}."""
    work = Path(keep) if keep else ROOT / "build" / "gccmatch" / f"run_{os.getpid()}"
    shutil.rmtree(work, ignore_errors=True)
    work.mkdir(parents=True)
    jobs, keys = [], []
    # the source named as the build names it (relative to the checkout): ee-gcc 2.96's CSE hashes a symbol by the
    # address of its name's string, and the file name is allocated before them, so its length can change the code
    src_arg = str(src)
    try:
        src_arg = Path(os.path.abspath(src)).relative_to(ROOT).as_posix()
    except ValueError:
        pass
    for v in versions:
        for k, flags in enumerate(flagsets):
            asm = work / f"{v}_{k}.s"
            args = [*flags.split(), *[f"-I{_rel(d)}" for d in include_dirs], *[f"-D{d}" for d in defines],
                    "-S", src_arg, "-o", str(asm)]
            jobs.append((v, args))
            keys.append((v, flags, asm))
    results = eegcc.run_many(jobs, cwd=ROOT)
    out = {}
    for (v, flags, asm), (rc, text) in zip(keys, results):
        if rc != 0 or not asm.exists():
            lines = [l for l in text.splitlines() if l.strip()]
            out[(v, flags)] = "compile error: " + (lines[-1] if lines else f"exit {rc}")
            continue
        obj = asm.with_suffix(".o")
        if how == "gas":
            # as the build does: a REBIND_DATA function's own data bound to the executable's (gcc_rebind.py)
            import gcc_rebind
            t = asm.read_text(errors="replace")
            if "rebind" in t or ".b3stub" in t:
                t2 = gcc_rebind.rebind(t, [f"-I{ROOT / d}" for d in include_dirs], log=open(os.devnull, "w"))
                if t2 != t:
                    asm = asm.with_name(asm.stem + "_rb.s")  # ee-gcc's container owns its output file
                    asm.write_text(t2)
        err = assemble(asm, obj, v, how, include_dirs)
        out[(v, flags)] = obj if err is None else "assemble error: " + err.strip().splitlines()[-1]
    return out, work


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("src", type=Path)
    ap.add_argument("funcs", nargs="*", help="NAME or NAME=0xADDR")
    ap.add_argument("--versions", default="all")
    ap.add_argument("--flags", action="append")
    ap.add_argument("--as", dest="how", choices=("gas", "sony"), default="gas")
    ap.add_argument("-D", dest="defines", action="append", default=[])
    ap.add_argument("-v", action="store_true")
    ap.add_argument("--keep", help="keep the compiler output in this folder (under the checkout)")
    args = ap.parse_args()
    rom = ROM.read_bytes()
    versions = [v for v in eegcc.VERSIONS if (eegcc.EEGCC / v).exists()] if args.versions == "all" \
        else args.versions.split(",")
    flagsets = args.flags or DEFAULT_FLAGS
    syms = symbol_addresses()
    sizes = function_sizes()
    wanted = {}
    for f in args.funcs:
        name, _, addr = f.partition("=")
        wanted[name] = int(addr, 16) if addr else None
    src = args.src.resolve()
    if ROOT.resolve() not in src.parents:
        sys.exit("the C file must be inside the checkout (the container sees nothing else)")
    objs, work = compile_matrix(src, versions, flagsets, args.how, args.defines, keep=args.keep)
    shown = set()
    width = max(len(v) for v in versions)
    fwidth = max(len(f) for f in flagsets)
    for v in versions:
        for flags in flagsets:
            obj = objs[(v, flags)]
            if not isinstance(obj, Path):
                print(f"{v:{width}} {flags:{fwidth}}  {obj}")
                continue
            fns = objects_functions(obj)
            names = list(wanted) if wanted else list(fns)
            res = []
            for name in names:
                addr = wanted.get(name)
                if addr is None:
                    m = re.fullmatch(r"func_([0-9A-Fa-f]{8})", name)
                    addr = int(m.group(1), 16) if m else syms.get(name)
                if name not in fns:
                    res.append(f"{name}: missing")
                    continue
                if addr is None:
                    res.append(f"{name}: no address")
                    continue
                words, masks = fns[name]
                bad, orig = compare(words, masks, addr, rom)
                ext = sizes.get(addr)
                size_ok = ext is None or ext == 4 * len(words)
                tag = f"{len(bad)}/{len(words)}" + ("" if size_ok else f" size {4 * len(words):#x}!={ext:#x}")
                res.append(f"{name}: {tag}")
                if args.v and (bad or not size_ok) and name not in shown:
                    print(f"--- {v} {flags} {name}")
                    if not size_ok and ext:
                        o = list(struct.unpack(f"<{ext // 4}I", rom[addr - VRAM:addr - VRAM + ext]))
                        show(words, o, addr, set(bad))
                    else:
                        show(words, orig, addr, set(bad))
                    shown.add(name)
            print(f"{v:{width}} {flags:{fwidth}}  " + "  ".join(res))
    if not args.keep:
        shutil.rmtree(work, ignore_errors=True)


if __name__ == "__main__":
    main()
