/* Draft (not built): func_00169770 at 0x00169770, size 0x64, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 2125 -> 925
 * Original: asm/nonmatchings/cri/htci/func_00169770.s */

// func_00169770 00169770 -O2 -G0 ee-gcc 2.96: score 2125 -> 925
s32 func_00127A88(s32 *, s32);              /* extern */
extern s32 D_00413E20;
extern s32 D_00463D60;

void func_00169770(s32 arg0)
{
  s8 new_var3;
  s32 *new_var2;
  new_var2 = &(*((s32 *) (((u8 *) (&D_00463D60)) + 0)));
  if (arg0 == 0)
  {
    u8 *new_var;
    new_var = ((u8 *) (&D_00463D60)) + 4;
    new_var3 = *((s8 *) (((u8 *) (&D_00463D60)) + 5));
    *((s8 *) (((u8 *) (&D_00413E20)) + 4)) = (s8) (*((s8 *) new_var));
    *((s8 *) (((u8 *) (&D_00413E20)) + 5)) = (s8) new_var3;
    return;
    *((s32 *) (((u8 *) (&D_00413E20)) + 0)) = M2C_UNALIGNED32(*new_var2);
  }
  if (1)
  {
    func_00127A88(&D_00413E20, arg0);
  }
}
