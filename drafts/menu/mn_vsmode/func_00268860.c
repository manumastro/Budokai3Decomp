/* Draft (not built): func_00268860 at 0x00268860, size 0x218, segment menu/mn_vsmode (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 107 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x22C, original 0x218
 * Original: asm/nonmatchings/menu/mn_vsmode/func_00268860.s */

// src/menu/mn_vsmode.c func_00268860 size diff=107/139
extern void *D_004707DC;
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_00268860(u8 *arg0) {
    s32 var_s1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_s2;
    u8 *var_s0;

    temp_s0 = D_004707DC;
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xC);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    *(s32 *)((u8 *)arg0 + 0) = func_0022D670(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C), 0);
    *(s32 *)((u8 *)arg0 + 0x2C) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x24), 0);
    *(s32 *)((u8 *)arg0 + 0x30) = func_0022D670(*(s32 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x1C)) + 0x30), 0);
    temp_s0_2 = D_004707DC;
    temp_a0_2 = *(u8 **)((u8 *)temp_s0_2 + 0xC);
    D_00470704 = temp_a0_2;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_2, 0x1000);
    D_00470238 = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = func_0022D860(**(s32 **)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 8)) + 0x14), 0);
    *(s32 *)((u8 *)arg0 + 0x10) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 8)) + 0x1C)) + 0xB8), 0);
    *(s32 *)((u8 *)arg0 + 0x14) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 8)) + 0x1C)) + 0xA8), 0);
    *(s32 *)((u8 *)arg0 + 0x18) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 8)) + 0x1C)) + 0xB0), 0);
    temp_s2 = D_004707DC;
    temp_a0_3 = *(u8 **)((u8 *)temp_s2 + 0xC);
    D_00470704 = temp_a0_3;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_3, 0x1000);
    D_00470238 = 0;
    *(s32 *)((u8 *)arg0 + 0x34) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C)) + 0x3C), 0);
    *(s32 *)((u8 *)arg0 + 0x38) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C)) + 0x48), 0);
    var_s1 = 0;
    var_s0 = arg0;
    do {
        *(s32 *)((u8 *)var_s0 + 0x1C) = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C) + ((var_s1 + 0x18) * 4)), 0);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 4);
    *(s32 *)((u8 *)arg0 + 0x40) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 8)) + 0x1C)) + 0x70), 0);
    temp_s0_3 = D_004707DC;
    temp_a0_4 = *(u8 **)((u8 *)temp_s0_3 + 0xC);
    D_00470704 = temp_a0_4;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0_4, 0x1000);
    D_00470238 = 0;
    *(s32 *)((u8 *)arg0 + 4) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_3 + 8)) + 0x1C)) + 0x18), 0);
    *(s32 *)((u8 *)arg0 + 8) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0_3 + 8)) + 0x1C)) + 0xC), 0);
}
