/* Draft (not built): func_002668F0 at 0x002668F0, size 0x1C4, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 88 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1DC, original 0x1C4
 * Original: asm/nonmatchings/menu/mn_dataload/func_002668F0.s */

// src/menu/mn_dataload.c func_002668F0 size diff=88/119
s32 func_0022D670(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002668F0(u8 *arg0) {
    s32 temp_a0_10;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_9;
    u8 *temp_a0;
    u8 *temp_a0_5;
    u8 *temp_a0_8;

    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x54);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x54) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xF8), 0);
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x58);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x58) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x11C), 0);
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x88);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x88) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x144), 0);
    temp_a0_5 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0_5;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_5, 0x1000);
    D_00470238 = 0;
    temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x80);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x80) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x104), 0);
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x84);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x84) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x110), 0);
    temp_a0_8 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0_8;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_8, 0x1000);
    D_00470238 = 0;
    temp_a0_9 = *(s32 *)((u8 *)arg0 + 0x4C);
    if (temp_a0_9 != 0) {
        func_0022D0E0(temp_a0_9, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x4C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xAC), 0);
    temp_a0_10 = *(s32 *)((u8 *)arg0 + 0x50);
    if (temp_a0_10 != 0) {
        func_0022D0E0(temp_a0_10, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x50) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xB8), 0);
    *(s32 *)((u8 *)arg0 + 0x9C) = 0;
    *(s16 *)((u8 *)arg0 + 0x94) = 5;
}
