/* Draft (not built): func_0028BDB0 at 0x0028BDB0, size 0xF8, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 32 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/mc_opr/func_0028BDB0.s */

// src/sys/mc_opr.c func_0028BDB0 diff diff=32/62
extern s32 D_00470894;
s32 amMc_Unformat(s32, s32, s32);
extern s32 D_00453740;
extern s32 D_0047084C;
extern s32 D_00470858;
extern s32 D_00470898;
extern s32 gMcState;
extern void func_0028DDF0(void);
extern void func_0028C580(void);
void func_0028BDB0(u8 *arg0) {
    s32 *var_v1;

loop_1:
    if (D_00470898 & 1) {
        goto block_5;
    }
    if (amMc_Unformat(D_0047084C, 0, *(&D_00453740 + (((s32) D_00470898 >> 1) * 4))) == 0) {
        goto block_4;
    }
    D_00470898 += 2;
    goto block_10;
block_4:
    D_00470898 += 1;
    return;
block_5:
    if (gMcState == 3) {
        goto block_8;
    }
    if (gMcState == 2) {
        goto block_8;
    }
    goto block_9;
block_8:
    D_00470898 += 1;
    goto block_10;
block_9:
    return;
block_10:
    if (D_00470898 < 2) {
        goto loop_1;
    }
    func_00288870(0x13);
    var_v1 = (int *)(&func_0028DDF0);
    if (&func_0028DDF0 != NULL) {
        goto block_13;
    }
    var_v1 = NULL;
block_13:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    D_00470858 = 3;
    D_00470894 = (int)(&func_0028C580);
    return;
}
