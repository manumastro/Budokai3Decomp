/* Draft (not built): func_00109848 at 0x00109848, size 0x74, segment sdk/libmpeg_001095D0 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 1290 -> 1060
 * Original: asm/nonmatchings/sdk/libmpeg_001095D0/func_00109848.s */

// func_00109848 00109848 -O2 -G0 ee-gcc 2.9-991111-01: score 1290 -> 1060
s32 DI();                                           /* extern */
s32 EI(s32, s32, s32, s32);     /* extern */

void func_00109848(s32 arg0)
{
  s32 temp_v0;
  int new_var;
  new_var = 0x1000F590;
  temp_v0 = DI();
  *((s32 *) new_var) = (*((s32 *) 0x1000F520)) | (new_var = 0x10000);
  *((s32 *) 0x1000B400) = arg0;
  *((s32 *) 0x1000F590) = (*((s32 *) 0x1000F520)) & 0xFFFEFFFF;
  if (temp_v0 != 0)
  {
    EI(0x1000B400, 0xFFFEFFFF, 0x1000F520, 0x1000F590);
  }
}
