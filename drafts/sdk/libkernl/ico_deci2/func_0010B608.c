/* Draft (not built): func_0010B608 at 0x0010B608, size 0x30, segment sdk/libkernl/ico_deci2 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: pile error: d_0010B608.c:6: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl/ico_deci2/func_0010B608.s */

s32 Deci2Call(s32, void *, s32, s32, s32);  /* extern */

void func_0010B608(s32 arg0, s32 arg1, s32 arg2) {
    Deci2Call(0x20, sp, arg0 & 0xFF, arg1, arg2);
}
