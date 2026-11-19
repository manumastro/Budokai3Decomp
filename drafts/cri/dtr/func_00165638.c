/* Draft (not built): func_00165638 at 0x00165638, size 0xEC, segment cri/dtr (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1205 -> 625
 * Original: asm/nonmatchings/cri/dtr/func_00165638.s */

// func_00165638 00165638 -O2 -G0 ee-gcc 2.96: score 1205 -> 625
s32 func_0016DAD8();                            /* extern */
s32 func_0016DAF0();                            /* extern */
s32 memset(s8 *, s32, s32);             /* extern */
s32 scePrintf(s32 *, s32, s32);     /* extern */
extern s8 D_00411618;
extern s32 D_00463328;

s8 *func_00165638(s32 arg0, s32 arg1)
{
  s32 var_a1;
  s8 *var_a0;
  int new_var;
  s8 *var_s1;
  func_0016DAD8();
  var_s1 = &D_00411618;
  var_a1 = 0;
  if (D_00411618 != 0)
  {
    var_a0 = &D_00411618;
    loop_2:
    var_a1 += 1;

    var_a0 += 0x40;
    if (var_a1 < 0x20)
    {
      var_s1 = (var_a1 << 6) + (&D_00411618);
      if ((*var_a0) != 0)
      {
        goto loop_2;
      }
    }
  }
  if (var_a1 == 0x20)
  {
    scePrintf(&D_00463328, 0x20, 0x20);
    var_s1 = (void *) 0;
  }
  else
  {
    new_var = 0x40;
    memset(var_s1, 0, new_var);
    *((s8 *) (((u8 *) var_s1) + 1)) = 0;
    *((s32 *) (((u8 *) var_s1) + 0x38)) = new_var;
    *((s32 *) (((u8 *) var_s1) + 4)) = arg0;
    *((s32 *) (((u8 *) var_s1) + 8)) = arg1;
    *((s8 *) (((u8 *) var_s1) + 0)) = 1;
    *((s8 *) (((u8 *) var_s1) + 2)) = 0;
    *((s32 *) (((u8 *) var_s1) + 0x30)) = 1;
    *((s32 *) (((u8 *) var_s1) + 0x34)) = 0;
  }
  func_0016DAF0();
  return var_s1;
}
