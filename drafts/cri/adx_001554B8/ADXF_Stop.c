/* Draft (not built): ADXF_Stop at 0x00155830, size 0xEC, segment cri/adx_001554B8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 705 -> 695
 * Original: asm/nonmatchings/cri/adx_001554B8/ADXF_Stop.s */

// ADXF_Stop 00155830 -O2 -G0 ee-gcc 2.96: score 705 -> 695
s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 func_00154548(s32, s32, void *, s32); /* extern */
s32 func_00155330(void *);                      /* extern */
s32 func_0015CCF8(s32);                             /* extern */
s32 func_0015CE38(s32);                         /* extern */
extern s32 D_00460980;
extern s32 D_004609A8;

s32 ADXF_Stop(u8 *arg0)
{
  s32 temp_a0;
  s8 temp_v1;
  int new_var;
  new_var = 1;
  func_00154548(5, 0, arg0, -1);
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1(&D_00460980);
    return -3;
  }
  temp_v1 = *((s8 *) (((u8 *) arg0) + 1));
  if (temp_v1 != new_var)
  {
    if (temp_v1 != 3)
    {
      temp_a0 = *((s32 *) (((u8 *) arg0) + 4));
      if (temp_a0 == 0)
      {
        ADXERR_CallErrFunc1(&D_004609A8);
        return -1;
      }
      func_0015CE38(temp_a0);
      func_00152508();
      *((s32 *) (((u8 *) arg0) + 0x20)) = (s32) (func_0015CCF8(*((s32 *) (((u8 *) arg0) + 4))) - (*((s32 *) (((u8 *) arg0) + 0x14))));
      func_00155330(arg0);
      *((s8 *) (((u8 *) arg0) + new_var)) = new_var;
      func_00152520();
      func_00154548(5, 1, arg0, -1);
      goto block_11;
    }
    *((s8 *) (((u8 *) arg0) + new_var)) = new_var;
    goto block_11;
  }
  block_11:
  return *((s32 *) (((u8 *) arg0) + 0x14));

}
