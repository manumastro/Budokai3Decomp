/* Draft (not built): func_001625F0 at 0x001625F0, size 0x144, segment cri/adx_00161B98 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 3865 -> 3180
 * Original: asm/nonmatchings/cri/adx_00161B98/func_001625F0.s */

// func_001625F0 001625F0 -O1 -G0 ee-gcc 2.96: score 3865 -> 3180
s32 func_00162118(s8 *, s32, u8 *);             /* extern */
s32 memcpy(u8 *, s8 *, s32);                    /* extern */
s32 strlen(s8 *, s8 *, u8 *);                       /* extern */

void func_001625F0(s8 *arg0, u8 *arg1, s8 *arg2, u8 *arg3)
{
  s32 var_a1_2;
  s32 var_t0;
  s32 var_t0_2;
  s8 *var_a1;
  s8 *var_v1;
  s8 temp_v1;
  u8 new_var;
  s8 var_v0;
  u8 *temp_v1_2;
  u8 *var_a3;
  u8 temp_v0;
  u8 var_a0;
  var_a3 = arg3;
  if (arg2 != ((void *) 0))
  {
    temp_v1 = *arg2;
    var_t0 = 0;
    if (temp_v1 != 0x3A)
    {
      var_a1 = arg2;
      if (temp_v1 != 0)
      {
        var_a3 = (u8 *) 0x3A;
        var_a0 = (u8) (*var_a1);
        loop_4:
        temp_v1_2 = arg0 + var_t0;

        var_t0 += 1;
        var_a1 = arg2 + var_t0;
        *temp_v1_2 = var_a0;
        new_var = (u8) (*var_a1);
        if (var_t0 < 0x129)
        {
          var_v0 = *var_a1;
          if (var_v0 != 0x3A)
          {
            if (var_v0 != 0)
            {
              var_a0 = new_var;
              goto loop_4;
            }
          }
        }
        else
        {
          goto block_12;
        }
        goto block_13;
      }
      goto block_14;
    }
    var_a1 = arg2;
    block_12:
    var_v0 = *var_a1;

    block_13:
    if (var_v0 == 0)
    {
      block_14:
      arg0[var_t0] = 0;

      memcpy(arg1, arg0, strlen(arg0, var_a1, var_a3) + 1);
      *arg0 = 0;
      return;
    }

    var_t0_2 = var_t0 + 1;
    *(arg0 + var_t0) = 0;
    if ((var_t0 + 1) == 2)
    {
      *arg0 = 0;
      var_t0_2 = 0;
    }
    var_a1_2 = var_t0_2;
    if (var_t0_2 < 0x129)
    {
      var_v1 = arg2 + var_t0_2;
      var_a3 = arg1;
      if ((*var_v1) != 0)
      {
        loop_19:
        temp_v0 = *var_v1;

        var_a1_2 += 1;
        var_v1 = arg2 + var_a1_2;
        *var_a3 = temp_v0;
        temp_v1 = var_a1_2 < 0x129;
        var_a3 += 1;
        if (temp_v1)
        {
          if ((*var_v1) != 0)
          {
            goto loop_19;
          }
        }
      }
    }
    *(arg1 + (var_a1_2 - var_t0_2)) = 0;
    func_00162118(arg0, var_a1_2, var_a3);
  }
}
