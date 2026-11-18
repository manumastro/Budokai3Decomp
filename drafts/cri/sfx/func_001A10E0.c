/* Draft (not built): func_001A10E0 at 0x001A10E0, size 0x68, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_001A10E0.s */

s32 func_00127E88(s32, s32 *, s32);         /* extern */
u32 func_001A0F28();                                /* extern */
extern s32 D_00467F20;

s32 func_001A10E0(s32 arg0, s32 arg1) {
    s32 var_v0;

    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    var_v0 = 0;
    if (func_001A0F28() >= 2U) {
        var_v0 = func_00127E88(arg0 + 0x16, &D_00467F20, 1) != 0;
    }
    return var_v0;
}
