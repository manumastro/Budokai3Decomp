/* Draft (not built): func_0024ACE0 at 0x0024ACE0, size 0x57C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ) + 0x54) = 0; @ 492: f) && (temp_v1_2 = temp_s0 * 4, (*(s32 *)((u8 *)(((u8 *)temp_v1_2) + D_0046FE54) + 0x54) != 0))) {
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024ACE0.s */

// src/battle/skill_cmd.c func_0024ACE0 cerr diff=-1/0
s32 func_001EA240(s32 *);
extern f32 D_0051D9AC;
extern void func_00251F30(void);
s32 func_0024ACE0(u8 *arg0) {
    s32 sp50;
    s32 sp60;
    f32 sp70;
    s32 *sp78;
    u8 *sp7C;
    s16 sp80;
    s16 sp82;
    s8 sp84;
    s8 sp85;
    s16 sp86;
    s32 sp88;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f2;
    f32 var_f2;
    s16 temp_v1;
    s16 temp_v1_3;
    s32 temp_s0;
    s32 temp_v1_2;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s1 = *(u8 **)((u8 *)arg0 + 8);
    temp_v1 = *(s16 *)((u8 *)arg0 + 4);
    temp_s2 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s0 = *(s32 *)((u8 *)temp_s1 + 0x1350);
    if (temp_v1 & 0x8000) {
        return 1;
    }
    if (!(temp_v1 & 0x4000) && ((*(f32 *)((u8 *)arg0 + 0) <= 12.0f) || (temp_v1 & 0x2000))) {
        func_001D9280((s32)(*(u8 **)((u8 *)arg0 + 8)));
        temp_a0 = *(u8 **)((u8 *)arg0 + 0x54);
        if (temp_a0 != NULL) {
            Obj_ResetF38((s32)((void *)(temp_a0)));
            *(u8 **)((u8 *)arg0 + 0x54) = NULL;
        }
        *(f32 *)((u8 *)arg0 + 0) = 12.0f;
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | 0x4000);
    }
    if (*(s16 *)((u8 *)arg0 + 4) & 0x1000) {
        *(f32 *)((u8 *)arg0 + 0x34) = (f32) (*(f32 *)((u8 *)arg0 + 0x34) + (-24.0f * D_0051D9AC));
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    }
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
    if (*(s16 *)((u8 *)arg0 + 4) & 0x800) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        sp70 = *(f32 *)((u8 *)temp_s2 + 0xCC);
        sp78 = (s32 *)(&func_00251F30);
        sp7C = arg0;
        if (*(s32 *)((u8 *)temp_s1 + 0xB9C) == 0x10) {
            temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x5C);
            if (temp_f1_2 < 0.5f) {
                sp80 = 2;
                sp86 = *(s16 *)((u8 *)arg0 + 6);
            } else if (!(temp_f1_2 < 0.5f) && (temp_f1_2 < 0.75f)) {
                sp80 = 1;
                sp86 = M2C_BITWISE(s16, (0.25f * (f32) *(s16 *)((u8 *)arg0 + 6)));
            } else {
                temp_f1_3 = *(f32 *)((u8 *)arg0 + 0x5C);
                if (!(temp_f1_3 < 0.75f) && (temp_f1_3 < 0.9f)) {
                    sp80 = 3;
                    sp86 = M2C_BITWISE(s16, (1.2f * (f32) *(s16 *)((u8 *)arg0 + 6)));
                } else {
                    sp80 = 3;
                    sp86 = M2C_BITWISE(s16, (1.5f * (f32) *(s16 *)((u8 *)arg0 + 6)));
                }
            }
        } else {
            temp_f2 = *(f32 *)((u8 *)arg0 + 0x5C);
            if (temp_f2 < 0.25f) {
                sp80 = 2;
                sp86 = *(s16 *)((u8 *)arg0 + 6);
            } else if (!(temp_f2 < 0.25f) && (temp_f2 < 0.5f)) {
                sp80 = 1;
                sp86 = M2C_BITWISE(s16, (0.25f * (f32) *(s16 *)((u8 *)arg0 + 6)));
            } else {
                temp_f1_4 = *(f32 *)((u8 *)arg0 + 0x5C);
                if (!(temp_f1_4 < 0.5f) && (temp_f1_4 < 0.75f)) {
                    sp80 = 3;
                    sp86 = M2C_BITWISE(s16, (1.2f * (f32) *(s16 *)((u8 *)arg0 + 6)));
                } else {
                    sp80 = 3;
                    sp86 = M2C_BITWISE(s16, (1.5f * (f32) *(s16 *)((u8 *)arg0 + 6)));
                }
            }
        }
        sp82 = 0;
        sp84 = (s8) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1354)) + 0x1350);
        sp85 = (s8) *(s32 *)((u8 *)temp_s1 + 0x1350);
        var_v0 = 1;
        if (*(s16 *)((u8 *)arg0 + 4) & 0x400) {

        } else {
            var_v0 = 0;
        }
        sp88 = var_v0;
        sp88 = var_v0 | 4;
        func_001EA240(&sp50);
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x400);
    }
    if ((*(f32 *)((u8 *)arg0 + 0) < 50.0f) && (temp_v1_2 = temp_s0 * 4, (*(s32 *)((u8 *)(((u8 *)temp_v1_2) + D_0046FE54) + 0x54) != 0))) {
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | 0x1000);
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | 0x800);
        *(s32 *)((u8 *)(((u8 *)temp_v1_2) + D_0046FE54) + 0x54) = 0;
    } else if (!(*(f32 *)((u8 *)arg0 + 0) < 50.0f)) {
        temp_v1_3 = *(s16 *)((u8 *)temp_s1 + 0xCAC);
        if ((temp_v1_3 != 0x10) && (temp_v1_3 != 0x19) && (temp_v1_3 != 0x14)) {

        } else {
            *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | ~0x7FFF);
        }
    }
    temp_a0_2 = *(u8 **)((u8 *)arg0 + 0x54);
    if (temp_a0_2 != NULL) {
        func_00208F70(temp_a0_2);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x54)) + 0x38) < 0) {
            *(u8 **)((u8 *)arg0 + 0x54) = NULL;
        }
    }
    return 0;
}
