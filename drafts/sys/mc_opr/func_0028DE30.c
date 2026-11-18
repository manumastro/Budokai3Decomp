/* Draft (not built): func_0028DE30 at 0x0028DE30, size 0x64, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK func_00288500();                            /* extern */
extern f32 D_00470884;
extern M2C_UNK func_0028DF10;

void func_0028DE30(void *arg0) {
    M2C_UNK *var_v1;
    f32 temp_f1;

    temp_f1 = D_00470884 - 0.05f;
    D_00470884 = temp_f1;
    if (temp_f1 <= 0.0f) {
        var_v1 = &func_0028DF10;
        D_00470884 = 0.0f;
        if (&func_0028DF10 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
        return;
    }
    func_00288500();
}
