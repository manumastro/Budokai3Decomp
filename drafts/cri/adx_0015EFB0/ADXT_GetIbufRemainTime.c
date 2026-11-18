/* Draft (not built): ADXT_GetIbufRemainTime at 0x0015F458, size 0xE4, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0015EFB0/ADXT_GetIbufRemainTime.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 ADXT_GetNumChan(void *);                        /* extern */
s32 ADXT_GetSfreq(void *);                          /* extern */
s32 ADXT_GetStat();                                 /* extern */
extern s32 D_00461CE8;

f32 ADXT_GetIbufRemainTime(u8 *arg0) {
    f32 var_f0;
    s32 temp_s0;
    s32 temp_s1;
    u8 **temp_v1;

    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461CE8);
        return -1.0f;
    }
    var_f0 = 0.0f;
    if (ADXT_GetStat() >= 2) {
        temp_v1 = *(u8 ***)((u8 *)arg0 + 0x14);
        if (temp_v1 != NULL) {
            temp_s0 = (*(s32 (**)(u8 **, s32))((u8 *)(*temp_v1) + 0x24))(temp_v1, 1);
            temp_s1 = ADXT_GetNumChan(arg0);
            var_f0 = (f32) ((temp_s0 / (s32) (temp_s1 * 0x12)) << 5) / (f32) ADXT_GetSfreq(arg0);
        }
    }
    return var_f0;
}
