/* Draft (not built): func_0028C250 at 0x0028C250, size 0xC0, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xD0, original 0xC0
 * Original: asm/nonmatchings/sys/mc_opr/func_0028C250.s */

// src/sys/mc_opr.c func_0028C250 size diff=24/52
s32 amMc_Save(s32, s32, s32 *, s32);
extern s32 D_0046B920;
extern s32 D_0047084C;
extern s32 D_0047087C;
extern s32 D_00470898;
extern s32 gMcState;
extern void func_0028BDB0(void);
extern void func_0028C0F0(void);
void func_0028C250(u8 *arg0) {
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
    if (amMc_Save(D_0047084C, 0, &D_0046B920, D_0047087C) == 0) {
        goto block_11;
    }
    var_v1_2 = (int *)(&func_0028BDB0);
    if (&func_0028BDB0 != NULL) {
        goto block_10;
    }
    var_v1_2 = NULL;
block_10:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    D_00470898 = 0;
    return;
block_11:
    var_v1_3 = (int *)(&func_0028C0F0);
    if (&func_0028C0F0 != NULL) {
        goto block_13;
    }
    var_v1_3 = NULL;
block_13:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_3;
    return;
}
