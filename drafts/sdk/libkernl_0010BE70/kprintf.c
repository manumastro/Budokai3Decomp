/* Draft (not built): kprintf at 0x0010CFC8, size 0x80, segment sdk/libkernl_0010BE70 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_0010CFC8.c:26: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl_0010BE70/kprintf.s */

s32 DI(s32);                                        /* extern */
s32 EI();                                       /* extern */
s32 func_0010C048(s32 *, void *, s32, s32); /* extern */
extern s32 func_0010CDE0;

void kprintf(s32 arg0, s64 arg1, s64 arg2, s64 arg3) {
    s64 sp88;
    s64 sp90;
    s64 sp98;
    s64 spA0;
    s64 spA8;
    s64 spB0;
    s64 spB8;
    s32 temp_s1;

    sp88 = arg1;
    sp90 = arg2;
    sp98 = arg3;
    spA0 = M2C_ERROR(/* Read from unset register $t0 */);
    spA8 = M2C_ERROR(/* Read from unset register $t1 */);
    spB0 = M2C_ERROR(/* Read from unset register $t2 */);
    spB8 = M2C_ERROR(/* Read from unset register $t3 */);
    temp_s1 = DI(0);
    func_0010C048(&func_0010CDE0, sp, 0xFFFFFFFF, arg0);
    if (temp_s1 != 0) {
        EI();
    }
}
