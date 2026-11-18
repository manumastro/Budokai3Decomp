/* Draft (not built): func_002C1720 at 0x002C1720, size 0x138, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 41 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x148, original 0x138
 * Original: asm/nonmatchings/story/str_status/func_002C1720.s */

// src/story/str_status.c func_002C1720 size diff=41/82
void func_002C1720(u8 *arg0) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    u8 temp_a0_6;
    u8 *temp_a0;

    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x2000);
    D_00470238 = 0;
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x24);
    if (temp_a0_2 == 0) {
        goto block_2;
    }
    func_0022D0E0(temp_a0_2, 1);
block_2:
    *(s32 *)((u8 *)arg0 + 0x24) = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + ((*(u8 *)((u8 *)arg0 + 0xAB) + 0x2A) * 4)), 0);
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x28);
    if (temp_a0_3 == 0) {
        goto block_4;
    }
    func_0022D0E0(temp_a0_3, 1);
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
block_4:
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x34);
    if (temp_a0_4 == 0) {
        goto block_6;
    }
    func_0022D0E0(temp_a0_4, 1);
block_6:
    if (*(u8 *)((u8 *)arg0 + 0xAB) == 0) {
        goto block_8;
    }
    *(s32 *)((u8 *)arg0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x68), 0);
    goto block_9;
block_8:
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
block_9:
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x38);
    if (temp_a0_5 == 0) {
        goto block_11;
    }
    func_0022D0E0(temp_a0_5, 1);
block_11:
    temp_a0_6 = *(u8 *)((u8 *)arg0 + 0xAB);
    if ((s32) temp_a0_6 < (s32) *(u8 *)((u8 *)arg0 + 0xAD)) {
        goto block_14;
    }
    if ((s32) temp_a0_6 >= 2) {
        goto block_16;
    }
block_14:
    *(s32 *)((u8 *)arg0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x6C), 0);
    return;
block_16:
    *(s32 *)((u8 *)arg0 + 0x38) = 0;
    return;
}
