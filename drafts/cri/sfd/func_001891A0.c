/* Draft (not built): func_001891A0 at 0x001891A0, size 0x64, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 200 -> 15
 * Original: asm/nonmatchings/cri/sfd/func_001891A0.s */

// func_001891A0 001891A0 -O2 -G0 ee-gcc 2.96: score 200 -> 15
s32 ADXT_SetSvrFreq(s32, s32);                  /* extern */
s32 func_001999E0(s32);                         /* extern */

void func_001891A0(u8 *arg0)
{
  s32 *temp_s1;
  u8 *new_var;
  s32 temp_s0;
  s32 **new_var2;
  s32 temp_v0;
  new_var = arg0;
  temp_s1 = *new_var2;
  temp_s0 = *((s32 *) (((u8 *) temp_s1) + 0));
  temp_v0 = func_001999E0(0x1B);
  if ((*((s32 *) (((u8 *) temp_s1) + 0x44))) != temp_v0)
  {
    *((s32 *) (((u8 *) temp_s1) + 0x44)) = temp_v0;
    new_var2 = (s32 **) (((u8 *) new_var) + 0x1CB4);
    ADXT_SetSvrFreq(temp_s0, temp_v0);
  }
}
