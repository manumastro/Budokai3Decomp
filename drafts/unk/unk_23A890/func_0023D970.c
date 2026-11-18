/* Draft (not built): func_0023D970 at 0x0023D970, size 0x1CC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 67 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1E8, original 0x1CC
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023D970.s */

// src/unk/unk_23A890.c func_0023D970 size diff=67/122
void *BtlSys_GetSlot(s32, s32, s32);
s32 func_0022B900(s32, s32, f32);
s32 func_0022C060(s32, s32);
extern f32 D_00470710;
void func_0023D970(s32 arg0) {
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_s0;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0;

    temp_s3 = gBtlSys;
    temp_v0 = &D_0058BF70 + (arg0 * 0x64);
    temp_s2 = temp_v0 + 0x210;
    temp_s1 = BtlSys_GetSlot(func_0021C3D0(0), arg0 * 0x14, arg0 * 5);
    if (Input_IsHeld(1) == 0) {
        goto block_15;
    }
    temp_a0 = *(u8 **)((u8 *)temp_s3 + 0xE84);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x04010000);
    D_00470238 = 0;
    temp_a1 = *(s32 *)((u8 *)temp_s1 + 0);
    temp_a0_2 = temp_a1 & 0x1C000;
    if (temp_a0_2 == 0x10000) {
        goto block_7;
    }
    if (temp_a0_2 == 0x8000) {
        goto block_6;
    }
    if (temp_a0_2 == 0x4000) {
        goto block_14;
    }
    goto block_14;
block_6:
    func_0022B900(*(s32 *)((u8 *)((arg0 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C)) + 0x268), *(s32 *)((u8 *)temp_s2 + 4), *(f32 *)((u8 *)temp_s1 + 0x24));
    goto block_14;
block_7:
    if (Input_IsHeld(1) == 0) {
        goto block_15;
    }
    temp_s0 = arg0 * 4;
    func_0022B900(*(s32 *)((u8 *)(temp_s0 + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C)) + 0x290), *(s32 *)((u8 *)temp_s2 + 8), *(f32 *)((u8 *)temp_s1 + 0x24));
    func_0022B900(*(s32 *)((u8 *)(temp_s0 + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C)) + 0x300), *(s32 *)((u8 *)temp_v0 + 0x210), *(f32 *)((u8 *)temp_s1 + 0x24));
    func_0022C060(*(s32 *)((u8 *)temp_s2 + 0x60), 0x3F800000);
    temp_a0_3 = *(u8 **)((u8 *)temp_s2 + 0x54);
    if (temp_a0_3 == NULL) {
        goto block_11;
    }
    func_00208F70((s32)((void *)(temp_a0_3)));
    temp_a0_4 = *(u8 **)((u8 *)temp_s2 + 0x54);
    if (*(s32 *)((u8 *)temp_a0_4 + 0x38) >= 0) {
        goto block_11;
    }
    Obj_ResetF38((s32)((void *)(temp_a0_4)));
    *(u8 **)((u8 *)temp_s2 + 0x54) = NULL;
block_11:
    temp_a0_5 = *(u8 **)((u8 *)temp_s2 + 0x58);
    if (temp_a0_5 == NULL) {
        goto block_14;
    }
    func_00208F70((s32)((void *)(temp_a0_5)));
    temp_a0_6 = *(u8 **)((u8 *)temp_s2 + 0x58);
    if (*(s32 *)((u8 *)temp_a0_6 + 0x38) >= 0) {
        goto block_14;
    }
    Obj_ResetF38((s32)((void *)(temp_a0_6)));
    *(u8 **)((u8 *)temp_s2 + 0x58) = NULL;
block_14:
    *(f32 *)((u8 *)temp_s1 + 0x24) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x24) + D_00470710);
block_15:
    return;
}
