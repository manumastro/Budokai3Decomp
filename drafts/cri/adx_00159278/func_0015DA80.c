/* Draft (not built): func_0015DA80 at 0x0015DA80, size 0x4C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: pile error: d_0015DA80.c:8: for each function it appears in.)
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015DA80.s */

s32 func_00155118(void *, s32);                 /* extern */
s32 sprintf(void *, s32 *, s32, u32);       /* extern */
extern s32 D_004617F0;

void func_0015DA80(s32 arg0, s32 arg1, s32 arg2) {
    sprintf(sp, &D_004617F0, arg0, (u32) (arg1 + 0x7FF) >> 0xB);
    func_00155118(sp, arg2);
}
