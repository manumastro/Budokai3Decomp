/* Draft (not built): func_0016AA00 at 0x0016AA00, size 0x6C, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 9 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 390 -> 60
 * Original: asm/nonmatchings/cri/mfci/func_0016AA00.s */

// func_0016AA00 0016AA00 -O2 -G0 ee-gcc 2.96: score 390 -> 60
s32 func_0016A968(s32);                             /* extern */

void func_0016AA00(u8 *arg0)
{
  s32 temp_v0;
  s32 temp_v1;
  *((s32 *) (((u8 *) arg0) + 4)) = 0x800;
  temp_v0 = func_0016A968(arg0 + 0x1C);
  temp_v1 = *((s32 *) (((u8 *) arg0) + 4));
  *((s32 *) (((u8 *) arg0) + 8)) = temp_v0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = (s32) (((s32) ((temp_v0 + temp_v1) - 1)) / temp_v1);
  *((s8 *) (((u8 *) arg0) + 0)) = 1;
  *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x18)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x14)) = 0;
  *((s8 *) (((u8 *) arg0) + 1)) = 0;
}
