/* Draft (not built): func_00121C78 at 0x00121C78, size 0x140, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: : d_00121C78.c:49: warning: left shift count >= width of type
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_00121C78.s */

s32 func_00121538(u32 *);                       /* extern */
s32 func_00121610(s64 *, u32 *);                /* extern */
extern u32 D_0045EA90;

void func_00121C78(s64 arg0, s64 arg1) {
    u32 sp0;
    s32 sp4;
    s32 sp8;
    u64 sp10;
    u32 sp20;
    s64 sp40;
    s64 sp48;
    s32 temp_v0;
    s32 var_a1;
    s64 var_a3;
    u32 *var_a0;
    u64 var_a0_2;
    u64 var_v0;
    u64 var_v1;

    sp40 = arg0;
    sp48 = arg1;
    func_00121610(&sp40, sp);
    func_00121610(&sp48, &sp20);
    var_a0 = sp;
    if (sp0 >= 2U) {
        var_a0 = &sp20;
        if (sp20 >= 2U) {
            sp4 ^= sp24;
            if (((sp0 ^ 4) == 0) || ((sp0 ^ 2) == 0)) {
                if (sp0 != sp20) {
                    var_a0 = sp;
                } else {
                    var_a0 = &D_0045EA90;
                }
            } else if ((sp20 ^ 4) != 0) {
                if ((sp20 ^ 2) != 0) {
                    var_a0_2 = sp10;
                    temp_v0 = sp8 - sp28;
                    var_a1 = var_a0_2 < sp30;
                    sp8 = temp_v0;
                    if (var_a1 != 0) {
                        var_a0_2 *= 2;
                        sp8 = temp_v0 - 1;
                        var_a1 = var_a0_2 < sp30;
                    }
                    var_v1 = 0x8000 << 0x2D;
                    var_a3 = 0;
                    do {
                        var_v0 = var_a0_2 * 2;
                        if (var_a1 == 0) {
                            var_a3 |= var_v1;
                            var_v0 = (var_a0_2 - sp30) * 2;
                        }
                        var_v1 = var_v1 >> 1;
                        var_a1 = var_v0 < sp30;
                        var_a0_2 = var_v0;
                    } while (var_v1 != 0);
                    *(s64 *)((u8 *)sp + 0x10) = var_a3;
                    var_a0 = sp;
                } else {
                    var_a0 = sp;
                    sp0 = 4;
                }
            } else {
                sp10 = 0;
                var_a0 = sp;
                sp8 = 0;
            }
        }
    }
    func_00121538(var_a0);
}
