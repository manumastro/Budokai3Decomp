/* Draft (not built): func_002CB250 at 0x002CB250, size 0xB0, segment unk/unk_2CAED0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 14 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); then decomp-permuter: score 670 -> 240
 * Original: asm/nonmatchings/unk/unk_2CAED0/func_002CB250.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
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
typedef struct TutBuf
{
  s32 f0;
  s32 f4;
  s16 f8;
  s16 fA;
} TutBuf;
typedef struct TutBlk
{
  char pad0[0x14];
  s16 f14;
  char pad16[4];
  s16 f1A;
} TutBlk;
typedef struct TutChrB
{
  char pad0[0x1CF4];
  TutBlk *f1CF4;
} TutChrB;
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
  char pad1764[0x1CF4 - 0x1764];
  TutBlk *f1CF4;
} TutChr;
typedef struct TutWork
{
  TutChr *chr;
  s32 f4;
  s32 f8;
  s32 fC;
  s32 f10;
  f32 f14;
  f32 f18;
  f32 f1C;
  s32 f20;
  s32 f24;
  char pad28[8];
  s8 f30;
  char pad31;
  s16 f32;
  s16 f34;
  s8 f36;
  s8 f37;
  s8 f38;
  s8 f39;
  s8 f3A;
  s8 f3B;
  s8 f3C;
} TutWork;
extern TutWork *gTutWork;
extern u8 *gBattle;
extern s32 D_004565B0[];
extern void memset(void *, s32, s32);
extern void amTask_KillGroup(s32, s32, s32);
extern void func_002EB280(void);
extern void func_002EB290(void);
extern void func_002EB560(void *);
extern void func_001C8020(s32, void *);
extern void Fighter_CreateHyperCtrl(void *);
extern void func_002EB3E0(s32, s32);
extern void A2d_CallHandler(s32, void *);
extern void func_002E9BA0(s32);
extern void (*D_004564A0[])(void);
extern void (*D_004564C0[])(void);
extern void func_002CBFF0(s32, TutChr *);
typedef struct Cmd8
{
  s16 v[4];
} Cmd8;
typedef struct Cmd32
{
  Cmd8 e[4];
} Cmd32;
extern Cmd32 D_00456640;
extern s32 func_002CA7D0(CmdHist *h, s16 *cmd);
void func_002EB0D0(void);
s32 func_002CAED0(void);
s32 func_002CAF50(void);
s32 func_002CAFA0(void);
s32 func_002CB070(void);
s32 func_002CB0F0(void);
s32 func_002CB1D0(void);
s32 func_002CB300(void);
s32 func_002CB370(void);
s32 func_002CB420(void);
void func_002CB430(void);
void func_002CB440(void);
void func_002CB450(void);
void func_002CB460(void);
void func_002CB470(void);
void func_002CB4F0(void);
void func_002CBF50(void);
void func_002CBF60(void);
s32 func_002CC450(void);
s32 func_002CC4A0(void);
void func_002CC4C0(void);
void func_002CC4E0(void);
void func_002CC520(void);
void func_002CC610(void);
void func_002CC640(void);
void func_002CC710(void);
s32 func_002CB250(void)
{
  u8 *temp_a0;
  u8 *temp_a1;
  f32 *new_var;
  temp_a0 += 0;
  temp_a0 = *((u8 **) (((u8 *) gTutWork) + 0));
  temp_a1 = (u8 *) ((0, gTutWork + 0x20));
  new_var = (f32 *) (((u8 *) gTutWork) + 0x20);
  if ((*((s16 *) (((u8 *) temp_a0) + 0xCAC))) == 9)
  {
    *new_var = (f32) ((*((f32 *) (((u8 *) gTutWork) + 0x20))) + (*((f32 *) (((u8 *) gBattle) + 0x88F0))));
  }
  if ((*((s16 *) (((u8 *) temp_a0) + 0xCAC))) == 0xB)
  {
    *((f32 *) (((u8 *) temp_a1) + 4)) = (f32) ((*((f32 *) (((u8 *) temp_a1) + 4))) + (*((f32 *) (((u8 *) gBattle) + 0x88F0))));
  }
  if ((!((*new_var) < 30.0f)) && (!((*((f32 *) (((u8 *) temp_a1) + 4))) < 30.0f)))
  {
    return 1;
  }
  return 0;
}
