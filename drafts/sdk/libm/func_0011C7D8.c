/* Draft (not built): func_0011C7D8 at 0x0011C7D8, size 0x2E0, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0011C7D8.c:66: parse error before "return"
 * Original: asm/nonmatchings/sdk/libm/func_0011C7D8.s */

extern f32 D_0045E074;

f32 func_0011C7D8(f32 fparg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 temp_f9_3;
    f32 var_f0;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v1;

    if ((M2C_BITWISE(s32, fparg0) & 0x7FFFFFFF) <= 0x7FFFFF) {
        return D_0045E074;
    }
    if (M2C_BITWISE(s32, fparg0) < 0) {
        return (fparg0 - fparg0) / 0.0f;
    }
    temp_a1 = M2C_BITWISE(s32, fparg0) & 0x7FFFFF;
    temp_v1 = (temp_a1 + 0x4AFB20) & 0x800000;
    temp_a0 = (M2C_BITWISE(s32, fparg0) >> 0x17) - 0x7F + (temp_v1 >> 0x17);
    temp_f12 = M2C_BITWISE(f32, (temp_a1 | (temp_v1 ^ 0x3F800000))) - 1.0f;
    if (((temp_a1 + 0xF) & 0x7FFFFF) < 0x10) {
        var_f0 = 0.0f;
        if (temp_f12 != 0.0f) {
            temp_f2_2 = temp_f12 * temp_f12 * (0.5f - (temp_f12 * 0.3333333f));
            if (temp_a0 == 0) {
                return temp_f12 - temp_f2_2;
            }
            temp_f9_3 = (f32) temp_a0;
            return (temp_f9_3 * 0.6931381f) - ((temp_f2_2 - (temp_f9_3 * 0.000009058001f)) - temp_f12);
        }
        if (temp_a0 != 0) {
            temp_f9_2 = (f32) temp_a0;
            return (temp_f9_2 * 0.6931381f) + (temp_f9_2 * 0.000009058001f);
        }
        /* Duplicate return node #24. Try simplifying control flow for better match */
        return var_f0;
    }
    temp_f10 = temp_f12 / (temp_f12 + 2.0f);
    temp_f9 = (f32) temp_a0;
    temp_f3 = temp_f10 * temp_f10;
    temp_f0_2 = temp_f3 * temp_f3;
    temp_f2 = (temp_f3 * ((temp_f0_2 * ((temp_f0_2 * ((temp_f0_2 * 0.14798197f) + 0.18183571f)) + 0.2857143f)) + 0.6666666f)) + (temp_f0_2 * ((temp_f0_2 * ((temp_f0_2 * 0.15313837f) + 0.22222199f)) + 0.39999998f));
    if (((temp_a1 + 0xFFCF5C30) | (0x35C288 - temp_a1)) > 0) {
        temp_f4 = temp_f12 * 0.5f * temp_f12;
        if (temp_a0 == 0) {
            return temp_f12 - (temp_f4 - (temp_f10 * (temp_f4 + temp_f2)));
        }
        return (temp_f9 * 0.6931381f) - ((temp_f4 - ((temp_f10 * (temp_f4 + temp_f2)) + (temp_f9 * 0.000009058001f))) - temp_f12);
    }
    temp_f0 = temp_f12 - temp_f2;
    if (temp_a0 == 0) {
        return temp_f12 - (temp_f10 * temp_f0);
    }
    var_f0 = (temp_f9 * 0.6931381f) - (((temp_f10 * temp_f0) - (temp_f9 * 0.000009058001f)) - temp_f12);
    return var_f0;
}
