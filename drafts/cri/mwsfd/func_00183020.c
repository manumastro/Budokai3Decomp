/* Draft (not built): func_00183020 at 0x00183020, size 0x78, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 2760 -> 1910
 * Original: asm/nonmatchings/cri/mwsfd/func_00183020.s */

// func_00183020 00183020 -O1 -G0 ee-gcc 2.96: score 2760 -> 1910
s32 func_00127A88(s32, s32);                    /* extern */
s32 func_00128040(s32, s32, s32);               /* extern */
s32 func_001870E8(s32 *, s32);              /* extern */
s32 strlen(s32);                                    /* extern */
extern s32 D_004660D0;

void func_00183020(u8 *arg0, s32 arg1)
{
  s32 new_var;
  {
    func_001870E8(&D_004660D0, arg1);
    func_00128040(*((s32 *) (((u8 *) arg0) + 0x1B8)), arg1, *((s32 *) (((u8 *) arg0) + 0x1BC)));
    return;
  }
  new_var = *((s32 *) (((u8 *) arg0) + 0x1B8));
  func_00127A88(new_var, arg1);
}
