/* Draft (not built): func_001982C8 at 0x001982C8, size 0xB8, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 210 -> 140
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001982C8.s */

// func_001982C8 001982C8 -O2 -G0 ee-gcc 2.96: score 210 -> 140
s32 func_0018D650(s32, s32, s32, s32 *); /* extern */
s32 func_0018D870();                                /* extern */
s32 func_0019C0D8(void *, s32, s32, s32 *); /* extern */
extern s32 (*D_00426B20)(void *, s32);

s32 func_001982C8(u8 *arg0, s32 *arg1)
{
  unsigned long new_var2;
  s32 temp_v0;
  s32 temp_s2;
  s32 *new_var;
  *arg1 = 0;
  if ((new_var2 = func_0018D870()) != 0)
  {
    return func_0018D650(0, 0xFF000136, new_var2 = 0xB, arg1);
  }
  new_var = arg1;
  temp_s2 = func_0019C0D8(arg0, 6, new_var2, new_var);
  temp_v0 = *arg1;
  if (temp_v0 != 0)
  {
    *((s32 *) (((u8 *) arg0) + 0x964)) = 1;
  }
  if (D_00426B20 != ((void *) 0))
  {
    D_00426B20(arg0, temp_v0);
  }
  return temp_s2;
}

/* Similar function already in C: func_00199D58 (src/cri/sfd_00194D48.c), similarity 0.60.
 * It is the template below (not built). */
#if 0
s32 func_00199D58(u8 *arg0, u8 **arg1, s32 *arg2) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF00011C);
    }
    if (*(s32 *)((u8 *)arg0 + 0x78) != 0) {
        *arg1 = arg0 + 0x10C;
        *arg2 = *(s32 *)((u8 *)arg0 + 0x108);
    } else {
        *arg1 = NULL;
        *arg2 = 0;
    }
    return 0;
}
#endif
