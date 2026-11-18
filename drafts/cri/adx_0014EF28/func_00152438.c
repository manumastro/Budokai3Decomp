/* Draft (not built): func_00152438 at 0x00152438, size 0x64, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00152438.c:8: warning: passing arg 1 of `memcmp' makes pointer from integer without a cast
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00152438.s */

s32 memcmp(s32 *, s32 *, s32);          /* extern */
extern s32 D_004604C0;
extern s32 D_004604C8;

s32 func_00152438(s32 arg0) {
    if ((memcmp(&D_004604C0, (s32 *)4) == 0) && (memcmp(arg0 + 8, &D_004604C8, 4) == 0)) {
        return 1;
    }
    return 0;
}
