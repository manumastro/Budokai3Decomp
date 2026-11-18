/* Draft (not built): func_002667D0 at 0x002667D0, size 0x118, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 45 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x130, original 0x118
 * Original: asm/nonmatchings/menu/mn_dataload/func_002667D0.s */

// src/menu/mn_dataload.c func_002667D0 size diff=45/76
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002667D0(u8 *arg0) {
    s32 var_s1;
    u8 *temp_a0;
    u8 *var_s0;

    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    *(s32 *)((u8 *)arg0 + 0x54) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xF0), 0);
    *(s32 *)((u8 *)arg0 + 0x58) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x114), 0);
    var_s1 = 0;
    if ((s32) *(u8 *)((u8 *)arg0 + 0x97) > 0) {
        var_s0 = arg0;
        do {
            *(s32 *)((u8 *)var_s0 + 0x5C) = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + ((*(u8 *)((u8 *)arg0 + 0x99) + var_s1) * 4)), 0);
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < (s32) *(u8 *)((u8 *)arg0 + 0x97));
    }
    *(s32 *)((u8 *)arg0 + 0x78) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14)) + 0xC), 0);
    *(s32 *)((u8 *)arg0 + 0x7C) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0xE4), 0);
    *(s32 *)((u8 *)arg0 + 0x88) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C)) + 0x140), 0);
}
