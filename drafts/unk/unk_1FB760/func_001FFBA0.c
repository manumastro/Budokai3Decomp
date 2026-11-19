/* Draft (not built): func_001FFBA0 at 0x001FFBA0, size 0x6C8, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 394 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x528, original 0x6C8
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FFBA0.s */

// src/unk/unk_1FB760.c func_001FFBA0 size diff=394/330
extern void *D_0051CD04;
extern void *D_0051CD08;
extern s32 D_0051CD20;
extern s32 gBtbBg;
extern char *D_0051CD14[];
s32 func_001FFBA0(f32 fparg0, f32 fparg1) {
    s32 spE4;
    s32 spD4;
    s32 spC4;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    s32 spBC;
    s32 spC0;
    s32 spD0;
    s32 spE0;
    s32 spF0;
    s32 sp100;
    s32 sp110;
    u8 *sp120;
    s32 sp124;
    s32 sp128;
    s32 *var_fp;
    s32 *var_s5;
    s32 *var_s7;
    f32 temp_f0;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    s32 temp_a3;
    s32 temp_t7;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s32 var_t0;
    s32 var_t1;
    s32 var_t5;
    s32 var_t8;
    s32 var_t9;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_a1_3;
    u8 *temp_a1_4;
    u8 *temp_a2;
    u8 *temp_a2_2;
    u8 *temp_t1;
    u8 *temp_t6;
    u8 *temp_v0;
    u8 *var_t2;
    u8 *var_t3;
    u8 *var_v0;

    if (D_0051CD28 == 0) {
        return 0;
    }
    if (gBtbBg == 1) {
        return 0;
    }
    var_v0 = func_001FD230((unsigned char *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*D_0051CD14 + (D_0051CD20 * 0x24)) + 4)) + 0xBC)), 0, 0);
    if (var_v0 == NULL) {
        return 0;
    }
    var_s0 = 0;
    var_t9 = 0;
    var_t3 = var_v0;
    var_t2 = var_v0;
    var_t1 = 1;
    var_t0 = 0;
    var_a3 = 0;
    var_s2 = 0x3F800000;
    var_s7 = &sp100;
    var_fp = &sp110;
    var_s1 = 0xBF800000;
loop_101:
    if (var_v0 != NULL) {
        temp_t7 = *(s32 *)((u8 *)var_v0 + 0x4C);
        var_t8 = 0;
loop_79:
        if (var_t8 >= *(s32 *)((u8 *)var_v0 + 0x30)) {
            if (0 == 0) {
                if (var_t1 != 0) {
                    if (var_t3 != NULL) {
                        var_v0 = *(u8 **)((u8 *)var_t3 + 0x40);
                        var_t3 = var_v0;
                    } else if (var_t2 != NULL) {
                        var_v0 = *(u8 **)((u8 *)var_t2 + 0x44);
                        var_t2 = var_v0;
                    }
                    var_t1 = 0;
                    var_t0 += 1;
                } else {
                    if (var_t2 != NULL) {
                        var_v0 = *(u8 **)((u8 *)var_t2 + 0x44);
                        var_t2 = var_v0;
                    } else if (var_t3 != NULL) {
                        var_v0 = *(u8 **)((u8 *)var_t3 + 0x40);
                        var_t3 = var_v0;
                    }
                    var_t1 = 1;
                    var_a3 += 1;
                }
                if (var_t3 != var_t2) {
                    if ((var_t0 >= 3) && (var_a3 >= 3) && (var_t0 == var_a3)) {
                        goto block_100;
                    }
                    goto loop_101;
                }
block_100:
                spB4 = 0.0f;
            } else {
                goto loop_101;
            }
        } else {
            temp_a1 = (unsigned char *)(*(s32 *)(temp_t7 + (var_t8 * 4)));
            temp_a2 = *(u8 **)((u8 *)temp_a1 + 0x18);
            temp_t6 = *(u8 **)((u8 *)temp_a1 + 0);
            var_s3 = *(s32 *)((u8 *)temp_a2 + 0);
            var_s3 *= 8;
            temp_a2_2 = *(u8 **)((u8 *)temp_a2 + 4);
            var_s3 = *(s32 *)((u8 *)(var_s3 + *(s32 *)((u8 *)temp_a1 + 0x20)) + 8);
            var_s4 = *(s32 *)((u8 *)((var_s3 * 0x10) + temp_a2_2) + 0xC);
            var_t5 = 0;
            if (var_s4 == 0) {
                var_s4 = *(s32 *)((u8 *)temp_a2_2 + 0xC);
            }
            if ((var_s3 >= 0) && (*(s32 *)((u8 *)temp_a1 + 0x10) == var_s4)) {
                temp_v1 = *(s32 *)((u8 *)temp_t6 + 0x10);
                if (temp_v1 >= 0) {
                    var_s3 = temp_v1 * 4;
                    temp_a1_2 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD08 + 8) + var_s3));
                    var_s3 = *(s32 *)((u8 *)temp_a1_2 + 4);
                    var_a2 = 0;
loop_22:
                    var_s4 = var_a2 < var_s3;
                    if (var_s4 == 0) {
                        var_v1 = 0;
                    } else {
                        var_s4 = *(s32 *)((u8 *)temp_a1_2 + 8);
                        var_s6 = var_a2 * 0x10;
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
                        var_s4 &= 1;
                        if (var_s4 != 0) {
                            var_v1 = 1;
                        } else {
                            var_a2 += 1;
                            goto loop_22;
                        }
                    }
                    if (var_v1 != 0) {
                        var_s3 = *(s32 *)((u8 *)temp_t6 + 0x10);
                        var_t5 = 1;
                        var_s3 *= 4;
                        temp_a1_3 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD08 + 8) + var_s3));
                        var_s3 = *(s32 *)((u8 *)temp_a1_3 + 4);
                        var_a2_2 = 0;
loop_30:
                        var_s4 = var_a2_2 < var_s3;
                        if (var_s4 == 0) {
                            var_v1_2 = 0;
                        } else {
                            var_s4 = *(s32 *)((u8 *)temp_a1_3 + 8);
                            var_s6 = var_a2_2 * 0x10;
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
                                var_v1_2 = 1;
                            } else {
                                var_a2_2 += 1;
                                goto loop_30;
                            }
                        }
                        if (var_v1_2 != 0) {
                            var_t9 = 2;
                        }
                    }
                }
                if (var_t5 != 0) {
                    temp_v1_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)(temp_t7 + (var_t8 * 4))) + 8)) + 4) + 0x10;
                    sp120 = (unsigned char *)(temp_v1_2 + (*(s32 *)((u8 *)temp_t6 + 0x14) * 0x10));
                    sp124 = temp_v1_2 + (*(s32 *)((u8 *)temp_t6 + 0x18) * 0x10);
                    sp128 = temp_v1_2 + (*(s32 *)((u8 *)temp_t6 + 0x1C) * 0x10);
                    M2C_ERROR(/* unknown instruction: adda.s $f3, $f5 */);
                    M2C_ERROR(/* unknown instruction: mula.s $f4, $f21 */);
                    temp_f0 = -(M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f20 */) - M2C_ERROR(/* unknown instruction: madd.s $f1, $f1, $f0 */));
                    spB4 = temp_f0;
                    if (temp_f0 != 0.0f) {
                        spB4 = temp_f0 / *(f32 *)((u8 *)temp_t6 + 4);
                    }
                    var_v1_3 = 0;
                    spB0 = fparg0;
                    spBC = 0x3F800000;
                    spB8 = fparg1;
loop_40:
                    if (var_v1_3 < 3) {
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t5) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
                        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
                        var_v1_3 += 1;
                        goto loop_40;
                    }
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s7) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s7) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($fp) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($fp) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    if (spD4 < 0.0f) {
                        var_f1 = -1.0f;
                    } else {
                        var_f1 = 1.0f;
                    }
                    if (spC4 < 0.0f) {
                        var_f0 = -1.0f;
                    } else {
                        var_f0 = 1.0f;
                    }
                    if (var_f0 == var_f1) {
                        if (spE4 < 0.0f) {
                            var_f1_2 = -1.0f;
                        } else {
                            var_f1_2 = 1.0f;
                        }
                        if (spD4 < 0.0f) {
                            var_f0_2 = -1.0f;
                        } else {
                            var_f0_2 = 1.0f;
                        }
                        if (var_f0_2 == var_f1_2) {
                            if (spC4 < 0.0f) {
                                var_f1_3 = -1.0f;
                            } else {
                                var_f1_3 = 1.0f;
                            }
                            if (spE4 < 0.0f) {
                                var_f0_3 = -1.0f;
                            } else {
                                var_f0_3 = 1.0f;
                            }
                            if (var_f0_3 == var_f1_3) {
                                temp_t1 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD08 + 8) + (*(s32 *)((u8 *)temp_t6 + 0x10) * 4)));
                                var_v1_4 = 0;
loop_75:
                                if (var_v1_4 < *(s32 *)((u8 *)temp_t1 + 4)) {
                                    temp_v0 = (unsigned char *)(*(s32 *)((u8 *)temp_t1 + 8) + (var_v1_4 * 0x10));
                                    temp_a3 = *(s32 *)((u8 *)temp_v0 + 0);
                                    temp_a1_4 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)(*(*(s32 **)((u8 *)D_0051CD04 + 8) + (temp_a3 * 4))) + 0xC) + (*(s32 *)((u8 *)temp_v0 + 4) * 4)));
                                    if (*(s32 *)((u8 *)temp_a1_4 + 0) & 1) {
                                        if (temp_a3 != 0) {

                                        } else {
                                            temp_v0_2 = *(s32 *)((u8 *)temp_a1_4 + 4);
                                            if ((temp_v0_2 != 0) && (temp_v0_2 > 0)) {
                                                var_s0 |= (temp_v0_2 - 1) * 4;
                                            }
                                        }
                                    }
                                    var_v1_4 += 1;
                                    goto loop_75;
                                }
                            } else {
                                goto block_78;
                            }
                        } else {
                            goto block_78;
                        }
                    } else {
                        goto block_78;
                    }
                } else {
                    goto block_78;
                }
            } else {
block_78:
                var_t8 += 1;
                goto loop_79;
            }
        }
    }
    return var_s0 | var_t9;
}
