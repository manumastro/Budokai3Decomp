/* Draft (not built): func_0017B098 at 0x0017B098, size 0x34, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 110 -> 5
 * Original: asm/nonmatchings/cri/mpv/func_0017B098.s */

// func_0017B098 0017B098 -O2 -G0 ee-gcc 2.96: score 110 -> 5


void func_0017B098(u8 *arg0, s32 arg1)
{
  unsigned long new_var;
  s32 (*temp_v0)(s32);
  *((s32 *) (((u8 *) arg0) + 8)) = arg1;
  if ((new_var = arg1) != 0)
  {
    temp_v0 = *((s32 (**)(s32)) (((u8 *) arg0) + 0));
    if (temp_v0 != ((void *) 0))
    {
      temp_v0(*((s32 *) (((u8 *) arg0) + 4)));
    }
  }
}
