/* Draft (not built): func_00191018 at 0x00191018, size 0x5C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00191018.c:13: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_00191018.s */

s32 func_00191F48(void *, void *);              /* extern */
s32 func_0019AE10(void *, s32 *, s32 *, s32); /* extern */

s32 func_00191018(u8 *arg0) {
    s32 sp20;
    s32 sp24;
    s32 var_v0;

    var_v0 = 0;
    if (*(s32 *)((u8 *)arg0 + 0xD28) != 0) {
        func_00191F48(arg0 + 0xD2C, sp);
        func_0019AE10(sp, &sp20, &sp24, 0);
        var_v0 = sp20 - *(s32 *)((u8 *)(arg0 + 0xCFC) + 0x24);
    }
    return var_v0;
}
