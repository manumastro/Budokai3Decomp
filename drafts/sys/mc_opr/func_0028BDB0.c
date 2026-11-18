/* Draft (not built): func_0028BDB0 at 0x0028BDB0, size 0xF8, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_Unformat(s32, M2C_UNK, s32);               /* extern */
M2C_UNK func_00288870(M2C_UNK);                     /* extern */
extern M2C_UNK D_00453740;
extern s32 D_0047084C;
extern s32 D_00470858;
extern M2C_UNK *D_00470894;
extern s32 D_00470898;
extern M2C_UNK func_0028C580;
extern M2C_UNK func_0028DDF0;
extern s32 gMcState;

void func_0028BDB0(void *arg0) {
    M2C_UNK *var_v1;

loop_1:
    if (!(D_00470898 & 1)) {
        if (amMc_Unformat(D_0047084C, 0, *(&D_00453740 + (((s32) D_00470898 >> 1) * 4))) != 0) {
            D_00470898 += 2;
            goto block_10;
        }
        D_00470898 += 1;
        return;
    }
    if ((gMcState != 3) && (gMcState != 2)) {
        return;
    }
    D_00470898 += 1;
block_10:
    if (D_00470898 >= 2) {
        func_00288870(0x13);
        var_v1 = &func_0028DDF0;
        if (&func_0028DDF0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
        D_00470858 = 3;
        D_00470894 = &func_0028C580;
        return;
    }
    goto loop_1;
}
