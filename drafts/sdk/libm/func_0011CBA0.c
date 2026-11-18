/* Draft (not built): func_0011CBA0 at 0x0011CBA0, size 0x7E0, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0011CBA0.c:256: parse error before "return"
 * Original: asm/nonmatchings/sdk/libm/func_0011CBA0.s */

f32 func_0011D730(s32, f32);                        /* extern */
f32 func_0011F2F8(s32, f32);                        /* extern */
f32 func_0011F3F8(s32, s32, s32, s32, f32, f32);    /* extern */
extern s32 D_0045E090;
extern s32 D_0045E098;
extern s32 D_0045E0A0;
extern f32 D_0045E114;

f32 func_0011CBA0(s32 arg0, f32 fparg0, f32 fparg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f16_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f6;
    f32 temp_f7;
    f32 var_a1;
    f32 var_a3_2;
    f32 var_f0;
    f32 var_f1;
    f32 var_f20;
    f32 var_f2;
    f32 var_f4;
    f32 var_f4_2;
    f32 var_f8;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_t0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a3;
    s32 var_f6;
    s32 var_s1;
    s32 var_s4;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_v1;
    u32 temp_t0;
    u32 temp_t1;

    var_a0 = arg0;
    temp_s0 = M2C_BITWISE(s32, fparg1) & 0x7FFFFFFF;
    var_f0 = 1.0f;
    temp_s1 = M2C_BITWISE(s32, fparg0) & 0x7FFFFFFF;
    if (temp_s0 > 0x7FFFFF) {
        var_s4 = 0;
        if (M2C_BITWISE(s32, fparg0) < 0) {
            if (temp_s0 > 0x4B7FFFFF) {
                var_s4 = 2;
            } else if (temp_s0 > 0x3F7FFFFF) {
                temp_v0 = 0x96 - (temp_s0 >> 0x17);
                var_a0 = temp_s0 >> temp_v0;
                if ((var_a0 << temp_v0) == temp_s0) {
                    var_s4 = 2 - (var_a0 & 1);
                }
            }
        }
        if (temp_s0 != 0x3F800000) {
            if (M2C_BITWISE(s32, fparg1) == 0x40000000) {
                return fparg0 * fparg0;
            }
            if ((M2C_BITWISE(s32, fparg1) == 0x3F000000) && (M2C_BITWISE(s32, fparg0) >= 0)) {
                return func_0011D730(var_a0, fparg0);
            }
            temp_f12 = func_0011F2F8(var_a0, fparg0);
            if ((temp_s1 <= 0x7FFFFF) || (temp_t1 = M2C_BITWISE(u32, fparg0) >> 0x1F, (temp_s1 == 0x3F800000))) {
                var_f4 = temp_f12;
                if (M2C_BITWISE(s32, fparg1) < 0) {
                    var_f4 = 1.0f / var_f4;
                }
                var_f0 = var_f4;
                if (M2C_BITWISE(s32, fparg0) < 0) {
                    if (((temp_s1 + 0xC0800000) | var_s4) == 0) {
                        temp_f0_2 = var_f4 - var_f4;
                        return temp_f0_2 / temp_f0_2;
                    }
                    if (var_s4 == 1) {
                        var_f4 = -var_f4;
                    }
                    return var_f4;
                }
                /* Duplicate return node #70. Try simplifying control flow for better match */
                return var_f0;
            }
            if (((temp_t1 - 1) | var_s4) == 0) {
                temp_f0 = fparg0 - fparg0;
                return temp_f0 / temp_f0;
            }
            if (temp_s0 > 0x4D000000) {
                if (temp_s1 <= 0x3F7FFFF7) {
                    if (M2C_BITWISE(s32, fparg1) < 0) {
                        return D_0045E114;
                    }
                    goto block_40;
                }
                if (temp_s1 > 0x3F800007) {
                    if (M2C_BITWISE(s32, fparg1) > 0) {
                        return D_0045E114;
                    }
block_40:
                    return 0.0f;
                }
                temp_f12_2 = fparg0 - 1.0f;
                temp_f16 = temp_f12_2 * 1.442688f;
                temp_f13 = (temp_f12_2 * 0.000007052607f) - (temp_f12_2 * temp_f12_2 * (0.5f - (temp_f12_2 * (0.3333333f - (temp_f12_2 * 0.25f)))) * 1.4426949f);
                sp0 = temp_f16 + temp_f13;
                var_f6 = M2C_BITWISE(s32, sp0) & ~0xFFF;
                var_f2 = temp_f13 - (M2C_BITWISE(f32, var_f6) - temp_f16);
                goto block_48;
            }
            temp_a0 = temp_s1 & 0x7FFFFF;
            temp_v1 = temp_s1 >> 0x17;
            var_t0 = temp_v1 - 0x7F;
            var_s1 = temp_a0 | 0x3F800000;
            var_a3 = 0;
            if (temp_a0 > 0x1CC471) {
                var_a3 = 1;
                if (temp_a0 > 0x5DB3D6) {
                    var_t0 = temp_v1 - 0x7E;
                    var_s1 += 0xFF800000;
                    var_a3 = 0;
                }
            }
            temp_a2 = var_a3 * 4;
            temp_f1 = *(&D_0045E090 + temp_a2);
            temp_f16_2 = M2C_BITWISE(f32, var_s1) - temp_f1;
            temp_f13_2 = 1.0f / (M2C_BITWISE(f32, var_s1) + temp_f1);
            temp_f20 = temp_f16_2 * temp_f13_2;
            sp4 = temp_f20;
            temp_v0_2 = M2C_BITWISE(s32, sp4) & ~0xFFF;
            temp_v0_3 = ((var_s1 >> 1) | 0x20000000) + (var_a3 << 0x15) + 0x40000;
            temp_f14 = temp_f20 * temp_f20;
            temp_f1_2 = temp_f13_2 * ((temp_f16_2 - (M2C_BITWISE(f32, temp_v0_2) * M2C_BITWISE(f32, temp_v0_3))) - (M2C_BITWISE(f32, temp_v0_2) * (M2C_BITWISE(f32, var_s1) - (M2C_BITWISE(f32, temp_v0_3) - temp_f1))));
            temp_f14_2 = M2C_BITWISE(f32, temp_v0_2) * M2C_BITWISE(f32, temp_v0_2);
            temp_f0_3 = (temp_f14 * temp_f14 * ((temp_f14 * ((temp_f14 * ((temp_f14 * ((temp_f14 * ((temp_f14 * 0.20697501f) + 0.23066074f)) + 0.2727281f)) + 0.33333334f)) + 0.42857143f)) + 0.59999996f)) + (temp_f1_2 * (M2C_BITWISE(f32, temp_v0_2) + temp_f20));
            sp8 = temp_f14_2 + 3.0f + temp_f0_3;
            temp_v1_2 = M2C_BITWISE(s32, sp8) & ~0xFFF;
            temp_f16_3 = M2C_BITWISE(f32, temp_v0_2) * M2C_BITWISE(f32, temp_v1_2);
            temp_f13_3 = (temp_f1_2 * M2C_BITWISE(f32, temp_v1_2)) + ((temp_f0_3 - ((M2C_BITWISE(f32, temp_v1_2) - 3.0f) - temp_f14_2)) * temp_f20);
            spC = temp_f16_3 + temp_f13_3;
            temp_v0_4 = M2C_BITWISE(s32, spC) & ~0xFFF;
            temp_f3 = *(&D_0045E098 + temp_a2);
            temp_f2 = M2C_BITWISE(f32, temp_v0_4) * 0.961792f;
            temp_f12_3 = (f32) var_t0;
            temp_f1_3 = (M2C_BITWISE(f32, temp_v0_4) * 0.000004701738f) + ((temp_f13_3 - (M2C_BITWISE(f32, temp_v0_4) - temp_f16_3)) * 0.96179664f) + *(&D_0045E0A0 + temp_a2);
            sp10 = temp_f2 + temp_f1_3 + temp_f3 + temp_f12_3;
            var_f6 = M2C_BITWISE(s32, sp10) & ~0xFFF;
            var_f2 = temp_f1_3 - (((M2C_BITWISE(f32, var_f6) - temp_f12_3) - temp_f3) - temp_f2);
block_48:
            var_f20 = 1.0f;
            if (((temp_t1 - 1) | (var_s4 - 1)) == 0) {
                var_f20 = -1.0f;
            }
            sp14 = fparg1;
            temp_v1_3 = M2C_BITWISE(s32, sp14) & ~0xFFF;
            var_f8 = M2C_BITWISE(f32, temp_v1_3) * M2C_BITWISE(f32, var_f6);
            temp_f7 = ((fparg1 - M2C_BITWISE(f32, temp_v1_3)) * M2C_BITWISE(f32, var_f6)) + (fparg1 * var_f2);
            temp_f4 = temp_f7 + var_f8;
            var_a3_2 = temp_f4;
            var_a1 = temp_f4;
            temp_a2_2 = M2C_BITWISE(s32, var_a1) & 0x7FFFFFFF;
            if (M2C_BITWISE(s32, var_a1) > 0) {
                if (temp_a2_2 > 0x43010000) {
                    var_f1 = 9.9999994e29f;
                    goto block_62;
                }
                if (temp_a2_2 == 0x43010000) {
                    var_v1 = temp_a2_2 >> 0x17;
                    if ((temp_f4 - var_f8) < (temp_f7 + 4.2995662e-8f)) {
                        var_f1 = 9.9999994e29f;
                        goto block_62;
                    }
                    goto block_64;
                }
                goto block_63;
            }
            if (temp_a2_2 <= 0x42FC0000) {
                if (temp_a2_2 == 0x42FC0000) {
                    var_v1 = temp_a2_2 >> 0x17;
                    if (temp_f7 <= (temp_f4 - var_f8)) {
                        goto block_61;
                    }
                    goto block_64;
                }
block_63:
                var_v1 = temp_a2_2 >> 0x17;
block_64:
                var_t0_2 = 0;
                if (temp_a2_2 > 0x3F000000) {
                    temp_t0 = M2C_BITWISE(s32, var_a1) + (0x800000 >> (var_v1 - 0x7E));
                    temp_a3 = ((temp_t0 >> 0x17) & 0xFF) - 0x7F;
                    var_f8 -= M2C_BITWISE(f32, (temp_t0 & ~(0x7FFFFF >> temp_a3)));
                    var_a1 = M2C_BITWISE(f32, (M2C_BITWISE(s32, var_a1) < 0));
                    temp_t0_2 = (s32) ((temp_t0 & 0x7FFFFF) | 0x800000) >> (0x17 - temp_a3);
                    var_t0_2 = (M2C_BITWISE(s32, var_a1) != 0) int -temp_t0_2 : temp_t0_2;
                    var_a3_2 = temp_f7 + var_f8;
                }
                temp_v1_4 = M2C_BITWISE(s32, var_a3_2) & ~0xFFF;
                temp_f16_4 = M2C_BITWISE(f32, temp_v1_4) * 0.69314575f;
                temp_f13_4 = ((temp_f7 - (M2C_BITWISE(f32, temp_v1_4) - var_f8)) * 0.6931471f) + (M2C_BITWISE(f32, temp_v1_4) * 0.0000014286065f);
                temp_f4_2 = temp_f16_4 + temp_f13_4;
                temp_f12_4 = temp_f4_2 * temp_f4_2;
                temp_f1_4 = temp_f13_4 - (temp_f4_2 - temp_f16_4);
                temp_f6 = temp_f4_2 - (temp_f12_4 * ((temp_f12_4 * ((temp_f12_4 * ((temp_f12_4 * ((temp_f12_4 * 4.1381366e-8f) + -0.0000016533902f)) + 0.00006613755f)) + -0.0027777776f)) + 0.16666666f));
                temp_f4_3 = 1.0f - ((((temp_f4_2 * temp_f6) / (temp_f6 - 2.0f)) - (temp_f1_4 + (temp_f4_2 * temp_f1_4))) - temp_f4_2);
                temp_a0_2 = M2C_BITWISE(s32, temp_f4_3) + (var_t0_2 << 0x17);
                if ((temp_a0_2 >> 0x17) <= 0) {
                    var_f4_2 = func_0011F3F8(var_t0_2, M2C_BITWISE(s32, var_a1), temp_a2_2, M2C_BITWISE(s32, var_a3_2), temp_f4_3, temp_f13_4);
                } else {
                    var_f4_2 = M2C_BITWISE(f32, temp_a0_2);
                }
                var_f0 = var_f20 * var_f4_2;
                /* Duplicate return node #70. Try simplifying control flow for better match */
                return var_f0;
            }
block_61:
            var_f1 = 9.999999e-31f;
block_62:
            return var_f20 * var_f1 * var_f1;
        }
        if (M2C_BITWISE(s32, fparg1) >= 0) {
            return fparg0;
        }
        return 1.0f / fparg0;
    }
    return var_f0;
}
