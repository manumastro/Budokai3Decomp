#!/usr/bin/env python3
"""Fixes the section of jump-table labels in an object written by mwccgap.

    fix_jlabels.py build/src/battle/btl_cmd.o      (configure.py's cc rule runs it after mwccgap)

A function kept as INCLUDE_ASM that holds a switch has its jump-table targets as global labels (`jlabel .L...`),
since the table in .rodata (another object) points at them. When the function's own branches also reach such a
label, mwccgap copies the label into the object with the section index it had in the assembled function (the
assembler's .text, index 1), not the index of the function's section in the compiled object; the linker then puts
the label in the wrong place ("relocation truncated to fit: R_MIPS_PC16"). The label's value (its offset in the
function) is right. This script sets the section of each such label (a defined GLOBAL NOTYPE symbol named `.L...`)
to the section that the .rel.text records referring to it apply to.
"""

import struct
import sys
from pathlib import Path

SHT_SYMTAB = 2
SHT_REL = 9


def main():
    if len(sys.argv) != 2:
        sys.exit(__doc__)
    path = Path(sys.argv[1])
    data = bytearray(path.read_bytes())
    shoff, = struct.unpack_from("<I", data, 0x20)
    shentsize, shnum, shstrndx = struct.unpack_from("<HHH", data, 0x2E)
    sections = [struct.unpack_from("<IIIIIIIIII", data, shoff + i * shentsize) for i in range(shnum)]
    symtab = next((i for i, s in enumerate(sections) if s[1] == SHT_SYMTAB), None)
    if symtab is None:
        return
    _, _, _, _, sym_off, sym_size, strtab, _, _, sym_ent = sections[symtab]
    str_off = sections[strtab][4]

    def sym_name(index):
        name_off, = struct.unpack_from("<I", data, sym_off + index * sym_ent)
        end = data.index(0, str_off + name_off)
        return data[str_off + name_off:end].decode()

    # Which text section refers to each symbol, through the .rel sections of text sections.
    target = {}
    for s in sections:
        if s[1] != SHT_REL or s[6] != symtab:
            continue
        applies_to = s[7]
        if sections[applies_to][1] != 1 or not sections[applies_to][2] & 0x4:  # PROGBITS, executable
            continue
        for off in range(s[4], s[4] + s[5], 8):
            _, info = struct.unpack_from("<II", data, off)
            target.setdefault(info >> 8, set()).add(applies_to)

    fixed = 0
    for index in range(sym_size // sym_ent):
        off = sym_off + index * sym_ent
        _, _, _, info, _, shndx = struct.unpack_from("<IIIBBH", data, off)
        bind, typ = info >> 4, info & 0xF
        if bind != 1 or typ != 0 or shndx == 0 or shndx >= 0xFF00:
            continue
        if not sym_name(index).startswith(".L") or index not in target:
            continue
        sec = target[index]
        if len(sec) != 1:
            sys.exit(f"{path}: {sym_name(index)} is referred to from several text sections")
        sec = sec.pop()
        if shndx != sec:
            struct.pack_into("<H", data, off + 14, sec)
            fixed += 1
    if fixed:
        path.write_bytes(bytes(data))


if __name__ == "__main__":
    main()
