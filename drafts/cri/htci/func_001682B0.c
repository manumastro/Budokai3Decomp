/* Draft (not built): func_001682B0 at 0x001682B0, size 0x1C, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/htci/func_001682B0.s */

s32 memset(s32, s32);                   /* extern */

void func_001682B0(void) {
    memset(0, 0x30);
}
