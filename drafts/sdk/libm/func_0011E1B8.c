/* Draft (not built): func_0011E1B8 at 0x0011E1B8, size 0x104, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0011E1B8.c:24: parse error before "return"
 * Original: asm/nonmatchings/sdk/libm/func_0011E1B8.s */

f32 func_0011E1B8(s32 arg0, f32 fparg0, f32 fparg1) {
    f32 sp0;
    f32 temp_f1;
    f32 temp_f3;
    f32 temp_f4;
    f32 var_f0;

    sp0 = fparg0;
    if (((M2C_BITWISE(s32, sp0) & 0x7FFFFFFF) > 0x31FFFFFF) || (var_f0 = fparg0, (M2C_BITWISE(s32, fparg0) != 0))) {
        temp_f3 = fparg0 * fparg0;
        temp_f4 = temp_f3 * fparg0;
        temp_f1 = (temp_f3 * ((temp_f3 * ((temp_f3 * ((temp_f3 * 1.5896909e-10f) + -2.505076e-8f)) + 0.0000027557312f)) + -0.0001984127f)) + 0.008333334f;
        if (arg0 == 0) {
            return fparg0 + (temp_f4 * ((temp_f3 * temp_f1) + -0.16666666f));
        }
        var_f0 = fparg0 - (((temp_f3 * ((fparg1 * 0.5f) - (temp_f4 * temp_f1))) - fparg1) - (temp_f4 * -0.16666666f));
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_f0;
    }
    return var_f0;
}
