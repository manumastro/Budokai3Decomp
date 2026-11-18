/* Draft (not built): func_0027E000 at 0x0027E000, size 0x38, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

extern void *D_00470810;

s32 func_0027E000(void) {
    s32 var_v0;

    var_v0 = 0;
    if ((M2C_FIELD(M2C_FIELD(D_00470810, void **, 0), s16 *, 4) == 3) && (M2C_FIELD(M2C_FIELD(D_00470810, void **, 4), s16 *, 4) == 3)) {
        var_v0 = 1;
    }
    return var_v0;
}
