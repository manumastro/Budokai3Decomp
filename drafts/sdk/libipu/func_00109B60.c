/* Draft (not built): func_00109B60 at 0x00109B60, size 0x74, segment sdk/libipu (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 1290 -> 1170
 * Original: asm/nonmatchings/sdk/libipu/func_00109B60.s */

// func_00109B60 00109B60 -O2 -G0 ee-gcc 2.9-991111-01: score 1290 -> 1170
s32 DI();                                           /* extern */
s32 EI(s32, s32, s32, s32);     /* extern */

void func_00109B60(s32 arg0)
{
  s32 *new_var;
  s32 temp_v0;
  new_var = (s32 *) 0x1000F590;
  temp_v0 = DI();
  *new_var = (*((s32 *) 0x1000F520)) | 0x10000;
  *((s32 *) 0x1000B400) = arg0;
  new_var = &(*((s32 *) 0x1000F520));
  *((s32 *) 0x1000F590) = (*new_var) & 0xFFFEFFFF;
  if (temp_v0 != 0)
  {
    EI(0x1000B400, 0xFFFEFFFF, 0x1000F520, 0x1000F590);
  }
}
