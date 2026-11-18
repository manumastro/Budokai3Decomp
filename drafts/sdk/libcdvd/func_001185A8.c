/* Draft (not built): func_001185A8 at 0x001185A8, size 0x80, segment sdk/libcdvd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_001185A8.c:22: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libcdvd/func_001185A8.s */

s32 DI();                                           /* extern */
s32 EI(s32 *, s32 *);                           /* extern */
s32 func_00118680();                            /* extern */
extern s32 D_003EDDC8;
extern s32 D_00478D08;
extern s32 D_00478D0C;
extern s32 D_00478D10;

s32 func_001185A8(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v0;

    if (D_003EDDC8 < 0) {
        func_00118680();
    }
    temp_v0 = DI();
    temp_s1 = D_00478D08;
    D_00478D10 = arg1;
    D_00478D08 = arg0;
    D_00478D0C = saved_reg_gp;
    if (temp_v0 != 0) {
        EI(&D_00478D10, &D_00478D08);
    }
    return temp_s1;
}
