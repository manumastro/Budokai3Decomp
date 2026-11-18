/* Draft (not built): func_0016A698 at 0x0016A698, size 0xD0, segment cri/lsc (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 11 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 480 -> 345
 * Original: asm/nonmatchings/cri/lsc/func_0016A698.s */

// func_0016A698 0016A698 -O2 -G0 ee-gcc 2.96: score 480 -> 345
s32 LSC_ExecServer(void *, s32);                /* extern */
s32 func_0016A4C8(s32, s32);                /* extern */
s32 func_0016A590(void *, s32);                 /* extern */

void func_0016A698(u8 *arg0)
{
  long long new_var;
  s32 temp_a1;
  s32 var_v0;
  s32 var_v0_2;
  s8 temp_s2;
  u8 *temp_s1;
  if ((((*((s8 *) (((u8 *) arg0) + 4))) != 1) && ((temp_s2 = *((s8 *) (((u8 *) arg0) + 1)), temp_s2 == 2))) && ((*((s32 *) (((u8 *) arg0) + 0x24))) > 0))
  {
    temp_a1 = *((s32 *) (((u8 *) arg0) + 0x20));
    temp_s1 = arg0 + 0x10;
    var_v0 = temp_a1 << 5;
    new_var = 5;
    if ((*((s32 *) (((u8 *) ((temp_a1 << new_var) + temp_s1)) + 0x40))) == 1)
    {
      func_0016A4C8(temp_a1, 1);
      var_v0 = (*((s32 *) (((u8 *) arg0) + 0x20))) << new_var;
    }
    var_v0_2 = (*((s32 *) (((u8 *) arg0) + 0x20))) << new_var;
    if ((*((s32 *) (((u8 *) (var_v0 + temp_s1)) + 0x40))) == temp_s2)
    {
      func_0016A590(arg0, *((s32 *) (((u8 *) arg0) + 0x20)));
      var_v0_2 = (*((s32 *) (((u8 *) arg0) + 0x20))) << 5;
    }
    if ((*((s32 *) (((u8 *) (var_v0_2 + temp_s1)) + 0x40))) == 0)
    {
      LSC_ExecServer(arg0, *((s32 *) (((u8 *) arg0) + 0x20)));
    }
  }
}
