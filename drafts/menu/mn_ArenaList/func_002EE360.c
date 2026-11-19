/* Draft (not built): func_002EE360 at 0x002EE360, size 0x170, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 46 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x180, original 0x170
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EE360.s */

// src/menu/mn_ArenaList.c func_002EE360 size diff=46/96
void func_002EE360(u8 *arg0) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    u8 *temp_a0;

    temp_a0 = *(u8 **)((u8 *)arg0 + 0x240);
    D_00470704 = (int)(temp_a0);
    D_0047070C = 0x4000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x4000);
    D_00470238 = 0;
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x5C);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x5C) = (int)(func_0022D860((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x14)) + 8)), 0));
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x60);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x60) = (int)(func_0022D860((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x14)) + 0x14)), 0));
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x64);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x64) = (int)(func_0022D670((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)) + 0x2C)), 0));
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x68);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x68) = (int)(func_0022D670((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)) + 0x30)), 0));
    temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x6C);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x6C) = (int)(func_0022D670((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)) + 0x314)), 0));
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x70);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x70) = (int)(func_0022D670((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)) + 0x318)), 0));
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x74);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
        *(s32 *)((u8 *)arg0 + 0x74) = 0;
    }
}

/* Similar function already in C: func_002E5040 (src/unk/unk_2E4030.c), similarity 0.83.
 * It is the template below (not built). */
#if 0
void func_002E5040(u8 *a0) {
    s32 f4;

    f4 = *(s32 *)(a0 + 4);
    D_00470704 = f4;
    D_0047070C = 0x7000;
    D_00470708 = 0;
    amModel_SetCurrent(f4, 0x7000);
    D_00470238 = 0;
    if (*(s32 *)(a0 + 0x10) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x10), 0);
    }
    *(s32 *)(a0 + 0x10) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x0), 0.0f);
    if (*(s32 *)(a0 + 0x18) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x18), 0);
    }
    *(s32 *)(a0 + 0x18) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x4), 0.0f);
    if (*(s32 *)(a0 + 0x14) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x14), 0);
    }
    *(s32 *)(a0 + 0x14) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x14), 0.0f);
    if (*(s32 *)(a0 + 0x1C) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x1C), 0);
    }
    *(s32 *)(a0 + 0x1C) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x20), 0.0f);
    if (*(s32 *)(a0 + 0x24) != 0) {
        func_0022D0E0(*(s32 *)(a0 + 0x24), 0);
    }
    *(s32 *)(a0 + 0x24) = func_0022D860(*(s32 *)(*(u8 **)(*(u8 **)a0 + 0x14) + 0x28), 0.0f);
}
#endif
