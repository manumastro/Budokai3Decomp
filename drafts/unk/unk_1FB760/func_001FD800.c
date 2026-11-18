/* Draft (not built): func_001FD800 at 0x001FD800, size 0x540, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ompiler: 378: temp_t1_2 = *(*(s32 *)((u8 *)D_0051CD08 + 8) + (temp_v1 * 4)); @ 365: temp_t1 = *(temp_t9 + (var_s0 * 4));
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FD800.s */

// src/unk/unk_1FB760.c func_001FD800 cerr diff=-1/0
extern void *D_0051CD04;
extern void *D_0051CD08;
extern s32 D_0051CD20;
extern s32 gBtbBg;
extern char *D_0051CD14[];
f32 func_001FD800(f32 fparg0, f32 fparg1) {
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
    f32 temp_f0;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    s32 temp_s3;
    s32 temp_t9;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s4;
    s32 var_t2;
    s32 var_t3;
    s32 var_t7;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_s4;
    u8 *temp_t1;
    u8 *temp_t1_2;
    u8 *temp_t2;
    u8 *temp_t2_2;
    u8 *temp_t8;
    u8 *var_t4;
    u8 *var_t5;
    u8 *var_v0;

    if (D_0051CD28 == 0) {
        return 0.0f;
    }
    if (gBtbBg == 1) {
        return 0.0f;
    }
    var_v0 = func_001FD230((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((D_0051CD20 * 0x24) + *D_0051CD14) + 4)) + 0xBC)), 0, 0);
    if (var_v0 == NULL) {
        return 0.0f;
    }
    var_t5 = var_v0;
    var_t4 = var_v0;
    var_t3 = 1;
loop_77:
    if (var_v0 != NULL) {
        temp_t9 = *(s32 *)((u8 *)var_v0 + 0x4C);
        var_s0 = 0;
loop_60:
        if (var_s0 >= *(s32 *)((u8 *)var_v0 + 0x30)) {
            if (0 == 0) {
                if (var_t3 != 0) {
                    if (var_t5 != NULL) {
                        var_v0 = *(u8 **)((u8 *)var_t5 + 0x40);
                        var_t5 = var_v0;
                    } else if (var_t4 != NULL) {
                        var_v0 = *(u8 **)((u8 *)var_t4 + 0x44);
                        var_t4 = var_v0;
                    }
                    var_t3 = 0;
                } else {
                    if (var_t4 != NULL) {
                        var_v0 = *(u8 **)((u8 *)var_t4 + 0x44);
                        var_t4 = var_v0;
                    } else if (var_t5 != NULL) {
                        var_v0 = *(u8 **)((u8 *)var_t5 + 0x40);
                        var_t5 = var_v0;
                    }
                    var_t3 = 1;
                }
                if (var_t5 == var_t4) {
                    spB4 = 0.0f;
                } else {
                    goto loop_77;
                }
            } else {
                goto loop_77;
            }
        } else {
            temp_t1 = *(temp_t9 + (var_s0 * 4));
            temp_t2 = *(u8 **)((u8 *)temp_t1 + 0x18);
            temp_t8 = *(u8 **)((u8 *)temp_t1 + 0);
            temp_t2_2 = *(u8 **)((u8 *)temp_t2 + 4);
            temp_s3 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_t2 + 0) * 8) + *(s32 *)((u8 *)temp_t1 + 0x20)) + 8);
            var_s4 = *(s32 *)((u8 *)((temp_s3 * 0x10) + temp_t2_2) + 0xC);
            var_t7 = 0;
            if (var_s4 == 0) {
                var_s4 = *(s32 *)((u8 *)temp_t2_2 + 0xC);
            }
            if ((temp_s3 >= 0) && (*(s32 *)((u8 *)temp_t1 + 0x10) == var_s4)) {
                temp_v1 = *(s32 *)((u8 *)temp_t8 + 0x10);
                if (temp_v1 >= 0) {
                    temp_t1_2 = *(*(s32 *)((u8 *)D_0051CD08 + 8) + (temp_v1 * 4));
                    var_t2 = 0;
loop_21:
                    if (var_t2 >= *(s32 *)((u8 *)temp_t1_2 + 4)) {
                        var_v1 = 0;
                    } else {
                        temp_s4 = (u8 *)(*(s32 *)((u8 *)temp_t1_2 + 8) + (var_t2 * 0x10));
                        if (**(*(s32 *)((u8 *)(*(*(s32 *)((u8 *)D_0051CD04 + 8) + (*(s32 *)((u8 *)temp_s4 + 0) * 4))) + 0xC) + (*(s32 *)((u8 *)temp_s4 + 4) * 4)) & 4) {
                            var_v1 = 1;
                        } else {
                            var_t2 += 1;
                            goto loop_21;
                        }
                    }
                    if (var_v1 != 0) {
                        var_t7 = 1;
                    }
                }
                if (var_t7 != 0) {
                    temp_v1_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)(*(temp_t9 + (var_s0 * 4))) + 8)) + 4) + 0x10;
                    sp120 = (u8 *)(temp_v1_2 + (*(s32 *)((u8 *)temp_t8 + 0x14) * 0x10));
                    sp124 = temp_v1_2 + (*(s32 *)((u8 *)temp_t8 + 0x18) * 0x10);
                    sp128 = temp_v1_2 + (*(s32 *)((u8 *)temp_t8 + 0x1C) * 0x10);
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
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t2) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($t0) */);
                        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t1) */);
                        var_v1_2 += 1;
                        goto loop_31;
                    }
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a2) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a3) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s7) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a2) */);
                    M2C_ERROR(/* unknown instruction: vopmula.xyz ACC, $vf1, $vf2 */);
                    M2C_ERROR(/* unknown instruction: vopmsub.xyz $vf1, $vf2, $vf1 */);
                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($fp) */);
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

                            } else {
                                goto block_59;
                            }
                        } else {
                            goto block_59;
                        }
                    } else {
                        goto block_59;
                    }
                } else {
                    goto block_59;
                }
            } else {
block_59:
                var_s0 += 1;
                goto loop_60;
            }
        }
    }
    return spB4;
}
