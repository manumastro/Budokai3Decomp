/* Draft (not built): func_0019CFE8 at 0x0019CFE8, size 0x7C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019CFE8.s */

s32 func_0018B730(void *, s32);                     /* extern */
s32 func_0019C128(void *, s32, s32);    /* extern */
s32 func_0019C140(s32);                         /* extern */
s32 func_0019D068(void *);                          /* extern */

void func_0019CFE8(u8 *arg0) {
    if ((func_0019C140(8) != 1) && (func_0018B730(arg0, *(s32 *)((u8 *)arg0 + 0x1E10)) == 1) && (func_0019D068(arg0) != 0)) {
        func_0019C128(arg0, 8, 1);
    }
}
