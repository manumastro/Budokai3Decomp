/* Draft (not built): func_00197778 at 0x00197778, size 0x94, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1460 -> 605
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197778.s */

// func_00197778 00197778 -O2 -G0 ee-gcc 2.96: score 1460 -> 605
s32 func_0018D650(s32, s32);            /* extern */
s32 func_00197810();                                /* extern */
s32 func_00197830(s32, s32);                /* extern */
s32 func_00197870(s32, s32);                        /* extern */
extern s32 D_00426AE4;

s32 func_00197778(s32 arg0, s32 arg1)
{
  s32 temp_v0;
  s32 var_v0;
  s32 *new_var;
  new_var = &D_00426AE4;
  if (func_00197810() != 0)
  {
    func_0018D650(0, 0xFF000203);
    return 0;
  }
  temp_v0 = func_00197830(0, 0xFF000000);
  var_v0 = 0;
  if (temp_v0 != (-1))
  {
    var_v0 = func_00197870(arg0, arg1);
    *((temp_v0 * 4) + new_var) = var_v0;
  }
  return var_v0;
}
