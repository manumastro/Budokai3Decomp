/* Draft (not built): func_001864D0 at 0x001864D0, size 0x5C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: pile error: d_001864D0.c:9: for each function it appears in.)
 * Original: asm/nonmatchings/cri/mwsfd/func_001864D0.s */

s32 memset(void *, s32, s32);           /* extern */
s32 mwPlyStartFnameLp(s32, void *);             /* extern */
s32 sprintf(void *, s32 *, s32, u32);       /* extern */
extern s32 D_00467048;

void func_001864D0(s32 arg0, s32 arg1, s32 arg2) {
    sprintf(sp, &D_00467048, arg1, (u32) (arg2 + 0x7FF) >> 0xB);
    mwPlyStartFnameLp(arg0, sp);
    memset(sp, 0, 0x14);
}
