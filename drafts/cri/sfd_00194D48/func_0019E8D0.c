/* Draft (not built): func_0019E8D0 at 0x0019E8D0, size 0x78, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 680 -> 215
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019E8D0.s */

// func_0019E8D0 0019E8D0 -O2 -G0 ee-gcc 2.96: score 680 -> 215
void *func_0019E240(s32);                           /* extern */
void *func_0019EA80(s32, void *);                   /* extern */

u8 *func_0019E8D0(s32 arg1, s32 *arg2)
{
  s32 temp_s0;
  int new_var;
  u8 temp_v0;
  u8 *temp_s1;
  u8 *var_v0;
  temp_s0 = arg1 & 0xFF;
  var_v0 = func_0019E240(temp_s0);
  temp_s1 = var_v0;
  if (temp_s1 != ((void *) 0))
  {
    new_var = temp_s0;
    var_v0 = func_0019EA80(new_var, temp_s1);
    if (var_v0 != ((void *) 0))
    {
      temp_v0 = *((u8 *) (((u8 *) temp_s1) + 0x26));
      *arg2 = (s32) temp_v0;
      if (((s32) temp_v0) >= 0x40)
      {
        *arg2 = -1;
      }
      var_v0 = (u8 *) 1;
    }
  }
  temp_s1 = var_v0;
  return temp_s1;
}
