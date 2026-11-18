/* Draft (not built): func_00150F70 at 0x00150F70, size 0x44, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: error: d_00150F70.c:9: too few arguments to function `strlen'
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00150F70.s */

s32 func_001503A0(s32, s32, s32 *, s32 *); /* extern */
s32 strlen();                                       /* extern */
extern s32 D_0040109C;
extern s32 D_0040109E;

void func_00150F70(s32 arg0) {
    func_001503A0(arg0, strlen(), &D_0040109C, &D_0040109E);
}
