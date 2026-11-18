/* Draft (not built): func_0019A890 at 0x0019A890, size 0x5C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 535 -> 90
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A890.s */

// func_0019A890 0019A890 -O2 -G0 ee-gcc 2.96: score 535 -> 90
s32 func_0019AA08();                                /* extern */
extern s32 D_00426A98;

s32 func_0019A890(s32 arg0, s32 *arg1, s32 *arg2)
{
  s32 var_v0;
  int new_var;
  var_v0 = func_0019AA08();
  new_var = arg0 + 0xCC0;
  ;
  if (var_v0 != 0)
  {
    *arg1 = *((s32 *) (((u8 *) new_var) + 0x29C));
    *arg2 = D_00426A98;
  }
  return 0;
}
