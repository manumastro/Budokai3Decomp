/* Draft (not built): func_001FDD40 at 0x001FDD40, size 0x570, segment unk/unk_1FB760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); egal implicit conversion from 'int' to 'float *' mwccps2.exe Compiler: @ 330: sp94 = (f32 *)(func_00146E60(arg0, arg1));
 * Original: asm/nonmatchings/unk/unk_1FB760/func_001FDD40.s */

// src/unk/unk_1FB760.c func_001FDD40 cerr diff=-1/0
extern s32 D_0046FDC8;
extern void *D_0051CD04;
extern void *D_0051CD08;
extern s32 D_0051CD20;
extern s32 D_0051CDA0;
extern s32 gBtbBg;
extern char *D_0051CD14[];
s32 func_001FDD40(s32 arg0, s32 arg1) {
    s32 sp80;
    f32 sp94;
    s32 spA0;
    f32 spA8;
    f32 spB0;
    f32 spB4;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_a1;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a1_2;
    u8 *temp_a2;
    u8 *temp_a2_2;
    u8 *temp_v0_2;
    u8 *temp_v0_4;
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *var_s1;

    if (D_0051CD28 == 0) {
        return 0;
    }
    if (gBtbBg == 1) {
        return 0;
    }
    var_s1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)((D_0051CD20 * 0x24) + *D_0051CD14) + 4)) + 0xC8);
    var_s0 = 0;
    memset(D_0046FDC8, 0, 0xC00, *D_0051CD14);
    sp94 = (f32 *)(func_00146E60(arg0, arg1));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s4) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s3) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    func_00146F10(&sp80, &sp80, 0x3F000000);
loop_67:
    if (var_s1 != NULL) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        temp_f0 = *(f32 *)((u8 *)var_s1 + 0x20);
        spB4 = temp_f0;
        M2C_ERROR(/* unknown instruction: c1 0x4 */);
        spB0 = temp_f0;
        if (*(s32 *)((u8 *)var_s1 + 0x24) != *(s32 *)((u8 *)var_s1 + 0x28)) {
            temp_f20 = *(f32 *)((u8 *)var_s1 + 0x18) / 4.0f;
            spA8 = *(f32 *)((u8 *)var_s1 + 8) + temp_f20;
            if ((func_001FC820(arg0, arg1, &spA0) == 0) && (func_001FD180(&spA0, &sp80) == 0)) {
                spA8 = *(f32 *)((u8 *)var_s1 + 8) - temp_f20;
                if (func_001FC820(arg0, arg1, &spA0) == 0) {
                    if (func_001FD180(&spA0, &sp80) != 0) {
                        goto block_16;
                    }
                    goto block_15;
                }
            }
            goto block_16;
        }
        if ((func_001FC820(arg0, arg1, &spA0) == 0) && (func_001FD180(&spA0, &sp80) == 0)) {
block_15:
            var_s1 = *(u8 **)((u8 *)var_s1 + 0x44);
        } else {
block_16:
            temp_s5 = *(s32 *)((u8 *)var_s1 + 0x48);
            var_s2 = 0;
loop_45:
            if (var_s2 < *(s32 *)((u8 *)var_s1 + 0x2C)) {
                temp_a2 = *(temp_s5 + (var_s2 * 4));
                temp_v1 = *(u8 **)((u8 *)temp_a2 + 0xC);
                temp_v1_2 = *(u8 **)((u8 *)temp_v1 + 4);
                temp_a1 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_v1 + 0) * 8) + *(s32 *)((u8 *)temp_a2 + 0x14)) + 8);
                var_a0 = *(s32 *)((u8 *)((temp_a1 * 0x10) + temp_v1_2) + 0xC);
                if (var_a0 == 0) {
                    var_a0 = *(s32 *)((u8 *)temp_v1_2 + 0xC);
                }
                if ((temp_a1 >= 0) && (*(s32 *)((u8 *)temp_a2 + 4) == var_a0)) {
                    temp_a0 = *(u8 **)((u8 *)temp_a2 + 0);
                    temp_v0 = *(s32 *)((u8 *)temp_a0 + 0xC);
                    if (temp_v0 >= 0) {
                        temp_v0_2 = *(*(s32 *)((u8 *)D_0051CD08 + 8) + (temp_v0 * 4));
                        var_v1 = 0;
loop_29:
                        if (var_v1 >= *(s32 *)((u8 *)temp_v0_2 + 4)) {
                            var_v0 = 0;
                        } else {
                            temp_a1_2 = (u8 *)(*(s32 *)((u8 *)temp_v0_2 + 8) + (var_v1 * 0x10));
                            if (**(*(s32 *)((u8 *)(*(*(s32 *)((u8 *)D_0051CD04 + 8) + (*(s32 *)((u8 *)temp_a1_2 + 0) * 4))) + 0xC) + (*(s32 *)((u8 *)temp_a1_2 + 4) * 4)) & 2) {
                                var_v0 = 1;
                            } else {
                                var_v1 += 1;
                                goto loop_29;
                            }
                        }
                        if (var_v0 != 0) {
                            goto block_32;
                        }
                    } else {
block_32:
                        temp_a1_3 = *(s32 *)((u8 *)temp_a0 + 0);
                        var_v0_2 = 0;
                        switch (temp_a1_3) {        /* irregular */
                        case 0:
                            temp_a0_2 = (u8 *)(&D_0051CDA0 + (var_s0 * 0x30));
                            var_v0_2 = func_001FC5C0(temp_a0_2, temp_a0_2 + 0x10, arg0, arg1);
                            break;
                        case 1:
                            temp_a0_3 = (u8 *)(&D_0051CDA0 + (var_s0 * 0x30));
                            var_v0_2 = func_001FC220(temp_a0_3, temp_a0_3 + 0x10, arg0, arg1);
                            break;
                        case 2:
                            temp_a0_4 = (u8 *)(&D_0051CDA0 + (var_s0 * 0x30));
                            var_v0_2 = func_001FBDE0(temp_a0_4, temp_a0_4 + 0x10, arg0, arg1);
                            break;
                        }
                        if (var_v0_2 != 0) {
                            var_s0 += 1;
                        }
                    }
                }
                var_s2 += 1;
                goto loop_45;
            }
            temp_s5_2 = *(s32 *)((u8 *)var_s1 + 0x4C);
            var_s2_2 = 0;
loop_65:
            if (var_s2_2 < *(s32 *)((u8 *)var_s1 + 0x30)) {
                temp_a2_2 = *(temp_s5_2 + (var_s2_2 * 4));
                temp_v1_3 = *(u8 **)((u8 *)temp_a2_2 + 0x18);
                temp_v1_4 = *(u8 **)((u8 *)temp_v1_3 + 4);
                temp_a1_4 = *(s32 *)((u8 *)((*(s32 *)((u8 *)temp_v1_3 + 0) * 8) + *(s32 *)((u8 *)temp_a2_2 + 0x20)) + 8);
                var_a0_2 = *(s32 *)((u8 *)((temp_a1_4 * 0x10) + temp_v1_4) + 0xC);
                if (var_a0_2 == 0) {
                    var_a0_2 = *(s32 *)((u8 *)temp_v1_4 + 0xC);
                }
                if ((temp_a1_4 >= 0) && (*(s32 *)((u8 *)temp_a2_2 + 0x10) == var_a0_2)) {
                    temp_v0_3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a2_2 + 0)) + 0x10);
                    if (temp_v0_3 >= 0) {
                        temp_v0_4 = *(*(s32 *)((u8 *)D_0051CD08 + 8) + (temp_v0_3 * 4));
                        var_v1_2 = 0;
loop_59:
                        if (var_v1_2 >= *(s32 *)((u8 *)temp_v0_4 + 4)) {
                            var_v0_3 = 0;
                        } else {
                            temp_a0_5 = (u8 *)(*(s32 *)((u8 *)temp_v0_4 + 8) + (var_v1_2 * 0x10));
                            if (**(*(s32 *)((u8 *)(*(*(s32 *)((u8 *)D_0051CD04 + 8) + (*(s32 *)((u8 *)temp_a0_5 + 0) * 4))) + 0xC) + (*(s32 *)((u8 *)temp_a0_5 + 4) * 4)) & 2) {
                                var_v0_3 = 1;
                            } else {
                                var_v1_2 += 1;
                                goto loop_59;
                            }
                        }
                        if (var_v0_3 != 0) {
                            goto block_62;
                        }
                    } else {
block_62:
                        temp_a0_6 = (u8 *)(&D_0051CDA0 + (var_s0 * 0x30));
                        if (func_001FBAA0(temp_a0_6, temp_a0_6 + 0x10, arg0, arg1) != 0) {
                            var_s0 += 1;
                        }
                    }
                }
                var_s2_2 += 1;
                goto loop_65;
            }
            var_s1 = *(u8 **)((u8 *)var_s1 + 0x44);
        }
        goto loop_67;
    }
    return var_s0;
}
