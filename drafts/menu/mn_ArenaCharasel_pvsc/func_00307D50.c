/* Draft (not built): func_00307D50 at 0x00307D50, size 0xE4, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 13 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00307D50.s */

void func_00307D50(u8 *arg0)
{
  f32 temp_f2;
  u8 *temp_s1;
  u8 *temp_s0;
  u8 *temp_v1;
  temp_f2 = *((f32 *) (((u8 *) temp_s0) + 0x44));
  temp_s0 = *((u8 **) (((u8 *) arg0) + 0x30));
  temp_s1 = D_00470988;
  if (temp_f2 < 1.0f)
  {
    *((f32 *) (((u8 *) temp_s0) + 0x44)) = (f32) (temp_f2 + (0.05f * gFrameDelta));
  }
  if (!((*((f32 *) (((u8 *) temp_s0) + 0x44))) <= 1.0f))
  {
    *((f32 *) (((u8 *) temp_s0) + 0x44)) = 1.0f;
  }
  if ((*((f32 *) (((u8 *) temp_s0) + 0x44))) < 1.0f)
  {
    func_003077E0(temp_s0);
    temp_v1 = *((u8 **) (((u8 *) temp_s1) + 0x10));
    *((s32 *) (((u8 *) temp_v1) + 0x34)) = 0;
    *((s32 *) (((u8 *) temp_v1) + 0x30)) = 0;
    *((s32 *) (((u8 *) temp_v1) + 0x38)) = 0;
    *((f32 *) (((u8 *) temp_v1) + 0x3C)) = (f32) (*((f32 *) (((u8 *) temp_s0) + 0x44)));
    return;
  }
  ArenaStageSel_Start(*D_004B4B56);
  func_002D1C50();
  ArenaList_Free();
}
