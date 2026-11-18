/* Draft (not built): func_001708C0 at 0x001708C0, size 0x28, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 515 -> 135
 * Original: asm/nonmatchings/cri/mpv/func_001708C0.s */

// func_001708C0 001708C0 -O2 -G0 ee-gcc 2.96: score 515 -> 135
extern s32 D_00423300;

s32 func_001708C0(u32 arg0)
{
  s32 var_v0;
  var_v0 = 0;
  if (arg0 < 7U)
  {
    var_v0 = *((&D_00423300) + (arg0 * 4));
  }
  return var_v0;
}
