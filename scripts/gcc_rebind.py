#!/usr/bin/env python3
"""Binds a library function's own .rodata/.data/.bss to the executable's copy of that data, at the assembly level.

    gcc_rebind.py IN.s OUT.s [as flags ...]       (the gcc rule of configure.py runs it on ee-gcc's output)

A library C file links its .rodata/.data/.bss in front of the executable's data segments (rodata/rodata_a etc. hold
all the libraries' data as it is in the executable), so any data a ported function defines itself shifts the whole
link: a switch's jump table, a `static const` table, a `$LC` double constant, a local `static` variable. The
function is marked in its C file with

    REBIND_DATA(func_0015ABC0, 0x0015ABC0);      (include/common.h: a top-level asm comment `# rebind NAME ADDR`)

and this script, run on ee-gcc's assembly output before it is assembled, does for each marked function:

1. assembles the file once as it is and lists the function's relocations against its object's own data sections
   (HI16/LO16 against a section symbol or a local data label);
2. reads the executable's words at the same offsets of the function (ADDR + offset): each lui/lo pair gives the
   address the original instruction used;
3. pairs those relocations, in order, with the lines of the function that name a local data label (`$L10`,
   `$LC0`, `tbl.3`, with any `+k`), and rewrites each label as that absolute address (gas then emits the same
   lui/addiu/lw words, with no relocation);
4. drops the definitions of the labels it rewrote (the jump table block, the static's data) and, for a jump table,
   defines the `.L<target>` code labels the executable's own table (rodata_a) names, as absolute globals.

Anything that does not pair one to one (a count or a type that differs) leaves that function untouched: the
build's CHECK, or func_insert.py's per-function check, then refuses it as before.
"""
import re
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ROM = ROOT / "disc" / "SLUS_209.98.rom"
VRAM = 0x100000
BSS_END = 0x5D0100  # the startup code clears .sbss + .bss up to here
AS = ROOT / "tools" / "binutils" / "mips-ps2-decompals-as"
AS_FLAGS = ["-EL", "-march=r5900", "-mabi=o64", "-no-pad-sections", "-mno-pdr", "-G0"]
PRELUDE = ROOT / "include" / "gcc_prelude.inc"
MARK = re.compile(r"^\s*#\s*rebind\s+(\S+)\s+(0x[0-9A-Fa-f]+)\s*$", re.M)
SECTION = re.compile(r"^\s*(\.text|\.rdata|\.data|\.bss|\.sdata|\.sbss|\.rodata|\.section\s+([^,\s]+).*)\s*$")
LABEL = re.compile(r"^([$\w.]+):")


def _sext16(v):
    return v - 0x10000 if v & 0x8000 else v


def section_of(line, cur):
    m = SECTION.match(line)
    if not m:
        return cur
    s = m.group(1)
    if s.startswith(".section"):
        s = m.group(2)
    return s


def scan(lines):
    """(labels defined in data sections {label: section}, function bodies {name: (first, last) line index})."""
    data_labels = {}
    funcs = {}
    cur = ".text"
    start = None
    name = None
    for i, ln in enumerate(lines):
        cur = section_of(ln, cur)
        m = LABEL.match(ln)
        if m and cur != ".text":
            data_labels[m.group(1)] = cur
        mm = re.match(r"^\s*\.lcomm\s+([$\w.]+)\s*,", ln)
        if mm:
            data_labels[mm.group(1)] = ".bss"
        mm = re.match(r"^\s*\.ent\s+(\S+)", ln)
        if mm:
            name, start = mm.group(1), i
        mm = re.match(r"^\s*\.end\s+(\S+)", ln)
        if mm and name == mm.group(1):
            funcs[name] = (start, i)
            name = None
    return data_labels, funcs


def ref_events(lines, first, last, data_labels):
    """[(line index, label, kinds)] of the function's instruction lines naming a local data label, in order; kinds
    is the relocations the line makes ("HL" a macro with both halves, "H" %hi, "L" %lo)."""
    out = []
    cur = ".text"
    names = sorted(data_labels, key=len, reverse=True)
    # with no data label at all the li.d constants (gas's own literals) are still events
    pat = re.compile(r"(%hi|%lo)?\(?(" + "|".join(re.escape(n) for n in names) + r")(?![\w.$])") if names else None
    for i in range(first, last + 1):
        ln = lines[i]
        cur = section_of(ln, cur)
        if cur != ".text":
            continue
        code = ln.split("#", 1)[0]
        m = re.match(r"^\s+li\.d\s+\$(f?)\d+\s*,\s*(\S+)", code)
        if m:
            # gas puts the double in the object's .rodata (lui + ld / lwc1 x2), except into a 64-bit general
            # register when one lui makes it (low word 0, high word's low half 0: 1.0, 0.5, 2^32...): then it builds
            # it with lui/dsll32, no relocation
            try:
                low, high = struct.unpack("<II", struct.pack("<d", float(m.group(2))))
            except ValueError:
                low, high = 1, 1
            if m.group(1) or low or high & 0xFFFF:
                out.append((i, "<li.d>", "HL"))
            continue
        if pat is None or not re.match(r"^\s+[a-z]", code) or code.strip().startswith("."):
            continue
        ms = list(pat.finditer(code))
        if not ms:
            continue
        m = ms[0]
        kind = {"%hi": "H", "%lo": "L"}.get(m.group(1), "HL")
        out.append((i, m.group(2), kind))
    return out


def relocs_of(obj, name):
    """(function start, size, [(offset in function, type, section name, symbol name)]) of the function's relocations
    against data (not .text)."""
    from elftools.elf.elffile import ELFFile
    from elftools.elf.relocation import RelocationSection
    from elftools.elf.descriptions import describe_reloc_type
    with open(obj, "rb") as f:
        elf = ELFFile(f)
        secs = list(elf.iter_sections())
        text_idx = next(i for i, s in enumerate(secs) if s.name == ".text")
        symtab = elf.get_section_by_name(".symtab")
        fn = next((s for s in symtab.iter_symbols() if s.name == name and s["st_shndx"] == text_idx), None)
        if fn is None:
            return None
        start, size = fn["st_value"], fn["st_size"]
        out = []
        for s in secs:
            if isinstance(s, RelocationSection) and s["sh_info"] == text_idx:
                for r in s.iter_relocations():
                    off = r["r_offset"]
                    if not start <= off < start + size:
                        continue
                    sym = symtab.get_symbol(r["r_info_sym"])
                    shn = sym["st_shndx"]
                    if not isinstance(shn, int) or shn == text_idx:
                        continue  # undefined (a global of the executable) or .text
                    if sym["st_info"]["bind"] != "STB_LOCAL":
                        continue
                    t = describe_reloc_type(r["r_info_type"], elf)
                    out.append((off - start, t, secs[shn].name, sym.name))
        return start, size, out


def rom_word(rom, addr):
    return struct.unpack_from("<I", rom, addr - VRAM)[0]


def assemble(src, obj, extra):
    r = subprocess.run([str(AS), *AS_FLAGS, *extra, str(PRELUDE), str(src), "-o", str(obj)], capture_output=True,
                       text=True, cwd=ROOT)
    return r.returncode == 0, r.stderr


def strip_stubs(text):
    """Drops the .b3stub blocks: the empty weak definitions func_insert.py writes so that ee-gcc compiles calls to a
    callee as when its origin defined it earlier in the file. They only matter inside the compiler; out of the
    assembly they cannot clash with the real definition (or with another item's stub of the same callee)."""
    if ".b3stub" not in text:
        return text
    out = []
    inside = False
    for ln in text.split("\n"):
        s = ln.strip()
        if s.startswith(".section") and ".b3stub" in s:
            inside = True
            continue
        if inside and (s in (".text", ".data", ".rdata", ".bss", ".previous") or s.startswith(".section")):
            inside = False
        if not inside:
            out.append(ln)
    return "\n".join(out)


def orphans(lines, drop):
    """Local data labels ($LCn) referenced only from inside the definitions of dropped data labels."""
    refs = {}
    cur = ".text"
    owner = None
    for ln in lines:
        cur = section_of(ln, cur)
        m = LABEL.match(ln)
        if cur != ".text" and m:
            owner = m.group(1)
            continue
        code = ln.split("#", 1)[0]
        if re.match(r"^\s*\.(type|size)\b", code):
            continue
        for r in re.findall(r"\$LC\d+(?![\w.$])", code):
            refs.setdefault(r, set()).add(owner if cur != ".text" else None)
    out = set()
    changed = True
    while changed:
        changed = False
        for lab, owners in refs.items():
            if lab in drop or lab in out:
                continue
            if owners and all(o is not None and o != lab and (o in drop or o in out) for o in owners):
                out.add(lab)
                changed = True
    return out


NOSWAP = re.compile(r"^\s*#\s*noswap\s+(\S+)\s*$", re.M)
BRANCH = re.compile(r"^\s+(j|jal|jr|jalr|b|bal|b(?!reak\b)[a-z0-9]+)\s")


def no_swap(text):
    """Functions marked `# noswap NAME` (func_insert.py, for a function whose original object was assembled with gas
    -O1, as libc's: gas fills no delay slot there): every branch or jump ee-gcc left to gas (outside its own
    `.set noreorder` blocks) is written with an explicit nop in its delay slot, which is what gas -O1 emits. The rest
    of the file keeps gas's default delay-slot filling."""
    names = set(NOSWAP.findall(text))
    if not names:
        return text
    out = []
    cur = None
    noreorder = False
    for ln in text.split("\n"):
        code = ln.split("#", 1)[0]
        m = re.match(r"^\s*\.ent\s+(\S+)", code)
        if m:
            cur = m.group(1) if m.group(1) in names else None
        elif re.match(r"^\s*\.end\s+", code):
            cur = None
        if re.fullmatch(r"\s*\.set\s+noreorder\s*", code):
            noreorder = True
        elif re.fullmatch(r"\s*\.set\s+reorder\s*", code):
            noreorder = False
        if cur and not noreorder and BRANCH.match(code):
            out += ["\t.set\tnoreorder", ln, "\tnop", "\t.set\treorder"]
            continue
        out.append(ln)
    return "\n".join(out)


FPHAZARD = re.compile(r"^\s*#\s*fphazard\s+(\S+)\s*$", re.M)


def fp_hazard(text):
    """Functions marked `# fphazard NAME` (a Sony SDK object whose assembler kept the FPU compare hazard): ee-gcc
    writes `#nop` after a `c.cond.fmt` that a bc1t/bc1f reads; the SDK's gas emitted that nop, ours (r5900, with
    cop interlocks) does not, so it is written out (_sceSnprintf's `%f` zero test, func_0010C048)."""
    names = set(FPHAZARD.findall(text))
    if not names:
        return text
    out = []
    cur = None
    prev_cmp = False
    for ln in text.split("\n"):
        code = ln.split("#", 1)[0]
        m = re.match(r"^\s*\.ent\s+(\S+)", code)
        if m:
            cur = m.group(1) if m.group(1) in names else None
        elif re.match(r"^\s*\.end\s+", code):
            cur = None
        if cur and prev_cmp and ln.strip() == "#nop":
            out.append("\tnop")
            prev_cmp = False
            continue
        if code.strip():
            prev_cmp = bool(re.match(r"^\s*c\.[a-z]+\.[sd]\s", code))
        out.append(ln)
    return "\n".join(out)


def rebind(text, extra=(), log=sys.stderr):
    text = fp_hazard(no_swap(strip_stubs(text)))
    marks = MARK.findall(text)
    if not marks:
        return text
    lines = text.split("\n")
    rom = ROM.read_bytes()
    with tempfile.TemporaryDirectory(dir=ROOT / "build") as td:
        src, obj = Path(td) / "p1.s", Path(td) / "p1.o"
        src.write_text(text)
        ok, err = assemble(src, obj, extra)
        if not ok:
            print("gcc_rebind: pass 1 does not assemble:", err.strip().splitlines()[-1:], file=log)
            return text
        data_labels, funcs = scan(lines)
        drop = set()
        jlabels = {}
        for name, addr in marks:
            addr = int(addr, 16)
            if name not in funcs:
                print(f"gcc_rebind: {name}: no function", file=log)
                continue
            got = relocs_of(obj, name)
            if got is None:
                print(f"gcc_rebind: {name}: not in the object", file=log)
                continue
            _, _, rel = got
            rel = sorted(rel)  # text order (gas's table puts each HI16 next to its LO16 instead)
            ev = ref_events(lines, *funcs[name], data_labels)
            # 1. each event takes its relocations in text order
            k = 0
            bad = None
            evr = []  # (line, label, kind, hi offset or None, lo offset or None)
            for (i, label, kind) in ev:
                need = ["R_MIPS_HI16", "R_MIPS_LO16"] if kind == "HL" else (
                    ["R_MIPS_HI16"] if kind == "H" else ["R_MIPS_LO16"])
                got_t = [r[1] for r in rel[k:k + len(need)]]
                if got_t != need:
                    bad = f"line {i + 1} ({label}) wants {need}, the object has {got_t}"
                    break
                offs = [r[0] for r in rel[k:k + len(need)]]
                evr.append((i, label, kind, offs[0] if kind != "L" else None, offs[-1] if kind != "H" else None))
                k += len(need)
            if bad is None and k != len(rel):
                bad = f"{len(rel) - k} relocations against data left unpaired"
            # 2. values: a %hi pairs with its own %lo (a macro line) or the next %lo line of the same label
            plan = []
            cur = {}
            for n_, (i, label, kind, hoff, loff) in enumerate(evr if bad is None else []):
                if kind == "H":
                    loff = next((e[4] for e in evr[n_ + 1:] if e[2] == "L" and e[1] == label), None)
                    if loff is None:
                        bad = f"{label}: a %hi with no %lo after it"
                        break
                if kind in ("HL", "H"):
                    if not (0 <= addr + max(hoff, loff) - VRAM < len(rom) - 4):
                        bad = f"{label}: offset {max(hoff, loff):#x} outside the executable"
                        break
                    target = ((rom_word(rom, addr + hoff) & 0xFFFF) << 16) + _sext16(rom_word(rom, addr + loff) & 0xFFFF)
                    # the operand's own +k: the label's address is the target minus it
                    km = re.search(re.escape(label) + r"\s*([+-]\s*\d+)", lines[i])
                    kk = int(km.group(1).replace(" ", "")) if km else 0
                    # one value per reference: the executable may hold two copies of what the object merged
                    cur[label] = target - kk
                elif label not in cur:
                    bad = f"{label}: a %lo with no %hi before it"
                    break
                if not (VRAM <= cur[label] < BSS_END):
                    bad = f"{label}: {cur[label]:#x} is not an address of the executable"
                    break
                plan.append((i, label, cur[label]))
            if bad:
                print(f"gcc_rebind: {name}: {bad}: left as it is", file=log)
                continue
            for i, label, base in plan:
                if label == "<li.d>":
                    m = re.match(r"^(\s+)li\.d\s+(\$f?\d+)\s*,", lines[i])
                    op = "l.d" if m.group(2).startswith("$f") else "ld"
                    # as gas expands li.d: the address's high half in $at (a plain `ld reg,ADDR` would use reg)
                    ind = m.group(1)
                    lines[i] = (f"{ind}.set\tpush\n{ind}.set\tnoat\n{ind}lui\t$1,%hi(0x{base:08X})\n"
                                f"{ind}{op}\t{m.group(2)},%lo(0x{base:08X})($1)\n{ind}.set\tpop")
                    continue
                lines[i] = re.sub(r"(?<![\w.$])" + re.escape(label) + r"(?![\w.$])", f"0x{base:08X}", lines[i])
                # `la` of an absolute address: gas would build it with lui/ori; with the symbol it was lui/addiu
                # (+ addu of the index register), which %hi/%lo give back (atan's &atanhi[id], func_0011E548)
                m = re.match(r"^(\s+)la\s+(\$\w+)\s*,\s*(0x[0-9A-Fa-f]+(?:\s*[+-]\s*\d+)?)\s*(?:\((\$\w+)\))?\s*$",
                             lines[i].split("#", 1)[0])
                if m:
                    ind, rd, a, rs = m.groups()
                    if rs:
                        lines[i] = (f"{ind}.set\tpush\n{ind}.set\tnoat\n{ind}lui\t$1,%hi({a})\n"
                                    f"{ind}addiu\t$1,$1,%lo({a})\n{ind}addu\t{rd},$1,{rs}\n{ind}.set\tpop")
                    else:
                        lines[i] = f"{ind}lui\t{rd},%hi({a})\n{ind}addiu\t{rd},{rd},%lo({a})"
                drop.add(label)
                if re.fullmatch(r"\$L\d+", label):
                    jlabels[label] = base
        # a marked function's own static constants (func_insert.py tags them `_xADDR`) that no code names any more:
        # ee-gcc folded their values into the instructions (li.d), so their definitions only add data
        tags = tuple(f"_x{int(a, 16):08X}" for _, a in marks)
        cur = ".text"
        used, own = set(), set()
        for ln in lines:
            cur = section_of(ln, cur)
            m = LABEL.match(ln)
            code = ln.split("#", 1)[0]
            if cur != ".text" and m and m.group(1).endswith(tags):
                own.add(m.group(1))
            elif not re.match(r"^\s*\.(type|size|globl|local)\b", code):
                used |= set(re.findall(r"[$\w.]+", code))
        drop |= own - used
        # data only the dropped data pointed at (the strings of a rebound table of string pointers) goes too
        if drop:
            drop |= orphans(lines, drop)
        # the rewritten labels' definitions go; a jump table's entries become the executable's .L labels
        defs = []
        if drop:
            out = []
            cur = ".text"
            skipping = None
            for ln in lines:
                cur = section_of(ln, cur)
                m = LABEL.match(ln)
                if cur != ".text" and m:
                    skipping = m.group(1) if m.group(1) in drop else None
                    if skipping:
                        n = 0
                        continue
                elif SECTION.match(ln):
                    skipping = None
                if skipping and cur != ".text":
                    w = re.match(r"^\s*\.(word|gpword)\s+(\S+)", ln)
                    if skipping in jlabels and w and VRAM <= jlabels[skipping] + 4 * n < VRAM + len(rom):
                        t = rom_word(rom, jlabels[skipping] + 4 * n)
                        defs.append(f".L{t:08X}")
                        n += 1
                    if re.match(r"^\s*\.(word|gpword|half|byte|ascii|asciz|space|float|double|dword|align)\b", ln):
                        continue
                    skipping = None
                mm = re.match(r"^\s*\.(lcomm|type|size)\s+([$\w.]+)\s*,", ln)
                if mm and mm.group(2) in drop:
                    continue
                out.append(ln)
            lines = out
            for d in sorted(set(defs)):
                lines.append(f"\t.globl {d}\n{d} = 0x{d[2:]}")
        return "\n".join(lines)


def main():
    src, dst = Path(sys.argv[1]), Path(sys.argv[2])
    extra = sys.argv[3:]
    text = src.read_text(errors="replace")
    new = rebind(text, extra)
    if not dst.exists() or dst.read_text(errors="replace") != new:
        dst.unlink(missing_ok=True)  # ee-gcc's container may have left a file of another owner
        dst.write_text(new)


if __name__ == "__main__":
    main()
