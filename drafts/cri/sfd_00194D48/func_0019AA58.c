/* Draft (not built): func_0019AA58 at 0x0019AA58, size 0x5C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1720 -> 1050
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019AA58.s */

// func_0019AA58 0019AA58 -O1 -G0 ee-gcc 2.96: score 1720 -> 1050
s32 func_0018D650(s32, s32, void *);    /* extern */
s32 func_0018D870();                                /* extern */

void func_0019AA58(u8 *arg0)
{
  u8 *temp_a2;
  s32 new_var;
  new_var = func_0018D870();
  temp_a2 = arg0 + 0xCC0;
  if (new_var != 0)
  {
    func_0018D650(0, 0xFF000122, temp_a2);
    return;
  }
  *((s32 *) (((u8 *) temp_a2) + 0x298)) = (s32) ((*((s32 *) (((u8 *) temp_a2) + 0x298))) + 1);
  *((s32 *) (((u8 *) arg0) + 0x44)) = 1;
}

/* Similar function already in C: func_00178A20 (src/cri/mpv.c), similarity 0.79.
 * It is the template below (not built). */
#if 0
void func_00178A20(s32 *arg0) {
    if (func_00178B80() != 0) {
        func_00172EF8(0, 0xFF030201);
        return;
    }
    *arg0 = 1;
}
#endif
