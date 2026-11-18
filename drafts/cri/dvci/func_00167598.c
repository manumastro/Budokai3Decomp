/* Draft (not built): func_00167598 at 0x00167598, size 0xEC, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00167598.c:19: warning: cast to pointer from integer of different size
 * Original: asm/nonmatchings/cri/dvci/func_00167598.s */

s64 func_00129688(s8 *, s8 *, s32);             /* extern */
s32 scePrintf(s32 *, s8 *);                 /* extern */
extern s32 D_00413758;
extern s32 D_00463720;
extern s32 D_00463738;
extern s32 D_00463748;

s32 func_00167598(s8 *arg0, s8 **arg1, s8 **arg2) {
    s8 *sp0;

    sp0 = arg0;
    *arg1 = (s8 *) ((s64) (func_00129688(sp, (s8 *)0x10) << 0x20) >> 0x20);
    if (*sp0 != 0) {
        sp0 += 1;
    }
    if (arg2 != NULL) {
        *arg2 = (s8 *) ((s64) (func_00129688(sp0, sp, 0x10) << 0x20) >> 0x20);
    }
    if (D_00413758 == 0) {
        scePrintf(&D_00463720, arg0);
        if (D_00413758 == 0) {
            scePrintf(&D_00463738, *arg1);
            if (D_00413758 == 0) {
                scePrintf(&D_00463748, *arg2);
            }
        }
    }
    return 1;
}
