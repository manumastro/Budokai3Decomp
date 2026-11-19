/* Draft (not built): func_001AB000 at 0x001AB000, size 0xCB8, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); it conversion from 'short *' to 'int' mwccps2.exe Compiler: @ 1529: if (func_001A99C0(arg0, var_s1,(short *)(0)) != 0) {
 * Original: asm/nonmatchings/battle/btl_cmd/func_001AB000.s */

// src/battle/btl_cmd.c func_001AB000 cerr diff=-1/0
s32 A2d_CallHandler(s32, s32 *);
extern s32 D_004681E0;
extern s32 D_00468220;
extern s32 D_00495A40;
extern s32 D_00495A90;
void func_001AB000(u8 *arg0) {
    s32 spA0;
    s32 spB0;
    s32 spC0;
    s32 spD0;
    s32 spD4;
    s32 spE0;
    s32 spE4;
    s32 spF0;
    s32 spF4;
    s32 sp100;
    s32 sp104;
    s32 *temp_a3;
    s32 *temp_s0_2;
    s32 *temp_s1_3;
    s32 *temp_s2_2;
    s32 *temp_s5_3;
    s32 *var_s1;
    s32 *var_s7_2;
    s16 temp_a1;
    s16 temp_t1;
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3_2;
    s32 temp_fp;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s6;
    s32 temp_v1_2;
    s32 var_fp;
    s32 var_fp_2;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s3;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s5_3;
    s32 var_s6;
    s32 var_s6_2;
    s32 var_s7;
    s32 var_v1;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_s0;
    u8 *temp_s0_3;
    u8 *temp_s1_2;
    u8 *temp_s1_4;
    u8 *temp_s2;
    u8 *temp_s2_3;
    u8 *temp_s2_4;
    u8 *temp_s3;
    u8 *temp_s3_2;
    u8 *temp_s5_4;
    u8 *temp_v1_3;
    u8 *var_s0;

    temp_a1 = *(s16 *)((u8 *)arg0 + 0x46);
    temp_s3 = (unsigned char *)(gBattle + (temp_a1 * 0x2020) + 0x830);
    func_001AA5C0((struct BtlRank *)(temp_a1));
    func_001A9AD0(arg0);
    if ((*(s32 **)((u8 *)arg0 + 0x1E8) != NULL) && (*(s16 *)((u8 *)arg0 + 0x44) >= 0)) {
        *(f32 *)((u8 *)arg0 + 0x418) = (f32) (*(f32 *)((u8 *)arg0 + 0x418) + *(f32 *)((u8 *)gBattle + 0x88F0));
        if (*(s32 *)((u8 *)arg0 + 0x50) == 1) {
            *(f32 *)((u8 *)arg0 + 0x418) = 0.0f;
        }
        var_s2 = 0;
        var_s1 = &D_00495A90;
        var_s0 = arg0;
        *(f32 *)((u8 *)arg0 + 0x420) = (f32) (*(f32 *)((u8 *)arg0 + 0x420) + *(f32 *)((u8 *)gBattle + 0x88F0));
        *(f32 *)((u8 *)arg0 + 0x424) = (f32) (*(f32 *)((u8 *)arg0 + 0x424) + *(f32 *)((u8 *)gBattle + 0x88F0));
        *(f32 *)((u8 *)arg0 + 0x428) = (f32) (*(f32 *)((u8 *)arg0 + 0x428) + *(f32 *)((u8 *)gBattle + 0x88F0));
        D_0047056C = 1;
        do {
            if (func_001A99C0(arg0, var_s1,(short *)(0)) != 0) {
                *(s32 *)((u8 *)var_s0 + 0x420) = 0;
            }
            var_s2 += 1;
            var_s1 += 0x44;
            var_s0 += 4;
        } while (var_s2 < 3);
        if ((*(s32 *)((u8 *)arg0 + 0x40C) <= 0) && (temp_a0 = *(s32 *)((u8 *)arg0 + 0x3FC), (temp_a0 != ((*(s32 *)((u8 *)arg0 + 0x3F8) + 1) & 0x1F)))) {
            if ((*(s32 *)((u8 *)arg0 + 0x1EC) != 0) && (*(s32 *)((u8 *)arg0 + 0x1F4) != 0) && (*(s8 *)((u8 *)temp_s3 + 0x2011) == 0) && ((s32)(*(s32 *)((u8 *)((temp_a0 * 0x10) + arg0) + 0x204)) == (s32)(*(s32 **)((u8 *)arg0 + 0x1E8))) && (*(s32 *)((u8 *)arg0 + 0x1F0) >= 4)) {
                *(s32 *)((u8 *)arg0 + 0x1F4) = 0;
                temp_s2 = (unsigned char *)(gBattle + (*(s16 *)((u8 *)arg0 + 0x46) * 0x2020) + 0x830);
                var_s1_2 = 0;
                if (*(s16 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 0xE) > 0) {
                    var_s5 = 0;
                    do {
                        temp_s0 = *(u8 **)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8) + var_s5) + 0x40);
                        if ((*(s32 *)((u8 *)temp_s0 + 8) & 2) && (func_001DF420(temp_s2, *(s16 *)((u8 *)temp_s0 + 0x10), 2) != 0)) {
                            sp100 = *(s32 *)((u8 *)temp_s2 + 0x1350);
                            sp104 = (s32) *(s16 *)((u8 *)temp_s0 + 0x10);
                            A2d_CallHandler(0x30, &sp100);
                        }
                        var_s1_2 += 1;
                        var_s5 += 4;
                    } while (var_s1_2 < *(s16 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 0xE));
                }
            }
            *(s32 *)((u8 *)arg0 + 0x1F0) = (s32) (*(s32 *)((u8 *)arg0 + 0x1F0) + 1);
            temp_s6 = *(s32 *)((u8 *)arg0 + 0x1EC);
            if ((temp_s6 != 0) && (*(s32 *)((u8 *)arg0 + 0x1F4) != 0)) {
                var_s7 = 4;
                D_0047056C = temp_s6 == *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8);
loop_24:
                var_s1_3 = 0;
loop_25:
                spC0 = 0;
                var_fp = temp_s6;
                if (*(s16 *)((u8 *)temp_s6 + 0xE) > 0) {
loop_27:
                    temp_s0_2 = *(s32 **)((u8 *)var_fp + 0x40);
                    if (var_s1_3 == 0) {
                        if (*(s16 *)((u8 *)temp_s0_2 + 0) != 0) {
                            goto block_30;
                        }
                        goto block_53;
                    }
block_30:
                    if (var_s1_3 != 0) {
                        if (*(s16 *)((u8 *)temp_s0_2 + 0) == 0) {
                            goto block_33;
                        }
                        goto block_53;
                    }
block_33:
                    temp_v1 = *(s16 *)((u8 *)temp_s0_2 + 2);
                    temp_a0_2 = *(&D_004681E0 + (temp_v1 * 4));
                    if ((var_s7 == temp_a0_2) && ((temp_a3 = *(s32 **)((u8 *)arg0 + 0x1E8), temp_t1 = *(s16 *)((u8 *)temp_a3 + 2), temp_a3_2 = *(&D_004681E0 + (temp_t1 * 4)), ((temp_a3_2 < temp_a0_2) != 0)) || ((temp_a3_2 == temp_a0_2) && (*(&D_00468220 + (*(s16 *)((u8 *)temp_a3 + 0) * 4)) < *(&D_00468220 + (*(s16 *)((u8 *)temp_s0_2 + 0) * 4))))) && (temp_t1 & temp_v1)) {
                        temp_s5 = (*(s32 *)((u8 *)arg0 + 0x3F8) - 1) & 0x1F;
                        var_s2_2 = (s16 *)func_001A99C0(arg0, temp_s0_2, 1,(short *)(temp_a3_2));
                        if ((temp_s6 != *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8)) && !(*(f32 *)((u8 *)temp_s3 + 0xC58) <= (f32) *(s16 *)((u8 *)temp_s0_2 + 6))) {
                            var_s2_2 = 0;
                        }
                        if ((var_s2_2 != 0) && (func_001A8E60((s32)(temp_s0_2), (void *)(temp_s3)) == 0)) {
                            var_s2_2 = 0;
                        }
                        temp_s5_2 = temp_s5 * 0x10;
                        temp_a0_3 = arg0 + temp_s5_2;
                        if (*(s32 *)((u8 *)temp_a0_3 + 0x1F8) & 2) {
                            if (func_001A8D90(temp_s0_2, temp_s3) == 0) {
                                goto block_49;
                            }
                        } else if (*(s16 *)((u8 *)temp_s0_2 + 6) < *(s32 *)((u8 *)temp_a0_3 + 0x1FC)) {
block_49:
                            var_s2_2 = 0;
                        }
                        if (var_s2_2 == 1) {
                            *(s32 **)((u8 *)arg0 + 0x1E8) = temp_s0_2;
                            temp_a0_4 = temp_s5_2 + arg0;
                            *(s32 *)((u8 *)arg0 + 0x1F0) = 0;
                            *(s32 *)((u8 *)temp_a0_4 + 0x1F8) = (s32) (*(s32 *)((u8 *)temp_a0_4 + 0x1F8) | 1);
                            *(s32 **)((u8 *)temp_a0_4 + 0x204) = (s32 *) *(s32 **)((u8 *)arg0 + 0x1E8);
                            *(s32 *)((u8 *)temp_a0_4 + 0x200) = (s32) *(s32 *)((u8 *)gBattle + 0x8908);
                            return;
                        }
                        goto block_53;
                    }
block_53:
                    temp_v1_2 = spC0 + 1;
                    spC0 = temp_v1_2;
                    var_fp += 4;
                    if (temp_v1_2 >= *(s16 *)((u8 *)temp_s6 + 0xE)) {
                        goto block_54;
                    }
                    goto loop_27;
                }
block_54:
                var_s1_3 += 1;
                if (var_s1_3 >= 2) {
                    var_s7 -= 1;
                    if (var_s7 <= 0) {
                        goto block_57;
                    }
                    goto loop_24;
                }
                goto loop_25;
            }
block_57:
            temp_fp = *(s32 *)((u8 *)arg0 + 0x1EC);
            if ((temp_fp != 0) && (*(s32 *)((u8 *)arg0 + 0x1F4) != 0)) {
                spB0 = 0;
                D_0047056C = temp_fp == *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8);
                if (*(s16 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 2) & 8) {
                    spB0 = 1;
                } else {
                    var_s5_2 = 2;
                    do {
                        var_s6 = 0;
                        if (*(s16 *)((u8 *)temp_fp + 0xE) > 0) {
                            spA0 = temp_fp;
                            do {
                                temp_s2_2 = *(s32 **)((u8 *)spA0 + 0x40);
                                if (*(s16 *)((u8 *)temp_s2_2 + 2) & 8) {
                                    spB0 = 1;
                                    temp_s1 = (*(s32 *)((u8 *)arg0 + 0x3F8) - 1) & 0x1F;
                                    var_s0_2 = (s16 *)func_001A99C0(arg0, temp_s2_2,(short *)(spB0));
                                    if ((temp_fp != *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8)) && !(*(f32 *)((u8 *)temp_s3 + 0xC58) <= (f32) *(s16 *)((u8 *)temp_s2_2 + 6))) {
                                        var_s0_2 = 0;
                                    }
                                    if ((var_s0_2 != 0) && (func_001A8E60((s32)(temp_s2_2), (void *)(temp_s3)) == 0)) {
                                        var_s0_2 = 0;
                                    }
                                    temp_s1_2 = arg0 + (temp_s1 * 0x10);
                                    if (*(s32 *)((u8 *)temp_s1_2 + 0x1F8) & 2) {
                                        if (func_001A8D90(temp_s2_2, temp_s3) == 0) {
                                            goto block_77;
                                        }
                                    } else if (*(s16 *)((u8 *)temp_s2_2 + 6) < *(s32 *)((u8 *)temp_s1_2 + 0x1FC)) {
block_77:
                                        var_s0_2 = 0;
                                    }
                                    if (var_s0_2 == 1) {
                                        *(s32 **)((u8 *)arg0 + 0x1E8) = temp_s2_2;
                                        *(s32 *)((u8 *)arg0 + 0x1F0) = 0;
                                        *(s32 *)((u8 *)temp_s1_2 + 0x1F8) = (s32) (*(s32 *)((u8 *)temp_s1_2 + 0x1F8) | 1);
                                        *(s32 **)((u8 *)temp_s1_2 + 0x204) = (s32 *) *(s32 **)((u8 *)arg0 + 0x1E8);
                                        *(s32 *)((u8 *)temp_s1_2 + 0x200) = (s32) *(s32 *)((u8 *)gBattle + 0x8908);
                                    }
                                }
                                var_s6 += 1;
                                spA0 += 4;
                            } while (var_s6 < *(s16 *)((u8 *)temp_fp + 0xE));
                        }
                        var_s5_2 -= 1;
                    } while (var_s5_2 > 0);
                }
                if (spB0 == 0) {
                    *(s32 *)((u8 *)arg0 + 0x1F4) = 0;
                    temp_s2_3 = (unsigned char *)(gBattle + (*(s16 *)((u8 *)arg0 + 0x46) * 0x2020) + 0x830);
                    var_s1_4 = 0;
                    if (*(s16 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 0xE) > 0) {
                        var_s5_3 = 0;
                        do {
                            temp_s0_3 = *(u8 **)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8) + var_s5_3) + 0x40);
                            if ((*(s32 *)((u8 *)temp_s0_3 + 8) & 2) && (func_001DF420(temp_s2_3, *(s16 *)((u8 *)temp_s0_3 + 0x10), 2) != 0)) {
                                spF0 = *(s32 *)((u8 *)temp_s2_3 + 0x1350);
                                spF4 = (s32) *(s16 *)((u8 *)temp_s0_3 + 0x10);
                                A2d_CallHandler(0x30, &spF0);
                            }
                            var_s1_4 += 1;
                            var_s5_3 += 4;
                        } while (var_s1_4 < *(s16 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 0xE));
                    }
                    goto block_90;
                }
            } else {
block_90:
                temp_s5_3 = *(s32 **)((u8 *)arg0 + 0x1E8);
                if (*(s16 *)((u8 *)temp_s5_3 + 0xE) == 0) {
                    if (*(s32 *)((u8 *)arg0 + 0x1F4) == 0) {
                        temp_v1_3 = *(u8 **)((u8 *)arg0 + 0x1E4);
                        if (temp_v1_3 != NULL) {
                            var_v1 = *(s32 *)((u8 *)temp_v1_3 + 8);
                        } else {
                            var_v1 = 0;
                        }
                        *(s32 **)((u8 *)arg0 + 0x1E8) = (s32 *) var_v1;
                        *(s32 *)((u8 *)arg0 + 0x1F0) = 0;
                        *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x1F8) = 0;
                        *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x1FC) = -1;
                        *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x204) = 0;
                        *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x200) = (s32) *(s32 *)((u8 *)gBattle + 0x8908);
                        *(s32 *)((u8 *)arg0 + 0x3F8) = (s32) ((*(s32 *)((u8 *)arg0 + 0x3F8) + 1) & 0x1F);
                        *(s32 *)((u8 *)arg0 + 0x40C) = (s32) (*(s32 *)((u8 *)arg0 + 0x40C) + 1);
                    }
                    return;
                }
                D_0047056C = (s32) temp_s5_3 == *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8);
                if (*(s8 *)((u8 *)temp_s3 + 0x2011) != 0) {
                    D_0047056C = 0;
                }
                var_s6_2 = 4;
loop_100:
                var_s2_3 = 0;
loop_101:
                var_fp_2 = 0;
                if (*(s16 *)((u8 *)temp_s5_3 + 0xE) > 0) {
                    var_s7_2 = temp_s5_3;
loop_103:
                    temp_s1_3 = *(s32 **)((u8 *)var_s7_2 + 0x40);
                    if (var_s2_3 == 0) {
                        if (*(s16 *)((u8 *)temp_s1_3 + 0) != 0) {
                            goto block_106;
                        }
                        goto block_141;
                    }
block_106:
                    if (var_s2_3 != 0) {
                        if (*(s16 *)((u8 *)temp_s1_3 + 0) == 0) {
                            goto block_109;
                        }
                        goto block_141;
                    }
block_109:
                    if (var_s6_2 == *(&D_004681E0 + (*(s16 *)((u8 *)temp_s1_3 + 2) * 4))) {
                        var_s0_3 = (s16 *)func_001A99C0(arg0, temp_s1_3,(short *)(0));
                        if (((s32)(temp_s5_3) != (s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8))) && !(*(f32 *)((u8 *)temp_s3 + 0xC58) <= (f32) *(s16 *)((u8 *)temp_s1_3 + 6))) {
                            var_s0_3 = 0;
                        }
                        if ((var_s0_3 != 0) && (func_001A8E60((s32)(temp_s1_3), (void *)(temp_s3)) == 0)) {
                            var_s0_3 = 0;
                        }
                        if (((s32)(temp_s5_3) == (s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8))) && (func_001A8D90(temp_s1_3, temp_s3) == 0)) {
                            var_s0_3 = 0;
                        }
                        if (var_s0_3 == 1) {
                            *(s32 **)((u8 *)arg0 + 0x1E8) = temp_s1_3;
                            *(s32 *)((u8 *)arg0 + 0x1F0) = 0;
                            *(s32 *)((u8 *)arg0 + 0x1EC) = (s32) temp_s5_3;
                            *(s32 *)((u8 *)arg0 + 0x1F4) = 1;
                            *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x1F8) = 0;
                            *(s32 **)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x204) = (s32 *) *(s32 **)((u8 *)arg0 + 0x1E8);
                            *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x200) = (s32) *(s32 *)((u8 *)gBattle + 0x8908);
                            if ((s32)(temp_s5_3) == (s32)(*(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3FC) * 0x10) + arg0) + 0x204))) {
                                *(f32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x1FC) = (f32) *(f32 *)((u8 *)temp_s3 + 0xC58);
                            } else {
                                *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x1FC) = -1;
                            }
                            if ((s32)(temp_s5_3) == (s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8))) {
                                temp_a0_5 = (*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0;
                                *(s32 *)((u8 *)temp_a0_5 + 0x1F8) = (s32) (*(s32 *)((u8 *)temp_a0_5 + 0x1F8) | 2);
                            }
                            *(s32 *)((u8 *)arg0 + 0x3F8) = (s32) ((*(s32 *)((u8 *)arg0 + 0x3F8) + 1) & 0x1F);
                            if (*(s32 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 8) & 0x2000) {
                                *(s32 *)((u8 *)arg0 + 0x1F4) = 0;
                                temp_s3_2 = (unsigned char *)(gBattle + (*(s16 *)((u8 *)arg0 + 0x46) * 0x2020) + 0x830);
                                var_s2_4 = 0;
                                if (*(s16 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 0xE) > 0) {
                                    var_s0_4 = 0;
                                    do {
                                        temp_s1_4 = *(u8 **)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8) + var_s0_4) + 0x40);
                                        if ((*(s32 *)((u8 *)temp_s1_4 + 8) & 2) && (func_001DF420(temp_s3_2, *(s16 *)((u8 *)temp_s1_4 + 0x10), 2) != 0)) {
                                            spE0 = *(s32 *)((u8 *)temp_s3_2 + 0x1350);
                                            spE4 = (s32) *(s16 *)((u8 *)temp_s1_4 + 0x10);
                                            A2d_CallHandler(0x30, &spE0);
                                        }
                                        var_s2_4 += 1;
                                        var_s0_4 += 4;
                                    } while (var_s2_4 < *(s16 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 0xE));
                                }
                            }
                            if (*(u16 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 0xC) & 0x4000) {
                                *(s32 *)((u8 *)arg0 + 0x1F4) = 0;
                                temp_s5_4 = (unsigned char *)(gBattle + (*(s16 *)((u8 *)arg0 + 0x46) * 0x2020) + 0x830);
                                var_s3 = 0;
                                if (*(s16 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 0xE) > 0) {
                                    var_s1_5 = 0;
                                    do {
                                        temp_s2_4 = *(u8 **)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8) + var_s1_5) + 0x40);
                                        if ((*(s32 *)((u8 *)temp_s2_4 + 8) & 2) && (func_001DF420(temp_s5_4, *(s16 *)((u8 *)temp_s2_4 + 0x10), 2) != 0)) {
                                            spD0 = *(s32 *)((u8 *)temp_s5_4 + 0x1350);
                                            spD4 = (s32) *(s16 *)((u8 *)temp_s2_4 + 0x10);
                                            A2d_CallHandler(0x30, &spD0);
                                        }
                                        var_s3 += 1;
                                        var_s1_5 += 4;
                                    } while (var_s3 < *(s16 *)((u8 *)(*(s32 **)((u8 *)arg0 + 0x1E8)) + 0xE));
                                }
                            }
                            return;
                        }
                        goto block_141;
                    }
block_141:
                    var_fp_2 += 1;
                    var_s7_2 += 4;
                    if (var_fp_2 >= *(s16 *)((u8 *)temp_s5_3 + 0xE)) {
                        goto block_143;
                    }
                    goto loop_103;
                }
block_143:
                var_s2_3 += 1;
                if (var_s2_3 >= 2) {
                    var_s6_2 -= 1;
                    if (var_s6_2 <= 0) {
                        if (((s32)(temp_s5_3) != (s32)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1E4)) + 8))) && (*(f32 *)((u8 *)temp_s3 + 0x1848) < 0.0f) && (func_001A99C0(arg0, &D_00495A40,(short *)(0)) == 1)) {
                            *(s32 **)((u8 *)arg0 + 0x1E8) = &D_00495A40;
                            *(s32 *)((u8 *)arg0 + 0x1F0) = 0;
                            *(s32 *)((u8 *)arg0 + 0x1EC) = (s32) temp_s5_3;
                            *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x1F8) = 0;
                            *(s32 **)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x204) = (s32 *) *(s32 **)((u8 *)arg0 + 0x1E8);
                            *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x3F8) * 0x10) + arg0) + 0x200) = (s32) *(s32 *)((u8 *)gBattle + 0x8908);
                            *(s32 *)((u8 *)arg0 + 0x3F8) = (s32) ((*(s32 *)((u8 *)arg0 + 0x3F8) + 1) & 0x1F);
                        }
                    } else {
                        goto loop_100;
                    }
                } else {
                    goto loop_101;
                }
            }
        }
    }
}
