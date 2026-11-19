/* Draft (not built): func_0023F7A0 at 0x0023F7A0, size 0x404, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 199 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F0, original 0x404
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023F7A0.s */

// src/unk/unk_23A890.c func_0023F7A0 size diff=199/124
void *BtlSys_GetSlot(s32, s32);
s32 func_0022B900(s32, void *, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00450090;
extern f32 D_0047042C;
void func_0023F7A0(s32 arg0, s32 arg1) {
    u8 sp[0x400];
    s32 sp60;
    s32 spA0;
    f32 spB8;
    f32 spBC;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v0;
    u8 *temp_s1;
    u8 *temp_s0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;

    temp_v0 = func_0021C360(arg0);
    temp_s1 = gBtlSys;
    temp_v0_2 = D_0058BF70 + (temp_v0 * 0x64);
    temp_s0 = temp_v0_2 + 0x210;
    temp_v0_3 = BtlSys_GetSlot(arg0, temp_v0 * 5);
    *(s128 *)((u8 *)(&sp60) + 0) = (s128) *(s128 *)((u8 *)(&D_00450090) + 0);
    *(s128 *)((u8 *)(&sp60) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00450090) + 0x10);
    *(s128 *)((u8 *)(&sp60) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00450090) + 0x20);
    *(s128 *)((u8 *)(&sp60) + 0x30) = (s128) *(s128 *)((u8 *)(&D_00450090) + 0x30);
    spBC = D_00470690;
    spB8 = D_00470694;
    if (!((*(f32 *)((u8 *)((temp_v0 << 5) + sp) + 0x68) / D_0047042C) < 0.0f)) {
        goto block_2;
    }
block_2:
    if (!((*(f32 *)((u8 *)((temp_v0 << 5) + sp) + 0x68) / D_0047042C) < 0.0f)) {
        goto block_4;
    }
block_4:
    if (!((*(f32 *)((u8 *)((temp_v0 << 5) + sp) + 0x78) / D_0047042C) < 0.0f)) {
        goto block_6;
    }
block_6:
    if (!((*(f32 *)((u8 *)((temp_v0 << 5) + sp) + 0x78) / D_0047042C) < 0.0f)) {
        goto block_8;
    }
block_8:
    *(s32 *)((u8 *)temp_v0_3 + 0x24) = 0;
    temp_a0 = *(s32 *)((u8 *)temp_s1 + 0xE84);
    D_00470704 = temp_a0;
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x04010000);
    D_00470238 = 0;
    if (arg1 == 3) {
        goto block_15;
    }
    if (arg1 == 2) {
        goto block_13;
    }
    if (arg1 == 0) {
        goto block_22;
    }
    return;
block_13:
    func_0022B900(*(s32 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xE88)) + 0x1C) + ((temp_v0 & 1) * 4)), *(u8 **)((u8 *)temp_v0_2 + 0x210), 0);
    *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_v0_2 + 0x210)) + 0x1C) = 0;
    *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_v0_2 + 0x210)) + 0x1D) = 0;
    *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_v0_2 + 0x210)) + 0x1E) = 0;
    *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_v0_2 + 0x210)) + 0x1F) = 0x78;
    return;
block_15:
    if (*(s32 *)((u8 *)temp_s1 + 0xE80) != 0) {
        goto block_17;
    }
    *(s32 *)((u8 *)temp_s1 + 0xE80) = amObject_Create(*(s32 *)((u8 *)temp_s1 + 0xE7C), 0);
block_17:
    temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0x54);
    if (temp_a0_2 == 0) {
        goto block_19;
    }
    Obj_ResetF38(temp_a0_2);
block_19:
    *(s32 *)((u8 *)temp_s0 + 0x54) = func_00209540(*(s32 *)((u8 *)temp_s1 + 0xE70), 0, 0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf1 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf2 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
    M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
    M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v0) */);
    func_00209B50(*(s32 *)((u8 *)temp_s0 + 0x54), (s32) &spA0, 0);
    temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0x58);
    if (temp_a0_3 == 0) {
        goto block_21;
    }
    Obj_ResetF38(temp_a0_3);
block_21:
    *(s32 *)((u8 *)temp_s0 + 0x58) = func_00209540(*(s32 *)((u8 *)temp_s1 + 0xE74), 0, 0);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf4, ($v0) */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a1, $vf1 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $a0, $vf2 */);
    M2C_ERROR(/* unknown instruction: qmtc2.ni $v1, $vf3 */);
    M2C_ERROR(/* unknown instruction: vaddx.x $vf4, $vf4, $vf1x */);
    M2C_ERROR(/* unknown instruction: vaddx.y $vf4, $vf4, $vf2x */);
    M2C_ERROR(/* unknown instruction: vaddx.z $vf4, $vf4, $vf3x */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf4, ($v0) */);
    func_00209B50(*(s32 *)((u8 *)temp_s0 + 0x58), (s32) &spA0, 0);
    *(s32 *)((u8 *)temp_s0 + 0x60) = func_0022D860(*(s32 *)((u8 *)(((temp_v0 & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xE88)) + 0x14)) + 0x74), 0);
block_22:
    return;
}
