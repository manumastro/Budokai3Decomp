/* Draft (not built): func_00180AB8 at 0x00180AB8, size 0x4C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00180AB8.s */

s32 func_00180AB8(u8 *arg0) {
    s32 var_a1;
    s32 var_v0;

    if (*(s32 *)((u8 *)arg0 + 4) == 0) {
        var_v0 = 0;
        if (*(s32 *)((u8 *)arg0 + 8) != 0) {
            if (*(s32 *)((u8 *)arg0 + 0xC) == 0) {
                var_a1 = 2;
                goto block_8;
            }
            return 0;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return var_v0;
    }
    var_a1 = (*(s32 *)((u8 *)arg0 + 0xC) != 0) ? 1 : 3;
block_8:
    var_v0 = var_a1;
    return var_v0;
}
