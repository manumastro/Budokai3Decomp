/* Draft (not built): MWSFD_MakeTblZ32 at 0x001859C0, size 0xA0, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_001859C0.c:23: for each function it appears in.)
 * Original: asm/nonmatchings/cri/mwsfd/MWSFD_MakeTblZ32.s */

s32 SFX_MakeTblZ32(s32, void *);                /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001847D0(s32);                             /* extern */
s32 func_001847F8(s32, s32 *, void *);          /* extern */
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_00466C08;
extern s32 D_00466C38;

void MWSFD_MakeTblZ32(s32 arg0, s32 *arg1) {
    s32 temp_s0;

    if (func_00183B38() == 0) {
        func_001870E8(&D_00466C08);
        return;
    }
    if (*arg1 == 0) {
        func_001870E8(&D_00466C38);
        return;
    }
    temp_s0 = func_001847D0(arg0);
    func_001847F8(arg0, arg1, sp);
    SFX_MakeTblZ32(temp_s0, sp);
}
