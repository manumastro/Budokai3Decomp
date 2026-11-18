/* Draft (not built): func_00266CD0 at 0x00266CD0, size 0x1E8, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 99 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x200, original 0x1E8
 * Original: asm/nonmatchings/menu/mn_dataload/func_00266CD0.s */

// src/menu/mn_dataload.c func_00266CD0 size diff=99/128
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00266CD0(u8 *arg0) {
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 var_s1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_6;
    u8 *var_s0;

    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = func_0022D860(**(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14), 0);
    var_s1 = 0;
    var_s0 = arg0;
    do {
        *(s32 *)((u8 *)var_s0 + 0x14) = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + ((var_s1 + 0x1D) * 4)), 0);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0xC);
    temp_a0_2 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0_2;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_2, 0x1000);
    D_00470238 = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14)) + 4), 0);
    *(s32 *)((u8 *)arg0 + 0x48) = func_0022D860(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14)) + 8), 0);
    temp_a0_3 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0_3;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_3, 0x1000);
    D_00470238 = 0;
    temp_a0_4 = *(s32 *)((u8 *)arg0 + 0x4C);
    if (temp_a0_4 != 0) {
        func_0022D0E0(temp_a0_4, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x4C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xA4), 0);
    temp_a0_5 = *(s32 *)((u8 *)arg0 + 0x50);
    if (temp_a0_5 != 0) {
        func_0022D0E0(temp_a0_5, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x50) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xB0), 0);
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
    *(s32 *)((u8 *)arg0 + 0x80) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xFC), 0);
    temp_a0_8 = *(s32 *)((u8 *)arg0 + 0x84);
    if (temp_a0_8 != 0) {
        func_0022D0E0(temp_a0_8, 1);
    }
    *(s32 *)((u8 *)arg0 + 0x84) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x108), 0);
    func_002667D0(arg0);
}
