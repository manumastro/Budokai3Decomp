/* Draft (not built): func_0019C810 at 0x0019C810, size 0x60, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019C810.s */

s32 func_0019C8D0(s32, s32);                        /* extern */

void func_0019C810(u8 *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_v0;

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_a2_2 = temp_a2 + 1;
    *(s32 *)((u8 *)(((temp_a2 % (s32) *(s32 *)((u8 *)arg0 + 0x10)) * 4) + arg0) + 0x18) = arg1;
    *(s32 *)((u8 *)arg0 + 0x14) = temp_a2_2;
    temp_v0 = func_0019C8D0(temp_a2_2, arg0 + 0x14);
    *(s32 *)((u8 *)arg0 + 0x1A8) = temp_v0;
    *(s32 *)((u8 *)arg0 + 0x1A4) = temp_v0;
}
