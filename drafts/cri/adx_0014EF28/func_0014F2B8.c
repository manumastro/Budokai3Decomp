/* Draft (not built): func_0014F2B8 at 0x0014F2B8, size 0x64, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0014F2B8.c:8: warning: passing arg 1 of `memcmp' makes pointer from integer without a cast
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_0014F2B8.s */

s32 memcmp(s32 *, s32 *, s32);          /* extern */
extern s32 D_0045FC00;
extern s32 D_0045FC08;

s32 func_0014F2B8(s32 arg0) {
    if ((memcmp(&D_0045FC00, (s32 *)4) == 0) && (memcmp(arg0 + 8, &D_0045FC08, 4) == 0)) {
        return 1;
    }
    return 0;
}
