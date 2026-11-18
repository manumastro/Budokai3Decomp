/* Draft (not built): func_0010B518 at 0x0010B518, size 0x28, segment sdk/libkernl_0010B038 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_0010B038/func_0010B518.s */

s32 iSignalSema(s32);                           /* extern */

s32 func_0010B518(s32 arg3) {
    iSignalSema(arg3);
    M2C_SYNC();
    M2C_ERROR(/* unknown instruction: ei */);
    return 0;
}
