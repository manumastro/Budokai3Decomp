/* Draft (not built): func_0010BE70 at 0x0010BE70, size 0x1D8, segment sdk/libkernl_0010BE70 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_0010BE70/func_0010BE70.s */

s32 dpmul(s32, s64);                                /* extern */
s32 ftoi(s32);                                  /* extern */
s32 func_0010CE08(s32 (*)(s32, s32 *, s32), s32, s32 *, s32 *); /* extern */
s32 func_001210F8(s32);                             /* extern */
s32 func_00121988(s32, s32);                    /* extern */
s32 func_00121C78(s32, s64);                        /* extern */
s32 func_00121ED8(s32, s64);                        /* extern */
extern s32 D_0045D460;
extern s32 D_0045D468;
extern s32 D_0045D470;
extern s64 D_0045D478;
extern s64 D_0045D480;
extern s64 D_0045D488;

s32 func_0010BE70(s32 (*arg0)(s32, s32 *, s32), s32 arg1, s32 *arg2, s32 arg3) {
    s32 *var_a3;
    s32 temp_s4;
    s32 var_s0;
    s32 var_s2;
    s32 var_s4;

    var_s4 = 0;
    var_s2 = 0;
    var_s0 = arg3;
    if (*arg2 != 0) {
        goto block_2;
    }
    return 0;
block_2:
    if (func_00121ED8(var_s0, 0) >= 0) {
        goto block_4;
    }
    var_s4 = 1;
    var_s0 = func_00121988(0, var_s0);
    arg0(arg1, arg2, 0x2D);
    *arg2 -= 1;
block_4:
    if (func_00121ED8(var_s0, D_0045D478) >= 0) {
        goto block_9;
    }
    goto loop_7;
block_6:
    var_s2 -= 1;
    var_s0 = dpmul(var_s0, 0x8048 << 0x2F);
loop_7:
    if (func_00121ED8(var_s0, D_0045D480) < 0) {
        goto block_6;
    }
    goto block_14;
block_9:
    if (func_00121ED8(var_s0, 0xFFC0 << 0x2E) < 0) {
        goto block_14;
    }
    goto loop_13;
block_12:
    var_s2 += 1;
    var_s0 = func_00121C78(var_s0, 0x8048 << 0x2F);
loop_13:
    if (func_00121ED8(var_s0, 0xFFC0 << 0x2E) >= 0) {
        goto block_12;
    }
block_14:
    ftoi(func_001210F8(dpmul(var_s0, D_0045D488)));
    temp_s4 = var_s4 + func_0010CE08(arg0, arg1, arg2, &D_0045D460);
    if (var_s2 < 0) {
        goto block_16;
    }
    var_a3 = &D_0045D468;
    goto block_17;
block_16:
    var_a3 = &D_0045D470;
block_17:
    return temp_s4 + func_0010CE08(arg0, arg1, arg2, var_a3);
}
