/* Draft (not built): func_001709A8 at 0x001709A8, size 0x58, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 600 -> 405
 * Original: asm/nonmatchings/cri/mpv/func_001709A8.s */

// func_001709A8 001709A8 -O2 -G0 ee-gcc 2.96: score 600 -> 405
s32 func_001708E8(s32);                         /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_004232F4;
extern s32 D_00481470;

void func_001709A8(void)
{
  s32 *new_var;
  D_004232F4 -= 1;
  if ((*new_var) == 0)
  {
    func_001708E8(*new_var);
    new_var = &D_004232F4;
    memset(&D_00481470, 0, 8);
  }
}
