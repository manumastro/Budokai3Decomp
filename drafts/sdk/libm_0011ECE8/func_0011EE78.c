/* Draft (not built): func_0011EE78 at 0x0011EE78, size 0x28C, segment sdk/libm_0011ECE8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0011EE78.c:70: parse error before "if"
 * Original: asm/nonmatchings/sdk/libm_0011ECE8/func_0011EE78.s */

f32 func_0011F2F8(f32);                             /* extern */
extern s32 D_0045E638;
extern f32 D_0045E644;
extern s32 D_0045E648;
extern f32 D_0045E654;
extern s32 D_0045E658;

f32 func_0011EE78(f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_s1;
    f32 var_f0;
    f32 var_f13;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_v1;

    var_f13 = fparg0;
    temp_s1 = var_f13;
    temp_s0 = M2C_BITWISE(s32, temp_s1) & 0x7FFFFFFF;
    if (temp_s0 > 0x507FFFFF) {
        if (M2C_BITWISE(s32, temp_s1) > 0) {
            return D_0045E644 + D_0045E654;
        }
        return -D_0045E644 - D_0045E654;
    }
    if (temp_s0 <= 0x3EDFFFFF) {
        var_v1 = -1;
        if (temp_s0 <= 0x30FFFFFF) {
            var_f0 = var_f13;
            if (!((var_f13 + 9.9999994e29f) > 1.0f)) {
                goto block_19;
            }
            /* Duplicate return node #24. Try simplifying control flow for better match */
            return var_f0;
        }
        goto block_19;
    }
    temp_f13 = func_0011F2F8(var_f13);
    if (temp_s0 <= 0x3F97FFFF) {
        if (temp_s0 <= 0x3F2FFFFF) {
            var_f13 = ((2.0f * temp_f13) - 1.0f) / (temp_f13 + 2.0f);
            var_v1 = 0;
        } else {
            var_f13 = (temp_f13 - 1.0f) / (temp_f13 + 1.0f);
            var_v1 = 1;
        }
    } else if (temp_s0 > 0x401BFFFF) {
        var_v1 = 3;
        var_f13 = -1.0f / temp_f13;
    } else {
        var_f13 = (temp_f13 - 1.5f) / ((temp_f13 * 1.5f) + 1.0f);
        var_v1 = 2;
    }
block_19:
    temp_f12 = var_f13 * var_f13;
    temp_f0_2 = temp_f12 * temp_f12;
    temp_f1 = temp_f0_2 * (*(f32 *)((u8 *)(&D_0045E658) + 4) + (temp_f0_2 * (*(f32 *)((u8 *)(&D_0045E658) + 0xC) + (temp_f0_2 * (*(f32 *)((u8 *)(&D_0045E658) + 0x14) + (temp_f0_2 * (*(f32 *)((u8 *)(&D_0045E658) + 0x1C) + (temp_f0_2 * *(f32 *)((u8 *)(&D_0045E658) + 0x24)))))))));
    temp_f0 = temp_f12 * (*(f32 *)((u8 *)(&D_0045E658) + 0) + (temp_f0_2 * (*(f32 *)((u8 *)(&D_0045E658) + 8) + (temp_f0_2 * (*(f32 *)((u8 *)(&D_0045E658) + 0x10) + (temp_f0_2 * (*(f32 *)((u8 *)(&D_0045E658) + 0x18) + (temp_f0_2 * (*(f32 *)((u8 *)(&D_0045E658) + 0x20) + (temp_f0_2 * *(f32 *)((u8 *)(&D_0045E658) + 0x28)))))))))));
    if (var_v1 < 0) {
        return var_f13 - (var_f13 * (temp_f0 + temp_f1));
    }
    temp_v0 = var_v1 * 4;
    var_f0 = *(&D_0045E638 + temp_v0) - (((var_f13 * (temp_f0 + temp_f1)) - *(&D_0045E648 + temp_v0)) - var_f13);
    if (M2C_BITWISE(s32, temp_s1) < 0) {
        var_f0 = -var_f0;
    }
    return var_f0;
}
