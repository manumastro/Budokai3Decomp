/* Draft (not built): func_001E4E20 at 0x001E4E20, size 0x11C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); E11E0(arg0, &sp30); @ 3696: var_f1 = temp_f3 + (*(f32 *)((u8 *)gBattle + 0x88F0) * (0.05f * ((1.0f - sp4C) - temp_f3)));
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E4E20.s */

// src/unk/unk_1D5B30.c func_001E4E20 cerr diff=-1/0
void func_001E4E20(u8 *arg0, s32 arg1) {
    f32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    u8 *sp40;
    s32 sp44;
    s16 sp48;
    f32 temp_f3;
    f32 var_f1;
    s32 temp_v0;
    u8 **var_a0;

    sp44 = 0;
    sp40 = arg0;
    sp48 = -1;
    if (arg1 != 0) {
        var_a0 = &sp40;
    } else {
        var_a0 = NULL;
    }
    *(f32 *)((u8 *)arg0 + 0x1844) = func_00200270(var_a0, *(f32 *)((u8 *)arg0 + 0x650), *(f32 *)((u8 *)arg0 + 0x658));
    if (arg1 != 0) {
        temp_v0 = func_002376B0(*(s32 *)((u8 *)arg0 + 0xB7C));
        temp_f3 = *(f32 *)((u8 *)arg0 + 0x1890);
        var_f1 = temp_f3 + (*(f32 *)((u8 *)gBattle + 0x88F0) * (0.05f * ((1.0f - sp4C) - temp_f3)));
        *(f32 *)((u8 *)arg0 + 0x1890) = var_f1;
        if (!(var_f1 <= 1.0f)) {
            var_f1 = 1.0f;
        } else if (var_f1 < 0.0f) {
            var_f1 = 0.0f;
        }
        *(f32 *)((u8 *)arg0 + 0x1890) = var_f1;
        if ((temp_v0 != 3) && (temp_v0 != 4)) {
            sp30 = *(f32 *)((u8 *)arg0 + 0x1890);
            sp34 = 0x5000;
            sp38 = 0;
            sp3C = 0;
            func_001E11E0(arg0, &sp30);
        }
    }
}
