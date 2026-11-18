/* Draft (not built): func_00178B28 at 0x00178B28, size 0x54, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 465 -> 230
 * Original: asm/nonmatchings/cri/mpv/func_00178B28.s */

// func_00178B28 00178B28 -O1 -G0 ee-gcc 2.96: score 465 -> 230
extern s32 D_00481490;

void func_00178B28(s32 arg0, s32 arg1)
{
  s32 *var_a0;
  s32 *var_v1;
  s32 var_a2;
  var_a2 = *((s32 *) (((u8 *) (&D_00481490)) + 0x40));
  var_v1 = *((s32 **) (((u8 *) (&D_00481490)) + 0x44));
  if ((*((s32 *) (((u8 *) (&D_00481490)) + 0x40))) > 0)
  {
    var_a0 = (var_v1 + (arg0 * 4)) + 0x18;
    do
    {
      if ((*var_v1) == 2)
      {
        *var_a0 = arg1;
        var_v1 += 0x6E0;
      }
      var_a2 -= 1;
      var_a0 += 0x6E0;
    }
    while (var_a2 != 0);
  }
}
