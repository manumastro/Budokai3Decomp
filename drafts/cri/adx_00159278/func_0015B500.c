/* Draft (not built): func_0015B500 at 0x0015B500, size 0xB0, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 2795 -> 1925
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015B500.s */

// func_0015B500 0015B500 -O1 -G0 ee-gcc 2.96: score 2795 -> 1925
s32 func_0015B210(void *);                          /* extern */
s32 func_0015B3D0(void *);                          /* extern */

s32 func_0015B500(u8 *arg0)
{
  s32 new_var;
  s32 var_s3;
  s32 var_v0;
  u8 **temp_s1;
  var_s3 = 0;
  temp_s1 = *((u8 ***) (((u8 *) arg0) + 0xC));
  new_var = func_0015B3D0(arg0);
  loop_1:
  var_v0 = var_s3;

  if ((((s32) ((*((s32 (**)(u8 **, s32)) (((u8 *) (*temp_s1)) + 0x24)))(temp_s1, 0) / 18)) / ((s32) (*((s32 *) (((u8 *) arg0) + 0x58))))) > 0)
  {
    var_v0 = var_s3;
    if (func_0015B210(arg0) != 0)
    {
      var_s3 += new_var;
      if ((*((s32 *) (((u8 *) arg0) + 0x30))) >= (*((s32 *) (((u8 *) arg0) + 0x3C))))
      {
        ;
      }
      else
      {
        goto loop_1;
      }
    }
  }
  return var_s3;
}
