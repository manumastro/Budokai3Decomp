/* Draft (not built): func_002BAFA0 at 0x002BAFA0, size 0x154, segment unk/unk_2B98D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 57 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2B98D0/func_002BAFA0.s */

// src/unk/unk_2B98D0.c func_002BAFA0 diff diff=57/85
void func_002BAFA0(void) {
    f32 sp80;
    f32 sp84;
    s32 sp88;
    s32 sp8C;
    f32 *var_s6;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;
    s8 *temp_v1;
    u8 *temp_a0;
    u8 *temp_v1_2;

    temp_a0 = *(u8 **)((u8 *)gStrStatus + 0x158);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x600000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x600000);
    D_00470238 = 0;
    var_s4 = *(s32 *)((u8 *)gStrStatus + 0x1BC);
    func_0022C060(var_s4, 0x3F800000);
    sp88 = 0;
    sp8C = 0x3F800000;
    var_s3 = 0;
    var_s1 = 0;
    var_s5 = 0;
    var_s6 = &sp84;
    do {
        temp_v1 = (s8 *)(&gStrStatus[var_s1]);
        var_s2 = *(s32 *)((u8 *)temp_v1 + 0x2B8);
        var_s0 = var_s2 * 4;
        if (var_s2 < *(s32 *)((u8 *)temp_v1 + 0x29C)) {
            do {
                temp_v1_2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)gStrStatus + 0x14C)) + 0x1C) + var_s0) + 0xB0)) + 4)) + 0x1C);
                sp80 = *(f32 *)((u8 *)temp_v1_2 + 0);
                *var_s6 = *(f32 *)((u8 *)temp_v1_2 + 4) + *(f32 *)((u8 *)(&gStrStatus[var_s5]) + 0x394);
                func_00228430(0);
                func_00227A30((u8 *)(&sp80));
                func_0022C060(var_s4, 0);
                func_0022C560(var_s4);
                func_00228410();
                var_s2 += 1;
                var_s0 += 4;
            } while (var_s2 < *(s32 *)((u8 *)(&gStrStatus[var_s1]) + 0x29C));
        }
        var_s3 += 1;
        var_s1 += 4;
        var_s5 += 0x10;
    } while (var_s3 < 7);
}
