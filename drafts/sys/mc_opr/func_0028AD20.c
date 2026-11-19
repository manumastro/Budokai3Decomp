/* Draft (not built): func_0028AD20 at 0x0028AD20, size 0x138, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 36 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x120, original 0x138
 * Original: asm/nonmatchings/sys/mc_opr/func_0028AD20.s */

// src/sys/mc_opr.c func_0028AD20 size diff=36/72
s32 amMc_Save(s32, s32, s32 *, s8 *);
s32 func_001EF510(s8 *, s32);
s32 func_0026D9C0(s8 *, s32);
extern s32 D_00453650;
extern s32 D_0046B8F0;
extern s32 D_0047084C;
extern s32 D_00470860;
extern s8 *D_00470870;
extern s32 D_00470898;
extern s32 D_005AA3C0;
extern s32 gMcResult;
extern s32 gMcState;
extern void func_001EF730(char *);
extern void func_0028BDB0(void);
extern void func_0028BEB0(void);
void func_0028AD20(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;

    if ((gMcState != 3) && (gMcState != 2)) {
        return;
    }
    if (func_00288AF0(&D_005AA3C0, gMcResult, &D_00453650) != 0) {
        D_00470860 |= 2;
        func_001EF510(D_00470870, 0xD680);
        *(s8 *)((u8 *)D_00470870 + 0xD61A) = 1;
        func_0026D9C0(D_00470870, 0x1FD);
        if (D_00470860 & 4) {
            *(s8 *)((u8 *)D_00470870 + 0xD607) = 1;
            func_0026D9C0(D_00470870, 0x1EA);
        }
        func_001EF730((char *)(D_00470870));
    }
    if (amMc_Save(D_0047084C, 0, &D_0046B8F0, D_00470870) != 0) {
        var_v1 = (int *)(&func_0028BDB0);
        if (&func_0028BDB0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        D_00470898 = 0;
        return;
    }
    var_v1_2 = (int *)(&func_0028BEB0);
    if (&func_0028BEB0 == NULL) {
        var_v1_2 = NULL;
    }
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
}
