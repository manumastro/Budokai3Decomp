/* Draft (not built): func_00189F30 at 0x00189F30, size 0x6C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00189F30.s */

s32 func_0018B770(void *, s32);                     /* extern */
s32 func_0019C158(void *, s32, s32);    /* extern */
s32 func_0019C170(s32);                         /* extern */

void func_00189F30(u8 *arg0) {
    if ((func_0019C170(7) != 1) && (func_0018B770(arg0, *(s32 *)((u8 *)arg0 + 0x1DCC)) == 1)) {
        func_0019C158(arg0, 7, 1);
    }
}
