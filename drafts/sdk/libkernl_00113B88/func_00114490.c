/* Draft (not built): func_00114490 at 0x00114490, size 0x34, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00114490.c:8: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114490.s */

s32 func_001143F8(void *, s32, s32);        /* extern */
extern s32 D_003ECD38;

s32 func_00114490(s32 arg0) {
    func_001143F8(sp, D_003ECD38 + (arg0 * 4), 4);
    return sp0;
}
