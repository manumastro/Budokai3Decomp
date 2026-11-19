/* Draft (not built): func_00172B48 at 0x00172B48, size 0x2C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 230 -> 85
 * Original: asm/nonmatchings/cri/mpv/func_00172B48.s */

// func_00172B48 00172B48 -O2 -G0 ee-gcc 2.96: score 230 -> 85
extern s32 (*D_00424BDC)();

s32 func_00172B48(void)
{
  s32 var_v0;
  s32 new_var;
  var_v0 = (new_var = 0);
  if (D_00424BDC != ((void *) 0))
  {
    if (1)
    {
      var_v0 = D_00424BDC();
    }
  }
  return new_var;
}

/* Similar function already in C: ADXB_ExecOneAhx (src/cri/adx/mk_adx_bahx.c), similarity 0.70.
 * It is the template below (not built). */
#if 0
void ADXB_ExecOneAhx(AdxBasicAhx* adxb)
{
    ahxexecfunc(adxb);
}
#endif
