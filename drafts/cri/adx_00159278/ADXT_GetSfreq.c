/* Draft (not built): ADXT_GetSfreq at 0x0015EDB8, size 0x4C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_00159278/ADXT_GetSfreq.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 ADXSJD_GetSfreq(s32);                           /* extern */
extern s32 D_004619B8;

s32 ADXT_GetSfreq(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_004619B8);
        return -1;
    }
    if (*(s8 *)((u8 *)arg0 + 1) < 2) {
        return 0;
    }
    return ADXSJD_GetSfreq(*(s32 *)((u8 *)arg0 + 4));
}

/* Similar function already in C: ADXT_IsCompleted (src/cri/adx_0015EFB0.c), similarity 0.73.
 * It is the template below (not built). */
#if 0
s32 ADXT_IsCompleted(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461D50);
        return -1;
    }
    return *(s8 *)((u8 *)arg0 + 1) == 5;
}
#endif
