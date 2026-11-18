/* Draft (not built): func_0024A760 at 0x0024A760, size 0x140, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 23 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x154, original 0x140; then decomp-permuter: score 1430 -> 1005
 * Original: asm/nonmatchings/battle/skill_cmd/func_0024A760.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct ScriptCtx
{
  s32 ret;
  s32 unk04[3];
  s32 (*wait)(struct ScriptCtx *ctx);
  s32 unk14[3];
  s32 base;
  s32 unk24[2];
  s32 *args;
  s32 unk30[2];
  void *unk38;
  s32 unk3C;
  f32 fret;
} ScriptCtx;
typedef struct Fighter
{
  u8 unk0000[0x1350];
  s32 unk1350;
  struct Fighter *other;
  u8 unk1358[0x1360 - 0x1358];
  u8 unk1360[0x13A4 - 0x1360];
  s16 unk13A4;
  u8 unk13A6[0x17E4 - 0x13A6];
  f32 unk17E4;
  f32 unk17E8;
  u8 unk17EC[0x1AC4 - 0x17EC];
  s32 unk1AC4;
  u8 unk1AC8[0x1ACE - 0x1AC8];
  s16 unk1ACE;
  u8 unk1AD0[0x1AD6 - 0x1AD0];
  s16 unk1AD6;
  f32 unk1AD8;
  f32 unk1ADC;
  u8 unk1AE0[0x1CFC - 0x1AE0];
  s32 unk1CFC;
  u8 unk1D00[0x1EE8 - 0x1D00];
  s32 unk1EE8;
  u8 unk1EEC[0x1FF8 - 0x1EEC];
  s8 unk1FF8;
} Fighter;
typedef struct BattleWork
{
  u8 unk0000[0x88EC];
  s32 unk88EC;
  f32 unk88F0;
  u8 unk88F4[0x891C - 0x88F4];
  s32 unk891C;
  u8 unk8920[0x8934 - 0x8920];
  Fighter *fighter[2];
  u8 unk893C[0x8944 - 0x893C];
  s16 unk8944;
  u8 unk8946[0x8952 - 0x8946];
  s16 unk8952;
  u8 unk8954[0x8AB1 - 0x8954];
  s8 unk8AB1;
  s8 unk8AB2;
  s8 unk8AB3;
} BattleWork;
extern BattleWork *gBattle;
typedef struct SkillBuf
{
  u8 unk00[0x5C];
  s32 unk5C;
  s16 unk60;
  s16 unk62;
} SkillBuf;
extern void Obj_ResetF38(s32);
extern void amTask_Kill(s32);
extern s32 func_0021C460(s32);
extern s32 func_0021C360(s32);
extern s32 *func_00259CC0(s32 *, s32);
extern void func_002525A0(u8 *, u8 *, s32);
extern u8 *D_0046FE4C;
extern u8 D_004529B8[];
extern s32 D_0058D4D0[];
extern s32 func_0022D0B0(s32, s32);
extern s32 func_0022D570(s32, s32, s32, s32);
extern void func_00209450(s32, s32);
extern void BtbObj_RemoveByIdx(s32, s32);
extern s32 *func_001F5EF0(s32, s32);
extern void func_001F5B10(s32, s32);
extern u8 D_00452740[];
extern char D_0046AE20[];
extern s32 func_00246CA0(s32, s32);
extern s32 func_00127E88(char *, char *, s32);
extern u8 D_004E066A[];
extern void *D_0046FE54;
extern u8 D_00452900[];
extern s32 D_00452940[][10];
extern s32 D_0051CD20[];
extern void func_00248350(s32);
extern void func_002CF070(s32, s32);
extern void func_001D9280(s32);
extern f32 D_00470710;
extern void func_0022C7D0(s32, f32, s32);
extern void func_0022C060(s32, f32);
extern void func_00228430(s32);
extern void func_00228410(void);
extern void func_002543B0(u8 *);
extern void func_0022ACF0(s32);
extern s32 func_0020B020(s32, s32, s32);
extern s32 func_0020AD30(s32, s32, s32);
extern s32 func_0020AE80(s32, s16, s16);
extern void func_00208D60();
extern void func_00209D20(s32);
extern void func_00208D70(s32);
extern void func_00209C50(void);
extern void amHeap_Free(void *);
extern void amFile_Load(s32);
extern s32 func_001A50F0(s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *);
extern u8 *gBtlSys;
extern void func_001F9BB0(s32, s32);
extern void BtbObj_FreeFlag400(s32, s32);
extern void BtbBg_CreatePlanet(s32);
extern void BtbBg_SetF9E(s32);
extern void BtbBg_ClearFlag40(s32, s32);
extern void BtbBg_SetFlag40(s32, s32);
extern void BtbBg_ClearFlag1(s32, s32);
extern void BtbBg_SetFlag1(s32, s32);
extern void func_00125740(void *, void *, s32);
extern void func_001F7470(s32);
extern void func_001F7490(s32);
extern void func_001F7720(s32);
extern void func_001F7990(s32);
extern void func_001F7C80(s32);
extern s32 Input_IsHeld(s32);
extern void amModel_SetCurrent(s32, s32);
extern void amDraw_SetPacketMode(s32);
extern void amDraw_KickPending(void);
extern void func_0022C560(s32);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern u32 func_0012EAE0(s32);
extern void func_00146F30(s32 *);
extern void func_00249100(s32 *, s32, s32, s32, f32);
extern void func_0013B160(void *);
extern void func_00142100(s32 *, s32);
extern u8 D_003F0800[];
extern void func_0020D400(s32, s32, s32);
typedef struct SkillObj
{
  f32 unk00;
  s16 unk04;
  Fighter *unk08;
  u8 unk0C[0x54 - 0x0C];
  void *unk54;
  void *unk58;
  f32 unk5C;
} SkillObj;
extern void func_00208F70(void *);
extern void func_00209390(void *);
extern void func_00249D50(SkillObj *, s32);
extern s8 D_004703F4;
s32 func_001E2630(s32, void *);
extern void func_002499A0(s32 *, s32, s32, s32, f32);
extern s32 func_00209540(s32, s32, s32);
extern void func_00209B50(s32, s32, s32);
extern void func_001D9C40(s32, s32, s32);
extern void func_00146F10(s32 *, s32 *, f32);
extern void func_00146F60(f32 *, s32 *);
extern void func_00141C30(f32 *, f32 *, f32 *);
extern void func_00209850(s32, f32 *);
extern s32 amMotion_FindBone(s32, s32);
extern u8 D_0046ADE8[];
extern void func_00209950(s32, void *, s32);
extern s32 D_00450250[];
extern void func_001F9B60(s32, s32, s32);
extern void func_001F3FE0(s32, s32, s32, s32, f32);
typedef struct SkillVec
{
  s32 a;
  s32 b;
  s32 c;
  s32 d;
} SkillVec;
extern void func_001F9CD0(s32, s32, s32, s32, s32);
extern s32 D_0051CD0C[];
extern void func_001F5B70(s32 *);
extern void BtbObj_ApplyMotSet(s32 *);
extern void func_001F5BE0(s32 *);
extern void BtbBg_StartCrossFade(s32, s32, s32, f32, f32);
extern s32 D_0051CD00[];
extern void BtbBg_RunFunc(void);
extern void func_001F6140(void);
extern void amVram_Apply(s32);
extern void func_001F7FA0(void);
extern void func_0022C6B0(s32 *);
extern s32 func_00253690(u8 *, s32, u8 *);
extern char D_0046AE28[];
extern s32 D_00452680[];
extern s32 D_00452684[];
extern void func_0022C430(s32, f32);
extern s32 D_0058D4F4[];
extern void func_0022D0E0(s32, s32);
extern s32 func_0022D860(s32, f32);
extern void func_002559B0();
extern void Skill_DrawHeldSetB();
extern s32 amGs_SetReg32(s32, s32);
extern void func_002569E0(s32 *);
extern s32 D_0058D4F0[];
extern s32 D_0058D4EC[];
extern s32 D_0058D4E8[];
extern void func_0022BFF0(s32, f32);
typedef struct BtlTmp12
{
  u64 a;
  f32 b;
} BtlTmp12;
extern s32 amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern u8 D_0046AE80[];
extern u8 D_0046AE90[];
extern u8 D_0058D4E0[];
extern s32 D_0047074C;
extern s32 D_00470748;
extern void func_0022CFC0(s32, s32, s32, s32);
inline f32 SkillObj_Scale(void);
void SkillKill_Kind14(s32 *a0);
void func_0024A680(s32 *a0);
void SkillKill_Kind13(s32 *p);
void func_0024A8F0(u8 *a0);
void SkillKill_Kind12(s32 *p);
void func_0024B660(void);
s32 func_0024B670(void);
void SkillKill_Kind11(void);
void func_0024B690(void);
void func_0024B6A0(u8 *ob);
void SkillKill_Kind10(s32 *a0);
void func_0024BE30(u8 *ob);
void SkillKill_Kind09(s32 *p);
void func_0024C4E0(u8 *ob);
void SkillKill_Kind08(s32 *p);
void func_0024C950(u8 *ob);
void func_0024CB00(SkillObj *ob);
void func_0024CC60(u8 *ob);
void SkillKill_Kind07(s32 *p);
void SkillKill_Kind06(s32 *p);
void func_0024E440(s32 *a0);
void SkillKill_Kind05(s32 *p);
void func_0024E7B0(s32 a0);
void SkillKill_Kind04(s32 *p);
void func_0024EFA0(s32 a0);
void func_0024F150(s32 *a0);
void SkillKill_Kind03(s32 *p);
void func_0024F520(s32 a0);
void SkillKill_Kind02(s32 *p);
void func_0024FB20(u8 *a0);
void func_0024FC50(u8 *ob);
void SkillKill_Kind01(s32 *p);
void SkillKill_Kind00(s32 *p);
void func_002523B0(s32 *a0);
void func_002528E0(s32 a0, s32 a1);
void func_00252B00(void);
void func_00252B10(void);
void func_00252B20(void);
void func_00252B60(void);
void func_00252C20(s32 a0, s32 a1);
s32 Scr_CmdCall248350(s32 a0, s32 *a1);
s32 Scr_CmdCall2CF070(s32 a0, s32 a1);
s32 Scr_CmdFighterCall1F9B60(s32 a0, s32 *a1);
s32 Scr_CmdMotionBoneCall1F3FE0(s32 a0, s32 *a1);
s32 Scr_CmdCall1F9BB0(s32 a0, s32 a1);
s32 func_00252E20(s32 a0, s32 *a1);
s32 Scr_CmdObjFreeFlag400(s32 a0, s32 a1);
s32 Scr_CmdBtbBgCreatePlanet(s32 a0, s32 *a1);
s32 Scr_CmdObjCall1F5B10(s32 a0, s32 *a1);
s32 func_00252F30(s32 a0, s32 *a1);
s32 Scr_CmdObjSetApplyMotSet(s32 a0, s32 *a1);
s32 Scr_CmdObjSetFloatCall1F5BE0(s32 a0, s32 *a1);
s32 Scr_CmdObjRemoveByIdx(s32 a0, s32 *a1);
s32 Scr_CmdSwitchCall1F7470(s32 a0, s32 *a1);
s32 Scr_CmdBtbBgCrossFade(s32 *a0, s32 *a1);
s32 SkillCmd_BgSetF9E(s32 a0, s32 *a1);
s32 Scr_CmdGetBtbBgIdle(s32 a0, s32 *a1);
s32 Scr_CmdGetBtbBgFlip(s32 a0, s32 *a1);
s32 SkillCmd_BgClearFlag40(s32 a0, s32 a1);
s32 SkillCmd_BgSetFlag40(s32 a0, s32 a1);
s32 SkillCmd_BgClearFlag1(s32 a0, s32 a1);
s32 SkillCmd_BgSetFlag1(s32 a0, s32 a1);
s32 Scr_CmdBtbBgFlip(s32 a0, s32 *a1);
f32 func_00253320(s32 *a0, u8 *a1, f32 x, f32 y);
void func_00253490(u8 *a0);
f32 func_00253570(s32 a0);
void func_002535B0(s32 a0, void *a1);
s8 func_002535D0(s32 a0);
s32 func_00253600(u8 *arg0, s32 arg1);
s32 func_002537E0(s32 a0, s32 a1);
void func_002538E0(s32 *a0, u8 *a1);
f32 func_00253FC0(u8 *a0, u8 *o);
inline void SkillFile_Release(u8 *h);
void func_00254100(u8 *a0);
void func_002541D0(s32 *a0);
void *SkillFile_Load(s32 a0);
void func_002544A0(f32 *a0, s32 a1);
void func_002545E0(s32 *a0);
void Skill_DrawHeldSet(s32 *a0);
inline s32 SkillState(s32 v);
void func_002547A0(u8 *a0);
void func_00254AC0(s32 *a0);
void func_00254B50(s32 *a0);
void func_00254CD0(u8 *a0);
void func_00256BF0(s32 *a0);
void func_00256D50(s32 *a0);
void func_00256EB0(u8 *a0);
void func_00256F80(s32 *a0);
void func_00257BC0(s32 *a0);
void Skill_DrawHeldPart(u8 *a0);
void Skill_DrawHeldPartB(u8 *a0);
void func_00257DA0(s32 *a0);
void func_00257E30(s32 *a0);
void func_00257FB0(u8 *a0);
void func_00258AC0(s32 *a0);
void func_00258C20(s32 *a0);
void func_00258D40(s32 *a0, s32 a1);
void func_00258E80(u8 *a0);
void LeverDraw_TaskMain(s32 *a0);
void func_002599C0(u8 *a0);
void CutIn_TaskKill(s32 *a0);
void CutIn_TaskMain(s32 *a0);
s32 func_00259EB0(s32 a0, f32 f12);
void func_00259FE0(void);
void func_0025A0E0(void);
s32 func_0024A760(u8 *arg0)
{
  f32 temp_f1;
  f32 var_f2;
  f32 var_f2_2;
  u8 *new_var;
  u8 *temp_a0;
  u8 *temp_a1;
  temp_a1 = *((u8 **) (((u8 *) arg0) + 0xC));
  if (gBattle != ((void *) 0))
  {
    var_f2 = *((f32 *) (((u8 *) gBattle) + 0x88F0));
  }
  else
    if (D_004703F4 != 3)
  {
    var_f2 = 1.0f;
  }
  else
  {
    var_f2 = 1.2f;
  }
  *((f32 *) ((new_var = (u8 *) arg0) + 0x4C)) = (f32) ((*((f32 *) (new_var + 0x4C))) + ((*((f32 *) (((u8 *) temp_a1) + 0xD0))) * var_f2));
  if (gBattle != ((void *) 0))
  {
    var_f2_2 = *((f32 *) (((u8 *) gBattle) + 0x88F0));
  }
  else
    if (D_004703F4 != 3)
  {
    var_f2_2 = 1.0f;
  }
  else
  {
    var_f2_2 = 1.2f;
  }
  temp_f1 = (*((f32 *) (new_var + 0x50))) + var_f2_2;
  *((f32 *) (new_var + 0x50)) = temp_f1;
  if ((!(temp_f1 <= 32.0f)) && ((*((s16 *) (new_var + 4))) & 0x800))
  {
    func_001E2630(*((s32 *) (new_var + 8)), temp_a1);
    *((s16 *) (new_var + 4)) = (s16) ((*((s16 *) (new_var + 4))) & (~0x800));
  }
  temp_a0 = *((u8 **) (new_var + 0x44));
  if (temp_a0 != ((void *) 0))
  {
    func_00208F70(temp_a0);
    if ((*((s32 *) (((u8 *) (*((u8 **) (new_var + 0x44)))) + 0x38))) < 0)
    {
      *((u8 **) (new_var + 0x44)) = (void *) 0;
      return 1;
    }
  }
  return 0;
}
