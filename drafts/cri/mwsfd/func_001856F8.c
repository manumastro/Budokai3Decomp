/* Draft (not built): func_001856F8 at 0x001856F8, size 0x4C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001856F8.c:9: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_001856F8.s */

s32 func_0019F8A8(s32, void *, s32 *);          /* extern */

void func_001856F8(u8 *arg0, s32 *arg1, s32 *arg2) {
    s32 sp4;

    func_0019F8A8(*(s32 *)((u8 *)arg0 + 0xAC), sp, &sp4);
    *arg1 = sp0;
    *arg2 = sp4;
}
