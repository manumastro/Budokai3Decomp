/* Draft (not built): func_00180CF8 at 0x00180CF8, size 0x4C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 2 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 205 -> 80
 * Original: asm/nonmatchings/cri/mwsfd/func_00180CF8.s */

// func_00180CF8 00180CF8 -O2 -G0 ee-gcc 2.96: score 205 -> 80
s32 func_00180D48();                            /* extern */
s32 func_00180D50(s32);                         /* extern */
s32 func_00180DF8(void *);                      /* extern */

void func_00180CF8(u8 *arg0, s32 arg1)
{
  u8 *new_var;
  if ((*((s32 *) (((u8 *) arg0) + 0x200))) != 0)
  {
    func_00180D48();
  }
  else
  {
    new_var = arg0;
    func_00180D50(arg1);
  }
  func_00180DF8(new_var);
}
