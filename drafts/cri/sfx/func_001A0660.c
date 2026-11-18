/* Draft (not built): func_001A0660 at 0x001A0660, size 0x144, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_001A0660.c:48: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/sfx/func_001A0660.s */

s32 func_001A0898();                                /* extern */

f32 func_001A0660(u8 *arg0, s32 arg1, s32 arg2) {
    f32 temp_f20;
    f32 var_f0;
    f32 var_f0_2;
    s32 *temp_v1;
    s32 temp_a0;
    s32 temp_ret;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_v0;

    temp_f20 = *(f32 *)((u8 *)arg0 + 0x40);
    temp_ret = func_001A0898();
    var_a2 = 0;
    if (temp_ret == 1) {
        do {
            temp_a0 = var_a2 * 4;
            var_a2 += 1;
            *(temp_a0 + arg2) = (*(temp_a0 + arg1) & 0x7FFFFF80) * 2;
        } while (var_a2 < 0x100);
        return M2C_BITWISE(f32, temp_ret);
    }
    do {
        temp_v0 = var_a2 * 4;
        var_a2 += 1;
        temp_v1 = temp_v0 + arg1;
        var_a0 = *temp_v1;
        if (var_a0 == 0) {
            *temp_v1 = 1;
            var_a0 = 1;
        }
        if (var_a0 >= 0) {
            var_f0_2 = (f32) var_a0;
        } else {
            var_f0_2 = 2.0f * (f32) ((var_a0 & 1) | ((u32) var_a0 >> 1));
        }
        var_f0 = 1.6777215e7f / ((temp_f20 * var_f0_2) / 2.1474835e9f);
        var_v0 = M2C_ERROR(/* Read from unset register $f4 */);
        if (var_f0 >= 2.1474836e9f) {
            var_f0 -= 2.1474836e9f;
            var_v0 = 0x4F000000 | 0x80000000;
        }
        *(temp_v0 + arg2) = var_v0;
    } while (var_a2 < 0x100);
    return var_f0;
}
