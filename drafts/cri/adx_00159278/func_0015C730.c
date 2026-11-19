/* Draft (not built): func_0015C730 at 0x0015C730, size 0x40, segment cri/adx_00159278 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 580 -> 560
 * Original: asm/nonmatchings/cri/adx_00159278/func_0015C730.s */

// func_0015C730 0015C730 -O2 -G0 ee-gcc 2.96: score 580 -> 560
s32 func_0015C528();                            /* extern */
s32 func_0015C698();                            /* extern */

void func_0015C730(u8 *arg0)
{
  s8 temp_v1;
  temp_v1 = *((s8 *) (((u8 *) arg0) + 1));
  switch (temp_v1)
  {
    case 1:
      return;
      func_0015C528();

    case 2:
      func_0015C698();
      return;

  }

}

/* Similar function already in C: func_00164E20 (src/cri/srd.c), similarity 0.62.
 * It is the template below (not built). */
#if 0
void func_00164E20(void) {
    if (D_0041160C == 1) {
        func_0016FFA0(1);
    }
}
#endif
