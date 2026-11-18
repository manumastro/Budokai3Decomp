/* Draft (not built): func_001DC150 at 0x001DC150, size 0x290, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 111 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x270, original 0x290
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DC150.s */

// src/unk/unk_1D5B30.c func_001DC150 size diff=111/156
f32 func_00146E60(void *, s32 *);
s32 func_00146F10(s32 *, s32 *, s32);
extern void func_001D0730();
s32 func_001DC150(u8 *arg0) {
    s32 sp80;
    s32 sp90;
    f32 temp_f1;
    f32 temp_f20;
    f32 var_f1;
    f32 var_f20;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    u8 temp_v0_2;
    u8 *temp_a2;
    u8 *temp_s3;
    u8 *temp_v0;
    u8 *var_s5;

    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1354) + 0x920;
    temp_v1 = *(s32 *)((u8 *)gBattle + 0x88F8);
    if (temp_v1 == 4) {
        goto block_4;
    }
    if (temp_v1 == 5) {
        goto block_4;
    }
    return 0;
block_4:
    *(s16 *)((u8 *)arg0 + 0x17F8) = 0;
    var_s5 = *(u8 **)((u8 *)temp_s3 + 0x1A0);
    goto loop_25;
block_6:
    temp_v0 = *(u8 **)((u8 *)var_s5 + 0x20);
    if (*(u16 *)((u8 *)temp_v0 + 8) & 2) {
        goto block_8;
    }
    goto block_24;
block_8:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s5) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00146F10(&sp80, &sp80, 0x3F000000);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    temp_v0_2 = *(u8 *)((u8 *)(temp_v0 + 4) + 8);
    if (temp_v0_2 == 0) {
        goto block_14;
    }
    if ((s32) temp_v0_2 < 0) {
        goto block_11;
    }
    var_f1 = (f32) temp_v0_2;
    goto block_12;
block_11:
    var_f1 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
block_12:
    var_f20 = 0.1f * var_f1;
    goto block_15;
block_14:
    var_f20 = 2.0f;
block_15:
    var_s2 = 0;
    temp_f20 = var_f20 * **(f32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0xBB4);
    goto loop_23;
block_16:
    var_s1 = 0;
    goto loop_21;
block_17:
    if (*(f32 *)((u8 *)((var_s1 * 4) + *(s32 *)((u8 *)arg0 + 0xBB4)) + 0x18) <= 0.0f) {
        goto block_20;
    }
    temp_f1 = temp_f20 + *(f32 *)((u8 *)((var_s1 * 4) + *(s32 *)((u8 *)arg0 + 0xBB4)) + 0x18);
    if (!(func_00146E60(arg0 + (var_s1 * 0x10) + 0x650, &sp90) <= (temp_f1 * temp_f1))) {
        goto block_20;
    }
    temp_a2 = *(u8 **)((u8 *)arg0 + 0x1354);
    *(s32 *)((u8 *)arg0 + 0x17F4) = (s32) (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_a2 + 0xAC4)) + 0x1C) + (*(s32 *)((u8 *)temp_v0 + 4) << 7));
    *(u8 **)((u8 *)arg0 + 0x17F0) = (u8 *) *(u8 **)((u8 *)arg0 + 0x1354);
    *(s16 *)((u8 *)arg0 + 0x17F8) = 2;
    func_001D0730(temp_s3, *(s8 *)((u8 *)(*(u8 **)((u8 *)var_s5 + 0x20)) + 2), temp_a2);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    return 1;
block_20:
    var_s1 += 1;
loop_21:
    if (var_s1 < 0x16) {
        goto block_17;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    var_s2 += 1;
loop_23:
    if (var_s2 < 2) {
        goto block_16;
    }
block_24:
    var_s5 = *(u8 **)((u8 *)var_s5 + 0x2C);
loop_25:
    if (var_s5 != NULL) {
        goto block_6;
    }
    return 0;
}
