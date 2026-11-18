/* Draft (not built): func_002CE630 at 0x002CE630, size 0x58, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); egal operands 'int[]' = 'int' mwccps2.exe Compiler: 490: func_00200270(fparg0 - sp10, fparg1 - sp18); @ 486: gBtbBg = 0;
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CE630.s */

// src/unk/unk_2CD5F0.c func_002CE630 cerr diff=-1/0
void func_002CE630(f32 fparg0, f32 fparg1) {
    f32 sp10;

    gBtbBg = 0;
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    func_00200270(fparg0 - sp10, fparg1 - sp18);
    gBtbBg = 1;
}
