/* Draft (not built): PS2RNA_GetStartSmpl at 0x0016D750, size 0x44, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 250 -> 195
 * Original: asm/nonmatchings/cri/ps2rna/PS2RNA_GetStartSmpl.s */

// PS2RNA_GetStartSmpl 0016D750 -O1 -G0 ee-gcc 2.96: score 250 -> 195
s32 scePrintf(s32 *);                       /* extern */
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;
extern s32 D_00464C30;

s32 PS2RNA_GetStartSmpl(void)
{
  volatile long long new_var;
  new_var = D_0041A0D8;
  if ((new_var != 1) || (D_0041A0D0 > 0))
  {
    scePrintf(&D_00464C30);
  }
  return 0;
}

/* Similar function already in C: func_00164E20 (src/cri/srd.c), similarity 0.60.
 * It is the template below (not built). */
#if 0
void func_00164E20(void) {
    if (D_0041160C == 1) {
        func_0016FFA0(1);
    }
}
#endif
