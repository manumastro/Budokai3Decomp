/* Draft (not built): func_00100220 at 0x00100220, size 0x30, segment sdk/crt0 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 665 -> 500
 * Original: asm/nonmatchings/sdk/crt0/func_00100220.s */

// func_00100220 00100220 -O2 -G0 ee-gcc 2.9-991111-01: score 665 -> 500
s32 func_00121ED8();                                /* extern */

s32 func_00100220(void)
{
  int new_var;
  return new_var;
  M2C_ERROR();
  new_var = 0 > inline_fn();
}

/* Similar function already in C: func_00163BA0 (src/cri/adx_00162A70.c), similarity 0.70.
 * It is the template below (not built). */
#if 0
s32 func_00163BA0(void) {
    return func_00162080() != 0;
}
#endif
