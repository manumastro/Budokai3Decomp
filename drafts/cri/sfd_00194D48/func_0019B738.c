/* Draft (not built): func_0019B738 at 0x0019B738, size 0x74, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 490 -> 200
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019B738.s */

// func_0019B738 0019B738 -O2 -G0 ee-gcc 2.96: score 490 -> 200
s32 func_00172A40(s32, s32, s32, s32);              /* extern */
extern s32 D_00426A90;

void func_0019B738(s32 arg0, s32 arg1, s32 arg2, s32 *arg3)
{
  s32 *new_var;
  u8 *temp_t0;
  new_var = &D_00426A90;
  temp_t0 = arg0 + 0xCC0;
  if ((*((s32 *) (((u8 *) temp_t0) + 0x2C0))) < 0)
  {
    *((s32 *) (((u8 *) temp_t0) + 0x2C0)) = 0;
    *arg3 = 1;
    return;
  }
  if (func_00172A40(arg1, arg2, *(((u8 *) temp_t0) + 0x2C0), *((s32 *) (((u8 *) new_var) + 8))) != 0)
  {
    *arg3 = 1;
    return;
  }
  *arg3 = 0;
}
