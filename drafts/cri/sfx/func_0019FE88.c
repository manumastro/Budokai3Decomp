/* Draft (not built): func_0019FE88 at 0x0019FE88, size 0x28, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 160 -> 100
 * Original: asm/nonmatchings/cri/sfx/func_0019FE88.s */

// func_0019FE88 0019FE88 -O2 -G0 ee-gcc 2.96: score 160 -> 100
extern s32 D_004270C8;

void func_0019FE88(s32 *arg0)
{
  int new_var;
  new_var = arg0 != ((void *) 0);
  *arg0 = 0;
  if (new_var)
  {
    if (arg0)
    {
      D_004270C8 -= 1;
    }
    else
    {
      D_004270C8 -= 1;
    }
  }
}

/* Similar function already in C: func_00158AF0 (src/cri/adx_001563B0.c), similarity 0.67.
 * It is the template below (not built). */
#if 0
void func_00158AF0(void) {
    D_0040D5E0 += 1;
}
#endif
