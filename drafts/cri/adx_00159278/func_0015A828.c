/* Draft (not built): func_0015A828 at 0x0015A828, size 0x78, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015A828.s */

s16 func_0015A828(u8 *arg0, s16 arg1) {
    s16 temp_a1;
    s16 var_v1;

    if (arg0 != NULL) {
        temp_a1 = ((s32) ((*(s16 *)((u8 *)arg0 + 4) * *(s16 *)((u8 *)arg0 + 8)) + (*(s16 *)((u8 *)arg0 + 6) * *(s16 *)((u8 *)arg0 + 0xA))) >> 0xC) + arg1;
        if (temp_a1 < 0x7FFF) {
            var_v1 = (temp_a1 >= -0x8000) ? temp_a1 : -0x8000;
        } else {
            var_v1 = 0x7FFF;
        }
        *(s16 *)((u8 *)arg0 + 0xA) = (s16) (u16) *(s16 *)((u8 *)arg0 + 8);
        *(s16 *)((u8 *)arg0 + 8) = var_v1;
        return var_v1;
    }
    return arg1;
}
