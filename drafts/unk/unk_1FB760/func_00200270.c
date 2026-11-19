/* Draft (not built): func_00200270 at 0x00200270, size 0x738, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); d char *' mwccps2.exe Compiler: @ 352: 0051CD14 + (D_0051CD20 * 0x24)) + 4)) + 0xBC), fparg0,(unsigned char *)(fparg1));
 * Original: asm/nonmatchings/unk/unk_1FB760/func_00200270.s */

// src/unk/unk_1FB760.c func_00200270 cerr diff=-1/0
s32 func_002CE630(void *, f32, f32);
extern void *D_0051CD04;
extern void *D_0051CD08;
extern s32 D_0051CD20;
extern s32 gBtbBg;
extern void *BtbBg_GetStageModel(void);
extern char *D_0051CD14[];
f32 func_00200270(u8 *arg0, f32 fparg0, f32 fparg1) {
    s32 sp144;
    s32 sp134;
    s32 sp124;
    s32 spB0;
    s32 spC0;
    s32 spD0;
    f32 spE0;
    f32 spE8;
    s32 spF0;
    u8 *sp100;
    s32 sp104;
    s32 sp108;
    s16 sp10C;
    f32 sp110;
    f32 sp114;
    f32 sp118;
    s32 sp11C;
    s32 sp120;
    s32 sp130;
    s32 sp140;
    s32 sp150;
    s32 sp160;
    s32 sp170;
    u8 *sp180;
    s32 sp184;
    s32 sp188;
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f2;
    f32 var_f2_2;
    f32 var_f2_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_fp;
    s32 var_s6;
    s32 var_s7;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u8 *temp_a0_3;
    u8 *temp_a2;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s4;

    if (arg0 != NULL) {
        *(s32 *)((u8 *)arg0 + 0xC) = 0x3F800000;
    }
    if (D_0051CD28 == 0) {
        return 0.0f;
    }
    if (gBtbBg == 1) {
        func_002CE630(arg0, fparg0, fparg1);
    }
    var_s4 = func_001FD230(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*D_0051CD14 + (D_0051CD20 * 0x24)) + 4)) + 0xBC), fparg0,(unsigned char *)(fparg1));
    if (var_s4 == NULL) {
        return 0.0f;
    }
    var_s1 = var_s4;
    var_s0 = var_s4;
    spB0 = 1;
    var_s7 = 0;
    var_fp = 0;
loop_94:
    if (var_s4 != NULL) {
        spC0 = 0;
        var_s6 = 0;
        spD0 = *(s32 *)((u8 *)var_s4 + 0x4C);
loop_72:
        if (var_s6 >= *(s32 *)((u8 *)var_s4 + 0x30)) {
            if (spC0 == 0) {
                if (spB0 != 0) {
                    if (var_s1 != NULL) {
                        var_s4 = *(u8 **)((u8 *)var_s1 + 0x40);
                        var_s1 = var_s4;
                    } else if (var_s0 != NULL) {
                        var_s4 = *(u8 **)((u8 *)var_s0 + 0x44);
                        var_s0 = var_s4;
                    }
                    spB0 = 0;
                    var_s7 += 1;
                } else {
                    if (var_s0 != NULL) {
                        var_s4 = *(u8 **)((u8 *)var_s0 + 0x44);
                        var_s0 = var_s4;
                    } else if (var_s1 != NULL) {
                        var_s4 = *(u8 **)((u8 *)var_s1 + 0x40);
                        var_s1 = var_s4;
                    }
                    spB0 = 1;
                    var_fp += 1;
                }
                if (var_s1 != var_s0) {
                    if ((var_s7 >= 3) && (var_fp >= 3) && (var_s7 == var_fp)) {
                        goto block_93;
                    }
                    goto loop_94;
                }
block_93:
                sp114 = 0.0f;
            } else {
                goto loop_94;
            }
        } else {
            temp_s3 = (unsigned char *)(*(s32 *)(spD0 + (var_s6 * 4)));
            temp_v1 = *(u8 **)((u8 *)temp_s3 + 0x18);
            temp_s2 = *(u8 **)((u8 *)temp_s3 + 0);
            temp_v1_2 = *(u8 **)((u8 *)temp_v1 + 4);
            temp_a0 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_v1 + 0) * 8) + *(s32 *)((u8 *)temp_s3 + 0x20)) + 8);
            var_a2 = *(s32 *)((u8 *)((temp_a0 * 0x10) + temp_v1_2) + 0xC);
            var_a1 = 0;
            if (var_a2 == 0) {
                var_a2 = *(s32 *)((u8 *)temp_v1_2 + 0xC);
            }
            if ((temp_a0 >= 0) && (*(s32 *)((u8 *)temp_s3 + 0x10) == var_a2)) {
                temp_v0 = *(s32 *)((u8 *)temp_s2 + 0x10);
                if (temp_v0 >= 0) {
                    temp_v1_3 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD08 + 8) + (temp_v0 * 4)));
                    var_a0 = 0;
loop_24:
                    if (var_a0 >= *(s32 *)((u8 *)temp_v1_3 + 4)) {
                        var_v0 = 0;
                    } else {
                        temp_a2 = (unsigned char *)(*(s32 *)((u8 *)temp_v1_3 + 8) + (var_a0 * 0x10));
                        if (**(*(s32 *)((u8 *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD04 + 8) + (*(s32 *)((u8 *)temp_a2 + 0) * 4))) + 0xC) + (*(s32 *)((u8 *)temp_a2 + 4) * 4)) & 1) {
                            var_v0 = 1;
                        } else {
                            var_a0 += 1;
                            goto loop_24;
                        }
                    }
                    if (var_v0 != 0) {
                        var_a1 = 1;
                    }
                }
                if (var_a1 != 0) {
                    temp_a0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)(*(s32 *)(spD0 + (var_s6 * 4))) + 8)) + 4) + 0x10;
                    sp180 = (unsigned char *)(temp_a0_2 + (*(s32 *)((u8 *)temp_s2 + 0x14) * 0x10));
                    sp184 = temp_a0_2 + (*(s32 *)((u8 *)temp_s2 + 0x18) * 0x10);
                    sp188 = temp_a0_2 + (*(s32 *)((u8 *)temp_s2 + 0x1C) * 0x10);
                    M2C_ERROR(/* unknown instruction: adda.s $f3, $f5 */);
                    M2C_ERROR(/* unknown instruction: mula.s $f4, $f21 */);
                    temp_f1 = -(M2C_ERROR(/* unknown instruction: madd.s $f1, $f1, $f20 */) - M2C_ERROR(/* unknown instruction: madd.s $f2, $f2, $f1 */));
                    sp114 = temp_f1;
                    if (temp_f1 != 0.0f) {
                        sp114 = temp_f1 / *(f32 *)((u8 *)temp_s2 + 4);
                    }
                    sp110 = fparg0;
                    sp11C = 0x3F800000;
                    sp118 = fparg1;
                    var_a1_2 = 0;
loop_34:
                    if (var_a1_2 < 3) {
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                        var_a1_2 += 1;
                        goto loop_34;
                    }
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                    if (sp134 < 0.0f) {
                        var_f2 = -1.0f;
                    } else {
                        var_f2 = 1.0f;
                    }
                    if (sp124 < 0.0f) {
                        var_f0 = -1.0f;
                    } else {
                        var_f0 = 1.0f;
                    }
                    if (var_f0 == var_f2) {
                        if (sp144 < 0.0f) {
                            var_f2_2 = -1.0f;
                        } else {
                            var_f2_2 = 1.0f;
                        }
                        if (sp134 < 0.0f) {
                            var_f0_2 = -1.0f;
                        } else {
                            var_f0_2 = 1.0f;
                        }
                        if (var_f0_2 == var_f2_2) {
                            if (sp124 < 0.0f) {
                                var_f2_3 = -1.0f;
                            } else {
                                var_f2_3 = 1.0f;
                            }
                            if (sp144 < 0.0f) {
                                var_f0_3 = -1.0f;
                            } else {
                                var_f0_3 = 1.0f;
                            }
                            if (var_f0_3 == var_f2_3) {
                                if (arg0 != NULL) {
                                    memset(&spE0, 0, 0x30);
                                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                                    temp_v0_2 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0) + (*(s32 *)((u8 *)arg0 + 4) * 0x10));
                                    spE0 = *(f32 *)((u8 *)temp_v0_2 + 0x650);
                                    spE8 = *(f32 *)((u8 *)(temp_v0_2 + 0x650) + 8);
                                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                                    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                                    sp104 = *(s32 *)((u8 *)arg0 + 0);
                                    sp108 = *(s32 *)((u8 *)arg0 + 4);
                                    sp10C = *(s16 *)((u8 *)arg0 + 8);
                                    sp100 = temp_s3;
                                    temp_v0_3 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD08 + 8) + (*(s32 *)((u8 *)temp_s2 + 0x10) * 4)));
                                    var_v1 = 0;
loop_65:
                                    if (var_v1 >= *(s32 *)((u8 *)temp_v0_3 + 4)) {
                                        var_v0_2 = 0;
                                    } else {
                                        temp_a0_3 = (unsigned char *)(*(s32 *)((u8 *)temp_v0_3 + 8) + (var_v1 * 0x10));
                                        if (**(*(s32 *)((u8 *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD04 + 8) + (*(s32 *)((u8 *)temp_a0_3 + 0) * 4))) + 0xC) + (*(s32 *)((u8 *)temp_a0_3 + 4) * 4)) & 8) {
                                            var_v0_2 = 1;
                                        } else {
                                            var_v1 += 1;
                                            goto loop_65;
                                        }
                                    }
                                    if (var_v0_2 != 0) {
                                        *(s32 *)((u8 *)arg0 + 0xC) = (s32) *(s32 *)((u8 *)(BtbBg_GetStageModel()) + 0xC);
                                    }
                                    if (func_001FD520(*(s32 *)((u8 *)temp_s2 + 0x10), &spE0, 0) == 0) {

                                    } else {
                                        goto block_71;
                                    }
                                }
                            } else {
                                goto block_71;
                            }
                        } else {
                            goto block_71;
                        }
                    } else {
                        goto block_71;
                    }
                } else {
                    goto block_71;
                }
            } else {
block_71:
                var_s6 += 1;
                goto loop_72;
            }
        }
    }
    return sp114;
}
