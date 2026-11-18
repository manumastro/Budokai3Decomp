/* Draft (not built): func_00188620 at 0x00188620, size 0x88, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00188620.c:10: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_00188620.s */

s32 func_0016F050(s32, void *);                 /* extern */

void func_00188620(u8 **arg0, s32 arg1, s32 arg2) {
    if (arg1 == 0) {
        (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg0) + 0x1C))();
        return;
    }
    func_0016F050(arg2, sp);
    (*(s32 (**)(u8 **, s32, s32))((u8 *)(*arg0) + 0x20))(arg0, 1, arg2);
    (*(s32 (**)(u8 **, s32, u8 *))((u8 *)(*arg0) + 0x1C))(arg0, 0, sp);
}
