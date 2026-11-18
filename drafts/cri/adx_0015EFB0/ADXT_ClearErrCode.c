/* Draft (not built): ADXT_ClearErrCode at 0x0015F728, size 0x3C, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 75 -> 10
 * Original: asm/nonmatchings/cri/adx_0015EFB0/ADXT_ClearErrCode.s */

// ADXT_ClearErrCode 0015F728 -O2 -G0 ee-gcc 2.96: score 75 -> 10
s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
extern s32 D_00461DB0;

void ADXT_ClearErrCode(u8 *arg0)
{
  s32 *new_var;
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1(&D_00461DB0);
    return;
  }
  *((s16 *) (((u8 *) arg0) + 0x60)) = 0;
  *(new_var = (s32 *) (((u8 *) arg0) + 0x64)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x6A)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x68)) = 0;
}
