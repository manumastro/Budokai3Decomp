/* Draft (not built): func_0011D800 at 0x0011D800, size 0x150, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0011D800.c:29: parse error before "return"
 * Original: asm/nonmatchings/sdk/libm/func_0011D800.s */

f32 func_0011D800(f32 fparg0, f32 fparg1) {
    f32 sp0;
    f32 temp_f1;
    f32 temp_f4;
    f32 var_f0;
    s32 temp_v1;
    s32 var_f5;

    sp0 = fparg0;
    temp_v1 = M2C_BITWISE(s32, sp0) & 0x7FFFFFFF;
    if ((temp_v1 > 0x31FFFFFF) || (var_f0 = 1.0f, (M2C_BITWISE(s32, fparg0) != 0))) {
        temp_f4 = fparg0 * fparg0;
        temp_f1 = temp_f4 * ((temp_f4 * ((temp_f4 * ((temp_f4 * ((temp_f4 * ((temp_f4 * -1.1359648e-11f) + 2.0875721e-9f)) + -0.00000027557311f)) + 0.000024801586f)) + -0.0013888888f)) + 0.041666664f);
        if (temp_v1 <= 0x3E999999) {
            return 1.0f - ((temp_f4 * 0.5f) - ((temp_f4 * temp_f1) - (fparg0 * fparg1)));
        }
        var_f5 = 0x3E900000;
        if (temp_v1 <= 0x3F480000) {
            var_f5 = temp_v1 + 0xFF000000;
        }
        var_f0 = (1.0f - M2C_BITWISE(f32, var_f5)) - (((temp_f4 * 0.5f) - M2C_BITWISE(f32, var_f5)) - ((temp_f4 * temp_f1) - (fparg0 * fparg1)));
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return var_f0;
    }
    return var_f0;
}
