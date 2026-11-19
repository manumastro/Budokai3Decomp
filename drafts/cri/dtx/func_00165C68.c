/* Draft (not built): func_00165C68 at 0x00165C68, size 0x64, segment cri/dtx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 210 -> 130
 * Original: asm/nonmatchings/cri/dtx/func_00165C68.s */

// func_00165C68 00165C68 -O2 -G0 ee-gcc 2.96: score 210 -> 130
s32 func_001659B0(s32);                         /* extern */
s32 func_001660C0();                            /* extern */
s32 memset(void *, s32, s32);           /* extern */

void func_00165C68(u8 *arg0)
{
  if ((*((s8 *) (((u8 *) arg0) + 1))) == 1)
  {
    do
    {
      *((s8 *) (((u8 *) arg0) + 2)) = 0;
      func_001660C0();
    }
    while ((*((s8 *) (((u8 *) arg0) + 1))) == 1);
  }
  func_001659B0(*((s32 *) (((u8 *) arg0) + 4)));
  memset(arg0, 0, 0x44);
}
