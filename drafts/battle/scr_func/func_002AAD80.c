/* Draft (not built): func_002AAD80 at 0x002AAD80, size 0x1B0, segment battle/scr_func (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 96 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x98, original 0x1B0
 * Original: asm/nonmatchings/battle/scr_func/func_002AAD80.s */

// src/battle/scr_func.c func_002AAD80 size diff=96/38
s32 func_002AAD80(s32 *arg0, s32 *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 temp_f2;
    u8 *temp_a3;

    temp_a3 = (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x2C)) + 0x14) * 0xD0) + (((u8 *)&D_005BC9E0) + (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0) * 0x1A0));
    temp_f2 = *(f32 *)((u8 *)temp_a3 + 0x1C);
    if (temp_f2 <= 0.0f) {
        *(s32 *)((u8 *)arg0 + 0x10) = 0;
        return 1;
    }
    if (!((1.0f / temp_f2) < 1.0f)) {

    }
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0xC) != 3) {
        *(f32 *)((u8 *)temp_a3 + 0x1C) = (f32) (temp_f2 - D_004708F8);
    }
    sp10 = *(f32 *)((u8 *)temp_a3 + 0x90);
    sp14 = *(f32 *)((u8 *)temp_a3 + 0x94);
    sp18 = *(f32 *)((u8 *)temp_a3 + 0x98);
    sp1C = *(f32 *)((u8 *)temp_a3 + 0x9C);
    sp0 = *(f32 *)((u8 *)temp_a3 + 0xA0);
    sp4 = *(f32 *)((u8 *)temp_a3 + 0xA4);
    sp8 = *(f32 *)((u8 *)temp_a3 + 0xA8);
    spC = *(f32 *)((u8 *)temp_a3 + 0xAC);
    M2C_ERROR(/* unknown instruction: lqc2 $vf5, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a2, $vf1 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf2 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf3 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf4 */);
    M2C_ERROR(/* unknown instruction: vmulx.x $vf5, $vf5, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmulx.y $vf5, $vf5, $vf2x */);
    M2C_ERROR(/* unknown instruction: vmulx.z $vf5, $vf5, $vf3x */);
    M2C_ERROR(/* unknown instruction: vmulx.w $vf5, $vf5, $vf4x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf5, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf5, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a2, $vf1 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf2 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf3 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf4 */);
    M2C_ERROR(/* unknown instruction: vmulx.x $vf5, $vf5, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmulx.y $vf5, $vf5, $vf2x */);
    M2C_ERROR(/* unknown instruction: vmulx.z $vf5, $vf5, $vf3x */);
    M2C_ERROR(/* unknown instruction: vmulx.w $vf5, $vf5, $vf4x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf5, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
    M2C_ERROR(/* unknown instruction: vadd.xyzw $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    return 3;
}
