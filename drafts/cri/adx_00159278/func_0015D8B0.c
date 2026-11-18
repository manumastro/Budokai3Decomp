/* Draft (not built): func_0015D8B0 at 0x0015D8B0, size 0x64, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 10 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 750 -> 415
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015D8B0.s */

// func_0015D8B0 0015D8B0 -O2 -G0 ee-gcc 2.96: score 750 -> 415
s32 dvCiLoadDirInfo(s32, s32, s32); /* extern */
s32 func_00167928(s32, s32, s32, s32);              /* extern */

s32 func_0015D8B0(u8 *arg0, s32 arg1, s32 arg2)
{
  arg2 = 0;
  if (arg0 != ((void *) 0))
  {
    arg2 = func_00167928(arg1, arg2, *((s32 *) (((u8 *) arg0) + 8)), *((s32 *) (((u8 *) arg0) + 0xC)));
  }
  else
  {
    dvCiLoadDirInfo(0, 0, 0);
  }
  return arg2;
}
