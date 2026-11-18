/* Draft (not built): func_0019EC10 at 0x0019EC10, size 0x3C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 9 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 55 -> 35
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019EC10.s */

// func_0019EC10 0019EC10 -O2 -G0 ee-gcc 2.96: score 55 -> 35


void func_0019EC10(u8 *arg0)
{
  u8 *temp_v0;
  u8 *temp_v1;
  int new_var;
  temp_v1 = arg0 + 0x14;
  temp_v0 = arg0 + 8;
  new_var = 0x1F;
  *((s32 *) (((u8 *) temp_v0) + 8)) = 0x64;
  *((s32 *) (((u8 *) temp_v0) + 4)) = new_var;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 1;
  *((s8 *) (((u8 *) temp_v1) + 2)) = -0x80;
  *((s8 *) (((u8 *) temp_v1) + 1)) = 0x40;
  *((s8 *) (((u8 *) arg0) + 0x14)) = 0;
}
