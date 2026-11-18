/* Draft (not built): func_00152FD0 at 0x00152FD0, size 0x54, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 550 -> 265
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00152FD0.s */

// func_00152FD0 00152FD0 -O1 -G0 ee-gcc 2.96: score 550 -> 265


s32 func_00152FD0(s32 arg0, s32 arg1, s32 arg2, u32 arg3)
{
  s32 temp_v1;
  int new_var;
  new_var = arg2 + arg3;
  temp_v1 = new_var;
  if (arg0 == 0)
  {
    return ((((u32) ((arg1 + temp_v1) + 0x21)) / arg3) * arg3) - arg2;
  }
  new_var = (((u32) ((arg1 + temp_v1) + 0x39)) / arg3) * arg3;
  return new_var - arg2;
}
