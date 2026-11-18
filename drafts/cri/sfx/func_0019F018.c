/* Draft (not built): func_0019F018 at 0x0019F018, size 0xB8, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 31 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfx/func_0019F018.s */

s32 func_0019ECE0(s32, s32);                        /* extern */

s32 func_0019F018(u8 *arg0, u32 arg1) {
    s32 temp_a2;
    s32 var_s0;
    s32 var_v0;

    var_s0 = 1;
    temp_a2 = *(s32 *)((u8 *)arg0 + 0x38);
    var_v0 = 0;
    if (temp_a2 != 0x64) {
        var_v0 = 1;
        if (temp_a2 == arg1) {
            if (arg1 < 0xEU) {
                if (arg1 < 0xBU) {
                    if (arg1 != 1) {
                        var_v0 = 1;
                        if (arg1 != 0) {
                            if (arg1 != 2) {
                                if (arg1 != 3) {
                                    return 1;
                                }
                                goto block_15;
                            }
                            var_v0 = 1;
                            if (func_0019ECE0(*(s32 *)((u8 *)arg0 + 0x30), temp_a2) != 1) {
                                goto block_15;
                            }
                            /* Duplicate return node #17. Try simplifying control flow for better match */
                            return var_v0;
                        }
                        /* Duplicate return node #17. Try simplifying control flow for better match */
                        return var_v0;
                    }
                    goto block_15;
                }
                goto block_16;
            }
            var_v0 = 1;
            if (arg1 >= 0x15U) {
                if (arg1 >= 0x17U) {

                } else {
block_15:
                    var_s0 = 0;
                }
block_16:
                var_v0 = var_s0;
            }
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
