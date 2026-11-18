/* Draft (not built): htCiLoadDirInfo at 0x00169500, size 0x188, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 3580 -> 1845
 * Original: asm/nonmatchings/cri/htci/htCiLoadDirInfo.s */

// htCiLoadDirInfo 00169500 -O2 -G0 ee-gcc 2.96: score 3580 -> 1845
s32 func_00167C90(s32, s32 *);          /* extern */
s32 func_00168D68(s32 *, s32 *, u32, s32);  /* extern */
s32 func_00168F08(s32, s32 *);                  /* extern */
s32 func_00169068(s32 *, s32);                  /* extern */
s32 func_00169258();                            /* extern */
s32 func_00169488();                            /* extern */
s32 memset(s32 *, s32, u32);            /* extern */
s32 scePrintf(s32 *, s32);                  /* extern */
extern s32 D_00413D00;
extern s32 D_00413D14;
extern s32 D_00463CA8;
extern s32 D_00463CD8;
extern s32 D_00463D08;
extern s32 D_00463D30;
extern s32 D_00480040;

s32 htCiLoadDirInfo(s32 arg0, s32 *arg1, u32 arg2, s32 arg3)
{
  s32 var_v0;
  int new_var;
  u32 temp_lo;
  memset(&D_00480040, 0, 0x1000U);
  if (D_00413D00 == 0)
  {
    func_00169488();
  }
  func_00169258();
  var_v0 = 0;
  if (arg0 != 0)
  {
    if (arg1 == ((void *) 0))
    {
      if (D_00413D14 != 0)
      {
        return 0;
      }
      scePrintf(&D_00463CA8, 0);
      return 0;
    }
    if (1)
    {
      if (arg2 == 0)
      {
        if (D_00413D14 != 0)
        {
          return 0;
        }
        scePrintf(&D_00463CD8, 0);
        return 0;
      }
      memset(arg1, 0, arg2);
      if (func_00168F08(arg0, &D_00480040) != 0)
      {
        new_var = arg3 + 9;
        temp_lo = arg2 / ((u32) new_var);
        var_v0 = arg3;
        var_v0 = (temp_lo * 8) + (func_00169068(arg1, func_00168D68(arg1, &D_00480040, temp_lo, arg3)) * (var_v0 + 1));
        return var_v0;
      }
      if (D_00413D14 == 0)
      {
        scePrintf(&D_00463D08, arg0);
      }
      func_00167C90(0, &D_00463D30);
      return 0;
    }
  }
  return var_v0;
}
