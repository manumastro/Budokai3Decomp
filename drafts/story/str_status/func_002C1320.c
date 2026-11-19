/* Draft (not built): func_002C1320 at 0x002C1320, size 0x2C0, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 82 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2D0, original 0x2C0
 * Original: asm/nonmatchings/story/str_status/func_002C1320.s */

// src/story/str_status.c func_002C1320 size diff=82/180
void func_002C1320(s32 *arg0) {
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    u8 *temp_a0;

    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = (int)(temp_a0);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x2000);
    D_00470238 = 0;
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0xC);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    *(s32 *)((u8 *)arg0 + 0xC) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 8), 0);
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x10);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x10) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x10), 0);
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x14);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x14) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x18), 0);
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x18);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x18) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x20), 0);
    temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x1C);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x1C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x30), 0);
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x20);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x20) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xC8), 0);
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x24);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x24) = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + ((*(u8 *)((u8 *)arg0 + 0xAC) + 0x12) * 4)), 0);
    temp_a0_9 = *(s32 *)((u8 *)arg0 + 0x28);
    if (temp_a0_9 != 0) {
        func_0022D0E0(temp_a0_9, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x28) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xB8), 0);
    temp_a0_10 = *(s32 *)((u8 *)arg0 + 0x2C);
    if (temp_a0_10 != 0) {
        func_0022D0E0(temp_a0_10, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x2C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x28), 0);
    temp_a0_11 = *(s32 *)((u8 *)arg0 + 0x34);
    if (temp_a0_11 != 0) {
        func_0022D0E0(temp_a0_11, 1);
    }
    if (*(u8 *)((u8 *)arg0 + 0xAC) != 0) {
        *(s32 *)((u8 *)arg0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x68), 0);
    } else {
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
    }
    temp_a0_12 = *(s32 *)((u8 *)arg0 + 0x38);
    if (temp_a0_12 != 0) {
        func_0022D0E0(temp_a0_12, 1);
    }
    if (*(u8 *)((u8 *)arg0 + 0xAC) != 7) {
        *(s32 *)((u8 *)arg0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x6C), 0);
    } else {
        *(s32 *)((u8 *)arg0 + 0x38) = 0;
    }
    temp_a0_13 = *(s32 *)((u8 *)arg0 + 0x30);
    if (temp_a0_13 != 0) {
        func_0022D0E0(temp_a0_13, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x30) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x90), 0);
}
