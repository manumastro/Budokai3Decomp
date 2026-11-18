/* Draft (not built): func_0015ED18 at 0x0015ED18, size 0x50, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: pile error: d_0015ED18.c:8: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015ED18.s */

s32 ADXT_GetTime(void *, s32 *);                /* extern */

s32 func_0015ED18(void) {
    s32 sp4;

    ADXT_GetTime(sp, &sp4);
    return 0x42C80000;
}
