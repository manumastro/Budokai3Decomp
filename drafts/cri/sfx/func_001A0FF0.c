/* Draft (not built): func_001A0FF0 at 0x001A0FF0, size 0x60, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_001A0FF0.s */

s32 func_00127E88(s32, s32 *, s32);         /* extern */
s32 func_001A0F28();                                /* extern */
extern s32 D_00467F58;

s32 func_001A0FF0(s32 arg0, s32 arg1) {
    s32 var_v0;

    if (arg0 != 0) {
        if (arg1 < 0) {
            goto block_2;
        }
        var_v0 = func_001A0F28();
        if (var_v0 != 0) {
            var_v0 = func_00127E88(arg0 + 0x14, &D_00467F58, 1) == 0;
        }
        return var_v0;
    }
block_2:
    return 0;
}
