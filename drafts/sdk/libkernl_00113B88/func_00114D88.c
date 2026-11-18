/* Draft (not built): func_00114D88 at 0x00114D88, size 0xB8, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 555 -> 320
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00114D88.s */

// func_00114D88 00114D88 -O2 -G0 ee-gcc 2.9-991111-01: score 555 -> 320
s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 RemoveIntcHandler(s32, s32);                /* extern */
s32 func_0010AD40(s32);                     /* extern */
s32 func_00114C00(s32);                     /* extern */
s32 func_00114C10(s32);                     /* extern */
extern s32 D_003EDCC8;

s32 func_00114D88(void)
{
  u8 *new_var2;
  s32 *new_var;
  s32 temp_s1;
  new_var2 = (u8 *) (&D_003EDCC8);
  if ((*((s32 *) (new_var2 + 8))) < 0)
  {
    return 0x80008001;
  }
  if ((*((s32 *) (((u8 *) (&D_003EDCC8)) + 0x10))) != 0)
  {
    return 0x80000010;
  }
  new_var = &D_003EDCC8;
  temp_s1 = DI();
  if (RemoveIntcHandler(0xB, *((s32 *) (((u8 *) new_var) + 8))) == 0)
  {
    func_0010AD40(0xB);
    func_00114C10(0xC00);
 do { } while (0);
    func_00114C00(0);
  }
  *((s64 *) (((u8 *) (&D_003EDCC8)) + 0)) = 0;
  *((s32 *) (((u8 *) (&D_003EDCC8)) + 8)) = -1;
  if (temp_s1 != 0)
  {
    EI();
  }
  return 0;
}
