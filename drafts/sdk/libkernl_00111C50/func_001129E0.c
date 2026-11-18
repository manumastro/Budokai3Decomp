/* Draft (not built): func_001129E0 at 0x001129E0, size 0x7C, segment sdk/libkernl_00111C50 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00111C50/func_001129E0.s */

s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_003EC6D8;
extern s32 D_00474C40;
extern s32 D_00474C80;
extern s32 D_00474CC0;

s32 func_001129E0(s32 arg0) {
    if (D_003EC6D8 < 0) {
        return 0;
    }
    D_00474CC0 = arg0;
    if (sceSifCallRpc(&D_00474C40, 9, 0, &D_00474CC0, 0) >= 0) {
        return D_00474C80;
    }
    return 0xFFFFFFFF;
}
