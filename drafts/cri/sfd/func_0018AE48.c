/* Draft (not built): func_0018AE48 at 0x0018AE48, size 0x58, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018AE48.c:8: `sp4' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018AE48.s */

s32 func_0018AE48(u8 **arg0, s32 arg1) {
    (*(s32 (**)(u8 *))((u8 *)(*arg0) + 0x18))(sp);
    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg0) + 0x20))(arg0, arg1 == 0, sp);
    return sp4;
}
