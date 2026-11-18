/* Draft (not built): func_001732D8 at 0x001732D8, size 0x74, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; then decomp-permuter: score 705 -> 510
 * Original: asm/nonmatchings/cri/mpv/func_001732D8.s */

// func_001732D8 001732D8 -O1 -G0 ee-gcc 2.96: score 705 -> 510
s32 memset(void *, s32, s32);           /* extern */

void func_001732D8(s32 arg0)
{
  u8 *temp_s0;
  int new_var2;
  u8 *new_var;
  temp_s0 = arg0 + 0x158;
  memset(temp_s0, 0, 0x570);
  new_var2 = 0xFF;
  *((s32 *) (((u8 *) temp_s0) + 0x70)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 0x7C)) = new_var2;
  *((s32 *) (((u8 *) temp_s0) + 0xD4)) = 1;
  *((s32 *) (((u8 *) temp_s0) + 0x564)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 0x74)) = new_var2;
  new_var = temp_s0;
  *((s32 *) (((u8 *) temp_s0) + 0x78)) = 0xFF;
  *((s32 *) (((u8 *) temp_s0) + 0x4C8)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 0x4CC)) = 0;
  *((s32 *) (((u8 *) new_var) + 0x4D0)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 0x4D4)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 0x4D8)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 0x4DC)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 0x4E4)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 0x424)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 0xD0)) = 0;
}
