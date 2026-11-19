/* Draft (not built): func_0024AA00 at 0x0024AA00, size 0x2E0, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 82 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x28C, original 0x2E0
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024AA00.s */

// src/battle/skill_cmd.c func_0024AA00 size diff=82/163
void func_0024AA00(u8 *arg0) {
    s32 sp60;
    f32 sp64;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    s32 temp_s0;
    s32 temp_s3;
    s32 var_v0;
    u8 *temp_s1;
    u8 *temp_s4;

    temp_s4 = *(u8 **)((u8 *)arg0 + 8);
    temp_s1 = *(u8 **)((u8 *)arg0 + 0xC);
    temp_s0 = *(s32 *)((u8 *)temp_s4 + 0x1350);
    temp_s3 = func_0020B020(temp_s0, *(s16 *)((u8 *)temp_s1 + 0x20), *(s16 *)((u8 *)temp_s1 + 0x22));
    amModel_SetCurrent(temp_s3, func_0020AD30(temp_s0, *(s16 *)((u8 *)temp_s1 + 0x20), *(s16 *)((u8 *)temp_s1 + 0x22)));
    if (*(s32 *)((u8 *)temp_s4 + 0xB9C) == 0x10) {
        temp_f1 = *(f32 *)((u8 *)arg0 + 0x5C);
        if (temp_f1 < 0.5f) {
            var_v0 = func_0020AE80(temp_s0, *(s16 *)((u8 *)temp_s1 + 0x5A), *(s16 *)((u8 *)temp_s1 + 0x60));
        } else if (!(temp_f1 < 0.5f) && (temp_f1 < 0.75f)) {
            var_v0 = func_0020AE80(temp_s0, *(s16 *)((u8 *)temp_s1 + 0x32), *(s16 *)((u8 *)temp_s1 + 0x38));
        } else {
            temp_f1_2 = *(f32 *)((u8 *)arg0 + 0x5C);
            if (!(temp_f1_2 < 0.75f) && (temp_f1_2 < 0.9f)) {
                var_v0 = func_0020AE80(temp_s0, *(s16 *)((u8 *)temp_s1 + 0x66), *(s16 *)((u8 *)temp_s1 + 0x6C));
            } else {
                var_v0 = func_0020AE80(temp_s0, *(s16 *)((u8 *)temp_s1 + 0x90), *(s16 *)((u8 *)temp_s1 + 0x98));
            }
        }
    } else {
        temp_f1_3 = *(f32 *)((u8 *)arg0 + 0x5C);
        if (temp_f1_3 < 0.25f) {
            var_v0 = func_0020AE80(temp_s0, *(s16 *)((u8 *)temp_s1 + 0x5A), *(s16 *)((u8 *)temp_s1 + 0x60));
        } else if (!(temp_f1_3 < 0.25f) && (temp_f1_3 < 0.5f)) {
            var_v0 = func_0020AE80(temp_s0, *(s16 *)((u8 *)temp_s1 + 0x32), *(s16 *)((u8 *)temp_s1 + 0x38));
        } else {
            temp_f1_4 = *(f32 *)((u8 *)arg0 + 0x5C);
            if (!(temp_f1_4 < 0.5f) && (temp_f1_4 < 0.75f)) {
                var_v0 = func_0020AE80(temp_s0, *(s16 *)((u8 *)temp_s1 + 0x66), *(s16 *)((u8 *)temp_s1 + 0x6C));
            } else {
                var_v0 = func_0020AE80(temp_s0, *(s16 *)((u8 *)temp_s1 + 0x90), *(s16 *)((u8 *)temp_s1 + 0x98));
            }
        }
    }
    if (var_v0 != 0) {
        func_00208D60(var_v0);
    }
    func_0013B0B0(NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00209D70(&sp60);
    if (*(u8 **)((u8 *)arg0 + 0x54) != NULL) {
        func_0013B060(NULL);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        sp64 -= 4.5f;
        func_00142100((s32 *)(arg0 + 0x40), (s32)(&sp60));
        func_00208D70((s32)(*(u8 **)((u8 *)arg0 + 0x54)));
    }
    func_0013B110(1);
    func_00209C50();
}
