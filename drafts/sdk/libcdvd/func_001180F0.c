/* Draft (not built): func_001180F0 at 0x001180F0, size 0x68, segment sdk/libcdvd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_001180F0.c:19: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libcdvd/func_001180F0.s */

s32 DI();                                           /* extern */
s32 EI(s32 *);                                  /* extern */
s32 func_00118C08(s32);                         /* extern */
extern s32 D_00478D00;
extern s32 D_00478D04;

s32 func_001180F0(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0;
    if (func_00118C08(1) == 0) {
        temp_v0 = DI();
        temp_s0 = D_00478D00;
        D_00478D00 = arg0;
        D_00478D04 = saved_reg_gp;
        var_v0 = temp_s0;
        if (temp_v0 != 0) {
            EI(&D_00478D04);
            var_v0 = temp_s0;
        }
    }
    return var_v0;
}
