/* Draft (not built): func_0019BB90 at 0x0019BB90, size 0x48, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019BB90.s */

void func_0019BB90(u8 *arg0, s32 arg1) {
    s32 *var_v0;
    s32 var_v1;

    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 0) = 0;
    var_v1 = 2;
    *(s32 *)((u8 *)arg0 + 0xC) = arg1;
    *(s32 *)((u8 *)arg0 + 0x10) = 8;
    var_v0 = arg0 + 0x1C;
    do {
        var_v1 -= 1;
        *var_v0 = 8;
        var_v0 -= 4;
    } while (var_v1 >= 0);
    *(s32 *)((u8 *)arg0 + 0x20) = -1;
}
