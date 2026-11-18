/* Draft (not built): DTX_Create at 0x00165AD0, size 0x198, segment cri/dtx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/dtx/DTX_Create.s */

s32 func_0010AB58();
s32 func_0010AC98();
s32 func_00165940();
s32 memset();
s32 scePrintf();
extern s32 D_00411E40;
extern s32 D_00463388;
extern s32 D_004633A8;
extern s32 D_004633C8;
extern s32 D_004633E0;
extern s32 D_004633F8;
extern s32 func_00165A00;
extern s32 func_00165A18;

u8 *DTX_Create(u32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 *var_a0;
    s32 *var_a0_2;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v0;
    s32 temp_v1;
    u32 var_a1;
    u8 *temp_s0;
    u8 *var_v0;

    if (!(arg1 & 0x3F)) {
        goto block_3;
    }
    var_a0 = &D_00463388;
    goto block_14;
block_3:
    if (!(arg2 & 0x1F)) {
        goto block_5;
    }
    var_a0 = &D_004633A8;
    goto block_14;
block_5:
    if (!(arg3 & 0x3F)) {
        goto block_7;
    }
    var_a1 = arg3;
    var_a0_2 = &D_004633C8;
    goto block_9;
block_7:
    if (arg0 < 0x10U) {
        goto block_11;
    }
    var_a1 = arg0;
    var_a0_2 = &D_004633E0;
block_9:
    scePrintf(var_a0_2, var_a1);
    return NULL;
block_11:
    temp_s0 = &D_00411E40 + (arg0 * 0x44);
    var_v0 = NULL;
    if (*(s8 *)((u8 *)temp_s0 + 0) != 0) {
        goto block_16;
    }
    temp_v0 = func_00165940();
    *(s32 *)((u8 *)temp_s0 + 4) = temp_v0;
    if (temp_v0 != 0) {
        goto block_15;
    }
    var_a0 = &D_004633F8;
block_14:
    scePrintf(var_a0);
    return NULL;
block_15:
    temp_v1 = arg3 - 0x40;
    *(s32 *)((u8 *)temp_s0 + 0x10) = temp_v1;
    *(u32 *)((u8 *)temp_s0 + 0x1C) = arg3;
    *(s32 *)((u8 *)temp_s0 + 0x18) = arg2;
    *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) ((arg1 + temp_v1) | 0x20000000);
    *(s32 *)((u8 *)temp_s0 + 8) = 0;
    *(s32 *)((u8 *)temp_s0 + 0xC) = arg1;
    *(s8 *)((u8 *)temp_s0 + 1) = 0;
    memset(arg1, 0, temp_v1);
    temp_a1 = *(s32 *)((u8 *)temp_s0 + 0xC);
    func_0010AB58(temp_a1, temp_a1 + *(s32 *)((u8 *)temp_s0 + 0x10) + 0x3F);
    temp_a1_2 = *(s32 *)((u8 *)temp_s0 + 0xC);
    func_0010AC98(temp_a1_2, temp_a1_2 + *(s32 *)((u8 *)temp_s0 + 0x10) + 0x3F);
    *(s32 **)((u8 *)temp_s0 + 0x28) = &func_00165A18;
    *(s8 *)((u8 *)temp_s0 + 0) = 1;
    *(s32 *)((u8 *)temp_s0 + 0x24) = 0;
    *(s32 *)((u8 *)temp_s0 + 0x2C) = 0;
    *(s8 *)((u8 *)temp_s0 + 2) = 1;
    *(s32 **)((u8 *)temp_s0 + 0x20) = &func_00165A00;
    var_v0 = temp_s0;
block_16:
    return var_v0;
}
