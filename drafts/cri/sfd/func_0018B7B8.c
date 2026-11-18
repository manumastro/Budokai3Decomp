/* Draft (not built): func_0018B7B8 at 0x0018B7B8, size 0x28, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018B7B8.c:7: `spC' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018B7B8.s */

s32 func_0018AA68(void *);                      /* extern */

s32 func_0018B7B8(void) {
    func_0018AA68(sp);
    return sp4 + spC;
}
