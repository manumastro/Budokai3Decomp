/* Draft (not built): func_001849A8 at 0x001849A8, size 0x48, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001849A8.c:10: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_001849A8.s */

s32 func_0019F8A8(s32, void *, s32 *);          /* extern */

void func_001849A8(u8 *arg0, u8 *arg2) {
    s32 sp4;

    func_0019F8A8(*(s32 *)((u8 *)arg0 + 0xAC), sp, &sp4);
    *(s32 *)((u8 *)arg2 + 0x58) = 0;
    *(s32 *)((u8 *)arg2 + 0x50) = sp0;
    *(s32 *)((u8 *)arg2 + 0x54) = sp4;
    *(s32 *)((u8 *)arg2 + 0x5C) = 0;
}
