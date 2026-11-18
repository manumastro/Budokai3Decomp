/* Draft (not built): func_0010AF00 at 0x0010AF00, size 0x20, segment sdk/libkernl_0010AD30 (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libkernl_0010AD30.s */

s32 _iDisableIntc();                            /* extern */

void func_0010AF00(void) {
    _iDisableIntc();
    M2C_SYNC();
}
