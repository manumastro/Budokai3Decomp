/* Draft (not built): func_00199940 at 0x00199940, size 0x9C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 295 -> 65
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00199940.s */

// func_00199940 00199940 -O2 -G0 ee-gcc 2.96: score 295 -> 65
s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */
s32 func_001999E0(s32, s32);                        /* extern */
extern s32 D_004268E0;

s32 func_00199940(s32 arg0, s32 arg1, s32 *arg2)
{
  s32 var_v0;
  if (arg0 == 0)
  {
    var_v0 = *((&D_004268E0) + (arg1 * 4));
 do { *arg2 = var_v0; } while (0);
    return 0;
  }
  if (func_0018D870() != 0)
  {
    return func_0018D650(0, 0xFF000113);
  }
  var_v0 = func_001999E0(arg0, arg1);
  *arg2 = var_v0;
  return 0;
}
