/* Draft (not built): fn_80041578 at 0x00159EA0, size 0x2C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/fn_80041578.s */

s32 func_00150E38(s32);                             /* extern */

s32 func_00159EA0(u8 *arg0) {
    if (arg0 != NULL) {
        return func_00150E38(*(s32 *)((u8 *)arg0 + 4));
    }
    return 0;
}
