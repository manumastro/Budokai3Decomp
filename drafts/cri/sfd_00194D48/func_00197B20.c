/* Draft (not built): func_00197B20 at 0x00197B20, size 0x60, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 405 -> 340
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197B20.s */

// func_00197B20 00197B20 -O2 -G0 ee-gcc 2.96: score 405 -> 340
s32 func_00179018(s32, s32);            /* extern */
s32 func_0019B948(s32);                         /* extern */

void func_00197B20(s32 arg0)
{
  s32 new_var;
  s32 var_a0;
  s32 var_s0;
  s32 var_s1;
  var_s1 = 4;
  func_00179018(0, 0x30);
  ;
  var_s0 = new_var;
  var_a0 = var_s0;
  do
  {
    var_s0 += 0x20;
    var_s1 -= 1;
    func_0019B948(var_a0);
    var_a0 = var_s0;
  }
  while (var_s1 >= 0);
  func_0019B948(arg0 - -0xA0);
}
