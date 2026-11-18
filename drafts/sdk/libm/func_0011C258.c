/* Draft (not built): func_0011C258 at 0x0011C258, size 0x3A0, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0011C258.c:48: parse error before "s32"
 * Original: asm/nonmatchings/sdk/libm/func_0011C258.s */

f32 func_0011D730(f32);                             /* extern */
f32 func_0011F2F8();                                /* extern */

f32 func_0011C258(f32 fparg0) {
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f22;
    f32 temp_f8;
    f32 var_f0;
    f32 var_f20;
    s32 temp_s0;
    s32 temp_v1;

    temp_s0 = M2C_BITWISE(s32, fparg0) & 0x7FFFFFFF;
    if (temp_s0 == 0x3F800000) {
        return (fparg0 * 1.5707963f) + (fparg0 * 7.5497894e-8f);
    }
    if (temp_s0 > 0x3F800000) {
        temp_f0 = fparg0 - fparg0;
        return temp_f0 / temp_f0;
    }
    if (temp_s0 <= 0x3EFFFFFF) {
        if (temp_s0 > 0x31FFFFFF) {
            temp_f20 = fparg0 * fparg0;
            return fparg0 + (fparg0 * ((temp_f20 * ((temp_f20 * ((temp_f20 * ((temp_f20 * ((temp_f20 * ((temp_f20 * 0.00003479331f) + 0.000791535f)) + -0.040055536f)) + 0.20121253f)) + -0.3255658f)) + 0.16666666f)) / ((temp_f20 * ((temp_f20 * ((temp_f20 * ((temp_f20 * 0.07703815f) + -0.6882839f)) + 2.0209455f)) + -2.4033947f)) + 1.0f)));
        }
        if ((fparg0 + 9.9999994e29f) > 1.0f) {
            return fparg0;
        }
        goto block_15;
    }
block_15:
    temp_f20_2 = (1.0f - func_0011F2F8()) * 0.5f;
    temp_f22 = (temp_f20_2 * ((temp_f20_2 * ((temp_f20_2 * ((temp_f20_2 * 0.07703815f) + -0.6882839f)) + 2.0209455f)) + -2.4033947f)) + 1.0f;
    temp_f21 = temp_f20_2 * ((temp_f20_2 * ((temp_f20_2 * ((temp_f20_2 * ((temp_f20_2 * ((temp_f20_2 * 0.00003479331f) + 0.000791535f)) + -0.040055536f)) + 0.20121253f)) + -0.3255658f)) + 0.16666666f);
    temp_f8 = func_0011D730(temp_f20_2);
    if (temp_s0 > 0x3F799999) {
        var_f20 = 1.5707963f - ((2.0f * (temp_f8 + (temp_f8 * (temp_f21 / temp_f22)))) - 7.5497894e-8f);
    } else {
        temp_v1 = M2C_BITWISE(s32, temp_f8) & ~0xFFF;
        var_f20 = 0.7853981f - (((2.0f * temp_f8 * (temp_f21 / temp_f22)) - (7.5497894e-8f - (2.0f * ((temp_f20_2 - (M2C_BITWISE(f32, temp_v1) * M2C_BITWISE(f32, temp_v1))) / (temp_f8 + M2C_BITWISE(f32, temp_v1)))))) - (0.7853981f - (2.0f * M2C_BITWISE(f32, temp_v1))));
    }
    var_f0 = var_f20;
    if (M2C_BITWISE(s32, fparg0) <= 0) {
        var_f0 = -var_f20;
    }
    return var_f0;
}
