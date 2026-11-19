/* Draft (not built): func_001CBE80 at 0x001CBE80, size 0x54, segment unk/unk_1CBD90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 16 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_1CBD90/func_001CBE80.s */

s32 func_001CBE80(s32 unused_arg0, u8 *arg1)
{
  u8 *temp_a1;
  u8 *temp_v1;
  temp_v1 = gBattle->tbl[*((s32 *) (((u8 *) temp_a1) + 0xC))];
  temp_a1 = *((u8 **) (((u8 *) arg1) + 0x2C));
  *((s32 *) (((u8 *) (((*((s16 *) ((*((s32 *) (((u8 *) temp_v1) + 0xB8C))) + ((*((s32 *) (((u8 *) temp_a1) + 4))) * 2)))) * 8) + (*(*((s32 **) (((u8 *) temp_v1) + 0xB88)))))) + 8)) = (s32) (*((s32 *) (((u8 *) temp_a1) + 0)));
  return 1;
}
