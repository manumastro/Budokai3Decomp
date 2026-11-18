/* Draft (not built): func_001DB7C0 at 0x001DB7C0, size 0x364, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 103 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x380, original 0x364
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DB7C0.s */

// src/unk/unk_1D5B30.c func_001DB7C0 size diff=103/224
f32 func_00146E60(void *, s32 *);
s32 func_00146F10(s32 *, s32 *, s32);
s32 func_001DB7C0(u8 *arg0) {
    s32 sp80;
    s32 sp90;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f20;
    f32 var_f21;
    s32 var_s0;
    s32 var_s5;
    s32 var_v0;
    u8 temp_v0_2;
    u8 temp_v0_4;
    u8 *temp_s1;
    u8 *temp_v0;
    u8 *temp_v0_3;
    u8 *var_s2;
    u8 *var_s3;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x1354) + 0x920;
    if (*(s32 *)((u8 *)arg0 + 0xAC0) == 0) {
        goto block_3;
    }
    if (*(u8 **)((u8 *)temp_s1 + 0x1A0) != NULL) {
        goto block_4;
    }
block_3:
    return 0;
block_4:
    temp_f1 = 360.0f * ((f32) *(s32 *)((u8 *)arg0 + 0x17AC) / 65536.0f);
    if (temp_f1 <= 90.0f) {
        goto block_8;
    }
    if (!(temp_f1 < 270.0f)) {
        goto block_8;
    }
    var_v0 = 1;
    goto block_9;
block_8:
    var_v0 = 0;
block_9:
    if (var_v0 == 0) {
        goto block_11;
    }
    return 0;
block_11:
    var_s3 = *(u8 **)((u8 *)(arg0 + 0x920) + 0x1A0);
    goto loop_47;
block_12:
    temp_v0 = *(u8 **)((u8 *)var_s3 + 0x20);
    if (*(u16 *)((u8 *)temp_v0 + 8) & 4) {
        goto block_14;
    }
    var_s3 = *(u8 **)((u8 *)var_s3 + 0x2C);
    goto loop_47;
block_14:
    temp_v0_2 = *(u8 *)((u8 *)(temp_v0 + 4) + 8);
    if (temp_v0_2 == 0) {
        goto block_20;
    }
    if ((s32) temp_v0_2 < 0) {
        goto block_17;
    }
    var_f1 = (f32) temp_v0_2;
    goto block_18;
block_17:
    var_f1 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
block_18:
    var_f21 = 0.1f * var_f1;
    goto block_21;
block_20:
    var_f21 = 2.0f;
block_21:
    temp_f21 = var_f21 * **(f32 **)((u8 *)arg0 + 0xBB4);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    func_00146F10(&sp80, &sp80, 0x3F000000);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    var_s0 = 0;
    var_s5 = 0;
    goto loop_44;
block_22:
    var_s2 = *(u8 **)((u8 *)temp_s1 + 0x1A0);
    goto loop_41;
block_23:
    temp_v0_3 = *(u8 **)((u8 *)var_s2 + 0x20);
    if (!(*(u16 *)((u8 *)temp_v0_3 + 8) & 0x10A)) {
        goto block_25;
    }
    var_s2 = *(u8 **)((u8 *)var_s2 + 0x2C);
    goto loop_41;
block_25:
    temp_v0_4 = *(u8 *)((u8 *)(temp_v0_3 + 4) + 8);
    if (temp_v0_4 == 0) {
        goto block_31;
    }
    if ((s32) temp_v0_4 < 0) {
        goto block_28;
    }
    var_f1_2 = (f32) temp_v0_4;
    goto block_29;
block_28:
    var_f1_2 = 2.0f * (f32) ((temp_v0_4 >> 1) | (temp_v0_4 & 1));
block_29:
    var_f20 = 0.1f * var_f1_2;
    goto block_32;
block_31:
    var_f20 = 2.0f;
block_32:
    temp_f20 = var_f20 * **(f32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0xBB4);
    temp_f1_2 = temp_f21 + temp_f20;
    if (!(func_00146E60(var_s2, &sp90) <= (temp_f1_2 * temp_f1_2))) {
        goto block_38;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s2) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    if (((s64) ((s64) *(s8 *)((u8 *)temp_s1 + 0x1AA) << 0x38) >> 0x38) <= 0) {
        goto block_36;
    }
    if (*(s32 *)((u8 *)gBattle + 0x88F8) != 4) {
        goto block_36;
    }
    return 1;
block_36:
    var_s0 = 1;
    *(s8 *)((u8 *)arg0 + 0x2007) = 1;
    goto block_42;
block_38:
    if (*(s8 *)((u8 *)arg0 + 0x2004) == 0) {
        goto block_40;
    }
    var_s0 = 1;
    *(s8 *)((u8 *)arg0 + 0x2007) = 1;
    goto block_42;
block_40:
    var_s2 = *(u8 **)((u8 *)var_s2 + 0x2C);
loop_41:
    if (var_s2 != NULL) {
        goto block_23;
    }
block_42:
    if (var_s0 != 0) {
        goto block_46;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    var_s5 += 1;
loop_44:
    if (var_s5 < 2) {
        goto block_22;
    }
block_46:
    var_s3 = *(u8 **)((u8 *)var_s3 + 0x2C);
loop_47:
    if (var_s3 != NULL) {
        goto block_12;
    }
    return 0;
}
