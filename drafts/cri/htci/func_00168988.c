/* Draft (not built): func_00168988 at 0x00168988, size 0x30, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/htci/func_00168988.s */

s32 func_00168900();                                /* extern */

s64 func_00168988(void) {
    return (s64) ((func_00168900() & (0xFFFF0000U >> 0x20)) << 0x20) >> 0x20;
}
