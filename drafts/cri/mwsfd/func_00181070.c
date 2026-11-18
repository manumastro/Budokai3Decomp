/* Draft (not built): func_00181070 at 0x00181070, size 0x74, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 1970 -> 1215
 * Original: asm/nonmatchings/cri/mwsfd/func_00181070.s */

// func_00181070 00181070 -O1 -G0 ee-gcc 2.96: score 1970 -> 1215
s32 func_001815E0(s32);                             /* extern */
s32 func_00181E20();                                /* extern */
s32 func_00184EC0(s32, s32);                    /* extern */
s32 func_00185A78(s32);                             /* extern */

void func_00181070(s32 arg0)
{
  s32 temp_v0;
  s32 var_s3;
  var_s3 = 1;
  temp_v0 = func_001815E0(arg0);
  if (temp_v0 == 1)
  {
    var_s3 = func_00181E20() == var_s3;
    var_s3 = temp_v0 == func_00185A78(arg0);
  }
  func_00184EC0(arg0, var_s3);
}
