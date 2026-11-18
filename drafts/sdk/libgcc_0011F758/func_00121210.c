/* Draft (not built): func_00121210 at 0x00121210, size 0x78, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_00121210.s */

s32 func_001210F8();
s32 func_00121988();
s32 func_00121ED8();

s32 func_00121210(s32 arg0) {
    if (func_00121ED8(0) >= 0) {
        return func_001210F8(arg0, arg0);
    }
    return 0 - func_001210F8(func_00121988(0, arg0));
}
