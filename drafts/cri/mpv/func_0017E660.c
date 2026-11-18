/* Draft (not built): func_0017E660 at 0x0017E660, size 0xA4, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 3010 -> 1480
 * Original: asm/nonmatchings/cri/mpv/func_0017E660.s */

// func_0017E660 0017E660 -O1 -G0 ee-gcc 2.96: score 3010 -> 1480
s32 func_00178E38(s32 *, s32 *, s32); /* extern */
s32 func_00179018(s32, s32, s32);           /* extern */
s32 func_0017E9D0(s32, s32);                /* extern */
extern s32 D_004653E0;
extern s32 D_004814F0;

void func_0017E660(s32 arg0, s32 arg1)
{
  s32 temp_s1;
  s32 *new_var3;
  s32 temp_s2;
  s32 *new_var2;
  u8 *new_var;
  s32 temp_s4;
  temp_s2 = (arg1 + 0x3F) & (~0x3F);
  temp_s1 = temp_s2 + (arg0 << 0xA);
  new_var2 = &D_004814F0;
  temp_s4 = 0x420;
  func_00179018(temp_s2, 0, (arg0 << 8) + 0x800);
  temp_s4 = temp_s1 + temp_s4;
  func_0017E9D0(temp_s4, 0x1BE0);
  new_var3 = &D_004653E0;
  if (1)
  {
    new_var = (u8 *) (&D_004814F0);
    func_00178E38(new_var2, new_var3, 0x10);
    *((s32 *) (new_var + 0x4C)) = temp_s1;
    *((s32 *) (new_var + 0x58)) = temp_s2;
  }
  *((s32 *) (new_var + 0x50)) = temp_s4;
  *((s32 *) (0x54 + new_var)) = arg0;
}
