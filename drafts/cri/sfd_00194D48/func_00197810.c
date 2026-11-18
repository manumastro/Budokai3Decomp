/* Draft (not built): func_00197810 at 0x00197810, size 0x20, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 7 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197810.s */

s32 func_00197810(u8 *arg0) {
    s32 var_v0;

    var_v0 = -1;
    if (*(s32 *)((u8 *)arg0 + 4) != 0) {
        var_v0 = ((u32) *(u32 *)((u8 *)arg0 + 0x40) >= 0x32D8U) ? 0 : -1;
    }
    return var_v0;
}
