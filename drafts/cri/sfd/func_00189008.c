/* Draft (not built): func_00189008 at 0x00189008, size 0x48, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00189008.c:8: `sp4' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00189008.s */

s32 func_0018AA80(s32, void *);                 /* extern */

void func_00189008(u8 *arg0, s32 *arg1, s32 *arg2) {
    func_0018AA80(*(s32 *)((u8 *)arg0 + 0x1CBC), sp);
    *arg1 = sp0;
    *arg2 = sp4;
}
