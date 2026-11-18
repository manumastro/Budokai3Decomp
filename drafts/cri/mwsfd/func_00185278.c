/* Draft (not built): func_00185278 at 0x00185278, size 0x30, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 40 -> 15
 * Original: asm/nonmatchings/cri/mwsfd/func_00185278.s */

// func_00185278 00185278 -O2 -G0 ee-gcc 2.96: score 40 -> 15


void func_00185278(u8 *arg0)
{
  u8 *new_var2;
  u8 **temp_v0;
  s32 (**new_var)(u8 **);
  temp_v0 = *((u8 ***) (((u8 *) new_var2) + 0x190));
  new_var2 = arg0;
  if (temp_v0 != ((void *) 0))
  {
    new_var2 = (u8 *) (*temp_v0);
    new_var = (s32 (**)(u8 **)) (new_var2 + 0xC);
    (*new_var)(temp_v0);
  }
}
