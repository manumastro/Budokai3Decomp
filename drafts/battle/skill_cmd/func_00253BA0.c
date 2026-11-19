/* Draft (not built): func_00253BA0 at 0x00253BA0, size 0x2C0, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 115 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x320, original 0x2C0
 * Original: asm/nonmatchings/battle/skill_cmd/func_00253BA0.s */

// src/battle/skill_cmd.c func_00253BA0 size diff=115/200
f32 func_00253BA0(u8 *arg0, u8 *arg1, s16 arg2, s32 arg3) {
    f32 temp_f20;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f3;
    f32 var_f4;
    f32 var_f5;
    s16 var_a2;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s8 temp_v1_2;
    u8 *temp_a1;
    u8 *temp_t0;
    u8 *temp_v0;
    u8 *temp_v1_3;

    var_a2 = arg2;
    var_a3 = arg3;
    temp_a1 = *(u8 **)((u8 *)arg0 + 8);
    temp_v0 = *(u8 **)((u8 *)temp_a1 + 8);
    var_s1 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x10) == 0) {
        goto block_8;
    }
    temp_t0 = *(u8 **)((u8 *)temp_a1 + 0);
    var_a3 = 0;
    goto loop_6;
block_2:
    var_a2 = *(s16 *)((u8 *)arg1 + 0x34);
    if (var_a2 != *(s16 *)(*(s32 *)((u8 *)temp_t0 + 8) + (var_a3 * 2))) {
        goto block_5;
    }
    var_s1 = *(s32 *)((u8 *)arg0 + 0x10);
    goto block_8;
block_5:
    var_a3 += 1;
loop_6:
    if (var_a3 < *(s8 *)((u8 *)temp_t0 + 0xD)) {
        goto block_2;
    }
block_8:
    if (var_s1 != 0) {
        goto block_18;
    }
    var_a3 = 0;
    goto loop_16;
block_11:
    var_a2 = *(s32 *)((u8 *)temp_v0 + 8) + (var_a3 * 0x10);
    if (*(s32 *)((u8 *)var_a2 + 0) != *(s16 *)((u8 *)arg1 + 0x34)) {
        goto block_15;
    }
    if (*(s8 *)((u8 *)var_a2 + 4) != *(s16 *)((u8 *)arg1 + 0x36)) {
        goto block_15;
    }
    var_s1 = (s32) var_a2;
    goto block_18;
block_15:
    var_a3 += 1;
loop_16:
    if (var_a3 < *(s32 *)((u8 *)temp_v0 + 4)) {
        goto block_11;
    }
block_18:
    if (var_s1 != 0) {
        goto block_23;
    }
    if (*(s8 *)((u8 *)arg1 + 0x38) != 0x1B) {
        goto block_21;
    }
    return func_00253A50(arg0, arg1, (u8 *) var_a2, var_a3);
block_21:
    return 0.0f;
block_23:
    temp_v1 = *(s32 *)((u8 *)arg1 + 0x30);
    temp_f20 = *(f32 *)((u8 *)arg1 + 0);
    if (!(temp_v1 & 3)) {
        goto block_45;
    }
    if (!(temp_v1 & 0x10)) {
        goto block_27;
    }
    var_f5 = *(f32 *)((u8 *)arg1 + 0x20);
    goto block_28;
block_27:
    var_f5 = 0.0f;
block_28:
    if (!(*(s32 *)((u8 *)arg1 + 0x30) & 0x20)) {
        goto block_30;
    }
    var_f4 = *(f32 *)((u8 *)arg1 + 0x28);
    goto block_31;
block_30:
    var_f4 = 1.0f;
block_31:
    var_f3 = 0.0f;
    var_a1 = 0;
    goto loop_40;
block_33:
    temp_v1_2 = *(s8 *)((u8 *)(var_a1 + var_s1) + 5);
    var_f1 = 0.0f;
    if (temp_v1_2 < 0) {
        goto block_36;
    }
    if (temp_v1_2 >= 0x1B) {
        goto block_36;
    }
    temp_v1_3 = ((u8 *)&D_00452740) + (temp_v1_2 * 0x10);
    var_f1 = fabsf(*(f32 *)((u8 *)temp_v1_3 + 8) - *(f32 *)((u8 *)temp_v1_3 + 0));
block_36:
    var_f1_2 = var_f4 * var_f1;
    if (var_a1 == 0) {
        goto block_39;
    }
    if (var_f1_2 == 0.0f) {
        goto block_39;
    }
    var_f1_2 += var_f5;
block_39:
    var_a1 += 1;
    var_f3 += var_f1_2;
loop_40:
    if (var_a1 >= 7) {
        goto block_42;
    }
    if (*(s8 *)((u8 *)(var_a1 + var_s1) + 5) != 0x1B) {
        goto block_33;
    }
block_42:
    if (!(*(s32 *)((u8 *)arg1 + 0x30) & 2)) {
        goto block_44;
    }
    var_f3 *= 0.5f;
block_44:
    *(f32 *)((u8 *)arg1 + 0) = (f32) (*(f32 *)((u8 *)arg1 + 0) - var_f3);
    *(s32 *)((u8 *)arg1 + 0x30) = (s32) (*(s32 *)((u8 *)arg1 + 0x30) & ~3);
block_45:
    var_s0 = 0;
    goto loop_47;
block_46:
    *(s8 *)((u8 *)arg1 + 0x38) = (s8) *(s8 *)((u8 *)(var_s0 + var_s1) + 5);
    var_s0 += 1;
    *(f32 *)((u8 *)arg1 + 0) = (f32) (*(f32 *)((u8 *)arg1 + 0) + func_00253A50(arg0, arg1));
loop_47:
    if (var_s0 >= 7) {
        goto block_50;
    }
    if (*(s8 *)((u8 *)(var_s0 + var_s1) + 5) != 0x1B) {
        goto block_46;
    }
block_50:
    return temp_f20 - *(f32 *)((u8 *)arg1 + 0);
}
