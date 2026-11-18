/* Draft (not built): func_0015C478 at 0x0015C478, size 0x64, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0015C478.c:11: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C478.s */

s32 func_0015A120(s32, s32, void *, u16 *);     /* extern */
s32 strlen(s32);                                    /* extern */

void func_0015C478(u8 *arg0, s32 arg1) {
    u16 sp2;
    u16 sp4;

    func_0015A120(arg1, strlen(arg1), sp, &sp2);
    *(u16 *)((u8 *)arg0 + 0x2D0) = sp0;
    *(u16 *)((u8 *)arg0 + 0x2D4) = sp4;
    *(u16 *)((u8 *)arg0 + 0x2D2) = sp2;
}
