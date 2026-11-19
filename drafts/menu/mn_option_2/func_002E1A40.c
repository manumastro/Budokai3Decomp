/* Draft (not built): func_002E1A40 at 0x002E1A40, size 0x164, segment menu/mn_option_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_option_2/func_002E1A40.s */

extern void amDisp_SetOffset(s32, s32);
s32 amAdx_SetVolume(s8 *, f32);
s32 func_001446E0(s32);
s32 func_00148310(f32);
s32 func_001A38B0(s32, s32, s8);
s32 memcpy(s8 *, s8 *, s32);
extern s32 D_00456B20;
extern void Fade_SetRequest();
extern void func_0015FE80(void);
extern char D_004B4B40[];
void func_002E1A40(s32 arg0)
{
  s8 *var_s2;
  s32 var_s1;
  s32 var_s3;
  s8 *var_s0;
  s8 temp_v1;
  var_s3 = arg0;
  var_s2 = (signed char *) D_004E05DC;
  var_s2 = (signed char *) D_004E05DC;
  var_s1 = 0;
  var_s0 = (signed char *) D_004B4B40;
  var_s0 = (signed char *) D_004B4B40;
  do
  {
    temp_v1 = *((s8 *) (((u8 *) var_s2) + 6));
    if (temp_v1 != 2)
    {
      memcpy((s8 *) (var_s0 + 0x2BA88), (s8 *) ((&D_00456B20) + (temp_v1 * 8)), 8);
    }
    else
    {
      memcpy(var_s0 + 0x2BA88, var_s2 + 8, 8);
    }
    func_001A38B0(var_s1, 1, *((s8 *) (((u8 *) var_s2) + 7)));
    var_s1 += 1;
    var_s2 += 0xA;
    var_s0 += 0xA;
  }
  while (var_s1 < 2);
  amDisp_SetOffset(*((s16 *) (((u8 *) D_004E05DC) + 0x1E)), *((s16 *) (((u8 *) D_004E05DC) + 0x20)));
  func_00148310((f32) ((s32) D_004E0608));
  var_s1 = (s32) D_004E05DC;
  var_s1 = (s32) D_004E05DC;
  amAdx_SetVolume(NULL, *((f32 *) (((u8 *) var_s1) + 0x34)));
  var_s0 = (s8 *) 1;
  do
  {
    amAdx_SetVolume(var_s0, *((f32 *) (((u8 *) var_s1) + 0x3C)));
    var_s0 += 1;
  }
  while (((s32) var_s0) < 4);
  if ((*((s32 *) (((u8 *) var_s1) + 0x30))) == 0)
  {
    func_0015FE80();
    func_001446E0(0);
  }
  else
  {
    func_0015FE80();
    func_001446E0(1);
  }
  Fade_SetRequest(-1, var_s3, 0);
}
