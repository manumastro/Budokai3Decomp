/* Draft (not built): fn_80045588 at 0x00150D68, size 0x2C, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/fn_80045588.s */

s8 func_00150D68(u8 *arg0) {
    s8 var_v0;

    if ((*(s8 *)((u8 *)arg0 + 0xE) != 1) || (var_v0 = 2, (*(s32 *)((u8 *)arg0 + 0xE8) == 0))) {
        var_v0 = (s8) (u8) *(s8 *)((u8 *)arg0 + 0xE);
    }
    return var_v0;
}
