/* Draft (not built): func_00288870 at 0x00288870, size 0x148, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

extern f32 D_00470884;
extern s32 D_00470888;
extern void *D_00470890;
extern M2C_UNK D_005AA540;
extern M2C_UNK func_0028D810;
extern M2C_UNK func_0028DE30;
extern M2C_UNK func_0028DEA0;

void func_00288870(s32 arg0) {
    M2C_UNK *var_v1;

    D_00470888 = arg0;
    switch (arg0) {                                 /* irregular */
    case 24:
    case 23:
    case 22:
    case 20:
    case 28:
    case 19:
    case 14:
    case 9:
        M2C_FIELD(&D_005AA540, s32 *, 0) = 0x3F400000;
        M2C_FIELD(&D_005AA540, s32 *, 4) = 0x3E800000;
        M2C_FIELD(&D_005AA540, s32 *, 8) = 0x3E800000;
        M2C_FIELD(&D_005AA540, s32 *, 0xC) = 0x3F000000;
        break;
    default:
        M2C_FIELD(&D_005AA540, s32 *, 0) = 0;
        M2C_FIELD(&D_005AA540, s32 *, 4) = 0x3F400000;
        M2C_FIELD(&D_005AA540, s32 *, 8) = 0x3E800000;
        M2C_FIELD(&D_005AA540, s32 *, 0xC) = 0x3F000000;
        break;
    }
    if (arg0 < 0) {
        var_v1 = &func_0028DE30;
        if (&func_0028DE30 == NULL) {
            var_v1 = NULL;
        }
    } else if (D_00470884 == 1.0f) {
        var_v1 = &func_0028D810;
        if (&func_0028D810 == NULL) {
            var_v1 = NULL;
        }
    } else {
        var_v1 = &func_0028DEA0;
        if (&func_0028DEA0 == NULL) {
            var_v1 = NULL;
        }
    }
    M2C_FIELD(D_00470890, M2C_UNK **, 0x1C) = var_v1;
}
