/* Draft (not built): func_00161028 at 0x00161028, size 0xB8, segment cri/adx_00160EB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1650 -> 1170
 * Original: asm/nonmatchings/cri/adx_00160EB0/func_00161028.s */

// func_00161028 00161028 -O1 -G0 ee-gcc 2.96: score 1650 -> 1170
s32 func_00158D98(s32);                             /* extern */
s32 func_00159DC8(s32);                             /* extern */
extern s32 D_004111B4;
extern s32 D_004111B8;

void func_00161028(u8 *arg0)
{
  s32 temp_v0;
  s32 temp_v0_2;
  s32 var_s2;
  u8 ***var_s0;
  u8 **temp_a0;
  s32 new_var;
  if (func_00158D98(*((s32 *) (((u8 *) arg0) + 4))) != 3)
  {
    return;
  }
  var_s2 = 0;
  new_var = func_00159DC8(*((s32 *) (((u8 *) arg0) + 4)));
  var_s0 = arg0 + 0x18;
  temp_v0 = new_var;
  D_004111B4 = temp_v0;
  loop_5:
  if (var_s2 < temp_v0)
  {
    temp_a0 = *var_s0;
    var_s0 += 4;
    temp_v0_2 = (*((s32 (**)(u8 **, s32)) (((u8 *) (*temp_a0)) + 0x24)))(temp_a0, 1);
    D_004111B8 = temp_v0_2;
    if (temp_v0_2 < 0x40)
    {
      var_s2 += 1;
      goto loop_5;
    }
  }

  if (var_s2 == temp_v0)
  {
    *((s8 *) (((u8 *) arg0) + 1)) = 4;
  }
}
