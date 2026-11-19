/* Draft (not built): func_0013C1E0 at 0x0013C1E0, size 0x318, segment sys/amMotion (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 132 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C4, original 0x318
 * Original: asm/nonmatchings/sys/amMotion/func_0013C1E0.s */

// src/sys/amMotion.c func_0013C1E0 size diff=132/113
s32 func_00141CF0(s32, s32, s32);
s32 func_00142370(s32, s32);
s32 func_001423F0(s32 *, s32, s32 *, f32);
void func_0013C1E0(void *arg0, f32 fparg0, f32 fparg1) {
    s32 sp60;
    s32 sp70;
    f32 sp7C;
    s32 sp80;
    f32 sp8C;
    s32 *var_s0_2;
    f32 var_f21;
    s32 temp_a0;
    s32 temp_s1;
    s32 var_s0;
    s32 var_s2;

    var_f21 = fparg0;
    if (fparg1 != 0.0f) {
        goto block_6;
    }
    var_s0 = 0;
    goto loop_4;
block_3:
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x45C) + (var_s0 << 7);
    func_00141CF0(temp_a0, temp_a0 + 0x40, temp_a0 + 0x50);
    var_s0 += 1;
loop_4:
    if (var_s0 < *(s32 *)((u8 *)arg0 + 0x418)) {
        goto block_3;
    }
    return;
block_6:
    if (*(s32 *)((u8 *)arg0 + 0x44C) != 0) {
        goto block_8;
    }
    var_f21 = 0.0f;
block_8:
    var_s2 = 0;
    goto loop_22;
block_10:
    temp_s1 = *(s32 *)((u8 *)arg0 + 0x45C) + (var_s2 << 7);
    if (var_f21 != 0.0f) {
        goto block_13;
    }
    var_s0_2 = (int *)(*(s32 *)((u8 *)arg0 + 0x42C) + (var_s2 << 6));
    goto block_17;
block_13:
    if (var_f21 != 1.0f) {
        goto block_16;
    }
    var_s0_2 = (int *)(*(s32 *)((u8 *)arg0 + 0x44C) + (var_s2 << 6));
    goto block_17;
block_16:
    func_001423F0((s32 *)(&sp60), (s32)(*(s32 *)((u8 *)arg0 + 0x42C) + (var_s2 << 6)), (s32 *)(*(s32 *)((u8 *)arg0 + 0x44C) + (var_s2 << 6)), var_f21);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    sp7C = 1.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    sp8C = 1.0f;
    var_s0_2 = &sp60;
block_17:
    if (fparg1 != 1.0f) {
        goto block_20;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    goto block_21;
block_20:
    func_001423F0((s32 *)(temp_s1 + 0x40), (s32)(temp_s1 + 0x40), (s32 *)(var_s0_2), fparg1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
block_21:
    func_00142370(temp_s1 + 0x40, temp_s1 + 0x40);
    func_00141CF0(temp_s1, temp_s1 + 0x40, temp_s1 + 0x50);
    var_s2 += 1;
loop_22:
    if (var_s2 < *(s32 *)((u8 *)arg0 + 0x418)) {
        goto block_10;
    }
    return;
}
