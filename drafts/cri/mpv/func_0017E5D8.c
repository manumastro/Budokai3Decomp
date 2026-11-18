/* Draft (not built): func_0017E5D8 at 0x0017E5D8, size 0x44, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 385 -> 100
 * Original: asm/nonmatchings/cri/mpv/func_0017E5D8.s */

// func_0017E5D8 0017E5D8 -O1 -G0 ee-gcc 2.96: score 385 -> 100
extern s32 D_004814F0;

void func_0017E5D8(void)
{
  s32 var_v0;
  u8 *new_var;
  int new_var2;
  u8 *var_v1;
  new_var = (u8 *) (&D_004814F0);
  new_var2 = (*((s32 *) (((u8 *) (&D_004814F0)) + 0x54))) > 0;
  var_v1 = *((u8 **) (new_var + 0x58));
  if (new_var2)
  {
    var_v0 = *((s32 *) (((u8 *) (&D_004814F0)) + 0x54));
    do
    {
      var_v0 -= 1;
      *((s32 *) (((u8 *) var_v1) + 0x188)) = 1;
      var_v1 += 0x400;
    }
    while (var_v0 != 0);
  }
}
