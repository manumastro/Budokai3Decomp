/* Draft (not built): func_0019AEB0 at 0x0019AEB0, size 0x8C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 29 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019AEB0.s */

void func_0019AEB0(s32 arg0, u8 *arg1, s32 *arg2, s32 *arg3) {
    *arg2 = (*(s32 *)((u8 *)arg1 + 0x10) * arg0) + (*(s16 *)((u8 *)arg1 + 0x1E) * 0x1F4) + ((*(s32 *)((u8 *)arg1 + 8) * arg0 * 0xE10) + (*(s32 *)((u8 *)arg1 + 0xC) * arg0 * 0x3C) + ((*(s32 *)((u8 *)arg1 + 0x14) + *(s32 *)((u8 *)arg1 + 0x18)) * 0x3E8));
    *arg3 = arg0;
}
