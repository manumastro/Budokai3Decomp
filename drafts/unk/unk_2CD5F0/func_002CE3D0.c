/* Draft (not built): func_002CE3D0 at 0x002CE3D0, size 0x130, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  @ 399: temp_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)((D_0051CD20 * 0x24) + *(s32 *)((u8 *)(&gBtbBg) + 0x34)) + 4)) + 0xA4);
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CE3D0.s */

// src/unk/unk_2CD5F0.c func_002CE3D0 cerr diff=-1/0
s32 memcpy(s8 *, void *, s32);
void func_002CE3D0(u8 *arg0) {
    s32 sp30;
    f32 sp34;
    s32 temp_a0;
    u8 *temp_s1;

    temp_s1 = arg0 + 0x30;
    if (*(s32 *)((u8 *)arg0 + 0x30) != 0) {
        memcpy(D_00495718, temp_s1 + 0x10, 0x10);
        memcpy(D_00495758, temp_s1 + 0x20, 0x10);
    }
    func_001F5AB0((s32)(*(u8 **)((u8 *)arg0 + 0x10)));
    temp_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)((D_0051CD20 * 0x24) + *(s32 *)((u8 *)(&gBtbBg) + 0x34)) + 4)) + 0xA4);
    if (temp_a0 != 0) {
        D_00470238 = 1;
        amModel_SetCurrent(temp_a0, 0x02002000);
    }
    if (func_001B0D10() == 1) {
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    } else {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        sp34 = 0.0f;
    }
    func_001F3DF0(arg0);
    func_0013B0B0(NULL);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    func_0013E0A0(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x10)) + 4));
    func_0013B110(1);
    BtbObj_CheckDrawFlags(arg0);
}
