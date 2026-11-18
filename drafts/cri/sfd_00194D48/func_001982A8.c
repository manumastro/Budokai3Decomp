/* Draft (not built): func_001982A8 at 0x001982A8, size 0x20, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001982A8.s */

s32 func_0018B770(s32);                             /* extern */

s32 func_001982A8(u8 *arg0) {
    return func_0018B770(*(s32 *)((u8 *)arg0 + 0x1BF4)) != 0;
}
