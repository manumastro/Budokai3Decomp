/* Draft (not built): func_00236D60 at 0x00236D60, size 0x294, segment battle/char_light (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'spF8' @ 483: temp_f0 = func_001FE2B0(temp_s1 + 0x40, &spF0, spF0, spF8);
 * Original: asm/nonmatchings/battle/char_light/func_00236D60.s */

// src/battle/char_light.c func_00236D60 cerr diff=-1/0
f32 func_001FE2B0(s32, f32 *, f32, f32);
extern void BtbBg_ClearFlag1(void);
void func_00236D60(u8 *arg0) {
    s32 sp50;
    s32 sp54;
    s32 sp60;
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 spB0;
    f32 spB4;
    s32 *spC0;
    s32 spCC;
    f32 spF0;
    f32 temp_f0;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v0_2;

    temp_s2 = gBattle;
    temp_s1 = *(u8 **)((u8 *)arg0 + 0);
    *(u8 **)((u8 *)temp_s2 + 0x8934) = temp_s1;
    temp_s0 = *(u8 **)((u8 *)arg0 + 4);
    *(u8 **)((u8 *)temp_s2 + 0x8938) = temp_s0;
    *(s8 *)((u8 *)temp_s2 + 0x8AAD) = 1;
    func_001E1300(0);
    BtbBg_ClearFlag1();
    Btl_UpdateLimitXY(0, 0x3F4CCCCD, 0x3BA3D70A);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v0, $vf3 */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf2, $vf2, $vf1 */);
    M2C_ERROR(/* unknown instruction: vaddax.xyz ACC, $vf1, $vf0x */);
    M2C_ERROR(/* unknown instruction: vmaddx.xyz $vf1, $vf2, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a1) */);
    temp_f0 = func_001FE2B0(temp_s1 + 0x40, &spF0, spF0, spF8);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    temp_v0 = *(u8 **)((u8 *)temp_s2 + 0x260);
    *(f32 *)((u8 *)temp_v0 + 4) = (f32) (*(f32 *)((u8 *)temp_v0 + 4) + (60.0f + temp_f0));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    temp_v0_2 = *(u8 **)((u8 *)temp_s2 + 0x260);
    *(f32 *)((u8 *)temp_v0_2 + 0x14) = (f32) (*(f32 *)((u8 *)temp_v0_2 + 0x14) + (60.0f + temp_f0));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    *(f32 *)((u8 *)temp_s1 + 0x44) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x44) + (60.0f + temp_f0));
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    *(f32 *)((u8 *)temp_s0 + 0x44) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x44) + (60.0f + temp_f0));
    func_001C75D0(temp_s1, 0x1B);
    func_001C75D0(temp_s0, 0x1B);
    func_001A8770(2, NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    spC0 = &spB0;
    spCC = 1;
    spB4 += 60.0f + temp_f0;
    func_00218440(0xC, &spC0);
    memset(&sp60, 0, 0x50);
    sp84 = 1;
    sp88 = 3;
    sp80 = 0;
    func_001A8770(1, &sp60);
    func_001E9B00(1, 0x1F, 0, 0, 0, 0x3F800000);
    sp50 = -1;
    sp54 = 1;
    A2d_CallHandler(0x2E, &sp50);
    func_001DA4C0();
}
