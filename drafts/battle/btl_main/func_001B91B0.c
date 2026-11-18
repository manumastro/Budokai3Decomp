/* Draft (not built): func_001B91B0 at 0x001B91B0, size 0x17C, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 29 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x178, original 0x17C; then decomp-permuter: score 2220 -> 110
 * Original: asm/nonmatchings/battle/btl_main/func_001B91B0.s */

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
typedef struct StageArea
{
  s32 model;
  s32 fog;
  s32 unk08;
  s32 unk0C;
  u8 unk10[0x10];
} StageArea;
typedef struct StageInfo
{
  u8 unk00[0x14];
  s32 unk14;
  s32 startArea;
  StageArea area[2];
} StageInfo;
typedef struct StageModel
{
  u8 unk00[0x10];
  u8 unk10[0x40];
} StageModel;
typedef struct StageFog
{
  s32 color;
  f32 unk04;
  f32 unk08;
  f32 unk0C;
  f32 unk10;
} StageFog;
typedef struct StageSlot
{
  u8 unk00[0xE];
  s16 unk0E;
} StageSlot;
typedef struct StageResInfo
{
  u8 unk00[0x20];
  s32 unk20;
} StageResInfo;
typedef struct StageRes
{
  StageResInfo *info;
  s32 count;
  struct 
  {
    s32 unk00;
    s32 unk04;
  } ent[1];
} StageRes;
typedef struct StageObj
{
  void *src;
  StageRes *res;
  void **unk08;
  void **unk0C;
  void *unk10;
  u8 unk14[0xC];
} StageObj;
typedef struct StageGroup
{
  s32 index;
  struct StageGroupSrc *src;
  s32 count;
  StageObj *objs;
  u8 unk10[0x14];
} StageGroup;
typedef struct StageLinkA
{
  u8 unk00[0x10];
  StageResInfo *key;
  StageRes *ref;
  StageObj *obj;
  u8 unk1C[4];
} StageLinkA;
typedef struct StageLinkB
{
  u8 unk00[0x1C];
  StageResInfo *key;
  StageRes *ref;
  StageObj *obj;
  u8 unk28[8];
} StageLinkB;
typedef struct StageGroupSrc
{
  u8 unk00[0x90];
  s32 count;
  s32 nlinkA;
  s32 nlinkB;
  s32 nlinkC;
  s32 nlinkD;
  u8 unkA4[4];
  void **objs;
  StageLinkA *linkA;
  StageLinkB *linkB;
  StageLinkA *linkC;
  StageLinkB *linkD;
  u8 unkBC[0xD8 - 0xBC];
  s32 *unkD8;
} StageGroupSrc;
typedef struct StageHeader
{
  s32 unk00;
  s32 ngroups;
  s32 nobjs;
  s32 nlinkA;
  s32 nlinkB;
  u8 unk14[0x20 - 0x14];
  StageGroupSrc **groups;
  void **objs;
  StageLinkA *linkA;
  StageLinkB *linkB;
} StageHeader;
typedef struct StageWork
{
  s32 stage;
  s32 unk04;
  s32 unk08;
  s32 unk0C;
  s32 unk10;
  s32 *unk14;
  s32 unk18;
  void *data;
  StageHeader *hdr;
  void *unk24;
  void *unk28;
  void *unk2C;
  void *unk30;
  StageGroup *groups;
  s32 nobjs;
  StageObj *objs;
  s32 area;
  f32 unk44;
  s32 unk48;
  s32 flags;
  s16 unk50[4];
  StageSlot slot[4];
  u8 unk98[0x9E - 0x98];
  u16 unk9E;
  u8 unkA0[0xA4 - 0xA0];
  s32 unkA4[7];
} StageWork;
extern StageWork gBtbBg;
extern StageInfo D_0044AE50[];
extern StageModel D_0044A240[];
extern StageFog D_0044A9C0[];
typedef struct Copy16
{
  s32 a;
  s32 b;
  s32 c;
  s32 d;
} Copy16;
extern void Fighter_ResetMotion(void *, s32);
extern void func_001E4E20(void *, s32);
extern void func_001E4FA0(void *f, s32 x);
extern void func_00146ED0(f32 *a, f32 *b, f32 scale);
extern void func_001E7BE0(void *, s32);
extern void func_001E3BB0(void *);
extern void func_001E7F00(void *);
extern s32 D_00470574;
extern char D_00468410[];
extern char D_00468420[];
extern char D_00468428[];
extern void (*D_004682E8[])(void);
extern s32 D_0046FD84;
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_001EF1E0(s32);
extern void Scene_MarkDone(void);
extern void BtbBg_Restart(void);
extern void Btl_ClearScene(void);
extern void func_001E9D10();
extern void BtlSound_StartTrans(void);
extern s32 func_001E9ED0(void *);
extern void BtbDraw_InitState(void);
extern void func_0022DC00(void);
extern void (*D_004684A8[])(void *);
extern void func_002CBFF0(s32, void *);
extern void func_001E5040(void *);
extern void func_001C8E50(void);
extern void func_001A8830(void);
extern void func_001E5860(void);
extern void func_001F9E00(void);
extern void func_0021C6A0(void);
extern void func_00215AA0(void);
extern void func_001E9D60(void);
extern void func_00219870(void);
extern void func_001E9910(void);
extern void func_002CC4C0(void);
extern char D_00495B70[];
extern void Btl_UpdateLimitXY(s32, f32, f32);
extern char D_005116E0[];
extern void func_001CA460(s32, s32);
extern void func_001AC490(void *);
extern void Fade_SetRequest(s32, void *, s32);
extern void (*D_0046850C[])(void *);
extern void func_001D9BF0(void *);
extern void memset(void *, s32, s32);
extern void func_00219650(s32);
extern void func_00219790(s32);
extern void amCdFs_Close(void *, s32);
extern void *amTask_Create(void (*update)(void *), void *, s32, s32, s32, char *);
extern void amFile_AddLoader(void *, void *);
void func_001AC330(void *);
void func_001AC400(void *);
void func_001AF840(void *);
void func_001B0160(void *);
void Btl_TaskStart(Fighter *f);
void Btl_OnExitFadeDone(void);
extern void (*D_00468460[])(void *);
extern s32 func_001C2B10(void *);
extern s32 func_001E94C0(void *);
typedef struct FighterCB2
{
  u8 unk0000[0xCB2];
  u16 unkCB2;
} FighterCB2;
extern void A2d_CallHandler(s32, s32 *);
extern void (*D_00468510[])(void *);
typedef struct FighterMain2
{
  u8 unk0000[0x1864];
  s32 unk1864;
  u8 unk1868[0x1FF9 - 0x1868];
  s8 unk1FF9;
} FighterMain2;
extern void (*D_004682EC[])(void);
extern void func_002A89D0(void);
extern s32 BtbBg_GetF30(s32);
extern void func_00237000(s32, void *);
extern s32 Btl_ClearTimerCb(void);
extern s32 Btl_RestartCb(void);
extern s16 D_00495A40[];
extern s16 D_00495A42[];
extern s16 D_00495A44[];
extern s16 D_00495A46[];
extern s32 D_00495A48[];
extern s16 D_00495A4C[];
extern s16 D_00495A4E[];
extern s16 D_00495A90[];
extern s16 D_00495A92[];
extern s16 D_00495A94[];
extern s16 D_00495A96[];
extern s32 D_00495A98[];
extern s16 D_00495A9C[];
extern s16 D_00495A9E[];
extern s16 D_00495AD4[];
extern s16 D_00495AD6[];
extern s16 D_00495AD8[];
extern s16 D_00495ADA[];
extern s32 D_00495ADC[];
extern s16 D_00495AE0[];
extern s16 D_00495AE2[];
extern s16 D_00495B18[];
extern s16 D_00495B1A[];
extern s16 D_00495B1C[];
extern s16 D_00495B1E[];
extern s32 D_00495B20[];
extern s16 D_00495B24[];
extern s16 D_00495B26[];
extern s32 func_001E3D60(s32, f32);
extern void func_001E4820(f32, void *, s32);
extern void func_001E3460(void *);
extern void func_001DD680(void *);
extern void func_001D9900(void *, s32, s32);
extern void amHeap_Free(void *);
extern void (*D_00468530[])(void *);
extern void (*D_004685E4[])(void *);
extern void func_001D8320(void *);
extern void CharParts_Release(void *);
extern u8 D_00492FC0[];
extern u8 *gScrMachines;
extern void func_00125740(void *d, void *s, s32 n);
extern void AdxSlot_SetPausedAll(s32 a);
extern void func_0029D860(s32 a);
extern void func_002CF650(s32 a);
extern void func_001A3610(s32 a);
extern void func_001D9C00(void *a);
extern void func_001E3200(void *a);
extern void RenderTex_Start(s32 a);
typedef struct BattleCount
{
  u8 unk0000[0x88D8];
  s32 count;
} BattleCount;
extern s32 func_002CC4A0(void);
extern void func_001D9480(void *);
typedef struct BattleCountView
{
  u8 unk0000[0x88D8];
  s32 count;
} BattleCountView;
typedef struct BattleView2
{
  u8 unk0000[0x88D8];
  s32 count;
  s32 unk88DC;
  s32 unk88E0;
  s32 unk88E4;
  s32 unk88E8;
  s32 unk88EC;
  f32 unk88F0;
  u8 unk88F4[0x88FC - 0x88F4];
  s32 unk88FC;
  s32 unk8900;
  s32 unk8904;
  u8 unk8908[0x8AB1 - 0x8908];
  s8 unk8AB1;
} BattleView2;
extern s32 func_00225380(void);
extern void Btl_ResetScene(void);
extern void (*D_00468300[])(void);
extern void (*D_004682F8[])(void);
extern void func_001A8770(s32 a, void *b);
extern void func_00219270(s32 a);
typedef struct AE5Flags
{
  s32 flags;
  s32 pad;
  s16 e[4];
} AE5Flags;
extern void (*D_004682F0[])(void);
extern s32 func_001C8020(s32, void *);
typedef struct AE720Loc
{
  s32 flags;
  s32 pad;
  s16 e[4];
} AE720Loc;
extern void func_001A8770(s32, void *);
extern void func_00219270(s32);
extern s32 func_00218CD0(s32, s32);
extern s32 func_001AC110(void);
extern s32 func_001A50F0(s32, s32);
extern void amFile_Load(s32);
extern s8 D_004B4B40[];
extern s32 (*D_00468240[])(void *);
extern void amTask_Kill(void *);
extern char D_00468390[];
void Btl_TaskInit(Fighter *f);
typedef struct Vec4a
{
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} Vec4a;
typedef struct BWZ
{
  u8 a[0x88F0];
  f32 f88F0;
  u8 b[0x8920 - 0x88F4];
  f32 f8920;
  f32 f8924;
  u8 c[0x8975 - 0x8928];
  s8 f8975;
} BWZ;
extern u8 D_004312F0[];
extern void func_00131700(void *v);
extern u8 D_004312E0[];
extern void func_00133780(s32, s32);
extern void func_00139620(s32, void *, s32, s32, s32, f32);
extern void func_0012F2C0(void);
extern void func_0013AFA0(s32);
extern void func_001A87A0(void);
extern void amVram_Apply(s32);
extern void func_00131F00(void *, f32, f32);
extern void func_00132DF0(void *);
extern void func_00209E50(void *);
extern void (*D_00468310[])(void);
extern f32 D_0051D9A8[];
extern f32 D_0051D9AC[];
extern void func_0022DB40(f32);
extern void func_001E9930(void);
extern void (*D_00468270[])(void *);
extern void (*D_004682B0[])(void);
extern void (*D_004682E0[])(void);
extern char D_004683A8[];
extern char D_004683B8[];
extern char D_004683D0[];
extern char D_004683E0[];
extern char D_004683F0[];
extern char D_00468400[];
extern void Fade_Request(s32, void *, s32);
extern void func_001482C0(s32);
extern void Btl_TaskPostDraw(void);
extern void func_001AFC50(void);
extern void func_001AFFA0(void);
extern void func_001AFDF0(void);
extern void func_001AF9A0(void);
extern void Btl_ToggleF8975(void);
extern char D_00430FC0[];
extern s32 D_0051CD20[];
extern f32 func_00200270(s32, f32, f32);
typedef struct F2Pair
{
  f32 a;
  f32 b;
} F2Pair;
extern void func_001E1300(s32 a);
extern void func_001DA4C0(void);
extern void func_001C81D0(Fighter *f, s32 i);
extern void func_001C7D90(Fighter *f, s32 i, void *p);
extern void func_001AF100(s32);
extern void func_001AC240(void);
extern void func_001C8EE0(void);
extern void BtlCam_Restart(void);
extern void Lit_Start(void);
extern void func_0021C6E0(void);
extern void func_00215C10(void);
extern void func_001E9D80(void);
extern void func_00219880(void);
extern void func_002CC520(void);
extern void func_001C8FE0(void);
extern void func_001A88B0(void);
extern void func_001E5960(void);
extern void func_001E9E20(void);
extern void Adx_KillStopCheck(void);
extern void func_00215B20(void);
extern void func_001E9940(void);
extern void func_002CC610(void);
extern void amTask_KillGroup(s32, s32, s32);
extern void func_001C8E60(void);
extern void func_001A8840(void);
extern void func_001E5870(void);
extern void BtbBg_Clear(void);
extern void func_0021CCF0(void);
extern void func_001E9D70(void);
extern void func_00215AE0(void);
extern void func_001E9920(void);
extern void func_002CC4E0(void);
extern void amCdFs_ReleaseCache(void *handle);
extern void func_001DDD50(void *);
extern void func_00218440(s32, void *);
extern void func_001E9B00(s32, s32, s32, s32, f32, f32);
extern void func_00146F10(void *, void *, f32);
extern void (*D_0046849C[])(void *);
typedef struct B3Loc
{
  s32 v[3];
  s32 flag;
  s32 side;
  s32 pad[4];
} B3Loc;
extern void (*D_004684E8[])(void *);
typedef struct FighterSt
{
  u8 pad0[0xB70];
  s32 fB70;
  u8 padB74[0xCA4 - 0xB74];
  f32 fCA4;
  f32 fCA8;
  s16 fCAC;
  s16 fCAE;
  s16 fCB0;
  u16 fCB2;
  u8 padCB4[0xCB8 - 0xCB4];
  s32 fCB8;
  u8 padCBC[0x181C - 0xCBC];
  s16 f181C;
  u8 pad181E[0x183C - 0x181E];
  s8 f183C;
  u8 pad183D[0x1FFD - 0x183D];
  s8 f1FFD;
  u8 pad1FFE[0x2003 - 0x1FFE];
  s8 f2003;
  u8 pad2004[0x2010 - 0x2004];
  s8 f2010;
  s8 f2011;
} FighterSt;
typedef struct CharBodyEntry
{
  s32 file;
  s32 secp;
  struct CharBody *list;
} CharBodyEntry;
typedef struct CharFaceEntry
{
  s32 file;
  struct CharFace *list;
} CharFaceEntry;
typedef struct CharCostume
{
  s16 unk0;
  s8 body;
  s8 face;
  s32 unk4;
} CharCostume;
typedef struct CharData
{
  s32 unk00;
  s8 numCostumes;
  s8 numBodyColors;
  s8 numFaceColors;
  s8 unk07;
  CharBodyEntry *bodies;
  CharFaceEntry *faces;
  CharCostume costume[10];
} CharData;
extern CharData D_00447440[105];
typedef struct Mtx
{
  f32 m[4][4];
} Mtx;
typedef struct Vec4
{
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} Vec4;
typedef struct Joint
{
  Mtx m;
  Vec4 v[4];
} Joint;
typedef struct Model
{
  u8 unk000[0x45C];
  Joint *joints;
} Model;
typedef struct SecpData
{
  s8 numParts;
  s8 numAcsr;
  s8 numMant;
  s32 parts[8];
  s32 acsr[2];
  s32 mant[1];
} SecpData;
typedef struct SecpSlot
{
  u8 unk00[0x20];
} SecpSlot;
typedef struct SecpOwnerData
{
  u8 unk00[0x40];
  SecpSlot slot[2];
} SecpOwnerData;
typedef struct SecpOwner
{
  s32 unk00;
  SecpOwnerData *data;
} SecpOwner;
typedef struct Secp
{
  void *parts[8];
  s32 *acsr[2];
  void *mant[1];
  s8 numParts;
  s8 numAcsr;
  s8 numMant;
  s32 unk30;
  struct SecpOwner *owner;
  SecpData *data;
  s32 unk3C;
  u8 unk40;
  s8 unk41;
} Secp;
typedef struct CharBody
{
  u8 unk00[0x30];
  s16 joint[9];
  u8 unk42[0x48 - 0x42];
  void *unk48;
  Model *model;
  s32 unk50;
  CharBodyEntry *entry;
  struct Secp *secp;
  s32 unk5C;
  s32 code;
  s32 unk64;
  s32 unk68;
  s32 unk6C;
  s32 unk70;
  s32 unk74;
  s32 key;
  s32 refs;
  struct CharBody *prev;
  struct CharBody *next;
} CharBody;
typedef struct CharFile
{
  s32 unk00;
  s16 state;
  u8 unk06[0x54 - 0x06];
  s32 data;
} CharFile;
typedef struct CharFace
{
  s16 joint[9];
  u8 unk12[0x18 - 0x12];
  s32 unk18;
  Model *model;
  u8 unk20[0x80 - 0x20];
  CharFaceEntry *entry;
  s32 unk84;
  s32 unk88;
  s32 unk8C;
  CharFile *file;
  CharFile *unk94;
  s32 unk98;
  s32 key;
  s32 refs;
  struct CharFace *prev;
  struct CharFace *next;
} CharFace;
extern void func_001BD760(Fighter *f);
extern void func_0029D270(void *a, s32 b);
extern void func_001DF500(void *f);
extern void func_001C80E0(Fighter *f, s32 i);
extern void func_001C8050(Fighter *f, s32 i);
extern void func_001C82C0(Fighter *f, s32 i);
extern void func_001C0130(Fighter *f, s32 a);
extern void func_001E7070(void *p, s32 a);
extern void func_001E8290(void *p);
extern void Character_Release(void *p);
extern s32 func_001C8B50(Fighter *f, void *p);
extern void func_001D9CA0();
extern void *func_001CAAB0(s32 a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_001CAA30(s32 a);
extern void *D_00428AB0[];
extern void func_001D9960(Fighter *f, s32 a, s32 b);
extern void func_001C73B0(void *p);
extern void func_001C8340(Fighter *f);
extern void func_001C8600(Fighter *f);
extern void amCdFs_Close(void *handle, s32 mode);
typedef struct BattleSlots
{
  u8 unk0000[0x88D8];
  s32 numFighters;
  u8 unk88DC[0x88EC - 0x88DC];
  s32 unk88EC;
  u8 unk88F0[0x8975 - 0x88F0];
  s8 unk8975;
} BattleSlots;
typedef struct Slot20
{
  s16 unk00;
  s16 unk02;
  s16 unk04;
  s8 unk06;
  u8 unk07[9];
  void *unk10;
} Slot20;
typedef struct CdSlot
{
  s32 unk00;
  s32 unk04;
  s32 unk08;
  s32 unk0C;
  s32 unk10;
  void *handle;
  s32 unk18;
} CdSlot;
typedef struct FighterV
{
  u8 pad0044[0x44];
  f32 unk44;
  u8 pad0B70[0xB28];
  s32 unkB70;
  u8 pad0CAC[0x138];
  s16 unkCAC;
  s16 unkCAE;
  s16 unkCB0;
  u16 unkCB2;
  s16 unkCB4;
  s16 unkCB6;
  f32 unkCB8;
  u8 pad17AC[0xAF0];
  s32 unk17AC;
  u8 pad1844[0x94];
  f32 unk1844;
  u8 pad1848[0x1864 - 0x1848];
  s32 unk1864;
  u8 pad1868[0x1FF9 - 0x1868];
  s8 unk1FF9;
  u8 pad1FFB[0x1];
  s8 unk1FFB;
  u8 pad1FFD[0x1];
  s8 unk1FFD;
  u8 pad2004[0x6];
  s8 unk2004;
  u8 pad2006[0x1];
  s8 unk2006;
  u8 pad2010[0x9];
  s8 unk2010;
  s8 unk2011;
} FighterV;
extern void func_001C37F0(Fighter *f, void *p);
extern void func_001C5870(Fighter *f);
extern s32 func_001E3D60(s32 a, f32 b);
extern void func_001C8500(Fighter *f, s32 i);
extern void func_001CA8F0(void *p);
extern void func_001E53B0(Fighter *f, s32 i);
extern s32 func_001D4850(void *s);
extern s32 func_001E9290(Fighter *c);
extern void (*D_004684A4[])(void *);
extern f32 func_001E52B0(s32);
extern void (*D_00468490)(void *);
extern s32 func_001DFE60(Fighter *c, s32 a, f32 v);
typedef struct TblPair
{
  s16 a;
  s16 b;
} TblPair;
extern s32 func_001AA9D0(s32);
extern s32 func_001E9250(void *);
extern f32 func_0025B290(s32);
extern void func_0025B2E0(s32, f32);
extern s32 func_001D99C0(void *, s32);
extern void func_001D98A0(void *, s32, s32);
extern s32 func_0012EAE0(s32);
typedef struct BattleView
{
  u8 unk0000[0x88D8];
  s32 numFighters;
  u8 unk88DC[0x88F0 - 0x88DC];
  f32 f88F0;
  u8 unk88F4[0x8934 - 0x88F4];
  void *fighter[2];
} BattleView;
extern s32 *func_0021C660(s32 a);
extern s32 func_001DF8F0(s32 a, s32 b);
extern s32 D_00495B60[];
extern void func_001B0B10(void);
extern void func_001B0810(void);
extern void *func_001EA230();
extern f32 func_00146E60(void *a, void *b);
extern s32 func_001E35A0(void *, void *);
typedef s32 (*CollFunc)(s32, s32, s32);
typedef struct CollObj
{
  u8 unk00[0x20];
  f32 f20;
  u8 unk24[0x4];
  CollFunc fn28;
  s32 arg2C;
  u8 unk30[0x5];
  s8 t35;
  s16 s36;
  s32 flags38;
  struct CollObj *next3C;
} CollObj;
extern s32 func_001DFA90(Fighter *c, s32 idx);
typedef struct CollEnt
{
  u8 unk00[0x20];
  u8 *obj20;
  u8 unk24[0x8];
  struct CollEnt *next2C;
} CollEnt;
typedef struct FighterF
{
  u8 u0000[0x1350];
  s32 side1350;
  u8 *other1354;
  u8 u1358[0x1A58 - 0x1358];
  s16 v1A58;
  u8 u1A5A[0x2003 - 0x1A5A];
  s8 v2003;
  u8 u2004[0x200E - 0x2004];
  s8 v200E;
} FighterF;
extern void func_001C4250(void *f, void *s, s32 idx);
extern void func_001D83E0(void *f);
extern s8 D_004B4B59[];
typedef struct BWY
{
  u8 a[0x88D8];
  s32 n88D8;
  u8 b[0x8934 - 0x88DC];
  void *fighter[2];
} BWY;
extern void func_001D8710(void *a);
extern s32 func_001D89E0(void *f, s32 i);
extern void *BtbBg_GetStageModelF10(void);
extern void func_0029D6C0(void *);
extern void func_001FB750(void *, void *);
extern void func_001FB760(void *, void *);
extern void func_0013B0B0(void *);
extern void *func_001FB7E0(void *);
extern void func_0013B110(s32);
extern void func_001F9DF0(void);
extern char D_00428C60[];
extern void func_001D7A70(void *c);
extern void func_001D79F0(void *c);
extern void func_001DF1F0(void *c);
extern void func_001C7130(void);
typedef struct FighterSlotView
{
  u8 unk0000[0xBA4];
  s32 unkBA4;
  u8 unkBA8[0x1CF4 - 0xBA8];
  void *unk1CF4;
  u8 unk1CF8[0x1CFC - 0x1CF8];
  s32 unk1CFC;
} FighterSlotView;
extern void func_001E5C10(void *p, Fighter *f, s32 i);
extern void *func_001CAAB0(s32, s32, s32, s32, s32);
extern void func_001C90D0(void);
extern void func_001E4800(void *f);
extern void func_001E5230(void *f, s32 x);
extern void func_001E4F40(void *f);
extern void func_001D41F0(void *p);
extern void func_001D8CD0(void *f);
extern void func_001D96F0(void);
extern void func_001C7670(Fighter *f, s32 i);
extern void func_001C6860();
extern void func_001C63F0();
extern void func_001C61A0();
extern char D_00468F40[];
extern char D_00468F50[];
extern char D_00468F60[];
extern char D_00468F70[];
extern char D_00468F80[];
typedef struct Loc90
{
  void *tmp;
  s32 zero;
  s16 m1;
  f32 fv;
} Loc90;
typedef struct BtlRec
{
  s32 key;
  s32 a;
  s32 b;
  s32 c;
} BtlRec;
typedef struct Copy32
{
  Copy16 lo;
  Copy16 hi;
} Copy32;
extern u8 D_00431340[];
extern void amMotion_BuildMatrices(void *o);
extern void func_001D43F0(void *s);
extern s32 func_0029D540(void);
extern void func_001339B0(s32 a);
extern void DrawFlags_Apply(s32 a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_0029D4C0(void);
extern void amModel_SetCurrent(s32 a, s32 b);
extern void func_00133980(f32 a, f32 b, f32 c, f32 d);
extern s32 func_0029D8D0(void);
extern void func_0029D4B0(s32 a);
extern s32 func_0029D4A0(void);
typedef struct CdNode
{
  u8 unk00[0x08];
  struct CdNode *unk08;
  u8 unk0C[0x54 - 0x0C];
  struct CdNode *unk54;
  void *unk58;
  u8 unk5C[0x64 - 0x5C];
  s32 unk64;
  u8 unk68[0x6C - 0x68];
  void *unk6C;
  u8 unk70[0x7C - 0x70];
  s32 unk7C;
  struct CdNode *unk80;
  struct CdNode *unk84;
} CdNode;
extern void *amObject_Create(void *, void *);
extern void *amMotion_CreateFromObj(void *, s32, void *);
extern void func_0029D1E0(void *, s32, void *, void *);
extern void func_001C9D90(void *, void *);
extern void func_001D4710(void *, void *, void *);
extern char D_00431454[];
void func_001ABCC0(Fighter *f);
void Fighter_ClearPlyScr(Fighter *f);
void func_001ABD30(Fighter *f);
void func_001ABD80(Fighter *f);
void func_001ACFD0(void);
void Btl_FadeOutToExit(void);
void func_001AD0E0(void);
void func_001AD210(void);
void func_001AE890(void);
void func_001AEDB0(void);
void Btl_StartPhase1(void);
void Btl_StepTimer(void);
void Btl_PopFileList(void);
void Btl_LoadFileSet(void);
s32 Btl_ReadCurFile(void *p);
s32 Btl_ReadFighterFile(void);
void func_001AFAB0(u8 *p, s32 a);
void Btl_TaskLoadWait(Fighter *f);
f32 func_001B04D0(f32 *p);
void Btl_AddFileLoaders(void);
s32 func_001B0700(void);
s32 func_001B07C0(void);
s32 func_001B0D10(void);
void func_001B0E40(void);
void BtlIntWait_Start(void);
void Fighter_ResetSpeed1B18B0(Fighter *f);
void func_001B1900(Fighter *f);
void Fighter_ResetSpeed1B1BB0(Fighter *f);
void Fighter_ResetSpeed1B2160(Fighter *f);
void func_001B21B0(Fighter *f);
void Fighter_ResetSpeed1B2490(Fighter *f);
void func_001B27D0(Fighter *f);
void func_001B2C80(Fighter *f);
void func_001B30E0(void);
void func_001B30F0(void *p);
void func_001B3100(Fighter *f);
void func_001B3140(Fighter *f);
void func_001B3660(Fighter *f);
void Fighter_ResetSpeed1B3960(Fighter *f);
void func_001B39B0(Fighter *f);
void func_001B3BF0(Fighter *f);
void func_001B3C40(Fighter *f);
void func_001B3E70(Fighter *f);
void func_001B3EA0(Fighter *f);
void Fighter_ResetSpeedOne1B4280(Fighter *f);
void func_001B4C10(Fighter *f);
void func_001B4C60(Fighter *f);
void Fighter_ResetSpeed1B5180(Fighter *f);
void func_001B51D0(Fighter *f);
void func_001B5490(Fighter *f);
void func_001B54E0(Fighter *f);
void func_001B57A0(Fighter *f);
void func_001B57F0(Fighter *f);
void func_001B5AF0(Fighter *f);
void func_001B5B30(Fighter *f);
void Fighter_ClearF17BC(Fighter *f);
void func_001B5DB0(Fighter *f);
void func_001B60E0(Fighter *f);
void Fighter_ResetSpeed1B6470(Fighter *f);
void func_001B64C0(Fighter *f);
void func_001B6800(Fighter *f);
void func_001B6820(Fighter *f);
void func_001B6830(FighterSt *f);
void func_001B6960(Fighter *f);
void func_001B6EC0(Fighter *f);
void func_001B6EE0(Fighter *f);
void func_001B7090(Fighter *f);
void func_001B75A0(Fighter *f);
void func_001B7C50(Fighter *f);
void func_001B82E0(void);
void func_001B82F0(Fighter *f);
void func_001B8380(FighterSt *f);
void func_001B84F0(Fighter *f);
void func_001B8780(Fighter *f);
void func_001B9040(Fighter *f);
void func_001B9070(Fighter *f);
void func_001B9330(Fighter *f);
void func_001B9A80(Fighter *f);
void func_001BA7B0(Fighter *f);
void func_001BAE10(Fighter *f);
void func_001BB2C0(Fighter *f);
void func_001BBF50(Fighter *f);
void func_001BBFD0(Fighter *f);
void func_001BC110(Fighter *f);
void func_001BC220(Fighter *f);
void func_001BC270(Fighter *f);
void func_001BC3F0(Fighter *f);
void func_001BCC30(Fighter *f);
void func_001BCCD0(Fighter *f);
void func_001BCE50(Fighter *f);
void func_001BCF30(Fighter *f);
void func_001BD490(Fighter *f);
void func_001BD520(Fighter *f);
void func_001BD6D0(Fighter *f);
void func_001BDAA0(Fighter *f);
void func_001BDE30(Fighter *f);
void func_001BDF20(Fighter *f);
void func_001BE280(Fighter *f);
void func_001BE360(Fighter *f);
void func_001BE3B0(Fighter *f);
void func_001BE670(Fighter *f);
void func_001BEA60(Fighter *f);
void func_001BEB50(Fighter *f);
void func_001BEC70(Fighter *f);
void func_001BED60(Fighter *f);
void func_001BF090(Fighter *f);
void func_001BF170(Fighter *f);
void func_001BF230(Fighter *f);
void func_001BF350(Fighter *f);
void func_001BF400(Fighter *f);
void func_001BF450(Fighter *f);
s32 func_001C21C0(Fighter *f);
s32 func_001C2340(Fighter *f);
s32 func_001C26A0(void *p);
s32 func_001C27E0(void *p);
s32 func_001C28F0(void *p);
s32 func_001C2A00(Fighter *f);
inline s32 cvt_w_s_asm(f32 x);
s32 func_001C3D10(Fighter *f);
void func_001C3E10(void);
void func_001C5F20(void);
void func_001C6120(void *a0);
void func_001C6350(void);
void func_001C6780(void);
void BtlChara_Reset(s32 i);
void Fighter_ClearFlags(Fighter *f, s32 bits);
void Fighter_SetFlags(Fighter *f, s32 bits);
void func_001C75D0(Fighter *f, s32 mode);
s32 BtlChara_GetF2710(s32 i);
s32 BtlChara_GetF270C(s32 i);
void *func_001C7D70(s32 i);
void func_001C8480(Fighter *f, s32 i);
s32 func_001C89A0(Fighter *f, s32 i);
s32 func_001C8A50(Fighter *f, s32 i, s32 a2, s32 a3, s32 t0);
void func_001C9310(void);
s32 func_001C9390(u8 *p);
void func_001C95F0(Fighter *f, s32 i);
void func_001C9610(void *p, s32 flag);
void func_001C9840(CdNode *p);
s32 func_001C9A70(void *p);
inline u8 *inline_fn(u8 *arg0, int arg1)
{
  return arg0 + arg1;
}

void func_001B91B0(u8 *arg0)
{
  s16 temp_v0;
  int new_var2;
  u8 *new_var;
  new_var = (u8 *) arg0;
  *((s16 *) inline_fn(new_var, 0xCAE)) = (s16) (*((s16 *) inline_fn(new_var, 0xCAC)));
  *((s16 *) (new_var + 0xCAC)) = 0x15;
  if ((*((s16 *) inline_fn(new_var, 0xCAE))) == (*((s16 *) inline_fn(new_var, 0xCAC))))
  {
    *((s16 *) (new_var + 0xCB0)) = (s16) ((*((s16 *) (new_var + 0xCB0))) + 1);
  }
  else
  {
    *((s16 *) (new_var + 0xCB0)) = 0;
  }
  temp_v0 = *((s16 *) inline_fn(new_var, 0xCAC));
  new_var2 = 0xCB2;
  switch (temp_v0)
  {
    case 0:
      *((u16 *) inline_fn(new_var, new_var2)) = 1U;
      break;

    case 1:
      *((u16 *) (new_var + 0xCB2)) = 2U;
      break;

    case 4:
      *((u16 *) inline_fn(new_var, 0xCB2)) = 4U;
      break;

    case 5:
      *((u16 *) (new_var + 0xCB2)) = 8U;
      break;

    case 6:
      *((u16 *) (new_var + 0xCB2)) = 0x10U;
      break;

    case 7:

    case 8:
      *((u16 *) (new_var + 0xCB2)) = 0x20U;
      break;

    case 9:
      *((u16 *) (new_var + 0xCB2)) = 0x40U;
      break;

    case 11:
      *((u16 *) inline_fn(new_var, 0xCB2)) = 0x80U;
      break;

    default:
      *((u16 *) (new_var + 0xCB2)) = 0U;
      break;

  }

  if ((*((s8 *) inline_fn(new_var, 0x2010))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x8000);
  }
  if ((*((s8 *) inline_fn(new_var, 0x2011))) != 0)
  {
    *((u16 *) (new_var + 0xCB2)) = (u16) ((*((u16 *) (new_var + 0xCB2))) | 0x4000);
  }
  *((s32 *) inline_fn(new_var, 0xB70)) = (s32) ((*((s8 *) (new_var + 0x183C))) + 0xA0);
  func_001E3460(arg0);
  *((s32 *) (new_var + 0xCA4)) = 0x3F800000;
  *((s32 *) inline_fn(new_var, 0xCA8)) = 0;
  *((s32 *) inline_fn(new_var, 0xCB8)) = 0;
  *((s8 *) (new_var + 0x2003)) = 0;
  *((s8 *) inline_fn(new_var, 0x1FFD)) = 1;
  *((s16 *) inline_fn(new_var, 0x181C)) = 0;
  *((s8 *) inline_fn(new_var, 0x2004)) = 0;
  func_001DD680(arg0);
}
