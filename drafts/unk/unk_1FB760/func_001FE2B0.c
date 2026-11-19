/* Draft (not built): func_001FE2B0 at 0x001FE2B0, size 0xA48, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 579 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x750, original 0xA48
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FE2B0.s */

// src/unk/unk_1FB760.c func_001FE2B0 size diff=579/468
extern void *D_0051CD04;
extern void *D_0051CD08;
extern s32 D_0051CD20;
extern s32 gBtbBg;
extern char *D_0051CD14[];
f32 func_001FE2B0(f32 fparg0, f32 fparg1) {
    s32 spF4;
    s32 spE4;
    s32 spD4;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    s32 spBC;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    s32 spCC;
    f32 spD0;
    s32 spE0;
    s32 spF0;
    s32 sp100;
    s32 sp110;
    f32 sp120;
    u8 *sp130;
    s32 sp134;
    s32 sp138;
    s32 *var_s5;
    f32 *var_fp;
    f32 *var_s7;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    f32 var_f1_5;
    f32 var_f1_6;
    s32 temp_a2;
    s32 temp_a2_3;
    s32 temp_t9;
    s32 temp_t9_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    s32 var_s6;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_t2;
    s32 var_t2_2;
    s32 var_t7;
    s32 var_t7_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u8 *temp_a2_2;
    u8 *temp_a2_4;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 *temp_t5;
    u8 *temp_t8;
    u8 *temp_t8_2;
    u8 *var_s3;
    u8 *var_t3;
    u8 *var_t3_2;
    u8 *var_t4;
    u8 *var_t4_2;
    u8 *var_v0;
    u8 *var_v0_2;

    if (D_0051CD28 == 0) {
        return 0.0f;
    }
    if (gBtbBg == 1) {
        return 0.0f;
    }
    var_v0 = func_001FD230((unsigned char *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((D_0051CD20 * 0x24) + *D_0051CD14) + 4)) + 0xBC)), 0, 0);
    if (var_v0 == NULL) {
        return 0.0f;
    }
    temp_t5 = var_v0;
    spB4 = -10000.0f;
    var_t4 = var_v0;
    spC4 = -10000.0f;
    var_t3 = var_v0;
    var_t2 = 1;
    var_t1 = 0;
    var_t0 = 0;
    var_s2 = 0x3F800000;
    var_fp = &spB0;
    var_s7 = &sp120;
    var_s1 = 0xBF800000;
loop_81:
    if (var_v0 != NULL) {
        temp_t9 = *(s32 *)((u8 *)var_v0 + 0x4C);
        var_s0 = 0;
loop_59:
        if (var_s0 >= *(s32 *)((u8 *)var_v0 + 0x30)) {
            if (0 == 0) {
                if (var_t2 != 0) {
                    if (var_t4 != NULL) {
                        var_v0 = *(u8 **)((u8 *)var_t4 + 0x40);
                        var_t4 = var_v0;
                    } else if (var_t3 != NULL) {
                        var_v0 = *(u8 **)((u8 *)var_t3 + 0x44);
                        var_t3 = var_v0;
                    }
                    var_t2 = 0;
                    var_t1 += 1;
                } else {
                    if (var_t3 != NULL) {
                        var_v0 = *(u8 **)((u8 *)var_t3 + 0x44);
                        var_t3 = var_v0;
                    } else if (var_t4 != NULL) {
                        var_v0 = *(u8 **)((u8 *)var_t4 + 0x40);
                        var_t4 = var_v0;
                    }
                    var_t2 = 1;
                    var_t0 += 1;
                }
                if (var_t4 != var_t3) {
                    if ((var_t1 >= 3) && (var_t0 >= 3) && (var_t1 == var_t0)) {
                        goto block_80;
                    }
                    goto loop_81;
                }
block_80:
                spB4 = -10000.0f;
            } else {
                goto loop_81;
            }
        } else {
            temp_a3 = (unsigned char *)(*(s32 *)(temp_t9 + (var_s0 * 4)));
            var_s3 = *(u8 **)((u8 *)temp_a3 + 0x18);
            temp_t8 = *(u8 **)((u8 *)temp_a3 + 0);
            temp_a2 = *(s32 *)((u8 *)var_s3 + 0) * 8;
            var_s3 = *(u8 **)((u8 *)var_s3 + 4);
            temp_v1 = *(s32 *)((u8 *)(temp_a2 + *(s32 *)((u8 *)temp_a3 + 0x20)) + 8);
            var_a2 = *(s32 *)((u8 *)((temp_v1 * 0x10) + var_s3) + 0xC);
            var_t7 = 0;
            if (var_a2 == 0) {
                var_a2 = *(s32 *)((u8 *)var_s3 + 0xC);
            }
            if ((temp_v1 >= 0) && (*(s32 *)((u8 *)temp_a3 + 0x10) == var_a2)) {
                temp_v1_2 = *(s32 *)((u8 *)temp_t8 + 0x10);
                if (temp_v1_2 >= 0) {
                    var_s3 = (u8 *) (temp_v1_2 * 4);
                    temp_a2_2 = (unsigned char *)(*(*(s32 *)((u8 *)D_0051CD08 + 8) + var_s3));
                    var_s3 = *(u8 **)((u8 *)temp_a2_2 + 4);
                    var_a3 = 0;
loop_21:
                    var_s4 = var_a3 < (s32) var_s3;
                    if (var_s4 == 0) {
                        var_v1 = 0;
                    } else {
                        var_s4 = *(s32 *)((u8 *)temp_a2_2 + 8);
                        var_s6 = var_a3 * 0x10;
                        var_s5 = *(s32 **)((u8 *)D_0051CD04 + 8);
                        var_s4 += var_s6;
                        var_s6 = *(s32 *)((u8 *)var_s4 + 0);
                        var_s6 *= 4;
                        var_s4 = *(s32 *)((u8 *)var_s4 + 4);
                        var_s5 += var_s6;
                        var_s5 = (int *)(*var_s5);
                        var_s4 *= 4;
                        var_s5 = *(s32 **)((u8 *)var_s5 + 0xC);
                        var_s4 = (s32) (var_s5 + var_s4);
                        var_s4 = *(s32 *)var_s4;
                        var_s4 = *(s32 *)var_s4;
                        var_s4 &= 2;
                        if (var_s4 != 0) {
                            var_v1 = 1;
                        } else {
                            var_a3 += 1;
                            goto loop_21;
                        }
                    }
                    if (var_v1 != 0) {
                        var_t7 = 1;
                    }
                }
                if (var_t7 != 0) {
                    temp_v1_3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)(temp_t9 + (var_s0 * 4))) + 8)) + 4) + 0x10;
                    sp130 = (unsigned char *)(temp_v1_3 + (*(s32 *)((u8 *)temp_t8 + 0x14) * 0x10));
                    sp134 = temp_v1_3 + (*(s32 *)((u8 *)temp_t8 + 0x18) * 0x10);
                    sp138 = temp_v1_3 + (*(s32 *)((u8 *)temp_t8 + 0x1C) * 0x10);
                    M2C_ERROR(/* unknown instruction: adda.s $f3, $f5 */);
                    M2C_ERROR(/* unknown instruction: mula.s $f4, $f21 */);
                    temp_f0 = -(M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f20 */) - M2C_ERROR(/* unknown instruction: madd.s $f1, $f1, $f0 */));
                    spB4 = temp_f0;
                    if (temp_f0 != 0.0f) {
                        spB4 = temp_f0 / *(f32 *)((u8 *)temp_t8 + 4);
                    }
                    var_v1_2 = 0;
                    spB0 = fparg0;
                    spBC = 0x3F800000;
                    spB8 = fparg1;
loop_31:
                    if (var_v1_2 < 3) {
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a3) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($fp) */);
                        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
                        var_v1_2 += 1;
                        goto loop_31;
                    }
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s7) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s7) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    if (spE4 < 0.0f) {
                        var_f1 = -1.0f;
                    } else {
                        var_f1 = 1.0f;
                    }
                    if (spD4 < 0.0f) {
                        var_f0 = -1.0f;
                    } else {
                        var_f0 = 1.0f;
                    }
                    if (var_f0 == var_f1) {
                        if (spF4 < 0.0f) {
                            var_f1_2 = -1.0f;
                        } else {
                            var_f1_2 = 1.0f;
                        }
                        if (spE4 < 0.0f) {
                            var_f0_2 = -1.0f;
                        } else {
                            var_f0_2 = 1.0f;
                        }
                        if (var_f0_2 == var_f1_2) {
                            if (spD4 < 0.0f) {
                                var_f1_3 = -1.0f;
                            } else {
                                var_f1_3 = 1.0f;
                            }
                            if (spF4 < 0.0f) {
                                var_f0_3 = -1.0f;
                            } else {
                                var_f0_3 = 1.0f;
                            }
                            if (var_f0_3 == var_f1_3) {

                            } else {
                                goto block_58;
                            }
                        } else {
                            goto block_58;
                        }
                    } else {
                        goto block_58;
                    }
                } else {
                    goto block_58;
                }
            } else {
block_58:
                var_s0 += 1;
                goto loop_59;
            }
        }
    }
    var_v0_2 = temp_t5;
    var_t4_2 = temp_t5;
    var_t3_2 = temp_t5;
    var_t2_2 = 1;
    var_t1_2 = 0;
    var_t0_2 = 0;
    var_s2 = 0x3F800000;
    var_s7 = &spC0;
    var_fp = &spD0;
    var_s1 = 0xBF800000;
loop_156:
    if (var_v0_2 != NULL) {
        temp_t9_2 = *(s32 *)((u8 *)var_v0_2 + 0x4C);
        var_s0 = 0;
loop_134:
        if (var_s0 >= *(s32 *)((u8 *)var_v0_2 + 0x30)) {
            if (0 == 0) {
                if (var_t2_2 != 0) {
                    if (var_t4_2 != NULL) {
                        var_v0_2 = *(u8 **)((u8 *)var_t4_2 + 0x40);
                        var_t4_2 = var_v0_2;
                    } else if (var_t3_2 != NULL) {
                        var_v0_2 = *(u8 **)((u8 *)var_t3_2 + 0x44);
                        var_t3_2 = var_v0_2;
                    }
                    var_t2_2 = 0;
                    var_t1_2 += 1;
                } else {
                    if (var_t3_2 != NULL) {
                        var_v0_2 = *(u8 **)((u8 *)var_t3_2 + 0x44);
                        var_t3_2 = var_v0_2;
                    } else if (var_t4_2 != NULL) {
                        var_v0_2 = *(u8 **)((u8 *)var_t4_2 + 0x40);
                        var_t4_2 = var_v0_2;
                    }
                    var_t2_2 = 1;
                    var_t0_2 += 1;
                }
                if (var_t4_2 != var_t3_2) {
                    if ((var_t1_2 >= 3) && (var_t0_2 >= 3) && (var_t1_2 == var_t0_2)) {
                        goto block_155;
                    }
                    goto loop_156;
                }
block_155:
                spC4 = -10000.0f;
            } else {
                goto loop_156;
            }
        } else {
            temp_a3_2 = (unsigned char *)(*(s32 *)(temp_t9_2 + (var_s0 * 4)));
            var_s3 = *(u8 **)((u8 *)temp_a3_2 + 0x18);
            temp_t8_2 = *(u8 **)((u8 *)temp_a3_2 + 0);
            temp_a2_3 = *(s32 *)((u8 *)var_s3 + 0) * 8;
            var_s3 = *(u8 **)((u8 *)var_s3 + 4);
            temp_v1_4 = *(s32 *)((u8 *)(temp_a2_3 + *(s32 *)((u8 *)temp_a3_2 + 0x20)) + 8);
            var_a2_2 = *(s32 *)((u8 *)((temp_v1_4 * 0x10) + var_s3) + 0xC);
            var_t7_2 = 0;
            if (var_a2_2 == 0) {
                var_a2_2 = *(s32 *)((u8 *)var_s3 + 0xC);
            }
            if ((temp_v1_4 >= 0) && (*(s32 *)((u8 *)temp_a3_2 + 0x10) == var_a2_2)) {
                temp_v1_5 = *(s32 *)((u8 *)temp_t8_2 + 0x10);
                if (temp_v1_5 >= 0) {
                    var_s3 = (u8 *) (temp_v1_5 * 4);
                    temp_a2_4 = (unsigned char *)(*(*(s32 *)((u8 *)D_0051CD08 + 8) + var_s3));
                    var_s3 = *(u8 **)((u8 *)temp_a2_4 + 4);
                    var_a3_2 = 0;
loop_95:
                    var_s4 = var_a3_2 < (s32) var_s3;
                    if (var_s4 == 0) {
                        var_v1_3 = 0;
                    } else {
                        var_s4 = *(s32 *)((u8 *)temp_a2_4 + 8);
                        var_s6 = var_a3_2 * 0x10;
                        var_s5 = *(s32 **)((u8 *)D_0051CD04 + 8);
                        var_s4 += var_s6;
                        var_s6 = *(s32 *)((u8 *)var_s4 + 0);
                        var_s6 *= 4;
                        var_s4 = *(s32 *)((u8 *)var_s4 + 4);
                        var_s5 += var_s6;
                        var_s5 = (int *)(*var_s5);
                        var_s4 *= 4;
                        var_s5 = *(s32 **)((u8 *)var_s5 + 0xC);
                        var_s4 = (s32) (var_s5 + var_s4);
                        var_s4 = *(s32 *)var_s4;
                        var_s4 = *(s32 *)var_s4;
                        var_s4 &= 8;
                        if (var_s4 != 0) {
                            var_v1_3 = 1;
                        } else {
                            var_a3_2 += 1;
                            goto loop_95;
                        }
                    }
                    if (var_v1_3 != 0) {
                        var_t7_2 = 1;
                    }
                }
                if (var_t7_2 != 0) {
                    temp_v1_6 = *(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)(temp_t9_2 + (var_s0 * 4))) + 8)) + 4) + 0x10;
                    sp130 = (unsigned char *)(temp_v1_6 + (*(s32 *)((u8 *)temp_t8_2 + 0x14) * 0x10));
                    sp134 = temp_v1_6 + (*(s32 *)((u8 *)temp_t8_2 + 0x18) * 0x10);
                    sp138 = temp_v1_6 + (*(s32 *)((u8 *)temp_t8_2 + 0x1C) * 0x10);
                    M2C_ERROR(/* unknown instruction: adda.s $f3, $f5 */);
                    M2C_ERROR(/* unknown instruction: mula.s $f4, $f21 */);
                    temp_f0_2 = -(M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f20 */) - M2C_ERROR(/* unknown instruction: madd.s $f1, $f1, $f0 */));
                    spC4 = temp_f0_2;
                    if (temp_f0_2 != 0.0f) {
                        spC4 = temp_f0_2 / *(f32 *)((u8 *)temp_t8_2 + 4);
                    }
                    var_v1_4 = 0;
                    spC0 = fparg0;
                    spCC = 0x3F800000;
                    spC8 = fparg1;
loop_105:
                    if (var_v1_4 < 3) {
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a3) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s7) */);
                        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
                        var_v1_4 += 1;
                        goto loop_105;
                    }
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t5) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($fp) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t5) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    if (spE4 < 0.0f) {
                        var_f1_4 = -1.0f;
                    } else {
                        var_f1_4 = 1.0f;
                    }
                    if (spD4 < 0.0f) {
                        var_f0_4 = -1.0f;
                    } else {
                        var_f0_4 = 1.0f;
                    }
                    if (var_f0_4 == var_f1_4) {
                        if (spF4 < 0.0f) {
                            var_f1_5 = -1.0f;
                        } else {
                            var_f1_5 = 1.0f;
                        }
                        if (spE4 < 0.0f) {
                            var_f0_5 = -1.0f;
                        } else {
                            var_f0_5 = 1.0f;
                        }
                        if (var_f0_5 == var_f1_5) {
                            if (spD4 < 0.0f) {
                                var_f1_6 = -1.0f;
                            } else {
                                var_f1_6 = 1.0f;
                            }
                            if (spF4 < 0.0f) {
                                var_f0_6 = -1.0f;
                            } else {
                                var_f0_6 = 1.0f;
                            }
                            if (var_f0_6 == var_f1_6) {

                            } else {
                                goto block_133;
                            }
                        } else {
                            goto block_133;
                        }
                    } else {
                        goto block_133;
                    }
                } else {
                    goto block_133;
                }
            } else {
block_133:
                var_s0 += 1;
                goto loop_134;
            }
        }
    }
    if (spB4 < spC4) {
        spB4 = spC4;
    }
    if (spB4 == -10000.0f) {
        spB4 = 0.0f;
    }
    return spB4;
}
