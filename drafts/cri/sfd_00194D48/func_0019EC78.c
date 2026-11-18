/* Draft (not built): func_0019EC78 at 0x0019EC78, size 0x3C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019EC78.s */

s32 func_00172110(s32, s32, s32, s32);          /* extern */

void func_0019EC78(u8 *arg0, s32 arg2) {
    u8 *temp_v0;

    temp_v0 = arg0 + 8;
    func_00172110(*(s32 *)((u8 *)arg0 + 8), *(s32 *)((u8 *)temp_v0 + 4), *(s32 *)((u8 *)temp_v0 + 8), arg2);
    *(s32 *)((u8 *)arg0 + 4) = 0;
}
