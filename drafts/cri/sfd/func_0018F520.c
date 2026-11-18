/* Draft (not built): func_0018F520 at 0x0018F520, size 0xA4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1105 -> 990
 * Original: asm/nonmatchings/cri/sfd/func_0018F520.s */

// func_0018F520 0018F520 -O2 -G0 ee-gcc 2.96: score 1105 -> 990
s32 func_0018CCB8(void *);                      /* extern */
s32 func_0018F5C8(void *);                      /* extern */
s32 *func_0018F5D0(void *, void *, s32 *);          /* extern */
s32 *func_0018F670();                               /* extern */

s32 *func_0018F520(u8 *arg0)
{
  s32 *temp_s0;
  s32 *var_v0;
  s32 *new_var;
  u8 *temp_s2;
  var_v0 = (temp_s0 = func_0018F670());
  temp_s0 = var_v0;
  if (temp_s0 != ((void *) 0))
  {
    var_v0 = (void *) 0;
    if ((*((s32 *) (((u8 *) temp_s0) + 0))) != 0)
    {
      func_0018CCB8(arg0);
      temp_s2 = *((u8 **) (((u8 *) arg0) + 0x1C2C));
      new_var = (s32 *) (((u8 *) temp_s2) + 0x20);
      func_0018F5C8(arg0);
      var_v0 = func_0018F5D0(arg0, temp_s2, temp_s0);
      if (var_v0 == ((void *) 0))
      {
        *new_var = (s32) (*((s32 *) (((u8 *) temp_s0) + 0x1C)));
        *((s32 *) (((u8 *) temp_s2) + 0x24)) = (s32) (*((s32 *) (((u8 *) temp_s0) + 0x20)));
        *((s32 *) (((u8 *) (arg0 + 0xCC0)) + 0x14C)) = (s32) (*((s32 *) (((u8 *) temp_s0) + 0x14)));
        *((s32 *) (((u8 *) temp_s2) + 0xC)) = (s32) (*((s32 *) (((u8 *) temp_s0) + 0x18)));
      }
    }
  }
  return var_v0;
}
