/* Draft (not built): func_0028C310 at 0x0028C310, size 0xD0, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 26 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/mc_opr/func_0028C310.s */

// src/sys/mc_opr.c func_0028C310 diff diff=26/52
s32 amMc_Save(s32, s32, s32 *, s32);
extern s32 D_0046B940;
extern s32 D_0047084C;
extern s32 D_00470878;
extern s32 D_00470898;
extern s32 gMcResult;
extern s32 gMcState;
extern void func_0028BDB0(void);
extern void func_0028C250(void);
void func_0028C310(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;

    if (gMcState != 3) {
        if (gMcState != 2) {
            return;
        }
        goto block_9;
    }
    if (gMcResult < -0xA) {
        var_v1 = (int *)(&func_0028BDB0);
        if (&func_0028BDB0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        D_00470898 = 0;
        return;
    }
block_9:
    if (amMc_Save(D_0047084C, 0, &D_0046B940, D_00470878) != 0) {
        var_v1_2 = (int *)(&func_0028BDB0);
        if (&func_0028BDB0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        D_00470898 = 0;
        return;
    }
    var_v1_3 = (int *)(&func_0028C250);
    if (&func_0028C250 == NULL) {
        var_v1_3 = NULL;
    }
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
}
