/* Draft (not built): func_0017EAB0 at 0x0017EAB0, size 0x4C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 525 -> 260
 * Original: asm/nonmatchings/cri/mpv/func_0017EAB0.s */

// func_0017EAB0 0017EAB0 -O1 -G0 ee-gcc 2.96: score 525 -> 260
extern s32 D_004814F0;

void func_0017EAB0(s32 arg0, s32 arg1)
{
  s32 var_a2;
  u8 *var_v1;
  int new_var3;
  u8 *new_var;
  u8 *new_var2;
  new_var = (u8 *) (&D_004814F0);
  var_a2 = *((s32 *) (((u8 *) (&D_004814F0)) + 0x54));
  new_var2 = new_var + 0x58;
  var_v1 = *((u8 **) new_var2);
  if (var_a2 > 0)
  {
    do
    {
      new_var3 = (arg0 * 4) + 0x190;
      var_a2 -= 1;
      if ((*((s32 *) (((u8 *) var_v1) + 0x188))) == 2)
      {
        *(var_v1 + new_var3) = arg1;
      }
      var_v1 += 0x400;
    }
    while (var_a2 != 0);
  }
}
