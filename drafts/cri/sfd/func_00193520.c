/* Draft (not built): func_00193520 at 0x00193520, size 0xE8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 625 -> 170
 * Original: asm/nonmatchings/cri/sfd/func_00193520.s */

// func_00193520 00193520 -O2 -G0 ee-gcc 2.96: score 625 -> 170
s32 func_0017EE78(s32, s32, s32);                   /* extern */
s32 func_001957B8(void *, s32);                     /* extern */
extern s32 D_00467730;

void func_00193520(u8 *arg0, u8 *arg1)
{
  s32 temp_a2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v1;
  s32 temp_v1_2;
  u8 *temp_a1;
  u8 *temp_s1;
  temp_s1 = arg0 + 0xCC0;
  temp_a1 = arg1 + 0xC;
 do { *((s32 *) (((u8 *) arg1) + 0x3C)) = (s32) (*((s32 *) (((u8 *) temp_a1) + 0x28))); temp_a2 = *((s32 *) (((u8 *) arg0) + 0xDFC)); *((s32 *) (((u8 *) arg1) + 0x38)) = (s32) (((*((s32 *) (((u8 *) temp_a1) + 0x24))) - temp_a2) + (*((s32 *) (((u8 *) temp_s1) + 0x158)))); temp_v1 = *((s32 *) (((u8 *) temp_a1) + 0x24)); *((s32 *) (((u8 *) arg1) + 0x4C)) = temp_v1; } while (0);
  *((s32 *) (((u8 *) arg1) + 0x50)) = (s32) (temp_v1 + (*((s32 *) (((u8 *) temp_s1) + 0x158))));
  if (func_001957B8(temp_a1, temp_a2) != 0)
  {
    temp_v0 = func_0017EE78(*((s32 *) (((u8 *) arg1) + 0x3C)), ((*((s32 *) (((u8 *) arg1) + 0xD8))) - (*((s32 *) (((u8 *) temp_s1) + 0x154)))) * 0x3E8, *((&D_00467730) + ((*((s32 *) (((u8 *) arg1) + 0x68))) * 4)));
    *((s32 *) (((u8 *) arg1) + 0x4C)) = temp_v0;
    temp_v0_2 = temp_v0 + (*((s32 *) (((u8 *) temp_s1) + 0x158)));
    *((s32 *) (((u8 *) arg1) + 0x38)) = temp_v0_2;
    *((s32 *) (((u8 *) arg1) + 0x50)) = temp_v0_2;
  }
  temp_v1_2 = *((s32 *) (((u8 *) arg1) + 0x38));
  if ((*((s32 *) (((u8 *) temp_s1) + 0x278))) < temp_v1_2)
  {
    *((s32 *) (((u8 *) temp_s1) + 0x278)) = temp_v1_2;
    *((s32 *) (((u8 *) temp_s1) + 0x27C)) = (s32) (*((s32 *) (((u8 *) arg1) + 0x3C)));
  }
}
