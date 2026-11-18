/* Draft (not built): func_0018C020 at 0x0018C020, size 0xB4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 2440 -> 1605
 * Original: asm/nonmatchings/cri/sfd/func_0018C020.s */

// func_0018C020 0018C020 -O1 -G0 ee-gcc 2.96: score 2440 -> 1605
s32 func_0018C0D8(s32, s32, s32 *);         /* extern */
s32 func_0018CA88(s32, s32);                        /* extern */
extern s32 D_0048D7F0;

void func_0018C020(s32 arg0, s32 arg1, u8 *arg2)
{
  s32 temp_s2;
  u8 *new_var;
  s32 var_s0;
  s32 var_s1;
  s32 var_s3;
  var_s0 = arg1;
  var_s1 = arg0;
  var_s3 = 0;
  temp_s2 = *((s32 *) (((u8 *) arg2) + 0x10));
  loop_5:
  if (!(func_0018CA88(var_s1, var_s0) != 0))
  {
    var_s0 -= temp_s2;
    var_s1 += temp_s2;
    if ((var_s3 < 3) && (var_s0 > 0))
    {
      var_s3 += 1;
      goto loop_5;
    }
  }
  else
  {
    new_var = (u8 *) (&D_0048D7F0);
    func_0018C0D8(var_s1, var_s0, &D_0048D7F0);
    if ((*((s32 *) (new_var + 0))) != 0)
    {
      if ((*((s32 *) (new_var + 0xC))) > 0)
      {
        *((s32 *) (((u8 *) arg2) + 0x1C)) = (s32) (*((s32 *) (new_var + 0xC)));
      }
    }
  }

}
