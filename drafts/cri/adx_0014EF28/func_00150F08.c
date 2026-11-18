/* Draft (not built): func_00150F08 at 0x00150F08, size 0x64, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00150F08.c:11: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00150F08.s */

s32 func_001503A0(s32, s32, void *, u16 *);     /* extern */
s32 strlen(s32);                                    /* extern */

void func_00150F08(u8 *arg0, s32 arg1) {
    u16 sp2;
    u16 sp4;

    func_001503A0(arg1, strlen(arg1), sp, &sp2);
    *(u16 *)((u8 *)arg0 + 0xA0) = sp0;
    *(u16 *)((u8 *)arg0 + 0xA4) = sp4;
    *(u16 *)((u8 *)arg0 + 0xA2) = sp2;
}
