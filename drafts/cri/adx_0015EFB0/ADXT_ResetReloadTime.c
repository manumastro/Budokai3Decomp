/* Draft (not built): ADXT_ResetReloadTime at 0x0015F2B0, size 0x7C, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 2510 -> 1895
 * Original: asm/nonmatchings/cri/adx_0015EFB0/ADXT_ResetReloadTime.s */

// ADXT_ResetReloadTime 0015F2B0 -O1 -G0 ee-gcc 2.96: score 2510 -> 1895
f32 ADXERR_CallErrFunc1(s32 *, void *);         /* extern */
f32 func_0015D4A8(s32, s32, s32, void *);           /* extern */
extern s32 D_00461C28;

f32 ADXT_ResetReloadTime(u8 *arg0)
{
  f32 var_f0;
  s16 temp_a2;
  int new_var;
  s32 temp_v1;
  new_var = 5;
  if (arg0 == ((void *) 0))
  {
    return ADXERR_CallErrFunc1(&D_00461C28, arg0);
  }
  temp_a2 = *((s16 *) (((u8 *) arg0) + 0x3C));
  temp_v1 = *((s32 *) (((u8 *) arg0) + 8));
  var_f0 = 0.84999996f;
  var_f0 = ((f32) temp_a2) * var_f0;
  *((s16 *) (((u8 *) arg0) + 0x3E)) = 0x3F599999;
  if (temp_v1 != 0)
  {
    var_f0 = func_0015D4A8(temp_v1, ((s32) (0x3F599999 << 0x10)) >> new_var, temp_a2 << 0xB, arg0);
  }
  return var_f0;
}
