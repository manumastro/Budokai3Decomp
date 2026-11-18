/* Draft (not built): func_00192A08 at 0x00192A08, size 0xE0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 355 -> 305
 * Original: asm/nonmatchings/cri/sfd/func_00192A08.s */

// func_00192A08 00192A08 -O2 -G0 ee-gcc 2.96: score 355 -> 305
s32 func_0017B7D0(s32, s32, s32);                   /* extern */
s32 func_0017BC78(s32, s32, s32);                   /* extern */
s32 func_001999E0(s32);                         /* extern */

s32 func_00192A08(s32 arg0, s32 arg1, u8 *arg2)
{
  s32 var_v0;
  s32 var_v1;
  u8 *temp_a0;
  u8 *temp_s2;
  s32 new_var;
  var_v0 = 0;
  if (func_001999E0(7) == 0)
  {
    temp_s2 = arg0 + 0x94C;
    var_v0 = arg0 + 0x90C;
    temp_a0 = var_v0;
    if (arg1 == 3)
    {
      var_v1 = (new_var = func_0017B7D0(*((s32 *) (((u8 *) arg2) + 0)), *((s32 *) (((u8 *) arg2) + 4)), (*((s32 *) (((u8 *) temp_a0) + 8))) * (*((s32 *) (((u8 *) temp_a0) + 0xC)))));
      var_v0 = var_v1;
      if (var_v1 != 0)
      {
        *((s32 *) (((u8 *) temp_s2) + 0x10)) = (s32) ((*((s32 *) (((u8 *) temp_s2) + 0x10))) + 1);
        goto block_8;
      }
    }
    else
    {
      var_v1 = 0;
      if (arg1 == 2)
      {
        var_v1 = func_0017BC78(*((s32 *) (((u8 *) arg2) + 0)), *((s32 *) (((u8 *) arg2) + 4)), (*((s32 *) (((u8 *) temp_a0) + 8))) * (*((s32 *) (((u8 *) temp_a0) + 0xC))));
        var_v0 = var_v1;
        if (var_v1 != 0)
        {
          *((s32 *) (((u8 *) temp_s2) + 0x14)) = (s32) ((*((s32 *) (((u8 *) temp_s2) + 0x14))) + 1);
          goto block_8;
        }
      }
      else
      {
        block_8:
        var_v0 = var_v1;

      }
    }
  }
  return var_v0;
}
