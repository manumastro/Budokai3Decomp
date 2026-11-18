/* Draft (not built): func_0017AFA8 at 0x0017AFA8, size 0x78, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 860 -> 650
 * Original: asm/nonmatchings/cri/mpv/func_0017AFA8.s */

// func_0017AFA8 0017AFA8 -O1 -G0 ee-gcc 2.96: score 860 -> 650
s32 func_001790E8();                            /* extern */
s32 func_0017AC30();                            /* extern */
s32 func_0017B3D0(s32 *);                       /* extern */
extern void *D_00424C38;

void func_0017AFA8(void)
{
  s32 *var_s0;
  void *new_var;
  s32 temp_v0;
  s32 var_s1;
  temp_v0 = *((s32 *) (((u8 *) D_00424C38) + 0xC));
  new_var = D_00424C38 + 0x10;
  if (temp_v0 > 0)
  {
    var_s0 = new_var;
    var_s1 = temp_v0;
    do
    {
      if ((*var_s0) != 1)
      {
        func_0017B3D0(var_s0);
      }
      var_s1 -= 1;
      var_s0 += 0xD4;
    }
    while (var_s1 != 0);
  }
  func_001790E8();
  func_0017AC30();
}
