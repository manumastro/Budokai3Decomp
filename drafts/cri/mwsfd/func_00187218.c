/* Draft (not built): func_00187218 at 0x00187218, size 0x68, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 310 -> 210
 * Original: asm/nonmatchings/cri/mwsfd/func_00187218.s */

// func_00187218 00187218 -O2 -G0 ee-gcc 2.96: score 310 -> 210
s32 func_00158138();                            /* extern */
s32 func_00187D90(void *, s32);             /* extern */

void func_00187218(u8 *arg0)
{
  s32 var_s1;
  s32 var_v0;
  var_s1 = 0;
  var_v0 = 0 < 0xA;
 do { loop_1: var_s1 += 1; if (var_v0 != 0) { func_00187D90(arg0, 1); func_00158138(); func_00187D90(arg0, 0); var_v0 = var_s1 < 0xA; if ((*((s32 *) (((u8 *) arg0) - -0x64))) != 0) { goto loop_1; } } } while (0);
}
