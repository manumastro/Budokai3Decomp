/* Draft (not built): func_0028CE10 at 0x0028CE10, size 0xD8, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 13 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/mc_opr/func_0028CE10.s */

// src/sys/mc_opr.c func_0028CE10 diff diff=13/54
extern s32 D_00470894;
extern s32 D_00470850;
extern s32 D_00470858;
extern s32 gMcResult;
extern s32 gMcState;
extern void func_0028DDF0(void);
extern void func_0028CCE0(void);
extern void func_0028C580(void);
void func_0028CE10(u8 *arg0) {
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
    if (gMcResult != 0) {
        goto block_11;
    }
    func_00288870(0xD);
    var_v1 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_9;
    }
    var_v1 = NULL;
block_9:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    D_00470850 = 0x3C;
    D_00470894 = (int)(&func_0028CCE0);
    return;
block_11:
    func_00288870(0xE);
    var_v1_2 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_13;
    }
    var_v1_2 = NULL;
block_13:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    D_00470858 = 3;
    D_00470894 = (int)(&func_0028C580);
    return;
}
