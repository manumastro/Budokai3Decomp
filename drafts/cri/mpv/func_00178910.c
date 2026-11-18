/* Draft (not built): func_00178910 at 0x00178910, size 0x50, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1790 -> 760
 * Original: asm/nonmatchings/cri/mpv/func_00178910.s */

// func_00178910 00178910 -O1 -G0 ee-gcc 2.96: score 1790 -> 760
extern s32 D_00481490;

s32 *func_00178910(void)
{
  s32 *var_a0;
  int new_var;
  s32 *var_v0;
  s32 var_a2;
  var_a2 = 0;
  new_var = (*((s32 *) (((u8 *) (&D_00481490)) + 0x40))) > 0;
  var_a0 = *((s32 **) (((u8 *) (&D_00481490)) + 0x44));
  if (new_var)
  {
    loop_2:
    var_v0 = var_a0;

    var_a0 += 0x6E0;
    if ((*var_a0) != 1)
    {
      var_a0 = (u8 *) (&D_00481490);
      var_a2 += 1;
      if (var_a2 >= (*((s32 *) (var_a0 + 0x40))))
      {
        goto block_4;
      }
      goto loop_2;
    }
  }
  else
  {
    block_4:
    var_v0 = (void *) 0;

  }
  return var_v0;
}
