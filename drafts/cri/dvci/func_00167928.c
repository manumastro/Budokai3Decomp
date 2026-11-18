/* Draft (not built): func_00167928 at 0x00167928, size 0x168, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/dvci/func_00167928.s */

s32 func_00166F70(s32, s32, s32, u32);              /* extern */
s32 func_00167290(s32, s32);                        /* extern */
s32 func_00167530();                            /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
s32 scePrintf(s32 *, s32);              /* extern */
extern s32 D_00413740;
extern s32 D_00413758;
extern s32 D_00463790;
extern s32 D_004637C0;
extern s32 D_0047F040;

s32 func_00167928(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 *var_a0;
    s32 temp_s5;
    s32 var_v0;
    u32 temp_lo;

    temp_s5 = M2C_ERROR(/* Read from unset register $t0 */);
    memset(&D_0047F040, 0, 0x1000);
    if (D_00413740 != 0) {
        func_00167530();
    }
    if ((arg0 == 0) || (arg2 == 0) || (arg1 == 0) || (arg3 == 0)) {
        func_00167530();
    }
    var_v0 = 0;
    if (arg0 != 0) {
        if (arg2 == 0) {
            var_v0 = 0;
            if (D_00413758 == 0) {
                var_a0 = &D_00463790;
                goto block_17;
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return var_v0;
        }
        if (arg1 != 0) {
            if (arg3 == 0) {
                goto block_15;
            }
            temp_lo = arg3 / (u32) (temp_s5 + 9);
            var_v0 = (temp_lo * 8) + (func_00167290(arg2, func_00166F70(arg2, arg0, arg1, temp_lo)) * (temp_s5 + 1));
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return var_v0;
        }
block_15:
        var_v0 = 0;
        if (D_00413758 == 0) {
            var_a0 = &D_004637C0;
block_17:
            scePrintf(var_a0, 0);
            return 0;
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
