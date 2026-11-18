/* Draft (not built): func_001988D0 at 0x001988D0, size 0x20, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 70 -> 20
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001988D0.s */

// func_001988D0 001988D0 -O1 -G0 ee-gcc 2.96: score 70 -> 20


void func_001988D0(u8 *arg0)
{
  int new_var;
  u8 *temp_v1;
  temp_v1 = arg0 + 4;
  new_var = 1;
  *((s32 *) (((u8 *) temp_v1) + 4)) = -3;
  *((s32 *) (((u8 *) temp_v1) + 8)) = new_var;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
}
