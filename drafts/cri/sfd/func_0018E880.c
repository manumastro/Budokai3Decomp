/* Draft (not built): func_0018E880 at 0x0018E880, size 0x6C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018E880.c:7: `sp4' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018E880.s */

s32 func_00178BA8(s32, s32, s32);               /* extern */

s32 func_0018E880(u8 **arg0, s32 arg1) {
    (*(s32 (**)(s32, u8 *))((u8 *)(*arg0) + 0x18))(0, sp);
    func_00178BA8(sp0, arg1, sp4);
    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg0) + 0x20))(arg0, 1, sp);
    return sp4;
}
