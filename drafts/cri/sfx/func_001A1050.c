/* Draft (not built): func_001A1050 at 0x001A1050, size 0x90, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfx/func_001A1050.s */

s32 func_00127E88(s32, s32 *, s32);         /* extern */
u32 func_001A0F28();                                /* extern */
extern s32 D_00467F50;
extern s32 D_00467F58;

s32 func_001A1050(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_v0;
    s32 var_v1;

    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    var_v0 = 0;
    if (func_001A0F28() >= 2U) {
        temp_s0 = arg0 + 0x15;
        var_v1 = 1;
        if (func_00127E88(temp_s0, &D_00467F50, 1) != 0) {
            var_v1 = (func_00127E88(temp_s0, &D_00467F58, 1) != 0) ? 0 : 2;
        }
        var_v0 = var_v1;
    }
    return var_v0;
}
