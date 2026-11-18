/* Draft (not built): func_0017C6F8 at 0x0017C6F8, size 0xC4, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 2980 -> 2480
 * Original: asm/nonmatchings/cri/mpv/func_0017C6F8.s */

// func_0017C6F8 0017C6F8 -O1 -G0 ee-gcc 2.96: score 2980 -> 2480
s32 func_0017C2E0(s32, s32, s32);       /* extern */
s32 func_0017EB90();                                /* extern */

s32 func_0017C6F8(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3)
{
  s32 temp_a0;
  s32 var_v0;
  unsigned short new_var;
  if (func_0017EB90() != 0)
  {
    return func_0017C2E0(0, 0xFF03020F, 0x3FFFF);
  }
  *arg1 = (*((s32 *) (((u8 *) arg0) + 0x2AC))) << 0xB;
  *arg2 = *((s32 *) (((u8 *) arg0) + 0x2BC));
  temp_a0 = *((s32 *) (((u8 *) arg0) + 0x2A8));
  new_var = 0x3FFFF;
  var_v0 = -1;
  if (temp_a0 != new_var)
  {
    var_v0 = ((s32) ((*((s32 *) (((u8 *) arg0) + 0x2BC))) * temp_a0)) / 1800;
  }
  else
  {
  }
  *arg3 = var_v0;
  return 0;
}
