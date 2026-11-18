/* Draft (not built): func_001D90D0 at 0x001D90D0, size 0x150, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); E11E0(arg0, &sp40); @ 1067: var_f1 = temp_f3 + (*(f32 *)((u8 *)gBattle + 0x88F0) * (0.05f * ((1.0f - sp5C) - temp_f3)));
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D90D0.s */

// src/unk/unk_1D5B30.c func_001D90D0 cerr diff=-1/0
void func_001D90D0(u8 *arg0) {
    f32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    u8 *sp50;
    s32 sp54;
    s16 sp58;
    f32 temp_f3;
    f32 var_f1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s2;
    u8 *var_s1;

    sp54 = 0;
    sp58 = -1;
    sp50 = arg0;
    *(f32 *)((u8 *)arg0 + 0x1844) = func_00200270(&sp50, *(f32 *)((u8 *)arg0 + 0x650), *(f32 *)((u8 *)arg0 + 0x658));
    temp_v0 = func_002376B0(*(s32 *)((u8 *)arg0 + 0xB7C));
    temp_f3 = *(f32 *)((u8 *)arg0 + 0x1890);
    var_f1 = temp_f3 + (*(f32 *)((u8 *)gBattle + 0x88F0) * (0.05f * ((1.0f - sp5C) - temp_f3)));
    *(f32 *)((u8 *)arg0 + 0x1890) = var_f1;
    if (!(var_f1 <= 1.0f)) {
        var_f1 = 1.0f;
    } else if (var_f1 < 0.0f) {
        var_f1 = 0.0f;
    }
    *(f32 *)((u8 *)arg0 + 0x1890) = var_f1;
    if ((temp_v0 != 3) && (temp_v0 != 4)) {
        sp40 = *(f32 *)((u8 *)arg0 + 0x1890);
        sp44 = 0x5000;
        sp48 = 0;
        sp4C = 0;
        func_001E11E0(arg0, &sp40);
    }
    *(s8 *)((u8 *)arg0 + 0xCBF) = 0;
    temp_v1 = *(s32 *)((u8 *)arg0 + 0xB2C);
    if (temp_v1 != 0) {
        var_s2 = 0;
        if (temp_v1 > 0) {
            var_s1 = arg0;
            do {
                func_002181A0(*(s32 *)((u8 *)var_s1 + 0xB30), arg0);
                var_s2 += 1;
                var_s1 += 4;
            } while (var_s2 < *(s32 *)((u8 *)arg0 + 0xB2C));
        }
    }
}
