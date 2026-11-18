/* Draft (not built): func_00185308 at 0x00185308, size 0x1C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 15 -> 5
 * Original: asm/nonmatchings/cri/mwsfd/func_00185308.s */

// func_00185308 00185308 -O2 -G0 ee-gcc 2.96: score 15 -> 5


void func_00185308(u8 *arg0)
{
  int new_var2;
  s32 *new_var;
  u8 *temp_v0;
  temp_v0 = arg0;
  temp_v0 = temp_v0 + 0x1A8;
  *((s32 *) (((u8 *) temp_v0) + 8)) = 0;
  ;
  *new_var = 0;
  *((s32 *) (4 + ((u8 *) temp_v0))) = 0;
  *((s32 *) (((u8 *) arg0) + 0x1A4)) = -1;
  new_var = (s32 *) (((u8 *) arg0) + 0x1A8);
}
