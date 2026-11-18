/* Draft (not built): func_0015A3B0 at 0x0015A3B0, size 0x158, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015A3B0.c:31: too few arguments to function `func_0015A380'
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015A3B0.s */

s32 func_00152FD0(s32, s32, s32, s32); /* extern */
s32 func_0015A380(s32, s32, s32, s32);              /* extern */

void func_0015A3B0(s32 arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 *temp_s3;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_hi;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;

    temp_v1 = ((arg0 ^ 1) != 0) int 0x20 : 0x40;
    temp_s3 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_hi = (s32) (temp_v1 - (arg1 % temp_v1)) % temp_v1;
    temp_v0 = arg1 + temp_hi;
    *temp_s3 = temp_hi;
    temp_v0_2 = func_00152FD0(1, 0, 4, 4);
    temp_s0 = (((s32) ((temp_v0 < 0) int (temp_v0 + 0x1F) : temp_v0) >> 5) * arg0 * 0x12) + temp_v0_2;
    temp_a1 = temp_s0 + 4;
    temp_a2 = 0x800 - (temp_a1 - (((s32) ((temp_a1 < 0) int (temp_s0 + 0x803) : temp_a1) >> 0xB) << 0xB));
    temp_a3 = temp_a2 + 0x7FF;
    temp_v0_3 = temp_v0_2 + (temp_a2 - (((s32) ((temp_a2 < 0) int temp_a3 : temp_a2) >> 0xB) << 0xB));
    *arg3 = temp_v0_3;
    *M2C_ERROR(/* Read from unset register $t1 */) = func_0015A380(arg0, temp_v0_3, arg1 + *temp_s3, temp_a3);
    *M2C_ERROR(/* Read from unset register $t2 */) = func_0015A380(arg0, *arg3, arg2 + *temp_s3);
}
