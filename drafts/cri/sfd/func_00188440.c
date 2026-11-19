/* Draft (not built): func_00188440 at 0x00188440, size 0x90, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 495 -> 210
 * Original: asm/nonmatchings/cri/sfd/func_00188440.s */

// func_00188440 00188440 -O2 -G0 ee-gcc 2.96: score 495 -> 210
s32 ADXT_GetNumSmpl(s32, s32);                      /* extern */
s32 ADXT_GetSfreq(s32);                             /* extern */
s32 func_0018B970(void *, s32, s32);            /* extern */

void func_00188440(u8 *arg0)
{
  s32 temp_a1;
  s32 temp_s1;
  s32 temp_s2;
  s32 temp_v0_2;
  u8 *temp_v0;
  temp_v0 = arg0 + 0xCC0;
  ;
  temp_s1 = *(*((s32 **) (((u8 *) arg0) + 0x1CB4)));
  if ((*((s32 *) (((u8 *) temp_v0) + 0x1E8))) == (*((s32 *) (((u8 *) temp_v0) + 0x1EC))))
  {
    temp_s2 = ADXT_GetNumSmpl(temp_s1, temp_a1);
    temp_v0_2 = ADXT_GetSfreq(temp_s1);
    if ((temp_s2 > 0) && (temp_v0_2 > 0))
    {
      func_0018B970(arg0, temp_s2, temp_v0_2);
    }
  }
}
