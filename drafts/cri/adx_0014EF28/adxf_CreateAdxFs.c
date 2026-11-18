/* Draft (not built): adxf_CreateAdxFs at 0x00154FD0, size 0x94, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 795 -> 770
 * Original: asm/nonmatchings/cri/adx_0014EF28/adxf_CreateAdxFs.s */

// adxf_CreateAdxFs 00154FD0 -O1 -G0 ee-gcc 2.96: score 795 -> 770
s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
void *func_00154F78();                              /* extern */
s32 func_0015CAE8(s32, s32);                /* extern */
extern s32 D_00460770;
extern s32 D_004607A8;

u8 *adxf_CreateAdxFs(void)
{
  s32 *var_a0;
  s32 temp_v0_2;
  u8 *temp_v0;
  temp_v0 = func_00154F78();
  var_a0 = &D_00460770;
  *((s8 *) (((u8 *) temp_v0) + 1)) = 1;
  if ((temp_v0 == ((void *) 0)) || ((temp_v0_2 = func_0015CAE8(0, 0x100), *((s32 *) (((u8 *) temp_v0) + 4)) = temp_v0_2, var_a0 = &D_004607A8, temp_v0_2 == 0)))
  {
    ADXERR_CallErrFunc1(var_a0);
    return (void *) 0;
  }
  *((s8 *) (((u8 *) temp_v0) + 0)) = 1;
  *((s32 *) (((u8 *) temp_v0) + 0x18)) = 0;
  *((s32 *) (((u8 *) temp_v0) + 0x1C)) = 0;
  *((s32 *) (((u8 *) temp_v0) + 0x20)) = 0;
  *((s8 *) (((u8 *) temp_v0) + 2)) = 0;
  *((s32 *) (((u8 *) temp_v0) + 8)) = 0;
  *((s8 *) (((u8 *) temp_v0) + 3)) = 0;
  *((s32 *) (((u8 *) temp_v0) + 0x2C)) = 0x200;
  return temp_v0;
}
