/* Draft (not built): func_001210F8 at 0x001210F8, size 0x118, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 44 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_001210F8.s */

s32 dpmul();
s32 func_00120F68();
s32 func_00121930();
s32 func_00121988();
s32 func_00121ED8();
s64 func_00122108();

s32 func_001210F8(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    u64 temp_s0;

    var_v0 = 0;
    if (func_00121ED8(0) >= 0) {
        // Error: negative shift count
        // At instruction: bltz $s0, .L00121168
        if (M2C_ERROR()) {
            var_v0_2 = func_00120F68(temp_s0);
        } else {
            temp_v0 = func_00120F68(temp_s0 >> 1);
            var_v0_2 = func_00121930(temp_v0, temp_v0);
        }
        temp_v0_2 = func_00121988(arg0, var_v0_2);
        if (func_00121ED8(temp_v0_2, 0) < 0) {
            var_s0 = temp_s0 - ((u64) (func_00122108(func_00121988(0, temp_v0_2)) << 0x20) >> 0x20);
        } else {
            var_s0 = temp_s0 + ((u64) (func_00122108(temp_v0_2, temp_v0_2) << 0x20) >> 0x20);
        }
        var_v0 = var_s0;
    }
    return var_v0;
}
