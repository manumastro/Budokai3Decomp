/* Draft (not built): func_00197E40 at 0x00197E40, size 0x64, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197E40.s */

s32 func_00197EA8(s32);                     /* extern */
s32 func_00197EC8(s32);                         /* extern */
s32 func_00197F28(void *);                          /* extern */

s32 func_00197E40(u8 *arg0) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x48) != 1) {
        var_v0 = func_00197EC8(1);
        if (var_v0 == 0) {
            *(s32 *)((u8 *)arg0 + 0x4C) = 0;
            *(s32 *)((u8 *)arg0 + 0x48) = 0;
            func_00197EA8(1);
            temp_s0 = func_00197F28(arg0);
            func_00197EA8(0);
            var_v0 = temp_s0;
        }
    }
    return var_v0;
}
