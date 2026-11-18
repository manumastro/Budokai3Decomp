/* Draft (not built): func_0016AE98 at 0x0016AE98, size 0x7C, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 2895 -> 1785
 * Original: asm/nonmatchings/cri/mfci/func_0016AE98.s */

// func_0016AE98 0016AE98 -O1 -G0 ee-gcc 2.96: score 2895 -> 1785
s32 func_0016A7B0(s32 *, void *);           /* extern */
extern s32 D_00464120;

void func_0016AE98(u8 *arg0, s32 arg1)
{
  u8 *new_var;
  s32 new_var2;
  s32 temp_a0;
  if (arg0 == ((void *) 0))
  {
    func_0016A7B0(&D_00464120, arg0);
    return;
  }
  temp_a0 = *((s32 *) (((u8 *) arg0) + 4));
  new_var2 = (s32) (((*((s32 *) (((u8 *) arg0) + 8))) + arg1) - 1);
  *((s32 *) (((u8 *) arg0) + 4)) = arg1;
  *((s32 *) (((u8 *) arg0) + 0xC)) = (s32) (new_var2 / arg1);
  new_var = arg0;
  *((s32 *) (((u8 *) new_var) + 0x10)) = (s32) (((s32) ((*((s32 *) (((u8 *) new_var) + 0x10))) * temp_a0)) / arg1);
  *((s32 *) (((u8 *) arg0) + 0x14)) = (s32) ((*((s32 *) (((u8 *) arg0) + 0x18))) * arg1);
}
