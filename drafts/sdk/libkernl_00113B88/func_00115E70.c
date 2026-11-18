/* Draft (not built): func_00115E70 at 0x00115E70, size 0x54, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00115E70.s */

f32 func_00121010();

f32 func_00115E70(s32 arg0) {
    f32 var_f1;

    if (arg0 >= 0) {
        var_f1 = func_00121010();
    } else {
        var_f1 = 2.0f * func_00121010((arg0 & 1) | ((u64) arg0 >> 1));
    }
    return 1.47456e8f / var_f1;
}
