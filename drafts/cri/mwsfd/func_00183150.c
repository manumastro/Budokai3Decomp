/* Draft (not built): func_00183150 at 0x00183150, size 0x64, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: pile error: d_00183150.c:8: for each function it appears in.)
 * Original: asm/nonmatchings/cri/mwsfd/func_00183150.s */

s32 memset(void *, s32, s32);           /* extern */
s32 sprintf(void *, s32 *, s32, u32);       /* extern */
extern s32 D_00466118;

void func_00183150(u8 **arg0, s32 arg1, s32 arg2) {
    sprintf(sp, &D_00466118, arg1, (u32) (arg2 + 0x7FF) >> 0xB);
    (*(s32 (**)(u8 **, u8 *))((u8 *)(*arg0) + 0x18))(arg0, sp);
    memset(sp, 0, 0x14);
}
