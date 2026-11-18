/* Draft (not built): func_001882C8 at 0x001882C8, size 0xB8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_001882C8.c:15: parse error before ')' token
 * Original: asm/nonmatchings/cri/sfd/func_001882C8.s */

s32 func_0011F638(s32);                             /* extern */
s32 func_00121F28(s32);                             /* extern */
f32 func_001220B0(s32);                             /* extern */
s32 func_0015F9E8(s32, f32, s32);               /* extern */

void func_001882C8(u8 *arg0, s32 arg1) {
    f32 temp_f0;
    s32 temp_s0;

    temp_s0 = **(s32 **)((u8 *)arg0 + 0x1CB4);
    if (temp_s0 != 0) {
        temp_f0 = (func_001220B0(func_0011F638(func_00121F28(arg1))) - 6.907755f) * 1731.234f;
        func_0015F9E8(temp_s0, temp_f0, 0x40DD0C54 - (M2C_BITWISE(s32, temp_f0) * 0x64));
    }
}
