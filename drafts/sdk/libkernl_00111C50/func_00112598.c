/* Draft (not built): func_00112598 at 0x00112598, size 0x70, segment sdk/libkernl_00111C50 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00111C50/func_00112598.s */

s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_003EC6D8;
extern s32 D_00474C40;
extern s32 D_00474C80;
extern s32 D_00474CC0;

s32 func_00112598(s32 arg0) {
    s32 var_v0;

    if ((D_003EC6D8 < 0) || (D_00474CC0 = arg0, var_v0 = D_00474C80, (sceSifCallRpc(&D_00474C40, 1, 0, &D_00474CC0, 0) < 0))) {
        var_v0 = 0;
    }
    return var_v0;
}
