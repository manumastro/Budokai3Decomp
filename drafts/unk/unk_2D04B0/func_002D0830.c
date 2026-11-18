/* Draft (not built): func_002D0830 at 0x002D0830, size 0x180, segment unk/unk_2D04B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); x14) + (temp_a0_3 * 4)), 0); @ 106: 0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + (temp_a0_3 * 4)), 0);
 * Original: asm/nonmatchings/unk/unk_2D04B0/func_002D0830.s */

// src/unk/unk_2D04B0.c func_002D0830 cerr diff=-1/0
s32 func_0022D0E0(s32, s32);
s32 func_0022D670(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00456B00;
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
void func_002D0830(u8 *arg0) {
    s32 *sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s16 sp70;
    s16 *var_s0;
    s16 temp_a0_3;
    s32 **var_s1;
    s32 **var_v1;
    s32 temp_a0_2;
    s32 var_s2;
    s32 var_v0;
    u8 *temp_a0;

    var_v0 = 0x1C;
    var_v1 = &sp50;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp50 = (s32 *)(arg0 + 0x10);
    sp54 = (s32)(arg0 + 0xC);
    sp58 = (s32)(arg0 + 8);
    sp5C = (s32)(arg0 + 0x14);
    sp60 = (s32)(arg0 + 0x2C);
    sp64 = (s32)(arg0 + 0x24);
    sp68 = (s32)(arg0 + 0x28);
    *(s64 *)((u8 *)(&sp70) + 0) = (s64) *(s64 *)((u8 *)(&D_00456B00) + 0);
    *(f32 *)((u8 *)(&sp70) + 8) = (f32) *(f32 *)((u8 *)(&D_00456B00) + 8);
    *(s16 *)((u8 *)(&sp70) + 0xC) = (s16) *(s16 *)((u8 *)(&D_00456B00) + 0xC);
    temp_a0 = *(u8 **)((u8 *)arg0 + 4);
    D_00470704 = temp_a0;
    D_0047070C = 0x1000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x1000);
    D_00470238 = 0;
    var_s2 = 0;
    var_s1 = &sp50;
    var_s0 = &sp70;
    do {
        temp_a0_2 = **var_s1;
        if (temp_a0_2 != 0) {
            func_0022D0E0(temp_a0_2, 1);
        }
        temp_a0_3 = *var_s0;
        if (temp_a0_3 != -1) {
            if (var_s2 < 2) {
                **var_s1 = func_0022D670(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x1C) + (temp_a0_3 * 4)), 0);
            } else {
                **var_s1 = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0)) + 0x14) + (temp_a0_3 * 4)), 0);
            }
        } else {
            **var_s1 = 0;
        }
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 2;
    } while (var_s2 < 7);
}
