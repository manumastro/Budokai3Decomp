/* Draft (not built): func_00198380 at 0x00198380, size 0x70, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 590 -> 295
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00198380.s */

// func_00198380 00198380 -O2 -G0 ee-gcc 2.96: score 590 -> 295
s32 func_0018D650(s32, s32, s32, s32); /* extern */
s32 func_0018D870();                                /* extern */
s32 func_0019C0D8(void *, s32, s32, s32); /* extern */

void func_00198380(u8 *arg0, s32 arg1)
{
  if (0 != func_0018D870())
  {
    func_0018D650(0, 0xFF000137, 0xC, arg1);
    return;
  }
  arg0++;
  arg0--;
  *((s32 *) (((u8 *) arg0) + 0x964)) = 0;
  func_0019C0D8(arg0, 6, 0xC, arg1);
}
