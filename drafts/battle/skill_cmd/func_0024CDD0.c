/* Draft (not built): func_0024CDD0 at 0x0024CDD0, size 0x21C, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 63 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1D8, original 0x21C
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024CDD0.s */

// src/battle/skill_cmd.c func_0024CDD0 size diff=63/118
f32 func_00146E60(void *, void *);
s32 func_0024CDD0(u8 *arg0) {
    f32 temp_f1;
    f32 var_f2;
    s16 temp_v1;
    s16 temp_v1_2;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 8);
    if (*(s16 *)((u8 *)arg0 + 4) & 0x8000) {
        return 1;
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
    if ((temp_f1 < 0.0f) && (*(s16 *)((u8 *)arg0 + 4) & 0x1000)) {
        func_0024CB00((struct SkillObj *)(arg0));
    }
    if ((*(s16 *)((u8 *)arg0 + 4) & 8) && (func_00146E60((void *)(arg0 + 0x20), (void *)(*(s32 *)((u8 *)temp_s0 + 0x1354) + 0x660)) < 16.0f)) {
        *(f32 *)((u8 *)arg0 + 0) = 0.0f;
        *(s16 *)((u8 *)arg0 + 4) = (s16) (*(s16 *)((u8 *)arg0 + 4) | ~0x7FFF);
    }
    temp_v1 = *(s16 *)((u8 *)arg0 + 4);
    if (temp_v1 & 0x1000) {
        if (!(func_00146E60(arg0 + 0x20, arg0 + 0x40) <= 16.0f)) {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
            M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        } else {
            *(f32 *)((u8 *)arg0 + 0) = 0.0f;
        }
    } else if (temp_v1 & 8) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    }
    if (*(s16 *)((u8 *)D_0046FE4C + 0x918) != 0) {
        temp_v1_2 = *(s16 *)((u8 *)arg0 + 4);
        if (!(temp_v1_2 & 8)) {
            *(s16 *)((u8 *)arg0 + 4) = (s16) (temp_v1_2 | 8);
        }
    }
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x54);
    if (temp_a0 != NULL) {
        func_00208F70(temp_a0);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x54)) + 0x38) < 0) {
            *(u8 **)((u8 *)arg0 + 0x54) = NULL;
        }
    }
    temp_a0_2 = *(u8 **)((u8 *)arg0 + 0x58);
    if (temp_a0_2 != NULL) {
        func_00208F70(temp_a0_2);
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x58)) + 0x38) < 0) {
            *(u8 **)((u8 *)arg0 + 0x58) = NULL;
        }
    }
    return 0;
}
