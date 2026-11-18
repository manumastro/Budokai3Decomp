/* Draft (not built): func_00172F48 at 0x00172F48, size 0x34, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 110 -> 5
 * Original: asm/nonmatchings/cri/mpv/func_00172F48.s */

// func_00172F48 00172F48 -O2 -G0 ee-gcc 2.96: score 110 -> 5


void func_00172F48(u8 *arg0, s32 arg1)
{
  unsigned long long new_var;
  s32 (*temp_v0)(s32);
  *((s32 *) (((u8 *) arg0) + 8)) = arg1;
  new_var = 0;
  if (arg1 != new_var)
  {
    temp_v0 = *((s32 (**)(s32)) (arg0 + new_var));
    if (temp_v0 != ((void *) new_var))
    {
      temp_v0(*((s32 *) (((u8 *) arg0) + 4)));
    }
  }
}
