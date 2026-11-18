/* Draft (not built): func_0019EAC0 at 0x0019EAC0, size 0x44, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019EAC0.s */

s32 func_0019EAC0(s32 arg0) {
    s32 var_v0;

    var_v0 = 0xC0;
    if ((u32) (arg0 - 0xC0) >= 0x20U) {
        var_v0 = 0xE0;
        if ((u32) (arg0 - 0xE0) >= 0x10U) {
            var_v0 = 0xBD;
            if (arg0 != 0xBD) {
                var_v0 = 0;
                if (arg0 == 0xBF) {
                    var_v0 = 0xBD;
                }
            }
        }
    }
    return var_v0;
}
