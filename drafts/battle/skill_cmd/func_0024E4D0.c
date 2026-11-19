/* Draft (not built): func_0024E4D0 at 0x0024E4D0, size 0x288, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 93 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B4, original 0x288
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024E4D0.s */

// src/battle/skill_cmd.c func_0024E4D0 size diff=93/109
s32 func_001EA240(s32 *);
extern f32 D_0051D9AC;
extern void func_00251F30(void);
s32 func_0024E4D0(u8 *arg0) {
    s32 sp40;
    s32 sp50;
    f32 sp60;
    s32 *sp68;
    u8 *sp6C;
    s16 sp70;
    s16 sp72;
    s8 sp74;
    s8 sp75;
    s16 sp76;
    s32 sp78;
    f32 temp_f1;
    f32 var_f2;
    s16 temp_v1;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_v1 = *(s16 *)((u8 *)arg0 + 4);
    temp_s1 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s0 = *(u8 **)((u8 *)arg0 + 8);
    if (temp_v1 & 0x8000) {
        return 1;
    }
    if (!(temp_v1 & 0x4000) && ((*(f32 *)((u8 *)arg0 + 0) <= 12.0f) || (temp_v1 & 0x2000))) {
        temp_a0 = *(u8 **)((u8 *)arg0 + 0x54);
        if (temp_a0 != NULL) {
            func_00209390(temp_a0);
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
        sp76 = *(s16 *)((u8 *)arg0 + 6);
        sp60 = *(f32 *)((u8 *)temp_s1 + 0xCC);
        sp68 = (int *)(&func_00251F30);
        sp6C = arg0;
        sp72 = 0;
        sp70 = (s16) ((s64) ((s64) *(s32 *)((u8 *)temp_s1 + 0xD4) << 0x30) >> 0x30);
        sp74 = (s8) ((s64) ((s64) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x1354)) + 0x1350) << 0x38) >> 0x38);
        sp75 = (s8) ((s64) ((s64) *(s32 *)((u8 *)temp_s0 + 0x1350) << 0x38) >> 0x38);
        if (((s64) ((s64) *(s16 *)((u8 *)arg0 + 4) << 0x30) >> 0x30) & 0x400) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        sp78 = var_v0;
        sp78 = var_v0 | 4;
        func_001EA240(&sp40);
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x400);
    }
    temp_a0_2 = *(u8 **)((u8 *)arg0 + 0x54);
    if (temp_a0_2 != NULL) {
        func_00209B50((s32)(temp_a0_2), (s32)(arg0 + 0x20), 0);
        func_00208F70(*(u8 **)((u8 *)arg0 + 0x54));
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x54)) + 0x38) < 0) {
            *(u8 **)((u8 *)arg0 + 0x54) = NULL;
        }
    }
    return 0;
}
