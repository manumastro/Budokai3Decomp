/* Draft (not built): ADXT_GetNumChan at 0x0015EE08, size 0x4C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/ADXT_GetNumChan.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 func_00159DC8(s32);                             /* extern */
extern s32 D_004619E8;

s32 ADXT_GetNumChan(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_004619E8);
        return -1;
    }
    if (*(s8 *)((u8 *)arg0 + 1) < 2) {
        return 0;
    }
    return func_00159DC8(*(s32 *)((u8 *)arg0 + 4));
}
