/* Draft (not built): func_001246A0 at 0x001246A0, size 0x8C, segment sdk/libc_001246A0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1415 -> 1145
 * Original: asm/nonmatchings/sdk/libc_001246A0/func_001246A0.s */

// func_001246A0 001246A0 -O1 -G0 ee-gcc 2.96: score 1415 -> 1145
s32 func_00127940(s32, s32 *);                  /* extern */
extern s32 D_0045EC40;
extern s32 D_0045EC50;

s32 *func_001246A0(u8 *arg0, s32 arg1, s32 arg2)
{
  s32 *var_v0;
  if (arg2 != 0)
  {
    if ((func_00127940(arg2, &D_0045EC50) == 0) || ((var_v0 = (void *) 0, func_00127940(arg2, &D_0045EC40) == 0)))
    {
      *((s32 *) (((u8 *) arg0) + 0x34)) = arg2;
      *((s32 *) (((u8 *) arg0) + 0x30)) = arg1;
    }
  }
  else
  {
    goto block_6;
    block_6:
    var_v0 = &D_0045EC50;

  }
  return var_v0;
}
