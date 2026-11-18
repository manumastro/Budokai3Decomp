/* Draft (not built): func_00197D08 at 0x00197D08, size 0x24, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 15 -> 5
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00197D08.s */

// func_00197D08 00197D08 -O2 -G0 ee-gcc 2.96: score 15 -> 5
s32 func_0019C040(s32);                     /* extern */

void func_00197D08(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0x4C)) = (*((s32 *) (((u8 *) arg0) + 0x48)) = 0);
  func_0019C040(4);
}
