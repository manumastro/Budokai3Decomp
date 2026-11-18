/* Draft (not built): func_0017C840 at 0x0017C840, size 0x24, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_0017C840.s */

void func_0017C840(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_a0;
    u8 *temp_a0_2;

    temp_a0 = arg0 + (arg1 * 0xC);
    temp_a0_2 = temp_a0 + 0x3B8;
    *(s32 *)((u8 *)temp_a0_2 + 8) = (s32) M2C_ERROR(/* Read from unset register $t0 */);
    *(s32 *)((u8 *)temp_a0 + 0x3B8) = arg2;
    *(s32 *)((u8 *)temp_a0_2 + 4) = arg3;
}
