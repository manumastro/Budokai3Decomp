/* Draft (not built): func_0015D530 at 0x0015D530, size 0x58, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015D530.s */

s32 func_00162AD8();                                /* extern */

s32 func_0015D530(s32 *arg1) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = func_00162AD8();
    temp_v1 = (s32) ((temp_v0 < 0) ? (temp_v0 + 0x7FF) : temp_v0) >> 0xB;
    *arg1 = temp_v1;
    if ((temp_v0 - (temp_v1 << 0xB)) > 0) {
        *arg1 = temp_v1 + 1;
    }
    return 1;
}
