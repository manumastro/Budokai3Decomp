/* Draft (not built): func_001A13C0 at 0x001A13C0, size 0xC8, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_001A13C0.s */

s32 func_001A1488(s32);                             /* extern */
s32 memcmp(s32, s32 *, s32);                /* extern */
extern s32 D_00467EF8;
extern s32 D_00467F68;

void func_001A13C0(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 var_s0;
    s32 var_s1;

    var_s0 = arg0;
    *arg3 = 0;
    *arg2 = 0;
    if ((var_s0 != 0) && (arg1 > 0) && (arg1 > 0)) {
        var_s1 = arg1;
        do {
            if ((memcmp(var_s0, &D_00467F68, 1) == 0) && (memcmp(var_s0, &D_00467EF8, 8) == 0)) {
                *arg2 = var_s0;
                *arg3 = func_001A1488(var_s0);
            }
            var_s1 -= 1;
            var_s0 += 1;
        } while (var_s1 != 0);
    }
}
