/* Draft (not built): func_002FF610 at 0x002FF610, size 0x710, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 305 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x660, original 0x710
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FF610.s */

// src/unk/unk_2FAFF0.c func_002FF610 size diff=305/408
void *A2d_AllocObj(s32, f32);
s32 amGs_SetReg32(s32, s32);
s32 func_00136E80(s32, void *, s16, s32);
s32 func_00139620(s32, s128 *, s32, s32, s32);
s32 func_00228430(s32, s32, s32, s8);
s32 func_002284D0(s32);
s32 func_0022D4B0(void *, s32);
extern s128 D_00458BB0;
extern s32 D_00458BC0;
extern s8 D_005D0082;
extern void func_00228410(void);
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
extern void func_0022C6B0(void *);
void func_002FF610(void) {
    f32 sp90;
    f32 sp94;
    f32 spA0;
    f32 spA4;
    f32 spB0;
    f32 spB4;
    f32 spC0;
    f32 spC4;
    s128 spD0;
    f32 spE0;
    f32 spE4;
    s32 spE8;
    f32 *var_v1;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f3;
    f32 var_f20;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s6;
    s32 var_s3;
    s32 var_v0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_s3 = *(u8 **)((u8 *)gTourMap + 0x30);
    temp_a2 = (1 << D_005D0082) - 1;
    temp_a1 = D_005D0082 * 5;
    temp_f21 = (f32) ((temp_a2 * 0x64) + 0x190 + temp_a1);
    temp_f20 = 50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88);
    func_00228430(0, temp_a1, temp_a2 * 0x19, D_005D0082);
    func_002284D0(0);
    temp_v0 = *(u8 **)((u8 *)gTourMap + 0x44);
    spE0 = *(f32 *)((u8 *)temp_v0 + 0x30);
    spE4 = *(f32 *)((u8 *)temp_v0 + 0x34);
    spE8 = 0;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_s4 = (unsigned char *)(gTourMap + 0xAC);
    temp_s2 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xCC), (f32) *(s32 *)((u8 *)temp_s4 + 8) * gFrameDelta);
    temp_s0 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xCC), (f32) *(s32 *)((u8 *)temp_s4 + 8) * gFrameDelta);
    temp_s1 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0xD0), (f32) *(s32 *)((u8 *)temp_s4 + 8) * gFrameDelta);
    temp_f20_2 = temp_f20 / fabsf(*(f32 *)((u8 *)temp_s2 + 0x34) - *(f32 *)((u8 *)temp_s2 + 0x3C));
    temp_f3 = 1.0f - (*(f32 *)((u8 *)(*(u8 **)((u8 *)gTourMap + 0x44) + 0x30) + 8) / 100.0f);
    if (!(temp_f20_2 <= 1.0f)) {
        goto block_3;
    }
    var_f20 = 1.0f;
    goto block_6;
block_3:
    if (temp_f3 <= 0.0f) {
        goto block_5;
    }
    var_f20 = 1.0f + ((temp_f20_2 - 1.0f) * temp_f3);
    goto block_6;
block_5:
    var_f20 = 1.0f;
block_6:
    if (var_f20 == 1.0f) {
        goto block_8;
    }
    temp_f2 = *(f32 *)((u8 *)temp_s2 + 0x20);
    *(f32 *)((u8 *)temp_s2 + 0x20) = (f32) (temp_f2 + (temp_f3 * ((temp_f21 / -2.0f) - temp_f2)));
    temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x20);
    *(f32 *)((u8 *)temp_s1 + 0x20) = (f32) (temp_f1 + (temp_f3 * ((temp_f21 / 2.0f) - temp_f1)));
block_8:
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(f32 *)((u8 *)temp_s1 + 0x34) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x34) * var_f20);
    *(f32 *)((u8 *)temp_s1 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x3C) * var_f20);
    *(f32 *)((u8 *)temp_s1 + 0x30) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x30) * var_f20);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(f32 *)((u8 *)temp_s2 + 0x34) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x34) * var_f20);
    *(f32 *)((u8 *)temp_s2 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x3C) * var_f20);
    *(f32 *)((u8 *)temp_s2 + 0x38) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x38) * var_f20);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(f32 *)((u8 *)temp_s0 + 0x34) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x34) * var_f20);
    *(f32 *)((u8 *)temp_s0 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x3C) * var_f20);
    *(f32 *)((u8 *)temp_s0 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s2 + 0x20) + *(f32 *)((u8 *)temp_s2 + 0x38));
    *(f32 *)((u8 *)temp_s0 + 0x30) = 0.0f;
    *(f32 *)((u8 *)temp_s0 + 0x38) = (f32) ((*(f32 *)((u8 *)temp_s1 + 0x20) + *(f32 *)((u8 *)temp_s1 + 0x30)) - *(f32 *)((u8 *)temp_s0 + 0x20));
    *(f32 *)((u8 *)temp_s0 + 0x40) = 115.0f;
    *(f32 *)((u8 *)temp_s0 + 0x48) = 115.0f;
    if ((*(f32 *)((u8 *)temp_s2 + 0x20) + *(f32 *)((u8 *)temp_s2 + 0x38)) <= 0.0f) {
        goto block_10;
    }
    func_0022C6B0(temp_s2);
block_10:
    if (!((*(f32 *)((u8 *)temp_s1 + 0x20) + *(f32 *)((u8 *)temp_s1 + 0x30)) < 1000.0f)) {
        goto block_12;
    }
    func_0022C6B0(temp_s1);
block_12:
    temp_f2_2 = *(f32 *)((u8 *)temp_s0 + 0x20);
    if (!((temp_f2_2 + *(f32 *)((u8 *)temp_s0 + 0x30)) < 0.0f)) {
        goto block_14;
    }
    *(f32 *)((u8 *)temp_s0 + 0x30) = (f32) -temp_f2_2;
block_14:
    temp_f2_3 = *(f32 *)((u8 *)temp_s0 + 0x20);
    if ((temp_f2_3 + *(f32 *)((u8 *)temp_s0 + 0x38)) <= 1000.0f) {
        goto block_16;
    }
    *(f32 *)((u8 *)temp_s0 + 0x38) = (f32) (1000.0f - temp_f2_3);
block_16:
    func_0022C6B0(temp_s0);
    spD0 = D_00458BB0;
    func_00139620(0x900, &spD0, -1, 0x48, 0);
    if ((*(f32 *)((u8 *)temp_s2 + 0x20) + *(f32 *)((u8 *)temp_s2 + 0x38)) <= 0.0f) {
        goto block_18;
    }
    *(s16 *)((u8 *)temp_s2 + 0x18) = 0x45;
    *(s32 *)((u8 *)temp_s2 + 8) = 2;
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
    func_0022C6B0(temp_s2);
block_18:
    if (!((*(f32 *)((u8 *)temp_s1 + 0x20) + *(f32 *)((u8 *)temp_s1 + 0x30)) < 1000.0f)) {
        goto block_20;
    }
    *(s16 *)((u8 *)temp_s1 + 0x18) = 0x45;
    *(s32 *)((u8 *)temp_s1 + 8) = 2;
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v1) */);
    func_0022C6B0(temp_s1);
block_20:
    *(s16 *)((u8 *)temp_s0 + 0x18) = 0x45;
    *(s32 *)((u8 *)temp_s0 + 8) = 2;
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    func_0022C6B0(temp_s0);
    temp_v0_2 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x1C)) + 0x2A0), 0.0f);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(f32 *)((u8 *)temp_v0_2 + 0x38) = (f32) (*(f32 *)((u8 *)temp_v0_2 + 0x38) * var_f20);
    *(f32 *)((u8 *)temp_v0_2 + 0x34) = (f32) *(f32 *)((u8 *)temp_s2 + 0x34);
    *(f32 *)((u8 *)temp_v0_2 + 0x3C) = (f32) *(f32 *)((u8 *)temp_s2 + 0x3C);
    temp_s6 = amGs_SetReg32(0, 0x34000);
    var_v1 = &sp90;
    *(s128 *)((u8 *)(&spB0) + 0) = (s128) *(s128 *)((u8 *)(&D_00458BC0) + 0);
    var_v0 = 0x20;
    *(s128 *)((u8 *)(&spB0) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00458BC0) + 0x10);
    spB0 = *(f32 *)((u8 *)temp_v0_2 + 0x20) + *(f32 *)((u8 *)temp_v0_2 + 0x30);
    spB4 = *(f32 *)((u8 *)temp_v0_2 + 0x24) + *(f32 *)((u8 *)temp_v0_2 + 0x34);
    spC0 = *(f32 *)((u8 *)temp_v0_2 + 0x20) + *(f32 *)((u8 *)temp_v0_2 + 0x38);
    spC4 = *(f32 *)((u8 *)temp_v0_2 + 0x24) + *(f32 *)((u8 *)temp_v0_2 + 0x3C);
    if (var_v1 == NULL) {
        goto block_22;
    }
loop_21:
    *var_v1 = 0;
    var_v0 -= 1;
    var_v1 += 1;
    if (var_v0 != 0) {
        goto loop_21;
    }
block_22:
    sp90 = *(f32 *)((u8 *)temp_v0_2 + 0x40);
    sp94 = *(f32 *)((u8 *)temp_v0_2 + 0x44);
    spA0 = *(f32 *)((u8 *)temp_v0_2 + 0x48);
    spA4 = *(f32 *)((u8 *)temp_v0_2 + 0x4C);
    func_00136E80(0x40000924, temp_v0_2 + 0x50, *(s16 *)((u8 *)temp_v0_2 + 0x18), 0x44);
    var_s3 = 0;
    goto loop_26;
block_24:
    func_00137560(&spB0, &sp90);
    func_00137560(&spC0, &spA0);
    temp_f1_2 = spB0 + fabsf(*(f32 *)((u8 *)temp_v0_2 + 0x38) - *(f32 *)((u8 *)temp_v0_2 + 0x30));
    spB0 = temp_f1_2;
    spC0 += fabsf(*(f32 *)((u8 *)temp_v0_2 + 0x38) - *(f32 *)((u8 *)temp_v0_2 + 0x30));
    if (!(temp_f1_2 <= 1000.0f)) {
        goto block_28;
    }
    var_s3 += 1;
loop_26:
    if (var_s3 < 0x30D40) {
        goto block_24;
    }
block_28:
    amDraw_FlushPacket();
    amGs_SetReg32(0, temp_s6);
    func_0022D4B0(temp_s2, 1);
    func_0022D4B0(temp_s0, 1);
    func_0022D4B0(temp_s1, 1);
    func_0022D4B0(temp_v0_2, 1);
    func_00228410();
    *(s32 *)((u8 *)temp_s4 + 8) = (s32) (*(s32 *)((u8 *)temp_s4 + 8) + 1);
    return;
}
