/* Draft (not built): func_00180D88 at 0x00180D88, size 0x5C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00180D88.s */

s32 func_00180CF8(s32, s32);                    /* extern */

void func_00180D88(s32 arg0) {
    s32 *var_s0;
    s32 temp_a1;
    s32 var_s2;

    var_s0 = arg0 + 0x290;
    var_s2 = 0x1F;
    do {
        temp_a1 = *var_s0;
        if (temp_a1 != 0) {
            func_00180CF8(arg0, temp_a1);
            *var_s0 = 0;
        }
        var_s2 -= 1;
        var_s0 -= 4;
    } while (var_s2 >= 0);
}
