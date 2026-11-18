/* Draft (not built): func_001502C8 at 0x001502C8, size 0x40, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 200 -> 10
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_001502C8.s */

// func_001502C8 001502C8 -O2 -G0 ee-gcc 2.96: score 200 -> 10
s32 func_0014FE08();                            /* extern */
s32 func_0014FFA0();                            /* extern */
s32 func_00150120();                            /* extern */

void func_001502C8(u8 *arg0)
{
  s16 temp_v1;
  int new_var;
  temp_v1 = *((s16 *) (((u8 *) arg0) + 0x9C));
  new_var = 1;
  if (temp_v1 == 2)
  {
    func_00150120();
    return;
  }
  if (temp_v1 == new_var)
  {
    func_0014FFA0();
    return;
  }
  func_0014FE08();
}
