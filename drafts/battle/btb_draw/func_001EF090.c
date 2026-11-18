/* Draft (not built): func_001EF090 at 0x001EF090, size 0x3C, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x34, original 0x3C; then decomp-permuter: score 730 -> 670
 * Original: asm/nonmatchings/battle/btb_draw/func_001EF090.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct Task Task;
typedef void (*TaskFunc)(Task *);
struct Task
{
  char pad0[0x1C];
  TaskFunc func;
};
typedef struct BtbObj BtbObj;
struct BtbObj
{
  char pad0[0x10];
  s32 f10;
  char pad14[0x10];
  BtbObj *next;
  BtbObj *prev;
  char pad2C[0x0C];
  s32 f38;
};
typedef struct BtbSub
{
  char pad0[0x8];
  BtbObj *f38;
  void *f3C;
  BtbObj *f40;
  char pad1[0x14];
  BtbObj *f58;
  char pad2[0xC];
  BtbObj *f68;
} BtbSub;
typedef struct BtbItem BtbItem;
struct BtbItem
{
  s32 id;
  f32 val;
  s32 pad8;
  s16 kind;
  s16 kind2;
};
typedef struct BtbHolder BtbHolder;
struct BtbHolder
{
  char pad0[0x10];
  BtbItem *item;
};
extern void Btl_ClearScene(void);
extern void func_002C3E40(void);
extern void func_0026E3B0(void);
extern void TourMap_Exit(void);
extern void VsMode_Exit(void);
extern void func_00307430(void);
extern void PracMode_Exit(void);
extern void ArenaMode_Exit(void);
extern s8 D_004B4BB1[];
extern s8 D_004B4BB2[];
extern s8 D_004B4B40[];
extern s8 D_004B4B41[];
extern s32 gSceneReady;
extern s32 gSceneDone;
extern s32 gSceneNext;
extern s32 gSceneQueued;
extern void func_001EA740(s32);
extern void SceneSw_LoadAll(Task *);
extern void SceneSw_LoadArena(Task *);
extern void func_003107D0(void);
extern void SceneSw_CommitTop(Task *);
extern void func_002D1CC0(void);
extern s8 D_004B4BB0[];
extern void SceneSw_DoneTop(Task *);
extern void ArenaCharasel_Load(void);
extern void SceneSw_LoadTop(Task *);
extern void SceneSw_CommitTop2(Task *);
extern void func_003107E0(s32);
extern s32 gSceneArg;
extern void SceneSw_DoneTop2(Task *);
extern void func_00310900(void);
extern void SceneSw_LoadTop2(Task *);
extern void SceneSw_CommitTop3(Task *);
extern void Result_Start(void);
extern void SceneSw_DoneResult(Task *);
extern void func_003074C0(void);
extern void func_002D1C50(void);
extern void SceneSw_LoadMenu(Task *);
extern void SceneSw_LoadResult(Task *);
extern void SceneSw_CommitMenu(Task *);
extern void ArenaMode_Start(s32);
extern void BtlIntWait_Start(void);
extern void SceneSw_DoneArena(Task *);
extern void ArenaMode_Load(void);
extern char D_005C9D80[];
extern void func_001B10D0(char *, s32);
extern void SceneSw_CommitArena(Task *);
extern s8 D_004B4B62[];
extern s8 D_004B4BE9[];
extern void MainMenu_Start(s32, s32);
extern void SceneSw_DoneMenu(Task *);
extern void MainMenu_Load(void);
extern void SceneSw_CommitMenu2(Task *);
extern void SceneSw_DoneMenu2(Task *);
extern void func_002E0E50(void);
extern void SceneSw_CommitMenu3(Task *);
extern void SceneSw_DoneMenu3(Task *);
extern void SceneSw_LoadMenu4(Task *);
extern void SceneSw_CommitPrac(Task *);
extern void PracMode_Start(s32, s32);
extern void SceneSw_DonePrac(Task *);
extern void PracMode_Load(void);
extern void SceneSw_CommitPrac2(Task *);
extern void SceneSw_DonePrac2(Task *);
extern void SceneSw_LoadPrac2(Task *);
extern void SceneSw_LoadPrac(Task *);
extern void SceneSw_CommitPracExit(Task *);
extern void SceneSw_DoneMenu4(Task *);
extern void func_001B13F0(s32);
extern s16 D_005C9F02[];
extern void SceneSw_LoadMenu5(Task *);
extern void SceneSw_CommitTour(Task *);
extern void TourMap_Start(void);
extern void SceneSw_DoneTour(Task *);
extern void func_00304FB0(s32);
extern void SceneSw_LoadTour(Task *);
extern void SceneSw_CommitTourExit(Task *);
extern void SceneSw_DoneMenu5(Task *);
extern void SceneSw_CommitMenu6(Task *);
extern void SceneSw_DoneMenu6(Task *);
extern void SceneSw_LoadMenu7(Task *);
extern void SceneSw_CommitVs(Task *);
extern void func_00269820(s32, s32);
extern void SceneSw_DoneVs(Task *);
extern void VsMode_Load(void);
extern void SceneSw_LoadVs(Task *);
extern void SceneSw_CommitVs2(Task *);
extern void SceneSw_DoneMenu7(Task *);
extern void func_001ED020(Task *);
extern void StrTitle_Start(void);
extern void SceneSw_DoneStrTitle(Task *);
extern void StrTitle_Load(void);
extern void SceneSw_LoadStrTitle(Task *);
extern void func_003070A0(void);
extern void SceneSw_CommitStrTitle(Task *);
extern void StaffRoll_Start(void);
extern void SceneSw_DoneStaff(Task *);
extern void func_0030F260(void);
extern void SceneSw_LoadMenu8(Task *);
extern void amTask_Kill(s32);
extern s32 D_0047061C;
extern void SceneSw_CommitKill(Task *);
extern void SceneSw_DoneStrTitle2(Task *);
extern void func_002ECAC0(void);
extern void SceneSw_LoadStrTitle4(Task *);
extern void SceneSw_CommitFlight(Task *);
extern void Flight_Start(void);
extern void SceneSw_DoneFlight(Task *);
extern void Flight_Load(void);
extern void SceneSw_LoadStrTitle2(Task *);
extern void SceneSw_LoadFlight(Task *);
extern void SceneSw_CommitStrTitle3(Task *);
extern void GameOver_TaskMain(void *);
extern void Result_Open(void);
extern void *amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
extern void SoundRpc_SendWord2(s32);
extern void SoundRpc_SendWord(s32);
extern void amAdx_Stop(s32);
extern void Fade_Request(s32, s32, s32);
extern char D_004696B8[];
extern void func_001ED880(Task *);
extern void func_002ECB90(void);
extern void Flight_Exit(void);
extern void SceneSw_LoadStrTitle3(Task *);
extern void SceneSw_LoadStaff(Task *);
extern void SceneSw_CommitFlightExit(Task *);
extern void func_002A8E40(void);
extern void Shenron_Start(void);
extern void SceneSw_DoneStrTitle3(Task *);
extern void func_003071C0(void);
extern void StrSelect_Exit(void);
extern void SceneSw_CommitStrSelect(Task *);
extern void SceneSw_DoneStrSelect(Task *);
extern void func_0029CCC0(void);
extern void SceneSw_LoadStrSelect(Task *);
extern void SceneSw_CommitMenu8(Task *);
extern void StrSelect_Start(s32);
extern void SceneSw_DoneMenu8(Task *);
extern void StrSelect_Load(void);
extern void SceneSw_LoadMenu2(Task *);
extern void SceneSw_LoadMenu3(Task *);
extern void SceneSw_LoadMenu6(Task *);
extern void SceneSw_LoadTitle(Task *);
extern void MainMenu_Exit(void);
extern void TourMode_Start(void);
extern void Option_Start(void);
extern void Ess_Start(void);
extern void Title_Start(s32);
extern void func_001EE320(Task *);
extern void SceneSw_DoneAll(Task *);
extern void TourMode_Load(void);
extern void func_002E18D0(void);
extern void func_0026E4A0(void);
extern void Title_Load(void);
extern void Title_Exit(void);
extern s32 D_004B4B68[];
extern void func_001EECD0(Task *);
extern void func_001EEAF0(Task *);
extern void SceneSw_CommitTitle(Task *);
extern void Opening_Start(void);
extern void SceneSw_DoneTitle(Task *);
extern void Opening_Init(void);
extern void func_001EA480(void);
extern void Fade_SetRequest();
extern void Scene_MarkDone();
extern void SoundRpc_SetVolume(f32, s32, s32);
extern void SoundRpc_Send3(s32, s32, s32, s32);
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern f32 D_004E0614[];
extern void func_001EEC70(Task *);
extern void Logomark_Free(void);
extern void SceneSw_CommitLogomark(Task *);
extern void SceneSw_DoneOpening(Task *);
extern void SceneSw_LoadOpening(Task *);
extern void Boot_Exit(void);
extern void SceneSw_CommitBoot(Task *);
extern void Logomark_Start(void);
extern void SceneSw_DoneLogomark(Task *);
extern void Logomark_Load(void);
extern void func_0020A150(void);
extern void func_0022DB90(s32);
extern s32 amGs_SetReg32(s32, s32);
extern void amGs_SetReg64(s32, s32);
extern void amGs_SetReg64b(s32, s32);
extern void amVram_Apply(s32);
extern void amMtxStack_Init(void);
extern void amDraw_SetScissor(void *, s32);
extern void func_00133780(s32, s32);
extern void func_00133980(f32, f32, f32, f32);
extern void func_00133CE0(s32);
extern void func_0013AFA0(s32);
extern void func_00133420(s32);
extern void func_00131B90(void *);
extern void func_00131F00(void *, f32, f32);
extern void func_00132DF0(void *);
extern void func_001482C0(s32);
extern u8 D_003F0800[];
extern s32 D_00470250;
extern s32 D_0046FD20;
extern s32 D_00470238;
extern void func_00125740(char *, u8 *, s32);
extern u8 D_004696F0[];
extern u32 func_0012EAE0(s32);
extern void memset(void *, s32, s32);
typedef struct BtbEntry
{
  char pad0[0x8];
  s32 f08;
  char pad0C[0x34];
  u8 f40;
  u8 f41;
  u8 f42;
  u8 f43;
  u8 f44;
  u8 f45;
  s16 f46;
  s32 f48;
  s32 f4C;
  s32 f50;
} BtbEntry;
extern u64 D_00511440[];
typedef struct Copy16B
{
  s32 a;
  s32 b;
  s32 c;
  s32 d;
} Copy16B;
extern s32 D_004E6560[];
extern s32 D_004B4C00[];
extern Copy16B D_004E65E0[];
extern Copy16B D_004B4C80[];
extern s32 D_00511448[];
extern s32 D_0051144C[];
extern s8 D_00511450[];
extern u64 D_004DFAE0[];
extern s32 D_004DFAE8[];
extern s32 D_004DFAEC[];
extern s8 D_004DFAF0[];
extern s8 D_00511451[];
extern s8 D_004DFAF1[];
extern s8 D_00511479[];
extern s8 D_004DFB19[];
extern s8 D_004B4B65[];
typedef struct 
{
  s32 w[0x20];
} CpyBlk128;
typedef struct 
{
  u8 b[0x2AE60];
} CpyBlkBig;
typedef struct 
{
  s8 b[0x28];
} CpyBlk40;
typedef struct 
{
  s8 b[0x260];
} CpyBlk608;
typedef struct BtbSaveState
{
  u64 f0;
  s32 f8;
  s32 fC;
  s8 f10;
} BtbSaveState;
typedef struct BtbPair8
{
  s32 a;
  s32 b;
} BtbPair8;
typedef struct BtbPair2
{
  s8 a;
  s8 b;
} BtbPair2;
typedef struct BtbBlk32
{
  s32 a;
  s32 b;
  s32 c;
  s32 d;
  s32 e;
  s32 f;
  s32 g;
  s32 h;
} BtbBlk32;
extern void func_002641D0(void);
extern void Scene_MarkDone(void);
extern void amHeap_Free(void *);
extern BtbObj *D_0051C770[];
extern s32 D_0047062C;
extern f32 D_0051CD24[];
extern void amMotion_Apply(char *, f32, f32);
extern void amModel_SetCurrent(s32, s32);
extern void *BtbBg_GetStageModel(void);
extern void func_00133D80(s32);
extern void func_00133D90(f32);
extern void func_0013B0B0(void *);
extern void func_0013B110(s32);
extern void func_00208D60(s32);
extern void func_00208D70(s32);
extern void DrawFlags_Apply(s32, s32, s32, s32, s32);
extern s32 gBattle;
extern s32 D_0047064C;
extern f32 D_0051CCD0[];
extern void func_00208F70(BtbObj *);
typedef struct 
{
  u8 b[0x40];
} BtbVuBuf30;
extern void func_0013B160(s32);
extern void func_0013B960(void *);
extern void func_00209D20(void *);
extern void func_0013B500(s32);
extern void func_0013B6B0(f32);
extern char D_00495718[];
extern char D_00495758[];
extern char *D_0051CD00[];
extern void func_002D04A0(s32);
extern void func_002CFDE0(s32);
extern void func_0013E0A0(s32);
extern void func_0013E170(s32);
extern void func_0013E2A0(s32);
extern void amMotSet_Apply(void *, f32, s32);
extern void amMotion_BuildMatrices(char *);
extern void func_002D0110(s32, f32, s32);
extern f32 func_002CFDD0(s32, f32, f32);
typedef struct B3Ent
{
  s32 tag;
  s32 idx;
  f32 a;
  f32 b;
} B3Ent;
extern s32 gBtbBg[];
extern s32 D_0051CD20[];
typedef struct BtEnt36
{
  s32 f0;
  char *f4;
  char pad8[0x1C];
} BtEnt36;
typedef struct BtLFrm
{
  char pad0[8];
  s32 f8;
  char padC[4];
} BtLFrm;
typedef struct BtLSlot
{
  char pad0[0x14];
  BtLFrm *frm;
} BtLSlot;
typedef struct BtLObj
{
  char pad0[4];
  BtLSlot *slots[1];
} BtLObj;
typedef struct BtLSt
{
  BtLObj *obj;
  f32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
  f32 f14;
  s32 f18;
  f32 f1C;
} BtLSt;
typedef struct BtLHolder
{
  char pad0[0xC];
  BtLSt *ms;
  BtbItem *it;
} BtLHolder;
typedef struct BtLTop
{
  char pad0[0x10];
  BtLHolder *h;
} BtLTop;
extern char D_0051CB70[];
extern char D_0051CC20[];
extern void Obj_ResetF38(s32);
typedef struct BtMEnt
{
  char pad0[0x30];
  s32 m30;
  s32 m34;
  s32 m38;
  char pad3C[4];
} BtMEnt;
typedef struct BtMSel
{
  s32 packed;
  s32 f4;
  f32 f8;
  f32 fC;
  BtMEnt *ents;
} BtMSel;
typedef struct BtMObj
{
  char pad0[0x418];
  s32 n;
  BtMSel sel;
} BtMObj;
typedef struct BtMSt
{
  BtMObj *obj;
  f32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
  f32 f14;
  s32 f18;
  f32 f1C;
} BtMSt;
typedef struct BtMTop
{
  char pad0[4];
  char *p4;
  BtMSt *st;
} BtMTop;
extern char D_00469798[];
extern char *D_0051CD0C[];
extern char *func_001A50F0(char *, s32);
extern char *func_00209540(char *, s32, s32);
extern void *func_001F5FD0(u32, char *, s32, void *, void *);
extern void func_001F16B0(char *);
extern void func_001F1770(char *);
extern void func_0029D270(void *, s32, void *);
extern void func_0029D310(void *, void *);
typedef struct 
{
  u8 b[16];
} BtbVec16b;
typedef struct BtbRecC
{
  s32 f0;
  void *f4;
} BtbRecC;
extern char D_004697A8[];
extern f32 func_00200270(s32, f32, f32);
extern void func_00209B50(char *, char *, s32);
extern void func_001F2150(char *);
extern char D_004697B8[];
extern char D_004697C8[];
typedef struct 
{
  u8 b[16];
} BtbVecX;
extern BtbVecX D_0044B5F0;
extern char D_004697E8[];
extern void func_00146F60(void *, s32);
extern void func_00141C30(void *, void *, void *);
extern void func_00209850(void *, void *);
extern void func_00209A90(void *, void *);
typedef struct BtbRecA
{
  char pad0[0x20];
  s32 f20;
  char pad24[0x14];
  s32 f38;
} BtbRecA;
typedef struct BtbRecB
{
  s32 f0;
  void *f4;
} BtbRecB;
extern char D_00469848[];
extern char D_00469858[];
extern void func_001F1F50(char *);
extern char D_00469868[];
typedef struct MotState
{
  char *obj;
  f32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
  f32 f14;
  s32 f18;
  f32 f1C;
} MotState;
typedef struct MotCtl
{
  char pad0[8];
  MotState *st;
} MotCtl;
typedef struct MotSlot
{
  s32 pk;
  char pad4[8];
  s32 fC;
  char *p10;
} MotSlot;
typedef struct MotEnt
{
  char pad0[0x30];
  s32 m30;
  s32 m34;
  s32 m38;
  char pad3C[4];
} MotEnt;
typedef struct MotSel
{
  s32 packed;
  s32 f4;
  f32 f8;
  f32 fC;
  MotEnt *ents;
} MotSel;
typedef struct MotObj
{
  char pad0[0x418];
  s32 n;
  MotSel sel;
} MotObj;
typedef struct MotSt2
{
  MotObj *obj;
  f32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
  f32 f14;
  s32 f18;
  f32 f1C;
} MotSt2;
typedef struct MotCtl2
{
  char pad0[8];
  MotSt2 *st;
} MotCtl2;
typedef struct MotFrm
{
  char pad0[8];
  s32 f8;
  char padC[4];
} MotFrm;
typedef struct MotSlotH
{
  char pad0[0x14];
  MotFrm *frm;
} MotSlotH;
typedef struct MotSetObj
{
  char pad0[4];
  MotSlotH *slots[1];
} MotSetObj;
typedef struct MotSetSt
{
  MotSetObj *obj;
  f32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
  f32 f14;
  s32 f18;
  f32 f1C;
} MotSetSt;
typedef struct MotSetCtl
{
  char pad0[0xC];
  MotSetSt *st;
} MotSetCtl;
typedef struct MotObjM
{
  char pad0[0x41C];
  MotSel sel;
  char pad430[0x3C];
  MotSlotH *slots[1];
} MotObjM;
typedef struct MotStM
{
  MotObjM *obj;
  f32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
  f32 f14;
  s32 f18;
  f32 f1C;
} MotStM;
typedef struct MotCtlM
{
  char pad0[8];
  MotStM *st;
} MotCtlM;
extern char *D_0051CD14[];
extern char *D_0051CD1C[];
extern s32 func_00127BA0(char *);
extern void func_00128040(BtbObj *, char *, s32);
extern char D_00511770[];
extern char *D_0051CB94[];
extern char *D_0051CC48[];
typedef void (*ObjFunc)(char *);
typedef void (*ObjFunc4)(char *);
extern void func_001F6690(void *);
extern char D_00469888[];
extern u8 D_0044AE50[];
extern u8 D_0044A880[];
extern char D_00469898[];
extern void func_001F0A50(void);
extern void func_001F0E20(void);
typedef struct 
{
  u8 b[16];
} BtbVec16;
extern BtbVec16 D_0044B510;
extern char D_004698A8[];
extern void func_001F2350();
extern void BtbObj_ReleaseSub38Timed();
extern void *amObject_Create(void *, s32);
extern void func_001F7210(char *);
extern void func_001F7490(s32);
extern char D_004698C0[];
extern void func_001F2FD0(char *);
extern void func_001F3180(struct BtLTop *);
extern void func_001F7990(s32);
extern char D_004698D0[];
extern void func_001F3A60(char *);
extern void func_001F3C10(struct BtLTop *);
typedef void (*VoidFunc)(void);
extern VoidFunc D_0044B4C0[];
void func_001EEA90(Task *t);
void SceneSw_LoadLogomark(Task *t);
void func_001EF0D0(void);
void BtbDraw_InitState(void);
void BtbEntry_DecodeColors(BtbEntry *e, u8 *src);
u64 StrSelect_TestFlag(s32 a0);
void func_001F04E0(s32 a0);
void func_001F0510(s32 a0);
void func_001F0530(void);
void func_001F0660(void);
void Save_ClearBusy(void);
void Save_SetBusy(void);
void func_001F07B0(s32 a0);
void Scene_SetReady(void);
void func_001F07E0(void);
void Scene_FadeTo(s32 a0, s32 a1);
void Scene_Request(s32 a0, s32 a1);
void func_001F1380(BtbObj *o);
void func_001F1490(char *a0);
void BtbObj_ReleaseF40(BtbObj *o);
void BtbObj_ReleaseSub68(BtbObj *o);
void func_001F1AB0(char *a0);
void BtbObj_ReleaseF40Copy(BtbObj *o);
void func_001F1CE0(char *a0);
void BtbObj_ReleaseF58(BtbObj *o);
void BtbObj_ReleaseF58Copy(BtbObj *o);
void BtbObj_ReleaseSub38(BtbObj *o);
void func_001F2570(char *a0);
void func_001F2A90(char *a0);
void func_001F32F0(char *a0);
void func_001F3740(char *a0);
void func_001F38F0(BtLTop *a0);
void BtbObj_CheckDrawFlags(char *o);
void func_001F3DF0(char *a0);
void BtbObj_FreeFlagged(void);
void func_001F3FE0(BtMTop *a0, s32 a1, s32 a2, f32 f12);
void func_001F4520(s32 p0, char *p1, s32 p2, s32 flags);
void func_001F4670(s32 p0, char *p1, s32 p2, s32 flags);
void func_001F47C0(s32 p0, char *p1, s32 p2, s32 flags);
void func_001F4AD0(s32 p0, char *p1, s32 p2, s32 flags);
void func_001F5540(s32 p0, char *p1, s32 p2, s32 flags);
void func_001F5830(s32 p0, char *p1, s32 p2, s32 flags);
void func_001F5950(s32 p0, char *p1, s32 p2, s32 flags);
void func_001F5A70(BtbHolder *h);
void func_001F5AB0(BtbHolder *h);
void func_001F5B10(char *a, s32 v);
void func_001F5B50(BtbHolder *h);
void func_001F5B70(BtbHolder *h);
void BtbObj_ApplyMotSet(char *c);
void func_001F5BE0(MotCtl2 *c);
void func_001F5CB0(BtbHolder *h);
void func_001F5D50(MotSetCtl *c);
void func_001F5E20(MotCtlM *c);
s32 *func_001F5EF0(s32 a0, s32 a1);
void BtbObj_RemoveFromList(BtbObj *o);
void func_001F6140(void);
void BtbBg_ResetLists(void);
void BtbBg_RunObjMain(void);
void BtbBg_DrawAfterStub(void);
void BtbBg_DrawScrEffectStub(void);
void BtbBg_RunPostObjs(void);
void BtbBg_DrawTrsObjs(void);
void BtbBg_DrawPostObjs(void);
void BtbBg_DrawObjs(void);
void BtbBg_DrawPlainObjs(void);
void BtbBg_CrossFadeKill(void);
void BtbBg_StartCrossFade(s32 a0, s32 a1, s32 a2, f32 f12, f32 f13);
void func_001F6D60(void);
void func_001F6E50(void);
void BtbObj_RemoveByKey(s32 key);
void BtbObj_RemoveByIdx(s32 flag, s32 idx);
void BtbObj_FreeFlag400(void);
void BtbBg_CreatePlanet(s32 p);
void func_001F7470(s32 a0);
void func_001F7690(void);
void func_001F7720(s32 p0);
void func_001F7820(void);
void func_001F7BF0(void);
void func_001F7C80(s32 a0);
void BtbBg_RunFunc(void);
void func_001EF090(void)
{
  s8 *new_var2;
  int new_var;
  s32 new_var3;
  new_var = new_var2 == 0;
  if (new_var)
  {
    goto block_2;
    new_var2 = D_004B4BB1;
  }
  new_var3 = (s32) D_004B4BB2;
  func_001EA740(new_var3);
  return;
  block_2:
  return;

}
