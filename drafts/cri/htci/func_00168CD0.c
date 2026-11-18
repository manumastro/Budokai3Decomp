/* Draft (not built): func_00168CD0 at 0x00168CD0, size 0x94, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00168CD0.c:20: warning: assignment makes pointer from integer without a cast
 * Original: asm/nonmatchings/cri/htci/func_00168CD0.s */

s32 func_00168C78(s8, s8);                          /* extern */
s32 strlen(s8 *);                                   /* extern */

s32 func_00168CD0(s32 arg0, s8 *arg1) {
    s32 temp_s1;
    s32 var_s0;
    s8 *temp_v0;
    s8 *var_v1;

    temp_s1 = strlen();
    if (temp_s1 != strlen(arg1)) {
        goto block_1;
    }
    var_s0 = 0;
    if (temp_s1 > 0) {
        var_v1 = arg1;
loop_4:
        temp_v0 = arg0 + var_s0;
        var_s0 += 1;
        if (func_00168C78(*temp_v0, *var_v1) == 0) {
            var_v1 = &arg1[var_s0];
            if (var_s0 >= temp_s1) {
                goto block_6;
            }
            goto loop_4;
        }
block_1:
        return -1;
    }
block_6:
    return 0;
}
