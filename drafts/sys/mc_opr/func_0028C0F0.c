/* Draft (not built): func_0028C0F0 at 0x0028C0F0, size 0x160, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 55 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x150, original 0x160
 * Original: asm/nonmatchings/sys/mc_opr/func_0028C0F0.s */

// src/sys/mc_opr.c func_0028C0F0 size diff=55/84
extern s32 D_00470048;
s32 amMc_GetDir(s32, s32, s32 *, s32 *);
s32 amMc_Save(s32, s32, s32 *, s32);
extern s32 D_0046B8F0;
extern s32 D_0046BA10;
extern s32 D_0047084C;
extern s32 D_00470860;
extern s32 D_00470870;
extern s32 D_00470898;
extern s32 D_005AA3C0;
extern s32 gMcState;
extern void func_0028BDB0(void);
extern void func_0028AE60(void);
extern void func_0028AD20(void);
extern void func_0028BEB0(void);
void func_0028C0F0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;

    if (gMcState == 3) {
        goto block_3;
    }
    if (gMcState == 2) {
        goto block_7;
    }
    goto block_6;
block_3:
    var_v1 = (int *)(&func_0028BDB0);
    if (&func_0028BDB0 != NULL) {
        goto block_5;
    }
    var_v1 = NULL;
block_5:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    D_00470898 = 0;
    return;
block_6:
    return;
block_7:
    if (D_00470048 != 0) {
        goto block_18;
    }
    D_00470860 = 0;
    func_00288870(0x11);
    if (amMc_GetDir(D_0047084C, 0, &D_0046BA10, &D_005AA3C0) != 0) {
        goto block_13;
    }
    var_v1_2 = (int *)(&func_0028AE60);
    if (&func_0028AE60 != NULL) {
        goto block_11;
    }
    var_v1_2 = NULL;
block_11:
    goto block_24;
block_13:
    if (amMc_GetDir(D_0047084C, 0, &D_0046BA10, &D_005AA3C0) != 0) {
        goto block_17;
    }
    var_v1_2 = (int *)(&func_0028AD20);
    if (&func_0028AD20 != NULL) {
        goto block_16;
    }
    var_v1_2 = NULL;
block_16:
    goto block_24;
block_17:
    return;
block_18:
    if (amMc_Save(D_0047084C, 0, &D_0046B8F0, D_00470870) == 0) {
        goto block_22;
    }
    var_v1_3 = (int *)(&func_0028BDB0);
    if (&func_0028BDB0 != NULL) {
        goto block_21;
    }
    var_v1_3 = NULL;
block_21:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
    D_00470898 = 0;
    return;
block_22:
    var_v1_2 = (int *)(&func_0028BEB0);
    if (&func_0028BEB0 != NULL) {
        goto block_24;
    }
    var_v1_2 = NULL;
block_24:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    return;
}
