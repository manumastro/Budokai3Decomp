/* Draft (not built): func_0024DB10 at 0x0024DB10, size 0x5D4, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); conversion from 'unsigned char *' to 'int' @ 797: func_001D9280(*(u8 **)((u8 *)arg0 + 8), var_a1, temp_a3 * 9, temp_a3);
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024DB10.s */

// src/battle/skill_cmd.c func_0024DB10 cerr diff=-1/0
f32 func_00146E30(s32, void *);
s32 func_001EA240(s32 *);
s32 func_002183F0(s32, void **, void *);
extern void func_00251F30(void);
s32 func_0024DB10(u8 *arg0) {
    s32 sp70;
    u8 *sp80;
    s32 *sp84;
    s16 spA0;
    s16 spA2;
    f32 spA8;
    s32 spB0;
    s32 spC0;
    s32 spD0;
    f32 spE0;
    s32 *spE8;
    u8 *spEC;
    s16 spF0;
    s16 spF2;
    s8 spF4;
    s8 spF5;
    s16 spF6;
    s32 spF8;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 var_f2;
    f32 var_f2_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;

    temp_s2 = *(u8 **)((u8 *)arg0 + 8);
    temp_s3 = *(u8 **)((u8 *)arg0 + 0xC);
    var_a1 = (s32)(D_0046FE4C);
    temp_a3 = *(s32 *)((u8 *)temp_s2 + 0x1350);
    temp_s1 = (u8 *)(var_a1 + (temp_a3 * 0x480) + 0x10);
    temp_s0 = (u8 *)(var_a1 + (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1354)) + 0x1350) * 0x480) + 0x10);
    if (*(s16 *)((u8 *)arg0 + 4) & 0x8000) {
        return 1;
    }
    if ((temp_a3 != *(s16 *)((u8 *)D_0046FE54 + 0x64)) && ((temp_v1 = *(s16 *)((u8 *)D_0046FE54 + 0x60), ((temp_v1 & 0x10) != 0)) || (temp_v1 & 0x20))) {
        return 1;
    }
    temp_v1_2 = *(s16 *)((u8 *)arg0 + 4);
    if (!(temp_v1_2 & 0x4000)) {
        if (!(*(f32 *)((u8 *)arg0 + 0) <= 12.0f) && !(temp_v1_2 & 0x2000)) {
            var_a1 = *(s32 *)((u8 *)temp_s2 + 0x1350);
            if (*(s32 *)((u8 *)((var_a1 * 0x480) + D_0046FE4C) + 0x24) == -1) {
                goto block_11;
            }
        } else {
block_11:
            func_001D9280(*(u8 **)((u8 *)arg0 + 8), var_a1, temp_a3 * 9, temp_a3);
            temp_a0 = *(u8 **)((u8 *)arg0 + 0x58);
            if (temp_a0 != NULL) {
                func_00209390(temp_a0);
            }
            *(f32 *)((u8 *)arg0 + 0) = 12.0f;
            *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | 0x4000);
        }
    }
    if (!(*(s16 *)((u8 *)D_0046FE54 + 0x60) & 0x80)) {
        if (gBattle != NULL) {
            var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
        } else if (D_004703F4 != 3) {
            var_f2 = 1.0f;
        } else {
            var_f2 = 1.2f;
        }
        temp_f1 = *(f32 *)((u8 *)arg0 + 0) - var_f2;
        *(f32 *)((u8 *)arg0 + 0) = temp_f1;
        if (temp_f1 < 0.0f) {
            *(f32 *)((u8 *)arg0 + 0) = 0.0f;
            *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | ~0x7FFF);
        }
    }
    if (*(s16 *)((u8 *)arg0 + 4) & 0x800) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        spF6 = *(s16 *)((u8 *)arg0 + 6);
        if (((s64) ((s64) *(s16 *)((u8 *)arg0 + 4) << 0x30) >> 0x30) & 0x400) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        spF8 = var_v0;
        if (*(s16 *)((u8 *)D_0046FE54 + 0x60) & 0x100) {
            temp_v0 = spF8 | 8;
            spE0 = 2.0f * *(f32 *)((u8 *)temp_s3 + 0xCC);
            spF8 = temp_v0;
            spF6 = *(s16 *)((u8 *)arg0 + 6) + *(s16 *)((u8 *)temp_s0 + 0x34);
            spF8 = temp_v0 | 0x10;
        } else {
            spE0 = *(f32 *)((u8 *)temp_s3 + 0xCC);
        }
        if ((*(s16 *)((u8 *)D_0046FE54 + 0x60) & 0x80) && !(*(f32 *)((u8 *)temp_s1 + 0x10) < 1.0f)) {
            spE0 = 10.0f * *(f32 *)((u8 *)temp_s3 + 0xCC);
        }
        spEC = arg0;
        spE8 = (s32 *)(&func_00251F30);
        spF0 = (s16) *(s32 *)((u8 *)temp_s3 + 0xD4);
        spF2 = 0;
        spF4 = (s8) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x1354)) + 0x1350);
        spF5 = (s8) *(s32 *)((u8 *)temp_s2 + 0x1350);
        func_001EA240(&spC0);
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x400);
    }
    if (*(s16 *)((u8 *)D_0046FE54 + 0x60) & 0x80) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($s0) */);
        M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
        M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
        M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        temp_f20 = func_00146E30(*(s32 *)((u8 *)gBattle + 0x264), arg0 + 0x20);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00146F30(&spB0);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        func_00146F10(&spB0, &spB0, 0.01f * temp_f20);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        temp_v0_2 = func_0012EAE0(8) & 0xFF;
        if (temp_v0_2 >= 0) {
            var_f2_2 = (f32) temp_v0_2;
        } else {
            var_f2_2 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        if ((var_f2_2 / 255.0f) < 0.2f) {
            memset(&sp80, 0, 0x2C);
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            temp_a2 = arg0 + 0x20;
            sp80 = temp_a2;
            sp84 = &sp70;
            spA8 = 0.0f;
            spA0 = 5;
            spA2 = 0;
            func_002183F0(2, &sp80, temp_a2);
        }
    } else if (*(s16 *)((u8 *)arg0 + 4) & 0x1000) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    }
    temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x54) + *(f32 *)((u8 *)temp_s3 + 0x50);
    *(f32 *)((u8 *)arg0 + 0x54) = temp_f1_2;
    if (!(temp_f1_2 <= 1.0f)) {
        *(f32 *)((u8 *)arg0 + 0x54) = (f32) (temp_f1_2 - 1.0f);
    }
    temp_f1_3 = *(f32 *)((u8 *)arg0 + 0x54);
    if (temp_f1_3 < 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x54) = (f32) (temp_f1_3 + 1.0f);
    }
    temp_a0_2 = *(u8 **)((u8 *)arg0 + 0x58);
    if (temp_a0_2 != NULL) {
        func_00208F70(temp_a0_2);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x58)) + 0x38) < 0) {
            *(u8 **)((u8 *)arg0 + 0x58) = NULL;
        }
    }
    temp_a0_3 = *(u8 **)((u8 *)arg0 + 0x5C);
    if (temp_a0_3 != NULL) {
        func_00208F70(temp_a0_3);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x5C)) + 0x38) < 0) {
            *(u8 **)((u8 *)arg0 + 0x5C) = NULL;
        }
    }
    temp_a0_4 = *(u8 **)((u8 *)D_0046FE54 + 0x5C);
    if ((temp_a0_4 != NULL) && (*(s16 *)((u8 *)D_0046FE54 + 0x62) == *(s32 *)((u8 *)temp_s2 + 0x1350))) {
        func_00208F70(temp_a0_4);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)D_0046FE54 + 0x5C)) + 0x38) < 0) {
            *(u8 **)((u8 *)D_0046FE54 + 0x5C) = NULL;
        }
    }
    return 0;
}
