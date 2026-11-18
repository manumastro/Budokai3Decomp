/* Draft (not built): func_00187730 at 0x00187730, size 0x44, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 125 -> 10
 * Original: asm/nonmatchings/cri/mwsfd/func_00187730.s */

// func_00187730 00187730 -O2 -G0 ee-gcc 2.96: score 125 -> 10
s32 func_001576F0();                                /* extern */
s32 func_00187880(s32, s32);                    /* extern */

s32 func_00187730(s32 arg0)
{
  s32 var_a1;
  var_a1 = 0;
  if (func_001576F0() == (var_a1 = 1))
  {
    var_a1 = func_00187880(arg0, 0);
  }
  return var_a1;
}
