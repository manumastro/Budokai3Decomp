/* Draft (not built): func_0011CAB8 at 0x0011CAB8, size 0xE4, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_0011CAB8.c:21: parse error before ')' token
 * Original: asm/nonmatchings/sdk/libm/func_0011CAB8.s */

f32 func_0011C7D8(u32, s32, s32);                   /* extern */
extern f32 D_0045E08C;

f32 func_0011CAB8(f32 fparg0) {
    f32 temp_f20;
    s32 temp_a1;
    u32 temp_a0;
    u32 temp_v0;

    if ((M2C_BITWISE(s32, fparg0) & 0x7FFFFFFF) <= 0x7FFFFF) {
        return D_0045E08C;
    }
    if (M2C_BITWISE(s32, fparg0) < 0) {
        return (fparg0 - fparg0) / 0.0f;
    }
    temp_v0 = (M2C_BITWISE(s32, fparg0) >> 0x17) - 0x7F;
    temp_a0 = temp_v0 >> 0x1F;
    temp_f20 = (f32) (temp_v0 + temp_a0);
    temp_a1 = (M2C_BITWISE(s32, fparg0) & 0x7FFFFF) | ((0x7F - temp_a0) << 0x17);
    return (temp_f20 * 0.0000007903415f) + (func_0011C7D8(temp_a0, temp_a1, temp_a1) * 0.4342945f) + (temp_f20 * 0.30102918f);
}
