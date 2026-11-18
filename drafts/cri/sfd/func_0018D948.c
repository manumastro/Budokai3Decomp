/* Draft (not built): func_0018D948 at 0x0018D948, size 0x24, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018D948.s */

s32 func_0018B710(s32, s32);                /* extern */

s32 func_0018D948(u8 *arg0) {
    func_0018B710(*(s32 *)((u8 *)arg0 + 0x1BF4), 1);
    return 0;
}
