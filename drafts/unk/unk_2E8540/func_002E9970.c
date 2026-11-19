/* Draft (not built): func_002E9970 at 0x002E9970, size 0x1A0, segment unk/unk_2E8540 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2E8540/func_002E9970.s */

s32 func_0022D670(s32, s32);
void func_002E9970(s32 arg0, s32 arg1)
{
  s32 temp_a0;
  s32 temp_s4;
  s32 temp_v1;
  s32 var_s0;
  s32 var_s2;
  u8 *temp_s3;
  u8 *var_s1;
  var_s2 = 0;
  var_s1 = NULL;
  temp_s3 = (unsigned char *) (D_004573C0[arg0] + (arg1 * 0x10));
  temp_s4 = gBtlSys;
  var_s0 = 0;
  if ((*((s32 *) (((u8 *) temp_s3) + 0))) != (-1))
  {
    if ((*D_005C9F6C) != 0)
    {
      func_0022D0E0(*D_005C9F6C, 1);
    }
    temp_v1 = *((s32 *) (((u8 *) temp_s3) + 0));
    switch (temp_v1)
    {
      case 0:
        var_s1 = *((u8 **) (((u8 *) temp_s4) + 0xE68));
        var_s2 = *((s32 *) (((u8 *) temp_s4) + 0xE60));
        var_s0 = 0x04000000;
        break;

      case 1:
        var_s1 = *((u8 **) (((u8 *) temp_s4) + 0xE88));
        var_s2 = *((s32 *) (((u8 *) temp_s4) + 0xE84));
        var_s0 = 0x04010000;
        break;

      case 2:
        var_s1 = *((u8 **) (((u8 *) temp_s4) + 0xE6C));
        var_s2 = *((s32 *) (((u8 *) temp_s4) + 0xE64));
        var_s0 = 0x04001000;
        break;

    }

    D_00470704 = var_s2;
    D_00470708 = 0;
    D_0047070C = var_s0;
    amModel_SetCurrent(var_s2, var_s0);
    D_00470238 = 0;
    temp_a0 = *((s32 *) (((u8 *) temp_s3) + 4));
    switch (temp_a0)
    {
      case 0:
        *D_005C9F6C = func_0022D860(*((s32 *) ((*((s32 *) (((u8 *) var_s1) + 0x14))) + ((*((s32 *) (((u8 *) temp_s3) + 8))) * 4))), 0.0f);
        break;

      case 1:
        *D_005C9F6C = func_0022D670(*((s32 *) ((*((s32 *) (((u8 *) var_s1) + 0x1C))) + ((*((s32 *) (((u8 *) temp_s3) + 8))) * 4))), 0);
        break;

    }

    *D_005C9F60 = arg0;
    *D_005C9F64 = arg1;
  }
}
