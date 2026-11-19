/* Draft (not built): func_0024C610 at 0x0024C610, size 0x2F0, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 135 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1E4, original 0x2F0
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024C610.s */

// src/battle/skill_cmd.c func_0024C610 size diff=135/121
s32 func_001EA240(s32 *, s16, s32 *);
extern void func_00251F30(void);
s32 func_0024C610(u8 *arg0) {
    s32 sp20;
    s32 sp30;
    f32 sp40;
    s32 *sp48;
    u8 *sp4C;
    s16 sp50;
    s16 sp52;
    s8 sp54;
    s8 sp55;
    s16 sp56;
    s32 sp58;
    f32 temp_f1;
    f32 var_f1;
    f32 var_f2;
    s16 temp_a1;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a2;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)arg0 + 8);
    if (*(s16 *)((u8 *)arg0 + 4) & 0x8000) {
        return 1;
    }
    if (gBattle != NULL) {
        var_a2 = 0;
        if ((*(s8 *)((u8 *)gBattle + 0x8AB2) != 0) && !(*(f32 *)((u8 *)gBattle + 0x891C) <= 0.0f)) {
            var_a2 = 1;
        }
        var_a0 = 1;
        if (var_a2 != 0) {

        } else {
            var_a0 = 0;
        }
    } else {
        var_a0 = 0;
    }
    if (var_a0 != 0) {
        return 0;
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
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        temp_a1 = *(s16 *)((u8 *)arg0 + 6);
        sp56 = temp_a1;
        sp40 = *(f32 *)((u8 *)arg0 + 0x4C);
        sp48 = (int *)(&func_00251F30);
        sp4C = arg0;
        sp52 = 0;
        sp50 = (s16) ((s64) ((s64) *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 0xD4) << 0x30) >> 0x30);
        sp54 = (s8) ((s64) ((s64) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x1354)) + 0x1350) << 0x38) >> 0x38);
        sp55 = (s8) ((s64) ((s64) *(s32 *)((u8 *)temp_v0 + 0x1350) << 0x38) >> 0x38);
        if (((s64) ((s64) *(s16 *)((u8 *)arg0 + 4) << 0x30) >> 0x30) & 0x400) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
        sp58 = var_v0;
        temp_v0_2 = var_v0 | 4;
        sp58 = temp_v0_2;
        sp58 = temp_v0_2 | 0x40;
        func_001EA240(&sp20, temp_a1, &sp30);
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) & ~0x400);
    }
    if (!(*(f32 *)((u8 *)arg0 + 0x50) <= 40.0f) && (*(s16 *)((u8 *)arg0 + 4) & 0x1000)) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    }
    if (gBattle != NULL) {
        var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    *(f32 *)((u8 *)arg0 + 0x50) = (f32) (*(f32 *)((u8 *)arg0 + 0x50) + var_f1);
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x44);
    if (temp_a0 != NULL) {
        func_00208F70(temp_a0);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x44)) + 0x38) < 0) {
            *(u8 **)((u8 *)arg0 + 0x44) = NULL;
            return 1;
        }
    }
    return 0;
}
