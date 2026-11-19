/* Draft (not built): func_001BACE0 at 0x001BACE0, size 0x130, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 29 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001BACE0.s */

void func_001BACE0(u8 *arg0)
{
  f32 temp_f0;
  f32 temp_f1;
  s32 temp_a3;
  temp_f1 = (f32) (*((s32 *) (((u8 *) (((temp_a3 & 0xFFFF) * 0x10) + (*((s32 *) (((u8 *) (*((u8 **) (((u8 *) ((((temp_a3 >> 0x10) - 1) * 4) + (*((s32 *) (((u8 *) arg0) + 0xB88))))) + 0x46C)))) + 0x14))))) + 8)));
  temp_a3 = *((s32 *) (((u8 *) arg0) + 0xC54));
  temp_f0 = temp_f1 * (((2.5f - (*((f32 *) (((u8 *) arg0) + 0xD4)))) / 5.0f) - 0.2f);
  *((f32 *) (((u8 *) arg0) + 0xC58)) = temp_f0;
  if (!(temp_f0 <= temp_f1))
  {
    *((f32 *) (((u8 *) arg0) + 0xC58)) = (f32) (temp_f1 - 1.0f);
  }
  if ((*((f32 *) (((u8 *) arg0) + 0xC58))) < 0.0f)
  {
    *((f32 *) (((u8 *) arg0) + 0xC58)) = 0.0f;
  }
  if (((*((s16 *) (((u8 *) arg0) + 0xCB4))) == 0) && ((*((f32 *) (((u8 *) arg0) + 0xCB8))) <= 2.0f))
  {
    if (func_001E3D60(*((s32 *) (((u8 *) arg0) + 0x17AC)), 180.0f) != 0)
    {
      *((s32 *) (((u8 *) arg0) + 0x17BC)) = 0xBE99999A;
      return;
    }
    *((s32 *) (((u8 *) arg0) + 0x17BC)) = 0x3E99999A;
    return;
  }
  *((s32 *) (((u8 *) arg0) + 0x17BC)) = 0;
}
