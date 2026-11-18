/* Draft (not built): func_001213B0 at 0x001213B0, size 0xB4, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_001213B0.c:29: parse error before "f32"
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_001213B0.s */

f32 func_001213B0(u8 *arg0, s32 arg2) {
    s32 temp_a0;
    s32 var_a1;
    s32 var_a3;

    var_a3 = 0;
    var_a1 = *(s32 *)((u8 *)arg0 + 0xC);
    if ((*(s32 *)((u8 *)arg0 + 0) ^ 2) != 0) {
        if (var_a1 != 0) {
            temp_a0 = *(s32 *)((u8 *)arg0 + 8);
            if (temp_a0 < -0x7E) {
                var_a1 = 0;
            } else {
                if ((temp_a0 >= 0x81) || ((var_a3 = temp_a0 + 0x7F, (temp_a0 == 0x80)) && (var_a1 < 0))) {
                    var_a3 = 0xFF;
                    goto block_9;
                }
                var_a1 = (s32) ((u32) var_a1 >> 7);
            }
        }
    } else {
block_9:
        var_a1 = 0;
    }
    return M2C_BITWISE(f32, ((((((arg2 & 0xFF800000) | (var_a1 & 0x7FFFFF)) & 0x807FFFFF) | ((var_a3 & 0xFF) << 0x17)) & 0x7FFFFFFF) | (*(s32 *)((u8 *)arg0 + 4) << 0x1F)));
}
