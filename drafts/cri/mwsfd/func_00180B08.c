/* Draft (not built): func_00180B08 at 0x00180B08, size 0x98, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1705 -> 1190
 * Original: asm/nonmatchings/cri/mwsfd/func_00180B08.s */

// func_00180B08 00180B08 -O2 -G0 ee-gcc 2.96: score 1705 -> 1190


s32 func_00180B08(u8 *arg0)
{
  s32 temp_a0;
  int new_var2;
  s32 temp_a3;
  u8 *new_var;
  s32 var_v0;
  s32 var_v0_2;
  temp_a3 = *((s32 *) (((u8 *) arg0) + 4));
  var_v0 = 0;
  new_var = (u8 *) arg0;
  if (((temp_a3 != 0) && (((*((s32 *) (new_var + 8))) * (*((s32 *) (new_var + 0xC)))) <= 0x65400)) && (temp_a3 != 2))
  {
    var_v0 = 1;
    if (temp_a3 == 1)
    {
      temp_a0 = *((s32 *) (new_var + 0x14));
      if (temp_a0 != 0x2EE0)
      {
        if (temp_a0 < 0x2EE1)
        {
          new_var2 = 0;
          if (1)
          {
            if (temp_a0 == new_var2)
            {
              return 1;
            }
            var_v0_2 = 0x1770;
          }
          goto block_12;
        }
        ;
        if (temp_a0 != 0x5DC0)
        {
          var_v0_2 = 0xBB80;
          block_12:
          if (temp_a0 == var_v0_2)
          {
            return 1;
          }

          return new_var2;
          var_v0 = 1;
        }
        return 1;
      }
    }
  }
  return 1;
}
