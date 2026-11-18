/* Draft (not built): func_00116318 at 0x00116318, size 0x7C, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00116318.s */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 memset(s32, s32, s32);                  /* extern */
extern s32 D_003EDCE8;
extern s32 D_003EDCEC;

s32 func_00116318(s32 arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_s3;

    temp_s3 = D_003EDCE8;
    temp_s2 = DI();
    D_003EDCEC = arg1;
    D_003EDCE8 = arg0;
    memset(arg0, 0, arg1 * 0x10);
    if (temp_s2 != 0) {
        EI();
    }
    return temp_s3;
}
