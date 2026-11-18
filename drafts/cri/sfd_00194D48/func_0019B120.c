/* Draft (not built): func_0019B120 at 0x0019B120, size 0xA8, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 32 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019B120.s */

void func_0019B120(s32 arg0, u8 *arg1, s32 *arg2, s32 *arg3) {
    s32 temp_t0;

    temp_t0 = *(s32 *)((u8 *)arg1 + 0xC);
    *arg2 = (((((*(s32 *)((u8 *)arg1 + 0x10) * 0x1E) + (temp_t0 / 10)) * 2) + ((*(s32 *)((u8 *)arg1 + 8) * 0x34B54) + (temp_t0 * 0xE0E)) + (*(s32 *)((u8 *)arg1 + 0x14) + *(s32 *)((u8 *)arg1 + 0x18))) * 0x3E8) + (*(s16 *)((u8 *)arg1 + 0x1E) * 0x1F4);
    *arg3 = arg0;
}
