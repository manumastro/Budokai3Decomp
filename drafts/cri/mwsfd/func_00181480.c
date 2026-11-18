/* Draft (not built): func_00181480 at 0x00181480, size 0x44, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 865 -> 505
 * Original: asm/nonmatchings/cri/mwsfd/func_00181480.s */

// func_00181480 00181480 -O2 -G0 ee-gcc 2.96: score 865 -> 505


void func_00181480(u8 *arg0, u8 *arg1)
{
  int new_var;
  u8 *temp_a0;
  temp_a0 = arg0 + 0x8C;
  *((s32 *) (((u8 *) temp_a0) + 8)) = (s32) (*((s32 *) (((u8 *) arg1) + 0x44)));
  *((s32 *) (((u8 *) temp_a0) + 0x14)) = (s32) (*((s32 *) (((u8 *) arg1) + 0x50)));
  new_var = *((s32 *) (((u8 *) arg1) + 0x54));
  *((s32 *) (((u8 *) temp_a0) + 0xC)) = (s32) (*((s32 *) (((u8 *) arg1) + 0x48)));
  *((s32 *) (((u8 *) arg0) + 0x8C)) = (s32) (*((s32 *) (((u8 *) arg1) + 0x3C)));
  *((s32 *) (((u8 *) temp_a0) + 4)) = (s32) (*((s32 *) (((u8 *) arg1) + 0x40)));
  *((s32 *) (((u8 *) temp_a0) + 0x10)) = (s32) (*((s32 *) (((u8 *) arg1) + 0x4C)));
  *((s32 *) (((u8 *) temp_a0) + 0x18)) = (s32) new_var;
  *((s32 *) (((u8 *) temp_a0) + 0x1C)) = 0;
}
