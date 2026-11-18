/* Draft (not built): func_001989A8 at 0x001989A8, size 0xB4, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 75 -> 40
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001989A8.s */

// func_001989A8 001989A8 -O2 -G0 ee-gcc 2.96: score 75 -> 40
s32 func_0018C950(s32);                         /* extern */
s32 func_0019A010(void *, s32);             /* extern */

void func_001989A8(u8 *arg0)
{
  u8 *temp_s1;
  unsigned long new_var2;
  u8 *temp_s2;
  u8 *temp_s3;
  s32 *new_var;
  temp_s1 = arg0 + 0x8A0;
  temp_s2 = arg0 + 0xD00;
  temp_s3 = arg0 + 0xAC4;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
  func_0018C950(arg0 + 0xC);
  *((s32 *) (((u8 *) arg0) + 0x8A0)) = 0;
  *((s32 *) (((u8 *) temp_s1) + 0x20)) = 0;
  new_var2 = 0;
  *((s32 *) (((u8 *) temp_s1) + 4)) = new_var2;
  *((s32 *) (((u8 *) temp_s1) + 8)) = new_var2;
  *((s32 *) (((u8 *) temp_s1) + 0xC)) = 0;
  *((s32 *) (((u8 *) temp_s1) + 0x10)) = new_var2;
  new_var = (s32 *) (((u8 *) temp_s1) + 0x18);
  *((s32 *) (((u8 *) temp_s1) + 0x14)) = 0;
  *new_var = new_var2;
  *((s32 *) (((u8 *) temp_s1) + 0x1C)) = 0;
  *((s32 *) (((u8 *) temp_s3) + 8)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xAC4)) = new_var2;
  *((s32 *) (((u8 *) temp_s3) + 4)) = new_var2;
  func_0019A010(arg0 + 0xAD0, 0x7FFFFFFF);
  *((s32 *) (((u8 *) arg0) + 0xD00)) = new_var2;
  *((s32 *) (((u8 *) temp_s2) + 0x10)) = (*((s32 *) (((u8 *) temp_s2) + 4)) = new_var2);
  *((s32 *) (((u8 *) temp_s2) + 8)) = 1;
  *((s32 *) (((u8 *) temp_s2) + 0xC)) = 0;
  *((s32 *) (((u8 *) temp_s2) + 0x14)) = 0;
}
