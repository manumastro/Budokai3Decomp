/* Draft (not built): func_00181798 at 0x00181798, size 0x30, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 7 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 245 -> 25
 * Original: asm/nonmatchings/cri/mwsfd/func_00181798.s */

// func_00181798 00181798 -O2 -G0 ee-gcc 2.96: score 245 -> 25


void func_00181798(u8 *arg0, u8 *arg1)
{
  s16 temp_a2;
  temp_a2 = *((s16 *) (((u8 *) arg0) + 0xC));
  *((s32 *) (((u8 *) arg1) + 0)) = (s32) (*((s32 *) (((u8 *) arg0) + 8)));
  *((s32 *) (((u8 *) arg1) + 4)) = (s32) (*((s32 *) (((u8 *) arg0) + 0)));
  *((s32 *) (((u8 *) arg1) + 0xC)) = (s32) (*((s16 *) (((u8 *) arg0) + 0xE)));
  *((s32 *) (((u8 *) arg1) + 0x10)) = (s32) temp_a2;
  *((s32 *) (((u8 *) arg1) + 8)) = (s32) (*((s32 *) (((u8 *) arg0) + 4)));
  *((s32 *) (((u8 *) arg1) + 0x14)) = (s32) temp_a2;
}
