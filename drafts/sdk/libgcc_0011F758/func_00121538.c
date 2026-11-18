/* Draft (not built): func_00121538 at 0x00121538, size 0xD8, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_00121538.s */

s32 func_00121538(u8 *arg0, s32 arg2) {
    s32 temp_a0;
    s32 var_a3;
    u32 temp_v1;
    u64 var_a1;

    temp_v1 = *(u32 *)((u8 *)arg0 + 0);
    var_a3 = 0;
    var_a1 = *(u64 *)((u8 *)arg0 + 0x10);
    if (temp_v1 < 2U) {
        var_a3 = 0x7FF;
        var_a1 |= 0x8000 << 0x24;
    } else if ((temp_v1 ^ 4) != 0) {
        if ((temp_v1 ^ 2) == 0) {
            var_a1 = 0;
        } else if (var_a1 != 0) {
            temp_a0 = *(s32 *)((u8 *)arg0 + 8);
            if (temp_a0 < -0x3FE) {
                var_a1 = 0;
            } else if (temp_a0 < 0x400) {
                var_a3 = temp_a0 + 0x3FF;
                var_a1 = var_a1 >> 8;
            } else {
                goto block_14;
            }
        }
    } else {
block_14:
        var_a3 = 0x7FF;
        var_a1 = 0;
    }
    return (((((arg2 & (0xFFF0 << 0x30)) | (var_a1 & (-1U >> 0xC))) & ((((0x800FFFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((var_a3 & 0x7FF) << 0x34)) & (-1U >> 1)) | ((s64) *(s32 *)((u8 *)arg0 + 4) << 0x3F);
}
