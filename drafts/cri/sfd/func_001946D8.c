/* Draft (not built): func_001946D8 at 0x001946D8, size 0x48, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 220 -> 160
 * Original: asm/nonmatchings/cri/sfd/func_001946D8.s */

// func_001946D8 001946D8 -O2 -G0 ee-gcc 2.96: score 220 -> 160


s32 func_001946D8(u8 *arg0, s32 arg1)
{
  s32 var_a2;
  s32 var_a3;
  s32 var_v0;
  u8 *var_a0;
  u8 *var_v1;
  var_a0 = arg0 + 0x1620;
  var_a3 = 0;
  var_a2 = (*((s32 *) (((u8 *) arg0) + 0x1C70))) + 0x16C;
  var_v1 = var_a0 + 4;
  loop_1:
  var_a0 += 0x5C;

 do { var_v0 = var_a2; var_a2 += 0xDC; } while (0);
  if (var_v1 != arg1)
  {
    var_a3 += 1;
    var_v1 = var_a0 + 4;
    if (var_a3 >= 0x10)
    {
      var_v0 = 0;
    }
    else
    {
      goto loop_1;
    }
  }
  return var_v0;
}
