/* Draft (not built): func_001790F0 at 0x001790F0, size 0x58, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 35 -> 20
 * Original: asm/nonmatchings/cri/mpv/func_001790F0.s */

// func_001790F0 001790F0 -O2 -G0 ee-gcc 2.96: score 35 -> 20
s32 func_0017B048(s32, s32);            /* extern */
s32 func_0017B218();                                /* extern */

long long func_001790F0(u8 *arg0, s32 arg1)
{
  if (func_0017B218() != 0)
  {
    func_0017B048(0, 0xFF020302);
    return;
  }
  *((s32 *) (((u8 *) arg0) + 0x10)) = arg1;
}
