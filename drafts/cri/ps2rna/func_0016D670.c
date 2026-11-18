/* Draft (not built): func_0016D670 at 0x0016D670, size 0x8C, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 825 -> 550
 * Original: asm/nonmatchings/cri/ps2rna/func_0016D670.s */

// func_0016D670 0016D670 -O1 -G0 ee-gcc 2.96: score 825 -> 550
s32 func_0016D620(void *, s32, s32);            /* extern */
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;

void func_0016D670(u8 *arg0, s32 arg1)
{
  u8 *new_var;
  s32 var_a1;
  s32 var_s0;
  if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0))
  {
    var_s0 = 0;
    if ((*((s32 *) (((u8 *) arg0) + 4))) > 0)
    {
      var_a1 = 0;
      new_var = arg0;
      do
      {
        var_s0 += 1;
        func_0016D620(new_var, var_a1, arg1);
        var_a1 = var_s0;
      }
      while (var_s0 < (*((s32 *) (((u8 *) new_var) + 4))));
    }
    *((s32 *) (((u8 *) new_var) + 0x60)) = arg1;
  }
}
