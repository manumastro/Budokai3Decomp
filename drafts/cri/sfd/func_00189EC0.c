/* Draft (not built): func_00189EC0 at 0x00189EC0, size 0x6C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00189EC0.s */

s32 func_0018B730(void *, s32);                     /* extern */
s32 func_0019C128(void *, s32, s32);    /* extern */
s32 func_0019C140(s32);                         /* extern */

void func_00189EC0(u8 *arg0) {
    if ((func_0019C140(7) != 1) && (func_0018B730(arg0, *(s32 *)((u8 *)arg0 + 0x1DCC)) == 1)) {
        func_0019C128(arg0, 7, 1);
    }
}
