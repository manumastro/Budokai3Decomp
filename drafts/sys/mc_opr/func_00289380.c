/* Draft (not built): func_00289380 at 0x00289380, size 0x68, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/mc_opr/func_00289380.s */

// src/sys/mc_opr.c func_00289380 diff diff=6/26
extern s32 D_00470894;
s32 amMc_GetInfo(s32, s32, s32);
extern s32 D_0047084C;
extern void func_0028DDF0(void);
extern void func_00289210(void);
void func_00289380(u8 *arg0) {
    s32 *var_v1;

    if (amMc_GetInfo(D_0047084C, 0, 0) == 0) {
        func_00288870(0x20);
        var_v1 = (int *)(&func_0028DDF0);
        if (&func_0028DDF0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
        D_00470894 = (int)(&func_00289210);
    }
}

/* Similar function already in C: Btl_TaskStart (src/battle/btl_main.c), similarity 0.77.
 * It is the template below (not built). */
#if 0
void Btl_TaskStart(Fighter *f) {
    s32 fn;
    func_001E9D10(f);
    func_00219650(1);
    func_00219790(1);
    BtlSound_StartTrans();
    fn = (s32)Btl_TaskLoadWait;
    if (fn == 0) {
        fn = 0;
    }
    FT_FIELD(f, s32, 0x1C) = fn;
}
#endif
