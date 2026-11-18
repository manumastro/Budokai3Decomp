/* Draft (not built): func_0015A988 at 0x0015A988, size 0x58, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015A988.c:11: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015A988.s */

s32 func_00152538(s16, s32, void *, s16 *);     /* extern */
s32 func_0015A7F0(s32, s16, s16);               /* extern */
s32 func_0015A978(void *, s16, s16);            /* extern */

void func_0015A988(u8 *arg0, s16 arg1, s32 arg2) {
    s16 sp2;

    func_00152538(arg1, arg2, sp, &sp2);
    func_0015A978(arg0, sp0, sp2);
    func_0015A7F0(*(s32 *)((u8 *)arg0 + 0x88), sp0, sp2);
}
