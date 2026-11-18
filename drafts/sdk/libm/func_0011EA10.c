/* Draft (not built): func_0011EA10 at 0x0011EA10, size 0x34, segment sdk/libm (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1045 -> 615
 * Original: asm/nonmatchings/sdk/libm/func_0011EA10.s */

// func_0011EA10 0011EA10 -O1 -G0 ee-gcc 2.96: score 1045 -> 615


long func_0011EA10(s64 arg0)
{
  unsigned int new_var2;
  unsigned int new_var;
  new_var = 0xFFFF0000U;
  new_var = new_var >> 0x20;
  new_var2 = (new_var = (arg0 >> 0x20) & 0x7FFFFFFF) << 0x20;
  return (arg0 & new_var) | new_var2;
}
