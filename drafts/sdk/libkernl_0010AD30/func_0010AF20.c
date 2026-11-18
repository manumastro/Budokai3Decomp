/* Draft (not built): func_0010AF20 at 0x0010AF20, size 0x20, segment sdk/libkernl_0010AD30 (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libkernl_0010AD30.s */

s32 _iEnableDmac();                             /* extern */

void func_0010AF20(void) {
    _iEnableDmac();
    M2C_SYNC();
}
