/* Draft (not built): func_001FED00 at 0x001FED00, size 0x7E8, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'int' to 'unsigned char *' mwccps2.exe Compiler: @ 355: if (func_001FC820(arg1, arg2,(unsigned char *)(&sp130)) == 0) {
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FED00.s */

// src/unk/unk_1FB760.c func_001FED00 cerr diff=-1/0
extern s32 *D_0046FDC8;
extern void *D_0051CD04;
extern void *D_0051CD08;
extern s32 D_0051CD10;
extern s32 D_0051CD20;
extern s32 D_0051CDA0;
extern s32 D_0051CDCC;
extern s32 gBtbBg;
extern char *D_0051CD14[];
s32 func_001FED00(u8 *arg0, s32 arg1, s32 arg2) {
    s32 spB0;
    s32 spC0;
    s32 spD0;
    u8 *spF0;
    s32 sp100;
    u8 *sp120;
    s32 sp130;
    f32 sp138;
    f32 sp140;
    f32 sp144;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f21;
    f32 var_f20;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_s3;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a1_3;
    u8 *temp_fp;
    u8 *temp_fp_2;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_v0_2;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_5;
    u8 *temp_v1_6;
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
    var_f20 = -1.0f;
    var_s6 = -1;
loop_75:
    if (var_s4 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        temp_f0 = *(f32 *)((u8 *)var_s4 + 0x20);
        sp144 = temp_f0;
        M2C_ERROR(/* unknown instruction: c1 0x4 */);
        sp140 = temp_f0;
        if (*(s32 *)((u8 *)var_s4 + 0x24) != *(s32 *)((u8 *)var_s4 + 0x28)) {
            temp_f21 = *(f32 *)((u8 *)var_s4 + 0x18) / 4.0f;
            sp138 = *(f32 *)((u8 *)var_s4 + 8) + temp_f21;
            if (func_001FC820(arg1, arg2,(unsigned char *)(&sp130)) == 0) {
                sp138 = *(f32 *)((u8 *)var_s4 + 8) - temp_f21;
                if (func_001FC820(arg1, arg2,(unsigned char *)(&sp130)) != 0) {
                    goto block_15;
                }
                goto block_14;
            }
            goto block_15;
        }
        if (func_001FC820(arg1, arg2,(unsigned char *)(&sp130)) == 0) {
block_14:
            var_s4 = *(u8 **)((u8 *)var_s4 + 0x44);
        } else {
block_15:
            var_s5 = 0;
            spC0 = *(s32 *)((u8 *)var_s4 + 0x48);
loop_48:
            if (var_s5 < *(s32 *)((u8 *)var_s4 + 0x2C)) {
                temp_fp = (unsigned char *)(*(s32 *)(spC0 + (var_s5 * 4)));
                temp_v1 = *(u8 **)((u8 *)temp_fp + 0xC);
                temp_v1_2 = *(u8 **)((u8 *)temp_v1 + 4);
                temp_a1 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_v1 + 0) * 8) + *(s32 *)((u8 *)temp_fp + 0x14)) + 8);
                var_a0 = *(s32 *)((u8 *)((temp_a1 * 0x10) + temp_v1_2) + 0xC);
                if (var_a0 == 0) {
                    var_a0 = *(s32 *)((u8 *)temp_v1_2 + 0xC);
                }
                if ((temp_a1 >= 0) && (*(s32 *)((u8 *)temp_fp + 4) == var_a0)) {
                    temp_s2 = *(u8 **)((u8 *)temp_fp + 0);
                    temp_v0 = *(s32 *)((u8 *)temp_s2 + 0xC);
                    if (temp_v0 >= 0) {
                        temp_v0_2 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD08 + 8) + (temp_v0 * 4)));
                        var_v1 = 0;
loop_27:
                        if (var_v1 >= *(s32 *)((u8 *)temp_v0_2 + 4)) {
                            var_v0 = 0;
                        } else {
                            temp_a0 = (unsigned char *)(*(s32 *)((u8 *)temp_v0_2 + 8) + (var_v1 * 0x10));
                            if (**(*(s32 *)((u8 *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD04 + 8) + (*(s32 *)((u8 *)temp_a0 + 0) * 4))) + 0xC) + (*(s32 *)((u8 *)temp_a0 + 4) * 4)) & 1) {
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
                        temp_a0_2 = *(s32 *)((u8 *)temp_s2 + 0);
                        var_v0_2 = 0;
                        switch (temp_a0_2) {        /* irregular */
                        case 0:
                            temp_a0_3 = (unsigned char *)(&D_0051CDA0 + (var_s3 * 0x30));
                            var_v0_2 = func_001FC5C0(temp_a0_3, temp_a0_3 + 0x10, arg1, arg2);
                            break;
                        case 1:
                            temp_a0_4 = (unsigned char *)(&D_0051CDA0 + (var_s3 * 0x30));
                            var_v0_2 = func_001FC220(temp_a0_4, temp_a0_4 + 0x10, arg1, arg2);
                            break;
                        case 2:
                            temp_a0_5 = (unsigned char *)(&D_0051CDA0 + (var_s3 * 0x30));
                            var_v0_2 = func_001FBDE0(temp_a0_5, temp_a0_5 + 0x10, arg1, arg2);
                            break;
                        }
                        if ((var_v0_2 != 0) && ((*(s32 *)((u8 *)temp_s2 + 0xC) < 0) || (memset(&sp100, 0, 0x30), sp120 = temp_fp, M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */), M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */), *(&D_0051CDCC + (var_s3 * 0x30)) = -1, (func_001FD520(*(s32 *)((u8 *)temp_s2 + 0xC), 0, &D_0051CDA0 + (var_s3 * 0x30) + 0x2C) == 0)))) {
                            temp_f0_2 = func_00146E60((f32 *)(&D_0051CDA0 + (var_s3 * 0x30)), (f32 *)(arg1));
                            if (!(var_f20 <= temp_f0_2) || (var_f20 == -1.0f)) {
                                var_s6 = var_s3;
                                var_f20 = temp_f0_2;
                            }
                            var_s3 += 1;
                        }
                    }
                }
                var_s5 += 1;
                goto loop_48;
            }
            var_s5_2 = 0;
            spB0 = *(s32 *)((u8 *)var_s4 + 0x4C);
loop_73:
            if (var_s5_2 < *(s32 *)((u8 *)var_s4 + 0x30)) {
                temp_s2_2 = (unsigned char *)(*(s32 *)(spB0 + (var_s5_2 * 4)));
                temp_v1_3 = *(u8 **)((u8 *)temp_s2_2 + 0x18);
                temp_v1_4 = *(u8 **)((u8 *)temp_v1_3 + 4);
                temp_a1_2 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_v1_3 + 0) * 8) + *(s32 *)((u8 *)temp_s2_2 + 0x20)) + 8);
                var_a0_2 = *(s32 *)((u8 *)((temp_a1_2 * 0x10) + temp_v1_4) + 0xC);
                if (var_a0_2 == 0) {
                    var_a0_2 = *(s32 *)((u8 *)temp_v1_4 + 0xC);
                }
                if ((temp_a1_2 >= 0) && (*(s32 *)((u8 *)temp_s2_2 + 0x10) == var_a0_2)) {
                    temp_fp_2 = *(u8 **)((u8 *)temp_s2_2 + 0);
                    temp_v0_3 = *(s32 *)((u8 *)temp_fp_2 + 0x10);
                    if (temp_v0_3 >= 0) {
                        temp_v1_5 = (unsigned char *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD08 + 8) + (temp_v0_3 * 4)));
                        var_a0_3 = 0;
loop_61:
                        if (var_a0_3 >= *(s32 *)((u8 *)temp_v1_5 + 4)) {
                            var_v0_3 = 0;
                        } else {
                            temp_a1_3 = (unsigned char *)(*(s32 *)((u8 *)temp_v1_5 + 8) + (var_a0_3 * 0x10));
                            if (**(*(s32 *)((u8 *)(*(s32 *)(*(s32 *)((u8 *)D_0051CD04 + 8) + (*(s32 *)((u8 *)temp_a1_3 + 0) * 4))) + 0xC) + (*(s32 *)((u8 *)temp_a1_3 + 4) * 4)) & 1) {
                                var_v0_3 = 1;
                            } else {
                                var_a0_3 += 1;
                                goto loop_61;
                            }
                        }
                        if (var_v0_3 != 0) {
                            goto block_64;
                        }
                    } else {
block_64:
                        temp_a0_6 = (unsigned char *)(&D_0051CDA0 + (var_s3 * 0x30));
                        if (func_001FBAA0(temp_a0_6, temp_a0_6 + 0x10, arg1, arg2) != 0) {
                            if (*(s32 *)((u8 *)temp_fp_2 + 0x10) >= 0) {
                                memset(&spD0, 0, 0x30);
                                spF0 = temp_s2_2;
                                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
                                *(&D_0051CDCC + (var_s3 * 0x30)) = -1;
                                if (func_001FD520(*(s32 *)((u8 *)temp_fp_2 + 0x10), 0, &D_0051CDA0 + (var_s3 * 0x30) + 0x2C) == 0) {
                                    goto block_68;
                                }
                            } else {
block_68:
                                temp_f0_3 = func_00146E60((f32 *)(&D_0051CDA0 + (var_s3 * 0x30)), (f32 *)(arg1));
                                if (!(var_f20 <= temp_f0_3) || (var_f20 == -1.0f)) {
                                    var_s6 = var_s3;
                                    var_f20 = temp_f0_3;
                                }
                                var_s3 += 1;
                            }
                        }
                    }
                }
                var_s5_2 += 1;
                goto loop_73;
            }
            var_s4 = *(u8 **)((u8 *)var_s4 + 0x44);
        }
        goto loop_75;
    }
    if (var_s3 != 0) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        *(s32 *)((u8 *)arg0 + 0x24) = (s32) *(&D_0051CDCC + (var_s6 * 0x30));
        if (*(s32 *)((u8 *)arg0 + 0x24) >= 0) {
            *(s32 *)((u8 *)arg0 + 0x28) = (s32) D_0051CD10;
            *(s32 *)((u8 *)arg0 + 0x20) = 2;
            temp_v1_6 = *(u8 **)((u8 *)(*D_0051CD14 + (D_0051CD20 * 0x24)) + 4);
            if (*(s32 *)((u8 *)temp_v1_6 + 0xD4) >= 2) {
                *(s32 *)((u8 *)arg0 + 0x2C) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1_6 + 0xD8)) + 4);
            }
        } else {
            *(s32 *)((u8 *)arg0 + 0x20) = 1;
        }
    } else {
        *(s32 *)((u8 *)arg0 + 0x20) = 0;
    }
    return var_s3;
}
