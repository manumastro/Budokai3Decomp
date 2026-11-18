/* Draft (not built): func_001518A0 at 0x001518A0, size 0x120, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_001518A0.c:43: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_001518A0.s */

s32 func_001518A0(u8 *arg0, s16 *arg2, s8 *arg3, s32 *arg_sp0, s32 *arg_sp8, s16 *arg_sp10) {
    s32 var_v0;
    u32 temp_v0;
    u8 temp_a0;

    *arg2 = *(u8 *)((u8 *)arg0 + 7) * 0x10;
    *M2C_ERROR(/* Read from unset register $t2 */) = (*(u8 *)((u8 *)arg0 + 9) & 3) + 1;
    *M2C_ERROR(/* Read from unset register $t3 */) = (s32) *(u16 *)((u8 *)arg0 + 0x2A);
    temp_a0 = *(u8 *)((u8 *)arg0 + 8);
    switch (temp_a0) {                              /* irregular */
    case 0:
        *M2C_ERROR(/* Read from unset register $t0 */) = 0x10;
        *M2C_ERROR(/* Read from unset register $t1 */) = *M2C_ERROR(/* Read from unset register $t2 */) * 2;
        *arg_sp8 = 1;
        *arg_sp10 = 0;
        temp_v0 = *(u32 *)((u8 *)arg0 + 0xC);
        var_v0 = (s32) (temp_v0 + (temp_v0 >> 0x1F)) >> 1;
block_15:
        *arg_sp0 = var_v0;
        break;
    case 1:
        *M2C_ERROR(/* Read from unset register $t0 */) = 8;
        *M2C_ERROR(/* Read from unset register $t1 */) = *M2C_ERROR(/* Read from unset register $t2 */);
        *arg_sp8 = (s32) temp_a0;
        *arg_sp10 = (s16) temp_a0;
        var_v0 = (s32) *(u32 *)((u8 *)arg0 + 0xC);
        goto block_15;
    default:
        *M2C_ERROR(/* Read from unset register $t0 */) = 4;
        *M2C_ERROR(/* Read from unset register $t1 */) = *M2C_ERROR(/* Read from unset register $t2 */);
        *arg_sp8 = 2;
        *arg_sp10 = 2;
        var_v0 = *(u32 *)((u8 *)arg0 + 0xC) * 2;
        goto block_15;
    }
    *M2C_ERROR(/* Read from unset register $t1 */) = 2;
    *arg_sp8 = 1;
    *arg_sp0 = (s32) *(u32 *)((u8 *)arg0 + 0xC) / 2;
    *M2C_ERROR(/* Read from unset register $t0 */) = 0x10;
    *arg3 = -1;
    return 0;
}
