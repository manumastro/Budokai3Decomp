/* Draft (not built): func_001816F0 at 0x001816F0, size 0x3C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 960 -> 560
 * Original: asm/nonmatchings/cri/mwsfd/func_001816F0.s */

// func_001816F0 001816F0 -O2 -G0 ee-gcc 2.96: score 960 -> 560


s32 func_001816F0(unsigned long arg0)
{
  s32 var_v0;
  s32 var_v1;
  var_v1 = 2;
  if (arg0 != 2)
  {
    if (arg0 >= 3U)
    {
      var_v0 = 3;
      var_v1 = 3;
    }
    else
    {
      var_v0 = 1;
      var_v1 = 1;
    }
    if (arg0 != var_v0)
    {
      var_v1 = 3;
    }
  }
  return var_v1;
}
