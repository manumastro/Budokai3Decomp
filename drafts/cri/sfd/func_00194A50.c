/* Draft (not built): func_00194A50 at 0x00194A50, size 0x60, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 650 -> 505
 * Original: asm/nonmatchings/cri/sfd/func_00194A50.s */

// func_00194A50 00194A50 -O1 -G0 ee-gcc 2.96: score 650 -> 505
void *func_00194AD0();                              /* extern */

void func_00194A50(s32 *arg1, s32 *arg2)
{
  s32 *new_var;
  u8 *temp_v0;
  u8 *temp_v1;
  new_var = arg1;
  temp_v0 = func_00194AD0();
  if (temp_v0 != ((void *) 0))
  {
    temp_v1 = *((u8 **) (((u8 *) temp_v0) + 0x54));
    if (temp_v1 != ((void *) 0))
    {
      *arg2 = *((s32 *) (((u8 *) temp_v1) + 4));
      *arg1 = *((s32 *) (((u8 *) temp_v1) + 0));
      return;
    }
    goto block_4;
  }
  block_4:
  *new_var = 0;

  *arg2 = 0;
}
