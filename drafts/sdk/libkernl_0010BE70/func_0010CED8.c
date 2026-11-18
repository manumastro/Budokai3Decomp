/* Draft (not built): func_0010CED8 at 0x0010CED8, size 0x70, segment sdk/libkernl_0010BE70 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_0010CED8.c:12: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl_0010BE70/func_0010CED8.s */

s32 DI(s32);                                        /* extern */
s32 EI();                                       /* extern */
s32 func_0010C048(s32 *, void *, s32, s32); /* extern */
extern s32 func_0010CDB8;

void func_0010CED8(s32 arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = DI(0);
    func_0010C048(&func_0010CDB8, sp, 0xFFFFFFFF, arg0);
    if (temp_s0 != 0) {
        EI();
    }
}
