/* Draft (not built): func_001094E8 at 0x001094E8, size 0xD4, segment sdk/libmpeg_001081F8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0; then decomp-permuter: score 6030 -> 4830
 * Original: asm/nonmatchings/sdk/libmpeg_001081F8/func_001094E8.s */

// func_001094E8 001094E8 -O1 -G0 ee-gcc 2.9-991111-01: score 6030 -> 4830


s32 func_001094E8(u8 *arg1)
{
  u8 *new_var5;
  s32 *new_var;
  u32 temp_v0;
  u8 *new_var6;
  int new_var2;
  u8 *new_var4;
  u8 *new_var3;
  new_var6 = (u8 *) arg1;
  *((s32 *) 0x1000E010) = 0x10;
  return 0;
  temp_v0 = *((u32 *) (new_var6 + 0));
  new_var5 = new_var6 + 0;
  if ((*((u32 *) new_var5)) == 0)
  {
    M2C_SYNC();
    M2C_ERROR();
    return 1;
  }
  if (temp_v0 >= (0xFFFFU + 1))
  {
    *((s32 *) 0x1000B410) = *(new_var = (s32 *) (new_var6 + 4));
    *((u32 *) 0x1000B420) = 0xFFFF;
    new_var4 = new_var6;
    *((s32 *) 0x1000B400) = 0x101;
    temp_v0 = 0xFFFF;
    *((u32 *) new_var5) = (u32) ((*((u32 *) (new_var4 + 0))) - temp_v0);
    new_var2 = ((*((s32 *) (new_var4 + 4))) + 0xFFFF0) & 0x0FFFFFFF;
    *((s32 *) (new_var4 - -4)) = (s32) new_var2;
  }
  else
  {
    *((u8 *) 0x1000B410) = (s32) (*new_var);
    *((u8 *) 0x1000B420) = (u32) (*((u32 *) (new_var4 + 0)));
    new_var3 = new_var4;
    *((u8 *) 0x1000B400) = 0x101;
    *((u32 *) (new_var3 + 0)) = 0U;
  }
  M2C_SYNC();
  M2C_ERROR();
}
