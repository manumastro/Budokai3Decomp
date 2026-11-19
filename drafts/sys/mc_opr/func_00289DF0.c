/* Draft (not built): func_00289DF0 at 0x00289DF0, size 0x88, segment sys/mc_opr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 10 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x90, original 0x88
 * Original: asm/nonmatchings/sys/mc_opr/func_00289DF0.s */

// src/sys/mc_opr.c func_00289DF0 size diff=10/36
extern s32 D_00470838;
s32 amMc_GetInfo(s32, s32, s32);
extern s32 D_0047084C;
extern void func_00289BE0(void);
void func_00289DF0(u8 *arg0) {
    s32 *var_v1;

    if ((&D_00470838)[D_0047084C] & 0x8000) {
        D_0047084C ^= 1;
        return;
    }
    if (amMc_GetInfo(D_0047084C, 0, 0) != 0) {
        D_0047084C ^= 1;
        return;
    }
    var_v1 = (int *)(&func_00289BE0);
    if (&func_00289BE0 == NULL) {
        var_v1 = NULL;
    }
    *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
}
