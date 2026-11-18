/* Draft (not built): func_0017B4B8 at 0x0017B4B8, size 0x100, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017B4B8.s */

s32 func_0017B420(s8 *);                            /* extern */

s8 *func_0017B4B8(u32 arg0, s32 arg1, s32 arg2) {
    s32 var_v0_2;
    s32 var_v1;
    s8 *var_s0;
    s8 *var_v0;
    s8 temp_v0;
    u32 temp_s1;

    var_v1 = 0;
    temp_s1 = arg0 - arg1;
    if (temp_s1 >= arg0) {
        goto block_27;
    }
    var_s0 = arg0 - 1;
loop_2:
    temp_v0 = *var_s0;
    if (var_v1 == 1) {
        goto block_10;
    }
    if (var_v1 != 0) {
        goto block_5;
    }
    var_v1 = 1;
    goto block_25;
block_5:
    if (var_v1 == 2) {
        goto block_14;
    }
    if (var_v1 == 3) {
        goto block_18;
    }
    goto block_25;
block_10:
    if (temp_v0 != var_v1) {
        goto block_12;
    }
    var_v1 = 2;
    goto block_25;
block_12:
    goto block_25;
block_14:
    if (temp_v0 != 0) {
        goto block_16;
    }
    var_v1 = 3;
    goto block_25;
block_16:
    var_v0_2 = temp_s1 < (u32) var_s0;
    if (temp_v0 == 1) {
        goto block_26;
    }
    var_v1 = 1;
    goto block_26;
block_18:
    if (temp_v0 == 0) {
        goto block_20;
    }
    goto block_24;
block_20:
    var_v0 = var_s0;
    if (arg2 & func_0017B420(var_s0)) {
        goto block_28;
    }
    var_v1 = 0;
    goto block_25;
block_24:
    var_v1 = ((temp_v0 ^ 1) == 0) ? 2 : 1;
block_25:
    var_v0_2 = temp_s1 < (u32) var_s0;
block_26:
    var_s0 -= 1;
    if (var_v0_2 != 0) {
        goto loop_2;
    }
block_27:
    var_v0 = NULL;
block_28:
    return var_v0;
}
