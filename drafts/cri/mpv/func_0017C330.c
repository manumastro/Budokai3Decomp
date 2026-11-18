/* Draft (not built): func_0017C330 at 0x0017C330, size 0x34, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 110 -> 5
 * Original: asm/nonmatchings/cri/mpv/func_0017C330.s */

// func_0017C330 0017C330 -O2 -G0 ee-gcc 2.96: score 110 -> 5


void func_0017C330(u8 *arg0, s32 arg1)
{
  s32 (**new_var2)(s32);
  s32 (*temp_v0)(s32);
  long new_var3;
  new_var3 = 0;
  *((s32 *) (((u8 *) arg0) + 8)) = arg1;
  if (arg1 != new_var3)
  {
    int new_var;
    new_var2 = (s32 (**)(s32)) (((u8 *) arg0) + new_var3);
    if (arg1)
    {
      temp_v0 = *new_var2;
    }
    else
    {
      temp_v0 = *new_var2;
    }
    if (temp_v0 != ((void *) new_var3))
    {
      new_var = -4;
      temp_v0(*((s32 *) (((u8 *) arg0) - new_var)));
    }
  }
}
