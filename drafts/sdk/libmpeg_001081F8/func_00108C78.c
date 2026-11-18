/* Draft (not built): func_00108C78 at 0x00108C78, size 0x90, segment sdk/libmpeg_001081F8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 815 -> 600
 * Original: asm/nonmatchings/sdk/libmpeg_001081F8/func_00108C78.s */

// func_00108C78 00108C78 -O2 -G0 ee-gcc 2.9-991111-01: score 815 -> 600
s32 func_001084D8(void *, s32, s32, s32);       /* extern */
s32 func_00108798(void *, s32, s32, s32);       /* extern */

void func_00108C78(u8 *arg0, s32 arg1, s32 arg2)
{
  s32 temp_v0;
  s32 var_a1;
  u8 *new_var;
  s32 var_a1_2;
  s32 var_a2;
  int new_var2;
  if (arg2 != 0)
  {
    temp_v0 = *((s32 *) (((u8 *) arg0) + 0x160));
    if ((*((s32 *) (((u8 *) arg0) + 0x184))) == 3)
    {
      if (temp_v0 != 3)
      {
        var_a1 = *((s32 *) (((u8 *) arg0) + 0x1C8));
      }
      else
      {
        var_a1 = *((s32 *) (((u8 *) arg0) + 0x1D4));
      }
      func_001084D8(arg0, var_a1, arg1 - 1, arg1);
    }
    else
    {
      new_var2 = 0x1F4;
      if (!(temp_v0 != 3))
      {
        var_a1_2 = *((s32 *) (((u8 *) arg0) + 0x1E4));
        var_a2 = *((s32 *) (((u8 *) arg0) + new_var2));
      }
      else
      {
        new_var = ((u8 *) arg0) + 0x1D8;
        var_a1_2 = *((s32 *) new_var);
        var_a2 = *((s32 *) (((u8 *) arg0) + 0x1E8));
      }
      func_00108798(arg0, var_a1_2, var_a2, arg1 - 1);
    }
  }
  if ((*((s32 *) (((u8 *) arg0) + 0x108))) == 1)
  {
    *((s32 *) (((u8 *) arg0) + 0x108)) = 2;
  }
}
