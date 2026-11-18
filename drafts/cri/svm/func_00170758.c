/* Draft (not built): func_00170758 at 0x00170758, size 0xA4, segment cri/svm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 375 -> 360
 * Original: asm/nonmatchings/cri/svm/func_00170758.s */

// func_00170758 00170758 -O1 -G0 ee-gcc 2.96: score 375 -> 360
s32 func_00170118(s32 *);                   /* extern */
extern s32 D_00464FC0;
extern s32 D_00464FE8;
extern s32 D_004812A0;

s32 func_00170758(s32 arg0, u32 arg1)
{
  s32 (*temp_v1)(s32);
  s32 var_s2;
  s32 var_v0;
  u8 *temp_v0;
  var_s2 = 0;
  if (arg1 >= 6U)
  {
    func_00170118(&D_00464FC0);
  }
  if ((arg0 < 0) || ((var_v0 = arg0 * 2, (((s32) arg1) < 8) == 0)))
  {
    func_00170118(&D_00464FE8);
  }
  var_v0 = arg0 * 2;
  temp_v0 = (&D_004812A0) + ((((var_v0 + arg0) * 2) + arg1) * 8);
  temp_v1 = *((s32 (**)(s32)) (((u8 *) temp_v0) + 0));
  if (temp_v1 != ((void *) 0))
  {
    var_s2 = temp_v1(*((s32 *) (((u8 *) temp_v0) + 4)));
  }
  return var_s2;
}
