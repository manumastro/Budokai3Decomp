/* Draft (not built): memset at 0x001258F8, size 0xC0, segment sdk/libc_00125590 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_001258F8.c:56: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libc_00125590/memset.s */

s32 memset(s32 arg0, s8 arg1, u32 arg2) {
    s128 temp_t0;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_v0;
    s32 var_v1;
    u32 var_a2;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_a2 = arg2;
    var_v1 = arg0;
    if (var_a2 < 8U) {
        goto block_12;
    }
    var_a3 = arg0;
    if (arg0 & 0xF) {
        goto block_12;
    }
    var_v0 = var_a2 < 8U;
    if (var_a2 < 0x20U) {
        goto block_8;
    }
    temp_t0 = M2C_ERROR(/* unknown instruction: pcpyld $t0, $v1, $v1 */);
loop_4:
    *(s128 *)((u8 *)var_a3 + 0) = temp_t0;
    var_a2 -= 0x20;
    *(s128 *)((u8 *)var_a3 + 0x10) = temp_t0;
    var_a3 = var_a3 + 0x10 + 0x10;
    if (var_a2 >= 0x20U) {
        goto loop_4;
    }
    goto block_7;
block_6:
    var_a2 -= 8;
    var_a3 += 8;
block_7:
    var_v0 = var_a2 < 8U;
block_8:
    if (var_v0 != 0) {
        goto block_10;
    }
    *var_a3 = (s64) M2C_ERROR(/* unknown instruction: pcpyh $v1, $t0 */);
    goto block_6;
block_10:
    var_v1 = var_a3;
block_12:
    var_a2_2 = var_a2 - 1;
    if (var_a2_2 == 0xFFFFFFFF) {
        goto block_15;
    }
loop_14:
    *var_v1 = arg1;
    var_a2_2 -= 1;
    var_v1 += 1;
    if (var_a2_2 != 0xFFFFFFFF) {
        goto loop_14;
    }
block_15:
    return arg0;
}
