/* Draft (not built): func_0028AD20 at 0x0028AD20, size 0x138, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

s32 amMc_Save(s32, M2C_UNK, M2C_UNK *, void *);     /* extern */
M2C_UNK func_001EF510(void *, M2C_UNK);             /* extern */
M2C_UNK func_001EF730(void *);                      /* extern */
M2C_UNK func_0026D9C0(void *, M2C_UNK);             /* extern */
s32 func_00288AF0(M2C_UNK *, s32, M2C_UNK *);       /* extern */
extern M2C_UNK D_00453650;
extern M2C_UNK D_0046B8F0;
extern s32 D_0047084C;
extern s32 D_00470860;
extern void *D_00470870;
extern s32 D_00470898;
extern M2C_UNK D_005AA3C0;
extern M2C_UNK func_0028BDB0;
extern M2C_UNK func_0028BEB0;
extern s32 gMcResult;
extern s32 gMcState;

void func_0028AD20(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;

    if ((gMcState != 3) && (gMcState != 2)) {
        return;
    }
    if (func_00288AF0(&D_005AA3C0, gMcResult, &D_00453650) != 0) {
        D_00470860 |= 2;
        func_001EF510(D_00470870, 0xD680);
        M2C_FIELD(D_00470870, s8 *, 0xD61A) = 1;
        func_0026D9C0(D_00470870, 0x1FD);
        if (D_00470860 & 4) {
            M2C_FIELD(D_00470870, s8 *, 0xD607) = 1;
            func_0026D9C0(D_00470870, 0x1EA);
        }
        func_001EF730(D_00470870);
    }
    if (amMc_Save(D_0047084C, 0, &D_0046B8F0, D_00470870) != 0) {
        var_v1 = &func_0028BDB0;
        if (&func_0028BDB0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
        D_00470898 = 0;
        return;
    }
    var_v1_2 = &func_0028BEB0;
    if (&func_0028BEB0 == NULL) {
        var_v1_2 = NULL;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
}
