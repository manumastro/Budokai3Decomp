/* Draft (not built): func_001CBD90 at 0x001CBD90, size 0x58, segment unk/unk_1CBD90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1CBD90/func_001CBD90.s */

s32 func_001CBD90(s32 unused_arg0, u8 *arg1)
{
  s8 temp_a1;
  u8 *temp_v1;
  u8 *temp_v1_2;
  temp_v1 = *((u8 **) (((u8 *) arg1) + 0x2C));
  temp_a1 = *((s8 *) (((u8 *) temp_v1_2) + 0xCC4));
  temp_v1_2 = gBattle->tbl[*((s32 *) (((u8 *) temp_v1) + 4))];
  if (temp_a1 > 0)
  {
    *((s32 *) (((u8 *) ((temp_a1 * 8) + (*(*((s32 **) (((u8 *) temp_v1_2) + 0xB88)))))) + 8)) = (s32) (-((*((s32 *) (((u8 *) temp_v1) + 0))) == 0));
  }
  return 1;
}
