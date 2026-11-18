/* Draft (not built): func_001FA360 at 0x001FA360, size 0x5C, segment battle/btb_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 6 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x58, original 0x5C
 * Original: asm/nonmatchings/battle/btb_main/func_001FA360.s */

// src/battle/btb_main.c func_001FA360 size diff=6/22
extern s32 D_0044AE64;
s32 *func_001FA360(s32 arg0) {
    memset(&D_00470630, 0, 4);
    D_00470630 = *(&D_0044AE64 + (arg0 * 0x5C));
    return &D_00470630;
}
