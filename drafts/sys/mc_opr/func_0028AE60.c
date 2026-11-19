/* Draft (not built): func_0028AE60 at 0x0028AE60, size 0x150, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 45 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x120, original 0x150
 * Original: asm/nonmatchings/sys/mc_opr/func_0028AE60.s */

// src/sys/mc_opr.c func_0028AE60 size diff=45/72
s32 amMc_GetDir(s32, s32, s32 *, s32 *);
s32 amMc_Save(s32, s32, s32 *, s8 *);
s32 func_001EF510(s8 *, s32);
s32 func_0026D9C0(s8 *, s32);
extern s32 D_004536C0;
extern s32 D_0046B8F0;
extern s32 D_0046B9E0;
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
extern void func_0028AD20(void);
void func_0028AE60(u8 *arg0) {
    s32 *var_v1;
    s32 *var_v1_2;

    if ((gMcState != 3) && (gMcState != 2)) {
        return;
    }
    if (func_00288AF0(&D_005AA3C0, gMcResult, &D_004536C0) != 0) {
        D_00470860 |= 4;
        func_001EF510(D_00470870, 0xD680);
        *(s8 *)((u8 *)D_00470870 + 0xD52E) = 1;
        func_0026D9C0(D_00470870, 0x111);
        func_001EF730((char *)(D_00470870));
    }
    if (amMc_GetDir(D_0047084C, 0, &D_0046B9E0, &D_005AA3C0) != 0) {
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
        goto block_17;
    }
    var_v1_2 = (int *)(&func_0028AD20);
    if (&func_0028AD20 == NULL) {
        var_v1_2 = NULL;
    }
block_17:
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
}
