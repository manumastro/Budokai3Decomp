/* Draft (not built): func_0017DF98 at 0x0017DF98, size 0xA4, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1245 -> 215
 * Original: asm/nonmatchings/cri/mpv/func_0017DF98.s */

// func_0017DF98 0017DF98 -O2 -G0 ee-gcc 2.96: score 1245 -> 215
s32 func_0017B420(s32);                             /* extern */
s32 func_0017B5B8(s32, s32, s32);               /* extern */

s32 func_0017DF98(s32 *arg0, s32 *arg1, s32 *arg2)
{
  s32 temp_v0;
  s32 var_a1;
  s32 var_v0;
  s32 new_var;
  temp_v0 = func_0017B5B8(*arg0, *arg1, -1);
  var_v0 = 0;
  if (temp_v0 == 0)
  {
    var_a1 = *arg1;
  }
  else
  {
    var_v0 = func_0017B420(temp_v0);
    var_a1 = temp_v0 - (*arg0);
  }
  new_var = *arg0;
  *arg1 -= var_a1;
  *arg0 = new_var + var_a1;
  *arg2 += var_a1;
  return var_v0;
}
