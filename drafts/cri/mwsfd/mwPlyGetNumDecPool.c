/* Draft (not built): mwPlyGetNumDecPool at 0x00183EB0, size 0x68, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00183EB0.c:17: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyGetNumDecPool.s */

s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *, void *);           /* extern */
s32 func_0018FB58(s32, void *);                     /* extern */
extern s32 D_00466460;
extern s32 D_00466498;

s32 mwPlyGetNumDecPool(u8 *arg0) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_00466460, sp);
        return 0;
    }
    if (func_0018FB58(*(s32 *)((u8 *)arg0 + 0x40), sp) != 0) {
        func_001870E8(&D_00466498);
    }
    return sp0;
}
