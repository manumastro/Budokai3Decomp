/* Draft (not built): func_0018FF20 at 0x0018FF20, size 0x7C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 260 -> 210
 * Original: asm/nonmatchings/cri/sfd/func_0018FF20.s */

// func_0018FF20 0018FF20 -O2 -G0 ee-gcc 2.96: score 260 -> 210
s32 func_0018FFA0(s32);                         /* extern */
s32 func_00190010(s32);                             /* extern */
s32 func_00190028(s32);                         /* extern */
s32 func_00190290(s32);                         /* extern */
s32 func_00190358(s32);                             /* extern */
s32 func_001999E0(s32);                         /* extern */

s32 func_0018FF20(s32 arg0)
{
  s32 temp_s0;
  arg0 = func_001999E0(5);
  if (arg0 != 0)
  {
    if (func_00190010(arg0) == 1)
    {
      return 0;
    }
    func_0018FFA0(arg0);
    temp_s0 = func_00190358(arg0);
    func_00190028(arg0);
    func_00190290(arg0);
    arg0 = temp_s0;
    return arg0;
  }
  return arg0;
}
