/* Draft (not built): func_001A0588 at 0x001A0588, size 0x50, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001A0588.c:11: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfx/func_001A0588.s */

s32 func_0019FFF0(void *, s32 *);               /* extern */
s32 func_001A05D8(s32, s32, s32, s32 *);        /* extern */

void func_001A0588(s32 arg0, s32 *arg2) {
    s32 sp4;

    *arg2 = 0;
    func_0019FFF0(sp, &sp4);
    func_001A05D8(arg0, sp0, sp4, arg2);
}
