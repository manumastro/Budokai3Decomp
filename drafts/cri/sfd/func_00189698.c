/* Draft (not built): func_00189698 at 0x00189698, size 0xA8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00189698.c:23: `sp28' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00189698.s */

s32 ADXT_GetStat(s32);                              /* extern */
s32 ADXT_GetTime(s32, s32 *, s32 *);            /* extern */
s32 func_0019C3A8(s32, void *, s64 *, s32 *);   /* extern */
s64 func_001A1630(s64, s64);                        /* extern */
s64 func_001A17A0();                                /* extern */
extern s32 D_004268C0;

void func_00189698(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s64 sp10;
    s64 sp18;
    s32 sp20;
    s32 sp30;
    s32 sp34;

    D_004268C0 = ADXT_GetStat(arg1);
    ADXT_GetTime(arg1, &sp30, &sp34);
    sp10 = func_001A1630((s64) sp30, (s64) sp34);
    sp18 = func_001A17A0();
    func_0019C3A8(arg0, sp, &sp10, &sp20);
    *arg2 = sp20;
    *arg3 = sp28;
}
