#!/usr/bin/env python3
"""Wraps the rebuilt flat image in an ELF laid out the way Metrowerks' mwldps2 wrote SLUS_209.98.

    mkelf.py IMAGE OUT

The original ELF is small around the image: the 0x34-byte header, two program headers (the image, and an empty
segment at the end of .bss), the image at file offset 0x80, then .shstrtab, .comment, .reginfo and eight section
headers. The section names of the two PROGBITS sections are empty and .strtab / .symtab are empty (the symbols were
stripped). Everything here is a constant of the link or derives from the image size; nothing comes from the disc.
"""

import struct
import sys

VRAM = 0x00100000
ENTRY = 0x00100008          # _start
BSS_END = 0x005D0100        # end of .bss (the startup code clears up to here)
GP = 0x00477CF0
E_FLAGS = 0x20924000        # noreorder, R5900, EABI64, MIPS III (no PIC bit)
IMAGE_OFFSET = 0x80

# mwldps2's .comment (every mwldps2 release of the 2.3 to 3.0.1 line writes the same text).
COMMENT = b"MW MIPS C Compiler (2.4.1.01)\0PlayStation2\0"
# .reginfo: ri_gprmask, ri_cprmask[4], ri_gp_value.
REGINFO = struct.pack("<6I", 0xF7FFFFFE, 0, 0xFFFFFFFF, 0, 0, GP)
SHSTRTAB = b"\0.shstrtab\0.strtab\0.symtab\0.comment\0.reginfo\0"

SHT_PROGBITS, SHT_SYMTAB, SHT_STRTAB, SHT_MIPS_REGINFO = 1, 2, 3, 0x70000006


def build(image: bytes) -> bytes:
    size = len(image)
    tail = IMAGE_OFFSET + size                     # .shstrtab, then the empty second segment's offset
    comment_off = tail + len(SHSTRTAB)
    reginfo_off = comment_off + len(COMMENT)
    shoff = reginfo_off + len(REGINFO)

    ehdr = b"\x7fELF" + bytes([1, 1, 1]) + bytes(9)
    ehdr += struct.pack("<HHIIIIIHHHHHH", 2, 8, 1, ENTRY, 0x34, shoff, E_FLAGS, 0x34, 0x20, 2, 0x28, 8, 1)
    phdrs = struct.pack("<8I", 1, IMAGE_OFFSET, VRAM, VRAM, size, BSS_END - VRAM, 7, 0x80)
    phdrs += struct.pack("<8I", 1, tail, BSS_END, BSS_END, 0, 0, 6, 0x10)
    head = (ehdr + phdrs).ljust(IMAGE_OFFSET, b"\0")

    def sh(name, typ, flags, addr, off, sz, link, info, align, entsize):
        return struct.pack("<10I", name, typ, flags, addr, off, sz, link, info, align, entsize)

    names = {n: SHSTRTAB.index(n.encode() + b"\0") for n in (".shstrtab", ".strtab", ".symtab", ".comment",
                                                            ".reginfo")}
    shdrs = bytes(40)
    shdrs += sh(names[".shstrtab"], SHT_STRTAB, 0, 0, tail, len(SHSTRTAB), 0, 0, 1, 1)
    shdrs += sh(names[".strtab"], SHT_STRTAB, 0, 0, 0, 0, 0, 0, 1, 1)
    shdrs += sh(names[".symtab"], SHT_SYMTAB, 0, 0, 0, 0, 2, 0, 1, 16)
    shdrs += sh(0, SHT_PROGBITS, 7, VRAM, IMAGE_OFFSET, size, 0, 0, 0x80, 1)
    shdrs += sh(0, SHT_PROGBITS, 3, BSS_END, tail, 0, 0, 0, 0x10, 1)
    shdrs += sh(names[".comment"], SHT_PROGBITS, 0, 0, comment_off, len(COMMENT), 0, 0, 1, 1)
    shdrs += sh(names[".reginfo"], SHT_MIPS_REGINFO, 0, 0, reginfo_off, len(REGINFO), 0, 0, 4, 1)
    return head + image + SHSTRTAB + COMMENT + REGINFO + shdrs


def main():
    if len(sys.argv) != 3:
        sys.exit(__doc__)
    with open(sys.argv[1], "rb") as f:
        image = f.read()
    with open(sys.argv[2], "wb") as f:
        f.write(build(image))


if __name__ == "__main__":
    main()
