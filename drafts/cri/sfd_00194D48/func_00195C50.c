/* Draft (not built): func_00195C50 at 0x00195C50, size 0x24, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00195C50.s */

s32 func_001953E8(s32);                         /* extern */

s32 func_00195C50(u8 *arg2) {
    func_001953E8(*(s32 *)((u8 *)arg2 + 0x1C70) + 0x1038);
    return 1;
}
