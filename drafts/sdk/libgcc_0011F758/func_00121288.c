/* Draft (not built): func_00121288 at 0x00121288, size 0x128, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_00121288.s */

s32 dpmul();
s32 func_00120F68();
s32 func_001214F8();
s32 func_00121930();
s32 func_00121988();
s32 func_00121ED8();
s64 func_00122108();

s32 func_00121288(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    u64 temp_s0;

    temp_v0 = func_001214F8();
    var_v0 = 0;
    if (func_00121ED8(temp_v0, 0) >= 0) {
        // Error: negative shift count
        // At instruction: bltz $s0, .L00121308
        if (M2C_ERROR()) {
            var_v0_2 = func_00120F68(temp_s0);
        } else {
            temp_v0_2 = func_00120F68(temp_s0 >> 1);
            var_v0_2 = func_00121930(temp_v0_2, temp_v0_2);
        }
        temp_v0_3 = func_00121988(temp_v0, var_v0_2);
        if (func_00121ED8(temp_v0_3, 0) < 0) {
            var_s0 = temp_s0 - ((u64) (func_00122108(func_00121988(0, temp_v0_3)) << 0x20) >> 0x20);
        } else {
            var_s0 = temp_s0 + ((u64) (func_00122108(temp_v0_3, temp_v0_3) << 0x20) >> 0x20);
        }
        var_v0 = var_s0;
    }
    return var_v0;
}
