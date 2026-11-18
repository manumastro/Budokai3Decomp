/* Draft (not built): func_00185880 at 0x00185880, size 0x4C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1800 -> 1110
 * Original: asm/nonmatchings/cri/mwsfd/func_00185880.s */

// func_00185880 00185880 -O1 -G0 ee-gcc 2.96: score 1800 -> 1110
s32 func_001847D0();                                /* extern */
s32 func_0019F978(s32, s32, s32, s32);          /* extern */

unsigned char func_00185880(s32 arg1, s32 arg2, s32 arg3)
{
  int new_var2;
  int new_var;
  s32 new_var3;
  new_var3 = arg1;
  new_var = 0xFF;
  new_var = new_var3;
  new_var = new_var & ((unsigned int) new_var);
  new_var2 = arg2 & 0xFF;
  func_0019F978(func_001847D0(), new_var, new_var2, new_var = arg3);
}
