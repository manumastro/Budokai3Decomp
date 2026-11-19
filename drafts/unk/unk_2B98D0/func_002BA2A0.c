/* Draft (not built): func_002BA2A0 at 0x002BA2A0, size 0x370, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 115 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x348, original 0x370
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BA2A0.s */

// src/unk/unk_2B98D0.c func_002BA2A0 size diff=115/210
extern s128 D_00455F10;
extern s32 D_00492FD2;
extern s32 D_00493032;
extern void func_002BCCD0(void);
void func_002BA2A0(u8 *arg0) {
    s8 sp40;
    s16 sp42;
    s16 sp44;
    s32 *var_v1;
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a0_8;
    s32 temp_a2;
    s32 temp_s0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    u16 temp_a2_2;
    u8 *temp_a0_2;
    u8 *temp_a0_5;
    u8 *temp_a0_7;

    temp_a2 = ((s32)(D_004B4B63)) * 0xB8;
    temp_a2_2 = *(D_00492FCE + temp_a2);
    if (!(temp_a2_2 & 1)) {
        goto block_3;
    }
    Help_Open(0x200000 | (0x200000 << 0x20), (1 << ((s32)(D_004B4B63))) & 0xFF);
    return;
block_3:
    if (!(temp_a2_2 & 0x5000)) {
        goto block_16;
    }
    SoundRpc_SetVolume(0, 0, temp_a2_2);
    if (D_004E0614[0] <= 0.0f) {
        goto block_6;
    }
    SoundRpc_Send3(0, 0, 5, 0);
block_6:
    var_s1 = 0;
    var_s0 = 0;
loop_7:
    temp_a0 = *(s32 *)((u8 *)(&gStrStatus[var_s0]) + 0x1D8);
    if (temp_a0 == 0) {
        goto block_9;
    }
    func_0022D0E0((void *)(temp_a0), 1);
    *(s32 *)((u8 *)(&gStrStatus[var_s0]) + 0x1D8) = 0;
block_9:
    temp_a0_2 = *(u8 **)((u8 *)(&gStrStatus[var_s0]) + 0xC4);
    if (temp_a0_2 == NULL) {
        goto block_11;
    }
    amTask_Kill(temp_a0_2);
    *(s32 *)((u8 *)(&gStrStatus[var_s0]) + 0xC4) = 0;
block_11:
    var_s1 += 1;
    var_s0 += 4;
    if (var_s1 < 0x20) {
        goto loop_7;
    }
    var_v1 = (int *)(&func_002BCCD0);
    if (&func_002BCCD0 != NULL) {
        goto block_14;
    }
    var_v1 = NULL;
block_14:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    return;
block_16:
    temp_a0_3 = (*(&D_00492FD2 + temp_a2) | *(&D_00493032 + temp_a2)) & 0x50;
    temp_s0 = *(s32 *)((u8 *)gStrStatus + 0x418);
    if (temp_a0_3 == 0x40) {
        goto block_21;
    }
    if (temp_a0_3 == 0x10) {
        goto block_19;
    }
    goto block_24;
block_19:
    if (temp_s0 == 0) {
        goto block_44;
    }
    var_s0_2 = temp_s0 - 1;
    goto block_25;
block_21:
    if (temp_s0 >= (*(s32 *)((u8 *)gStrStatus + 0x41C) - 6)) {
        goto block_44;
    }
    var_s0_2 = temp_s0 + 1;
    goto block_25;
block_24:
    return;
block_25:
    SoundRpc_SetVolume(0, 0, temp_a2_2);
    if (D_004E0614[0] <= 0.0f) {
        goto block_27;
    }
    SoundRpc_Send3(0, 0, 2, 0);
block_27:
    func_002B98D0(var_s0_2);
    sp40 = (s128) D_00455F10;
    if (var_s0_2 != 0) {
        goto block_33;
    }
    temp_a0_4 = *(s32 *)((u8 *)gStrStatus + 0x1E0);
    if (temp_a0_4 == 0) {
        goto block_30;
    }
    func_0022D0E0((void *)(temp_a0_4), 1);
    *(s32 *)((u8 *)gStrStatus + 0x1E0) = 0;
block_30:
    temp_a0_5 = *(u8 **)((u8 *)gStrStatus + 0xCC);
    if (temp_a0_5 == NULL) {
        goto block_38;
    }
    amTask_Kill(temp_a0_5);
    *(u8 **)((u8 *)gStrStatus + 0xCC) = NULL;
    goto block_38;
block_33:
    if (var_s0_2 != (*(s32 *)((u8 *)gStrStatus + 0x41C) - 6)) {
        goto block_38;
    }
    temp_a0_6 = *(s32 *)((u8 *)gStrStatus + 0x1E4);
    if (temp_a0_6 == 0) {
        goto block_36;
    }
    func_0022D0E0((void *)(temp_a0_6), 1);
    *(s32 *)((u8 *)gStrStatus + 0x1E4) = 0;
block_36:
    temp_a0_7 = *(u8 **)((u8 *)gStrStatus + 0xD0);
    if (temp_a0_7 == NULL) {
        goto block_38;
    }
    amTask_Kill(temp_a0_7);
    *(u8 **)((u8 *)gStrStatus + 0xD0) = NULL;
block_38:
    temp_a0_8 = *(s32 *)((u8 *)gStrStatus + 0x418);
    if (temp_a0_8 != 0) {
        goto block_41;
    }
    func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
    goto block_43;
block_41:
    if (temp_a0_8 != (*(s32 *)((u8 *)gStrStatus + 0x41C) - 6)) {
        goto block_43;
    }
    sp40 = 0x26;
    sp42 = 0x1F;
    sp44 = 5;
    func_0028EE90(gStrStatus + 0x38, gStrStatus + 0x14C, gStrStatus + 0x158, gStrStatus + 0x168);
block_43:
    *(s32 *)((u8 *)gStrStatus + 0x418) = var_s0_2;
block_44:
    return;
}
