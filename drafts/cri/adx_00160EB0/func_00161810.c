/* Draft (not built): func_00161810 at 0x00161810, size 0x6C, segment cri/adx_00160EB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00160EB0/func_00161810.s */

s32 func_0015D678(s32);                             /* extern */

s32 func_00161810(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    u8 *temp_a0;

    if (arg0 != NULL) {
        temp_v0 = *(s32 *)((u8 *)arg0 + 8);
        if (temp_v0 == 0) {
            temp_a0 = *(u8 **)((u8 *)arg0 + 0x94);
            if (temp_a0 != NULL) {
                temp_v0_2 = *(s32 *)((u8 *)temp_a0 + 0x28);
                if (temp_v0_2 != 0) {
                    return func_0015D678(temp_v0_2);
                }
                return 0;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 0;
        }
        return func_0015D678(temp_v0);
    }
    return 0;
}
