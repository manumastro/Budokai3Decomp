/* Draft (not built): func_00121DB8 at 0x00121DB8, size 0x120, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_00121DB8.s */

s32 func_00121DB8(u8 *arg0, u8 *arg1) {
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v1_2;
    u32 temp_a2;
    u32 temp_v1;
    u64 temp_a0;
    u64 temp_v1_3;

    temp_a2 = *(u32 *)((u8 *)arg0 + 0);
    if (temp_a2 >= 2U) {
        temp_v1 = *(u32 *)((u8 *)arg1 + 0);
        if (temp_v1 >= 2U) {
            temp_v0 = temp_v1 ^ 4;
            if ((temp_a2 ^ 4) == 0) {
                if (temp_v0 == 0) {
                    return *(s32 *)((u8 *)arg1 + 4) - *(s32 *)((u8 *)arg0 + 4);
                }
                /* Duplicate return node #21. Try simplifying control flow for better match */
                return (*(s32 *)((u8 *)arg0 + 4) == 0) ? 1 : -1;
            }
            if (temp_v0 != 0) {
                if ((temp_a2 ^ 2) != 0) {
                    if ((temp_v1 ^ 2) != 0) {
                        temp_a3 = *(s32 *)((u8 *)arg0 + 4);
                        if (temp_a3 == *(s32 *)((u8 *)arg1 + 4)) {
                            temp_a2_2 = *(s32 *)((u8 *)arg0 + 8);
                            temp_v1_2 = *(s32 *)((u8 *)arg1 + 8);
                            if (temp_v1_2 >= temp_a2_2) {
                                if (temp_a2_2 >= temp_v1_2) {
                                    temp_v1_3 = *(u64 *)((u8 *)arg0 + 0x10);
                                    temp_a0 = *(u64 *)((u8 *)arg1 + 0x10);
                                    if (temp_a0 >= temp_v1_3) {
                                        if (temp_v1_3 >= temp_a0) {
                                            return 0;
                                        }
                                        /* Duplicate return node #35. Try simplifying control flow for better match */
                                        return (temp_a3 == 0) ? -1 : 1;
                                    }
                                    goto block_29;
                                }
                                return (temp_a3 == 0) ? -1 : 1;
                            }
block_29:
                            /* Duplicate return node #30. Try simplifying control flow for better match */
                            return (temp_a3 == 0) ? 1 : -1;
                        }
                        return (temp_a3 == 0) ? 1 : -1;
                    }
                    return (*(s32 *)((u8 *)arg0 + 4) == 0) ? 1 : -1;
                }
                if ((temp_v1 ^ 2) != 0) {
                    return (*(s32 *)((u8 *)arg1 + 4) != 0) ? 1 : -1;
                }
                return 0;
            }
            return (*(s32 *)((u8 *)arg1 + 4) == 0) ? -1 : 1;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return 1;
    }
    return 1;
}
