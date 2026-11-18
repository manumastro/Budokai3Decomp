/* Draft (not built): func_0018E018 at 0x0018E018, size 0x60, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1005 -> 120
 * Original: asm/nonmatchings/cri/sfd/func_0018E018.s */

// func_0018E018 0018E018 -O2 -G0 ee-gcc 2.96: score 1005 -> 120
void *func_0018E078();                              /* extern */

s32 func_0018E018(s32 arg1)
{
  u8 *temp_v0;
  temp_v0 = func_0018E078();
  if (((*((s32 *) (((u8 *) temp_v0) + 0))) != 0) || (((arg1 = 0, (*((s32 *) (((u8 *) temp_v0) + 0x10))) == 0)) && ((arg1 = 0, (*((s32 *) (((u8 *) temp_v0) + 0x14))) == 0))))
  {
    arg1 = arg1 == ((*((s32 *) (((u8 *) temp_v0) + 8))) + (*((s32 *) (((u8 *) temp_v0) + 0xC))));
  }
  return arg1;
}
