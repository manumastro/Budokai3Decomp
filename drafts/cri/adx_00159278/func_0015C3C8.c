/* Draft (not built): func_0015C3C8 at 0x0015C3C8, size 0x4C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 17 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C3C8.s */

void func_0015C3C8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_a3;

    temp_a3 = arg2 + 0x7FF;
    if (*(s8 *)((u8 *)arg0 + 0x2EE) != 1) {
        *(s8 *)((u8 *)arg0 + 0x2EE) = 1;
        *(s32 *)((u8 *)arg0 + 0x2F0) = arg1;
        *(s32 *)((u8 *)arg0 + 0x2F4) = arg2;
        *(s32 *)((u8 *)arg0 + 0x48) = (s32) (*(s32 *)((u8 *)arg0 + 0x48) + (((s32) ((temp_a3 < 0) ? (arg2 + 0xFFE) : temp_a3) >> 0xB) << 0xB) + 4);
    }
}
