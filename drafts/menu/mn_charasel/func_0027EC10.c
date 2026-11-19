/* Draft (not built): func_0027EC10 at 0x0027EC10, size 0x254, segment menu/mn_charasel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 82 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x264, original 0x254
 * Original: asm/nonmatchings/menu/mn_charasel/func_0027EC10.s */

// src/menu/mn_charasel.c func_0027EC10 size diff=82/153
extern s32 gVsCharasel;
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_0027EC10(u8 *arg0) {
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    u8 *temp_a0;
    u8 *temp_s0;

    temp_s0 = (unsigned char *)(gVsCharasel);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x2000);
    D_00470238 = 0;
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0xC);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    *(s32 *)((u8 *)arg0 + 0xC) = func_0022D670(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C), 0);
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x10);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x10) = func_0022D860(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x14), 0);
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x24);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x24) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x14)) + 0xC), 0);
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x34);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x34) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x14)) + 0x14), 0);
    temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x1C);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x1C) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x40), 0);
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x20);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x20) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x70), 0);
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x14);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x14) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x28), 0);
    temp_a0_9 = *(s32 *)((u8 *)arg0 + 0x18);
    if (temp_a0_9 != 0) {
        func_0022D0E0(temp_a0_9, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x18) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x34), 0);
    temp_a0_10 = *(s32 *)((u8 *)arg0 + 0x28);
    if (temp_a0_10 != 0) {
        func_0022D0E0(temp_a0_10, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x28) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x4C), 0);
    temp_a0_11 = *(s32 *)((u8 *)arg0 + 0x2C);
    if (temp_a0_11 != 0) {
        func_0022D0E0(temp_a0_11, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x2C) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x58), 0);
    temp_a0_12 = *(s32 *)((u8 *)arg0 + 0x30);
    if (temp_a0_12 != 0) {
        func_0022D0E0(temp_a0_12, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x30) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x64), 0);
}
