/* Draft (not built): func_0014EDB0 at 0x0014EDB0, size 0x88, segment cri/adx_0014E8F8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_0014E8F8/func_0014EDB0.s */

s32 func_0014EDB0(u8 *arg0) {
    s32 var_v0;
    u8 temp_a2;
    u8 temp_a2_2;

    temp_a2 = *(u8 *)((u8 *)arg0 + 0);
    if (temp_a2 == 0xB) {
        var_v0 = 1;
        if (*(u8 *)((u8 *)arg0 + 1) != 0x77) {
            goto block_3;
        }
    } else {
block_3:
        if ((temp_a2 != 0x77) || (var_v0 = 1, (*(u8 *)((u8 *)arg0 + 1) != 0xB))) {
            temp_a2_2 = *(u8 *)((u8 *)arg0 + 0x10);
            if (temp_a2_2 == 0xB) {
                var_v0 = 1;
                if (*(u8 *)((u8 *)arg0 + 0x11) != 0x77) {
                    goto block_8;
                }
            } else {
block_8:
                var_v0 = 0;
                if (temp_a2_2 == 0x77) {
                    var_v0 = 1;
                    if (*(u8 *)((u8 *)arg0 + 0x11) != 0xB) {
                        var_v0 = 0;
                    }
                }
            }
        }
    }
    return var_v0;
}
