/* Draft (not built): func_00197598 at 0x00197598, size 0x58, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 510 -> 425
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197598.s */

// func_00197598 00197598 -O2 -G0 ee-gcc 2.96: score 510 -> 425
s32 func_0019A3C8(void *, void *);                  /* extern */

s32 func_00197598(u8 *arg0)
{
  u8 *new_var;
  s32 new_var2;
  s32 var_v0;
  u8 *temp_a2;
  temp_a2 = arg0 + 0x94C;
  new_var = arg0;
  if ((*((s32 *) (((u8 *) new_var) + 0x48))) == 4)
  {
    var_v0 = 0;
    new_var2 = *((s32 *) (((u8 *) temp_a2) + 0x1C));
    if ((*((s32 *) (((u8 *) arg0) + 0x50))) != 1)
    {
      if (new_var2 == 1)
      {
        return var_v0;
        goto block_3;
      }
      var_v0 = func_0019A3C8(arg0, temp_a2) != 0;
      return var_v0;
    }
  }
  block_3:
  return 0;

}
