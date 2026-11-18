/* Draft (not built): func_00188058 at 0x00188058, size 0x58, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1060 -> 860
 * Original: asm/nonmatchings/cri/sfd/func_00188058.s */

// func_00188058 00188058 -O1 -G0 ee-gcc 2.96: score 1060 -> 860
s32 func_0015CB88(s32, s32, s32, s32);  /* extern */
s32 func_0015CC38();                            /* extern */
s32 func_0015CE98(s32, s32);                /* extern */

void func_00188058(s32 arg0, s32 arg1)
{
  func_0015CC38();
  func_0015CE98(arg0, 0xFFFFF);
  func_0015CB88(arg0, arg1, 0, 0);
}
