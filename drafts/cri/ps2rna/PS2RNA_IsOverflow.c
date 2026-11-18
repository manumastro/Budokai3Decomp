/* Draft (not built): PS2RNA_IsOverflow at 0x0016D888, size 0x44, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 250 -> 195
 * Original: asm/nonmatchings/cri/ps2rna/PS2RNA_IsOverflow.s */

// PS2RNA_IsOverflow 0016D888 -O1 -G0 ee-gcc 2.96: score 250 -> 195
s32 scePrintf(s32 *);                       /* extern */
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;
extern s32 D_00464C58;

s32 PS2RNA_IsOverflow(void)
{
  volatile long long new_var;
  new_var = D_0041A0D8;
  if ((new_var != 1) || (D_0041A0D0 > 0))
  {
    scePrintf(&D_00464C58);
  }
  return 0;
}
