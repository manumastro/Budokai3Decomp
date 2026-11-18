/* Draft (not built): func_00165A88 at 0x00165A88, size 0x2C, segment cri/dtr (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 10 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 165 -> 135
 * Original: asm/nonmatchings/cri/dtr/func_00165A88.s */

// func_00165A88 00165A88 -O2 -G0 ee-gcc 2.96: score 165 -> 135
extern s32 D_00411E40;

u8 *func_00165A88(u32 arg0)
{
  u8 *var_v0;
  var_v0 = (void *) 0;
  if (arg0 < 0x10U)
  {
    var_v0 = (&D_00411E40) + (arg0 * 0x44);
    return var_v0;
  }
}
