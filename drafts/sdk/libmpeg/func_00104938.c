/* Draft (not built): func_00104938 at 0x00104938, size 0x34, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 550 -> 340
 * Original: asm/sdk/libmpeg.s */

// func_00104938 00104938 -O2 -G0 ee-gcc 2.9-991111-01: score 550 -> 340
s32 func_00104440(s32);                     /* extern */

void func_00104938(void)
{
  int new_var;
  int new_var2;
  new_var = 0x80004000;
  new_var2 = (*((s32 *) 0x10002010)) & new_var;
  new_var = new_var2;
  if (new_var == 0x80000000)
  {
    func_00104440(new_var);
  }
}
