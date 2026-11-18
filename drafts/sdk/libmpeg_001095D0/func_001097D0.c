/* Draft (not built): func_001097D0 at 0x001097D0, size 0x74, segment sdk/libmpeg_001095D0 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 1290 -> 1170
 * Original: asm/nonmatchings/sdk/libmpeg_001095D0/func_001097D0.s */

// func_001097D0 001097D0 -O2 -G0 ee-gcc 2.9-991111-01: score 1290 -> 1170
s32 DI();                                           /* extern */
s32 EI(s32, s32, s32, s32);     /* extern */

void func_001097D0(s32 arg0)
{
  s32 *new_var;
  s32 temp_v0;
  temp_v0 = DI();
  *(new_var = (s32 *) 0x1000F590) = (*((s32 *) 0x1000F520)) | 0x10000;
  *((s32 *) 0x1000B000) = arg0;
  new_var = &(*((s32 *) 0x1000F520));
  *((s32 *) 0x1000F590) = (*new_var) & 0xFFFEFFFF;
  if (temp_v0 != 0)
  {
    EI(0x1000B000, 0xFFFEFFFF, 0x1000F520, 0x1000F590);
  }
}
