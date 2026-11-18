/* Draft (not built): func_00266AC0 at 0x00266AC0, size 0x208, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 118 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x220, original 0x208
 * Original: asm/nonmatchings/menu/mn_dataload/func_00266AC0.s */

// src/menu/mn_dataload.c func_00266AC0 size diff=118/136
s32 Scene_FadeTo(s32, s32);
s32 func_0022D670(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void Scene_Request();
void func_00266AC0(u8 *arg0) {
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_7;
    s32 temp_a0_8;
    u8 *temp_a0;
    u8 *temp_a0_6;
    u8 *temp_a0_9;

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
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x7C);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x7C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xEC), 0);
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x88);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x88) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x144), 0);
    temp_a0_6 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0_6;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_6, 0x1000);
    D_00470238 = 0;
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x80);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x80) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x104), 0);
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x84);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x84) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x110), 0);
    temp_a0_9 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0_9;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_9, 0x1000);
    D_00470238 = 0;
    temp_a0_10 = *(s32 *)((u8 *)arg0 + 0x4C);
    if (temp_a0_10 != 0) {
        func_0022D0E0(temp_a0_10, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x4C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xAC), 0);
    temp_a0_11 = *(s32 *)((u8 *)arg0 + 0x50);
    if (temp_a0_11 != 0) {
        func_0022D0E0(temp_a0_11, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x50) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xB8), 0);
    *(s32 *)((u8 *)arg0 + 0x9C) = 0;
    *(s16 *)((u8 *)arg0 + 0x94) = 4;
    Scene_Request(4, 1);
    Scene_FadeTo(0xA, 0);
}
