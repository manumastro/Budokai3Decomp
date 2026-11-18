/* Draft (not built): func_0018B058 at 0x0018B058, size 0x60, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1940 -> 1645
 * Original: asm/nonmatchings/cri/sfd/func_0018B058.s */

// func_0018B058 0018B058 -O1 -G0 ee-gcc 2.96: score 1940 -> 1645
s32 func_0018D650(s32, void *);                 /* extern */

s32 func_0018B058(s32 arg0, s32 arg1, s32 *arg2)
{
  int new_var;
  u8 *new_var2;
  u8 *temp_a3;
  *arg2 = 0;
  new_var = arg0 + 0x1280;
  temp_a3 = new_var + (arg1 * 0x74);
  new_var2 = ((u8 *) (new_var + (arg1 * 0x74))) + 0x14;
  if ((*((s32 *) (((u8 *) temp_a3) + 4))) == 0)
  {
    return func_0018D650(0xFF000401, temp_a3);
  }
  *arg2 = *((s32 *) new_var2);
  return 0;
}
