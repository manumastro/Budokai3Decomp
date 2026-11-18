/* Draft (not built): func_001A01A0 at 0x001A01A0, size 0x13C, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_001A01A0.s */

void func_001A01A0(s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_a3;
    s32 *var_t1;
    s32 *var_v0;
    s32 *var_v0_2;
    s32 *var_v0_3;
    s32 *var_v1;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v1;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t0_3;
    s32 var_t0_4;
    s32 var_t0_5;

    var_t0 = 8;
    temp_a2 = ((arg2 ^ 0x80000000) == 0) ? 0x7FFFFFFF : arg2;
    var_v0 = arg3 + 0x20;
    temp_a1 = ((arg1 ^ 0x80000000) == 0) ? 0x7FFFFFFF : arg1;
loop_1:
    var_t0 -= 1;
    *var_v0 = 0;
    var_v0 -= 4;
    if (var_t0 >= 0) {
        goto loop_1;
    }
    var_v0_2 = arg3 + 0x24;
    var_t0_2 = 7;
loop_3:
    var_t0_2 -= 1;
    *var_v0_2 = temp_a1;
    var_v0_2 += 4;
    if (var_t0_2 >= 0) {
        goto loop_3;
    }
    var_t0_3 = 0x11;
    if (temp_a1 != temp_a2) {
        goto block_9;
    }
    var_v1 = arg3 + 0x44;
loop_6:
    var_t0_3 += 1;
    *var_v1 = temp_a1;
    var_v1 += 4;
    if (var_t0_3 < 0xE0) {
        goto loop_6;
    }
    goto block_11;
block_9:
    var_t1 = arg3 + 0x44;
loop_10:
    temp_v1 = var_t0_3 - 0x11;
    var_t0_3 += 1;
    *var_t1 = (((u32) (temp_a2 - temp_a1) / 207U) * temp_v1) + temp_a1;
    var_t1 += 4;
    if (var_t0_3 < 0xE0) {
        goto loop_10;
    }
block_11:
    var_v0_3 = arg3 + 0x380;
    var_t0_4 = 0xF;
loop_12:
    var_t0_4 -= 1;
    *var_v0_3 = temp_a2;
    var_v0_3 += 4;
    if (var_t0_4 >= 0) {
        goto loop_12;
    }
    var_a3 = arg3 + 0x3C0;
    var_t0_5 = 0xF;
loop_14:
    var_t0_5 -= 1;
    *var_a3 = 0x7FFFFFFF;
    var_a3 += 4;
    if (var_t0_5 >= 0) {
        goto loop_14;
    }
    return;
}
