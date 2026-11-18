/* Draft (not built): func_001A1970 at 0x001A1970, size 0x1C, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 400 -> 100
 * Original: asm/nonmatchings/cri/sfx/func_001A1970.s */

// func_001A1970 001A1970 -O1 -G0 ee-gcc 2.96: score 400 -> 100


void func_001A1970(u8 *arg0)
{
  u64 new_var2;
  int new_var;
  new_var = -1U;
  new_var2 = (u64) (new_var >> 1);
  *((s32 *) (((u8 *) arg0) + 0x18)) = 0;
  *((u64 *) (((u8 *) arg0) + 8)) = new_var2;
  *((s64 *) (((u8 *) arg0) + 0)) = 0;
  *((s64 *) (((u8 *) arg0) + 0x10)) = 0;
}
