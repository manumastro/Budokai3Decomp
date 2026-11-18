/* Draft (not built): func_0019AE10 at 0x0019AE10, size 0xA0, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 2505 -> 1895
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019AE10.s */

// func_0019AE10 0019AE10 -O1 -G0 ee-gcc 2.96: score 2505 -> 1895
s32 func_0018D650(s32, s32, s32 *, s32 *); /* extern */
extern s32 D_00467730;
extern s32 D_00467758;

void func_0019AE10(u8 *arg0, s32 *arg1, s32 *arg2)
{
  s32 (*temp_v1)(s32, u8 *, s32 *, s32 *);
  s32 temp_v0;
  s32 new_var;
  temp_v0 = *((s32 *) (((u8 *) arg0) + 0));
  temp_v1 = *((&D_00467758) + (((temp_v0 * 2) + (*((s32 *) (((u8 *) arg0) + 4)))) * 4));
  new_var = *((&D_00467730) + (temp_v0 * 4));
  if (temp_v1 == ((void *) 0))
  {
    func_0018D650(0, 0xFF000221, arg1, arg2);
    *arg1 = 0;
    *arg2 = 1;
    return;
  }
  temp_v1(new_var, arg0, arg1, arg2);
}
