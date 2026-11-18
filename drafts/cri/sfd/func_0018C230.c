/* Draft (not built): func_0018C230 at 0x0018C230, size 0x68, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 425 -> 325
 * Original: asm/nonmatchings/cri/sfd/func_0018C230.s */

// func_0018C230 0018C230 -O2 -G0 ee-gcc 2.96: score 425 -> 325
s32 func_0017AAF0(s32);                             /* extern */

s32 func_0018C230(s32 arg0, s32 arg1, s32 arg2)
{
  s32 var_s0;
  s32 var_s1;
  short new_var;
  var_s1 = arg1;
  var_s0 = arg0;
  if (var_s1 >= 4)
  {
    loop_1:
    var_s1 -= 1;

    if ((func_0017AAF0(var_s0) == arg2) ^ 0)
    {
      return var_s0;
    }
    var_s0 += 1;
    new_var = var_s1;
    if (new_var < 4)
    {
      goto block_4;
    }
    goto loop_1;
  }
  block_4:
  return 0;

}
