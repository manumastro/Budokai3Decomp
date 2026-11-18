/* Draft (not built): func_001870E8 at 0x001870E8, size 0x94, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_001870E8.s */

s32 func_0012C140(s32 *, s32, s64 *);       /* extern */
s32 func_001871B0(s32 *);                   /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_0048CEC0;

void func_001870E8(s32 arg0, s64 arg1, s64 arg2, s64 arg3, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3, f32 fparg4, f32 fparg5, f32 fparg6, f32 fparg7) {
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    s64 sp48;
    s64 sp50;
    s64 sp58;
    s64 sp60;
    s64 sp68;
    s64 sp70;
    s64 sp78;

    sp48 = arg1;
    sp50 = arg2;
    sp58 = arg3;
    sp60 = M2C_ERROR(/* Read from unset register $t0 */);
    sp68 = M2C_ERROR(/* Read from unset register $t1 */);
    sp70 = M2C_ERROR(/* Read from unset register $t2 */);
    sp78 = M2C_ERROR(/* Read from unset register $t3 */);
    sp28 = fparg0;
    sp2C = fparg1;
    sp30 = fparg2;
    sp34 = fparg3;
    sp38 = fparg4;
    sp3C = fparg5;
    sp40 = fparg6;
    sp44 = fparg7;
    memset(&D_0048CEC0, 0, 0x100);
    func_0012C140(&D_0048CEC0, arg0, &sp48);
    func_001871B0(&D_0048CEC0);
}
