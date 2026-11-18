/* Draft (not built): func_0017EF98 at 0x0017EF98, size 0xE4, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0017EF98.c:43: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/mpv/func_0017EF98.s */

void func_0017EF98(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_t5_2;
    s32 temp_t6;
    s32 temp_v0;
    s32 temp_v1;

    temp_t5 = *(s32 *)((u8 *)arg0 + 0x14);
    temp_t6 = *(s32 *)((u8 *)arg0 + 0);
    temp_t5_2 = (temp_t5 <= 0) int 1 : temp_t5;
    temp_t4 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_t6 == 2) {
        *arg1 = (((s32) ((temp_t4 < 0) int (temp_t4 + 0x3FFF) : temp_t4) >> 0xE) * temp_t5_2) << 0xB;
        *arg2 = 0;
        *arg3 = 0;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        *M2C_ERROR(/* Read from unset register $t0 */) = 0;
        *M2C_ERROR(/* Read from unset register $t1 */) = 0;
        *M2C_ERROR(/* Read from unset register $t2 */) = 0;
        return;
    }
    if (temp_t6 == 3) {
        temp_v1 = (s32) ((temp_t4 < 0) int (temp_t4 + 0x3FFF) : temp_t4) >> 0xE;
        *arg1 = (temp_v1 * temp_t5_2) << 0xB;
        *arg2 = 0;
        *arg3 = (temp_v1 << 0xA) + 0x800;
        *M2C_ERROR(/* Read from unset register $t0 */) = 0;
        *M2C_ERROR(/* Read from unset register $t1 */) = 0;
        *M2C_ERROR(/* Read from unset register $t2 */) = 0;
        return;
    }
    temp_v0 = (s32) ((temp_t4 < 0) int (temp_t4 + 0x3FFF) : temp_t4) >> 0xE;
    *arg1 = (temp_v0 * temp_t5_2) << 0xB;
    *arg2 = 0;
    *arg3 = (temp_v0 << 0xA) + 0x800;
    *M2C_ERROR(/* Read from unset register $t0 */) = 0x5DCC;
    *M2C_ERROR(/* Read from unset register $t1 */) = 0x5F0C;
    *M2C_ERROR(/* Read from unset register $t2 */) = 0x81C0;
}
