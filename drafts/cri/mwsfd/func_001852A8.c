/* Draft (not built): func_001852A8 at 0x001852A8, size 0x60, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_001852A8.s */

s32 func_001851E0();                                /* extern */
s32 func_0019CDF8(s32, s32, s32, s32);      /* extern */

s32 func_001852A8(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;

    if (func_001851E0() != 1) {
        temp_v1 = *(s32 *)((u8 *)arg0 + 0x190);
        var_v0 = 0;
        if (temp_v1 != 0) {
            var_v0 = (func_0019CDF8(*(s32 *)((u8 *)arg0 + 0x40), 2, temp_v1, 0) == 0) ? 0 : -1;
        }
        return var_v0;
    }
    return 0;
}
