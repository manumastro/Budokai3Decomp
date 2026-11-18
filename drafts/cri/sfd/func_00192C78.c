/* Draft (not built): func_00192C78 at 0x00192C78, size 0xF0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1790 -> 1490
 * Original: asm/nonmatchings/cri/sfd/func_00192C78.s */

// func_00192C78 00192C78 -O1 -G0 ee-gcc 2.96: score 1790 -> 1490
s32 func_0016E858(s32, s32, s32);           /* extern */
s32 func_0017C4D8(s32, s32);                        /* extern */
s32 func_001911E0(void *, s32);                 /* extern */
s32 func_00191260(void *, s32, s32, s32);       /* extern */
s32 func_00192D68();                            /* extern */
s32 func_00197BE8(void *, s32, s32);        /* extern */

s32 func_00192C78(u8 *arg0, s32 arg1)
{
  s32 *temp_s5;
  s32 temp_s0;
  s32 temp_s1;
  s32 temp_s1_2;
  s32 temp_s3;
  s32 temp_s4;
  u8 *new_var;
  s32 var_v0;
  u8 *temp_s6;
  temp_s5 = *((s32 **) (((u8 *) arg0) + 0x1C70));
  temp_s1 = *((s32 *) (((u8 *) temp_s5) + 0));
  func_00192D68();
  temp_s6 = temp_s5 + 0x8C;
  temp_s4 = func_0016E858(arg1, 0, 1);
  temp_s3 = func_0017C4D8(temp_s1, arg1);
  temp_s1_2 = func_0016E858(arg1, 0, 1) - temp_s4;
  temp_s0 = func_00191260(arg0, temp_s3, temp_s1_2, 0xFF000F07);
  new_var = arg0;
  func_001911E0(new_var, temp_s1_2);
  var_v0 = temp_s0;
  if (temp_s0 == 0)
  {
    if ((*((s8 *) (((u8 *) temp_s6) + 0x58))) == 0)
    {
      *((s32 *) (((u8 *) temp_s5) + 0x164)) = 1;
    }
    func_00197BE8(new_var, 1, *((s32 *) (((u8 *) temp_s6) + 0x18)));
    var_v0 = 0;
  }
  return var_v0;
}
