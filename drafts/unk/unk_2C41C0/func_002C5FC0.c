/* Draft (not built): func_002C5FC0 at 0x002C5FC0, size 0xEC, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); then decomp-permuter: score 230 -> 20
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C5FC0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct TaskEff2C41C0
{
  char pad0[0x18];
  void *f18;
  char pad1C[0x22];
  s16 f3E;
} TaskEff2C41C0;
extern void amTask_Kill(void *);
typedef struct EffPart2C41C0
{
  char pad0[0x30];
  f32 f30;
  struct EffPart2C41C0 *f34;
  struct EffPart2C41C0 *f38;
  s32 f3C;
  s32 f40;
} EffPart2C41C0;
typedef struct EffEnt2C41C0
{
  char pad0[0x40];
  s32 f40;
  char pad44[0x18];
  s32 f5C;
  char pad60[0x18];
  s32 f78;
} EffEnt2C41C0;
typedef struct EffReq2C41C0
{
  EffEnt2C41C0 *f0;
  char pad4[0x8];
  char *fC;
  char *f10;
  char pad14[0x10];
  f32 f24;
  char pad28[0x8];
  s64 f30;
  char pad38[0x6];
  s16 f3E;
  s32 f40;
  char pad44[0xC];
  s64 f50;
  char pad58[0x4];
  s16 f5C;
} EffReq2C41C0;
extern void memset(void *, s32, s32);
extern s64 D_004563E0[];
extern s8 D_004703F4;
typedef struct Dst2C41C0
{
  char pad0[0x20];
  void *f20;
  s32 f24;
  void *f28;
  void *f2C;
  char pad30[0x38];
  s32 f68;
  s32 f6C;
} Dst2C41C0;
typedef struct Src2C41C0
{
  void *f0;
  s32 f4;
  void *f8;
  void *fC;
  char *f10;
  char pad14[0x4];
  s32 f18;
  s32 f1C;
  char pad20[0xC];
  s16 f2C;
} Src2C41C0;
typedef struct Sub2C41C0
{
  char pad0[0x14];
  struct TutChr *f14;
} Sub2C41C0;
typedef struct Task2C41C0
{
  char pad0[0x34];
  struct TutChr *f34;
  char pad38[0x20];
  s16 f58;
} Task2C41C0;
extern void func_002152E0(void);
typedef struct EffSubA2C41C0
{
  char pad0[0x84];
  s16 f84;
} EffSubA2C41C0;
typedef struct EffSubB2C41C0
{
  EffSubA2C41C0 *f0;
  char pad4[0x36];
  s16 f3A;
} EffSubB2C41C0;
typedef struct EffTask2C41C0
{
  char pad0[0x30];
  EffSubB2C41C0 *f30;
} EffTask2C41C0;
extern void (*D_004563D0[])(EffSubB2C41C0 *);
extern s32 D_005BD260[];
typedef struct CmdHistEnt
{
  s32 f0;
  s32 f4;
  s16 *f8;
  s32 fC;
} CmdHistEnt;
typedef struct CmdHist
{
  char pad0[0x1FC];
  CmdHistEnt ent[32];
  s32 wr;
  s32 rd;
} CmdHist;
typedef struct TutChr
{
  char pad0[0xBA4];
  s32 fBA4;
  char padBA8[0xCAC - 0xBA8];
  s16 fCAC;
  s16 fCAE;
  char padCB0[2];
  u8 fCB2;
  char padCB3[0xCB8 - 0xCB3];
  f32 fCB8;
  char padCBC[0x1350 - 0xCBC];
  s32 f1350;
  struct TutChr *f1354;
  char pad1358[8];
  CmdHist f1360;
} TutChr;
typedef struct TutWork
{
  TutChr *chr;
  char pad4[0x1C];
  s32 f20;
  s32 f24;
  char pad28[8];
  s8 f30;
  char pad31;
  s16 f32;
  char pad34[2];
  s8 f36;
  s8 f37;
  s8 f38;
  s8 f39;
  s8 f3A;
  s8 f3B;
  s8 f3C;
} TutWork;
typedef struct TutEvent
{
  char pad0[2];
  s16 f2;
  char pad4[2];
  s8 f6;
  u8 f7;
  char pad8[4];
  s16 **fC;
} TutEvent;
typedef struct EffWork
{
  char pad0[0x4D84];
  s16 f4D84;
  s16 f4D86;
  char pad4D88[8];
} EffWork;
typedef struct TutCmd
{
  s16 v[12];
} TutCmd;
typedef struct TutCmd4
{
  s16 v[4];
} TutCmd4;
extern TutWork *gTutWork;
extern char *gBattle;
extern EffWork *gEffWork;
extern struct EffFile *func_0020B020(s32, s32, s32);
typedef struct Sub2C6EF0
{
  char pad0[0x54];
  f32 f54;
  f32 f58;
} Sub2C6EF0;
typedef struct Obj2C6EF0
{
  Sub2C6EF0 *f0;
  char pad4[0x28];
  f32 f2C;
  char pad30[0x10];
  s32 f40;
  s32 f44;
} Obj2C6EF0;
typedef struct I4_2C6EF0
{
  s32 a;
  s32 b;
  s32 c;
  s32 d;
} I4_2C6EF0;
typedef struct V4_2C6EF0
{
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} V4_2C6EF0;
extern void func_00135D40(void *, void *, void *);
extern void amDraw_ClosePacket(s32);
typedef struct EffEnt
{
  char pad0[0x30];
  f32 f30;
  char pad34[0x7C];
} EffEnt;
typedef struct EffFile
{
  char pad0[8];
  s32 f8;
  s32 fC;
} EffFile;
typedef struct EffReq
{
  char pad0[0x10];
  TutChr *f10;
  char pad14[0x14];
  s16 f28;
  s16 f2A;
  s16 f2C;
} EffReq;
extern EffFile *D_005BD154[];
extern char D_0046EF90[];
extern EffFile *func_0020B020(s32, s32, s32);
extern s32 func_00127E88(void *, char *, s32);
extern void func_002C9EF0(EffEnt *, EffReq *);
extern s32 D_005BD270[];
extern s32 D_005BD26C[];
extern s32 D_005BD268[];
extern s32 D_005BD264[];
extern s32 func_001D99C0(TutChr *, s32);
extern TutCmd D_00456660;
extern TutCmd4 D_00470140;
extern TutCmd4 D_00470138;
inline void VecCopy(void *d, void *s);
void func_002C5EB0(Dst2C41C0 *d, Src2C41C0 *s);
void func_002C6B60(TaskEff2C41C0 *t);
void func_002C6BF0(EffReq2C41C0 *s);
void func_002C6EF0(char *a0, Obj2C6EF0 *a1, V4_2C6EF0 *a2);
void func_002C7C50(TaskEff2C41C0 *t);
void func_002C7CE0(EffReq2C41C0 *s);
void func_002C88A0(TaskEff2C41C0 *t);
void func_002C8930(EffReq2C41C0 *s);
void func_002C9950(TaskEff2C41C0 *t);
void func_002C99E0(EffReq2C41C0 *s);
void func_002C9BC0(EffTask2C41C0 *t);
void func_002CA230(s32 x);
void func_002CA290(s32 x);
void func_002CA3F0(void);
void func_002CA440(void);
void func_002CA490(void);
void func_002CA4A0(void);
s32 func_002CA4F0(TutEvent *e);
s32 func_002CA5D0(TutChr *c);
s32 func_002CA690(TutEvent *e);
s32 func_002CA730(TutEvent *e);
s32 func_002CA7D0(CmdHist *h, s16 *cmd);
s32 func_002CA8A0(void);
s32 func_002CA8D0(void);
s32 func_002CA8F0(void);
s32 func_002CA950(void);
s32 func_002CA9C0(void);
s32 func_002CAA30(void);
s32 func_002CAA50(void);
s32 func_002CAA60(void);
s32 func_002CAA70(void);
s32 func_002CAA80(void);
s32 func_002CAAE0(void);
s32 func_002CAB30(void);
s32 func_002CAB60(void);
s32 func_002CABA0(void);
s32 func_002CABD0(void);
s32 func_002CAC10(void);
s32 func_002CAC40(void);
s32 func_002CAC80(void);
s32 func_002CACC0(void);
s32 func_002CACE0(void);
s32 func_002CAD70(void);
s32 func_002CADF0(void);
s32 func_002CAE50(void);
s32 func_002C5FC0(u8 *arg0)
{
  s16 temp_v1;
  u8 *new_var;
  s32 var_a1;
  new_var = (u8 *) (arg0 + 0x20);
  if ((*((s16 *) (((u8 *) arg0) + 0x58))) & 0x80)
  {
    var_a1 = 0;
  }
  else
  {
    var_a1 = *((s32 *) (((u8 *) (*((u8 **) (new_var + 0x14)))) + 0x1350));
  }
  temp_v1 = *((s16 *) (((u8 *) gEffWork) + 0x4D86));
  if (temp_v1 & 0x8000)
  {
    func_002152E0();
    return 1;
  }
  if ((var_a1 == 0) && (temp_v1 & 0x2000))
  {
    func_002152E0();
    if ((*((s16 *) (((u8 *) gEffWork) + 0x4D84))) == 0)
    {
      *((s16 *) (((u8 *) gEffWork) + 0x4D86)) = (s16) ((*((s16 *) (((u8 *) gEffWork) + 0x4D86))) & (~0x2000));
    }
    return 1;
  }
  if ((var_a1 == 1) && (temp_v1 & 0x1000))
  {
    func_002152E0();
    if ((*((s16 *) (((u8 *) gEffWork) + 0x4D84))) == 0)
    {
      *((s16 *) (((u8 *) gEffWork) + 0x4D86)) = (s16) ((*((s16 *) (((u8 *) gEffWork) + 0x4D86))) & (~0x1000));
    }
    return 1;
  }
  return 0;
}
