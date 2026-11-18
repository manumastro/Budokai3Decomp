/* Draft (not built): func_002EE360 at 0x002EE360, size 0x170, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  *' to 'int' mwccps2.exe Compiler: @ 83: *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x14)) + 8)))))), 0);
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EE360.s */

// src/menu/mn_ArenaList.c func_002EE360 cerr diff=-1/0
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
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x4000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x4000);
    D_00470238 = 0;
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x5C);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x5C) = func_0022D860((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x14)) + 8))))))), 0);
    temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x60);
    if (temp_a0_3 != 0) {
        func_0022D0E0(temp_a0_3, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x60) = func_0022D860((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x14)) + 0x14))))))), 0);
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x64);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x64) = func_0022D670((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)) + 0x2C))))))), 0);
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x68);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x68) = func_0022D670((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)) + 0x30))))))), 0);
    temp_a0_6 = *(s32 *)((u8 *)arg0 + 0x6C);
    if (temp_a0_6 != 0) {
        func_0022D0E0(temp_a0_6, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x6C) = func_0022D670((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)) + 0x314))))))), 0);
    temp_a0_7 = *(s32 *)((u8 *)arg0 + 0x70);
    if (temp_a0_7 != 0) {
        func_0022D0E0(temp_a0_7, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x70) = func_0022D670((s32)((void *)((s32)((void *)((s32)((void *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)) + 0x318))))))), 0);
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x74);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
        *(s32 *)((u8 *)arg0 + 0x74) = 0;
    }
}
