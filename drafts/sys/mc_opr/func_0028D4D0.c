/* Draft (not built): func_0028D4D0 at 0x0028D4D0, size 0x338, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 158 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/mc_opr/func_0028D4D0.s */

// src/sys/mc_opr.c func_0028D4D0 diff diff=158/206
extern s32 D_00470894;
extern s32 D_00470048;
s32 amMc_Format(s32, s32, s32 *);
s32 amMc_GetDir(s32, s32, s32 *, s32 *);
extern s32 D_0046B9A0;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_00470864;
extern s32 D_00470868;
extern s32 D_005AA3C0;
extern s32 gMcInfo;
extern s32 gMcResult;
extern s32 gMcState;
extern void func_0028C740(void);
extern void func_0028CE10(void);
extern void func_0028DDF0(void);
extern void func_0028CEF0(void);
extern void func_0028D1E0(void);
extern void func_0028C580(void);
void func_0028D4D0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    s32 *var_v1_5;
    s32 *var_v1_6;
    s32 *var_v1_7;
    s32 *var_v1_8;

    if (gMcState == 3) {
        goto block_3;
    }
    if (gMcState == 2) {
        goto block_6;
    }
    goto block_5;
block_3:
    gMcResult = -5;
    goto block_6;
block_5:
    return;
block_6:
    if (gMcResult == -5) {
        goto block_50;
    }
    if (gMcResult == -2) {
        goto block_12;
    }
    if (gMcResult == -1) {
        goto block_12;
    }
    if (gMcResult == 0) {
        goto block_12;
    }
    goto block_50;
block_12:
    if (*(&gMcInfo + 4 + (D_0047084C << 6)) == 0) {
        goto block_17;
    }
    if (amMc_GetDir(D_0047084C, 0, &D_0046B9A0, &D_005AA3C0) != 0) {
        goto block_50;
    }
    var_v1 = (int *)(&func_0028C740);
    if (&func_0028C740 != NULL) {
        goto block_16;
    }
    var_v1 = NULL;
block_16:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    goto block_49;
block_17:
    if (D_00470048 == 0xA) {
        goto block_46;
    }
    if (D_00470048 == 9) {
        goto block_46;
    }
    if (D_00470048 == 8) {
        goto block_46;
    }
    if (D_00470048 == 4) {
        goto block_33;
    }
    if (D_00470048 == 5) {
        goto block_33;
    }
    if (D_00470048 == 2) {
        goto block_25;
    }
    if (D_00470048 == 0) {
        goto block_25;
    }
    goto block_50;
block_25:
    if (D_00470864 == 0) {
        goto block_30;
    }
    if (amMc_Format(D_0047084C, 0, &D_0046B9A0) != 0) {
        goto block_50;
    }
    func_00288870(0xC);
    var_v1_2 = (int *)(&func_0028CE10);
    if (&func_0028CE10 != NULL) {
        goto block_29;
    }
    var_v1_2 = NULL;
block_29:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    goto block_49;
block_30:
    func_00288870(6, 0, &D_0046B9A0);
    var_v1_3 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_32;
    }
    var_v1_3 = NULL;
block_32:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
    D_00470894 = (int)(&func_0028CEF0);
    D_00470854 = 1;
    goto block_49;
block_33:
    if (D_00470864 == 0) {
        goto block_38;
    }
    if (amMc_Format(D_0047084C, 0, &D_0046B9A0) != 0) {
        goto block_50;
    }
    func_00288870(0xC);
    var_v1_4 = (int *)(&func_0028CE10);
    if (&func_0028CE10 != NULL) {
        goto block_37;
    }
    var_v1_4 = NULL;
block_37:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
    goto block_49;
block_38:
    if (D_00470868 == 0) {
        goto block_43;
    }
    func_00288870(6, 0, &D_0046B9A0);
    var_v1_5 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_41;
    }
    var_v1_5 = NULL;
block_41:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_5;
    D_00470894 = (int)(&func_0028CEF0);
    D_00470854 = 1;
    goto block_49;
block_43:
    func_00288870(0x17, 0, &D_0046B9A0);
    var_v1_6 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_45;
    }
    var_v1_6 = NULL;
block_45:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_6;
    D_00470894 = (int)(&func_0028D1E0);
    D_00470854 = 1;
    goto block_49;
block_46:
    func_00288870(0x19, D_00470048, &D_0046B9A0);
    var_v1_7 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_48;
    }
    var_v1_7 = NULL;
block_48:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_7;
    D_00470858 = 3;
    D_00470894 = (int)(&func_0028C580);
block_49:
    return;
block_50:
    if (D_00470048 == 0xA) {
        goto block_58;
    }
    if (D_00470048 == 9) {
        goto block_58;
    }
    if (D_00470048 == 8) {
        goto block_58;
    }
    if (D_00470048 == 5) {
        goto block_58;
    }
    if (D_00470048 == 4) {
        goto block_58;
    }
    if (D_00470048 == 2) {
        goto block_58;
    }
    if (D_00470048 == 0) {
        goto block_58;
    }
    return;
block_58:
    func_00288870(4);
    var_v1_8 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_60;
    }
    var_v1_8 = NULL;
block_60:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_8;
    D_00470858 = 3;
    D_00470894 = (int)(&func_0028C580);
    return;
}
