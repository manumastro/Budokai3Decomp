/* Draft (not built): func_00172110 at 0x00172110, size 0x2CC, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 8480 -> 7480
 * Original: asm/nonmatchings/cri/mpv/func_00172110.s */

// func_00172110 00172110 -O2 -G0 ee-gcc 2.96: score 8480 -> 7480
s32 dpmul(s32, s64);                                /* extern */
s32 func_00121930(s32, s64);                        /* extern */
s64 func_00121C78(s32, s32);                        /* extern */
s32 func_00121F28(s32);                             /* extern */
s16 func_00121FE0(s32);                             /* extern */
s32 func_00170B20();                                /* extern */
extern s64 D_00465068;
extern s64 D_00465070;
extern s64 D_00465078;
extern s64 D_00465080;
extern s64 D_00465088;

void func_00172110(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 sp0;
  s32 sp4;
  s32 sp8;
  s16 *var_s0;
  s16 *var_s0_2;
  s16 temp_v0_4;
  s16 temp_v0_5;
  s32 temp_a0;
  s32 temp_s0;
  s32 temp_s0_3;
  s32 temp_s1_2;
  s32 temp_s7;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 var_s1;
  s32 var_s3;
  s32 var_s3_2;
  s32 var_s3_3;
  s64 temp_s2_2;
  s64 temp_s4;
  u8 *temp_s0_2;
  u8 *temp_s1;
  u8 *temp_s2;
  var_s3 = 0;
  sp0 = arg0;
  temp_s7 = func_00170B20();
  temp_v0_4 = 0xFF80 << 0x2E;
  temp_s4 = temp_v0_4;
  sp4 = arg3 + 0x800;
  sp8 = arg3 + 0x1000;
  do
  {
    temp_s0 = var_s3 * 8;
    temp_s2 = temp_s0 + sp8;
    temp_s1 = temp_s0 + sp4;
    temp_s0_2 = temp_s0 + arg3;
    temp_a0 = var_s3 - 0x80;
    temp_v0 = func_00121FE0(func_00121930(dpmul(func_00121F28(var_s3 - 0x10), D_00465068), temp_s4)) << 0x10;
    var_s3 += 1;
    temp_v0_2 = temp_v0 >> 0x10;
    *((s16 *) (((u8 *) temp_s0_2) + 0)) = (s16) temp_v0_2;
    *((s16 *) (((u8 *) temp_s0_2) + 4)) = (s16) temp_v0_2;
    *((s16 *) (((u8 *) temp_s0_2) + 2)) = (s16) temp_v0_2;
    temp_v0_3 = func_00121F28(temp_a0);
    *((s16 *) (((u8 *) temp_s1) + 4)) = func_00121FE0(func_00121930(dpmul(temp_v0_3, D_00465070), temp_s4));
    temp_v0_4 = func_00121FE0(func_00121930(dpmul(temp_v0_3, D_00465078), temp_s4));
    *((s16 *) (((u8 *) temp_s1) + 0)) = 0;
    *((s16 *) (((u8 *) temp_s1) + 2)) = temp_v0_4;
    *((s16 *) (((u8 *) temp_s1) + 6)) = 0;
    *((s16 *) (((u8 *) temp_s2) + 4)) = 0;
    *((s16 *) (((u8 *) temp_s2) + 2)) = func_00121FE0(func_00121930(dpmul(temp_v0_3, D_00465080), temp_s4));
    temp_v0_5 = func_00121FE0(func_00121930(dpmul(temp_v0_3, D_00465088), temp_s4));
    *((s16 *) (((u8 *) temp_s2) + 6)) = 0;
    *((s16 *) (((u8 *) temp_s2) + 0)) = temp_v0_5;
  }
  while (var_s3 < 0x100);
  temp_s1_2 = arg2 - arg1;
  temp_s0_3 = func_00121F28(temp_s7);
  temp_s2_2 = func_00121C78(temp_s0_3, func_00121F28(temp_s1_2));
  if (sp0 != 1)
  {
    var_s0 = arg3 + 6;
    var_s3_2 = 0;
    do
    {
      if (var_s3_2 < arg1)
      {
        *var_s0 = 0;
      }
      else
        if (arg2 < var_s3_2)
      {
        *var_s0 = temp_s7 << 6;
      }
      else
      {
        *var_s0 = func_00121FE0(dpmul(func_00121F28(var_s3_2 - arg1), temp_s2_2)) << 6;
      }
      var_s3_2 += 1;
      var_s0 += 8;
    }
    while (var_s3_2 < 0x100);
    return;
  }
  var_s0_2 = arg3 + 6;
  var_s1 = arg1 + temp_s1_2;
  var_s3_3 = 0;
  do
  {
    if (var_s3_3 < arg1)
    {
      *var_s0_2 = temp_s7 << 6;
    }
    else
      if (arg2 < var_s3_3)
    {
      *var_s0_2 = 0;
    }
    else
    {
      *var_s0_2 = func_00121FE0(dpmul(func_00121F28(var_s1), temp_s2_2)) << 6;
    }
    var_s3_3 += 1;
    var_s0_2 += 8;
    var_s1 -= 1;
  }
  while (var_s3_3 < 0x100);
}
