/* Draft (not built): func_00189C80 at 0x00189C80, size 0x78, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 305 -> 180
 * Original: asm/nonmatchings/cri/sfd/func_00189C80.s */

// func_00189C80 00189C80 -O2 -G0 ee-gcc 2.96: score 305 -> 180
s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */
s32 func_001999E0(void *, s32);                 /* extern */

s32 func_00189C80(u8 *arg0, s32 arg1)
{
  s32 var_v0;
  if (func_0018D870() != 0)
  {
    return 0;
  }
  func_0018D650(0, 0xFF0001A2);
  var_v0 = func_001999E0(arg0, 6);
  if (var_v0 != 0)
  {
    var_v0 = (*((s32 (**)(u8 *, s32)) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0x1DC4)))) + 8)))(arg0, arg1);
  }
  return var_v0;
}
