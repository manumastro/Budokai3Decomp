/* Draft (not built): func_001164A8 at 0x001164A8, size 0xA8, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_001164A8.c:30: warning: passing arg 3 makes integer from pointer without a cast
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_001164A8.s */

extern s32 *D_003EDCE8;
extern s32 D_003EDCEC;
extern s32 D_00478708;

s32 func_001164A8(s32 arg0, s32 arg1) {
    s32 (*temp_a2)(s32, s32, s32);
    s32 *var_s0;
    s32 *var_v0;
    s32 var_gp;
    s32 var_s1;
    s32 var_v1;

    var_gp = saved_reg_gp;
    if (arg0 != 0) {
        var_v1 = 0x20;
        var_v0 = &D_00478708;
    } else {
        var_v0 = D_003EDCE8;
        var_v1 = D_003EDCEC;
    }
    var_s0 = var_v0;
    if (var_v1 > 0) {
        var_s1 = var_v1;
        do {
            if (*(s32 (**)(s32, s32, s32))((u8 *)var_s0 + 0) != NULL) {
                var_gp = *(s32 *)((u8 *)var_s0 + 8);
                temp_a2 = *(s32 (**)(s32, s32, s32))((u8 *)var_s0 + 0);
                temp_a2(arg1, *(s32 *)((u8 *)var_s0 + 4), temp_a2);
            }
            var_s1 -= 1;
            var_s0 += 0x10;
        } while (var_s1 != 0);
    }
    return var_gp;
}
