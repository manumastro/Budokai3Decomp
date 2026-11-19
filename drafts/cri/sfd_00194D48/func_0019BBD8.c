/* Draft (not built): func_0019BBD8 at 0x0019BBD8, size 0x120, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1320 -> 900
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019BBD8.s */

// func_0019BBD8 0019BBD8 -O2 -G0 ee-gcc 2.96: score 1320 -> 900
s32 func_00199818(void *, s32, s32);    /* extern */
s32 func_0019BCF8(void *, void *);              /* extern */
s32 func_0019BDE8(void *, void *);              /* extern */
s32 func_0019BE88(void *, void *);              /* extern */
s32 func_0019BF28(void *, void *);              /* extern */
s32 func_0019BF48(s32, s32);            /* extern */

s32 func_0019BBD8(u8 *arg0, u8 *arg1)
{
  if ((*((s32 *) (((u8 *) arg1) + 4))) != 0)
  {
    func_0019BF48(0, 0);
    func_0019BCF8(arg0, arg1);
    goto block_10;
  }
  if ((*((s32 *) (((u8 *) arg1) + 8))) != 0)
  {
    func_0019BF48(0, 1);
    func_0019BDE8(arg0, arg1);
    func_00199818(arg0, 6, 0);
    *((s32 *) (((u8 *) arg0) + 0xB48)) = 0;
    goto block_10;
  }
  if ((*((s32 *) (((u8 *) arg1) + 0xC))) != 0)
  {
    func_0019BF48(0, 2);
    func_00199818(arg0, 5, 0);
    func_0019BE88(arg0, arg1);
    *((s32 *) (((u8 *) arg0) + 0xB44)) = 0;
    goto block_10;
  }
  if ((*((s32 *) (((u8 *) arg1) + 0x20))) != 0)
  {
    func_0019BF48(0, 7);
    func_0019BF28(arg0, arg1);
    func_00199818(arg0, 6, 0);
    func_00199818(arg0, 5, 0);
    *((s32 *) (((u8 *) arg0) + 0xB48)) = 0;
    *((s32 *) (((u8 *) arg0) + 0xB44)) = 0;
    block_10:
    return 0;

  }
  return -1;
}
