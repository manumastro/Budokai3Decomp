/* Draft (not built): func_00168B48 at 0x00168B48, size 0x114, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 485 -> 425
 * Original: asm/nonmatchings/cri/htci/func_00168B48.s */

// func_00168B48 00168B48 -O2 -G0 ee-gcc 2.96: score 485 -> 425
s32 func_00127810(s8 *, s8 *);                  /* extern */
s32 func_00127A88(s8 *, s32 *);             /* extern */
s32 func_00168A80();                                /* extern */
s32 func_00168AF0(s8 *);                            /* extern */
s32 strlen(s8 *);                                   /* extern */
extern s8 D_00413D18;
extern s32 D_00413E20;
extern s8 D_00463BB0;

void func_00168B48(s8 *arg0, s8 *arg1)
{
  s32 temp_v0_3;
  s32 var_a1;
  s8 *var_a0;
  s8 temp_v0;
  s8 temp_v0_2;
  *arg1 = 0;
  if (func_00168A80() == 0)
  {
    func_00127A88(arg1, &D_00413E20);
  }
  if ((func_00168AF0(arg1) == 1) && ((func_00127810(arg1, &D_00413D18), temp_v0 = *((s8 *) (((u8 *) (&(&D_00413D18)[strlen(&D_00413D18)])) + (-1))), temp_v0 != 0x5C)))
  {
    if ((temp_v0 != 0x2F) && (temp_v0 != 0))
    {
      temp_v0_2 = *arg0;
      if (temp_v0_2 != 0x5C)
      {
        if (temp_v0_2 != 0x2F)
        {
          func_00127810(arg1, &D_00463BB0);
        }
      }
    }
  }
  func_00127810(arg1, arg0);
  temp_v0_3 = strlen(arg1);
  var_a1 = 0;
  if (temp_v0_3 > 0)
  {
    var_a0 = arg1;
    do
    {
      var_a1 += 1;
 do { } while (0);
      if ((*var_a0) == 0x5C)
      {
        *var_a0 = 0x2F;
      }
      if (1)
      {
        var_a0 = &arg1[var_a1];
      }
    }
    while (var_a1 < temp_v0_3);
  }
}
