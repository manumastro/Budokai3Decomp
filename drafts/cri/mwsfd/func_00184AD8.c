/* Draft (not built): func_00184AD8 at 0x00184AD8, size 0x6C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1095 -> 945
 * Original: asm/nonmatchings/cri/mwsfd/func_00184AD8.s */

// func_00184AD8 00184AD8 -O2 -G0 ee-gcc 2.96: score 1095 -> 945
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_004667B8;

s32 func_00184AD8(u8 *arg0)
{
  s32 var_s0;
  s32 var_v0;
  u32 temp_v1;
  var_s0 = 1;
  temp_v1 = *((u32 *) (((u8 *) arg0) + 0x90));
  if (temp_v1 != 2)
  {
    if (temp_v1 >= 3U)
    {
      if (temp_v1 == 3)
      {
        var_s0 = 3;
      }
      else
      {
        goto block_11;
      }
      goto block_12;
    }
    var_v0 = 1;
    if (temp_v1 != 1)
    {
      block_11:
      func_001870E8(&D_004667B8);

      goto block_12;
    }
  }
  else
  {
    var_s0 = 2;
    block_12:
    ;

  }
  return var_s0;
}
