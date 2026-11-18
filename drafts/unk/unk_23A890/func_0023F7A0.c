/* Draft (not built): func_0023F7A0 at 0x0023F7A0, size 0x404, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ) + sp) + 0x68) / D_0047042C) < 0.0f) { @ 482: if ((*(f32 *)((u8 *)((temp_v0 << 5) + sp) + 0x68) / D_0047042C) < 0.0f) {
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023F7A0.s */

// src/unk/unk_23A890.c func_0023F7A0 cerr diff=-1/0
void *BtlSys_GetSlot(s32, s32);
s32 func_0022B900(s32, void *, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00450090;
extern f32 D_0047042C;
void func_0023F7A0(s32 arg0, s32 arg1) {
    s32 sp60;
    s32 spA0;
    f32 spB8;
    f32 spBC;
    s32 temp_v0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_v0_2;
    u8 *temp_v0_3;

    temp_v0 = func_0021C360(0);
    temp_s1 = gBtlSys;
    temp_v0_2 = &D_0058BF70 + (temp_v0 * 0x64);
    temp_s0 = temp_v0_2 + 0x210;
    temp_v0_3 = BtlSys_GetSlot(arg0, temp_v0 * 5);
    *(s128 *)((u8 *)(&sp60) + 0) = (s128) *(s128 *)((u8 *)(&D_00450090) + 0);
    *(s128 *)((u8 *)(&sp60) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00450090) + 0x10);
    *(s128 *)((u8 *)(&sp60) + 0x20) = (s128) *(s128 *)((u8 *)(&D_00450090) + 0x20);
    *(s128 *)((u8 *)(&sp60) + 0x30) = (s128) *(s128 *)((u8 *)(&D_00450090) + 0x30);
    spBC = D_00470690;
    spB8 = D_00470694;
    if ((*(f32 *)((u8 *)((temp_v0 << 5) + sp) + 0x68) / D_0047042C) < 0.0f) {

    }
    if ((*(f32 *)((u8 *)((temp_v0 << 5) + sp) + 0x68) / D_0047042C) < 0.0f) {

    }
    if ((*(f32 *)((u8 *)((temp_v0 << 5) + sp) + 0x78) / D_0047042C) < 0.0f) {

    }
    if ((*(f32 *)((u8 *)((temp_v0 << 5) + sp) + 0x78) / D_0047042C) < 0.0f) {

    }
    *(s32 *)((u8 *)temp_v0_3 + 0x24) = 0;
    temp_a0 = *(u8 **)((u8 *)temp_s1 + 0xE84);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x04010000, *(s128 *)((u8 *)(&D_00450090) + 0x10), *(s128 *)((u8 *)(&D_00450090) + 0));
    D_00470238 = 0;
    switch (arg1) {                                 /* irregular */
    case 2:
        func_0022B900(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xE88)) + 0x1C) + ((temp_v0 & 1) * 4)), *(u8 **)((u8 *)temp_v0_2 + 0x210), 0);
        *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_v0_2 + 0x210)) + 0x1C) = 0;
        *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_v0_2 + 0x210)) + 0x1D) = 0;
        *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_v0_2 + 0x210)) + 0x1E) = 0;
        *(s8 *)((u8 *)(*(u8 **)((u8 *)temp_v0_2 + 0x210)) + 0x1F) = 0x78;
        return;
    case 3:
        if (*(u8 **)((u8 *)temp_s1 + 0xE80) == NULL) {
            *(u8 **)((u8 *)temp_s1 + 0xE80) = amObject_Create((void *)(*(u8 **)((u8 *)temp_s1 + 0xE7C)), (void *)(NULL));
        }
        temp_a0_2 = *(u8 **)((u8 *)temp_s0 + 0x54);
        if (temp_a0_2 != NULL) {
            Obj_ResetF38((s32)((void *)(temp_a0_2)));
        }
        *(u8 **)((u8 *)temp_s0 + 0x54) = func_00209540((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)temp_s1 + 0xE70))))))), 0, 0);
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
        func_00209B50(*(u8 **)((u8 *)temp_s0 + 0x54), &spA0, 0);
        temp_a0_3 = *(u8 **)((u8 *)temp_s0 + 0x58);
        if (temp_a0_3 != NULL) {
            Obj_ResetF38((s32)((void *)(temp_a0_3)));
        }
        *(u8 **)((u8 *)temp_s0 + 0x58) = func_00209540((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)temp_s1 + 0xE74))))))), 0, 0);
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
        func_00209B50(*(u8 **)((u8 *)temp_s0 + 0x58), &spA0, 0);
        *(s32 *)((u8 *)temp_s0 + 0x60) = func_0022D860(*(s32 *)((u8 *)(((temp_v0 & 1) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0xE88)) + 0x14)) + 0x74), 0);
        /* fallthrough */
    case 0:
        return;
    }
}
