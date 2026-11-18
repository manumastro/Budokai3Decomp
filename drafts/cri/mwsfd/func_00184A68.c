/* Draft (not built): func_00184A68 at 0x00184A68, size 0x6C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 895 -> 590
 * Original: asm/nonmatchings/cri/mwsfd/func_00184A68.s */

// func_00184A68 00184A68 -O2 -G0 ee-gcc 2.96: score 895 -> 590
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_00466790;

s32 func_00184A68(u8 *arg0)
{
  s32 var_s0;
  s32 var_v0;
  u32 temp_v1;
  var_s0 = 3;
  temp_v1 = *((u32 *) (((u8 *) arg0) + 0x8C));
  if (temp_v1 != 2)
  {
    if (temp_v1 < 3U)
    {
      if (temp_v1 == 1)
      {
        var_s0 = 1;
      }
      else
      {
      }
      goto block_10;
      var_v0 = 3;
      goto block_9;
    }
    if (temp_v1 != 3)
    {
      block_9:
      func_001870E8(&D_00466790);

      goto block_10;
    }
  }
  else
  {
    var_s0 = 2;
    block_10:
    var_v0 = var_s0;

  }
  return var_v0;
}
