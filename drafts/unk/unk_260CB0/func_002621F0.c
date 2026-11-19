/* Draft (not built): func_002621F0 at 0x002621F0, size 0x98, segment unk/unk_260CB0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 9 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_260CB0/func_002621F0.s */

// src/unk/unk_260CB0.c func_002621F0 diff diff=9/38
void func_002621F0(f32 fparg0) {
    s8 sp20;
    f32 sp2C;
    s32 temp_s0;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 0x10;
    var_v1 = &sp20;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp2C = fparg0;
    temp_s0 = amGs_SetReg32(0, 0x30000);
    func_00133780(0, 1);
    func_00139620(0x900, (FadeColor *)(&sp20), -1, 0x44, 0, 0);
    amGs_SetReg32(0, temp_s0);
    func_00133780(0, 0);
}
