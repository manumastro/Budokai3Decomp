/* Draft (not built): func_001837D8 at 0x001837D8, size 0x74, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 760 -> 100
 * Original: asm/nonmatchings/cri/mwsfd/func_001837D8.s */

// func_001837D8 001837D8 -O2 -G0 ee-gcc 2.96: score 760 -> 100
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *, s32, s32);         /* extern */
s32 func_001996F0(s32, s32, s32);               /* extern */
extern s32 D_00466220;

void func_001837D8(u8 *arg0, s32 arg1, s32 arg2)
{
  s32 temp_a2;
  short new_var;
  new_var = func_00183B38() == 0;
 do { } while (0);
  temp_a2 = arg1 != 1;
  if (new_var)
  {
    func_001870E8(&D_00466220, arg2, temp_a2);
    return;
  }
  func_001996F0(*((s32 *) (((u8 *) arg0) + 0x40)), arg2, temp_a2);
}
