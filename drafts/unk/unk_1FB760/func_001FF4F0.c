/* Draft (not built): func_001FF4F0 at 0x001FF4F0, size 0x6AC, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ,(unsigned char *)(arg1))); @ 391: 2 *)((u8 *)temp_a0_2 + 0) * 4))) + 0xC) + (*(s32 *)((u8 *)temp_a0_2 + 4) * 4)) & 1) {
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FF4F0.s */

// src/unk/unk_1FB760.c func_001FF4F0 cerr diff=-1/0
s32 BtbBg_GetFlag2(s32);
extern s32 *D_0046FDC8;
extern void *D_0051CD04;
extern void *D_0051CD08;
extern s32 D_0051CD20;
extern s32 D_0051CDA0;
extern s32 D_0051CDC0;
extern s32 gBtbBg;
extern char *D_0051CD14[];
s32 func_001FF4F0(s32 arg0, s32 arg1, u8 *arg2) {
    s32 spB0;
    s32 spC0;
    u8 *spD0;
    s32 spD4;
    s32 spD8;
    s16 spDC;
    s32 spE0;
    s32 spF0;
    u8 *sp100;
    s32 sp104;
    s32 sp108;
    s16 sp10C;
    s32 sp110;
    f32 sp118;
    f32 sp124;
    f32 temp_f20;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_7;
    s32 temp_a0_9;
    s32 temp_fp;
    s32 temp_fp_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s3;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u8 *temp_a0_2;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_8;
    u8 *temp_a1;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s6;
    u8 *temp_s6_2;
    u8 *temp_v0_2;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_5;
    u8 *var_s4;

    if (D_0051CD28 == 0) {
        return 0;
    }
    if (gBtbBg == 1) {
        return 0;
    }
    var_s4 = *(u8 **)((u8 *)(*(u8 **)((u8 *)((D_0051CD20 * 0x24) + *D_0051CD14) + 4)) + 0xC8);
    var_s3 = 0;
    memset(D_0046FDC8, 0, 0xC00, *D_0051CD14);
loop_77:
    if (var_s4 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp124 = *(f32 *)((u8 *)var_s4 + 0x20);
        if (*(s32 *)((u8 *)var_s4 + 0x24) != *(s32 *)((u8 *)var_s4 + 0x28)) {
            temp_f20 = *(f32 *)((u8 *)var_s4 + 0x18) / 4.0f;
            sp118 = *(f32 *)((u8 *)var_s4 + 8) + temp_f20;
            if (func_001FD180(&sp110,(unsigned char *)(arg0)) == 0) {
                sp118 = *(f32 *)((u8 *)var_s4 + 8) - temp_f20;
                if (func_001FD180(&sp110,(unsigned char *)(arg0)) != 0) {
                    goto block_14;
                }
                goto block_13;
            }
            goto block_14;
        }
        if (func_001FD180(&sp110,(unsigned char *)(arg0)) == 0) {
block_13:
            var_s4 = *(u8 **)((u8 *)var_s4 + 0x44);
        } else {
block_14:
            temp_fp = *(s32 *)((u8 *)var_s4 + 0x48);
            var_s5 = 0;
loop_49:
            if (var_s5 < *(s32 *)((u8 *)var_s4 + 0x2C)) {
                temp_s2 = (unsigned char *)(*(s32 *)(temp_fp + (var_s5 * 4)));
                temp_v1 = *(u8 **)((u8 *)temp_s2 + 0xC);
                temp_v1_2 = *(u8 **)((u8 *)temp_v1 + 4);
                temp_a0 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_v1 + 0) * 8) + *(s32 *)((u8 *)temp_s2 + 0x14)) + 8);
                var_a1 = *(s32 *)((u8 *)((temp_a0 * 0x10) + temp_v1_2) + 0xC);
                if (var_a1 == 0) {
                    var_a1 = *(s32 *)((u8 *)temp_v1_2 + 0xC);
                }
                if ((temp_a0 >= 0) && (*(s32 *)((u8 *)temp_s2 + 4) == var_a1)) {
                    temp_s6 = *(u8 **)((u8 *)temp_s2 + 0);
                    temp_v0 = *(s32 *)((u8 *)temp_s6 + 0xC);
                    if (temp_v0 >= 0) {
                        temp_v0_2 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD08 + 8) + (temp_v0 * 4)));
                        var_v1 = 0;
loop_27:
                        if (var_v1 >= *(s32 *)((u8 *)temp_v0_2 + 4)) {
                            var_v0 = 0;
                        } else {
                            temp_a0_2 = (unsigned char *)(*(s32 *)((u8 *)temp_v0_2 + 8) + (var_v1 * 0x10));
                            if (**(*(s32 *)((u8 *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD04 + 8) + (*(s32 *)((u8 *)temp_a0_2 + 0) * 4))) + 0xC) + (*(s32 *)((u8 *)temp_a0_2 + 4) * 4)) & 1) {
                                var_v0 = 1;
                            } else {
                                var_v1 += 1;
                                goto loop_27;
                            }
                        }
                        if (var_v0 != 0) {
                            goto block_30;
                        }
                    } else {
block_30:
                        temp_a0_3 = *(s32 *)((u8 *)temp_s6 + 0);
                        var_v0_2 = 0;
                        switch (temp_a0_3) {        /* irregular */
                        case 0:
                            temp_a0_4 = (unsigned char *)(&D_0051CDA0 + (var_s3 * 0x30));
                            var_v0_2 = (u8 *)(func_001FD0A0(temp_a0_4, temp_a0_4 + 0x10, arg0,(unsigned char *)(arg1)));
                            break;
                        case 1:
                            temp_a0_5 = (unsigned char *)(&D_0051CDA0 + (var_s3 * 0x30));
                            var_v0_2 = func_001FCE20(temp_a0_5, temp_a0_5 + 0x10, arg0, arg1);
                            break;
                        case 2:
                            temp_a0_6 = (unsigned char *)(&D_0051CDA0 + (var_s3 * 0x30));
                            var_v0_2 = (u8 *)(func_001FCCC0(temp_a0_6, temp_a0_6 + 0x10, arg0,(unsigned char *)(arg1)));
                            break;
                        }
                        if (var_v0_2 != 0) {
                            if ((*(s32 *)((u8 *)temp_s6 + 0xC) >= 0) && (BtbBg_GetFlag2(0) != 0)) {
                                memset(&spE0, 0, 0x30);
                                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s7) */);
                                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                                if (arg2 != NULL) {
                                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                                    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                                    sp104 = *(s32 *)((u8 *)arg2 + 0);
                                    sp108 = *(s32 *)((u8 *)arg2 + 4);
                                    sp10C = *(s16 *)((u8 *)arg2 + 8);
                                    sp100 = temp_s2;
                                } else {
                                    sp100 = temp_s2;
                                    sp108 = 0;
                                    sp10C = -1;
                                }
                            }
                            var_s3 += 1;
                        }
                    }
                }
                var_s5 += 1;
                goto loop_49;
            }
            temp_fp_2 = *(s32 *)((u8 *)var_s4 + 0x4C);
            var_s5_2 = 0;
loop_75:
            if (var_s5_2 < *(s32 *)((u8 *)var_s4 + 0x30)) {
                temp_s2_2 = (unsigned char *)(*(s32 *)(temp_fp_2 + (var_s5_2 * 4)));
                temp_v1_3 = *(u8 **)((u8 *)temp_s2_2 + 0x18);
                temp_v1_4 = *(u8 **)((u8 *)temp_v1_3 + 4);
                temp_a0_7 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_v1_3 + 0) * 8) + *(s32 *)((u8 *)temp_s2_2 + 0x20)) + 8);
                var_a1_2 = *(s32 *)((u8 *)((temp_a0_7 * 0x10) + temp_v1_4) + 0xC);
                if (var_a1_2 == 0) {
                    var_a1_2 = *(s32 *)((u8 *)temp_v1_4 + 0xC);
                }
                if ((temp_a0_7 >= 0) && (*(s32 *)((u8 *)temp_s2_2 + 0x10) == var_a1_2)) {
                    temp_s6_2 = *(u8 **)((u8 *)temp_s2_2 + 0);
                    temp_v0_3 = *(s32 *)((u8 *)temp_s6_2 + 0x10);
                    if (temp_v0_3 >= 0) {
                        temp_v1_5 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD08 + 8) + (temp_v0_3 * 4)));
                        var_a0 = 0;
loop_63:
                        if (var_a0 >= *(s32 *)((u8 *)temp_v1_5 + 4)) {
                            var_v0_3 = 0;
                        } else {
                            temp_a1 = (unsigned char *)(*(s32 *)((u8 *)temp_v1_5 + 8) + (var_a0 * 0x10));
                            if (**(*(s32 *)((u8 *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD04 + 8) + (*(s32 *)((u8 *)temp_a1 + 0) * 4))) + 0xC) + (*(s32 *)((u8 *)temp_a1 + 4) * 4)) & 1) {
                                var_v0_3 = 1;
                            } else {
                                var_a0 += 1;
                                goto loop_63;
                            }
                        }
                        if (var_v0_3 != 0) {
                            goto block_66;
                        }
                    } else {
block_66:
                        temp_a0_8 = (unsigned char *)(&D_0051CDA0 + (var_s3 * 0x30));
                        temp_v0_4 = func_001FC880(temp_a0_8, temp_a0_8 + 0x10, arg0, *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2_2 + 8)) + 4));
                        if (temp_v0_4 != 0) {
                            temp_a0_9 = var_s3 * 0x30;
                            *(&D_0051CDC0 + temp_a0_9) = temp_v0_4;
                            if ((*(s32 *)((u8 *)temp_s6_2 + 0x10) >= 0) && (BtbBg_GetFlag2(temp_a0_9) != 0)) {
                                memset(&spB0, 0, 0x30);
                                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s7) */);
                                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                                if (arg2 != NULL) {
                                    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                                    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                                    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
                                    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                                    spD4 = *(s32 *)((u8 *)arg2 + 0);
                                    spD8 = *(s32 *)((u8 *)arg2 + 4);
                                    spDC = *(s16 *)((u8 *)arg2 + 8);
                                    spD0 = temp_s2_2;
                                } else {
                                    spD0 = temp_s2_2;
                                    spD8 = 0;
                                    spDC = -1;
                                }
                            }
                            var_s3 += 1;
                        }
                    }
                }
                var_s5_2 += 1;
                goto loop_75;
            }
            var_s4 = *(u8 **)((u8 *)var_s4 + 0x44);
        }
        goto loop_77;
    }
    return var_s3;
}
