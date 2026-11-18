/* Draft (not built): func_0015B6B0 at 0x0015B6B0, size 0x754, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015B6B0.c:241: warning: passing arg 4 of `func_0015A570' from incompatible pointer type
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015B6B0.s */

s16 func_0015A570(s16 *, s32, s32, void **);    /* extern */
s32 strlen(s16 *);                                  /* extern */
extern s16 *D_0040E084;

s32 func_0015B6B0(u8 *arg0, u8 **arg1) {
    s16 sp10;
    s16 sp12;
    s8 sp14;                                        /* compiler-managed */
    s16 sp16;                                       /* compiler-managed */
    s32 sp18;
    s32 (*temp_a3)(u8 **, s32, u8 *, s32);
    s16 *temp_a0;
    s16 temp_v0;
    s16 temp_v0_10;
    s16 temp_v0_11;
    s16 temp_v0_12;
    s16 temp_v0_13;
    s16 temp_v0_14;
    s16 temp_v0_15;
    s16 temp_v0_16;
    s16 temp_v0_17;
    s16 temp_v0_18;
    s16 temp_v0_19;
    s16 temp_v0_20;
    s16 temp_v0_21;
    s16 temp_v0_22;
    s16 temp_v0_23;
    s16 temp_v0_24;
    s16 temp_v0_25;
    s16 temp_v0_26;
    s16 temp_v0_27;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 var_s5;
    s32 temp_a2;
    s32 temp_fp;
    s32 temp_s0_2;
    s32 var_s2;
    s8 temp_s0;

    temp_fp = strlen(D_0040E084);
    (*(s32 (**)(u8 **, s32, s32, u8 *))((u8 *)(*arg1) + 0x18))(arg1, 0, 0x7FFFFFFF, sp);
    temp_a3 = *(s32 (**)(u8 **, s32, u8 *, s32))((u8 *)(*arg1) + 0x1C);
    temp_a3(arg1, 0, sp, temp_a3);
    if (sp4 >= (*(s32 *)((u8 *)arg0 + 0x48) + 4)) {
        sp10 = 0x8000;
        temp_v0 = func_0015A570(&sp10, 2, 1, arg1);
        if (temp_v0 == 1) {
            sp12 = (s16) *(s32 *)((u8 *)arg0 + 0x48);
            temp_v0_2 = func_0015A570(&sp12, 2, 1, arg1);
            if (temp_v0_2 == temp_v0) {
                sp14 = *(s8 *)((u8 *)arg0 + 0x4C);
                if (func_0015A570((s16 *) &sp14, 1, 1, arg1) == temp_v0_2) {
                    sp14 = *(u8 *)((u8 *)arg0 + 0x50);
                    temp_v0_3 = func_0015A570((s16 *) &sp14, 1, 1, arg1);
                    if (temp_v0_3 == 1) {
                        sp14 = *(u8 *)((u8 *)arg0 + 0x54);
                        temp_v0_4 = func_0015A570((s16 *) &sp14, 1, 1, arg1);
                        if (temp_v0_4 == temp_v0_3) {
                            sp14 = *(u8 *)((u8 *)arg0 + 0x58);
                            temp_v0_5 = func_0015A570((s16 *) &sp14, 1, 1, arg1);
                            if (temp_v0_5 == temp_v0_4) {
                                sp18 = *(s32 *)((u8 *)arg0 + 0x5C);
                                temp_v0_6 = func_0015A570((s16 *) &sp18, 4, 1, arg1);
                                if (temp_v0_6 == temp_v0_5) {
                                    sp18 = *(s32 *)((u8 *)arg0 + 0x60);
                                    temp_v0_7 = func_0015A570((s16 *) &sp18, 4, 1, arg1);
                                    if (temp_v0_7 == temp_v0_6) {
                                        sp16 = *(s16 *)((u8 *)arg0 + 0x64);
                                        temp_v0_8 = func_0015A570(&sp16, 2, 1, arg1);
                                        if (temp_v0_8 == temp_v0_7) {
                                            sp14 = 4;
                                            if (func_0015A570((s16 *) &sp14, 1, 1, arg1) == temp_v0_8) {
                                                if (*(s16 *)((u8 *)arg0 + 0x2D0) == 0) {
                                                    sp14 = 0;
                                                } else {
                                                    sp14 = 8;
                                                }
                                                temp_v0_9 = func_0015A570((s16 *) &sp14, 1, 1, arg1);
                                                if (temp_v0_9 == 1) {
                                                    sp18 = 0;
                                                    temp_v0_10 = func_0015A570((s16 *) &sp18, 4, 1, arg1);
                                                    if (temp_v0_10 == temp_v0_9) {
                                                        sp16 = *(u16 *)((u8 *)arg0 + 0x2C8);
                                                        temp_v0_11 = func_0015A570(&sp16, 2, 1, arg1);
                                                        if (temp_v0_11 == temp_v0_10) {
                                                            sp16 = *(u16 *)((u8 *)arg0 + 0x2CC);
                                                            temp_v0_12 = func_0015A570(&sp16, 2, 1, arg1);
                                                            if (temp_v0_12 == temp_v0_11) {
                                                                sp16 = *(u16 *)((u8 *)arg0 + 0x2CA);
                                                                temp_v0_13 = func_0015A570(&sp16, 2, 1, arg1);
                                                                if (temp_v0_13 == temp_v0_12) {
                                                                    sp16 = *(u16 *)((u8 *)arg0 + 0x2CE);
                                                                    temp_v0_14 = func_0015A570(&sp16, 2, 1, arg1);
                                                                    if (temp_v0_14 == temp_v0_13) {
                                                                        var_s2 = 0x1C;
                                                                        if (*(s32 *)((u8 *)arg0 + 0x6C) > 0) {
                                                                            sp16 = *(u16 *)((u8 *)arg0 + 0x68);
                                                                            temp_v0_15 = func_0015A570(&sp16, 2, 1, arg1);
                                                                            if (temp_v0_15 == temp_v0_14) {
                                                                                sp16 = (u16) *(s32 *)((u8 *)arg0 + 0x6C);
                                                                                if (func_0015A570(&sp16, 2, 1, arg1) == temp_v0_15) {
                                                                                    var_s2 = 0x20;
                                                                                    var_s5 = 0;
                                                                                    if (*(s32 *)((u8 *)arg0 + 0x6C) > 0) {
loop_25:
                                                                                        sp16 = var_s5;
                                                                                        var_s5 += 1;
                                                                                        temp_v0_16 = func_0015A570(&sp16, 2, 1, arg1);
                                                                                        if (temp_v0_16 == 1) {
                                                                                            sp16 = temp_v0_16;
                                                                                            temp_v0_17 = func_0015A570(&sp16, 2, 1, arg1);
                                                                                            var_s2 = var_s2 + 2 + 2 + 4 + 4 + 4 + 4;
                                                                                            if (temp_v0_17 == temp_v0_16) {
                                                                                                sp18 = *(s32 *)((u8 *)arg0 + 0x70);
                                                                                                temp_v0_18 = func_0015A570((s16 *) &sp18, 4, 1, arg1);
                                                                                                if (temp_v0_18 == temp_v0_17) {
                                                                                                    sp18 = *(s32 *)((u8 *)arg0 + 0x74);
                                                                                                    temp_v0_19 = func_0015A570((s16 *) &sp18, 4, 1, arg1);
                                                                                                    if (temp_v0_19 == temp_v0_18) {
                                                                                                        sp18 = *(s32 *)((u8 *)arg0 + 0x78);
                                                                                                        temp_v0_20 = func_0015A570((s16 *) &sp18, 4, 1, arg1);
                                                                                                        if (temp_v0_20 == temp_v0_19) {
                                                                                                            sp18 = *(s32 *)((u8 *)arg0 + 0x7C);
                                                                                                            if (func_0015A570((s16 *) &sp18, 4, 1, arg1) == temp_v0_20) {
                                                                                                                if (var_s5 >= *(s32 *)((u8 *)arg0 + 0x6C)) {
                                                                                                                    goto block_32;
                                                                                                                }
                                                                                                                goto loop_25;
                                                                                                            }
                                                                                                            /* Duplicate return node #64. Try simplifying control flow for better match */
                                                                                                            return 0;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        goto block_63;
                                                                                    }
                                                                                    goto block_32;
                                                                                }
                                                                            }
                                                                            /* Duplicate return node #64. Try simplifying control flow for better match */
                                                                            return 0;
                                                                        }
block_32:
                                                                        temp_s0 = *(s8 *)((u8 *)arg0 + 0x2D6);
                                                                        if (temp_s0 != 1) {
                                                                            goto block_46;
                                                                        }
                                                                        if (*(s32 *)((u8 *)arg0 + 0x6C) == 0) {
                                                                            sp18 = 0;
                                                                            if (func_0015A570((s16 *) &sp18, 4, 1, arg1) == temp_s0) {
                                                                                var_s2 += 4;
                                                                                goto block_38;
                                                                            }
                                                                            /* Duplicate return node #64. Try simplifying control flow for better match */
                                                                            return 0;
                                                                        }
block_38:
                                                                        sp18 = 0x41494E46;
                                                                        temp_v0_21 = func_0015A570((s16 *) &sp18, 4, 1, arg1);
                                                                        if (temp_v0_21 == temp_s0) {
                                                                            sp18 = 0x18;
                                                                            temp_v0_22 = func_0015A570((s16 *) &sp18, 4, 1, arg1);
                                                                            if ((temp_v0_22 == temp_v0_21) && (func_0015A570(arg0 + 0x2D7, 1, 0x10, arg1) == 0x10)) {
                                                                                sp16 = *(u16 *)((u8 *)arg0 + 0x2E8);
                                                                                temp_v0_23 = func_0015A570(&sp16, 2, 1, arg1);
                                                                                if (temp_v0_23 == temp_v0_22) {
                                                                                    sp16 = 0;
                                                                                    temp_v0_24 = func_0015A570(&sp16, 2, 1, arg1);
                                                                                    if (temp_v0_24 == temp_v0_23) {
                                                                                        sp16 = *(u16 *)((u8 *)arg0 + 0x2EA);
                                                                                        temp_v0_25 = func_0015A570(&sp16, 2, 1, arg1);
                                                                                        if (temp_v0_25 == temp_v0_24) {
                                                                                            sp16 = *(u16 *)((u8 *)arg0 + 0x2EC);
                                                                                            if (func_0015A570(&sp16, 2, 1, arg1) == temp_v0_25) {
                                                                                                var_s2 = var_s2 + 4 + 4 + 0x10 + 2 + 2 + 2 + 2;
block_46:
                                                                                                if (*(s8 *)((u8 *)arg0 + 0x2EE) == 1) {
                                                                                                    if (*(s32 *)((u8 *)arg0 + 0x6C) == 0) {
                                                                                                        sp18 = 0;
                                                                                                        if (func_0015A570((s16 *) &sp18, 4, 1, arg1) == *(s8 *)((u8 *)arg0 + 0x2EE)) {
                                                                                                            var_s2 += 4;
                                                                                                            goto block_50;
                                                                                                        }
                                                                                                        /* Duplicate return node #64. Try simplifying control flow for better match */
                                                                                                        return 0;
                                                                                                    }
block_50:
                                                                                                    sp18 = 0x43494E46;
                                                                                                    temp_v0_26 = func_0015A570((s16 *) &sp18, 4, 1, arg1);
                                                                                                    if (temp_v0_26 == *(s8 *)((u8 *)arg0 + 0x2EE)) {
                                                                                                        sp18 = *(s32 *)((u8 *)arg0 + 0x2F4);
                                                                                                        if (func_0015A570((s16 *) &sp18, 4, 1, arg1) == temp_v0_26) {
                                                                                                            temp_a2 = *(s32 *)((u8 *)arg0 + 0x2F4);
                                                                                                            var_s2 = var_s2 + 4 + 4;
                                                                                                            if (temp_a2 != 0) {
                                                                                                                temp_a0 = *(s16 **)((u8 *)arg0 + 0x2F0);
                                                                                                                if (temp_a0 != NULL) {
                                                                                                                    temp_v0_27 = func_0015A570(temp_a0, 1, temp_a2, arg1);
                                                                                                                    if (temp_v0_27 == *(s32 *)((u8 *)arg0 + 0x2F4)) {
                                                                                                                        var_s2 += temp_v0_27;
                                                                                                                        goto block_56;
                                                                                                                    }
                                                                                                                    /* Duplicate return node #64. Try simplifying control flow for better match */
                                                                                                                    return 0;
                                                                                                                }
                                                                                                            }
                                                                                                            goto block_56;
                                                                                                        }
                                                                                                        goto block_63;
                                                                                                    }
                                                                                                    /* Duplicate return node #64. Try simplifying control flow for better match */
                                                                                                    return 0;
                                                                                                }
block_56:
                                                                                                temp_s0_2 = *(s32 *)((u8 *)arg0 + 0x48) - temp_fp;
                                                                                                sp14 = 0;
                                                                                                if (var_s2 < temp_s0_2) {
loop_58:
                                                                                                    if (func_0015A570((s16 *) &sp14, 1, 1, arg1) == 1) {
                                                                                                        var_s2 += 1;
                                                                                                        if (var_s2 >= temp_s0_2) {
                                                                                                            goto block_60;
                                                                                                        }
                                                                                                        goto loop_58;
                                                                                                    }
                                                                                                    /* Duplicate return node #64. Try simplifying control flow for better match */
                                                                                                    return 0;
                                                                                                }
block_60:
                                                                                                if (func_0015A570(D_0040E084, 1, temp_fp, arg1) == temp_fp) {
                                                                                                    return var_s2 + temp_fp + 4;
                                                                                                }
                                                                                                goto block_63;
                                                                                            }
                                                                                            /* Duplicate return node #64. Try simplifying control flow for better match */
                                                                                            return 0;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
block_63:
                                                                            /* Duplicate return node #64. Try simplifying control flow for better match */
                                                                            return 0;
                                                                        }
                                                                        /* Duplicate return node #64. Try simplifying control flow for better match */
                                                                        return 0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                /* Duplicate return node #64. Try simplifying control flow for better match */
                                                return 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
