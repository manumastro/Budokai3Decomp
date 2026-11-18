/* Draft (not built): func_00173A00 at 0x00173A00, size 0x6C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; then decomp-permuter: score 630 -> 5
 * Original: asm/nonmatchings/cri/mpv/func_00173A00.s */

// func_00173A00 00173A00 -O2 -G0 ee-gcc 2.96: score 630 -> 5
extern s32 D_00465240;
extern s32 D_00465250;

void func_00173A00(u8 *arg0)
{
  s32 temp_v0_2;
  u32 temp_v0;
  if (!((*((s32 *) (((u8 *) arg0) + 0x118))) != 3))
  {
    *((u32 *) (((u8 *) arg0) + 0x424)) = 0U;
    *((s32 *) (((u8 *) arg0) + 0x420)) = 0;
  }
  else
  {
    temp_v0 = *((u32 *) (0x424 + ((u8 *) arg0)));
    *((u32 *) (((u8 *) arg0) + 0x424)) = (u32) (temp_v0 + 1);
    *((s32 *) (((u8 *) arg0) + 0x420)) = (s32) (temp_v0 - ((((s32) (temp_v0 + (temp_v0 >> 0x1F))) >> 1) * 2));
  }
  temp_v0_2 = (*((s32 *) (((u8 *) arg0) + 0x114))) * 4;
  *((s32 *) (((u8 *) arg0) + 0x36C)) = (s32) (*((&D_00465240) + temp_v0_2));
  *((s32 *) (((u8 *) arg0) + 0x37C)) = (s32) (*((&D_00465250) + temp_v0_2));
}
