/* Draft (not built): func_00167D78 at 0x00167D78, size 0x60, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 1245 -> 450
 * Original: asm/nonmatchings/cri/dvci/func_00167D78.s */

// func_00167D78 00167D78 -O2 -G0 ee-gcc 2.96: score 1245 -> 450
s32 memset(s32, s32, s64, s32);             /* extern */

void func_00167D78(u8 *arg0)
{
  s32 temp_a0;
  char temp_a3;
  s64 temp_v0_2;
  u64 temp_v0;
  u64 temp_v1;
  temp_a0 = *((s32 *) (((u8 *) arg0) + 0x24));
  temp_v1 = *((u64 *) (((u8 *) arg0) + 8));
  temp_a3 = temp_a0 << 0xB;
  temp_v0_2 = *((s32 *) (((u8 *) arg0) + 0x1C));
  temp_v0 = (temp_v0_2 + temp_a0) << 0xB;
  temp_v0_2 = ((s64) ((temp_v0 - temp_v1) << 0x20)) >> 0x20;
  if (temp_v1 < temp_v0)
  {
    memset(((*((s32 *) (((u8 *) arg0) + (0x20 & 0xFFFF)))) + temp_a3) - temp_v0_2, 0, temp_v0_2, temp_a3);
  }
}
