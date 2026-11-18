/* Draft (not built): ADXT_SetReloadTime at 0x0015F200, size 0xB0, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 36 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_0015EFB0/ADXT_SetReloadTime.s */

f32 ADXERR_CallErrFunc1(s32 *);                 /* extern */
f32 func_0015D4A8(s32, s32, s32, s32);              /* extern */
extern s32 D_00461BF8;

f32 ADXT_SetReloadTime(u8 *arg0, s32 arg1, s32 arg2, f32 fparg0) {
    f32 var_f0;
    s16 temp_a3;
    s32 temp_a3_2;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;

    if (arg0 == NULL) {
        return ADXERR_CallErrFunc1(&D_00461BF8);
    }
    temp_a3 = *(s16 *)((u8 *)arg0 + 0x3C);
    temp_t0 = *(s32 *)((u8 *)arg0 + 8);
    var_f0 = fparg0 * (f32) arg2;
    temp_v1 = M2C_ERROR(/* Read from unset register $f1 */);
    temp_v0 = ((s32) ((temp_v1 < 0) ? (temp_v1 + 0x1F) : temp_v1) >> 5) * arg1 * 0x12;
    temp_v1_2 = (s32) ((temp_v0 < 0) ? (temp_v0 + 0x7FF) : temp_v0) >> 0xB;
    temp_a3_2 = (temp_v1_2 < temp_a3) ? temp_v1_2 : (s32) temp_a3;
    *(s16 *)((u8 *)arg0 + 0x3E) = (s16) temp_a3_2;
    if (temp_t0 != 0) {
        var_f0 = func_0015D4A8(temp_t0, (s32) (temp_a3_2 << 0x10) >> 5, temp_a3 << 0xB, temp_a3_2);
    }
    return var_f0;
}
