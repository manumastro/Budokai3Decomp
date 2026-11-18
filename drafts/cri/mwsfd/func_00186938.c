/* Draft (not built): func_00186938 at 0x00186938, size 0x68, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 570 -> 115
 * Original: asm/nonmatchings/cri/mwsfd/func_00186938.s */

// func_00186938 00186938 -O2 -G0 ee-gcc 2.96: score 570 -> 115
void *func_00186DB8();                              /* extern */
s32 func_00186DD8();                                /* extern */

s32 func_00186938(u8 *arg0)
{
  s32 (*temp_v0_2)(s32);
  s32 var_s1;
  s32 var_v0;
  s32 new_var;
  u8 *temp_v0;
  var_s1 = 0;
  var_v0 = 0;
  if (func_00186DD8() == 1)
  {
    temp_v0 = func_00186DB8();
    new_var = *((s32 *) (((u8 *) arg0) + 0x14));
    if (temp_v0 != ((void *) 0))
    {
      temp_v0_2 = *((s32 (**)(s32)) (((u8 *) temp_v0) + 0x1C));
      if (temp_v0_2 != ((void *) 0))
      {
        var_s1 = temp_v0_2(new_var);
      }
    }
    var_v0 = var_s1;
  }
  return var_v0;
}
