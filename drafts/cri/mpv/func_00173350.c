/* Draft (not built): func_00173350 at 0x00173350, size 0x24, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00173350.s */

void func_00173350(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_a0;
    u8 *temp_a0_2;

    temp_a0 = arg0 + (arg1 * 0xC);
    temp_a0_2 = temp_a0 + 0x118;
    *(s32 *)((u8 *)temp_a0_2 + 8) = (s32) M2C_ERROR(/* Read from unset register $t0 */);
    *(s32 *)((u8 *)temp_a0 + 0x118) = arg2;
    *(s32 *)((u8 *)temp_a0_2 + 4) = arg3;
}
