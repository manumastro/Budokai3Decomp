/* Draft (not built): func_0015E8E0 at 0x0015E8E0, size 0x124, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1070 -> 445
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015E8E0.s */

// func_0015E8E0 0015E8E0 -O2 -G0 ee-gcc 2.96: score 1070 -> 445
s32 ADXSJD_GetSfreq(s32);                           /* extern */
s32 ADXT_GetNumSmplObuf(void *, s32);           /* extern */
s32 func_001588C8(s32);                             /* extern */
s32 func_00159C78(s32);                             /* extern */
s32 func_00159DE0(s32);                             /* extern */
s32 func_00159E28(s32);                             /* extern */

void func_0015E8E0(u8 *arg0, s32 *arg1, s32 *arg2)
{
  s32 temp_s0;
  s32 temp_s1;
  s32 temp_v0_2;
  u8 temp_v0;
  temp_v0 = *((u8 *) (((u8 *) arg0) + 1));
  if (((u32) (temp_v0 - 3)) < 2U)
  {
    *arg2 = ADXSJD_GetSfreq(*((s32 *) (((u8 *) arg0) + 4)));
    temp_s1 = func_00159C78(*((s32 *) (((u8 *) arg0) + 4)));
    temp_s0 = func_001588C8(*((s32 *) (((u8 *) arg0) + 0xC)));
    *arg1 = (temp_s1 - ((temp_s0 - (*((s32 *) (((u8 *) arg0) + 0xA8)))) + ADXT_GetNumSmplObuf(arg0, 0))) + (*((s32 *) (((u8 *) arg0) + 0xA4)));
  }
  else
    if (!(((s8) temp_v0) != 5))
  {
    *arg1 = func_00159E28(*((s32 *) (((u8 *) arg0) + 4)));
    *arg2 = ADXSJD_GetSfreq(*((s32 *) (((u8 *) arg0) + 4)));
    temp_v0_2 = (*arg1) * (0x10 / func_00159DE0(*((s32 *) (((u8 *) arg0) + 4))));
    *arg1 = temp_v0_2;
    *arg1 = temp_v0_2 + (*((s32 *) (((u8 *) arg0) + 0xA4)));
  }
  else
  {
    *arg1 = 0;
    *arg2 = 1;
  }
  *arg1 += *((s32 *) (((u8 *) arg0) + 0x88));
}
