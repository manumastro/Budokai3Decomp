/* Draft (not built): func_00127738 at 0x00127738, size 0xD8, segment sdk/libc_00127738 (asm)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 36 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/sdk/libc_00127738.s */

extern s32 D_0045EAA9;

s32 func_00127738(s8 *arg0, s8 *arg1) {
    s8 *var_t0;
    s8 *var_t1;
    s8 temp_a1_2;
    s8 temp_a1_3;
    s8 temp_a2;
    s8 temp_a3;
    u8 temp_a1;
    u8 temp_v0;

    var_t0 = arg0;
    temp_a3 = *var_t0;
    var_t1 = arg1;
    if (temp_a3 != 0) {
        temp_a1_2 = *var_t1;
        if ((!(*(&D_0045EAA9 + temp_a3) & 1) ? temp_a3 : (temp_a3 + 0x20)) == (!(*(&D_0045EAA9 + temp_a1_2) & 1) ? temp_a1_2 : (temp_a1_2 + 0x20))) {
loop_2:
            var_t0 += 1;
            var_t1 += 1;
            temp_a2 = *var_t0;
            if (temp_a2 != 0) {
                temp_a1_3 = *var_t1;
                if (((*(&D_0045EAA9 + temp_a2) & 1) ? (temp_a2 + 0x20) : temp_a2) == (!(*(&D_0045EAA9 + temp_a1_3) & 1) ? temp_a1_3 : (temp_a1_3 + 0x20))) {
                    goto loop_2;
                }
            }
        }
    }
    temp_a1 = *var_t0;
    temp_v0 = *var_t1;
    return ((*(&D_0045EAA9 + temp_a1) & 1) ? (temp_a1 + 0x20) : temp_a1) - ((*(&D_0045EAA9 + temp_v0) & 1) ? (temp_v0 + 0x20) : temp_v0);
}
