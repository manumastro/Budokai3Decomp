/* Draft (not built): func_00180670 at 0x00180670, size 0x54, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 820 -> 480
 * Original: asm/nonmatchings/cri/mwsfd/func_00180670.s */

// func_00180670 00180670 -O1 -G0 ee-gcc 2.96: score 820 -> 480


void func_00180670(u8 *arg0, u8 *arg1)
{
  s32 *var_a3;
  u8 *new_var;
  s32 var_t0;
  u8 *temp_v0;
  u8 *new_var3;
  s32 new_var4;
  u8 *new_var2;
  new_var = arg0;
  new_var4 = (s32) (*((s32 *) (((u8 *) arg1) + 0x18)));
  temp_v0 = arg0 + 0x200;
  var_a3 = new_var + 0x290;
  *((s32 *) (((u8 *) arg0) + 0x200)) = new_var4;
  var_t0 = 0x1F;
  new_var3 = (u8 *) arg0;
  new_var2 = arg1;
  *((s32 *) (((u8 *) temp_v0) + 4)) = (s32) (*((s32 *) (((u8 *) new_var2) + 0x1C)));
  *((s32 *) (((u8 *) temp_v0) + 0xC)) = 0;
  *((s32 *) (((u8 *) temp_v0) + 8)) = new_var4;
  *((s32 *) (new_var3 + 0x210)) = 0;
  do
  {
    var_t0 -= 1;
    *var_a3 = 0;
    var_a3 = var_a3 - 4;
  }
  while (var_t0 >= 0);
}
