/* Draft (not built): func_00197830 at 0x00197830, size 0x40, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 11 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 365 -> 145
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197830.s */

// func_00197830 00197830 -O2 -G0 ee-gcc 2.96: score 365 -> 145
extern s32 D_00426AE4;

s32 func_00197830(void)
{
  s32 *var_a2;
  s32 temp_v1;
  unsigned long long new_var;
  s32 var_a1;
  s32 var_v0;
  var_a1 = 0;
  var_a2 = &D_00426AE4;
  loop_1:
  temp_v1 = *var_a2;

  var_a2 += 4;
  var_v0 = var_a1;
  var_a1 += 1;
  new_var = temp_v1;
  if (new_var != 0)
  {
    if (var_a1 >= (var_v0 = 8))
    {
      var_v0 = -1;
    }
    else
    {
      goto loop_1;
    }
  }
  return var_v0;
}
