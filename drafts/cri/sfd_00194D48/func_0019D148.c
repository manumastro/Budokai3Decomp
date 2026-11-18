/* Draft (not built): func_0019D148 at 0x0019D148, size 0x14, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 68 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019D148.s */

void func_0019D148(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(s32 *)((u8 *)arg0 + 0xC) = (s32) M2C_ERROR(/* Read from unset register $t0 */);
    *(s32 *)((u8 *)arg0 + 0) = arg1;
    *(s32 *)((u8 *)arg0 + 4) = arg2;
    *(s32 *)((u8 *)arg0 + 8) = arg3;
}
