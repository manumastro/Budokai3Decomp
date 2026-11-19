/* Draft (not built): func_0028C3E0 at 0x0028C3E0, size 0xE0, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE8, original 0xE0
 * Original: asm/nonmatchings/sys/mc_opr/func_0028C3E0.s */

// src/sys/mc_opr.c func_0028C3E0 size diff=28/58
extern s32 D_00470894;
s32 amMc_Unformat(s32, s32, s32 *);
extern s32 D_0046BA30;
extern s32 D_0047084C;
extern s32 D_00470858;
extern s32 D_00470898;
extern s32 gMcResult;
extern s32 gMcState;
extern void func_0028DDF0(void);
extern void func_0028C580(void);
extern void func_0028BDB0(void);
extern void func_0028C310(void);
void func_0028C3E0(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;

    if (gMcState != 3) {
        if (gMcState != 2) {
            return;
        }
        goto block_8;
    }
    if (gMcResult != -4) {
        func_00288870(0x13);
        var_v1 = (int *)(&func_0028DDF0);
        if (&func_0028DDF0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        D_00470858 = 3;
        D_00470894 = (int)(&func_0028C580);
        return;
    }
block_8:
    if (amMc_Unformat(D_0047084C, 0, &D_0046BA30) != 0) {
        var_v1_2 = (int *)(&func_0028BDB0);
        if (&func_0028BDB0 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        D_00470898 = 0;
        return;
    }
    var_v1_3 = (int *)(&func_0028C310);
    if (&func_0028C310 == NULL) {
        var_v1_3 = NULL;
    }
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
}
