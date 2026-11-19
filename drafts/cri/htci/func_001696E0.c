/* Draft (not built): func_001696E0 at 0x001696E0, size 0x80, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 2585 -> 1750
 * Original: asm/nonmatchings/cri/htci/func_001696E0.s */

// func_001696E0 001696E0 -O1 -G0 ee-gcc 2.96: score 2585 -> 1750
s32 func_00127A88(s32 *, s8 *, s8, s32 *); /* extern */
extern s32 D_00413D18;
extern s32 D_00463BB0;

void func_001696E0(s8 *arg0, s8 arg2, s32 *arg3)
{
  s32 *var_a3;
  s8 temp_a0;
  u8 *new_var2;
  s8 var_a2;
  s32 *new_var;
  var_a2 = arg2;
  var_a3 = arg3;
  if (arg0 == ((void *) 0))
  {
    *((s8 *) (((u8 *) (&D_00413D18)) + 0)) = 0;
  }
  temp_a0 = *arg0;
  if ((temp_a0 != 0x2F) && (temp_a0 != 0x5C))
  {
    new_var2 = ((u8 *) (&D_00463BB0)) + 1;
    var_a3 = &D_00413D18;
    var_a2 = *((s8 *) new_var2);
    *((s8 *) (((u8 *) (new_var = &D_00413D18)) + 0)) = (s8) (*((s8 *) (((u8 *) (&D_00463BB0)) + 0)));
    *((s8 *) (((u8 *) new_var) + 1)) = var_a2;
  }
  else
  {
    return;
    *((s8 *) (((u8 *) new_var) + 0)) = 0;
  }
  func_00127A88(new_var, arg0, var_a2, var_a3);
}
