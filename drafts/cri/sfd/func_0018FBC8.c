/* Draft (not built): func_0018FBC8 at 0x0018FBC8, size 0x50, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 200 -> 100
 * Original: asm/nonmatchings/cri/sfd/func_0018FBC8.s */

// func_0018FBC8 0018FBC8 -O2 -G0 ee-gcc 2.96: score 200 -> 100
s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */
s32 func_00194AB0(s32, s32);                    /* extern */

s32 func_0018FBC8(s32 arg0)
{
  unsigned char new_var2;
  s32 new_var;
  if (func_0018D870() != 0)
  {
    func_0018D650(0, 0xFF000183);
    return 0;
  }
  new_var = arg0;
  new_var2 = 0xFF000183;
  return func_00194AB0(new_var, new_var2);
}

/* Similar function already in C: mwPlyGetAdxtHn (src/cri/mwsfd.c), similarity 0.80.
 * It is the template below (not built). */
#if 0
s32 mwPlyGetAdxtHn(s32 arg0) {
    if (func_00183B38() == 0) {
        func_001870E8(&D_00466188);
        return 0;
    }
    return func_00183B58(arg0);
}
#endif
