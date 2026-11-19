/* Draft (not built): func_002B7A60 at 0x002B7A60, size 0x1DC, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 50 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1E8, original 0x1DC
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B7A60.s */

// src/menu/mn_csmodel.c func_002B7A60 size diff=50/122
void func_002B7A60(u8 *arg0) {
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
    u8 *temp_s0;

    temp_s0 = gPracMode;
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xC);
    D_00470704 = (int)(temp_a0);
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x1000);
    D_00470238 = 0;
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0);
    if (temp_a0_2 != 0) {
        func_0022D0E0((void *)(temp_a0_2), 1);
    }
    *(s32 *)((u8 *)arg0 + 0) = (int)(func_0022D670((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 8)), 0));
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_a0_3 != 0) {
        func_0022D0E0((void *)(temp_a0_3), 1);
    }
    *(s32 *)((u8 *)arg0 + 4) = (int)(func_0022D670((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x14)), 0));
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 8);
    if (temp_a0_4 != 0) {
        func_0022D0E0((void *)(temp_a0_4), 1);
    }
    *(s32 *)((u8 *)arg0 + 8) = (int)(func_0022D670((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x20)), 0));
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0xC);
    if (temp_a0_5 != 0) {
        func_0022D0E0((void *)(temp_a0_5), 1);
    }
    *(s32 *)((u8 *)arg0 + 0xC) = (int)(func_0022D670((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0xAC)), 0));
    temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x40);
    if (temp_a0_6 != 0) {
        func_0022D0E0((void *)(temp_a0_6), 1);
    }
    *(s32 *)((u8 *)arg0 + 0x40) = (int)(func_0022D670((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x2C)), 0));
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x44);
    if (temp_a0_7 != 0) {
        func_0022D0E0((void *)(temp_a0_7), 1);
    }
    *(s32 *)((u8 *)arg0 + 0x44) = (int)(func_0022D670((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x38)), 0));
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x48);
    if (temp_a0_8 != 0) {
        func_0022D0E0((void *)(temp_a0_8), 1);
    }
    *(s32 *)((u8 *)arg0 + 0x48) = (int)(func_0022D860((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x14)) + 0x10)), 0));
    temp_a0_9 = *(s32 *)((u8 *)arg0 + 0x4C);
    if (temp_a0_9 != 0) {
        func_0022D0E0((void *)(temp_a0_9), 1);
        *(s32 *)((u8 *)arg0 + 0x4C) = 0;
    }
    temp_a0_10 = *(s32 *)((u8 *)arg0 + 0x50);
    if (temp_a0_10 != 0) {
        func_0022D0E0((void *)(temp_a0_10), 1);
    }
    *(s32 *)((u8 *)arg0 + 0x50) = (int)(func_0022D670((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x9C)), 0));
}
