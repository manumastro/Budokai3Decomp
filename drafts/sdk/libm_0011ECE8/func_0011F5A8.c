/* Draft (not built): func_0011F5A8 at 0x0011F5A8, size 0x78, segment sdk/libm_0011ECE8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: e error: d_0011F5A8.c:14: parse error before numeric constant
 * Original: asm/nonmatchings/sdk/libm_0011ECE8/func_0011F5A8.s */

s32 func_0011D380(void *, f32, s32);            /* extern */
s32 func_0011E2C0(s32, f32, f32);               /* extern */

void func_0011F5A8(f32 fparg0) {
    f32 sp10;

    sp10 = fparg0;
    if ((M2C_BITWISE(s32, sp10) & 0x7FFFFFFF) <= 0x3F490FDA) {
        func_0011E2C0(1, sp10, 0.0f);
        return;
    }
    func_0011E2C0(1 - ((func_0011D380(sp, sp10, 0) & 1) * 2), sp0, sp4);
}
