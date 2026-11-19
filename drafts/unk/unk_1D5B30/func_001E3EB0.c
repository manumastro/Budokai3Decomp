/* Draft (not built): func_001E3EB0 at 0x001E3EB0, size 0x590, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 216 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x440, original 0x590
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E3EB0.s */

// src/unk/unk_1D5B30.c func_001E3EB0 size diff=216/272
extern void func_0013B620(void *);
s32 func_0012E100(s32 *, void *, s16, f32);
s32 func_0013B110(s32);
f32 func_00146E30(s32 *, s32 *);
extern void func_0013B0B0(void *);
void func_001E3EB0(u8 *arg0) {
    s32 sp30;
    f32 sp34;
    s32 sp40;
    f32 sp44;
    s32 sp50;
    s32 sp90;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f1;
    f32 var_f3;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s32 temp_a0;
    u8 *temp_a1;
    u8 *temp_v0;
    u8 *temp_v1;

    if (*(s8 *)((u8 *)arg0 + 0x1A5E) < 0) {
        goto block_8;
    }
    if (*(s8 *)((u8 *)arg0 + 0x1A64) == 0) {
        goto block_6;
    }
    temp_f1 = (f32) *(s32 *)((u8 *)((*(s16 *)((u8 *)arg0 + 0x1A66) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1A6C)) + 0x14)) + 8);
    if (*(f32 *)((u8 *)arg0 + 0x1A68) < temp_f1) {
        goto block_4;
    }
    *(f32 *)((u8 *)arg0 + 0x1A68) = (f32) (temp_f1 - 1.0f);
block_4:
    func_0012E100(&sp50, *(u8 **)((u8 *)arg0 + 0x1A6C), *(s16 *)((u8 *)arg0 + 0x1A66), *(f32 *)((u8 *)arg0 + 0x1A68));
    func_0013B0B0((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB88)) + 0x408) + (*(s16 *)(*(s32 *)((u8 *)arg0 + 0xB8C) + (*(s8 *)((u8 *)arg0 + 0x1A5E) * 2)) << 6)));
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_0013B110(1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    goto block_7;
block_6:
    *(s32 *)((u8 *)arg0 + 0x17A4) = (s32) (((s32)((*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x17A4) + *(s32 *)((u8 *)arg0 + 0x1A60)))) & 0xFFFF);
    func_0013B0B0((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB88)) + 0x408) + (*(s16 *)(*(s32 *)((u8 *)arg0 + 0xB8C) + (*(s8 *)((u8 *)arg0 + 0x1A5E) * 2)) << 6)));
    M2C_ERROR(/* unknown instruction: sqc2 $vf31, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf28, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf29, 0x10($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf30, 0x20($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf31, 0x30($v0) */);
    func_0013B620(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x17A4));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddz.xyz $vf1, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_0013B110(1);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
block_7:
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    *(s32 *)((u8 *)arg0 + 0x17BC) = 0;
    return;
block_8:
    if (*(s16 *)((u8 *)gBattle + 0x8944) != 0) {
        goto block_51;
    }
    temp_a0 = *(s32 *)((u8 *)gBattle + 0x88F8);
    if (temp_a0 == 4) {
        goto block_13;
    }
    if (temp_a0 == 3) {
        goto block_13;
    }
    if (temp_a0 != 5) {
        goto block_51;
    }
block_13:
    temp_a0_2 = *(s16 *)((u8 *)arg0 + 0xCAC);
    if (temp_a0_2 == 0x1B) {
        goto block_15;
    }
    if (temp_a0_2 != 0x1D) {
        goto block_16;
    }
block_15:
    return;
block_16:
    temp_f21 = *(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C);
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB74)) + 0x10) & 0x40) {
        goto block_51;
    }
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) == 0) {
        goto block_51;
    }
    temp_a1 = *(u8 **)((u8 *)arg0 + 0x1354);
    if (*(s8 *)((u8 *)temp_a1 + 0x1A5E) >= 0) {
        goto block_51;
    }
    if (*(s8 *)((u8 *)arg0 + 0x1FF8) == -1) {
        goto block_51;
    }
    if (*(s8 *)((u8 *)temp_a1 + 0x1FF8) == -1) {
        goto block_51;
    }
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        goto block_23;
    }
    temp_v0 = *(u8 **)((u8 *)arg0 + 0x1354);
    sp34 = *(f32 *)((u8 *)temp_v0 + 0x654) + **(f32 **)((u8 *)temp_v0 + 0xB94);
block_23:
    var_f3 = sp44 - *(f32 *)((u8 *)arg0 + 0x1844);
    if (*(s16 *)((u8 *)arg0 + 0x181C) == 0) {
        goto block_25;
    }
    sp44 = *(f32 *)((u8 *)arg0 + 0x1818);
block_25:
    temp_v1 = *(u8 **)((u8 *)arg0 + 0x1354);
    if (*(s16 *)((u8 *)temp_v1 + 0x181C) == 0) {
        goto block_27;
    }
    sp34 = *(f32 *)((u8 *)temp_v1 + 0x1818);
block_27:
    if (var_f3 <= 125.0f) {
        goto block_29;
    }
    temp_f1_2 = 0.1f * (var_f3 - 125.0f) * temp_f21;
    *(f32 *)((u8 *)arg0 + 0x44) = (f32) (*(f32 *)((u8 *)arg0 + 0x44) - temp_f1_2);
    var_f3 -= temp_f1_2;
    sp44 -= temp_f1_2;
block_29:
    if (var_f3 < 33.333336f) {
        goto block_32;
    }
    if (var_f3 <= 91.66667f) {
        goto block_34;
    }
block_32:
    temp_f1_3 = 0.03f * temp_f21;
    *(f32 *)((u8 *)arg0 + 0x44) = (f32) (*(f32 *)((u8 *)arg0 + 0x44) - temp_f1_3);
    sp44 -= temp_f1_3;
    goto block_36;
block_34:
    if (!(var_f3 < 50.0f)) {
        goto block_36;
    }
    temp_f1_4 = 0.03f * temp_f21;
    *(f32 *)((u8 *)arg0 + 0x44) = (f32) (*(f32 *)((u8 *)arg0 + 0x44) + temp_f1_4);
    sp44 += temp_f1_4;
block_36:
    temp_f20 = sp34 - sp44;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp34 = 0.0f;
    sp44 = 0.0f;
    var_f1 = (0.75f * func_00146E30(&sp40, &sp30)) - 8.0f;
    if (var_f1 >= 0.0f) {
        goto block_38;
    }
    var_f1 = 0.0f;
block_38:
    var_f0 = -temp_f20;
    if (!(temp_f20 < 0.0f)) {
        goto block_41;
    }
    goto block_42;
block_41:
    var_f0 = temp_f20;
block_42:
    if (var_f0 <= var_f1) {
        goto block_46;
    }
    if (temp_f20 <= 0.0f) {
        goto block_45;
    }
    var_f1 = -var_f1;
block_45:
    *(f32 *)((u8 *)arg0 + 0x44) = (f32) (*(f32 *)((u8 *)arg0 + 0x44) + (0.2f * (temp_f20 + var_f1) * temp_f21));
block_46:
    temp_a0_3 = *(s16 *)((u8 *)arg0 + 0xCAC);
    if (temp_a0_3 == 0x10) {
        goto block_51;
    }
    if (temp_a0_3 == 0x14) {
        goto block_51;
    }
    if (temp_a0_3 == 0x16) {
        goto block_51;
    }
    temp_f3 = *(f32 *)((u8 *)arg0 + 0x1844);
    temp_f0 = 0.9f * *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC);
    if (!((*(f32 *)((u8 *)arg0 + 0x44) - temp_f3) < temp_f0)) {
        goto block_51;
    }
    *(f32 *)((u8 *)arg0 + 0x44) = (f32) (temp_f3 + temp_f0);
block_51:
    return;
}
