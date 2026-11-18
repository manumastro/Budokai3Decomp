/* Draft (not built): func_00197C68 at 0x00197C68, size 0xA0, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1235 -> 805
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197C68.s */

// func_00197C68 00197C68 -O1 -G0 ee-gcc 2.96: score 1235 -> 805
s32 func_0018A478(s32);                         /* extern */
s32 func_0018C968(s32);                         /* extern */
s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */
s32 func_00197D08(s32);                             /* extern */
s32 func_00197E40(s32);                         /* extern */
extern s32 D_00426AE4;

s32 func_00197C68(s32 arg0)
{
  s32 new_var;
  s32 *var_v1;
  s32 var_a0;
  s32 temp_a1;
  if (((long) func_0018D870()) != 0)
  {
    return func_0018D650(0, 0xFF000131);
  }
  func_00197E40(arg0);
  func_0018C968(0x78 + arg0);
  func_0018A478(arg0);
  new_var = func_00197D08(arg0);
  var_a0 = 7;
  temp_a1 = new_var;
  var_v1 = &D_00426AE4;
  do
  {
    if ((*var_v1) == arg0)
    {
      *var_v1 = 0;
    }
    var_a0 -= 1;
    var_v1 += 4;
  }
  while (var_a0 >= 0);
  return temp_a1;
}
