/* Draft (not built): func_00289380 at 0x00289380, size 0x68, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_GetInfo(s32, M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00288870(M2C_UNK);                     /* extern */
extern s32 D_0047084C;
extern M2C_UNK *D_00470894;
extern M2C_UNK func_00289210;
extern M2C_UNK func_0028DDF0;

void func_00289380(void *arg0) {
    M2C_UNK *var_v1;

    if (amMc_GetInfo(D_0047084C, 0, 0) == 0) {
        func_00288870(0x20);
        var_v1 = &func_0028DDF0;
        if (&func_0028DDF0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
        D_00470894 = &func_00289210;
    }
}
