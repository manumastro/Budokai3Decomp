/* Draft (not built): func_00172A98 at 0x00172A98, size 0x2C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 230 -> 85
 * Original: asm/nonmatchings/cri/mpv/func_00172A98.s */

// func_00172A98 00172A98 -O2 -G0 ee-gcc 2.96: score 230 -> 85
extern s32 (*D_00424BCC)();

s32 func_00172A98(void)
{
  s32 var_v0;
  if (D_00424BCC != ((void *) 0))
  {
    var_v0 = D_00424BCC();
    var_v0 = 0;
  }
  return var_v0;
}

/* Similar function already in C: ADXB_ExecOneAhx (src/cri/adx/mk_adx_bahx.c), similarity 0.70.
 * It is the template below (not built). */
#if 0
void ADXB_ExecOneAhx(AdxBasicAhx* adxb)
{
    ahxexecfunc(adxb);
}
#endif
