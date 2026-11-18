/* Draft (not built): func_00197680 at 0x00197680, size 0x34, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197680.s */

s32 func_00197EC8();                                /* extern */

void func_00197680(u8 *arg0) {
    if (func_00197EC8() == 0) {
        *(s32 *)((u8 *)arg0 + 0x4C) = 6;
    }
}
