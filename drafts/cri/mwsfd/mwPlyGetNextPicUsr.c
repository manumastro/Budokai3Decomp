/* Draft (not built): mwPlyGetNextPicUsr at 0x001818D0, size 0x9C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1645 -> 875
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyGetNextPicUsr.s */

// mwPlyGetNextPicUsr 001818D0 -O1 -G0 ee-gcc 2.96: score 1645 -> 875
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_00194A50(s32, s32 *, s32 *);           /* extern */
s32 mwPlyGetSfdHn(s32);                             /* extern */
extern s32 D_00465BB0;

void mwPlyGetNextPicUsr(s32 arg0, s32 *arg1, s32 *arg2)
{
  s32 new_var;
  s32 temp_v0;
  temp_v0 = func_00183B38();
  new_var = arg0;
  if (temp_v0 == 0)
  {
    func_001870E8(&D_00465BB0);
    *arg1 = 0;
    *arg2 = 0;
  }
  else
  {
    func_00194A50(mwPlyGetSfdHn(new_var), arg1, arg2);
    temp_v0 = *arg2;
    if (temp_v0 >= 4)
    {
      *arg2 = temp_v0 - 4;
      *arg1 += 4;
    }
  }
}
