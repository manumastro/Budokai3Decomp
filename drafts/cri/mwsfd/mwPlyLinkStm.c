/* Draft (not built): mwPlyLinkStm at 0x00186430, size 0xA0, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 2495 -> 1795
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyLinkStm.s */

// mwPlyLinkStm 00186430 -O1 -G0 ee-gcc 2.96: score 2495 -> 1795
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_0018B7E0(s32);                             /* extern */
extern s32 D_00466FE8;
extern s32 D_00467018;

void mwPlyLinkStm(u8 *arg0, s8 arg1)
{
  int new_var;
  s8 temp_v0;
  if (func_00183B38() == 0)
  {
    func_001870E8(&D_00466FE8);
    return;
  }
  new_var = 1;
  temp_v0 = *((s8 *) (((u8 *) arg0) + 0x74));
  if (temp_v0 == 1)
  {
    if (arg1 == 0)
    {
      *((s8 *) (((u8 *) arg0) + 0x75)) = temp_v0;
    }
  }
  if ((((*((s8 *) (((u8 *) arg0) + 0x74))) == 0) && (arg1 == new_var)) && (func_0018B7E0(*((s32 *) (((u8 *) arg0) + 0x40))) != 0))
  {
    func_001870E8(&D_00467018);
  }
  *((s8 *) (((u8 *) arg0) + 0x74)) = arg1;
}
