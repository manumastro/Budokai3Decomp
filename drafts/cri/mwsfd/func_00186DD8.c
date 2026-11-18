/* Draft (not built): func_00186DD8 at 0x00186DD8, size 0x40, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00186DD8.s */

s32 func_00186DB8();                                /* extern */

s32 func_00186DD8(u8 *arg0) {
    s32 var_v0;

    var_v0 = func_00186DB8();
    if (var_v0 != 0) {
        var_v0 = 0;
        if (*(s32 *)((u8 *)arg0 + 0) == 1) {
            var_v0 = *(s32 *)((u8 *)arg0 + 0x14) != 0;
        }
    }
    return var_v0;
}
