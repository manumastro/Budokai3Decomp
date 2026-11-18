/* Draft (not built): func_0028A300 at 0x0028A300, size 0x180, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_GetDir(s32, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00288870(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK D_0046B9A0;
extern s32 D_0047084C;
extern M2C_UNK *D_00470894;
extern M2C_UNK D_005AA3C0;
extern M2C_UNK func_00289E80;
extern M2C_UNK func_0028A0A0;
extern M2C_UNK func_0028DDF0;
extern M2C_UNK gMcInfo;
extern s32 gMcResult;
extern s32 gMcState;

void func_0028A300(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    M2C_UNK *var_v1_4;

    switch (gMcState) {                             /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        gMcResult = -5;
        /* fallthrough */
    case 2:                                         /* switch 1 */
        switch (gMcResult) {                        /* switch 2; irregular */
        case -2:                                    /* switch 2 */
        case -1:                                    /* switch 2 */
        case 0:                                     /* switch 2 */
            if (*(&gMcInfo + 4 + (D_0047084C << 6)) != 0) {
                if (amMc_GetDir(D_0047084C, 0, &D_0046B9A0, &D_005AA3C0) != 0) {
                    func_00288870(4);
                    var_v1 = &func_0028DDF0;
                    if (&func_0028DDF0 == NULL) {
                        var_v1 = NULL;
                    }
                    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
                    D_00470894 = &func_00289E80;
                    return;
                }
                var_v1_2 = &func_0028A0A0;
                if (&func_0028A0A0 == NULL) {
                    var_v1_2 = NULL;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
                return;
            }
            func_00288870(0x19, &D_0046B9A0);
            var_v1_3 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1_3 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
            D_00470894 = &func_00289E80;
            return;
        default:                                    /* switch 2 */
        case -5:                                    /* switch 2 */
            func_00288870(4);
            var_v1_4 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1_4 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_4;
            D_00470894 = &func_00289E80;
            return;
        }
        break;
    }
}
