/* Draft (not built): func_002CE630 at 0x002CE630, size 0x58, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 17 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3C, original 0x58
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CE630.s */

// src/unk/unk_2CD5F0.c func_002CE630 size diff=17/15
void func_002CE630(f32 fparg0, f32 fparg1) {
    s32 sp18;
    f32 sp10;

    gBtbBg[0] = 0;
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00200270(fparg0 - sp10, fparg1 - sp18);
    gBtbBg[0] = 1;
}
