/* Draft (not built): func_0027E040 at 0x0027E040, size 0x2C, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK CsSubArena_Init();                          /* extern */
M2C_UNK CsSubStat_Init();                           /* extern */
M2C_UNK DataErase_Clear();                          /* extern */
extern s32 D_00470810;

void func_0027E040(void) {
    D_00470810 = 0;
    CsSubStat_Init();
    CsSubArena_Init();
    DataErase_Clear();
}
