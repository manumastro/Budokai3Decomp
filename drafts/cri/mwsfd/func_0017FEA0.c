/* Draft (not built): func_0017FEA0 at 0x0017FEA0, size 0x30, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 3 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 30 -> 10
 * Original: asm/nonmatchings/cri/mwsfd/func_0017FEA0.s */

// func_0017FEA0 0017FEA0 -O2 -G0 ee-gcc 2.96: score 30 -> 10


void func_0017FEA0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 new_var;
  u8 *temp_v0;
  int new_var2;
  temp_v0 = arg0 + 0x164;
  new_var = arg3;
  *((s32 *) (((u8 *) arg0) + 0x184)) = new_var;
  *((s32 *) (((u8 *) arg0) + 0x18C)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x180)) = arg1;
  new_var2 = 8;
  *((s32 *) (((u8 *) arg0) + 0x188)) = 0;
  *((u8 **) (((u8 *) arg0) + 0x17C)) = temp_v0;
  *((s32 *) (((u8 *) temp_v0) + 4)) = (s32) (arg2 - arg3);
  *((s32 *) (((u8 *) temp_v0) + new_var2)) = arg3;
  *((s32 *) (((u8 *) arg0) + 0x164)) = (s32) (arg1 + arg3);
}
