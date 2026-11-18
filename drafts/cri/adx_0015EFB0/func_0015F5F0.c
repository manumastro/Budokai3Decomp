/* Draft (not built): func_0015F5F0 at 0x0015F5F0, size 0xEC, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 10 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 450 -> 420
 * Original: asm/nonmatchings/cri/adx_0015EFB0/func_0015F5F0.s */

// func_0015F5F0 0015F5F0 -O2 -G0 ee-gcc 2.96: score 450 -> 420
s32 ADXT_ExecHndl(s8 *);                        /* extern */
s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 func_00158930();                            /* extern */
s32 func_00159C10();                            /* extern */
extern s8 D_00404C18;
extern s32 D_00411160;
extern s32 D_00411168;

void func_0015F5F0(void)
{
  s32 var_s1;
  unsigned int new_var;
  int new_var2;
  s8 *var_s0;
  func_00152508();
  if (D_00411160 != 0)
  {
    func_00152520();
    return;
  }
  D_00411160 = 1;
  new_var2 = 1;
  var_s1 = 0xF;
  func_00152520();
  func_00152508();
  func_00159C10();
  D_00411160 = 2;
  var_s0 = &D_00404C18;
  do
  {
    if ((*var_s0) == new_var2)
    {
      ADXT_ExecHndl(var_s0);
    }
    var_s1 -= (new_var = new_var2);
    var_s0 += 0xC4;
  }
  while (var_s1 >= 0);
  D_00411160 = 3;
  func_00158930();
  if (D_00411168 < 0x33)
  {
    func_00158930();
  }
  D_00411160 = 0;
  func_00152520();
}
