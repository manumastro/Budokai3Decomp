/* Draft (not built): func_00193D18 at 0x00193D18, size 0xC4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00193D18.s */

extern s32 D_00492988;
extern s32 D_004929B0;
extern s32 D_004929B8;

s32 func_00193D18(void) {
    s32 *var_a0;
    s32 *var_a0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;

    if ((u32) (*(s32 *)((u8 *)(&D_00492988) + 0x1C) - 1) < 0x10U) {
        if (*(s32 *)((u8 *)(&D_00492988) + 0x10) != 0) {
            if (*(s32 *)((u8 *)(&D_00492988) + 0x20) == 0) {
                goto block_8;
            }
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return 0;
        }
block_8:
        var_v1 = 0;
        var_a0 = &D_004929B0;
        var_v0 = D_004929B0;
loop_9:
        var_a0 += 4;
        if (var_v0 != 0) {
            var_v1 += 1;
            if (var_v1 < 2) {
                var_v0 = *var_a0;
                goto loop_9;
            }
            var_v1_2 = 0;
            if (*(s32 *)((u8 *)(&D_00492988) + 0x1C) > 0) {
                var_a0_2 = &D_004929B8;
                var_v0_2 = D_004929B8;
loop_15:
                var_a0_2 += 4;
                if (var_v0_2 != 0) {
                    var_v1_2 += 1;
                    if (var_v1_2 < *(s32 *)((u8 *)(&D_00492988) + 0x1C)) {
                        var_v0_2 = *var_a0_2;
                        goto loop_15;
                    }
                    /* Duplicate return node #19. Try simplifying control flow for better match */
                    return 0;
                }
                /* Duplicate return node #3. Try simplifying control flow for better match */
                return -1;
            }
            return 0;
        }
        /* Duplicate return node #3. Try simplifying control flow for better match */
        return -1;
    }
    return -1;
}
