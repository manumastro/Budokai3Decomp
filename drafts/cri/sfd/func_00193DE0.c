/* Draft (not built): func_00193DE0 at 0x00193DE0, size 0xA0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 915 -> 710
 * Original: asm/nonmatchings/cri/sfd/func_00193DE0.s */

// func_00193DE0 00193DE0 -O1 -G0 ee-gcc 2.96: score 915 -> 710
s32 func_00193E80(void *);                      /* extern */
s32 func_0019A010(void *, s32);             /* extern */

void func_00193DE0(u8 *arg0, s32 *arg1, s32 arg2)
{
  s32 *var_s2;
  s32 var_s1;
  u8 *var_s0;
  var_s0 = arg0;
  if (arg2 > 0)
  {
    var_s2 = arg1;
    var_s1 = arg2;
    do
    {
      *((s32 *) (((u8 *) var_s0) + 0)) = 0;
      var_s1 -= 1;
      *((s32 *) (((u8 *) var_s0) + 4)) = 0;
      func_0019A010(var_s0 + 0xC, 0);
      *((s32 *) (((u8 *) var_s0) + 0x38)) = 0;
      *((s32 *) (((u8 *) var_s0) + 8)) = (s32) (*var_s2);
      var_s2 += 4;
      *((s32 *) (((u8 *) var_s0) + 0x3C)) = 1;
      *((s32 *) (((u8 *) var_s0) + 0x40)) = 0;
      *((s32 *) (((u8 *) var_s0) + 0x44)) = 0;
      *((s32 *) (((u8 *) var_s0) + 0x48)) = 0;
      *((s32 *) (((u8 *) var_s0) + 0x4C)) = 0;
      *((s32 *) (((u8 *) var_s0) + 0x50)) = 0;
      func_00193E80(var_s0 + 0x58);
      *((s32 *) (((u8 *) var_s0) + 0xD8)) = 0;
      var_s0 += 0xDC;
    }
    while (var_s1 != 0);
  }
}
