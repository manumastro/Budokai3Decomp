/* Draft (not built): sceTtyRead at 0x0010BB30, size 0xD0, segment sdk/libkernl_0010B9B8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 1090 -> 505
 * Original: asm/nonmatchings/sdk/libkernl_0010B9B8/sceTtyRead.s */

// sceTtyRead 0010BB30 -O2 -G0 ee-gcc 2.9-991111-01: score 1090 -> 505
s32 QueuePeekReadDone(void *, s32 *);       /* extern */
extern s32 D_00471590;
extern void *D_004715A8;

s32 sceTtyRead(s32 arg0, s32 arg1)
{
  s32 temp_s1;
  s32 var_v1;
  s8 temp_v1;
  u8 *temp_s0;
  var_v1 = 0;
  var_v1 = 0x18;
  if (arg1 > 0)
  {
    loop_2:
    temp_s1 = var_v1 + 1;

    temp_s0 = arg0 + var_v1;
    do
    {
    }
    while ((*((s32 *) (((u8 *) D_004715A8) + 4))) == 0);
    *temp_s0 = *(*((u8 **) (((u8 *) (*((u8 **) (((u8 *) (&D_00471590)) + var_v1)))) + 8)));
    QueuePeekReadDone(*((u8 **) (((u8 *) (&D_00471590)) + var_v1)), &D_00471590);
    temp_v1 = (s8) (*temp_s0);
    if ((temp_v1 == 0xA) || ((var_v1 = temp_s1, temp_v1 == 0xD)))
    {
      if (1)
      {
      }
      return temp_s1;
    }
    if (var_v1 >= arg1)
    {
      goto block_8;
    }
    goto loop_2;
  }
  block_8:
  return var_v1;

}
