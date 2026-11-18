/* Draft (not built): func_00174758 at 0x00174758, size 0x40, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_00174758.s */

s32 memcpy(s32, s32, void *);                   /* extern */

void func_00174758(u8 *arg0, s32 arg2) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_v0;
    u8 *temp_a3;

    temp_a3 = arg0 + 0x148;
    temp_v0 = *(s32 *)((u8 *)temp_a3 + 8);
    temp_a2 = *(s32 *)((u8 *)temp_a3 + 4) - temp_v0;
    temp_a2_2 = (arg2 < temp_a2) ? arg2 : temp_a2;
    *(s32 *)((u8 *)temp_a3 + 8) = (s32) (temp_v0 + temp_a2_2);
    memcpy(*(s32 *)((u8 *)arg0 + 0x148) + temp_v0, temp_a2_2, temp_a3);
}
