/* Draft (not built): func_002C9120 at 0x002C9120, size 0x830, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 387 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x890, original 0x830
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C9120.s */

// src/unk/unk_2C41C0.c func_002C9120 size diff=387/548
f32 func_00146E30(s32 *, s32 *);
s32 func_002C9120(u8 *arg0) {
    u8 sp[0x400];
    s32 spB8;
    s32 spBC;
    s32 spC0;
    s32 spC4;
    s32 spC8;
    s32 spCC;
    s32 sp130;
    s32 sp170;
    s32 sp1B0;
    s32 *temp_a0_2;
    s32 *temp_a0_3;
    s32 *temp_s2;
    s32 *temp_s2_2;
    s32 *temp_s2_3;
    s32 *temp_s5_2;
    s32 *var_s2;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 var_f2;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_s3;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_fp;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    u8 *temp_a0;
    u8 *temp_a0_6;
    u8 *temp_s1;
    u8 *temp_s5;
    u8 *temp_s6;
    u8 *temp_s7;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v0_6;
    u8 *temp_v1_2;

    temp_s3 = (int)(gEffWork + (*(s16 *)((u8 *)arg0 + 0x3E) * 0xF80));
    var_s2 = (int *)(temp_s3 + (*(s16 *)((u8 *)arg0 + 0x5C) << 6));
    temp_s5 = (unsigned char *)(temp_s3 + 0xF40);
    temp_s1 = (unsigned char *)(temp_s3 + 0xF00);
    if (*(s16 *)((u8 *)arg0 + 0x38) & 0x8000) {
        return 1;
    }
    if (*(u8 **)((u8 *)var_s2 + 0x34) != NULL) {
        temp_v0 = *(u8 **)((u8 *)temp_s1 + 0x34);
        if ((s32)(var_s2) == (s32)(temp_v0)) {
            *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x34)) + 0x38) = temp_s1;
            *(u8 **)((u8 *)temp_s1 + 0x34) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x34)) + 0x34);
        }
    }
    memset(var_s2, 0, 0x40);
    *(u8 **)((u8 *)var_s2 + 0x34) = temp_s5;
    *(s32 **)((u8 *)var_s2 + 0x38) = (s32 *) *(s32 **)((u8 *)temp_s5 + 0x38);
    *(s32 **)((u8 *)temp_s5 + 0x38) = var_s2;
    *(s32 **)((u8 *)(*(s32 **)((u8 *)var_s2 + 0x38)) + 0x34) = var_s2;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    *(f32 *)((u8 *)var_s2 + 0x30) = (f32) *(f32 *)((u8 *)arg0 + 0x24);
    temp_a0 = (unsigned char *)(gEffWork + (((s64) ((s64) *(s16 *)((u8 *)arg0 + 0x3E) << 0x30) >> 0x30) * 0xF80) + 0xF00);
    *(s32 *)((u8 *)var_s2 + 0x3C) = (s32) ((s64) ((s64) *(s16 *)((u8 *)arg0 + 0x5C) << 0x30) >> 0x30);
    *(s16 *)((u8 *)arg0 + 0x5C) = (s16) (*(s16 *)((u8 *)arg0 + 0x5C) + 1);
    *(s32 *)((u8 *)arg0 + 0x40) = (s32) (*(s32 *)((u8 *)arg0 + 0x40) + 1);
    temp_v1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x5C);
    if (*(s32 *)((u8 *)arg0 + 0x40) >= temp_v1) {
        *(s32 *)((u8 *)arg0 + 0x40) = temp_v1;
        *(s16 *)((u8 *)arg0 + 0x5C) = (s16) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a0 + 0x34)) + 0x3C);
    }
    if (*(s32 *)((u8 *)arg0 + 0x40) >= 0x3C) {
        *(s32 *)((u8 *)arg0 + 0x40) = 0x3C;
        *(s16 *)((u8 *)arg0 + 0x5C) = (s16) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a0 + 0x34)) + 0x3C);
    }
    if (*(s32 *)((u8 *)arg0 + 0x40) >= 4) {
        memset(&spC0, 0, 0x70);
        temp_a0_2 = *(s32 **)((u8 *)var_s2 + 0x38);
        temp_f20 = func_00146E30(var_s2, *(s32 **)((u8 *)var_s2 + 0x38));
        temp_a0_3 = *(s32 **)((u8 *)(*(s32 **)((u8 *)var_s2 + 0x38)) + 0x38);
        temp_f21 = func_00146E30(temp_a0_2, *(s32 **)((u8 *)temp_a0_2 + 0x38));
        temp_f0 = func_00146E30(temp_a0_3, *(s32 **)((u8 *)temp_a0_3 + 0x38));
        if (*(s32 *)((u8 *)arg0 + 0x40) == 4) {
            spC0 = 0;
            spC4 = 0x3F800000;
            spC8 = 0x40000000;
            spCC = 0x40400000;
        } else {
            spC4 = 0x3F800000;
            spC0 = 0;
            spC8 = 0x40000000;
            spCC = 0x40C00000;
        }
        var_s0 = 3;
loop_15:
        if (var_s0 >= 0) {
            temp_v0_2 = (var_s0 * 4) + sp;
            var_s0 -= 1;
            *(s32 *)((u8 *)temp_v0_2 + 0xD0) = (s32) *(s32 *)((u8 *)var_s2 + 0);
            *(f32 *)((u8 *)temp_v0_2 + 0xE0) = (f32) *(f32 *)((u8 *)var_s2 + 4);
            *(f32 *)((u8 *)temp_v0_2 + 0xF0) = (f32) *(f32 *)((u8 *)var_s2 + 8);
            var_s2 = *(s32 **)((u8 *)var_s2 + 0x38);
            goto loop_15;
        }
        if (*(s32 *)((u8 *)arg0 + 0x40) == 4) {
            var_fp = func_002C4C90(&sp1B0, &spC0, temp_f0, 0, 0x3F800000);
            spBC = func_002C4C90(&sp170, &spC0, temp_f21, 0x3F800000, 0x3F800000);
            spB8 = func_002C4C90(&sp130, &spC0, temp_f20, 0x40000000, 0x3F800000);
        } else {
            var_fp = func_002C4C90(&sp1B0, &spC0, temp_f0, 0, 0x3F800000);
            spBC = func_002C4C90(&sp170, &spC0, temp_f21, 0x3F800000, 0x3F800000);
            spB8 = func_002C4C90(&sp130, &spC0, temp_f20, 0x40000000, 0x40800000);
        }
        temp_s5_2 = *(s32 **)((u8 *)temp_s5 + 0x38);
        temp_s6 = *(u8 **)((u8 *)temp_s5_2 + 0x38);
        temp_s7 = *(u8 **)((u8 *)temp_s6 + 0x38);
        var_s0_2 = 0;
loop_30:
        if (var_s0_2 < var_fp) {
            temp_s2 = (int *)(temp_s3 + (*(s16 *)((u8 *)arg0 + 0x5C) << 6));
            if (*(u8 **)((u8 *)temp_s2 + 0x34) != NULL) {
                temp_v0_3 = *(u8 **)((u8 *)temp_s1 + 0x34);
                if ((s32)(temp_s2) == (s32)(temp_v0_3)) {
                    *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0_3 + 0x34)) + 0x38) = temp_s1;
                    *(u8 **)((u8 *)temp_s1 + 0x34) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x34)) + 0x34);
                }
            }
            memset(temp_s2, 0, 0x40);
            *(u8 **)((u8 *)temp_s2 + 0x34) = temp_s7;
            *(s32 **)((u8 *)temp_s2 + 0x38) = (s32 *) *(s32 **)((u8 *)temp_s7 + 0x38);
            *(s32 **)((u8 *)temp_s7 + 0x38) = temp_s2;
            *(s32 **)((u8 *)(*(s32 **)((u8 *)temp_s2 + 0x38)) + 0x34) = temp_s2;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            *(f32 *)((u8 *)temp_s2 + 0x30) = (f32) *(f32 *)((u8 *)arg0 + 0x24);
            *(s32 *)((u8 *)temp_s2 + 0x3C) = (s32) ((s64) ((s64) *(s16 *)((u8 *)arg0 + 0x5C) << 0x30) >> 0x30);
            *(s16 *)((u8 *)arg0 + 0x5C) = (s16) (*(s16 *)((u8 *)arg0 + 0x5C) + 1);
            *(s32 *)((u8 *)arg0 + 0x40) = (s32) (*(s32 *)((u8 *)arg0 + 0x40) + 1);
            temp_a0_4 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x5C);
            temp_v1_2 = (unsigned char *)(gEffWork + (((s64) ((s64) *(s16 *)((u8 *)arg0 + 0x3E) << 0x30) >> 0x30) * 0xF80) + 0xF00);
            if (*(s32 *)((u8 *)arg0 + 0x40) >= temp_a0_4) {
                *(s32 *)((u8 *)arg0 + 0x40) = temp_a0_4;
                *(s16 *)((u8 *)arg0 + 0x5C) = (s16) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1_2 + 0x34)) + 0x3C);
            }
            if (*(s32 *)((u8 *)arg0 + 0x40) >= 0x3C) {
                *(s32 *)((u8 *)arg0 + 0x40) = 0x3C;
                *(s16 *)((u8 *)arg0 + 0x5C) = (s16) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v1_2 + 0x34)) + 0x3C);
            }
            var_s0_2 += 1;
            goto loop_30;
        }
        var_s0_3 = 0;
loop_41:
        if (var_s0_3 < spBC) {
            temp_s2_2 = (int *)(temp_s3 + (*(s16 *)((u8 *)arg0 + 0x5C) << 6));
            if (*(u8 **)((u8 *)temp_s2_2 + 0x34) != NULL) {
                temp_v0_4 = *(u8 **)((u8 *)temp_s1 + 0x34);
                if ((s32)(temp_s2_2) == (s32)(temp_v0_4)) {
                    *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0_4 + 0x34)) + 0x38) = temp_s1;
                    *(u8 **)((u8 *)temp_s1 + 0x34) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x34)) + 0x34);
                }
            }
            memset(temp_s2_2, 0, 0x40);
            *(u8 **)((u8 *)temp_s2_2 + 0x34) = temp_s6;
            *(s32 **)((u8 *)temp_s2_2 + 0x38) = (s32 *) *(s32 **)((u8 *)temp_s6 + 0x38);
            *(s32 **)((u8 *)temp_s6 + 0x38) = temp_s2_2;
            *(s32 **)((u8 *)(*(s32 **)((u8 *)temp_s2_2 + 0x38)) + 0x34) = temp_s2_2;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            *(f32 *)((u8 *)temp_s2_2 + 0x30) = (f32) *(f32 *)((u8 *)arg0 + 0x24);
            *(s32 *)((u8 *)temp_s2_2 + 0x3C) = (s32) ((s64) ((s64) *(s16 *)((u8 *)arg0 + 0x5C) << 0x30) >> 0x30);
            *(s16 *)((u8 *)arg0 + 0x5C) = (s16) (*(s16 *)((u8 *)arg0 + 0x5C) + 1);
            *(s32 *)((u8 *)arg0 + 0x40) = (s32) (*(s32 *)((u8 *)arg0 + 0x40) + 1);
            temp_a0_5 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x5C);
            temp_v0_5 = (unsigned char *)(gEffWork + (((s64) ((s64) *(s16 *)((u8 *)arg0 + 0x3E) << 0x30) >> 0x30) * 0xF80) + 0xF00);
            if (*(s32 *)((u8 *)arg0 + 0x40) >= temp_a0_5) {
                *(s32 *)((u8 *)arg0 + 0x40) = temp_a0_5;
                *(s16 *)((u8 *)arg0 + 0x5C) = (s16) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v0_5 + 0x34)) + 0x3C);
            }
            if (*(s32 *)((u8 *)arg0 + 0x40) >= 0x3C) {
                *(s32 *)((u8 *)arg0 + 0x40) = 0x3C;
                *(s16 *)((u8 *)arg0 + 0x5C) = (s16) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v0_5 + 0x34)) + 0x3C);
            }
            var_s0_3 += 1;
            goto loop_41;
        }
        var_s0_4 = 0;
loop_51:
        if (var_s0_4 < spB8) {
            temp_s2_3 = (int *)(temp_s3 + (*(s16 *)((u8 *)arg0 + 0x5C) << 6));
            if (*(s32 **)((u8 *)temp_s2_3 + 0x34) != NULL) {
                temp_v0_6 = *(u8 **)((u8 *)temp_s1 + 0x34);
                if ((s32)(temp_s2_3) == (s32)(temp_v0_6)) {
                    *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0_6 + 0x34)) + 0x38) = temp_s1;
                    *(u8 **)((u8 *)temp_s1 + 0x34) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x34)) + 0x34);
                }
            }
            memset(temp_s2_3, 0, 0x40);
            *(s32 **)((u8 *)temp_s2_3 + 0x34) = temp_s5_2;
            *(s32 **)((u8 *)temp_s2_3 + 0x38) = (s32 *) *(s32 **)((u8 *)temp_s5_2 + 0x38);
            *(s32 **)((u8 *)temp_s5_2 + 0x38) = temp_s2_3;
            *(s32 **)((u8 *)(*(s32 **)((u8 *)temp_s2_3 + 0x38)) + 0x34) = temp_s2_3;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s2) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            *(f32 *)((u8 *)temp_s2_3 + 0x30) = (f32) *(f32 *)((u8 *)arg0 + 0x24);
            temp_a0_6 = (unsigned char *)(gEffWork + (((s64) ((s64) *(s16 *)((u8 *)arg0 + 0x3E) << 0x30) >> 0x30) * 0xF80) + 0xF00);
            *(s32 *)((u8 *)temp_s2_3 + 0x3C) = (s32) ((s64) ((s64) *(s16 *)((u8 *)arg0 + 0x5C) << 0x30) >> 0x30);
            *(s16 *)((u8 *)arg0 + 0x5C) = (s16) (*(s16 *)((u8 *)arg0 + 0x5C) + 1);
            *(s32 *)((u8 *)arg0 + 0x40) = (s32) (*(s32 *)((u8 *)arg0 + 0x40) + 1);
            temp_v1_3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x5C);
            if (*(s32 *)((u8 *)arg0 + 0x40) >= temp_v1_3) {
                *(s32 *)((u8 *)arg0 + 0x40) = temp_v1_3;
                *(s16 *)((u8 *)arg0 + 0x5C) = (s16) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a0_6 + 0x34)) + 0x3C);
            }
            if (*(s32 *)((u8 *)arg0 + 0x40) >= 0x3C) {
                *(s32 *)((u8 *)arg0 + 0x40) = 0x3C;
                *(s16 *)((u8 *)arg0 + 0x5C) = (s16) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a0_6 + 0x34)) + 0x3C);
            }
            var_s0_4 += 1;
            goto loop_51;
        }
    }
    if (gBattle != NULL) {
        var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x20) - var_f2;
    *(f32 *)((u8 *)arg0 + 0x20) = temp_f1;
    if (temp_f1 < 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x20) = 0.0f;
        *(s16 *)((u8 *)arg0 + 0x38) = (s16) (*(s16 *)((u8 *)arg0 + 0x38) | ~0x7FFF);
    }
    return 0;
}
