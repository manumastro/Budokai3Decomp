/* Draft (not built): func_0019F580 at 0x0019F580, size 0x50, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1305 -> 590
 * Original: asm/nonmatchings/cri/sfx/func_0019F580.s */

// func_0019F580 0019F580 -O2 -G0 ee-gcc 2.96: score 1305 -> 590
extern s32 D_00426C20;

s32 *func_0019F580(void)
{
  s32 *var_a0;
  s32 *var_v0;
  s32 var_a2;
  s32 *new_var;
  new_var = &D_00426C20;
  var_a2 = 0;
  if ((*((s32 *) (((u8 *) new_var) + 4))) > 0)
  {
    var_a0 = new_var + 0x18;
    loop_2:
    var_v0 = var_a0;

    if ((*var_a0) != 0)
    {
      var_a2 += 1;
      if (var_a2 >= (*((s32 *) (((u8 *) new_var) + 4))))
      {
        goto block_4;
      }
      var_a0 += 0x90;
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
