/* Draft (not built): func_0017AF10 at 0x0017AF10, size 0x94, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1435 -> 1090
 * Original: asm/nonmatchings/cri/mpv/func_0017AF10.s */

// func_0017AF10 0017AF10 -O1 -G0 ee-gcc 2.96: score 1435 -> 1090
s32 func_00179018(void *, s32, s32);        /* extern */
s32 func_0017B020(void *);                      /* extern */
extern void *D_00424C38;

s32 func_0017AF10(s32 arg0, u8 *arg1)
{
  s32 *var_v0;
  int new_var2;
  s32 var_a0;
  u8 *new_var;
  ;
  D_00424C38 = new_var;
  func_00179018(arg1, 0, (arg0 * 0x35) + 4);
  func_0017B020(D_00424C38);
  new_var2 = 0xC;
  *((s32 *) (((u8 *) D_00424C38) + new_var2)) = arg0;
  var_v0 = D_00424C38 + 0x10;
  var_a0 = arg0 > 0;
  if (var_a0)
  {
    var_a0 = arg0;
    do
    {
      var_a0 -= 1;
      *var_v0 = 1;
      var_v0 += 0xD4;
    }
    while (var_a0 != 0);
  }
  return 0;
}
