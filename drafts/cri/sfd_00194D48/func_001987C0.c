/* Draft (not built): func_001987C0 at 0x001987C0, size 0xD0, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 2390 -> 1940
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001987C0.s */

// func_001987C0 001987C0 -O2 -G0 ee-gcc 2.96: score 2390 -> 1940


void func_001987C0(u8 *arg0, u32 arg1, u32 arg2, s32 arg3)
{
  s32 temp_t0;
  s32 temp_t3;
  s32 temp_v0;
  s32 var_t1;
  s32 var_t2;
  s32 var_v0;
  s32 var_v0_2;
  u32 temp_a0;
  u32 temp_t4;
  u32 temp_v1;
  u8 *temp_v0_2;
  temp_v0 = *((s32 *) (((u8 *) arg0) + 8));
  temp_t4 = arg2 + arg3;
  temp_t3 = *((s32 *) (((u8 *) arg0) + 4));
  var_t2 = 0;
  var_t1 = *((s32 *) (((u8 *) arg0) + 0x10));
  if (temp_v0 > 0)
  {
    var_v0 = var_t1 * 2;
    loop_2:
    temp_v0_2 = (*((s32 *) (((u8 *) arg0) + 0))) + ((var_v0 + var_t1) * 4);

    temp_v1 = *((u32 *) (((u8 *) temp_v0_2) + 4));
    temp_t0 = arg1 < temp_v1;
    temp_a0 = temp_v1 + (*((s32 *) (((u8 *) temp_v0_2) + 8)));
    if (temp_t4 >= temp_a0)
    {
      var_v0_2 = var_t1 + 1;
      if (temp_t0 == 0)
      {
        if (arg1 < temp_a0)
        {
          return var_t2;
        }
        goto block_11;
      }
      goto block_12;
    }
    if ((temp_t0 != 0) || (arg1 >= temp_t4))
    {
      var_v0_2 = var_t1 + 1;
      if (arg1 >= arg2)
      {
        if (arg1 >= ((u32) (temp_a0 - arg3)))
        {
          block_11:
          var_v0_2 = var_t1 + 1;

          goto block_12;
        }
        return var_t2;
      }
      block_12:
      var_t2 = var_t2 + 1;

      if (var_v0_2 >= temp_t3)
      {
        var_v0_2 = (var_t1 - temp_t3) + 1;
      }
      var_t1 = var_v0_2;
      if (var_t2 < temp_v0)
      {
        var_v0 = var_t1 * 2;
        goto loop_2;
      }
      return -1;
    }
    return var_t2;
  }
  return -1;
}
