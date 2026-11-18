/* Draft (not built): func_0019A288 at 0x0019A288, size 0x34, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A288.s */

s32 func_0019A288(u8 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)((u8 *)arg0 + 0x48) == 4) && (*(s32 *)((u8 *)arg0 + 0x50) == 0)) {
        var_v0 = *(s32 *)((u8 *)(arg0 + 0x94C) + 0x1C) == 0;
    }
    return var_v0;
}
