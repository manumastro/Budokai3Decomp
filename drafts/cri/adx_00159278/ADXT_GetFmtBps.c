/* Draft (not built): ADXT_GetFmtBps at 0x0015EEA8, size 0x4C, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 215 -> 200
 * Original: asm/nonmatchings/cri/adx_00159278/ADXT_GetFmtBps.s */

// ADXT_GetFmtBps 0015EEA8 -O2 -G0 ee-gcc 2.96: score 215 -> 200
s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 func_0015A038(s32);                             /* extern */
extern s32 D_00461A48;

s32 ADXT_GetFmtBps(u8 *arg0)
{
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1(&D_00461A48);
    return -1;
  }
  if ((*((s8 *) (((u8 *) arg0) + 1))) < 2)
  {
    return func_0015A038(*((s32 *) (((u8 *) arg0) + 4)));
  }
  return 0;
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
