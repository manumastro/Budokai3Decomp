/* Draft (not built): func_0018A4B8 at 0x0018A4B8, size 0x68, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 800 -> 245
 * Original: asm/nonmatchings/cri/sfd/func_0018A4B8.s */

// func_0018A4B8 0018A4B8 -O2 -G0 ee-gcc 2.96: score 800 -> 245


void func_0018A4B8(s32 arg0, s32 arg1)
{
  s32 *temp_a0;
  int new_var;
  u8 **temp_v0;
  u8 *temp_s0;
  new_var = arg0 + 0x1280;
  temp_a0 = new_var + (arg1 * 0x74);
  temp_s0 = temp_a0 + 0x10;
  if ((*temp_a0) == 5)
  {
    temp_v0 = *((u8 ***) (((u8 *) temp_s0) + 4));
    if (temp_v0 != ((void *) 0))
    {
      (*((s32 (**)(u8 **, s32)) (((u8 *) (*temp_v0)) + 0xC)))(temp_v0, 5);
      *((u8 ***) (((u8 *) temp_s0) + 4)) = (void *) 0;
    }
  }
}
