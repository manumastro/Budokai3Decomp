/* Draft (not built): func_00181330 at 0x00181330, size 0x3C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 960 -> 560
 * Original: asm/nonmatchings/cri/mwsfd/func_00181330.s */

// func_00181330 00181330 -O2 -G0 ee-gcc 2.96: score 960 -> 560


s32 func_00181330(u32 arg0)
{
  int new_var;
  u32 new_var2;
  short new_var3;
  s32 var_v0;
  s32 var_v1;
  if (new_var2)
  {
    var_v1 = 2;
    new_var2 = arg0;
  }
  else
  {
    var_v1 = 2;
    new_var2 = arg0;
  }
  if (new_var2 != 2)
  {
    new_var3 = 3U;
    if (new_var2 >= new_var3)
    {
      var_v0 = 3;
      var_v1 = 3;
    }
    else
    {
      var_v0 = 1;
      var_v1 = 1;
    }
    if (new_var2 != var_v0)
    {
      new_var = 3;
      var_v0 = new_var;
      var_v1 = var_v0;
    }
  }
  return var_v1;
}
