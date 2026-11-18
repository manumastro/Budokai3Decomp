/* Draft (not built): func_00192968 at 0x00192968, size 0x50, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 475 -> 120
 * Original: asm/nonmatchings/cri/sfd/func_00192968.s */

// func_00192968 00192968 -O2 -G0 ee-gcc 2.96: score 475 -> 120
s32 func_00172A40(s32, s32, s32, s32);              /* extern */

s32 func_00192968(u8 *arg0)
{
  s32 new_var;
  s32 temp_a2;
  s32 var_v0;
  u8 *temp_a1;
  u8 *temp_t0;
  temp_a1 = arg0 + 0x31EC;
  var_v0 = 0;
  new_var = *((s32 *) (((u8 *) arg0) + 0xDD8));
  temp_a2 = *((s32 *) (((u8 *) temp_a1) + 4));
  temp_t0 = arg0 + 0xD80;
  if (((unsigned char) (temp_a2 >= 0)) && (new_var == 0))
  {
    var_v0 = func_00172A40(temp_a2, *((s32 *) (((u8 *) temp_a1) + 8)), *((s32 *) (((u8 *) temp_t0) + 0x24)), *((s32 *) (((u8 *) temp_t0) + 0x28))) == 0;
  }
  return var_v0;
}
