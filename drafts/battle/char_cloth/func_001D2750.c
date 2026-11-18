/* Draft (not built): func_001D2750 at 0x001D2750, size 0x3E0, segment battle/char_cloth (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 160 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x364, original 0x3E0
 * Original: asm/nonmatchings/battle/char_cloth/func_001D2750.s */

// src/battle/char_cloth.c func_001D2750 size diff=160/217
s32 *amPkt_Alloc(s32, s16);
s32 func_0013B110(s32);
s32 func_0029D1E0(s32 *, s32, void *, s32 *);
extern s32 D_0044A1A0;
extern void func_0013B0B0(void *);
extern void func_0013B960(void *);
extern void func_0013B160(void *);
extern void func_0013B060(void *);
void func_001D2750(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 sp40;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    s32 *temp_s1;
    s32 *temp_s1_2;
    s32 *temp_v0;
    s32 *temp_v0_2;
    s32 *temp_v0_6;
    s16 temp_a0_2;
    s16 temp_a1_3;
    s16 temp_a3;
    s16 temp_v1_4;
    s32 *temp_v1;
    s32 *temp_v1_5;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a2;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_s1;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *temp_s2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v0_7;
    u8 *temp_v1_3;

    if (arg0 == NULL) {
        goto block_3;
    }
    if (arg1 == NULL) {
        goto block_3;
    }
    if (arg2 != 0) {
        goto block_4;
    }
block_3:
    return;
block_4:
    *(u8 **)((u8 *)arg0 + 0x6C) = arg1;
    *(s32 *)((u8 *)arg0 + 0x70) = arg2;
    temp_s1 = amPkt_Alloc(*(s32 *)((u8 *)arg0 + 0x48) * 2, 0);
    temp_v0 = amPkt_Alloc(*(s32 *)((u8 *)arg0 + 0x48) * 4, 0);
    var_a2 = 0;
    goto loop_7;
block_6:
    temp_a1 = var_a2 * 0x10;
    temp_v1 = temp_v0 + (var_a2 * 4);
    var_a2 += 1;
    *temp_v1 = (s32)(*(u8 **)((u8 *)arg0 + 0x68) + temp_a1 + 0x40);
loop_7:
    temp_a1_2 = *(s32 *)((u8 *)arg0 + 0x48);
    if (var_a2 < temp_a1_2) {
        goto block_6;
    }
    func_0029D1E0(temp_s1, temp_a1_2, *(u8 **)((u8 *)arg0 + 0x6C), temp_v0);
    var_a2_2 = 0;
    goto loop_10;
block_9:
    temp_a0 = (var_a2_2 * 8) + arg0;
    *(s32 *)((u8 *)temp_a0 + 8) = (s32) *(temp_s1 + (var_a2_2 * 2));
    temp_v1_2 = var_a2_2 << 7;
    var_a2_2 += 1;
    *(u8 **)((u8 *)temp_a0 + 0xC) = (u8 *) (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x54) + temp_v1_2);
    temp_v1_3 = *(u8 **)((u8 *)temp_a0 + 0xC);
    *(s32 *)((u8 *)temp_v1_3 + 0x70) = (s32) (*(s32 *)((u8 *)temp_v1_3 + 0x70) | 1);
loop_10:
    if (var_a2_2 < *(s32 *)((u8 *)arg0 + 0x48)) {
        goto block_9;
    }
    temp_v0_2 = amPkt_Alloc(6, 0);
    func_0029D1E0(temp_v0_2, 3, *(u8 **)((u8 *)arg0 + 0x6C), &D_0044A1A0);
    var_a0 = 0;
    goto loop_14;
block_13:
    temp_v1_4 = *(temp_v0_2 + (var_a0 * 2));
    temp_v0_3 = (var_a0 * 8) + arg0;
    var_a0 += 1;
    *(s32 *)((u8 *)temp_v0_3 + 0x4C) = (s32) temp_v1_4;
loop_14:
    if (var_a0 < 3) {
        goto block_13;
    }
    temp_v0_4 = *(u8 **)((u8 *)arg0 + 0);
    *(s32 *)((u8 *)arg0 + 0x58) = (s32) (*(s32 *)((u8 *)temp_v0_4 + 0x54) + ((*(s16 *)((u8 *)temp_v0_4 + 0x6C) * (*(s16 *)((u8 *)temp_v0_4 + 0x6E) - 1)) << 7));
    temp_v0_5 = *(u8 **)((u8 *)arg0 + 0);
    temp_a1_3 = *(s16 *)((u8 *)temp_v0_5 + 0x6C);
    *(s32 *)((u8 *)arg0 + 0x60) = (s32) (*(s32 *)((u8 *)temp_v0_5 + 0x54) + ((temp_a1_3 - 1 + (temp_a1_3 * (*(s16 *)((u8 *)temp_v0_5 + 0x6E) - 1))) << 7));
    temp_s1_2 = amPkt_Alloc(*(s32 *)((u8 *)arg0 + 0x64) * 2, temp_a1_3);
    temp_v0_6 = amPkt_Alloc(*(s32 *)((u8 *)arg0 + 0x64) * 4, 0);
    var_a2_3 = 0;
    goto loop_17;
block_16:
    temp_a1_4 = var_a2_3 << 5;
    temp_v1_5 = temp_v0_6 + (var_a2_3 * 4);
    var_a2_3 += 1;
    *temp_v1_5 = (s32)(*(u8 **)((u8 *)arg0 + 0x68) + temp_a1_4 + 0xC0);
loop_17:
    temp_a1_5 = *(s32 *)((u8 *)arg0 + 0x64);
    if (var_a2_3 < temp_a1_5) {
        goto block_16;
    }
    func_0029D1E0(temp_s1_2, temp_a1_5, *(u8 **)((u8 *)arg0 + 0x6C), temp_v0_6);
    var_a1 = 0;
    goto loop_20;
block_19:
    temp_a0_2 = *(temp_s1_2 + (var_a1 * 2));
    temp_v0_7 = (u8 *)((var_a1 << 6) + *(s32 *)((u8 *)arg0 + 4));
    var_a1 += 1;
    *(s32 *)((u8 *)temp_v0_7 + 0x38) = (s32) temp_a0_2;
loop_20:
    if (var_a1 < *(s32 *)((u8 *)arg0 + 0x64)) {
        goto block_19;
    }
    temp_s2 = *(u8 **)((u8 *)arg0 + 0x6C);
    func_0013B0B0(NULL);
    var_s1 = 0;
    goto loop_24;
block_23:
    func_0013B960((void *)(*(s32 *)((u8 *)temp_s2 + 0x408) + (*(s32 *)((u8 *)((var_s1 * 8) + arg0) + 8) << 6)));
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
    func_0013B060(NULL);
    var_s1 += 1;
loop_24:
    if (var_s1 < *(s32 *)((u8 *)arg0 + 0x48)) {
        goto block_23;
    }
    func_0013B110(1);
    func_0013B160(NULL);
    temp_a0_3 = *(u8 **)((u8 *)arg0 + 0x68);
    var_a1_2 = 0;
    temp_a3 = *(s16 *)((u8 *)temp_a0_3 + 6);
    temp_a2 = *(s32 *)((u8 *)temp_a0_3 + 8);
    goto loop_31;
block_26:
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
    var_a0_2 = 1;
    goto loop_29;
block_28:
    sp50 = 0.0f;
    sp54 = 0.0f;
    sp58 = *(f32 *)((u8 *)((var_a0_2 * 4) + *(u8 **)((u8 *)arg0 + 0x68)) + 0x20);
    sp5C = 1.0f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($t0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($t1) */);
    var_a0_2 += 1;
loop_29:
    if (var_a0_2 < temp_a2) {
        goto block_28;
    }
    var_a1_2 += 1;
loop_31:
    if (var_a1_2 < temp_a3) {
        goto block_26;
    }
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf28, $vf24 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf29, $vf25 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf30, $vf26 */);
    M2C_ERROR(/* unknown instruction: vmove.xyzw $vf31, $vf27 */);
    func_001D1B80(*(u8 **)((u8 *)arg0 + 0), var_a1_2, temp_a2, temp_a3);
    return;
}
