/* Draft (not built): func_002A0A60 at 0x002A0A60, size 0x68, segment sys/cnv_sys (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/sys/cnv_sys/func_002A0A60.s */

void func_002A0A60(s32 arg0, s32 arg1)
{
  s32 var_a1;
  s32 var_t0;
  u8 *temp_v1;
  *((s32 *) ((*((s32 *) (((u8 *) D_004708CC) + 0x54))) + (arg0 * 4))) = arg1;
  var_t0 = 0;
  if ((*((s32 *) (((u8 *) D_004708CC) + 0))) > 0)
  {
    var_a1 = 0;
    do
    {
      var_t0 += 1;
      temp_v1 = (unsigned char *) ((*((u8 **) ((*((s32 *) (((u8 *) D_004708CC) + 0x48))) + var_a1))) + (arg0 << 5));
      *((s32 *) (((u8 *) temp_v1) + 0x18)) = 0;
      *((s32 *) (((u8 *) temp_v1) + 0x1C)) = 0;
      var_a1 += 4;
    }
    while (var_t0 < (*((s32 *) (((u8 *) D_004708CC) + 0))));
  }
}
