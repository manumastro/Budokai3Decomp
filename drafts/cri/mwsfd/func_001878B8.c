/* Draft (not built): func_001878B8 at 0x001878B8, size 0xA0, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 550 -> 250
 * Original: asm/nonmatchings/cri/mwsfd/func_001878B8.s */

// func_001878B8 001878B8 -O2 -G0 ee-gcc 2.96: score 550 -> 250
void *func_00181FA8(s32, s32 *, s32 *);         /* extern */
s32 func_001870D0(s32);                             /* extern */
s32 func_00196708();                            /* extern */
extern s32 D_00425264;
extern s32 D_004268B0;
extern s32 D_004268B4;

void func_001878B8(void)
{
  s32 temp_s1;
  u8 *temp_v0;
  temp_s1 = D_00425264;
  D_004268B0 += 1;
  D_004268B4 += 1;
  if (temp_s1 == 1)
  {
    temp_v0 = func_00181FA8(1, &D_004268B0, &D_004268B4);
    if (func_001870D0(temp_v0 + 0x5C) != 0)
    {
      if (D_00425264 == temp_s1)
      {
        func_00196708();
      }
      *((s32 *) (((u8 *) temp_v0) + 0x5C)) = 0;
    }
  }
}
