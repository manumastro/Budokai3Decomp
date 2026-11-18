/* Draft (not built): func_00112880 at 0x00112880, size 0x70, segment sdk/libkernl_00111C50 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00111C50/func_00112880.s */

s32 sceSifCallRpc(s32 *, s32, s32, s32, s32); /* extern */
extern s32 D_003EC6D8;
extern s32 D_00474C40;
extern s32 D_00474C80;

s32 func_00112880(void) {
    if (D_003EC6D8 < 0) {
        return 0;
    }
    if (sceSifCallRpc(&D_00474C40, 6, 0, 0, 0) >= 0) {
        return D_00474C80;
    }
    return 0xFFFFFFFF;
}
