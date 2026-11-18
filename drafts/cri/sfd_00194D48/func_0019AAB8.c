/* Draft (not built): func_0019AAB8 at 0x0019AAB8, size 0x58, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 35 -> 20
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019AAB8.s */

// func_0019AAB8 0019AAB8 -O2 -G0 ee-gcc 2.96: score 35 -> 20
s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */

unsigned int func_0019AAB8(u8 *arg0, s32 arg1)
{
  if (func_0018D870() != 0)
  {
    func_0018D650(0, 0xFF000124);
    return;
  }
  *((s32 *) (((u8 *) arg0) + 0xCD8)) = arg1;
}
