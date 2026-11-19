/* Draft (not built): func_00289210 at 0x00289210, size 0x170, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x160, original 0x170
 * Original: asm/nonmatchings/sys/mc_opr/func_00289210.s */

// src/sys/mc_opr.c func_00289210 size diff=52/88
extern s32 D_00470894;
extern s32 D_00470838;
s32 amMc_CheckFile(s32, s32, s32 *, s32 *);
extern s32 D_0046B9A0;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_005AA3C0;
extern s32 gMcResult;
extern s32 gMcState;
extern void func_00288E70(void);
extern void func_0028DDF0(void);
extern void func_00288BF0(void);
extern void func_00289380(void);
void func_00289210(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;

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
        goto block_18;
    }
    if (gMcResult == -2) {
        goto block_14;
    }
    if (gMcResult == -1) {
        goto block_14;
    }
    if (gMcResult == 0) {
        goto block_12;
    }
    goto block_18;
block_12:
    if ((&D_00470838)[D_0047084C] != 0) {
        goto block_21;
    }
block_14:
    if (amMc_CheckFile(D_0047084C, 0, &D_0046B9A0, &D_005AA3C0) != 0) {
        goto block_21;
    }
    var_v1 = (int *)(&func_00288E70);
    (&D_00470838)[D_0047084C] = 2;
    if (&func_00288E70 != NULL) {
        goto block_17;
    }
    var_v1 = NULL;
block_17:
    goto block_23;
block_18:
    (&D_00470838)[D_0047084C] = 1;
    func_00288870(5, 1);
    var_v1_2 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_20;
    }
    var_v1_2 = NULL;
block_20:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    D_00470894 = (s32) &func_00288BF0;
    D_00470854 = 1;
    return;
block_21:
    var_v1 = (int *)(&func_00289380);
    if (&func_00289380 != NULL) {
        goto block_23;
    }
    var_v1 = NULL;
block_23:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    return;
}
