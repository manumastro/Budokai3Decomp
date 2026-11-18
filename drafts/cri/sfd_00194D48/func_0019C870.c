/* Draft (not built): func_0019C870 at 0x0019C870, size 0x5C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019C870.s */

s32 func_0019C8D0(void *);                          /* extern */

void func_0019C870(u8 *arg0, s32 arg1) {
    s32 *var_v1;
    s32 var_a0;

    var_a0 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x10) > 0) {
        var_v1 = arg0 + 0x18;
        do {
            var_a0 += 1;
            *var_v1 -= arg1;
            var_v1 += 4;
        } while (var_a0 < *(s32 *)((u8 *)arg0 + 0x10));
    }
    *(s32 *)((u8 *)arg0 + 0x1A8) = func_0019C8D0(arg0);
}
