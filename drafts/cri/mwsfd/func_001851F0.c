/* Draft (not built): func_001851F0 at 0x001851F0, size 0x24, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_001851F0.s */

s32 func_001851F0(u8 *arg0) {
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x20);
    var_a0 = 1;
    if (temp_v1 != 0) {
        var_a0 = 0;
        if (temp_v1 == 0x101) {
            var_a0 = 1;
        }
    }
    return var_a0;
}
