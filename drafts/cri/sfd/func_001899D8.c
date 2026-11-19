/* Draft (not built): func_001899D8 at 0x001899D8, size 0x48, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 715 -> 600
 * Original: asm/nonmatchings/cri/sfd/func_001899D8.s */

// func_001899D8 001899D8 -O1 -G0 ee-gcc 2.96: score 715 -> 600
s32 func_00189A20(s32, void *, s32);            /* extern */

void func_001899D8(u8 *arg0, s32 arg1)
{
  u8 *new_var2;
  u8 *new_var3;
  s32 new_var;
  u8 *temp_v1;
  temp_v1 = *((u8 **) (((u8 *) arg0) + 0x1CB4));
  new_var = *((s32 *) (((u8 *) temp_v1) + 0));
  if ((arg1 != 0) || ((*((s32 *) (((u8 *) temp_v1) + 0x2C))) != 1))
  {
    new_var2 = new_var3;
    new_var3 = arg0;
    func_00189A20(new_var, new_var2 + 0xFA0, arg1);
  }
}
