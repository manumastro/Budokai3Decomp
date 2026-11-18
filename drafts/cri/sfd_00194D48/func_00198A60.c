/* Draft (not built): func_00198A60 at 0x00198A60, size 0x58, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 35 -> 20
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00198A60.s */

// func_00198A60 00198A60 -O2 -G0 ee-gcc 2.96: score 35 -> 20
s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */

char func_00198A60(u8 *arg0, s32 arg1)
{
  if (func_0018D870() != 0)
  {
    func_0018D650(0, 0xFF000151);
    return;
  }
  *((s32 *) (((u8 *) arg0) + 0x31E8)) = arg1;
}
