/* Draft (not built): func_0019D078 at 0x0019D078, size 0x30, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019D078.s */

s32 func_0019D0A8(s32, s32);                    /* extern */

s32 func_0019D078(s32 arg0) {
    s32 temp_a1;
    u8 *temp_v0;

    temp_a1 = arg0 + 0x31B0;
    temp_v0 = arg0 + 0x1E00;
    *(s32 *)((u8 *)temp_v0 + 8) = temp_a1;
    func_0019D0A8(temp_a1, *(s32 *)((u8 *)temp_v0 + 0x10));
    return 0;
}
