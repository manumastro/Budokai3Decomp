/* Draft (not built): func_0028C310 at 0x0028C310, size 0xD0, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_Save(s32, M2C_UNK, M2C_UNK *, s32);        /* extern */
extern M2C_UNK D_0046B940;
extern s32 D_0047084C;
extern s32 D_00470878;
extern s32 D_00470898;
extern M2C_UNK func_0028BDB0;
extern M2C_UNK func_0028C250;
extern s32 gMcResult;
extern s32 gMcState;

void func_0028C310(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;

    switch (gMcState) {                             /* irregular */
    case 3:
        if (gMcResult < -0xA) {
            var_v1 = &func_0028BDB0;
            if (&func_0028BDB0 == NULL) {
                var_v1 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
            D_00470898 = 0;
            return;
        }
    case 2:
        if (amMc_Save(D_0047084C, 0, &D_0046B940, D_00470878) != 0) {
            var_v1_2 = &func_0028BDB0;
            if (&func_0028BDB0 == NULL) {
                var_v1_2 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
            D_00470898 = 0;
            return;
        }
        var_v1_3 = &func_0028C250;
        if (&func_0028C250 == NULL) {
            var_v1_3 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
        return;
    }
}
