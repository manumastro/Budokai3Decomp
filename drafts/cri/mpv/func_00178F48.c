/* Draft (not built): func_00178F48 at 0x00178F48, size 0xD0, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 60 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00178F48.s */

void func_00178F48(s32 arg0, s8 arg1, u32 arg2) {
    s32 var_v0;
    s8 *temp_a0;
    s8 *temp_a0_10;
    s8 *temp_a0_11;
    s8 *temp_a0_12;
    s8 *temp_a0_13;
    s8 *temp_a0_14;
    s8 *temp_a0_15;
    s8 *temp_a0_2;
    s8 *temp_a0_3;
    s8 *temp_a0_4;
    s8 *temp_a0_5;
    s8 *temp_a0_6;
    s8 *temp_a0_7;
    s8 *temp_a0_8;
    s8 *temp_a0_9;
    s8 *var_a0;
    u32 var_a2;

    var_v0 = arg2 & 0xF;
    var_a0 = arg0 + arg2;
    if (var_v0 != 0) {
        do {
            var_a0 -= 1;
            var_v0 -= 1;
            *var_a0 = arg1;
        } while (var_v0 != 0);
    }
    var_a2 = arg2 >> 4;
    if (var_a2 != 0) {
        do {
            temp_a0 = var_a0 - 1;
            var_a2 -= 1;
            *temp_a0 = arg1;
            temp_a0_2 = temp_a0 - 1;
            *temp_a0_2 = arg1;
            temp_a0_3 = temp_a0_2 - 1;
            *temp_a0_3 = arg1;
            temp_a0_4 = temp_a0_3 - 1;
            *temp_a0_4 = arg1;
            temp_a0_5 = temp_a0_4 - 1;
            *temp_a0_5 = arg1;
            temp_a0_6 = temp_a0_5 - 1;
            *temp_a0_6 = arg1;
            temp_a0_7 = temp_a0_6 - 1;
            *temp_a0_7 = arg1;
            temp_a0_8 = temp_a0_7 - 1;
            *temp_a0_8 = arg1;
            temp_a0_9 = temp_a0_8 - 1;
            *temp_a0_9 = arg1;
            temp_a0_10 = temp_a0_9 - 1;
            *temp_a0_10 = arg1;
            temp_a0_11 = temp_a0_10 - 1;
            *temp_a0_11 = arg1;
            temp_a0_12 = temp_a0_11 - 1;
            *temp_a0_12 = arg1;
            temp_a0_13 = temp_a0_12 - 1;
            *temp_a0_13 = arg1;
            temp_a0_14 = temp_a0_13 - 1;
            *temp_a0_14 = arg1;
            temp_a0_15 = temp_a0_14 - 1;
            *temp_a0_15 = arg1;
            var_a0 = temp_a0_15 - 1;
            *var_a0 = arg1;
        } while (var_a2 != 0);
    }
}
