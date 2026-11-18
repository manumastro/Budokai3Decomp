/* Draft (not built): func_00190610 at 0x00190610, size 0x1A4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00190610.c:49: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_00190610.s */

u32 func_0017B420(void *);                          /* extern */
s32 func_001908A8(void *, s32, s32 *);          /* extern */
s32 memcpy(void *, u32, s32);                   /* extern */

s32 func_00190610(u8 *arg0, s32 arg1, u32 arg2) {
    s32 sp10;
    s32 var_a1;
    s32 temp_s0;
    s32 temp_v0_4;
    s32 var_v0;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 temp_v1;

    var_v0 = 1;
    sp10 = arg1;
    if (arg2 != 0) {
        temp_v1 = *(u32 *)((u8 *)arg0 + 0);
        if (arg2 != temp_v1) {
            if (arg2 < temp_v1) {
                goto block_12;
            }
            temp_v0 = temp_v1 + *(s32 *)((u8 *)arg0 + 4);
            if (arg2 >= temp_v0) {
block_12:
                var_v0 = 1;
                if (arg2 >= *(u32 *)((u8 *)arg0 + 8)) {
                    temp_v0_2 = *(u32 *)((u8 *)arg0 + 8) + *(s32 *)((u8 *)arg0 + 0xC);
                    if (arg2 >= temp_v0_2) {
                        return 1;
                    }
                    var_v0 = 1;
                    if (((arg2 - temp_v0_2) + 4) <= 0) {
                        goto block_17;
                    }
                    /* Duplicate return node #37. Try simplifying control flow for better match */
                    return var_v0;
                }
                /* Duplicate return node #37. Try simplifying control flow for better match */
                return var_v0;
            }
            temp_s0 = (arg2 - temp_v0) + 4;
            if (temp_s0 > 0) {
                var_v0 = 1;
                if (*(s32 *)((u8 *)arg0 + 0xC) >= temp_s0) {
                    memcpy(sp, arg2, 4 - temp_s0);
                    memcpy((sp - temp_s0) + 4, *(u32 *)((u8 *)arg0 + 8), temp_s0);
                    goto block_18;
                }
                /* Duplicate return node #37. Try simplifying control flow for better match */
                return var_v0;
            }
block_17:
block_18:
            temp_v0_3 = func_0017B420(sp);
            if (temp_v0_3 != 8) {
                if (temp_v0_3 < 9U) {
                    if (temp_v0_3 != 4) {
                        return 1;
                    }
                    if (sp10 & 0x48) {
                        var_a1 = 4;
                        goto block_30;
                    }
                    goto block_36;
                }
                if ((temp_v0_3 != 0x40) && (temp_v0_3 != 0x80)) {
                    return 1;
                }
                goto block_36;
            }
            if (sp10 & 0x40) {
                var_a1 = 8;
block_30:
                temp_v0_4 = func_001908A8(arg0, var_a1, &sp10);
                if (temp_v0_4 == 0) {
                    return 1;
                }
                if (temp_v0_4 == arg2) {
                    return 1;
                }
                goto block_36;
            }
block_36:
            var_v0 = 0;
            /* Duplicate return node #37. Try simplifying control flow for better match */
            return var_v0;
        }
    }
    return var_v0;
}
