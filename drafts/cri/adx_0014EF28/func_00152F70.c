/* Draft (not built): func_00152F70 at 0x00152F70, size 0x5C, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00152F70.s */

s32 func_00152F70(u8 *arg0, s32 arg1, s16 *arg2) {
    s32 var_v0;
    u16 temp_v1;

    var_v0 = -1;
    if (arg1 >= 0x10) {
        temp_v1 = *(u16 *)((u8 *)arg0 + 0);
        var_v0 = -2;
        if ((((temp_v1 >> 8) | (temp_v1 << 8)) & 0xFFFF) == 0x8001) {
            var_v0 = 0;
            *arg2 = (*(u8 *)((u8 *)arg0 + 3) | ((*(u16 *)((u8 *)arg0 + 2) << 8) & ~0xFF)) + 4;
        }
    }
    return var_v0;
}
