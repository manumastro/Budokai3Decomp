/* Draft (not built): func_00165A18 at 0x00165A18, size 0x70, segment cri/dtr (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1240 -> 705
 * Original: asm/nonmatchings/cri/dtr/func_00165A18.s */

// func_00165A18 00165A18 -O1 -G0 ee-gcc 2.96: score 1240 -> 705
s32 sprintf(s32, s32 *, s32, s32);          /* extern */
extern s32 D_00411E34;
extern s32 D_00463370;

void func_00165A18(s32 arg1, s32 arg2, s32 arg3)
{
  s32 var_a1;
  s32 var_a3;
  short new_var3;
  s8 *temp_v1;
  int new_var2;
  var_a3 = arg3;
  var_a1 = 0;
  if (arg2 > 0)
  {
    new_var2 = -0x56;
    new_var3 = new_var2;
    var_a3 = new_var3;
    do
    {
      var_a3 = arg1 + var_a1;
      temp_v1 = var_a3;
      var_a1 += 1;
      *temp_v1 = -0x56;
    }
    while (var_a1 < arg2);
  }
  sprintf(arg1, &D_00463370, D_00411E34, var_a3);
  D_00411E34 += 1;
}
