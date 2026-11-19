/* Draft (not built): func_0028A300 at 0x0028A300, size 0x180, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 55 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x178, original 0x180
 * Original: asm/nonmatchings/sys/mc_opr/func_0028A300.s */

// src/sys/mc_opr.c func_0028A300 size diff=55/94
extern s32 D_00470894;
s32 amMc_GetDir(s32, s32, s32 *, s32 *);
extern s32 D_0046B9A0;
extern s32 D_0047084C;
extern s32 D_005AA3C0;
extern s32 gMcInfo;
extern s32 gMcResult;
extern s32 gMcState;
extern void func_0028DDF0(void);
extern void func_00289E80(void);
extern void func_0028A0A0(void);
void func_0028A300(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;

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
        goto block_24;
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
    goto block_24;
block_12:
    if (*(&gMcInfo + 4 + (D_0047084C << 6)) == 0) {
        goto block_21;
    }
    if (amMc_GetDir(D_0047084C, 0, &D_0046B9A0, &D_005AA3C0) == 0) {
        goto block_17;
    }
    func_00288870(4);
    var_v1 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_16;
    }
    var_v1 = NULL;
block_16:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    D_00470894 = (int)(&func_00289E80);
    return;
block_17:
    var_v1_2 = (int *)(&func_0028A0A0);
    if (&func_0028A0A0 != NULL) {
        goto block_19;
    }
    var_v1_2 = NULL;
block_19:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    return;
block_21:
    func_00288870(0x19, &D_0046B9A0);
    var_v1_3 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_23;
    }
    var_v1_3 = NULL;
block_23:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
    D_00470894 = (int)(&func_00289E80);
    return;
block_24:
    func_00288870(4);
    var_v1_4 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_26;
    }
    var_v1_4 = NULL;
block_26:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_4;
    D_00470894 = (int)(&func_00289E80);
    return;
}
