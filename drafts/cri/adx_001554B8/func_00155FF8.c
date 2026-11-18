/* Draft (not built): func_00155FF8 at 0x00155FF8, size 0x34, segment cri/adx_001554B8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 175 -> 170
 * Original: asm/nonmatchings/cri/adx_001554B8/func_00155FF8.s */

// func_00155FF8 00155FF8 -O2 -G0 ee-gcc 2.96: score 175 -> 170
s32 func_0015D678(s32);                             /* extern */

s32 func_00155FF8(u8 *arg0)
{
  s32 temp_v1;
  if (arg0 != ((void *) 0))
  {
 do { temp_v1 = *((s32 *) (((u8 *) arg0) + 4)); } while (0);
    if (temp_v1 != 0)
    {
      return func_0015D678(temp_v1);
    }
  }
  return 0;
}
