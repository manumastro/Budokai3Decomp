/* Draft (not built): func_00280470 at 0x00280470, size 0x30, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK func_0027D820(M2C_UNK);                     /* extern */
M2C_UNK func_0027E040();                            /* extern */
extern s32 D_00470030;
extern s32 D_00470034;
extern s32 gVsCharasel;

void func_00280470(void) {
    func_0027D820(1);
    gVsCharasel = 0;
    D_00470030 = -1;
    D_00470034 = -1;
    func_0027E040();
}
