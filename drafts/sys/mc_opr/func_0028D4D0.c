/* Draft (not built): func_0028D4D0 at 0x0028D4D0, size 0x338, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_Format(s32, M2C_UNK, M2C_UNK *);           /* extern */
s32 amMc_GetDir(s32, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00288870(M2C_UNK, s32, M2C_UNK *);     /* extern */
extern M2C_UNK D_0046B9A0;
extern s32 D_00470048;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_00470864;
extern s32 D_00470868;
extern M2C_UNK *D_00470894;
extern M2C_UNK D_005AA3C0;
extern M2C_UNK func_0028C580;
extern M2C_UNK func_0028C740;
extern M2C_UNK func_0028CE10;
extern M2C_UNK func_0028CEF0;
extern M2C_UNK func_0028D1E0;
extern M2C_UNK func_0028DDF0;
extern M2C_UNK gMcInfo;
extern s32 gMcResult;
extern s32 gMcState;

void func_0028D4D0(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    M2C_UNK *var_v1_4;
    M2C_UNK *var_v1_5;
    M2C_UNK *var_v1_6;
    M2C_UNK *var_v1_7;
    M2C_UNK *var_v1_8;

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
                if (amMc_GetDir(D_0047084C, 0, &D_0046B9A0, &D_005AA3C0) == 0) {
                    var_v1 = &func_0028C740;
                    if (&func_0028C740 == NULL) {
                        var_v1 = NULL;
                    }
                    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
                } else {
                    goto block_50;
                }
            } else {
                switch (D_00470048) {               /* switch 3; irregular */
                case 2:                             /* switch 3 */
                case 0:                             /* switch 3 */
                    if (D_00470864 != 0) {
                        if (amMc_Format(D_0047084C, 0, &D_0046B9A0) == 0) {
                            func_00288870(0xC);
                            var_v1_2 = &func_0028CE10;
                            if (&func_0028CE10 == NULL) {
                                var_v1_2 = NULL;
                            }
                            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
                        } else {
                        default:                    /* switch 2 */
                        case -5:                    /* switch 2 */
block_50:
                            if ((D_00470048 != 0xA) && (D_00470048 != 9) && (D_00470048 != 8) && (D_00470048 != 5) && (D_00470048 != 4) && (D_00470048 != 2) && (D_00470048 != 0)) {
                                return;
                            }
                            func_00288870(4);
                            var_v1_3 = &func_0028DDF0;
                            if (&func_0028DDF0 == NULL) {
                                var_v1_3 = NULL;
                            }
                            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
                            D_00470858 = 3;
                            D_00470894 = &func_0028C580;
                            return;
                        }
                    } else {
                        func_00288870(6, 0, &D_0046B9A0);
                        var_v1_4 = &func_0028DDF0;
                        if (&func_0028DDF0 == NULL) {
                            var_v1_4 = NULL;
                        }
                        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_4;
                        D_00470894 = &func_0028CEF0;
                        D_00470854 = 1;
                        return;
                    }
                    break;
                case 4:                             /* switch 3 */
                case 5:                             /* switch 3 */
                    if (D_00470864 != 0) {
                        if (amMc_Format(D_0047084C, 0, &D_0046B9A0) == 0) {
                            func_00288870(0xC);
                            var_v1_5 = &func_0028CE10;
                            if (&func_0028CE10 == NULL) {
                                var_v1_5 = NULL;
                            }
                            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_5;
                        } else {
                            goto block_50;
                        }
                    } else if (D_00470868 != 0) {
                        func_00288870(6, 0, &D_0046B9A0);
                        var_v1_6 = &func_0028DDF0;
                        if (&func_0028DDF0 == NULL) {
                            var_v1_6 = NULL;
                        }
                        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_6;
                        D_00470894 = &func_0028CEF0;
                        D_00470854 = 1;
                    } else {
                        func_00288870(0x17, 0, &D_0046B9A0);
                        var_v1_7 = &func_0028DDF0;
                        if (&func_0028DDF0 == NULL) {
                            var_v1_7 = NULL;
                        }
                        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_7;
                        D_00470894 = &func_0028D1E0;
                        D_00470854 = 1;
                    }
                    break;
                case 10:                            /* switch 3 */
                case 9:                             /* switch 3 */
                case 8:                             /* switch 3 */
                    func_00288870(0x19, D_00470048, &D_0046B9A0);
                    var_v1_8 = &func_0028DDF0;
                    if (&func_0028DDF0 == NULL) {
                        var_v1_8 = NULL;
                    }
                    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_8;
                    D_00470858 = 3;
                    D_00470894 = &func_0028C580;
                    break;
                }
            }
            break;
        }
        break;
    }
}
