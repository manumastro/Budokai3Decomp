#!/usr/bin/env python3
"""Analysis half of the library port: pairs a compiled C source's functions with the executable's, address by address.

Used by scripts/lib_port.py. For a source file compiled with an ee-gcc build it finds, for every function, where the
executable has the same code (relocated words masked) and what each relocated word of the function refers to in the
executable: a function, a data symbol, a string. From that it builds the declarations the C file needs so that the
linker resolves the same addresses (`extern T name __asm__("D_xxxxxxxx")`).
"""
import re
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import gccmatch as g  # noqa: E402
from elftools.elf.descriptions import describe_reloc_type  # noqa: E402
from elftools.elf.elffile import ELFFile  # noqa: E402
from elftools.elf.relocation import RelocationSection  # noqa: E402

ROOT = g.ROOT
VRAM = g.VRAM


def s16(x):
    x &= 0xFFFF
    return x - 0x10000 if x & 0x8000 else x


class Obj:
    """A compiled object: functions with their relocations, local symbols with their sections."""

    def __init__(self, path):
        self.path = Path(path)
        with open(path, "rb") as f:
            elf = ELFFile(f)
            self.secs = {}
            self.sec_by_idx = {}
            for i, s in enumerate(elf.iter_sections()):
                self.secs[s.name] = (i, s["sh_size"])
                self.sec_by_idx[i] = s.name
            self.text_idx, _ = self.secs.get(".text", (None, 0))
            ts = elf.get_section_by_name(".text")
            self.text = ts.data() if ts is not None else b""
            symtab = elf.get_section_by_name(".symtab")
            self.syms = []  # (name, value, size, shndx, type, bind)
            for s in symtab.iter_symbols():
                self.syms.append((s.name, s["st_value"], s["st_size"], s["st_shndx"], s["st_info"]["type"],
                                  s["st_info"]["bind"]))
            self.relocs = []  # (offset, type, sym index)
            for s in elf.iter_sections():
                if isinstance(s, RelocationSection) and s["sh_info"] == self.text_idx:
                    for r in s.iter_relocations():
                        self.relocs.append((r["r_offset"], describe_reloc_type(r["r_info_type"], elf),
                                            r["r_info_sym"]))
            self.relocs.sort()
            # data (non-text) symbols by section, for resolving section-relative relocations
            self.data = {}
            for name, val, size, shndx, typ, bind in self.syms:
                if isinstance(shndx, int) and shndx != self.text_idx and typ in ("STT_OBJECT", "STT_NOTYPE") and name:
                    self.data.setdefault(shndx, []).append((val, size, name))
            for v in self.data.values():
                v.sort()
            self.funcs = []  # (name, start, size)
            for name, val, size, shndx, typ, bind in self.syms:
                if typ == "STT_FUNC" and shndx == self.text_idx:
                    self.funcs.append((val, size, name))
            self.funcs.sort()
            self.func_bind = {n: b for n, v, sz, sh, t, b in self.syms if t == "STT_FUNC"}

    def function_words(self):
        out = {}
        for k, (start, size, name) in enumerate(self.funcs):
            if size == 0:
                size = (self.funcs[k + 1][0] if k + 1 < len(self.funcs) else len(self.text)) - start
                if size % 8 == 0 and size >= 8 and self.text[start + size - 4:start + size] == b"\0\0\0\0":
                    size -= 4
            out[name] = (start, size)
        return out

    def word(self, off):
        return struct.unpack_from("<I", self.text, off)[0]

    def reloc_targets(self, start, size):
        """[(word index, kind, ('sym', name, addend) | ('loc', section, offset))] for one function.

        HI16 relocations pair with the next LO16 of the same symbol to recover the full addend."""
        rel = [r for r in self.relocs if start <= r[0] < start + size]
        out = []
        for k, (off, typ, si) in enumerate(rel):
            name, val, ssize, shndx, styp, bind = self.syms[si]
            w = self.word(off)
            if typ == "R_MIPS_26":
                add = (w & 0x3FFFFFF) << 2
            elif typ == "R_MIPS_LO16":
                add = s16(w)
            elif typ == "R_MIPS_HI16":
                add = None
                for off2, typ2, si2 in rel[k + 1:]:
                    if typ2 == "R_MIPS_LO16" and si2 == si:
                        add = (w & 0xFFFF) * 65536 + s16(self.word(off2))
                        break
                if add is None:
                    out.append(((off - start) // 4, typ, ("bad", name, 0)))
                    continue
            else:
                out.append(((off - start) // 4, typ, ("bad", name, 0)))
                continue
            if styp == "STT_SECTION":
                out.append(((off - start) // 4, typ, ("loc", self.sec_by_idx.get(shndx, "?"), add)))
            elif isinstance(shndx, int) and shndx != 0 and shndx < 0xFF00:
                out.append(((off - start) // 4, typ, ("loc", self.sec_by_idx.get(shndx, "?"), val + add)))
            else:
                out.append(((off - start) // 4, typ, ("sym", name, add)))
        return out

    def locate(self, section, offset):
        """(name, delta) of the local symbol that covers (section, offset)."""
        idx = self.secs.get(section, (None,))[0]
        best = None
        for val, size, name in self.data.get(idx, []):
            if val <= offset and (best is None or val >= best[0]) and not name.startswith(".L"):
                if size == 0 or offset < val + size or True:
                    best = (val, size, name)
        if best is None:
            return None
        return best[2], offset - best[0]


# ---- the executable's side -------------------------------------------------------------------------------------

ASM_LINE = re.compile(r"\s+/\* \w+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(\S+)\s*(.*)")
SYM_REF = re.compile(r"%(hi|lo)\((\w+)(?: \+ (0x[0-9A-Fa-f]+))?\)")


class Exe:
    """The executable: its words, the symbols of the symbol files, every function of the assembly split. The split's
    assembly shrinks as functions move into C, so the index of lines and sizes is cached from the first run
    (build/exe_index.pkl; delete it after a fresh split of an untouched yaml)."""

    def __init__(self):
        import pickle
        self.rom = g.ROM.read_bytes()
        self.syms = g.symbol_addresses()
        self.addr2name = {}
        for n, a in self.syms.items():
            self.addr2name.setdefault(a, n)
        cache = ROOT / "build" / "exe_index.pkl"
        if cache.exists():
            self.sizes, self.lines = pickle.loads(cache.read_bytes())
            return
        self.sizes = g.function_sizes()
        self.lines = {}
        for p in (ROOT / "asm").rglob("*.s"):
            rel = p.relative_to(ROOT / "asm")
            if rel.parts[0] in ("data", "rodata", "sdata"):
                continue
            for line in p.read_text().splitlines():
                m = ASM_LINE.match(line)
                if m:
                    self.lines[int(m.group(1), 16)] = (m.group(2), m.group(3))
        cache.write_bytes(pickle.dumps((self.sizes, self.lines)))

    def word(self, addr):
        return struct.unpack_from("<I", self.rom, addr - VRAM)[0]

    def target_of(self, addr):
        """The address a relocated instruction at addr refers to (jal target, %hi/%lo symbol + offset), or None."""
        mnem, ops = self.lines.get(addr, (None, ""))
        if mnem is None:
            return None
        if mnem in ("jal", "j"):
            return (self.word(addr) & 0x3FFFFFF) << 2 | 0x00000000
        m = SYM_REF.search(ops)
        if m:
            base = self.syms.get(m.group(2))
            if base is None:
                mm = re.fullmatch(r"[A-Za-z_]*_?([0-9A-Fa-f]{8})", m.group(2))
                base = int(mm.group(1), 16) if mm else None
            if base is None:
                return None
            return base + (int(m.group(3), 16) if m.group(3) else 0)
        return None


# ---- pairing ------------------------------------------------------------------------------------------------------

def section_bytes(path, section):
    with open(path, "rb") as f:
        s = ELFFile(f).get_section_by_name(section)
        return s.data() if s is not None else b""


class Analysis:
    """Match every function of a compiled source against the executable and bind its symbols to addresses."""

    def __init__(self, obj, exe, lo=0x100218, hi=0x1A1E80):
        self.obj, self.exe = obj, exe
        self.funcs = obj.function_words()  # name -> (start, size)
        self.words = {}
        self.masks = {}
        self.cands = {}
        nw = (hi - lo) // 4
        self.rom_words = struct.unpack(f"<{nw}I", exe.rom[lo - VRAM:hi - VRAM])
        self.lo = lo
        idx = {}
        for i, w in enumerate(self.rom_words):
            idx.setdefault(w, []).append(i)
        for name, (start, size) in self.funcs.items():
            w = list(struct.unpack_from(f"<{size // 4}I", obj.text, start))
            masks = {}
            for off, typ, si in obj.relocs:
                if start <= off < start + size:
                    masks[(off - start) // 4] = masks.get((off - start) // 4, 0) | g.RELOC_MASK.get(typ, 0xFFFFFFFF)
            self.words[name], self.masks[name] = w, masks
            k = next((i for i in range(len(w)) if not masks.get(i, 0)), None)
            hits = []
            if k is not None and len(w) >= 2:
                for p in idx.get(w[k], []):
                    s = p - k
                    if s < 0 or s + len(w) > nw:
                        continue
                    if all(((w[j] ^ self.rom_words[s + j]) & ~masks.get(j, 0) & 0xFFFFFFFF) == 0 for j in range(len(w))):
                        hits.append(lo + 4 * s)
            self.cands[name] = hits

    def resolve(self):
        """address per function name: unique hits, then the candidate that keeps the source order."""
        order = sorted(self.funcs, key=lambda n: self.funcs[n][0])
        addr = {n: self.cands[n][0] for n in order if len(self.cands[n]) == 1}
        changed = True
        while changed:
            changed = False
            for i, n in enumerate(order):
                if n in addr or not self.cands[n]:
                    continue
                prev = max((addr[m] for m in order[:i] if m in addr), default=0)
                nxt = min((addr[m] for m in order[i + 1:] if m in addr), default=1 << 40)
                ok = [c for c in self.cands[n] if prev < c < nxt]
                if len(ok) == 1 and (prev or nxt != 1 << 40):
                    addr[n] = ok[0]
                    changed = True
        return addr

    def exe_string_at(self, t):
        """True when the executable holds a printable NUL-terminated string at t (loose_strings: a literal of the
        source whose text differs, e.g. another version's message, is bound to the executable's own string)."""
        rom = self.exe.rom[t - VRAM:t - VRAM + 512]
        end = rom.find(b"\0")
        return end > 0 and all(32 <= c < 127 or c in (9, 10, 13) for c in rom[:end])

    def bind(self, addr):
        """Walk the relocations of every matched function. Returns (bindings, per-function status).

        bindings: {('sym', name): address, ('data', name): address, ('lit', section, offset): address,
                   ('func', name): address}; status: name -> None or the reason it cannot be ported."""
        b = {}
        status = {}
        for name, a in addr.items():
            start, size = self.funcs[name]
            why = None
            rts = list(self.obj.reloc_targets(start, size))
            for j, (idx, typ, tgt) in enumerate(rts):
                t = self.exe.target_of(a + 4 * idx)
                if t is None and typ in ("R_MIPS_HI16", "R_MIPS_LO16"):
                    # the split left a lui whose %lo it could not pair (raw `lui $a1, (0x470000 >> 16)`): pair it
                    # here, with the object's own HI16/LO16 order, and read both halves from the executable
                    if typ == "R_MIPS_HI16":
                        pr = next((r for r in rts[j + 1:] if r[1] == "R_MIPS_LO16" and r[2] == tgt), None)
                        hi_i, lo_i = idx, (pr[0] if pr else None)
                    else:
                        pr = next((r for r in reversed(rts[:j]) if r[1] == "R_MIPS_HI16" and r[2] == tgt), None)
                        hi_i, lo_i = (pr[0] if pr else None), idx
                    if hi_i is not None and lo_i is not None:
                        lo16 = self.exe.word(a + 4 * lo_i) & 0xFFFF
                        t = ((self.exe.word(a + 4 * hi_i) & 0xFFFF) << 16) + (lo16 - 0x10000 if lo16 & 0x8000 else lo16)
                if t is None:
                    why = f"no symbol at {a + 4 * idx:#x}"
                    break
                kind = tgt[0]
                if kind == "bad":
                    why = f"reloc {typ} against {tgt[1]}"
                    break
                if kind == "sym":
                    key, val = ("sym", tgt[1]), t - tgt[2]
                else:
                    sec, off = tgt[1], tgt[2]
                    if sec == ".text":
                        key, val = None, None
                        # a call inside the object: the callee is another function of it
                        callee = next((n for n, (s, z) in self.funcs.items() if s == off), None)
                        if callee is None:
                            why = f"call into the middle of .text ({off:#x})"
                            break
                        key, val = ("func", callee), t
                    else:
                        loc = self.obj.locate(sec, off)
                        if loc is not None and not loc[0].startswith("$"):
                            key, val = ("data", loc[0]), t - loc[1]
                        else:
                            data = section_bytes(self.obj.path, sec)
                            end = data.find(b"\0", off)
                            lit = data[off:end] if end > off else None
                            if lit is None or not all(32 <= c < 127 or c in (9, 10, 13) for c in lit):
                                # a constant (jump table, float, table): bound per reference by gcc_rebind.py
                                self.rebind = getattr(self, "rebind", set()) | {name}
                                continue
                            rom = self.exe.rom[t - VRAM:t - VRAM + len(lit) + 1]
                            if rom != lit + b"\0" and not (getattr(self, "loose_strings", False)
                                                           and self.exe_string_at(t)):
                                # another text at that address: bound per reference by gcc_rebind.py
                                self.rebind = getattr(self, "rebind", set()) | {name}
                                continue
                            key, val = ("lit", sec, off), t
                            if key in b and b[key] != val:
                                # the object merged two literals the executable keeps apart: per reference too
                                self.rebind = getattr(self, "rebind", set()) | {name}
                                continue
                if key in b and b[key] != val and key[0] == "data":
                    # two addresses for one static object (the executable lays it out otherwise): the function
                    # keeps the object as a static of its own and gcc_rebind.py binds each reference
                    self.rebind = getattr(self, "rebind", set()) | {name}
                    self.rebind_data = getattr(self, "rebind_data", set()) | {key[1]}
                    continue
                if key in b and b[key] != val:
                    why = f"{key} bound to {b[key]:#x} and {val:#x}"
                    break
                b[key] = val
            status[name] = why
        return b, status
