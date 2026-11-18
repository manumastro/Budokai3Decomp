/* Draft (not built): func_00192800 at 0x00192800, size 0x5C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1015 -> 630
 * Original: asm/nonmatchings/cri/sfd/func_00192800.s */

// func_00192800 00192800 -O2 -G0 ee-gcc 2.96: score 1015 -> 630


s32 func_00192800(u8 *arg0, s32 arg1)
{
  s32 var_a2;
  s32 var_v0;
  u32 temp_a1;
  int new_var;
  temp_a1 = *((u32 *) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0x1C70)))) + 0x74));
  if (temp_a1 != 3)
  {
    var_v0 = 0;
    if (temp_a1 < 4U)
    {
      var_v0 = new_var;
      if (temp_a1 == 2)
      {
        if (((u32) (arg1 - 2)) < 2U)
        {
          var_a2 = 1;
          goto block_8;
        }
        return new_var;
        new_var = 0;
      }
    }
    return var_v0;
  }
  var_a2 = arg1 == temp_a1;
  block_8:
  var_v0 = var_a2;

  return var_v0;
}
