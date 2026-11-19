/* Draft (not built): func_0022ACF0 at 0x0022ACF0, size 0xC10, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'float' mwccps2.exe Compiler: @ 921: )((u8 *)var_v1 + 4)), &spC0, *(s32 *)((u8 *)arg0 + 0x14), (f32)(s32)(var_f12_2)));
 * Original: asm/nonmatchings/battle/a2d/func_0022ACF0.s */

// src/battle/a2d.c func_0022ACF0 cerr diff=-1/0
extern s32 D_00470720;
void func_0022ACF0(u8 *arg0) {
    s32 saved_reg_s2;
    s32 sp60;
    s32 sp80;
    s32 spA0;
    s32 spC0;
    s32 (*temp_v1_7)(u8 *, s32, s32 *);
    f32 (*temp_v1_9)(u8 *, s32, s32 *);
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_12;
    f32 temp_f0_13;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f12;
    f32 var_f12_10;
    f32 var_f12_11;
    f32 var_f12_2;
    f32 var_f12_3;
    f32 var_f12_4;
    f32 var_f12_5;
    f32 var_f12_6;
    f32 var_f12_7;
    f32 var_f12_8;
    f32 var_f12_9;
    f32 var_f20;
    s32 *var_a2_2;
    s32 *var_a2_3;
    s32 temp_a0_10;
    s32 temp_a0_2;
    s32 temp_a0_8;
    s32 temp_ret;
    s32 temp_ret_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_8;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_a2_4;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1_5;
    s32 var_v1_6;
    u8 *temp_a0;
    u8 *temp_a0_11;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_9;
    u8 *temp_a1;
    u8 *temp_a3;
    u8 *temp_t0;
    u8 *temp_t0_2;
    u8 *var_a0;
    u8 *var_a0_2;
    u8 *var_a2;
    u8 *var_s2;
    u8 *var_v1;
    u8 *var_v1_2;
    u8 *var_v1_3;
    u8 *var_v1_4;
    u8 *var_v1_7;

    var_s2 = (unsigned char *)(saved_reg_s2);
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x28);
    if (temp_a0 != NULL) {
        func_0022ACF0(temp_a0);
    }
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0xC);
    if (temp_a0_2 & 1) {
        var_s2 = *(u8 **)((u8 *)arg0 + 0);
    } else if (temp_a0_2 & 2) {
        var_s2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x10);
    }
    var_a2 = NULL;
    if (0 == 0) {
        var_a2 = D_004706CC;
    }
    temp_a1 = D_004706CC;
    D_004706CC = temp_a1 + 0x50;
    *(f32 *)((u8 *)temp_a1 + 0x50) = (f32) *(f32 *)((u8 *)var_a2 + 0);
    *(f32 *)((u8 *)temp_a1 + 0x54) = (f32) *(f32 *)((u8 *)var_a2 + 4);
    *(f32 *)((u8 *)temp_a1 + 0x58) = (f32) *(f32 *)((u8 *)var_a2 + 8);
    *(f32 *)((u8 *)temp_a1 + 0x5C) = (f32) *(f32 *)((u8 *)var_a2 + 0xC);
    *(s128 *)((u8 *)temp_a1 + 0x60) = (s128) *(s128 *)((u8 *)var_a2 + 0x10);
    *(s128 *)((u8 *)temp_a1 + 0x70) = (s128) *(s128 *)((u8 *)var_a2 + 0x20);
    *(f32 *)((u8 *)temp_a1 + 0x80) = (f32) *(f32 *)((u8 *)var_a2 + 0x30);
    *(f32 *)((u8 *)temp_a1 + 0x84) = (f32) *(f32 *)((u8 *)var_a2 + 0x34);
    *(f32 *)((u8 *)temp_a1 + 0x88) = (f32) *(f32 *)((u8 *)var_a2 + 0x38);
    *(f32 *)((u8 *)temp_a1 + 0x8C) = (f32) *(f32 *)((u8 *)var_a2 + 0x3C);
    var_f0 = *(f32 *)((u8 *)var_a2 + 0x4C);
    *(f32 *)((u8 *)temp_a1 + 0x90) = (f32) *(f32 *)((u8 *)var_a2 + 0x40);
    *(f32 *)((u8 *)temp_a1 + 0x94) = (f32) *(f32 *)((u8 *)var_a2 + 0x44);
    *(f32 *)((u8 *)temp_a1 + 0x98) = (f32) *(f32 *)((u8 *)var_a2 + 0x48);
    *(f32 *)((u8 *)temp_a1 + 0x9C) = var_f0;
    D_004706D4 += 1;
    if ((var_s2 != NULL) && (*(s32 *)((u8 *)arg0 + 4) & 2)) {
        var_f20 = *(f32 *)((u8 *)arg0 + 0x10);
loop_14:
        if (*(u8 **)((u8 *)var_s2 + 0x18) == NULL) {

        } else {
            var_f0 = (f32) *(s32 *)((u8 *)var_s2 + 0x1C);
            if (var_f0 <= var_f20) {
                var_s2 = *(u8 **)((u8 *)var_s2 + 0x18);
                var_f20 -= var_f0;
                goto loop_14;
            }
        }
        temp_a0_3 = *(u8 **)((u8 *)var_s2 + 4);
        var_f12 = var_f20;
        var_v0 = -1;
        if (temp_a0_3 != NULL) {
            temp_v1 = *(s32 *)((u8 *)temp_a0_3 + 0x10);
            if (temp_v1 != 0) {
                if ((temp_a0_3 == NULL) || (temp_v1 == 0)) {
                    var_f12 = 0.0f;
                } else if (*(s32 *)((u8 *)temp_a0_3 + 0) & 1) {
                    var_f12 = (f32) (M2C_BITWISE(s32, var_f0) % (s16) *(s16 *)((u8 *)temp_a0_3 + 6)) + (var_f12 - (f32) var_f0);
                } else {
                    temp_f0 = (f32) *(s16 *)((u8 *)temp_a0_3 + 6);
                    if (!(var_f12 < temp_f0)) {
                        var_f12 = temp_f0;
                    }
                }
                if (var_f12 == (f32) *(s16 *)((u8 *)temp_a0_3 + 6)) {
                    var_v0 = *(s16 *)((u8 *)temp_a0_3 + 4) - 1;
                } else {
                    var_v0 = func_002270B0(*(s32 *)((u8 *)temp_a0_3 + 0x10), *(s16 *)((u8 *)temp_a0_3 + 4), *(s32 *)((u8 *)arg0 + 0x14), var_f12);
                }
            }
        }
        *(s32 *)((u8 *)arg0 + 0x14) = var_v0;
        var_f12_2 = var_f20;
        var_v1 = var_s2;
loop_34:
        if (*(u8 **)((u8 *)var_v1 + 0x18) == NULL) {

        } else {
            temp_f0_2 = (f32) *(s32 *)((u8 *)var_v1 + 0x1C);
            if (temp_f0_2 <= var_f12_2) {
                var_v1 = *(u8 **)((u8 *)var_v1 + 0x18);
                var_f12_2 -= temp_f0_2;
                goto loop_34;
            }
        }
        temp_f0_3 = (f32)(func_0022A880((s32)(*(s32 *)((u8 *)var_v1 + 4)), &spC0, *(s32 *)((u8 *)arg0 + 0x14), (f32)(s32)(var_f12_2)));
        temp_a0_4 = *(u8 **)((u8 *)var_s2 + 8);
        var_f12_3 = var_f20;
        var_v0_2 = -1;
        if (temp_a0_4 != NULL) {
            temp_v1_2 = *(s32 *)((u8 *)temp_a0_4 + 0x10);
            if (temp_v1_2 != 0) {
                if (temp_a0_4 != NULL) {
                    if (temp_v1_2 == 0) {
                        goto block_41;
                    }
                    if (*(s32 *)((u8 *)temp_a0_4 + 0) & 1) {
                        var_f12_3 = (f32) (M2C_BITWISE(s32, temp_f0_3) % (s16) *(s16 *)((u8 *)temp_a0_4 + 6)) + (var_f12_3 - (f32) temp_f0_3);
                    } else {
                        temp_f0_4 = (f32) *(s16 *)((u8 *)temp_a0_4 + 6);
                        if (!(var_f12_3 < temp_f0_4)) {
                            var_f12_3 = temp_f0_4;
                        }
                    }
                } else {
block_41:
                    var_f12_3 = 0.0f;
                }
                if (var_f12_3 == (f32) *(s16 *)((u8 *)temp_a0_4 + 6)) {
                    var_v0_2 = *(s16 *)((u8 *)temp_a0_4 + 4) - 1;
                } else {
                    var_v0_2 = func_002270B0(*(s32 *)((u8 *)temp_a0_4 + 0x10), *(s16 *)((u8 *)temp_a0_4 + 4), *(s32 *)((u8 *)arg0 + 0x1C), var_f12_3);
                }
            }
        }
        *(s32 *)((u8 *)arg0 + 0x1C) = var_v0_2;
        var_f12_4 = var_f20;
        var_v1_2 = var_s2;
loop_55:
        if (*(u8 **)((u8 *)var_v1_2 + 0x18) == NULL) {

        } else {
            temp_f0_5 = (f32) *(s32 *)((u8 *)var_v1_2 + 0x1C);
            if (temp_f0_5 <= var_f12_4) {
                var_v1_2 = *(u8 **)((u8 *)var_v1_2 + 0x18);
                var_f12_4 -= temp_f0_5;
                goto loop_55;
            }
        }
        temp_f0_6 = (f32)(func_00229480((s32)(*(s32 *)((u8 *)var_v1_2 + 8)), &spA0, *(s32 *)((u8 *)arg0 + 0x1C), (f32)(s32)(var_f12_4)));
        temp_a0_5 = *(u8 **)((u8 *)var_s2 + 4);
        var_f12_5 = var_f20;
        var_v0_3 = -1;
        if (temp_a0_5 != NULL) {
            temp_v1_3 = *(s32 *)((u8 *)temp_a0_5 + 0x18);
            if (temp_v1_3 != 0) {
                if (temp_a0_5 != NULL) {
                    if (temp_v1_3 == 0) {
                        goto block_62;
                    }
                    if (*(s32 *)((u8 *)temp_a0_5 + 0) & 2) {
                        var_f12_5 = (f32) (M2C_BITWISE(s32, temp_f0_6) % (s16) *(s16 *)((u8 *)temp_a0_5 + 0xA)) + (var_f12_5 - (f32) temp_f0_6);
                    } else {
                        temp_f0_7 = (f32) *(s16 *)((u8 *)temp_a0_5 + 0xA);
                        if (!(var_f12_5 < temp_f0_7)) {
                            var_f12_5 = temp_f0_7;
                        }
                    }
                } else {
block_62:
                    var_f12_5 = 0.0f;
                }
                if (var_f12_5 == (f32) *(s16 *)((u8 *)temp_a0_5 + 0xA)) {
                    var_v0_3 = *(s16 *)((u8 *)temp_a0_5 + 8) - 1;
                } else {
                    var_v0_3 = func_002270B0(*(s32 *)((u8 *)temp_a0_5 + 0x18), *(s16 *)((u8 *)temp_a0_5 + 8), *(s32 *)((u8 *)arg0 + 0x18), var_f12_5);
                }
            }
        }
        *(s32 *)((u8 *)arg0 + 0x18) = var_v0_3;
        var_f12_6 = var_f20;
        var_v1_3 = var_s2;
loop_76:
        if (*(u8 **)((u8 *)var_v1_3 + 0x18) == NULL) {

        } else {
            temp_f0_8 = (f32) *(s32 *)((u8 *)var_v1_3 + 0x1C);
            if (temp_f0_8 <= var_f12_6) {
                var_v1_3 = *(u8 **)((u8 *)var_v1_3 + 0x18);
                var_f12_6 -= temp_f0_8;
                goto loop_76;
            }
        }
        temp_f0_9 = (f32)(func_0022A0A0((s32)(*(s32 *)((u8 *)var_v1_3 + 4)), &sp80, *(s32 *)((u8 *)arg0 + 0x18), (f32)(s32)(var_f12_6)));
        temp_a0_6 = *(u8 **)((u8 *)var_s2 + 8);
        var_f12_7 = var_f20;
        var_v0_4 = -1;
        if (temp_a0_6 != NULL) {
            temp_v1_4 = *(s32 *)((u8 *)temp_a0_6 + 0x18);
            if (temp_v1_4 != 0) {
                if (temp_a0_6 != NULL) {
                    if (temp_v1_4 == 0) {
                        goto block_83;
                    }
                    if (*(s32 *)((u8 *)temp_a0_6 + 0) & 2) {
                        var_f12_7 = (f32) (M2C_BITWISE(s32, temp_f0_9) % (s16) *(s16 *)((u8 *)temp_a0_6 + 0xA)) + (var_f12_7 - (f32) temp_f0_9);
                    } else {
                        temp_f0_10 = (f32) *(s16 *)((u8 *)temp_a0_6 + 0xA);
                        if (!(var_f12_7 < temp_f0_10)) {
                            var_f12_7 = temp_f0_10;
                        }
                    }
                } else {
block_83:
                    var_f12_7 = 0.0f;
                }
                if (var_f12_7 == (f32) *(s16 *)((u8 *)temp_a0_6 + 0xA)) {
                    var_v0_4 = *(s16 *)((u8 *)temp_a0_6 + 8) - 1;
                } else {
                    var_v0_4 = func_002270B0(*(s32 *)((u8 *)temp_a0_6 + 0x18), *(s16 *)((u8 *)temp_a0_6 + 8), *(s32 *)((u8 *)arg0 + 0x20), var_f12_7);
                }
            }
        }
        *(s32 *)((u8 *)arg0 + 0x20) = var_v0_4;
        var_f12_8 = var_f20;
        var_v1_4 = var_s2;
loop_97:
        if (*(u8 **)((u8 *)var_v1_4 + 0x18) == NULL) {

        } else {
            temp_f0_11 = (f32) *(s32 *)((u8 *)var_v1_4 + 0x1C);
            if (temp_f0_11 <= var_f12_8) {
                var_v1_4 = *(u8 **)((u8 *)var_v1_4 + 0x18);
                var_f12_8 -= temp_f0_11;
                goto loop_97;
            }
        }
        var_f0_2 = (f32)(func_00228FA0((s32)(*(s32 *)((u8 *)var_v1_4 + 8)), &sp60, *(s32 *)((u8 *)arg0 + 0x20), (f32)(s32)(var_f12_8)));
        temp_a3 = *(u8 **)((u8 *)var_s2 + 0x10);
        var_f12_9 = var_f20;
        var_s1 = -1;
        if ((temp_a3 != NULL) && (*(s32 *)((u8 *)temp_a3 + 8) != 0)) {
            if (temp_a3 == NULL) {
                var_f12_9 = 0.0f;
            } else if (*(s32 *)((u8 *)temp_a3 + 0) & 1) {
                var_f12_9 = (f32) (M2C_BITWISE(s32, var_f0_2) % (s16) *(s16 *)((u8 *)temp_a3 + 6)) + (var_f12_9 - (f32) var_f0_2);
            } else {
                temp_f0_12 = (f32) *(s16 *)((u8 *)temp_a3 + 6);
                if (!(var_f12_9 < temp_f0_12)) {
                    var_f12_9 = temp_f0_12;
                }
            }
            var_f0_2 = (f32) *(s16 *)((u8 *)temp_a3 + 6);
            if (var_f12_9 == var_f0_2) {
                var_s1 = *(s16 *)((u8 *)temp_a3 + 4) - 1;
            } else {
                temp_ret = func_002270B0(*(s32 *)((u8 *)temp_a3 + 8), *(s16 *)((u8 *)temp_a3 + 4), *(s32 *)((u8 *)arg0 + 0x24), M2C_BITWISE(f32, temp_a3), var_f12_9);
                var_f0_2 = M2C_BITWISE(f32, temp_ret);
                var_s1 = temp_ret;
            }
        }
        if (var_s1 >= 0) {
            temp_v1_5 = *(s32 *)((u8 *)arg0 + 0x24);
            if (var_s1 == temp_v1_5) {
                var_f12_10 = var_f20;
                if (*(s16 *)((u8 *)((var_s1 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s2 + 0x10)) + 8)) + 2) == 1) {
                    var_a0 = var_s2;
loop_118:
                    if (*(u8 **)((u8 *)var_a0 + 0x18) == NULL) {

                    } else {
                        var_f0_2 = (f32) *(s32 *)((u8 *)var_a0 + 0x1C);
                        if (var_f0_2 <= var_f12_10) {
                            var_a0 = *(u8 **)((u8 *)var_a0 + 0x18);
                            var_f12_10 -= var_f0_2;
                            goto loop_118;
                        }
                    }
                    temp_t0 = *(u8 **)((u8 *)var_a0 + 0x10);
                    var_a1 = var_s1;
                    var_a2_2 = NULL;
                    if ((temp_t0 != NULL) && (*(s32 *)((u8 *)temp_t0 + 8) != 0)) {
                        if (temp_t0 == NULL) {
                            var_f12_10 = 0.0f;
                        } else if (*(s32 *)((u8 *)temp_t0 + 0) & 1) {
                            var_f12_10 = (f32) (M2C_BITWISE(s32, var_f0_2) % (s16) *(s16 *)((u8 *)temp_t0 + 6)) + (var_f12_10 - (f32) var_f0_2);
                        } else {
                            temp_f0_13 = (f32) *(s16 *)((u8 *)temp_t0 + 6);
                            if (!(var_f12_10 < temp_f0_13)) {
                                var_f12_10 = temp_f0_13;
                            }
                        }
                        if (var_a1 < 0) {
                            if (var_f12_10 == (f32) *(s16 *)((u8 *)temp_t0 + 6)) {
                                var_a1 = *(s16 *)((u8 *)temp_t0 + 4) - 1;
                            } else {
                                var_a1 = func_002270B0(*(s32 *)((u8 *)temp_t0 + 8), *(s16 *)((u8 *)temp_t0 + 4), -1, var_f12_10);
                            }
                        }
                        var_a2_2 = (int *)(*(s32 *)((u8 *)temp_t0 + 0xC) + (var_a1 * 0x10));
                    }
                    if (var_a2_2 != NULL) {
                        temp_v1_6 = *var_a2_2;
                        if (temp_v1_6 >= 0) {
                            temp_v1_7 = *(s32 *)(D_00470720 + (temp_v1_6 * 4));
                            if (temp_v1_7 != NULL) {
                                temp_v1_7(var_a2_2 + 4, var_a1,(unsigned char *)(var_a2_2));
                            }
                        }
                    }
                }
            } else {
                var_s0 = var_s1 - temp_v1_5;
loop_168:
                if (var_s0 != 0) {
                    var_f12_11 = var_f20;
                    var_a0_2 = var_s2;
                    var_a1_2 = *(s32 *)((u8 *)arg0 + 0x24) + var_s0;
loop_143:
                    if (*(u8 **)((u8 *)var_a0_2 + 0x18) == NULL) {

                    } else {
                        var_f0_2 = (f32) *(s32 *)((u8 *)var_a0_2 + 0x1C);
                        if (var_f0_2 <= var_f12_11) {
                            var_a0_2 = *(u8 **)((u8 *)var_a0_2 + 0x18);
                            var_f12_11 -= var_f0_2;
                            goto loop_143;
                        }
                    }
                    temp_t0_2 = *(u8 **)((u8 *)var_a0_2 + 0x10);
                    var_a2_3 = NULL;
                    if ((temp_t0_2 != NULL) && (*(s32 *)((u8 *)temp_t0_2 + 8) != 0)) {
                        if (temp_t0_2 == NULL) {
                            var_f12_11 = 0.0f;
                        } else if (*(s32 *)((u8 *)temp_t0_2 + 0) & 1) {
                            temp_f1 = var_f12_11 - (f32) var_f0_2;
                            var_f0_2 = (f32) (M2C_BITWISE(s32, var_f0_2) % (s16) *(s16 *)((u8 *)temp_t0_2 + 6));
                            var_f12_11 = var_f0_2 + temp_f1;
                        } else {
                            var_f0_2 = (f32) *(s16 *)((u8 *)temp_t0_2 + 6);
                            if (!(var_f12_11 < var_f0_2)) {
                                var_f12_11 = var_f0_2;
                            }
                        }
                        if (var_a1_2 < 0) {
                            var_f0_2 = (f32) *(s16 *)((u8 *)temp_t0_2 + 6);
                            if (var_f12_11 == var_f0_2) {
                                var_a1_2 = *(s16 *)((u8 *)temp_t0_2 + 4) - 1;
                            } else {
                                temp_ret_2 = func_002270B0(*(s32 *)((u8 *)temp_t0_2 + 8), *(s16 *)((u8 *)temp_t0_2 + 4), -1, var_f12_11);
                                var_f0_2 = M2C_BITWISE(f32, temp_ret_2);
                                var_a1_2 = temp_ret_2;
                            }
                        }
                        var_a2_3 = (int *)(*(s32 *)((u8 *)temp_t0_2 + 0xC) + (var_a1_2 * 0x10));
                    }
                    if (var_a2_3 != NULL) {
                        temp_v1_8 = *var_a2_3;
                        if (temp_v1_8 >= 0) {
                            temp_v1_9 = *(s32 *)(D_00470720 + (temp_v1_8 * 4));
                            if (temp_v1_9 != NULL) {
                                var_f0_2 = (u8 *)temp_v1_9(var_a2_3 + 4, var_a1_2,(unsigned char *)(var_a2_3));
                            }
                        }
                    }
                    var_v1_5 = -1;
                    if (var_s0 > 0) {

                    } else {
                        var_v1_5 = 1;
                    }
                    var_s0 += var_v1_5;
                    goto loop_168;
                }
            }
        }
        *(s32 *)((u8 *)arg0 + 0x24) = var_s1;
        temp_a0_7 = *(u8 **)((u8 *)arg0 + 0x30);
        var_a2_4 = 0;
        var_a1_3 = 0;
        var_v1_6 = 0;
        if ((*(f32 *)((u8 *)var_s2 + 0x20) == 0.0f) && (*(f32 *)((u8 *)var_s2 + 0x28) == 0.0f)) {
            var_v1_6 = 1;
        }
        if ((var_v1_6 != 0) && (*(f32 *)((u8 *)var_s2 + 0x24) == 0.0f)) {
            var_a1_3 = 1;
        }
        if ((var_a1_3 != 0) && (*(f32 *)((u8 *)var_s2 + 0x2C) == 0.0f)) {
            var_a2_4 = 1;
        }
        if (var_a2_4 != 0) {
            temp_a0_8 = *(s32 *)((u8 *)var_s2 + 0xC);
            if (temp_a0_8 != 0) {
                func_00227B20(temp_a0_8, &sp80, &sp60, &spC0, var_f20);
            }
            temp_a0_9 = *(u8 **)((u8 *)arg0 + 0x2C);
            if (temp_a0_9 != NULL) {
                func_0022ACF0(temp_a0_9);
            }
            var_v1_7 = D_004706CC - 0x50;
            D_004706D4 -= 1;
        } else {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            *(s32 *)((u8 *)temp_a0_7 + 4) = (s32) (*(s32 *)((u8 *)temp_a0_7 + 4) | 1);
            *(s32 *)((u8 *)temp_a0_7 + 4) = (s32) (*(s32 *)((u8 *)temp_a0_7 + 4) | (*(s32 *)((u8 *)var_s2 + 0) & 6));
            func_00226070(temp_a0_7, &sp80, &sp60, &spC0);
            temp_a0_10 = *(s32 *)((u8 *)var_s2 + 0xC);
            if (temp_a0_10 != 0) {
                func_00227B20(temp_a0_10, &sp80, &sp60, &spC0, var_f20);
            }
            *(s32 *)((u8 *)arg0 + 4) = (s32) (*(s32 *)((u8 *)arg0 + 4) ^ 2);
            goto block_188;
        }
    } else {
block_188:
        temp_a0_11 = *(u8 **)((u8 *)arg0 + 0x2C);
        if (temp_a0_11 != NULL) {
            func_0022ACF0(temp_a0_11);
        }
        var_v1_7 = D_004706CC - 0x50;
        D_004706D4 -= 1;
    }
    D_004706CC = var_v1_7;
}
