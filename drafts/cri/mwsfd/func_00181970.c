/* Draft (not built): func_00181970 at 0x00181970, size 0x28, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00181970.s */

s32 func_00181970(u8 *arg0) {
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x84);
    temp_v0 = *(s32 *)((u8 *)arg0 + 0x80);
    var_a0 = temp_a1 + 1;
    if (temp_a1 >= temp_v0) {
        var_a0 = ((temp_v0 ^ temp_a1) == 0) ? temp_a1 : 0;
    }
    return var_a0;
}
