/* Draft (not built): func_0017EB00 at 0x0017EB00, size 0x90, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 2790 -> 2125
 * Original: asm/nonmatchings/cri/mpv/func_0017EB00.s */

// func_0017EB00 0017EB00 -O1 -G0 ee-gcc 2.96: score 2790 -> 2125
s32 func_0017C2E0(s32, s32);                /* extern */
s32 func_0017EB90();                                /* extern */
extern s32 D_004814F0;

s32 func_0017EB00(s32 arg0, s32 arg1, s32 *arg2)
{
  if (arg0 == 0)
  {
    arg2 = &D_004814F0;
    *arg2 = *((arg1 * 4) + arg2);
    return 0;
  }
  if (func_0017EB90() != 0)
  {
    return func_0017C2E0(0, 0xFF030210);
  }
  arg2 = arg0 + 0x190;
  *arg2 = *((arg1 * 4) + arg2);
  return 0;
}
