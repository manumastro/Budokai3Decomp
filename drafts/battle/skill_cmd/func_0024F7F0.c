/* Draft (not built): func_0024F7F0 at 0x0024F7F0, size 0x2DC, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 96 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F8, original 0x2DC
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024F7F0.s */

// src/battle/skill_cmd.c func_0024F7F0 size diff=96/126
s32 func_001EA240(s32 *, s32);
extern void func_00251F30(void);
s32 func_0024F7F0(u8 *arg0) {
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
    f32 var_f2;
    f32 var_f2_2;
    s16 temp_v1_4;
    s32 temp_a1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s1 = *(u8 **)((u8 *)arg0 + 8);
    temp_s2 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_a1 = *(s32 *)((u8 *)temp_s1 + 0x1350);
    temp_s0 = D_0046FE4C + (temp_a1 * 0x480) + 0x10;
    if (*(s16 *)((u8 *)arg0 + 4) & 0x800) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        sp86 = *(s16 *)((u8 *)arg0 + 6);
        sp70 = *(f32 *)((u8 *)arg0 + 0x4C);
        sp78 = (s32 *)(&func_00251F30);
        sp7C = arg0;
        sp82 = 0;
        sp80 = (s16) ((s64) ((s64) *(s32 *)((u8 *)temp_s2 + 0xD4) << 0x30) >> 0x30);
        sp84 = (s8) ((s64) ((s64) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x1354)) + 0x1350) << 0x38) >> 0x38);
        sp85 = (s8) ((s64) ((s64) *(s32 *)((u8 *)temp_s1 + 0x1350) << 0x38) >> 0x38);
        if (((s64) ((s64) *(s16 *)((u8 *)arg0 + 4) << 0x30) >> 0x30) & 0x400) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        sp88 = var_v0;
        temp_v1 = sp88 | 4;
        sp88 = temp_v1;
        temp_v1_2 = temp_v1 | 8;
        sp88 = temp_v1_2;
        temp_v1_3 = temp_v1_2 | 0x10;
        sp88 = temp_v1_3;
        sp88 = temp_v1_3 | 0x20;
        if (*(s32 *)((u8 *)temp_s1 + 0x1CFC) == 0x2A) {
            sp88 |= 0x40;
        }
        func_001EA240(&sp50, temp_a1);
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x400);
    }
    if ((*(s32 *)((u8 *)temp_s1 + 0x1CFC) != 0x2A) && !(*(s16 *)((u8 *)arg0 + 4) & 0x2000) && (*(s32 *)((u8 *)temp_s0 + 0x14) == -1)) {
        temp_a0 = *(u8 **)((u8 *)arg0 + 0x44);
        if (temp_a0 != NULL) {
            Obj_ResetF38((s32)((void *)(temp_a0)));
            *(u8 **)((u8 *)arg0 + 0x44) = NULL;
            return 1;
        }
    }
    if (gBattle != NULL) {
        var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    *(f32 *)((u8 *)arg0 + 0x4C) = (f32) (*(f32 *)((u8 *)arg0 + 0x4C) + (*(f32 *)((u8 *)temp_s2 + 0xD0) * var_f2));
    if (gBattle != NULL) {
        var_f2_2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f2_2 = 1.0f;
    } else {
        var_f2_2 = 1.2f;
    }
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x50) + var_f2_2;
    *(f32 *)((u8 *)arg0 + 0x50) = temp_f1;
    if (!(temp_f1 <= 32.0f)) {
        temp_v1_4 = *(s16 *)((u8 *)arg0 + 4);
        if (temp_v1_4 & 0x800) {
            *(s16 *)((u8 *)arg0 + 4) = (s16) (temp_v1_4 & ~0x800);
        }
    }
    temp_a0_2 = *(u8 **)((u8 *)arg0 + 0x44);
    if (temp_a0_2 != NULL) {
        func_00208F70(temp_a0_2);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x44)) + 0x38) < 0) {
            *(u8 **)((u8 *)arg0 + 0x44) = NULL;
            return 1;
        }
    }
    return 0;
}
