/* Draft (not built): func_0019ED60 at 0x0019ED60, size 0x20, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019ED60.s */

s32 func_0019FAC0();                            /* extern */

void func_0019ED60(u8 *arg0, s32 arg3) {
    *(s32 *)((u8 *)arg0 + 0x48) = (s32) M2C_ERROR(/* Read from unset register $t0 */);
    *(s32 *)((u8 *)arg0 + 0x44) = arg3;
    func_0019FAC0();
}
