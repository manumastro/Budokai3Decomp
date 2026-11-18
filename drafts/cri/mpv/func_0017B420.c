/* Draft (not built): func_0017B420 at 0x0017B420, size 0x94, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017B420.s */

s32 func_0017B420(u8 *arg0) {
    s32 temp_a3;
    s32 var_t0;

    temp_a3 = (((((*(u8 *)((u8 *)arg0 + 0) << 8) | *(u8 *)((u8 *)arg0 + 1)) << 8) | *(u8 *)((u8 *)arg0 + 2)) << 8) | *(u8 *)((u8 *)arg0 + 3);
    var_t0 = 4;
    if (temp_a3 != 0x100) {
        var_t0 = 3;
        if (temp_a3 != 0x101) {
            var_t0 = 1;
            if ((u32) (temp_a3 - 0x102) >= 0xAEU) {
                var_t0 = 0x20;
                if (temp_a3 != 0x1B2) {
                    var_t0 = 0x40;
                    if (temp_a3 != 0x1B3) {
                        var_t0 = 0x10;
                        if (temp_a3 != 0x1B5) {
                            var_t0 = 0x80;
                            if (temp_a3 != 0x1B7) {
                                var_t0 = ((temp_a3 ^ 0x1B8) != 0) ? 0 : 8;
                            }
                        }
                    }
                }
            }
        }
    }
    return var_t0;
}
