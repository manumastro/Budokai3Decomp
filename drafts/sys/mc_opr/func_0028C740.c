/* Draft (not built): func_0028C740 at 0x0028C740, size 0x598, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_GetDir(s32, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 amMc_Load(s32, M2C_UNK, M2C_UNK *, M2C_UNK);    /* extern */
s32 amMc_Save(s32, M2C_UNK, M2C_UNK *, s32);        /* extern */
M2C_UNK func_00288870(M2C_UNK, s32, M2C_UNK *, void *); /* extern */
M2C_UNK func_002889C0(void *, M2C_UNK *, s32);      /* extern */
void *func_00288AF0(M2C_UNK *, s32, M2C_UNK);       /* extern */
extern M2C_UNK D_0046B8F0;
extern M2C_UNK D_0046B9E0;
extern M2C_UNK D_0046BA10;
extern s32 D_00470048;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_00470868;
extern s32 D_00470870;
extern M2C_UNK *D_00470894;
extern s32 D_00470898;
extern M2C_UNK D_005AA380;
extern M2C_UNK D_005AA388;
extern s32 D_005AA390;
extern u16 D_005AA394;
extern u16 D_005AA396;
extern s32 D_005AA398;
extern s32 D_005AA39C;
extern M2C_UNK D_005AA3A0;
extern M2C_UNK D_005AA3C0;
extern M2C_UNK func_0028AD20;
extern M2C_UNK func_0028AE60;
extern M2C_UNK func_0028B9B0;
extern M2C_UNK func_0028BDB0;
extern M2C_UNK func_0028BEB0;
extern M2C_UNK func_0028C580;
extern M2C_UNK func_0028C730;
extern M2C_UNK func_0028D1E0;
extern M2C_UNK func_0028DDF0;
extern s32 gMcResult;
extern s32 gMcState;

void func_0028C740(void *arg0) {
    M2C_UNK *var_a2;
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_10;
    M2C_UNK *var_v1_11;
    M2C_UNK *var_v1_12;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    M2C_UNK *var_v1_4;
    M2C_UNK *var_v1_5;
    M2C_UNK *var_v1_6;
    M2C_UNK *var_v1_7;
    M2C_UNK *var_v1_8;
    M2C_UNK *var_v1_9;
    s32 var_a1;
    s8 temp_v1;
    void *temp_v0;
    void *var_a3;

    if ((gMcState != 3) && (gMcState != 2)) {
        return;
    }
    temp_v0 = func_00288AF0(&D_005AA3C0, gMcResult, 0);
    if (temp_v0 != NULL) {
        var_a3 = temp_v0 + 0x20;
        var_a2 = &D_005AA3A0;
        var_a1 = 0x10;
        M2C_FIELD(&D_005AA380, s16 *, 0) = (s16) M2C_FIELD(temp_v0, s16 *, 0);
        M2C_FIELD(&D_005AA380, s16 *, 2) = (s16) M2C_FIELD(temp_v0, s16 *, 2);
        M2C_FIELD(&D_005AA380, s16 *, 4) = (s16) M2C_FIELD(temp_v0, s16 *, 4);
        M2C_FIELD(&D_005AA380, s16 *, 6) = (s16) M2C_FIELD(temp_v0, s16 *, 6);
        M2C_FIELD(&D_005AA388, s16 *, 0) = (s16) M2C_FIELD(temp_v0, s16 *, 8);
        M2C_FIELD(&D_005AA388, s16 *, 2) = (s16) M2C_FIELD(temp_v0, s16 *, 0xA);
        M2C_FIELD(&D_005AA388, s16 *, 4) = (s16) M2C_FIELD(temp_v0, s16 *, 0xC);
        M2C_FIELD(&D_005AA388, s16 *, 6) = (s16) M2C_FIELD(temp_v0, s16 *, 0xE);
        D_005AA390 = M2C_FIELD(temp_v0, s32 *, 0x10);
        D_005AA394 = M2C_FIELD(temp_v0, u16 *, 0x14);
        D_005AA396 = M2C_FIELD(temp_v0, u16 *, 0x16);
        D_005AA398 = M2C_FIELD(temp_v0, s32 *, 0x18);
        D_005AA39C = M2C_FIELD(temp_v0, s32 *, 0x1C);
        do {
            var_a1 -= 1;
            temp_v1 = M2C_FIELD(var_a3, s8 *, 1);
            M2C_FIELD(var_a2, s8 *, 0) = (s8) M2C_FIELD(var_a3, s8 *, 0);
            var_a3 += 2;
            M2C_FIELD(var_a2, s8 *, 1) = temp_v1;
            var_a2 += 2;
        } while (var_a1 > 0);
        switch (D_00470048) {                       /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            if (D_00470868 == 0) {
                func_00288870(0x14, var_a1, var_a2, var_a3);
                var_v1 = &func_0028DDF0;
                if (&func_0028DDF0 == NULL) {
                    var_v1 = NULL;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
                D_00470894 = &func_0028D1E0;
                D_00470854 = 1;
            } else {
block_60:
                switch (D_00470048) {               /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    func_00288870(0x11);
                    if (amMc_GetDir(D_0047084C, 0, &D_0046BA10, &D_005AA3C0) == 0) {
                        var_v1_2 = &func_0028AE60;
                        if (&func_0028AE60 == NULL) {
                            var_v1_2 = NULL;
                        }
                        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
                        return;
                    }
                    if (amMc_GetDir(D_0047084C, 0, &D_0046B9E0, &D_005AA3C0) == 0) {
                        var_v1_3 = &func_0028AD20;
                        if (&func_0028AD20 == NULL) {
                            var_v1_3 = NULL;
                        }
                        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
                        return;
                    }
                default:                            /* switch 2 */
                case 5:                             /* switch 2 */
                case 4:                             /* switch 2 */
                case 2:                             /* switch 2 */
                    if (amMc_Save(D_0047084C, 0, &D_0046B8F0, D_00470870) != 0) {
                        var_v1_4 = &func_0028BDB0;
                        if (&func_0028BDB0 == NULL) {
                            var_v1_4 = NULL;
                        }
                        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_4;
                        D_00470898 = 0;
                    } else {
                        func_00288870(0x11);
                        var_v1_5 = &func_0028DDF0;
                        if (&func_0028DDF0 == NULL) {
                            var_v1_5 = NULL;
                        }
                        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_5;
                        D_00470894 = &func_0028BEB0;
                    }
                    return;
                }
            }
            break;
        case 5:                                     /* switch 1 */
        case 4:                                     /* switch 1 */
        case 2:                                     /* switch 1 */
            if (amMc_Load(D_0047084C, 0, &D_0046B8F0, 0) != 0) {
                if (D_00470868 == 0) {
                    func_00288870(0x18);
                    var_v1_6 = &func_0028DDF0;
                    if (&func_0028DDF0 == NULL) {
                        var_v1_6 = NULL;
                    }
                    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_6;
                    D_00470858 = 3;
                    D_00470894 = &func_0028C730;
                    D_00470854 = 1;
                } else {
                    goto block_60;
                }
            } else {
                var_v1_7 = &func_0028B9B0;
                if (&func_0028B9B0 == NULL) {
                    var_v1_7 = NULL;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_7;
            }
            break;
        case 10:                                    /* switch 1 */
        case 9:                                     /* switch 1 */
        case 8:                                     /* switch 1 */
            if (amMc_Load(D_0047084C, 0, &D_0046B8F0, 0) != 0) {
                func_00288870(0x2B);
                var_v1_8 = &func_0028DDF0;
                if (&func_0028DDF0 == NULL) {
                    var_v1_8 = NULL;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_8;
                D_00470894 = &func_0028C580;
            } else {
                var_v1_9 = &func_0028B9B0;
                if (&func_0028B9B0 == NULL) {
                    var_v1_9 = NULL;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_9;
            }
            break;
        }
    } else if ((gMcResult != 0) && (gMcResult != -6) && (gMcResult != -5) && (gMcResult != -4) && (gMcResult != -2)) {
        if (gMcResult >= -0xA) {
            if (D_00470868 != 0) {
                func_002889C0(arg0, &D_005AA3C0, gMcResult);
            } else {
                func_00288870(0x16);
                var_v1_10 = &func_0028DDF0;
                if (&func_0028DDF0 == NULL) {
                    var_v1_10 = NULL;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_10;
                D_00470854 = 1;
                D_00470894 = &func_0028D1E0;
            }
        } else {
            func_00288870(4);
            var_v1_11 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1_11 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_11;
            D_00470858 = 3;
            D_00470894 = &func_0028C580;
        }
    } else if ((D_00470048 != 0xA) && (D_00470048 != 9) && (D_00470048 != 8)) {
        func_002889C0(arg0, &D_005AA3C0, gMcResult);
    } else {
        func_00288870(7);
        var_v1_12 = &func_0028DDF0;
        if (&func_0028DDF0 == NULL) {
            var_v1_12 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_12;
        D_00470894 = &func_0028C580;
    }
}
