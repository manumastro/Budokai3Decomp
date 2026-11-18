/* Draft (not built): memcpy at 0x00125740, size 0xB0, segment sdk/libc_00125590 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_00125740.c:46: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libc_00125590/memcpy.s */

s32 memcpy(s32 arg0, s32 arg1, u32 arg2) {
    s128 temp_v0;
    s32 var_a1;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_v1;
    s64 temp_v1;
    u32 var_a2;
    u8 temp_v0_2;

    var_a1 = arg1;
    var_a2 = arg2;
    var_v1 = arg0;
    if ((var_a2 >= 0x20U) && !((var_a1 | arg0) & 0xF)) {
        var_a3 = arg0;
        do {
            var_a2 -= 0x20;
            *(s128 *)((u8 *)var_a3 + 0) = (s128) *(s128 *)((u8 *)var_a1 + 0);
            temp_v0 = *(s128 *)((u8 *)var_a1 + 0x10);
            var_a1 = var_a1 + 0x10 + 0x10;
            *(s128 *)((u8 *)var_a3 + 0x10) = temp_v0;
            var_a3 = var_a3 + 0x10 + 0x10;
        } while (var_a2 >= 0x20U);
        var_v1 = var_a3;
        if (var_a2 >= 8U) {
            do {
                temp_v1 = *var_a1;
                var_a2 -= 8;
                var_a1 += 8;
                *var_a3 = temp_v1;
                var_a3 += 8;
            } while (var_a2 >= 8U);
            var_v1 = var_a3;
        }
    }
    var_a2_2 = var_a2 - 1;
    if (var_a2_2 != -1) {
        do {
            temp_v0_2 = *var_a1;
            var_a2_2 -= 1;
            var_a1 += 1;
            *var_v1 = temp_v0_2;
            var_v1 += 1;
        } while (var_a2_2 != -1);
    }
    return arg0;
}
