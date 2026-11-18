/* Draft (not built): func_00116398 at 0x00116398, size 0xB8, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_00116398.c:32: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00116398.s */

s32 DI();                                           /* extern */
s32 EI(s32);                                    /* extern */
extern s32 *D_003EDCE8;
extern u32 D_003EDCEC;
extern s32 D_00478708;

s32 func_00116398(s32 arg0, s32 arg1, s32 arg2) {
    s32 *var_s1;
    s32 temp_v0;
    s32 var_s0;
    u32 var_v0;
    u8 *temp_v1;

    var_s0 = arg0;
    if (var_s0 < 0) {
        var_s1 = &D_00478708;
        var_s0 &= 0x7FFFFFFF;
        var_v0 = 0x20;
    } else {
        var_s1 = D_003EDCE8;
        var_v0 = D_003EDCEC;
    }
    if ((u32) var_s0 >= var_v0) {
        return 0x80000069;
    }
    temp_v0 = DI();
    temp_v1 = (var_s0 * 0x10) + var_s1;
    *(s32 *)((u8 *)temp_v1 + 0) = arg1;
    *(s32 *)((u8 *)temp_v1 + 4) = arg2;
    *(s32 *)((u8 *)temp_v1 + 8) = (s32) saved_reg_gp;
    if (temp_v0 != 0) {
        EI(saved_reg_gp);
    }
    return 0;
}
