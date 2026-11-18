/* Draft (not built): func_00151C30 at 0x00151C30, size 0x28, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00151C30.s */

s32 memcmp(s32 *, s32);                     /* extern */
extern s32 D_004604A8;

s32 func_00151C30(void) {
    return memcmp(&D_004604A8, 4) == 0;
}
