/* Draft (not built): func_001788D8 at 0x001788D8, size 0x34, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 210 -> 205
 * Original: asm/nonmatchings/cri/mpv/func_001788D8.s */

// func_001788D8 001788D8 -O2 -G0 ee-gcc 2.96: score 210 -> 205
s32 func_00178910();                                /* extern */
s32 func_00178960(s32);                         /* extern */

void func_001788D8(void)
{
  s32 temp_v0;
 do { temp_v0 = func_00178910(); } while (0);
  if ((temp_v0 & 0xFFFF) != 0)
  {
    func_00178960(temp_v0 ^ 0);
  }
}
