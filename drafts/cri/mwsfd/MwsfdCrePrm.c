/* Draft (not built): MwsfdCrePrm at 0x0017F1D0, size 0x50, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 14 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1165 -> 275
 * Original: asm/nonmatchings/cri/mwsfd/MwsfdCrePrm.s */

// MwsfdCrePrm 0017F1D0 -O2 -G0 ee-gcc 2.96: score 1165 -> 275
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_004654B8;

s32 MwsfdCrePrm(s32 arg0)
{
  s32 var_v1;
  s32 *new_var;
  if (arg0 != 1)
  {
    var_v1 = 2;
    if ((arg0 != 0) && (arg0 != 2))
    {
      var_v1 = 3;
      var_v1 = 1;
      if (arg0 != 3)
      {
        func_001870E8(new_var = &D_004654B8);
        var_v1 = 3;
      }
    }
  }
  return var_v1;
}
