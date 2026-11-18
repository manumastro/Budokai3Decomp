/* Draft (not built): func_00196470 at 0x00196470, size 0x64, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196470.s */

s32 func_001964D8(void *, s32);                     /* extern */
s32 func_0019B1C8();                            /* extern */

s32 func_00196470(u8 *arg0, s32 arg1) {
    if ((u32) (*(s32 *)((u8 *)arg0 + 0x4C) - 3) < 2U) {
        func_0019B1C8();
        return func_001964D8(arg0, arg1);
    }
    return 0;
}
