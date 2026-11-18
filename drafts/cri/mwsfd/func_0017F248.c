/* Draft (not built): func_0017F248 at 0x0017F248, size 0xB4, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0017F248.c:23: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_0017F248.s */

s32 func_0017EF98(void *, s32 *, s32 *);        /* extern */
s32 func_0017F0D0(s32, s32 *, s32 *);           /* extern */
s32 func_0017F220(s32, s32 *, s32 *);       /* extern */
s32 func_0017F240();                                /* extern */

s32 func_0017F248(s32 arg0) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 temp_s0;

    func_0017EF98(sp, &sp4, &sp8);
    func_0017F0D0(arg0, &sp18, &sp1C);
    temp_s0 = func_0017F220(arg0, &sp20, &sp24);
    return sp4 + sp8 + spC + 0x40 + temp_s0 + (sp0 + sp10) + (sp18 + 0x40 + (sp1C + sp14)) + func_0017F240() + 0x800;
}
