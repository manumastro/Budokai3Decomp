/* Draft (not built): func_00195758 at 0x00195758, size 0x4C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00195758.s */

s32 SignalSema(s32, s32);                       /* extern */
s32 WaitSema(s32);                              /* extern */

void func_00195758(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;

    WaitSema(*(s32 *)((u8 *)arg0 + 0x40));
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_v0 = temp_v1 + 0x803;
    temp_a1 = temp_v0 < 0;
    *(s32 *)((u8 *)arg0 + 0x14) = (s32) (((s32) ((temp_a1 != 0) ? (temp_v1 + 0x1002) : temp_v0) >> 0xB) << 0xB);
    SignalSema(*(s32 *)((u8 *)arg0 + 0x40), temp_a1);
}
