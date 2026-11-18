/* Draft (not built): func_00185328 at 0x00185328, size 0x30, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 40 -> 20
 * Original: asm/nonmatchings/cri/mwsfd/func_00185328.s */

// func_00185328 00185328 -O2 -G0 ee-gcc 2.96: score 40 -> 20


void func_00185328(u8 *arg0)
{
  u8 **temp_v0;
  temp_v0 = *((u8 ***) (((u8 *) arg0) + 0x190));
  if ((*((u8 ***) (((u8 *) arg0) + 0x190))) != ((void *) 0))
  {
    (*((s32 (**)(u8 **)) (((u8 *) (*(*((u8 ***) (((u8 *) arg0) - -0x190))))) + 0x14)))(*((u8 ***) (((u8 *) arg0) + 0x190)));
  }
}
