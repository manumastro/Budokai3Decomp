/* Draft (not built): fn_80046D94 at 0x00152538, size 0x15C, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00152538.c:32: parse error before "s16"
 * Original: asm/nonmatchings/cri/adx_0014EF28/fn_80046D94.s */

f32 func_0011F220(f32);                             /* extern */
f32 func_0011F6C8(f32);                             /* extern */

void func_00152538(s32 arg0, s32 arg1, s16 *arg2, s16 *arg3) {
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f21;
    f32 var_f0;
    f32 var_f1;
    f32 var_f21;

    M2C_ERROR(/* unknown instruction: c1 0x160504 */);
    var_f21 = saved_reg_f20;
    if (saved_reg_f20 != saved_reg_f20) {
        var_f21 = func_0011F6C8(2.0f);
    }
    var_f1 = saved_reg_f20;
    temp_f21 = var_f21 - func_0011F220(((f32) arg0 * 6.283185f) / (f32) arg1);
    if (saved_reg_f20 != saved_reg_f20) {
        var_f1 = func_0011F6C8(2.0f);
    }
    temp_f20 = var_f1 - 1.0f;
    var_f0 = temp_f21 - temp_f20;
    M2C_ERROR(/* unknown instruction: c1 0xc0004 */);
    if (var_f0 != var_f0) {
        var_f0 = func_0011F6C8((temp_f21 + temp_f20) * var_f0);
    }
    temp_f0 = (temp_f21 - var_f0) / temp_f20;
    *arg2 = M2C_BITWISE(s16, temp_f0);
    *arg3 = M2C_BITWISE(s16, temp_f0);
}
