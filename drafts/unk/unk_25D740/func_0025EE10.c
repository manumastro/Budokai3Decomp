/* Draft (not built): func_0025EE10 at 0x0025EE10, size 0xCC, segment unk/unk_25D740 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 9 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xD4, original 0xCC; then decomp-permuter: score 475 -> 330
 * Original: asm/nonmatchings/unk/unk_25D740/func_0025EE10.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef union ScrArg
{
  s32 i;
  f32 f;
  void *p;
} ScrArg;
typedef struct ScrCmd
{
  s32 f0;
  char pad4[0x28];
  ScrArg *args;
  char pad30[0x10];
  f32 f40;
} ScrCmd;
typedef struct ScrState
{
  char pad0[0x916];
  s16 f916;
  char pad918[2];
  s16 f91A;
} ScrState;
typedef struct ScrObj
{
  f32 f0;
  f32 f4;
  f32 f8;
  char padC[4];
  f32 f10;
  f32 f14;
  f32 f18;
} ScrObj;
typedef struct ScrChara
{
  char pad0[0x1350];
  s32 f1350;
} ScrChara;
typedef struct ScrEntry
{
  char pad0[0x94];
  s32 f94;
} ScrEntry;
typedef struct ScrTask
{
  char pad0[0x30];
  s32 f30;
} ScrTask;
typedef struct ScrBig
{
  char pad0[0x6C];
  void *f6C;
  char pad70[0x20];
  s16 f90;
  char pad92[8];
  s16 f9A;
  s16 f9C;
  char pad9E[8];
  s16 fA6;
  s16 fA8;
  char padAA[6];
} ScrBig;
typedef struct ScrVec
{
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} ScrVec;
extern ScrState *D_0046FE4C;
extern s32 D_0058EE50[];
extern s32 D_0058EE90[];
extern s32 D_0058EED0[];
extern s32 D_0058EF10[];
extern void memset(void *, s32, s32);
extern void Obj_ResetF38(s32);
extern s32 D_0047079C;
typedef struct ScrProg
{
  char pad0[0xC];
  s32 fC;
} ScrProg;
typedef struct ScrCtx
{
  ScrProg *f0;
  char pad4[0xC];
  void *f10;
  void *f14;
  char pad18[0x10];
  s8 f28;
  char pad29;
  s8 f2A;
  s8 f2B;
} ScrCtx;
typedef struct ScrEffect
{
  char pad0[0x30];
  f32 f30;
  f32 f34;
  f32 f38;
  char pad3C[0x2118 - 0x3C];
  f32 f2118;
  f32 f211C;
  char pad2120[0x10];
  f32 f2130;
  char pad2134[0xC];
} ScrEffect;
typedef struct ScrWork
{
  char pad0[0x88EC];
  s32 f88EC;
  f32 f88F0;
  char pad88F4[0x8934 - 0x88F4];
  void *f8934[1];
} ScrWork;
typedef struct ScrSound
{
  char pad0[0x38];
  s32 f38;
} ScrSound;
extern ScrWork *gBattle;
extern void func_0020F040(s32, s32);
typedef struct ScrFade
{
  s32 id;
  f32 cur;
  f32 end;
} ScrFade;
typedef struct ScrFadeTask
{
  char pad0[0x30];
  ScrFade fade;
} ScrFadeTask;
extern s8 D_004703F4;
extern void func_0020DDD0(s32, ScrEffect *);
extern void func_0020DE30(void);
extern void func_0020DE40(s32);
typedef struct TimedEE10
{
  char pad0[0x10];
  s32 f10;
  char pad14[0x16];
  s8 f2A;
  char pad2B;
  f32 f2C;
  f32 f30;
} TimedEE10;
extern void amTask_Kill(ScrTask *);
typedef struct CountRec25
{
  char pad0[0xC];
  s32 fC;
} CountRec25;
typedef struct ObjF28
{
  CountRec25 *f0;
  char pad4[0xC];
  void *f10;
  char pad14[0x14];
  s8 f28;
} ObjF28;
typedef struct TimedF0C0
{
  char pad0[0x10];
  void *f10;
  char pad14[0x16];
  s8 f2A;
  s8 f2B;
} TimedF0C0;
extern char D_0046B080[];
extern char D_0046B060[];
extern char D_0046B120[];
typedef struct Obj30
{
  s32 f0;
  f32 f4;
  f32 f8;
  f32 fC;
  s32 f10;
  s32 f14;
  s32 f18;
} Obj30;
extern void func_0025E5A0(void *);
typedef struct ScrPos30
{
  s32 f0;
  f32 f4;
  f32 f8;
} ScrPos30;
extern void func_0025D740(void *);
extern ScrTask *amTask_Create(void *, s32, s32, s32, s32, char *);
void Bscr_GetRenderTexture(ScrTask *);
extern void func_0020E070(s32, ScrVec *);
extern void func_0020E120(s32, s32);
extern void func_0020E210(s32, s32);
extern void func_0020E290(s32, ScrVec *, s32);
extern void func_0020E530(s32, ScrVec *, s32);
extern void func_0020E620(s32, ScrVec *, s32);
extern void func_0020E7D0(s32, void *, s32);
extern void func_0020E8F0(s32, void *, s32);
extern void func_0020EB70(s32, ScrVec *);
extern char D_0046B100[];
extern void func_0020EBF0(s32);
extern void func_0020EC70(s32);
extern void func_0020EDA0(s32);
extern void func_00245A80(void *, s32);
extern void func_002529B0(s32, void *, ScrVec *);
extern void func_00248910(s32, void *);
extern s32 func_0020EE10(s32, s32);
extern s32 func_0020EF80(s32, s32);
extern void func_0020F090(s32, s32, s32);
extern void func_0020F0E0(s32, s32);
extern void func_0020F130(s32, s32);
extern void func_0020F180(s32, s32);
extern void func_0020F1D0(s32, f32);
extern void func_0020F200(s32, f32);
extern void func_0020F230(s32, f32);
extern void func_0020F260(s32, f32);
extern void func_0020F290(s32, s32);
extern void func_0020F300(s32, s32);
extern void func_0020F3B0(s32, f32);
extern void func_0020F3E0(s32, f32);
extern void func_0020F410(s32, f32);
extern void func_0020F440(s32, f32);
extern void func_0020F470(s32, f32, f32, f32);
extern void func_0020F4A0(s32, f32, f32);
extern void func_00245BE0(void *);
extern s32 func_00245C50(void *);
extern void func_00245BF0(void *);
extern void func_00245C00(void *);
extern void func_00245CC0(void *, s32);
extern void func_00245D30(void *, s32);
extern void func_0020F4D0(ScrBig *);
extern void func_0020F5A0(ScrBig *);
extern ScrEntry *func_0020F6D0(s32);
extern s32 func_0020B020(s32, s32, s32);
extern s32 func_0020AD30(s32, s32, s32);
typedef struct Slot16
{
  f32 f0;
  f32 f4;
  f32 f8;
  f32 fC;
} Slot16;
typedef struct PlyPart
{
  char pad0[0x1350];
  s32 f1350;
} PlyPart;
extern s32 func_0020AE80(s32, s32, s32);
extern void func_00215990(s32);
extern void func_0020F700(s32);
extern void func_0020F870(s32);
extern ScrObj *func_0020A720(s32);
extern s32 func_0020A5F0(s32);
extern void func_0020A4D0(s32);
extern s32 func_0020A780(s32);
extern void func_0020A740(s32);
extern void func_0020A7F0(s32);
extern void func_00209A90(s32, ScrVec *);
extern void func_00209B50(s32, ScrVec *, s32);
extern void func_00208F70(ScrSound *);
extern s32 func_002096D0(s32, s32, s32);
extern void func_00209450(s32, s32);
extern s32 func_00209540(s32, s32, s32);
extern void func_0020EA70(s32);
extern char D_0046B0E0[];
void func_0025E1A0(ScrFadeTask *);
extern void func_0020F370(s32, f32, f32, f32, f32);
extern char D_0046B140[];
extern char D_0046B160[];
typedef struct Tk30
{
  s32 f0;
  f32 f4;
  f32 f8;
} Tk30;
extern void func_0025DCA0();
extern void func_0025DF20();
extern void func_00246800(s32, f32, f32);
extern void func_0025EB60();
extern void func_00246AB0(s32, void *);
typedef struct Obj4B0
{
  char pad0[0x10];
  void *f10;
  char pad14[0x16];
  s8 f2A;
  char pad2B;
  f32 f2C;
  f32 f30;
} Obj4B0;
extern void func_0020EFB0(s32);
typedef struct Obj25F
{
  char pad0[0x10];
  s32 f10;
  char pad14[0x16];
  s8 f2A;
  char pad2B;
  f32 f2C;
  f32 f30;
} Obj25F;
typedef struct ScrOb98
{
  char pad0[0x98];
  s32 f98;
  char pad9C[0x20E8 - 0x9C];
  s32 f20E8;
} ScrOb98;
typedef struct Blk2604
{
  s32 f0;
  s32 f4;
  f32 f8;
  f32 fC;
  f32 f10;
  f32 f14;
  f32 f18;
  s32 f1C;
  f32 f20;
  f32 f24;
  f32 f28;
  s32 f2C;
  f32 f30;
  f32 f34;
  f32 f38;
  f32 f3C;
  char pad40[0x10];
} Blk2604;
extern void func_0020AA20(s32, Blk2604 *);
extern void func_001414D0(void *, f32, f32, f32);
extern void func_00209850(s32, void *);
extern void func_00209950(s32, void *, s32);
extern s32 D_00470238;
extern void func_00209D20(s32);
extern void amModel_SetCurrent();
extern void func_00208D60(s32);
extern void func_00208D70(s32);
extern void func_00209C50(void);
inline s32 Scr_IsPaused(void);
inline f32 Scr_GetSpeed(void);
s32 Bscr_CmdDrawPhotoPrio(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdEffectSpawn(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdFlushFlag916(ScrCtx *ctx, ScrCmd *cmd);
s32 Bscr_CmdGetRenderTexture(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdGetVecZ(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdGetVecY(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdGetVecX(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20E120(ScrCtx *ctx, ScrCmd *cmd);
s32 func_0025DB70(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjVecCall4C(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjVecCall4B(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjVecCall4(ScrCtx *ctx, ScrCmd *cmd);
s32 func_0025DDD0(void *o, ScrCmd *cmd);
s32 Scr_CmdCall20E7D0(ScrCtx *ctx, ScrCmd *cmd);
s32 func_0025E050(void *o, ScrCmd *cmd);
s32 Scr_CmdCall20E8F0(ScrCtx *ctx, ScrCmd *cmd);
s32 Bscr_CmdSetObjCamPos(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjVec3Call(ScrCtx *ctx, ScrCmd *cmd);
void Bscr_DrawMotionPrio(ScrFadeTask *task);
s32 Bscr_CmdDrawMotionPrio(ScrCtx *ctx, ScrCmd *cmd);
s32 func_0025E530(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCtxWaitF14C(ScrCtx *ctx, ScrCmd *cmd);
s32 Bscr_CmdEffectLinePrio(ScrCtx *ctx, ScrCmd *cmd);
void Bscr_DrawEffectPrio(ScrFadeTask *task);
s32 Bscr_CmdDrawEffectPrio(ScrCtx *ctx, ScrCmd *cmd);
s32 func_0025E8F0(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCtxWaitF14B(ScrCtx *ctx, ScrCmd *cmd);
void Bscr_DrawObjectPrio(ScrFadeTask *task);
s32 Bscr_CmdDrawObjectPrio(ScrCtx *ctx, ScrCmd *cmd);
s32 func_0025EAF0(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCtxWaitF14(ScrCtx *ctx, ScrCmd *cmd);
s32 func_0025EC60(void *o, ScrCmd *cmd);
s32 Scr_CmdObjCall245A80(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjVecCall(ScrCtx *ctx, ScrCmd *cmd);
s32 func_0025EEE0(TimedEE10 *o, ScrCmd *cmd);
s32 func_0025F050(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdTimedSet0C0B(TimedF0C0 *o, ScrCmd *cmd);
s32 func_0025F160(Obj4B0 *o);
s32 func_0025F230(Obj4B0 *o, ScrCmd *cmd);
s32 func_0025F3A0(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdTimedSet0C0(TimedF0C0 *o, ScrCmd *cmd);
s32 func_0025F4B0(Obj4B0 *o);
s32 func_0025F580(void *o, ScrCmd *cmd);
s32 Scr_CmdSetFlag916Mode(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F040(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F090(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F0E0(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F130(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F180(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F1D0(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F200(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F230(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F260(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F290(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F300(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F3B0(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F3E0(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F410(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F440(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F470(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F4A0(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjCall245BE0(ScrCtx *ctx, ScrCmd *cmd);
s32 func_0025FA60(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjWaitCheck(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjCall245BF0(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjCall245C00(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjGet245C50(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjCall245CC0(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjCall245D30(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjBigCall2(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjBigCall(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdPlyPartSet(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjSetCall(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall215990(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F700(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20F870(ScrCtx *ctx, ScrCmd *cmd);
s32 func_002600B0(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjSetF8F18(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjFloat4(ScrCtx *ctx, ScrCmd *cmd);
s32 func_00260210(ScrCtx *ctx, ScrCmd *cmd);
s32 func_00260320(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCtxWaitF14D(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdCall20A7F0(ScrCtx *ctx, ScrCmd *cmd);
s32 func_00260410(void *o, ScrCmd *cmd);
s32 func_002604F0(void *o, ScrCmd *cmd);
s32 func_002605C0(ScrCtx *ctx, ScrCmd *cmd);
s32 func_00260690(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdObjSetPos(ScrCtx *ctx, ScrCmd *cmd);
s32 func_002607F0(ScrCtx *ctx, ScrCmd *cmd);
s32 func_00260870(void *o, ScrCmd *cmd);
s32 Scr_CmdSoundStop(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdSoundSlotRelease(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdSoundCreate(ScrCtx *ctx, ScrCmd *cmd);
s32 func_00260AC0(ScrCtx *ctx, ScrCmd *cmd);
s32 func_00260AE0(ScrCtx *ctx, ScrCmd *cmd);
s32 Scr_CmdSoundReset(ScrCtx *ctx, ScrCmd *cmd);
void SoundSlot_SetParams(s32 a, s32 b, s32 c, s32 i);
void SoundSlot_Create(s32 a, s32 i, s32 b);
void SoundSlot_ClearAll(void);
s32 func_0025EE10(u8 *arg0)
{
  unsigned short new_var;
  f32 temp_f1;
  f32 var_f1;
  s32 var_v0;
  var_v0 = 0;
  if (gBattle != ((void *) 0))
  {
    var_v0 = *((s32 *) (((u8 *) gBattle) + 0x88EC));
  }
  if (var_v0 == 0)
  {
    if ((*((f32 *) (((u8 *) arg0) + 0x30))) != (-1.0f))
    {
      if (gBattle != ((void *) 0))
      {
        var_f1 = *((f32 *) (((u8 *) gBattle) + 0x88F0));
      }
      else
        if ((new_var = D_004703F4) != 3)
      {
        var_f1 = 1.0f;
      }
      else
      {
        var_f1 = 1.2f;
      }
      temp_f1 = (*((f32 *) (((u8 *) arg0) + 0x2C))) + var_f1;
      *((f32 *) (((u8 *) arg0) + 0x2C)) = temp_f1;
      if (!(temp_f1 < (*((f32 *) (((u8 *) arg0) + 0x30)))))
      {
        *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
        return 1;
      }
      goto block_11;
    }
    block_11:
    func_0020EE10(*((s8 *) (((u8 *) arg0) + 0x2A)), 1);

    goto block_12;
  }
  block_12:
  return 3;

}
