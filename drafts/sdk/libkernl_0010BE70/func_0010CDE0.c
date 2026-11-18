/* Draft (not built): func_0010CDE0 at 0x0010CDE0, size 0x28, segment sdk/libkernl_0010BE70 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 100 -> 10
 * Original: asm/nonmatchings/sdk/libkernl_0010BE70/func_0010CDE0.s */

// func_0010CDE0 0010CDE0 -O2 -G0 ee-gcc 2.9-991111-01: score 100 -> 10
s32 serialPutchar(s32);                         /* extern */

s32 func_0010CDE0(s32 arg2)
{
  int new_var;
  if (1)
  {
    new_var = arg2;
    new_var = new_var != 0;
    if (new_var)
    {
      serialPutchar(arg2);
    }
    new_var = 1;
    return new_var;
  }
}
