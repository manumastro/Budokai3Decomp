/* Draft (not built): func_001CE560 at 0x001CE560, size 0x48, segment unk/unk_1CBD90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 9 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x64, original 0x48; then decomp-permuter: score 1390 -> 600
 * Original: asm/nonmatchings/unk/unk_1CBD90/func_001CE560.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct Big
{
  char pad[0x8934];
  void *tbl[2];
} Big;
extern Big *gBattle;
typedef struct Arg
{
  char pad[0x2c];
  int *p;
} Arg;
typedef struct Side
{
  char pad0[0xB88];
  int **blk;
  short *idx;
  char pad1[0xCC3 - 0xB90];
  signed char m;
  signed char n;
  char pad2[0x1354 - 0xCC5];
  struct Side *other;
  char pad3[0x201E - 0x1358];
  signed char out;
} Side;
extern f32 func_00200270(f32, s32, f32);
extern s32 BtlChara_GetF270C(s32);
extern void *func_001F9A20(void);
extern void func_001C8480(void *, int);
extern void func_001C7D90(void *, int, void *);
extern int AdxSlot_IsPlaying(void *);
extern void func_00219270(signed char);
extern signed char func_00218B60(short, int);
extern void func_00218C40(void *, int, int, int, float, float);
extern void AdxSlot_SetVolume(void *, float);
extern void AdxSlot_Stop(void *);
extern void AdxSlot_Pause(void *);
extern void func_001D9CA0(void *, int);
extern void func_001E57F0(int);
extern void func_001A8770(int, void *);
extern void func_001E18B0(void *, int);
extern void func_001E1A40(void *, int);
extern void func_001E1BD0(void *, int, int);
extern void func_001E3550();
extern void func_001E4FA0(void *, int);
extern void func_001E4820(void *, f32, int);
extern s32 func_001C8A50(void *, int, int, int, int);
extern void func_001C89A0(void *, int);
extern s32 amMotion_FindBone(s32, s32);
extern s32 D_004B4230[];
extern f32 D_004B4234[];
extern f32 D_004B4220[];
extern f32 D_004B4224[];
extern f32 D_004B4228[];
extern f32 D_004B422C[];
extern void func_001DD680(void *, int);
extern void func_00237000(int, void *);
extern void func_001DFC80(void *, int, f32);
extern void func_001D7CC0(void *, int);
extern void func_001DFBF0(void *);
extern void func_001E1460(void *, int);
extern s32 func_001E0200(void *, s32, s32);
extern void func_001E4DA0(void *);
extern u8 D_004E0660[];
extern void func_001E6F70(void *);
extern void func_001E2180(void *, s32);
extern void func_0029D8B0(int, int);
extern void Fighter_CreateHitEffect(void *, int);
extern f32 D_004B421C[];
extern s32 gBtbBg[];
extern s32 D_0051CD20[];
extern char D_00469260[];
extern void func_001E73C0(void *);
extern void func_001D80A0(void *, int);
extern void memset(void *, s32, s32);
extern void func_001E57C0(s32, s32, void *);
extern void func_002CBFF0(s32, void *);
extern void func_001C75D0(void *, int);
extern void func_002194C0(void *, s32, s32, s32);
extern void func_001C81D0(void *, int);
extern void func_001C8210(void *, int);
extern void func_001C8860(void *, int);
extern s32 func_001E1690(void *);
extern s32 func_001DFA90(void *, int);
extern void func_001DFE60(void *, int, f32);
extern s32 func_001C8780(void *, int);
extern f32 D_004B4218[];
extern f32 D_004B4214[];
extern f32 D_004B4210[];
extern f32 D_004B423C[];
extern f32 D_004B4238[];
typedef struct KKey
{
  u16 t;
  char pad[1];
  s8 flag;
  f32 val;
  char pad2[8];
} KKey;
typedef struct KList
{
  char pad[2];
  s16 n;
  KKey *keys;
} KList;
typedef struct KDst
{
  char pad0[0x180];
  void *slot[8];
  void *head;
  char pad1[4];
  s8 n;
  s8 c[5];
  s8 v[3];
  char padx[3];
  f32 a;
  f32 b;
  f32 cur;
  void *anim;
  s16 flags;
  s16 flags2;
  s16 h1C8;
  char pad2[0x1D8 - 0x1CA];
  s16 h1D8;
  char pad3[2];
  s16 h1DC;
  char pad4[0x1EC - 0x1DE];
  s16 h1EC;
  char pad5[0x1FC - 0x1EE];
  s16 h1FC;
  char pad6[0x20C - 0x1FE];
  s32 w20C;
  char pad7[0x22C - 0x210];
  s16 h22C;
  char pad8[0x23C - 0x22E];
  s16 h23C;
  char pad9[2];
  s16 h240;
  char padA[2];
  s32 w244;
} KDst;
extern KDst *D_00470588;
typedef struct KKey2
{
  u16 t;
  char pad[2];
  u16 s4;
  char pad2[2];
  u32 w8;
  char pad3[4];
} KKey2;
typedef struct KList2
{
  char pad[2];
  s16 n;
  KKey2 *keys;
} KList2;
typedef struct KKey3
{
  u16 t;
  char pad[2];
  s32 d[2];
  char pad3[4];
} KKey3;
typedef struct KList3
{
  char pad[2];
  s16 n;
  KKey3 *keys;
} KList3;
typedef struct KKey4
{
  u16 t;
  s8 id;
  s8 flag;
  char pad[4];
  u16 fl;
  char pad2[6];
} KKey4;
typedef struct KList4
{
  char pad[2];
  s16 n;
  KKey4 *keys;
} KList4;
extern void func_001D0860();
extern void func_001D0730();
extern void amTask_Kill(void *);
extern void Character_PauseVoice(s32 *);
extern void func_001CB020(void *);
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern char D_004692B0[];
extern void func_001CAFE0(void *);
extern void func_001CB010(void *);
extern s32 BtlChara_GetF2710(s32);
typedef struct ABuf
{
  f32 f0;
  f32 f1;
  f32 f2;
  f32 one0;
  f32 f4;
  f32 f5;
  f32 f6;
  f32 one1;
  s32 k;
  s32 v;
  s32 a;
  s32 b;
  s32 m;
  char pad[0xC];
  f32 g0;
  char pad2[4];
  f32 g1;
  char pad3[4];
} ABuf;
typedef struct TMast
{
  char pad[0x10];
  u32 prio;
  u32 g1;
  u32 g2;
} TMast;
extern void amTask_KillGroup(s32, s32, s32);
extern void func_001CAC10(void *);
extern char D_004692D0[];
extern s32 func_001DF8F0(s32 a, s32 b);
extern void func_001E2190(void *, s32);
extern void func_001E7070(void *, s32);
extern void func_001E8290(void *);
extern void func_001E5040(void *);
extern void func_001CAFB0(void *);
extern void func_001C75D0(void *, s32);
extern void func_00146ED0(void *, void *, f32);
typedef struct CItem
{
  u16 id;
  char pad[6];
  u16 flags;
  char pad2[6];
} CItem;
typedef struct CEnt
{
  u16 kind;
  s16 cnt;
  CItem *items;
} CEnt;
typedef struct CArg
{
  char pad[0x28];
  s32 n;
  CEnt *ents;
} CArg;
typedef struct CObj
{
  char pad[0x248];
  s32 v;
} CObj;
typedef struct LItem
{
  char pad0[2];
  s8 id;
  char pad1[5];
  u16 flags;
  u16 kind;
} LItem;
typedef struct LNode
{
  char pad[0x20];
  LItem *item;
  s32 live;
  struct LNode *prev;
  struct LNode *next;
} LNode;
typedef struct LObj
{
  char pad[0x180];
  LNode *slots[8];
  LNode *head;
  char pad1[4];
  s8 n;
  s8 c[5];
} LObj;
extern void *D_004692E0[];
int func_001CBDF0(void *unused, Arg *a);
int func_001CBEE0(void *unused, Arg *a);
int AdxCmd_WaitStop(void *unused, Arg *a);
int AdxCmd_IsPlaying(void *unused, Arg *a);
int Scr_CmdClearSlot(void *unused, Arg *a);
int Scr_CmdReleaseSlotIdx(void *unused, Arg *a);
int Scr_CmdSetSlotVec(void *unused, Arg *a);
int AdxCmd_SetVolume(void *unused, Arg *a);
int Scr_CmdGetSlotF(void *unused, Arg *a);
int AdxCmd_Stop(void *unused, Arg *a);
int AdxCmd_Pause(void *unused, Arg *a);
int func_001CC1B0(void *unused, Arg *a);
int Scr_CmdFighterCountSet(void *unused, Arg *a);
int func_001CC300(void *unused, Arg *a);
int func_001CC4B0(void *unused, Arg *a);
int Scr_CmdSlotBufCopy3(void *unused, Arg *a);
int Scr_CmdSlotBufCopy2(void *unused, Arg *a);
int Scr_CmdPlayThread(void *o, Arg *a);
int Scr_CmdFighterReset(void *unused, Arg *a);
int Scr_CmdSlotBufCopy(void *unused, Arg *a);
int Scr_CmdFloatBuf12(void *unused, Arg *a);
int func_001CCBF0(void *unused, Arg *a);
int Scr_CmdFlagE57F0(void *unused, Arg *a);
int Scr_CmdGetCurF18(void *unused, Arg *a);
int Scr_CmdGetCurF14(void *unused, Arg *a);
int Scr_CmdGetCurF10(void *unused, Arg *a);
int Scr_CmdGetCurF08(void *unused, Arg *a);
int Scr_CmdGetCurF04(void *unused, Arg *a);
int Scr_CmdGetCurF00(void *unused, Arg *a);
int Scr_CmdSetF218(void *unused, Arg *a);
int Scr_CmdCallA8770(void *unused, Arg *a);
int Scr_CmdFloatBuf6(void *unused, Arg *a);
int Scr_CmdSetF214(void *unused, Arg *a);
int Scr_CmdSetF210(void *unused, Arg *a);
int Scr_CmdSetF210To21C(void *unused, Arg *a);
int func_001CD050(void *unused, Arg *a);
int Scr_CmdCallBuf20(void *unused, Arg *a);
int Scr_CmdCreateHitEffect(void *unused, Arg *a);
int Scr_CmdGetStageByte(void *unused, Arg *a);
int func_001CD340(void *o, Arg *a);
int Scr_CmdFindBone(void *unused, Arg *a);
int Scr_CmdFighterE18B0(void *unused, Arg *a);
int Scr_CmdFighterSetFlag2016(void *unused, Arg *a);
int Scr_CmdFighterE1A40(void *unused, Arg *a);
int Scr_CmdFighterE1BD0(void *unused, Arg *a);
int Scr_CmdPairCall237000(void *unused, Arg *a);
int Scr_CmdFighterGetByte2013(void *unused, Arg *a);
int Scr_CmdFighterClear17E4(void *unused, Arg *a);
int Scr_CmdFighterGetAngle17A4(void *unused, Arg *a);
int Scr_CmdFighterE1460(void *unused, Arg *a);
int Scr_CmdFighterDD680(void *unused, Arg *a);
int Scr_CmdFighterIsNone1FF8(void *unused, Arg *a);
int Scr_CmdGetFighterDFA90(void *unused, Arg *a);
int Scr_CmdFighterGetShort1CF4(void *unused, Arg *a);
int Scr_CmdEntryGetInt0BA0(void *unused, Arg *a);
int Scr_CmdEntryGetInt0BA4(void *unused, Arg *a);
int Scr_CmdFighterGetInt1CFC(void *unused, Arg *a);
int Scr_CmdEntryGetInt0B9C(void *unused, Arg *a);
int Scr_CmdFighterGetF17D4(void *unused, Arg *a);
int Scr_CmdFighterGetSelF17D(void *unused, Arg *a);
int Scr_CmdFighterGetF17C4(void *unused, Arg *a);
int Scr_CmdFighterGetF17C0(void *unused, Arg *a);
int Scr_CmdFighterGetInt0B70(void *unused, Arg *a);
int Scr_CmdFighterDistance(void *unused, Arg *a);
int Scr_CmdFighterGetByte1FF9(void *unused, Arg *a);
int Scr_CmdEntryGetF0CB8(void *unused, Arg *a);
int Scr_CmdGetFighterF124(void *unused, Arg *a);
int Scr_CmdGetBattleF8968(void *unused, Arg *a);
int Scr_CmdGetBattleF8964(void *unused, Arg *a);
int Scr_CmdGetBattleF8960(void *unused, Arg *a);
int func_001CDDE0(void *unused, Arg *a);
int func_001CDE40(void *unused, Arg *a);
int func_001CDEA0(void *unused, Arg *a);
int Scr_CmdNop(void *unused, Arg *a);
int func_001CDF10(void *unused, Arg *a);
int Scr_CmdFighterFloatDFE60(void *unused, Arg *a);
int Scr_CmdFighterE0200(void *unused, Arg *a);
int Scr_CmdFighterFloatDFC80(void *unused, Arg *a);
int Scr_CmdFighterCheckSlot(void *unused, Arg *a);
int Scr_CmdGetFighterAnimF(void *unused, Arg *a);
int Scr_CmdFighterCopyF17C4(void *unused, Arg *a);
int func_001CE220(void *unused, Arg *a);
int Scr_CmdFighterSlotSetPair(void *unused, Arg *a);
int Scr_CmdSlotFlagCBE(void *unused, Arg *a);
int Scr_CmdSlotFlagCBD(void *unused, Arg *a);
int Scr_CmdFighterSetF1A08(void *unused, Arg *a);
int Scr_CmdFighterSetVec4(void *unused, Arg *a);
int Scr_CmdFighterSlotSetVec(void *unused, Arg *a);
int func_001CE4E0(void *unused, Arg *a);
int Scr_CmdFighterSlotCall73C0(void *unused, Arg *a);
int Scr_CmdFighterSlotSet(void *unused, Arg *a);
int Scr_CmdFighterSet1A5EF(void *unused, Arg *a);
int Scr_CmdFighterSet1A5E(void *unused, Arg *a);
int Scr_CmdFighterSetF182C(void *unused, Arg *a);
int Scr_CmdSetF23C(void *unused, Arg *a);
int Scr_CmdSetF238(void *unused, Arg *a);
int Scr_CmdSetVec4B4230(void *unused, Arg *a);
int Scr_CmdFighterSetVec5(void *unused, Arg *a);
int func_001CED20(void *unused, Arg *a);
int Scr_CmdFighterSetVec1828(void *unused, Arg *a);
int func_001CEE80(void *unused, Arg *a);
int Scr_CmdFighterSetVecPair(void *unused, Arg *a);
int func_001CEF60(void *unused, Arg *a);
int Scr_CmdFighterClear75D0(void *unused, Arg *a);
int Scr_CmdFighterStateReset(void *unused, Arg *a);
int Scr_CmdFighterSet1864(void *unused, Arg *a);
int Scr_CmdGetFighterE1690(void *unused, Arg *a);
int Scr_CmdFighterReset81D0(void *unused, Arg *a);
int Scr_CmdFighterSet8210(void *unused, Arg *a);
int Scr_CmdFighterSetup8480(void *unused, Arg *a);
int Scr_CmdFighterCall8860(void *unused, Arg *a);
int func_001CF6D0(void *o, Arg *a);
int Scr_CmdTickSetBytes(void *o, Arg *a);
int Scr_CmdGetFighterByte(void *unused, Arg *a);
int Scr_CmdSetBattle894E(void *unused, Arg *a);
int Scr_CmdSetFighterPair1AD2(void *unused, Arg *a);
int Scr_CmdSetBattle894C(void *unused, Arg *a);
int Scr_CmdSetSoundMode(void *unused, Arg *a);
int Scr_CmdSetBattle8AAE(void *unused, Arg *a);
int Scr_CmdGetBattleF88F0(void *unused, Arg *a);
int Scr_CmdGetBattleTimerInt(void *unused, Arg *a);
int Scr_CmdBattleTimerClear(void *unused, Arg *a);
int func_001CF990(void *o, Arg *a);
int Scr_CmdWaitSetFrames(void *o, Arg *a);
int func_001CFA00(void *o, Arg *a);
int Scr_CmdWaitStartF8914(void *o, Arg *a);
int Scr_CmdNop_002(void *unused, Arg *a);
int Scr_CmdNop_001(void *unused, Arg *a);
int Scr_CmdNop_000(void *unused, Arg *a);
void func_001CFAD0(CObj *o, CArg *a);
void func_001CFE50(KList3 *l, f32 t0, f32 t1);
void func_001CFF90(KList2 *l, f32 t0, f32 t1);
void func_001D00C0(KList *l, f32 t0, f32 t1);
void func_001D01C0(KList *l, f32 t0, f32 t1);
void func_001D02C0(KList *l, f32 t0, f32 t1);
void func_001D03E0(KList4 *l, f32 t0, f32 t1);
void func_001D05D0(KList *l, f32 t0, f32 t1);
void *func_001D06F0(void *o, s32 mask);
void func_001D0990(void *o, void *s, s32 key, f32 val);
void func_001D0A20(KDst *d, CArg *an, f32 t);
s32 func_001CE560(u8 *arg1)
{
  u8 *temp_v0;
  int new_var;
  temp_v0 = *((u8 **) (((u8 *) arg1) + 0x2C));
  new_var = (*((s32 *) (((u8 *) temp_v0) + 4))) * 4;
  func_001D7CC0(*((u8 **) (((u8 *) (new_var + gBattle)) + 0x8934)), ((*((s32 *) (((u8 *) temp_v0) + 0))) == 0) ? (0) : (1));
  return 1;
}
