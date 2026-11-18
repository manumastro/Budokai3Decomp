/* Draft (not built): func_00181E20 at 0x00181E20, size 0x64, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00181E20.s */

s32 func_00181E88(s32, s32, s32);                   /* extern */

s32 func_00181E20(u8 *arg0) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;

    temp_a2_2 = *(s32 *)((u8 *)arg0 + 0xBC);
    temp_a3 = temp_a2_2 - (((s32) ((temp_a2_2 < 0) ? (temp_a2_2 + 7) : temp_a2_2) >> 3) * 8);
    temp_a2 = *(s32 *)((u8 *)((temp_a3 * 0x14) + arg0) + 0xC4);
    if (temp_a2 != 0) {
        return func_00181E88(temp_a3, temp_a2, temp_a3);
    }
    return 0;
}
