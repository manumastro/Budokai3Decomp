/* Draft (not built): func_0019B948 at 0x0019B948, size 0x1C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 400 -> 160
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019B948.s */

// func_0019B948 0019B948 -O1 -G0 ee-gcc 2.96: score 400 -> 160


void func_0019B948(u8 *arg0)
{
  int new_var;
  *((s32 *) (((u8 *) arg0) + 0x18)) = 0;
  new_var = -1U;
  *((u64 *) (((u8 *) arg0) + 8)) = (u64) (new_var >> 1);
  *((s64 *) (((u8 *) arg0) + 0)) = 0;
  *((s64 *) (((u8 *) arg0) + 0x10)) = 0;
}
