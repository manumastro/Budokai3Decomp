/* Draft (not built): func_0015D648 at 0x0015D648, size 0x1C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015D648.s */

s32 func_0015CCD8(s32);                     /* extern */

void func_0015D648(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0xC) = arg1;
    func_0015CCD8(0);
}
