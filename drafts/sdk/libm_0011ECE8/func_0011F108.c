/* Draft (not built): func_0011F108 at 0x0011F108, size 0xD8, segment sdk/libm_0011ECE8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0011F108.c:32: parse error before '}' token
 * Original: asm/nonmatchings/sdk/libm_0011ECE8/func_0011F108.s */

f32 func_0011F108(f32 fparg0) {
    f32 var_a0;
    f32 var_f0;
    s32 temp_a1;
    s32 temp_a2_2;
    s32 var_v0;
    u32 temp_a2;

    var_a0 = fparg0;
    temp_a2 = M2C_BITWISE(s32, var_a0) & 0x7FFFFFFF;
    temp_a1 = (temp_a2 >> 0x17) - 0x7F;
    var_f0 = fparg0;
    if (temp_a1 < 0x17) {
        if (temp_a1 >= 0) {
            temp_a2_2 = 0x7FFFFF >> temp_a1;
            var_f0 = fparg0;
            if (M2C_BITWISE(s32, var_a0) & temp_a2_2) {
                if ((fparg0 + 9.9999994e29f) > 0.0f) {
                    var_v0 = ~temp_a2_2;
                    if (M2C_BITWISE(s32, var_a0) > 0) {
                        var_a0 = M2C_BITWISE(f32, (M2C_BITWISE(s32, var_a0) + (0x800000 >> temp_a1)));
                        var_v0 = ~temp_a2_2;
                    }
                    var_a0 = M2C_BITWISE(f32, (M2C_BITWISE(s32, var_a0) & var_v0));
                }
                goto block_16;
            }
        } else {
            if ((fparg0 + 9.9999994e29f) > 0.0f) {
                if (M2C_BITWISE(s32, var_a0) < 0) {
                    var_a0 = -0.0f;
                } else if (temp_a2 > 0x7FFFFFU) {
                    var_a0 = 1.0f;
                }
            }
block_16:
            var_f0 = var_a0;
        }
    }
    return var_f0;
}
