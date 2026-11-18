/* Draft (not built): func_00178738 at 0x00178738, size 0x44, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 390 -> 105
 * Original: asm/nonmatchings/cri/mpv/func_00178738.s */

// func_00178738 00178738 -O1 -G0 ee-gcc 2.96: score 390 -> 105
extern s32 D_00481490;

void func_00178738(void)
{
  s32 new_var;
  s32 *var_v1;
  s32 var_v0;
  u8 *new_var2;
  s32 new_var3;
  new_var2 = (u8 *) (&D_00481490);
  new_var3 = *((s32 *) (new_var2 + 0x40));
  var_v1 = *((s32 **) (new_var2 + 0x44));
  if ((new_var = *((s32 *) (new_var2 + 0x40))) > 0)
  {
    var_v0 = new_var3;
    do
    {
      var_v0 -= 1;
      *var_v1 = 1;
      var_v1 += 0x6E0;
    }
    while (var_v0 != 0);
  }
}
