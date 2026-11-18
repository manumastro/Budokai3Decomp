/* Draft (not built): func_001162F0 at 0x001162F0, size 0x24, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_001162F0.s */

s32 memset(s32 *, s32);                 /* extern */
extern s32 D_003EDCE8;
extern s32 D_003EDCEC;
extern s32 D_00478708;

void func_001162F0(void) {
    D_003EDCE8 = 0;
    D_003EDCEC = 0;
    memset(&D_00478708, 0);
}
