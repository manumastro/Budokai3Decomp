/* Draft (not built): func_0011B4E8 at 0x0011B4E8, size 0x33C, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libm/func_0011B4E8.s */

s64 func_0011E548();
s64 func_0011EA10();
s64 func_00121930();
s64 func_00121988();
s32 func_00121C78();
extern s64 D_0045DEE8;
extern s64 D_0045DEF0;
extern s64 D_0045DEF8;
extern s64 D_0045DF00;
extern s64 D_0045DF08;
extern s64 D_0045DF10;
extern s64 D_0045DF18;
extern s64 D_0045DF20;
extern s64 D_0045DF28;
extern s64 D_0045DF30;
extern s64 D_0045DF38;
extern s64 D_0045DF40;
extern s64 D_0045DF48;
extern s64 D_0045DF50;
extern s64 D_0045DF58;
extern s64 D_0045DF60;

s64 func_0011B4E8(s64 arg0, s64 arg1) {
    s32 temp_s0;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_v1;
    s64 temp_a2;
    s64 temp_a3;
    s64 temp_t2;
    s64 temp_t3;
    s64 var_a0;
    s64 var_v0;

    temp_a3 = (s64) (arg1 << 0x20) >> 0x20;
    temp_t3 = arg1 >> 0x20;
    temp_t1 = temp_t3 & 0x7FFFFFFF;
    temp_a2 = (s64) (arg0 << 0x20) >> 0x20;
    temp_t2 = arg0 >> 0x20;
    temp_t0 = temp_t2 & 0x7FFFFFFF;
    if ((u32) (temp_t1 | ((u32) (temp_a3 | -temp_a3) >> 0x1F)) <= 0x7FF00000U) {
        if ((u32) (temp_t0 | ((u32) (temp_a2 | -temp_a2) >> 0x1F)) <= 0x7FF00000U) {
            if (((temp_t3 + 0xC0100000) | temp_a3) != 0) {
                temp_s0 = ((u32) temp_t2 >> 0x1F) | ((temp_t3 >> 0x1E) & 2);
                if ((temp_t0 | temp_a2) == 0) {
                    var_v0 = D_0045DEF0;
                    if (temp_s0 != 2) {
                        if (temp_s0 >= 3) {
                            var_v0 = D_0045DEF8;
                            if (temp_s0 != 3) {
                                goto block_18;
                            }
                            goto block_61;
                        }
                        if (temp_s0 >= 0) {
                            var_v0 = arg0;
                            goto block_61;
                        }
                        goto block_18;
                    }
                    goto block_61;
                }
block_18:
                if ((temp_t1 | temp_a3) != 0) {
                    if (temp_t1 == 0x7FF00000) {
                        if (temp_t0 == temp_t1) {
                            var_v0 = D_0045DF00;
                            if (temp_s0 != 1) {
                                if (temp_s0 >= 2) {
                                    var_v0 = D_0045DF10;
                                    if (temp_s0 != 2) {
                                        if (temp_s0 != 3) {
                                            goto block_43;
                                        }
                                        var_v0 = D_0045DF18;
                                        goto block_61;
                                    }
                                    goto block_61;
                                }
                                var_v0 = D_0045DF08;
                                if (temp_s0 != 0) {
                                    goto block_43;
                                }
                                goto block_61;
                            }
                            goto block_61;
                        }
                        if (temp_s0 != 1) {
                            if (temp_s0 < 2) {
                                var_v0 = 0;
                                if (temp_s0 != 0) {
                                    goto block_43;
                                }
                                goto block_61;
                            }
                            var_v0 = D_0045DF20;
                            if (temp_s0 != 2) {
                                var_v0 = D_0045DF28;
                                if (temp_s0 != 3) {
                                    goto block_43;
                                }
                            }
                            goto block_61;
                        }
                        var_v0 = D_0045DEE8;
                        goto block_61;
                    }
block_43:
                    if (temp_t0 == 0x7FF00000) {
                        goto block_44;
                    }
                    var_a0 = D_0045DF40;
                    temp_v1 = (s32) (temp_t0 - temp_t1) >> 0x14;
                    if ((temp_v1 < 0x3D) && ((temp_t3 >= 0) || (var_a0 = 0, ((temp_v1 < -0x3C) == 0)))) {
                        var_a0 = func_0011E548(func_0011EA10(func_00121C78(arg0, temp_a2, temp_a3)));
                    }
                    if (temp_s0 != 1) {
                        if (temp_s0 < 2) {
                            var_v0 = var_a0;
                            if (temp_s0 != 0) {
                                goto block_60;
                            }
                        } else if (temp_s0 != 2) {
block_60:
                            var_v0 = func_00121988(func_00121988(var_a0, D_0045DF58), D_0045DF60);
                        } else {
                            var_v0 = func_00121988(D_0045DF50, func_00121988(var_a0, D_0045DF48));
                        }
                    } else {
                        var_v0 = (var_a0 & (0xFFFF0000U >> 0x20)) | (((var_a0 >> 0x20) ^ 0x80000000) << 0x20);
                    }
                    /* Duplicate return node #62. Try simplifying control flow for better match */
                    return var_v0;
                }
block_44:
                var_v0 = D_0045DF30;
                if (temp_t2 >= 0) {
                    return D_0045DF38;
                }
                goto block_61;
            }
            return func_0011E548(temp_a2, temp_a3);
        }
        goto block_4;
    }
block_4:
    var_v0 = func_00121930(arg1, arg0, temp_a2, temp_a3);
block_61:
    return var_v0;
}
