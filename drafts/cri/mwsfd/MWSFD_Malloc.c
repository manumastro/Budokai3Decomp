/* Draft (not built): MWSFD_Malloc at 0x00180BE8, size 0xA0, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 210 -> 85
 * Original: asm/nonmatchings/cri/mwsfd/MWSFD_Malloc.s */

// MWSFD_Malloc 00180BE8 -O2 -G0 ee-gcc 2.96: score 210 -> 85
s32 func_00180C88();                                /* extern */
s32 func_00180CC0(s32);                             /* extern */
s32 func_00180DE8(void *);                      /* extern */
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_004659E0;

s32 MWSFD_Malloc(u8 *arg0, s32 arg1)
{
  s32 var_v0;
  if ((*((s32 *) (((u8 *) arg0) + 0x210))) >= 0x20)
  {
    func_001870E8(&D_004659E0);
    return 0;
  }
  var_v0 = 0;
  if (arg1 >= 0)
  {
    if ((*((s32 *) (((u8 *) arg0) + 0x200))) != 0)
    {
      arg1 = func_00180C88();
    }
    else
    {
      arg1 = func_00180CC0(arg1);
    }
    if (arg1 != 0)
    {
      *((s32 *) (((u8 *) (((*((s32 *) (((u8 *) arg0) + 0x210))) * 4) + arg0)) + 0x214)) = arg1;
      func_00180DE8(arg0);
    }
    var_v0 = arg1;
  }
  return var_v0;
}
