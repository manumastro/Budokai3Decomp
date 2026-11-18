/* Draft (not built): func_0011C5F8 at 0x0011C5F8, size 0x1E0, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0011C5F8.c:70: parse error before "f32"
 * Original: asm/nonmatchings/sdk/libm/func_0011C5F8.s */

f32 func_0011EE78(f32, f32, s32);                   /* extern */
f32 func_0011F2F8(s32, f32, f32, s32, f32);         /* extern */

f32 func_0011C5F8(f32 fparg0, f32 fparg1) {
    f32 sp0;
    f32 var_f0;
    f32 var_f2;
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_t0;
    s32 temp_v1;

    temp_t0 = M2C_BITWISE(s32, fparg1) & 0x7FFFFFFF;
    temp_a3 = M2C_BITWISE(s32, fparg0) & 0x7FFFFFFF;
    if (M2C_BITWISE(s32, fparg1) == 0x3F800000) {
        return func_0011EE78(fparg0, fparg1, temp_a3);
    }
    temp_a0 = (M2C_BITWISE(s32, fparg1) >> 0x1E) & 2;
    temp_s0 = (M2C_BITWISE(u32, fparg0) >> 0x1F) | temp_a0;
    if (temp_a3 <= 0x7FFFFF) {
        var_f0 = 3.1415925f;
        if (temp_s0 != 2) {
            if (temp_s0 >= 3) {
                var_f0 = -3.1415925f;
                if (temp_s0 != 3) {
                    goto block_11;
                }
                goto block_33;
            }
            if (temp_s0 >= 0) {
                var_f0 = fparg0;
                goto block_33;
            }
            goto block_12;
        }
        goto block_33;
    }
block_11:
block_12:
    if (temp_t0 <= 0x7FFFFF) {
        var_f0 = -1.5707963f;
        if (M2C_BITWISE(s32, fparg0) >= 0) {
            return 1.5707963f;
        }
        goto block_33;
    }
    var_f2 = 1.5707963f;
    temp_v1 = (s32) (temp_a3 - temp_t0) >> 0x17;
    if ((temp_v1 < 0x3D) && ((M2C_BITWISE(s32, fparg1) >= 0) || (var_f2 = 0.0f, ((temp_v1 < -0x3C) == 0)))) {
        var_f2 = func_0011EE78(func_0011F2F8(temp_a0, fparg0, fparg1, temp_a3, fparg0 / fparg1));
    }
    if (temp_s0 != 1) {
        if (temp_s0 >= 2) {
            if (temp_s0 != 2) {
                goto block_32;
            }
            var_f0 = 3.1415925f - (var_f2 - 0.00000015099579f);
        } else {
            var_f0 = var_f2;
            if (temp_s0 != 0) {
block_32:
                var_f0 = (var_f2 - 0.00000015099579f) - 3.1415925f;
            }
        }
    } else {
        sp0 = var_f2;
        var_f0 = M2C_BITWISE(f32, (M2C_BITWISE(s32, sp0) ^ 0x80000000));
    }
block_33:
    return var_f0;
}
