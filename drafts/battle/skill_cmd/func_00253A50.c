/* Draft (not built): func_00253A50 at 0x00253A50, size 0x148, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 66 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE0, original 0x148
 * Original: asm/nonmatchings/battle/skill_cmd/func_00253A50.s */

// src/battle/skill_cmd.c func_00253A50 size diff=66/56
s32 memcpy(s32 *, void *, s32);
f32 func_00253A50(u8 *arg0, u8 *arg1) {
    f32 sp40;
    s32 sp44;
    s32 sp50;
    s32 sp54;
    s16 sp58;
    s16 sp5A;
    s32 sp60;
    s32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    s32 sp90;
    s8 temp_v0;
    u8 *temp_s0;

    temp_v0 = *(s8 *)((u8 *)arg1 + 0x38);
    if (temp_v0 < 0) {
        goto block_3;
    }
    if (temp_v0 < 0x1C) {
        goto block_4;
    }
block_3:
    return 0.0f;
block_4:
    temp_s0 = &D_00452740 + (temp_v0 * 0x10);
    memset(&sp40, 0, 0x60);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    memcpy(&sp80, temp_s0, 0x10);
    sp84 += 0.5f;
    sp88 -= 0.5f;
    sp8C -= 0.5f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp40 = 0.0f;
    sp44 = ((u32) (*(s32 *)((u8 *)arg1 + 0x30) & 0x30000) >> 0xF) | 1;
    sp50 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 4);
    sp54 = *(s32 *)((u8 *)arg0 + 4);
    sp58 = 0;
    sp5A = 0;
    return func_00253320(&sp40, arg1, fabsf(*(f32 *)((u8 *)temp_s0 + 8) - *(f32 *)((u8 *)temp_s0 + 0)), fabsf(*(f32 *)((u8 *)temp_s0 + 0xC) - *(f32 *)((u8 *)temp_s0 + 4)));
}
