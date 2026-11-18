/* Draft (not built): func_00172F80 at 0x00172F80, size 0xB8, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1000 -> 360
 * Original: asm/nonmatchings/cri/mpv/func_00172F80.s */

// func_00172F80 00172F80 -O2 -G0 ee-gcc 2.96: score 1000 -> 360
s32 func_00172EF8(s32, s32);                /* extern */
s32 func_00178B80();                                /* extern */
s32 func_0017E040(s32);                             /* extern */
s32 func_0017E268(s32, s32, s32);           /* extern */

void func_00172F80(s32 arg0, s32 arg1)
{
  int new_var;
  s32 var_s1;
  s32 temp_v0;
  if (func_00178B80() != 0)
  {
    func_00172EF8(0, 0xFF03020A);
    return;
  }
  new_var = 4;
  var_s1 = 0xFF030305;
  loop_4:
  temp_v0 = func_0017E040(arg1);

  if (temp_v0 != 0)
  {
    if (temp_v0 & 0xCC)
    {
      var_s1 = 0;
    }
    else
      if (func_0017E268(arg1, 1, new_var) == new_var)
    {
      goto loop_4;
    }
  }
  func_00172EF8(arg0, var_s1);
}
