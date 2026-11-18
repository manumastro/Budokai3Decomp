/* Draft (not built): func_00180730 at 0x00180730, size 0xC4, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 2030 -> 1815
 * Original: asm/nonmatchings/cri/mwsfd/func_00180730.s */

// func_00180730 00180730 -O1 -G0 ee-gcc 2.96: score 2030 -> 1815
s32 MWSFD_Malloc(void *, s32);                      /* extern */
s32 func_00180D88(void *);                      /* extern */
s32 func_00184798(s32, s32);                        /* extern */
s32 func_001851F0(void *);                          /* extern */
s32 func_001870E8(s32 *);                   /* extern */
extern s32 D_00465920;
extern s32 D_00465948;

s32 func_00180730(u8 *arg0)
{
  s32 *var_a0;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  u8 *temp_s1;
  temp_s1 = arg0 + 0xC;
  temp_v0 = func_00184798(*((s32 *) (((u8 *) temp_s1) + 8)), *((s32 *) (((u8 *) temp_s1) + 0xC)));
  temp_v0_2 = MWSFD_Malloc(arg0, temp_v0);
  var_a0 = &D_00465920;
  if (temp_v0_2 != 0)
  {
    *((s32 *) (((u8 *) arg0) + 0xB0)) = temp_v0_2;
    *((s32 *) (((u8 *) arg0) + 0xB4)) = temp_v0;
    if (func_001851F0(temp_s1) == 1)
    {
      temp_v0_3 = MWSFD_Malloc(arg0, 0x20000);
      var_a0 = &D_00465948;
      {
        goto block_3;
      }
      *((s32 *) (((u8 *) arg0) + 0x194)) = temp_v0_3;
      *((s32 *) (((u8 *) arg0) + 0x198)) = 0x20000;
      goto block_6;
    }
    *((s32 *) (((u8 *) arg0) + 0x198)) = 0;
    *((s32 *) (((u8 *) arg0) + 0x194)) = 0;
    block_6:
    return 0;

  }
  block_3:
  func_001870E8(var_a0);

  func_00180D88(arg0);
  return -1;
}
