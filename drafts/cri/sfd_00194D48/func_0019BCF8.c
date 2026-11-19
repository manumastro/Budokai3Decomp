/* Draft (not built): func_0019BCF8 at 0x0019BCF8, size 0xEC, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1160 -> 730
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019BCF8.s */

// func_0019BCF8 0019BCF8 -O2 -G0 ee-gcc 2.96: score 1160 -> 730
s32 func_00199818(void *, s32, s32);    /* extern */
s32 func_0019BDE8(void *, void *);              /* extern */
s32 func_0019BE88(void *, void *);              /* extern */
s32 func_0019BF28(void *, void *);              /* extern */
s32 func_0019BF68(void *, s32, s32);    /* extern */
s32 func_0019BF88(void *, s32, s32);    /* extern */
s32 func_0019BFA8(void *, s32, s32);    /* extern */
s32 func_0019C008(s32, s32);            /* extern */

void func_0019BCF8(u8 *arg0, u8 *arg1)
{
  func_0019C008(0, 1);
  if ((*((s32 *) (((u8 *) arg1) + 8))) != 0)
  {
    func_0019BF68(arg0, 1, 1);
    func_0019BDE8(arg0, arg1);
  }
  else
  {
    func_00199818(arg0, 5, 0);
  }
  if ((*((s32 *) (((u8 *) arg1) + 0xC))) != 0)
  {
    *((s32 *) (((u8 *) arg0) + 0xB44)) = 0;
    func_0019BF88(arg0, 1, 2);
    func_0019BE88(arg0, arg1);
  }
  else
  {
    func_00199818(arg0, 6, 0);
    *((s32 *) (((u8 *) arg0) + 0xB48)) = 0;
  }
  if ((*((s32 *) (((u8 *) arg1) + 0x20))) != 0)
  {
    func_0019BFA8(arg0, 1, 7);
    func_0019BF28(arg0, arg1);
  }
}
