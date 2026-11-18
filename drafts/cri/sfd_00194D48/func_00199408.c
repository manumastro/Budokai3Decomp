/* Draft (not built): func_00199408 at 0x00199408, size 0x70, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 7 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 530 -> 235
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00199408.s */

// func_00199408 00199408 -O2 -G0 ee-gcc 2.96: score 530 -> 235
s32 func_0018D650(s32, s32);                /* extern */
s32 func_0018D870();                                /* extern */
s32 func_00199610(void *, s32);             /* extern */

s32 func_00199408(u8 *arg0, s32 arg1)
{
  s32 var_v0;
  u8 *temp_v1;
  int new_var;
  var_v0 = func_0018D870();
  if (var_v0 != 0)
  {
    return func_0018D650(0, 0xFF00015B);
  }
  temp_v1 = *((u8 **) (((u8 *) arg0) + 0x31E8));
  new_var = temp_v1 != ((void *) 0);
  if (new_var)
  {
    *((s32 *) (((u8 *) temp_v1) + 0xDC0)) = arg1;
    func_00199610(arg0, 0xFF000000);
    var_v0 = 0;
  }
  return var_v0;
}
