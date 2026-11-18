/* Draft (not built): func_00184B48 at 0x00184B48, size 0x4C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 7 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 485 -> 340
 * Original: asm/nonmatchings/cri/mwsfd/func_00184B48.s */

// func_00184B48 00184B48 -O2 -G0 ee-gcc 2.96: score 485 -> 340
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_004667E0;

s32 func_00184B48(s32 arg0)
{
  s32 var_s0;
  s32 var_v0;
  var_s0 = 1;
  if (arg0 != 0)
  {
    var_v0 = 1;
    if (arg0 != 1)
    {
      func_001870E8(&D_004667E0);
      if (1)
      {
        goto block_6;
      }
    }
  }
  else
  {
    var_s0 = 0;
    block_6:
    ;

  }
  return var_s0;
}
