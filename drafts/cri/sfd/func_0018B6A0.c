/* Draft (not built): func_0018B6A0 at 0x0018B6A0, size 0x6C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1065 -> 640
 * Original: asm/nonmatchings/cri/sfd/func_0018B6A0.s */

// func_0018B6A0 0018B6A0 -O2 -G0 ee-gcc 2.96: score 1065 -> 640
s32 func_0019C0D8(s32, s32, s32);               /* extern */

s32 func_0018B6A0(u8 *arg0, s32 arg1, s32 arg2)
{
  s32 var_a1;
  u8 *temp_t0;
  var_a1 = 0;
  temp_t0 = (arg0 + 0x1280) + (arg1 * 0x74);
 do { } while (0);
  if ((*((s32 *) (((u8 *) temp_t0) + 4))) == 0)
  {
    var_a1 = func_0019C0D8(*((s32 *) (((u8 *) temp_t0) + 0x4C)), 0xC, arg2);
  }
  *((s32 *) (((u8 *) arg0) + 0x44)) = 1;
  return var_a1;
}
