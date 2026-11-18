/* Draft (not built): func_00199218 at 0x00199218, size 0xF8, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 2420 -> 2120
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00199218.s */

// func_00199218 00199218 -O2 -G0 ee-gcc 2.96: score 2420 -> 2120
s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */
s32 func_00197E40(void *, s32);                 /* extern */
s32 func_00199818(void *, s32, s32);    /* extern */
s32 func_0019C040(void *, s32);             /* extern */

void func_00199218(u8 *arg0, u8 *arg1)
{
  u8 *temp_s1;
  unsigned short new_var;
  if (func_0018D870() != 0)
  {
    func_0018D650(0, 0xFF000158);
    return;
  }
  temp_s1 = *((u8 **) (((u8 *) arg0) + 0x31E8));
  new_var = temp_s1 != ((void *) 0);
  if (new_var && (func_00197E40(arg0, 0xFF000000) == 0))
  {
    func_00199818(arg0, 0x2F, 0);
    if ((*((s32 *) (((u8 *) temp_s1) + 0xDA8))) == 0)
    {
      new_var = 5;
      func_00199818(arg0, new_var, 0);
    }
    if ((*((s32 *) (((u8 *) temp_s1) + 0xDAC))) == 0)
    {
      func_00199818(arg0, 6, 0);
    }
    M2C_ERROR();
    M2C_ERROR();
    M2C_ERROR();
    M2C_ERROR();
    *((s32 *) (((u8 *) arg0) + 0x31F4)) = (s32) (*((s32 *) (((u8 *) arg1) + 8)));
    func_0019C040(arg0, 0xD);
  }
}
