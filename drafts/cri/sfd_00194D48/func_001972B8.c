/* Draft (not built): func_001972B8 at 0x001972B8, size 0xB8, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 550 -> 305
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001972B8.s */

// func_001972B8 001972B8 -O2 -G0 ee-gcc 2.96: score 550 -> 305
s32 func_001999E0(void *, s32, s32);            /* extern */

s32 func_001972B8(u8 *arg0)
{
  s32 temp_a2;
  s32 temp_v0;
  s32 var_v0;
  u8 **temp_a0;
  u8 *temp_s0;
  temp_s0 = arg0 + ((*((s32 *) (((u8 *) arg0) + 0x1C78))) * 0x74);
  temp_s0 = temp_s0 - -0x1290;
  temp_a0 = *((u8 ***) (((u8 *) temp_s0) + 4));
  temp_v0 = (*((s32 (**)(u8 **, s32)) (((u8 *) (*temp_a0)) + 0x24)))(temp_a0, 1);
 do { if (temp_s0) { } } while (0);
  temp_a2 = *((s32 *) (((u8 *) temp_s0) + 0xC));
  if ((temp_v0 >= (((s32) (temp_a2 * 0x50)) / 100)) || ((var_v0 = 0, (temp_v0 < func_001999E0(arg0, 0x46, temp_a2)) == 0)))
  {
    var_v0 = 1;
  }
  return var_v0;
}
