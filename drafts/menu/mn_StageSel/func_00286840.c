/* Draft (not built): func_00286840 at 0x00286840, size 0x1E8, segment menu/mn_StageSel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 53 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F4, original 0x1E8
 * Original: asm/nonmatchings/menu/mn_StageSel/func_00286840.s */

// src/menu/mn_StageSel.c func_00286840 size diff=53/125
s32 func_0022D0E0(s32, s32);
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00286840(u8 *arg0) {
    s32 temp_a0_10;
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
    D_00470704 = temp_a0;
    D_0047070C = 0x7000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x7000);
    D_00470238 = 0;
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x14);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x14) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14)) + 8), 0);
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x1C);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x1C) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14)) + 0x3C), 0);
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x20);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x20) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 8), 0);
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x24);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x24) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x14), 0);
    temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x2C);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x2C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x3C), 0);
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x30);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x30) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x48), 0);
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x34);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x54), 0);
    temp_a0_9 = *(s32 *)((u8 *)arg0 + 0x38);
    if (temp_a0_9 != 0) {
        func_0022D0E0(temp_a0_9, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x60), 0);
    temp_a0_10 = *(s32 *)((u8 *)arg0 + 0x3C);
    if (temp_a0_10 != 0) {
        func_0022D0E0(temp_a0_10, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x3C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x70), 0);
}
