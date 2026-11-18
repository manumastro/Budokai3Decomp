/* Draft (not built): func_0017F080 at 0x0017F080, size 0x4C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0017F080.c:16: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/mpv/func_0017F080.s */

void func_0017F080(u8 *arg0, u32 *arg1, u32 *arg2, s32 *arg3) {
    s32 temp_v0;
    s32 temp_v1;
    u32 temp_t2;
    u32 temp_t3;

    temp_t2 = *(u32 *)((u8 *)arg0 + 8);
    temp_t3 = *(u32 *)((u8 *)arg0 + 0xC);
    temp_v1 = (s32) (temp_t2 + (temp_t2 >> 0x1F)) >> 1;
    temp_v0 = temp_v1 + 0x1F;
    *arg3 = ((s32) ((temp_v0 < 0) int (temp_v1 + 0x3E) : temp_v0) >> 5) << 5;
    *M2C_ERROR(/* Read from unset register $t0 */) = (s32) (temp_t3 + (temp_t3 >> 0x1F)) >> 1;
    *arg1 = temp_t2;
    *arg2 = temp_t3;
}
