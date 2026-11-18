/* Draft (not built): mwPlyExecSvrHndl at 0x00187B40, size 0x9C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 830 -> 575
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyExecSvrHndl.s */

// mwPlyExecSvrHndl 00187B40 -O2 -G0 ee-gcc 2.96: score 830 -> 575
s32 func_001870E8(s32 *, s32);              /* extern */
s32 func_00187BE0(void *);                          /* extern */
s32 func_00187D28(s32);                             /* extern */
s32 func_00187DD0();                                /* extern */
extern s32 D_00425264;
extern s32 D_00467188;

s32 mwPlyExecSvrHndl(u8 *arg0)
{
  s32 temp_s0;
  if (D_00425264 == 1)
  {
    if (arg0 == ((void *) 0))
    {
      func_001870E8(&D_00467188, D_00425264);
      goto block_3;
      temp_s0 = *((s32 *) (((u8 *) arg0) + 4));
    }
    if (temp_s0 == D_00425264)
    {
      if (func_00187D28(D_00425264) == temp_s0)
      {
        return 0;
      }
      if (func_00187DD0() != temp_s0)
      {
        return func_00187BE0(arg0);
      }
      block_3:
      return 0;

    }
    return temp_s0 = 0;
  }
  return temp_s0;
}
