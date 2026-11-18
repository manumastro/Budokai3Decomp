/* Draft (not built): func_0017E838 at 0x0017E838, size 0x50, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1790 -> 1015
 * Original: asm/nonmatchings/cri/mpv/func_0017E838.s */

// func_0017E838 0017E838 -O1 -G0 ee-gcc 2.96: score 1790 -> 1015
extern s32 D_004814F0;

u8 *func_0017E838(void)
{
  char var_a2;
  u8 *var_a0;
  u8 *var_v0;
  var_a2 = 0;
  var_a0 = *((u8 **) (((u8 *) (&D_004814F0)) + 0x58));
  if ((*((s32 *) (((u8 *) (&D_004814F0)) + 0x54))) > 0)
  {
    loop_2:
    var_v0 = var_a0;

    var_a2 = 0x400;
    var_a0 += var_a2;
    if ((*((s32 *) (((u8 *) var_a0) + 0x188))) != 1)
    {
      var_a2 += 1;
      if (var_a2 >= (*((s32 *) (((u8 *) (&D_004814F0)) + 0x54))))
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
