/* Draft (not built): func_0019A488 at 0x0019A488, size 0x4C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1145 -> 595
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A488.s */

// func_0019A488 0019A488 -O1 -G0 ee-gcc 2.96: score 1145 -> 595
s32 func_0017EE78(s32, s32);                    /* extern */
extern s32 D_00426B28;
extern s32 D_00426B2C;

s32 func_0019A488(u8 *arg0)
{
  s32 new_var;
  s32 temp_v1;
  s32 var_v0;
  var_v0 = -1;
  temp_v1 = *((s32 *) (((u8 *) arg0) + 0x150));
  {
    var_v0 = func_0017EE78(temp_v1, 0x57E4);
    D_00426B2C = var_v0;
    new_var = *((s32 *) (((u8 *) arg0) + 0x150));
    D_00426B28 = new_var;
  }
  return var_v0;
}
