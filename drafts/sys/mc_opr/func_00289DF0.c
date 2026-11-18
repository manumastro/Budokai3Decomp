/* Draft (not built): func_00289DF0 at 0x00289DF0, size 0x88, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_GetInfo(s32, M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK D_00470838;
extern s32 D_0047084C;
extern M2C_UNK func_00289BE0;

void func_00289DF0(void *arg0) {
    M2C_UNK *var_v1;

    if (*(&D_00470838 + (D_0047084C * 4)) & 0x8000) {
        D_0047084C ^= 1;
        return;
    }
    if (amMc_GetInfo(D_0047084C, 0, 0) != 0) {
        D_0047084C ^= 1;
        return;
    }
    var_v1 = &func_00289BE0;
    if (&func_00289BE0 == NULL) {
        var_v1 = NULL;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
}
