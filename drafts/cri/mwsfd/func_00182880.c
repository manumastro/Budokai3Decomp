/* Draft (not built): func_00182880 at 0x00182880, size 0x5C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00182880.c:9: `sp14' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_00182880.s */

s32 func_00198128(s32, void *);                 /* extern */

void func_00182880(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    func_00198128(*(s32 *)((u8 *)arg0 + 0x40), sp);
    *arg2 = sp4;
    *arg1 = sp0;
    *arg3 = sp14;
}
