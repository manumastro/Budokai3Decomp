/* Draft (not built): func_001997A8 at 0x001997A8, size 0x70, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001997A8.s */

s32 func_00199818(s32, s32, s32);               /* extern */
extern s32 D_00426AE4;

void func_001997A8(s32 arg0, s32 arg1) {
    s32 *var_s1;
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 7;
    var_s1 = &D_00426AE4;
    do {
        temp_v0 = *var_s1;
        var_s1 += 4;
        if (temp_v0 != 0) {
            func_00199818(temp_v0, arg0, arg1);
        }
        var_s0 -= 1;
    } while (var_s0 >= 0);
}
