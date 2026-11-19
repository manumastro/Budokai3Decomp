/* Draft (not built): func_0028B270 at 0x0028B270, size 0x110, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 29 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x108, original 0x110
 * Original: asm/nonmatchings/sys/mc_opr/func_0028B270.s */

// src/sys/mc_opr.c func_0028B270 size diff=29/66
extern s32 D_00470894;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_00470860;
extern s32 gMcResult;
extern s32 gMcState;
extern void func_0028DDF0(void);
extern void func_0028AFB0(void);
extern void func_0028C580(void);
void func_0028B270(u8 *arg0) {
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
    D_00470860 = 0;
    if (gMcResult == -5) {
        goto block_16;
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
    goto block_16;
block_12:
    func_00288870(D_0047084C + 0xB);
    var_v1 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_14;
    }
    var_v1 = NULL;
block_14:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    D_00470894 = (int)(&func_0028AFB0);
    D_00470854 = 1;
    return;
block_16:
    func_00288870(4);
    var_v1_2 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_18;
    }
    var_v1_2 = NULL;
block_18:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    D_00470858 = 3;
    D_00470894 = (int)(&func_0028C580);
    D_00470854 = 1;
    return;
}
