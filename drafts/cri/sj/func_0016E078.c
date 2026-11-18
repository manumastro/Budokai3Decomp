/* Draft (not built): func_0016E078 at 0x0016E078, size 0x58, segment cri/sj (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 345 -> 265
 * Original: asm/nonmatchings/cri/sj/func_0016E078.s */

// func_0016E078 0016E078 -O2 -G0 ee-gcc 2.96: score 345 -> 265
s32 func_0016DAD8();                            /* extern */
s32 func_0016DAF0();                            /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_0041D960;
extern s32 D_0041D968;

void func_0016E078(void)
{
  s32 temp_v0;
  func_0016DAD8();
  temp_v0 = D_0041D960;
  if (temp_v0 == 0)
  {
    temp_v0 = 0x4000;
    memset(&D_0041D968, 0, temp_v0);
  }
  D_0041D960 = temp_v0 - (temp_v0 = -1);
  func_0016DAF0();
}
