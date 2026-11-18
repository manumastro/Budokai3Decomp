/* Draft (not built): func_00181268 at 0x00181268, size 0x98, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 795 -> 685
 * Original: asm/nonmatchings/cri/mwsfd/func_00181268.s */

// func_00181268 00181268 -O1 -G0 ee-gcc 2.96: score 795 -> 685
s32 func_00182260();                                /* extern */

void func_00181268(u8 *arg0, u8 *arg1, u8 *arg2)
{
  s32 var_s0;
  u8 *new_var;
  s32 temp_s4;
  s32 var_s1;
  u8 *temp_v0;
  temp_v0 = *((u8 **) (((u8 *) arg1) + 0x38));
  temp_s4 = *((s32 *) (((u8 *) arg0) + 0x17C));
  var_s1 = *((s32 *) (((u8 *) temp_v0) + 4));
  new_var = arg0 + 0x164;
  var_s0 = *((s32 *) (((u8 *) temp_v0) + 0));
  if ((func_00182260() != 1) || (temp_s4 == new_var))
  {
    *((s32 *) (((u8 *) arg2) + 0x44)) = 0;
    *((s32 *) (((u8 *) arg2) + 0x40)) = 0;
    return;
  }
  if ((var_s0 != 0) && (var_s1 >= 5))
  {
    var_s0 += 4;
    var_s1 -= 4;
  }
  *((s32 *) (((u8 *) arg2) + 0x44)) = var_s1;
  *((s32 *) (((u8 *) arg2) + 0x40)) = var_s0;
}
