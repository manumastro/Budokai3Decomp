/* Draft (not built): func_00158238 at 0x00158238, size 0x64, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 640 -> 330
 * Original: asm/nonmatchings/cri/adx_001563B0/func_00158238.s */

// func_00158238 00158238 -O2 -G0 ee-gcc 2.96: score 640 -> 330
s32 func_00156048();                            /* extern */
s32 func_00157E70();                            /* extern */
s32 func_00157E88();                            /* extern */
s32 func_0015F5F0();                            /* extern */
extern s32 D_00405DB8;

void func_00158238(void)
{
  func_00157E70();
  if (D_00405DB8 != 0)
  {
    return;
    func_00157E88();
  }
  D_00405DB8 = 1;
  func_00157E88();
  func_0015F5F0();
  func_00156048();
  D_00405DB8 = 0;
}
