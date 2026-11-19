/* Draft (not built): func_0019B398 at 0x0019B398, size 0x8C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 190 -> 80
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019B398.s */

// func_0019B398 0019B398 -O2 -G0 ee-gcc 2.96: score 190 -> 80
s32 func_0017EE78(s32, s32, s32);               /* extern */
s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */
extern s32 D_00467730;

s32 func_0019B398(u8 *arg0, s32 *arg1)
{
  u8 *new_var;
  s32 temp_v1;
  s32 var_v0;
  *arg1 = -1;
  var_v0 = func_0018D870();
  if (var_v0 != 0)
  {
    return func_0018D650(0, 0xFF000118);
  }
  new_var = (u8 *) (arg0 + 0xCC0);
  temp_v1 = *((s32 *) (((u8 *) arg0) + 0x920));
  if (temp_v1 != 0)
  {
    *arg1 = func_0017EE78(*((&D_00467730) + (temp_v1 * 4)), *((s32 *) (new_var + 0x2A0)), 0x3E8);
    var_v0 = 0;
  }
  return var_v0;
}

/* Similar function already in C: func_00196558 (src/cri/sfd_00194D48.c), similarity 0.67.
 * It is the template below (not built). */
#if 0
s32 func_00196558(s32 arg0, s32 arg1) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000144);
    }
    func_0019B938(arg0, arg1);
    func_00189DE8(arg0, arg1);
    return 0;
}
#endif
