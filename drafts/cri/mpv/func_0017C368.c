/* Draft (not built): func_0017C368 at 0x0017C368, size 0xB0, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1560 -> 1475
 * Original: asm/nonmatchings/cri/mpv/func_0017C368.s */

// func_0017C368 0017C368 -O1 -G0 ee-gcc 2.96: score 1560 -> 1475
void **func_0016DBE0(s32, s32);                     /* extern */
s32 func_0017C4D0(s32, void **, s32);               /* extern */

s32 func_0017C368(s32 arg0, u8 *arg1, s32 *arg2, s32 arg3)
{
  s32 temp_s0;
  s32 var_v0;
  u8 **temp_v0;
  u8 *temp_a1;
  temp_a1 = (u8 *) arg1;
  temp_v0 = func_0016DBE0(*((s32 *) (temp_a1 + 0)), *((s32 *) (temp_a1 + 4)));
  var_v0 = -1;
  if (temp_v0 != ((void *) 0))
  {
    temp_s0 = func_0017C4D0(arg0, temp_v0, arg3);
    temp_a1 = *temp_v0;
    if (1)
    {
      *arg2 = (*((s32 *) (temp_a1 + 4))) - (*((s32 (**)(u8 **, s32)) (((u8 *) (*temp_v0)) + 0x24)))(temp_v0, 1);
      (*((s32 (**)(u8 **, u8 *)) (((u8 *) temp_a1) + 0xC)))(temp_v0, temp_a1);
    }
    var_v0 = temp_s0;
  }
  return var_v0;
}
