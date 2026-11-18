/* Draft (not built): func_0017F4D8 at 0x0017F4D8, size 0x10C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 3125 -> 2030
 * Original: asm/nonmatchings/cri/mwsfd/func_0017F4D8.s */

// func_0017F4D8 0017F4D8 -O2 -G0 ee-gcc 2.96: score 3125 -> 2030
s32 MWSFD_Malloc(s32, s32);                         /* extern */
extern s32 D_00425218;
extern s32 D_0042521C;
extern s32 D_00425220;

s32 func_0017F4D8(s32 arg0, u8 *arg1, u8 *arg2)
{
  s32 sp4;
  s32 temp_a1;
  u8 *new_var;
  s32 temp_a3;
  s32 var_s2;
  s32 var_v0;
  var_s2 = 0;
  sp4 = 0x840D0;
  temp_a3 = (*((s32 *) (((u8 *) arg1) + 8))) * (*((s32 *) (0xC + ((u8 *) arg1))));
  temp_a1 = (((s32) (temp_a3 * 9)) / 2) + 0x2840;
  if (D_00425218 != 0)
  {
    if (D_00425218 < 2)
    {
      *((s32 *) (((u8 *) arg2) + 0)) = 0;
      goto block_11;
    }
    if (D_0042521C < temp_a1)
    {
      *((s32 *) (((u8 *) arg2) + 0)) = 0;
      goto block_11;
    }
    if (!(D_0042521C < 0x840D0))
    {
      new_var = (u8 *) (&D_00425220);
      *((s32 *) (((u8 *) arg2) + 4)) = (s32) (*((s32 *) (new_var + 4)));
      *((s32 *) (((u8 *) arg2) + 0)) = (s32) (*((s32 *) (new_var + 0)));
    }
    else
    {
      *((s32 *) (((u8 *) arg2) + 0)) = 0;
      block_11:
      var_s2 = -1;

      *((s32 *) (((u8 *) arg2) + 4)) = 0;
    }
  }
  else
  {
    *((s32 *) (((u8 *) arg2) + 0)) = MWSFD_Malloc(temp_a1, temp_a3);
    *((s32 *) (((u8 *) arg2) + 4)) = MWSFD_Malloc(arg0, sp4);
  }
  if (((*((s32 *) (((u8 *) arg2) + 0))) == 0) || ((var_v0 = var_s2, (*((s32 *) (((u8 *) arg2) + 4))) == 0)))
  {
    var_v0 = -1;
  }
  return var_v0;
}
