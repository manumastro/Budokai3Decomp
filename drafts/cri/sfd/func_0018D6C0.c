/* Draft (not built): func_0018D6C0 at 0x0018D6C0, size 0x40, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 310 -> 105
 * Original: asm/nonmatchings/cri/sfd/func_0018D6C0.s */

// func_0018D6C0 0018D6C0 -O2 -G0 ee-gcc 2.96: score 310 -> 105


void func_0018D6C0(u8 *arg0, s32 arg1)
{
  s32 new_var;
  s32 (*temp_v0)(s32);
  if ((*((s32 *) (((u8 *) arg0) + 8))) == 0)
  {
    new_var = arg1;
    *((s32 *) (((u8 *) arg0) + 8)) = new_var;
  }
  if (new_var != 0)
  {
    temp_v0 = *((s32 (**)(s32)) (((u8 *) arg0) + 0));
    if (temp_v0 != ((void *) 0))
    {
      temp_v0(*((s32 *) (((u8 *) arg0) + 4)));
    }
  }
}
