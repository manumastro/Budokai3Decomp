/* Draft (not built): func_00193060 at 0x00193060, size 0x2FC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 132 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00193060.s */

void *func_00194838();                              /* extern */
s32 func_00194940(void *, void *, s64, s64);    /* extern */

s32 func_00193060(u8 *arg0, s32 arg1, u8 *arg2, u8 **arg3) {
    s16 temp_a2_3;
    s16 temp_a3_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t1;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v1;
    s32 var_v1;
    s64 var_a2;
    s64 var_a3;
    u8 *temp_s0;
    u8 *temp_s5;
    u8 *temp_t2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_a0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x1C70);
    temp_v0 = *(u8 **)((u8 *)temp_s0 + 0x160);
    temp_s5 = arg0 + 0x94C;
    if (temp_v0 == NULL) {
        goto block_2;
    }
    *arg3 = temp_v0;
    goto block_4;
block_2:
    temp_v0_2 = func_00194838();
    *arg3 = temp_v0_2;
    if (temp_v0_2 != NULL) {
        goto block_4;
    }
    *(s32 *)((u8 *)temp_s5 + 0x28) = 1;
    return -1;
block_4:
    temp_t2 = *arg3;
    var_v1 = arg1;
    var_a0 = temp_t2 + 0x58;
    if (!((arg1 | (s32) var_a0) & 7)) {
        goto block_9;
    }
loop_6:
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x7($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, ($v1) */);
    M2C_ERROR(/* unknown instruction: ldl $a3, 0xf($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0x8($v1) */);
    M2C_ERROR(/* unknown instruction: ldl $t0, 0x17($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $t0, 0x10($v1) */);
    M2C_ERROR(/* unknown instruction: ldl $t1, 0x1f($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $t1, 0x18($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x7($a0) */);
    var_a2 = M2C_ERROR(/* unknown instruction: sdr $a2, ($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($a0) */);
    var_a3 = M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $t0, 0x17($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $t0, 0x10($a0) */);
    M2C_ERROR(/* unknown instruction: sdl $t1, 0x1f($a0) */);
    M2C_ERROR(/* unknown instruction: sdr $t1, 0x18($a0) */);
    var_v1 += 0x20;
    if (var_v1 != (arg1 + 0x80)) {
        goto loop_6;
    }
    goto block_11;
block_9:
loop_10:
    var_a2 = *(s64 *)((u8 *)var_v1 + 0);
    var_a3 = *(s64 *)((u8 *)var_v1 + 8);
    *(s64 *)((u8 *)var_a0 + 0) = var_a2;
    *(s64 *)((u8 *)var_a0 + 8) = var_a3;
    *(s64 *)((u8 *)var_a0 + 0x10) = (s64) *(s64 *)((u8 *)var_v1 + 0x10);
    *(s64 *)((u8 *)var_a0 + 0x18) = (s64) *(s64 *)((u8 *)var_v1 + 0x18);
    var_v1 += 0x20;
    var_a0 += 0x20;
    if (var_v1 != (arg1 + 0x80)) {
        goto loop_10;
    }
block_11:
    temp_v0_3 = *(s32 *)((u8 *)arg1 + 0x18);
    if (*(s32 *)((u8 *)arg0 + 0x38) != 3) {
        goto block_17;
    }
    if ((u32) (temp_v0_3 - 1) >= 2U) {
        goto block_15;
    }
    if (*(u8 **)((u8 *)temp_s0 + 0x160) != NULL) {
        goto block_15;
    }
    func_00194940(*(u8 **)((u8 *)temp_s0 + 0x158), temp_t2, var_a2, var_a3);
    *(u8 **)((u8 *)temp_s0 + 0x158) = (u8 *) *(u8 **)((u8 *)temp_s0 + 0x15C);
    *(u8 **)((u8 *)temp_s0 + 0x15C) = (u8 *) *arg3;
block_15:
    temp_v1 = *(s32 *)((u8 *)arg1 + 0);
    temp_t0 = *(s32 *)((u8 *)arg1 + 4);
    temp_v0_4 = temp_v1 + 0xF;
    temp_a1 = temp_t0 + 0xF;
    temp_v0_5 = (s32) ((temp_v0_4 < 0) ? (temp_v1 + 0x1E) : temp_v0_4) >> 4;
    temp_a0 = temp_v0_5 * 0x10;
    temp_v0_6 = temp_v0_5 * 8;
    temp_a3 = temp_a0 + 0x3F;
    temp_a2 = temp_v0_6 + 0x3F;
    temp_a3_2 = (s32) ((temp_a3 < 0) ? (temp_a0 + 0x7E) : temp_a3) >> 6;
    temp_a1_2 = (s32) ((temp_a1 < 0) ? (temp_t0 + 0x1E) : temp_a1) >> 4;
    temp_a3_3 = temp_a3_2 << 6;
    temp_a2_2 = (s32) ((temp_a2 < 0) ? (temp_v0_6 + 0x7E) : temp_a2) >> 6;
    temp_a2_3 = temp_a2_2 << 6;
    temp_t0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x158)) + 8);
    temp_t1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x15C)) + 8);
    temp_v0_7 = (temp_a3_2 * temp_a1_2) << 0xA;
    *(s16 *)((u8 *)arg2 + 0x1E) = temp_a3_3;
    temp_a0_2 = temp_t1 + temp_v0_7;
    temp_v0_8 = temp_t0_2 + temp_v0_7;
    temp_a1_3 = (temp_a2_2 * temp_a1_2) << 9;
    *(s16 *)((u8 *)arg2 + 0x1C) = temp_a2_3;
    *(s32 *)((u8 *)arg2 + 4) = (s32) (temp_v0_8 + temp_a1_3);
    *(s32 *)((u8 *)arg2 + 0x14) = (s32) (temp_a0_2 + temp_a1_3);
    *(s16 *)((u8 *)arg2 + 0xE) = temp_a3_3;
    *(s16 *)((u8 *)arg2 + 0xC) = temp_a2_3;
    *(s32 *)((u8 *)arg2 + 8) = temp_t0_2;
    *(s32 *)((u8 *)arg2 + 0) = temp_v0_8;
    *(s32 *)((u8 *)arg2 + 0x18) = temp_t1;
    *(s32 *)((u8 *)arg2 + 0x10) = temp_a0_2;
    goto block_20;
block_17:
    if ((u32) (temp_v0_3 - 1) >= 2U) {
        goto block_19;
    }
    *(u8 **)((u8 *)temp_s0 + 0x15C) = temp_t2;
    *(s32 *)((u8 *)temp_s0 + 0x130) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x130) ^ 1);
    *(s32 *)((u8 *)temp_s0 + 0x134) = (s32) (*(s32 *)((u8 *)temp_s0 + 0x134) ^ 1);
block_19:
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x7($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, ($v0) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($v0) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($v0) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x7($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, ($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($s1) */);
    M2C_ERROR(/* unknown instruction: ldl $t1, 0x7($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $t1, ($v1) */);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0xf($v1) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0x8($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $t1, 0x17($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $t1, 0x10($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x1f($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x18($s1) */);
block_20:
    *(s32 *)((u8 *)arg2 + 0x2C) = 0;
    *(s32 *)((u8 *)arg2 + 0x28) = 0;
    *(s32 *)((u8 *)arg2 + 0x20) = (s32) *(s32 *)((u8 *)(*arg3) + 8);
    *(u8 **)((u8 *)arg2 + 0x24) = (u8 *) (*arg3 + 0x58);
    *(s32 *)((u8 *)temp_s5 + 0x28) = 0;
    return 0;
}
