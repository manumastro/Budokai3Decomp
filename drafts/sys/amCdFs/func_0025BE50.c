/* Draft (not built): func_0025BE50 at 0x0025BE50, size 0x8C, segment sys/amCdFs (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 19 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x84, original 0x8C; then decomp-permuter: score 2915 -> 2300
 * Original: asm/nonmatchings/sys/amCdFs/func_0025BE50.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct CdCache CdCache;
typedef struct CdReq
{
  s8 type;
  s8 own;
  s8 heap;
  s8 pad3;
  s16 state;
  char name[0x3A];
  CdCache *cache;
  s32 id;
  s32 size;
  s32 sectors;
  s32 pos;
  void *buf;
  struct CdReq *next;
  struct CdReq *prev;
  s32 pad60;
} CdReq;
struct CdCache
{
  s8 type;
  s8 own;
  char name[0x3A];
  s32 refs;
  s32 id;
  s32 size;
  s32 sectors;
  s32 pos;
  void *buf;
  s32 state;
  s32 pad58;
};
typedef struct CdDir
{
  u32 flags;
  void *buf;
  char name[0x3A];
  char path[0x3A];
} CdDir;
typedef struct CdInit
{
  char *name;
  s32 a;
  s32 b;
  s32 c;
} CdInit;
typedef struct CdInitDvd
{
  char *name;
  s32 a;
  s32 b;
  s32 c;
  s32 d;
} CdInitDvd;
typedef struct CdStream
{
  s32 a;
  s32 b;
  void *buf;
  s32 c;
} CdStream;
extern char D_0046AFB0[];
extern char D_0046AFC8[];
extern char D_0046AFD0[];
extern char D_0046AFF0[];
extern char D_0046B010[];
extern char D_0046B050[];
extern s32 D_00470750;
extern s32 D_00470754;
extern s32 D_00470758;
extern s32 D_0047075C;
extern s32 D_00470760;
extern s32 D_00470764;
extern CdReq *D_00470768;
extern CdReq **D_0047076C;
extern s32 D_00470770;
extern CdReq *gCdReqHead;
extern CdReq *gCdReqTail;
extern s32 D_0047077C;
extern CdCache *D_00470780;
extern CdCache **D_00470784;
extern s32 D_00470788;
extern s32 D_0047078C;
extern s32 D_00470790;
extern CdDir *D_00470794;
extern s32 D_00470798;
extern CdStream D_0058D540;
extern char D_0058D580[];
extern s32 D_0058EAF0[];
extern void *D_0058EBF0[];
extern s32 func_00126B00(char *, ...);
extern void memset(void *, s32, s32);
extern void func_0015DAE8(CdInit *);
extern void func_0015DC00(CdStream *);
extern void func_0015D720(CdInitDvd *);
extern void func_0015D850(CdStream *);
extern void *func_00124940(s32, s32);
extern void func_00156210(void);
extern void func_00128040(char *, char *, s32);
extern s32 func_00127E88(char *, char *, s32);
extern void amHeap_Free(void *);
CdReq *amCdFs_AllocReq(void);
void amCdFs_Start(void);
void amCdFs_Close(CdReq *, s32);
void amCdFs_Reset(s32);
CdCache *amCdFs_AllocCache(void);
extern void amCdFs_FreeCache(CdCache *);
extern s32 func_00118C08(s32);
extern s32 func_00119420(s32);
extern void func_00154710(s32, char *, s32, void *);
extern s32 func_00155118(char *, s32);
extern s32 func_00155290(s32, s32);
extern s32 ADXF_GetFsizeSct(s32);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_001553A0(s32);
extern void ADXF_ReadNw(s32, s32, void *);
extern CdCache *amCdFs_FindCache(CdReq *);
extern void amCdFs_Unlink(CdReq *);
extern s32 func_00155FF8(s32);
extern s32 func_00119988(void);
extern s32 ADXF_GetStat(s32);
extern s32 func_00154B68(s32);
extern void ADXF_StopNw(s32);
extern CdReq *amCdFs_LoadDir(s32, char *, s32);
extern void func_00157FF0(void);
extern void Wave_TaskMain(void);
extern void Wave_TaskDraw(void);
extern void Wave_TaskAfterDraw(void);
extern char D_0046AF78[];
extern char D_0046AF88[];
extern char D_0046AF98[];
extern void *amTask_Create(void *, void *, s32, s32, s32, char *);
void Wave_Create(void);
void amCdFs_Init(s32 a0, s32 a1, s32 mode, s32 stream, s32 nreq, s32 ncache, s32 ndir, s32 *sizes);
void amCdFs_SetHeap(u8 heap);
CdReq *amCdFs_ReadFile(char *name, void *buf, s32 keep);
CdReq *amCdFs_ReadFileId(s32 id, void *buf, s32 keep);
void amCdFs_CloseAll(s32 arg);
void amCdFs_ReleaseCache(CdCache *c);
void amCdFs_Update(void);
void amCdFs_Main(void);
void amCdFs_FreeReq(CdReq *r);
s32 amCdFs_CheckDir(s32 dir, char *name);
void func_0025BE50(void)
{
  int new_var;
  new_var = 0x400;
  amTask_Create(Wave_TaskMain, 0, 0x3800, new_var, (0, 0), 0);
  amTask_Create(Wave_TaskDraw, 0, 0x3900, 0x400, 0, 0);
  amTask_Create(Wave_TaskAfterDraw, 0, 0x39F0, 0x400, 0, 0);
}
