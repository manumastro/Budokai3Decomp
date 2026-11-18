/* Draft (not built): func_0018A848 at 0x0018A848, size 0x44, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 560 -> 445
 * Original: asm/nonmatchings/cri/sfd/func_0018A848.s */

// func_0018A848 0018A848 -O2 -G0 ee-gcc 2.96: score 560 -> 445


s32 func_0018A848(u8 *arg0)
{
  s32 var_v0;
  var_v0 = -1;
  if ((*((s32 *) (((u8 *) arg0) + 4))) != 0)
  {
    var_v0 = 0;
    if ((*((s32 *) (((u8 *) arg0) + 0))) == 0)
    {
      var_v0 = -1;
      if ((((*((s32 *) (((u8 *) arg0) + 8))) != 0) && ((*((s32 *) (((u8 *) arg0) + 0xC))) > 0)) && ((*((s32 *) (((u8 *) arg0) + 0x14))) <= 0))
      {
        var_v0 = 0;
        var_v0++;
        var_v0--;
      }
    }
  }
  return var_v0;
}
