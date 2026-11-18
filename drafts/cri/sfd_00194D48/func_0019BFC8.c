/* Draft (not built): func_0019BFC8 at 0x0019BFC8, size 0x3C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019BFC8.s */

void func_0019BFC8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(s32 *)((u8 *)((arg2 * 4) + (arg0 + (arg1 * 0x44))) + 0x1BF4) = arg3;
    *(s32 *)((u8 *)(arg0 + (arg3 * 0x74)) + 0x12CC) = arg1;
}
