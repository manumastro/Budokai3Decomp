/* Draft (not built): func_001156F0 at 0x001156F0, size 0x50, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0; then decomp-permuter: score 745 -> 120
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_001156F0.s */

// func_001156F0 001156F0 -O1 -G0 ee-gcc 2.9-991111-01: score 745 -> 120
extern s32 D_003EDCC8;

s32 func_001156F0(s32 *arg0, s32 *arg1)
{
  u8 *new_var;
  new_var = (u8 *) (&D_003EDCC8);
  if ((*((s32 *) (new_var + 8))) < 0)
  {
    return 0x80008001;
  }
  if (arg0 != ((void *) 0))
  {
    *arg0 = *((s32 *) (new_var + 0x10));
  }
 do { if (arg1 != ((void *) 0)) { new_var = new_var; *arg1 = 0x80 - (*((s32 *) (new_var + 0x10))); } } while (0);
  return 0;
}
