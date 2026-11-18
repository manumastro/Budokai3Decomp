/* Draft (not built): func_0012C198 at 0x0012C198, size 0x54, segment sdk/libc_00129428 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_0012C198.c:19: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libc_00129428/func_0012C198.s */

s32 vfprintf(void *, s32, s32);                 /* extern */

void func_0012C198(s32 arg0, s8 *arg1, s32 arg2, s32 arg3) {
    s8 *sp0;
    s32 sp8;
    s16 spC;
    s8 *sp10;
    s32 sp14;
    s32 sp54;

    sp54 = arg0;
    sp14 = 0x7FFFFFFF;
    sp8 = 0x7FFFFFFF;
    spC = 0x208;
    sp10 = arg1;
    sp0 = arg1;
    vfprintf(sp, arg2, arg3);
    *sp0 = 0;
}
