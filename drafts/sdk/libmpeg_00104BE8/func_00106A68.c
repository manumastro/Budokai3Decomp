/* Draft (not built): func_00106A68 at 0x00106A68, size 0x34, segment sdk/libmpeg_00104BE8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 550 -> 415
 * Original: asm/nonmatchings/sdk/libmpeg_00104BE8/func_00106A68.s */

// func_00106A68 00106A68 -O2 -G0 ee-gcc 2.9-991111-01: score 550 -> 415
s32 func_00104440(s32);                     /* extern */

void func_00106A68(void)
{
  int new_var;
  int new_var2;
  new_var = 0x80004000;
  new_var = 0x10002010;
  new_var2 = (*((s32 *) new_var)) & new_var;
  if (new_var2 == 0x80000000)
  {
    func_00104440(0x80004000);
  }
}
