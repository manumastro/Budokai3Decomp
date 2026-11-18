/* Draft (not built): func_0011EA48 at 0x0011EA48, size 0x214, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: : d_0011EA48.c:81: warning: left shift count >= width of type
 * Original: asm/nonmatchings/sdk/libm/func_0011EA48.s */

s64 func_00121930(s64, s64);                        /* extern */
s32 func_00121ED8(s64, s32);                    /* extern */
extern s64 D_0045E628;

s64 func_0011EA48(s64 arg0) {
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0_2;
    s32 var_v0_3;
    s64 var_a2;
    s64 var_s0;
    s64 var_s2;
    s64 var_v0;
    u32 temp_s3_2;
    u32 temp_v1_2;

    var_a2 = arg0;
    var_s2 = (s64) (var_a2 << 0x20) >> 0x20;
    var_s0 = var_a2 >> 0x20;
    temp_v1 = (var_s0 >> 0x14) & 0x7FF;
    temp_s1 = temp_v1 - 0x3FF;
    if (temp_s1 < 0x14) {
        if (temp_s1 < 0) {
            if (func_00121ED8(func_00121930(D_0045E628, var_a2), 0) > 0) {
                if (var_s0 >= 0) {
                    var_s2 = 0;
                    var_s0 = 0;
                } else if (((var_s0 & 0x7FFFFFFF) | var_s2) != 0) {
                    var_s0 = 0xBFF00000;
                    var_s2 = 0;
                }
            }
            goto block_25;
        }
        var_v0 = var_a2;
        temp_s3 = 0xFFFFF >> temp_s1;
        if (((var_s0 & temp_s3) | var_s2) != 0) {
            if (func_00121ED8(func_00121930(D_0045E628, var_a2), 0) > 0) {
                var_v0_2 = ~temp_s3;
                if (var_s0 < 0) {
                    var_s0 += 0x100000 >> temp_s1;
                    var_v0_2 = ~temp_s3;
                }
                var_s2 = 0;
                var_s0 &= var_v0_2;
            }
            goto block_25;
        }
        /* Duplicate return node #27. Try simplifying control flow for better match */
        return var_v0;
    }
    if (temp_s1 >= 0x34) {
        if (temp_s1 == 0x400) {
            return func_00121930(var_a2, var_a2);
        }
        goto block_26;
    }
    temp_s3_2 = -1U >> (temp_v1 - 0x413);
    var_v0 = var_a2;
    if (var_s2 & temp_s3_2) {
        if (func_00121ED8(func_00121930(D_0045E628, var_a2), 0) > 0) {
            var_v0_3 = ~temp_s3_2;
            if (var_s0 < 0) {
                if (temp_s1 == 0x14) {
                    var_s0 += 1;
                } else {
                    temp_v1_2 = var_s2 + (1 << (0x34 - temp_s1));
                    temp_v0 = temp_v1_2 < (u32) var_s2;
                    var_s2 = (s64) temp_v1_2;
                    var_s0 += temp_v0;
                }
                var_v0_3 = ~temp_s3_2;
            }
            var_s2 &= var_v0_3;
        }
block_25:
        var_a2 = (((saved_reg_s4 & (0xFFFF0000U >> 0x20)) | (var_s0 << 0x20)) & (-1 << 0x20)) | ((u64) (var_s2 << 0x20) >> 0x20);
block_26:
        var_v0 = var_a2;
    }
    return var_v0;
}
