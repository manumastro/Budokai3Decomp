/* Draft (not built): func_00164BF8 at 0x00164BF8, size 0x4C, segment cri/srd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/srd/func_00164BF8.s */

s32 func_00164B18(s8);                              /* extern */
s32 func_00164B58(s8);                              /* extern */
extern s8 D_00411599;

s32 func_00164BF8(void) {
    if (D_00411599 == 1) {
        return func_00164B18(D_00411599) * 2;
    }
    if (D_00411599 == 2) {
        return func_00164B58(D_00411599);
    }
    return 0;
}
