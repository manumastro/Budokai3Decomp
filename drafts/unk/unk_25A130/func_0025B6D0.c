/* Draft (not built): func_0025B6D0 at 0x0025B6D0, size 0xB4, segment unk/unk_25A130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xBC, original 0xB4; then decomp-permuter: score 1835 -> 1380
 * Original: asm/nonmatchings/unk/unk_25A130/func_0025B6D0.s */

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
} ScrArg;
typedef struct ScrCmd
{
  char pad0[0x2C];
  ScrArg *args;
} ScrCmd;
typedef struct ScrObj
{
  char pad0[0x34];
  s32 f34;
  char pad38[4];
  f32 f3C;
  f32 f40;
  f32 f44;
  char pad48[4];
  u16 f4C[2];
  f32 f50;
  f32 f54;
  f32 f58;
  f32 f5C;
  char pad60[4];
  s16 f64;
} ScrObj;
typedef struct Sys70
{
  char pad0[0x70];
  s32 f70;
  char pad74[0x1C];
  s32 f90;
  s32 f94;
} Sys70;
typedef struct SysDF0
{
  char pad0[0xDF0];
  s16 fDF0;
} SysDF0;
extern ScrObj *D_0058D4D0[];
extern ScrObj *D_0058D4E8[];
extern ScrObj *D_0058D4EC[];
extern ScrObj *D_0058D4F0[];
extern ScrObj *D_0058D4F4[];
extern Sys70 *gWave;
extern SysDF0 *gBtlSys;
extern void *D_00470000;
extern void memset(void *, s32, s32);
extern void func_00125740(void *, void *, s32);
extern void func_0021C540(f32, f32, f32);
extern void func_0021C560(s32, f32, f32, f32);
extern void func_0021C5B0(s32);
extern void func_0021C5D0(s32);
extern s32 func_0021C360();
extern void func_00215500(s32);
s32 func_0025A3A0(s32, f32, f32);
typedef struct BtlPlayer
{
  char pad0[0x1350];
  s32 f1350;
} BtlPlayer;
typedef struct BtlWork
{
  char pad0[0x8934];
  BtlPlayer *players[2];
} BtlWork;
extern BtlWork *gBattle;
typedef struct EffSrc
{
  s32 f0;
  char pad4[4];
  BtlPlayer *f8;
  char padC[0x14];
  f32 f20;
} EffSrc;
typedef struct Eff
{
  char pad0[8];
  void *f8;
  void *fC;
  char pad10[8];
  f32 f18;
  char pad1C[4];
  char f20[0x58];
} Eff;
typedef struct SubWork
{
  s32 f0;
  void *f4;
} SubWork;
typedef struct ScrTask
{
  char pad0[0x30];
  SubWork w;
} ScrTask;
typedef struct ResTbl
{
  char pad0[0x14];
  void **f14;
  char pad18[4];
  void **f1C;
} ResTbl;
typedef struct SysE60
{
  char pad0[0xE60];
  void *fE60;
  char padE64[4];
  ResTbl *fE68;
} SysE60;
extern char D_0046AF20[];
extern void *D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void amModel_SetCurrent(void *, s32);
extern ScrTask *amTask_Create(void *, void *, s32, s32, s32, char *);
extern void *func_0022D860(void *, f32);
extern void *func_0020D9F0(s32);
extern Eff *func_00215320(s16, s32);
extern void func_00211650(void);
extern void func_00210240(void);
extern void func_00212560(void);
extern void CutIn_TaskMain(void);
extern void CutIn_TaskKill(void);
extern void A2d_CallHandler(s32, s32 *);
s32 func_0025AA20(s32);
s32 func_0025A7C0(s32, s32);
s32 func_0025A580(s32, s32);
s32 func_0025A130(s32, s32);
extern char D_0046AEA0[];
extern char D_0046AEB0[];
extern void func_00255E10(void);
extern void func_00254B50(void);
extern void func_00254AC0(void);
typedef struct A1Work2
{
  void *f0;
  void *f4;
  void *f8;
  void *fC;
  void *f10;
  void *f14;
  char pad18[0x18];
  void *f30;
  void *f34;
} A1Work2;
typedef struct A1Task2
{
  char pad0[0x30];
  A1Work2 w;
} A1Task2;
typedef struct A1Work
{
  A1Task2 *f0;
  s32 f4;
  char pad8[4];
  f32 fC;
  char pad10[0x10];
  s16 f20[2];
} A1Work;
typedef struct A1Task
{
  char pad0[0x30];
  A1Work w;
} A1Task;
extern void func_001E9B00(s32, s32, s32, s32, f32, f32);
extern void func_0022C7D0(void *, s32, f32);
typedef struct A3Work2
{
  char pad0[0x2C];
  void *f2C[2];
} A3Work2;
typedef struct A3Work
{
  A3Work2 *f0Task;
  char pad4[4];
  s32 f8;
  char padC[0xC];
  f32 f18[2];
  f32 f20[2];
  f32 f28[2];
  s16 f30[2];
  s16 f34[2];
} A3Work;
extern char D_0046AEC0[];
extern char D_0046AED0[];
extern void func_00257860(void);
extern void func_00256F80(void);
extern void func_00256EB0(void);
extern s32 func_0021C460();
extern void amTask_Kill(void *);
typedef struct A5Work2
{
  void *f0;
  void *f4;
  char pad8[4];
  void *fC[2];
  void *f14[2];
  char pad1C[8];
  void *f24[2];
} A5Work2;
typedef struct A5Task2
{
  char pad0[0x30];
  A5Work2 w;
} A5Task2;
typedef struct A5Work
{
  A5Task2 *f0;
  char pad4[0xC];
  f32 f10;
  f32 f14;
  char pad18[0x1C];
  s16 f34[2];
} A5Work;
typedef struct A5Task
{
  char pad0[0x30];
  A5Work w;
} A5Task;
extern char D_0046AEE0[];
extern char D_0046AEF0[];
extern void func_002587F0(void);
extern void func_00257E30(void);
extern void func_00257DA0(void);
typedef struct A7Work2
{
  void *f0;
  void *f4;
  void *f8;
  void *fC;
  void *f10;
  void *f14;
  char pad18[0x18];
  void *f30;
  void *f34;
} A7Work2;
typedef struct A7Task2
{
  char pad0[0x30];
  A7Work2 w;
} A7Task2;
typedef struct A7Work
{
  A7Task2 *f0;
  s32 f4;
  char pad8[0x18];
  s16 f20[2];
} A7Work;
typedef struct A7Task
{
  char pad0[0x30];
  A7Work w;
} A7Task;
extern char D_0046AF00[];
extern char D_0046AF10[];
extern s32 D_0047035C;
extern void func_002596A0(void);
extern void func_00258C20(void);
extern void func_00258AC0(void);
extern void *func_0022D670(void *, f32);
extern s32 func_002544A0(s32, s32);
typedef struct AaWork2
{
  void *f0;
  void *f4;
  void *f8;
  void *fC;
  char pad10[0x14];
  void *f24;
} AaWork2;
typedef struct AaTask2
{
  char pad0[0x30];
  AaWork2 w;
} AaTask2;
typedef struct AaWork
{
  AaTask2 *f0;
  char pad4[8];
  f32 fC;
  f32 f10;
  s32 f14;
  s32 f18;
  s32 f1C;
  s32 f20;
  s32 f24;
  char pad28[0xC];
  s32 f34;
} AaWork;
typedef struct AaTask
{
  char pad0[0x30];
  AaWork w;
} AaTask;
s32 memcpy(void *, void *, s32);
extern s32 func_0020F970;
extern void func_00210C20(void);
extern void func_0013AFA0(void *);
typedef struct B8F0Dst
{
  char pad0[0x10];
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
  s32 f3C;
  f32 f40;
  f32 f44;
  f32 f48;
  char pad4C[4];
  char f50[0x40];
  f32 f90;
  f32 f94;
  f32 f98;
  char pad9C[4];
  f32 fA0;
  f32 fA4;
  f32 fA8;
  f32 fAC;
  f32 fB0;
  f32 fB4;
  f32 fB8;
  f32 fBC;
} B8F0Dst;
typedef struct B8F0Src
{
  char pad0[0x10];
  f32 f10;
  f32 f14;
  f32 f18;
  char pad1C[4];
  f32 f20;
  f32 f24;
  f32 f28;
  char pad2C[4];
  f32 f30;
  f32 f34;
  f32 f38;
  char pad3C[4];
  f32 f40;
  f32 f44;
  f32 f48;
  char pad4C[0x20];
  f32 f6C;
  f32 f70;
  char pad74[0x14];
  f32 f88;
  f32 f8C;
  f32 f90;
  f32 f94;
  f32 f98;
  f32 f9C;
  f32 fA0;
  f32 fA4;
} B8F0Src;
typedef struct B8F0Arg
{
  s32 f0;
  char pad4[0x14];
  B8F0Src *f18;
} B8F0Arg;
s32 Scr_CmdA2dCall31(void *ctx, ScrCmd *cmd);
s32 Scr_CmdNop_156(void);
s32 Scr_CmdNop_155(void);
s32 Scr_CmdNop_154(void);
s32 Scr_CmdNop_153(void);
s32 Scr_CmdSwitchCall21C5B0(void *ctx, ScrCmd *cmd);
s32 Scr_CmdCall21C540(void *ctx, ScrCmd *cmd);
s32 Scr_CmdCall21C560(void *ctx, ScrCmd *cmd);
s32 Scr_CmdObjSetF4CIfZero2(void *ctx, ScrCmd *cmd);
s32 Scr_CmdPlayersCall25A7C0(void *ctx, ScrCmd *cmd);
s32 func_0025ADE0(void *ctx, ScrCmd *cmd);
s32 func_0025AE10(void *t, ScrCmd *c);
s32 Scr_CmdPlayerCall25AA20(void *ctx, ScrCmd *cmd);
s32 Scr_CmdCall25A3A0(void *ctx, ScrCmd *cmd);
s32 Scr_CmdPlayersCall25A580(void *ctx, ScrCmd *cmd);
s32 Scr_CmdObjSetF4CIfZero(void *ctx, ScrCmd *cmd);
s32 Scr_CmdObjSetF3C(void *ctx, ScrCmd *cmd);
s32 Scr_CmdObjSetF40F44(void *ctx, ScrCmd *cmd);
s32 Scr_CmdObjSetF64(void);
s32 Scr_CmdPlayersCall25A130(void *ctx, ScrCmd *cmd);
s32 Scr_CmdGetBtlSysFDF0(void *ctx, s32 *out);
s32 CutIn_Start(void *ctx, ScrCmd *cmd);
f32 func_0025B290(void);
s32 func_0025B2E0(f32 v);
void func_0025B790(EffSrc *e);
void func_0025B840(EffSrc *e);
void func_0025B8F0(B8F0Arg *a);
void Wave_TaskAfterDraw(void);
void Wave_TaskDraw(void);
void Wave_TaskMain(void);
void func_0025BE20(void);
void func_0025BE30(void);
void func_0025B6D0(u8 *arg0)
{
  s32 temp_s0;
  u8 *temp_v0;
  u8 *temp_v0_2;
  temp_s0 = *((s32 *) (((u8 *) (*((u8 **) (((u8 *) arg0) + 8)))) + 0x1350));
  func_0020D9F0(*((s32 *) (((u8 *) arg0) + 0)));
  M2C_ERROR();
  temp_v0 = (u8 *) func_00215320(((s64) (((s64) temp_s0) << 0x30)) >> 0x30, 0x80);
  if (temp_v0 != ((void *) 0))
  {
    *((void (**)()) (((u8 *) temp_v0) + 8)) = func_00211650;
    *((s32 *) (((u8 *) temp_v0) + 0xC)) = 0;
    *((f32 *) (((u8 *) temp_v0) + 0x18)) = (f32) (*((f32 *) (((u8 *) arg0) + 0x20)));
    temp_v0_2 = (u8 *) func_00215320(((s64) (((s64) temp_s0) << 0x30)) >> 0x30, 0x100);
    if (temp_v0_2 != ((void *) 0))
    {
      temp_v0_2++;
      temp_v0_2--;
      *((s32 **) (((u8 *) temp_v0_2) + 8)) = &func_0020F970;
      *((void (**)()) (((u8 *) temp_v0_2) + 0xC)) = func_00212560;
      *((f32 *) (((u8 *) temp_v0_2) + 0x18)) = (f32) (*((f32 *) (((u8 *) arg0) + 0x20)));
      memcpy(temp_v0_2 + 0x20, arg0, 0x58);
    }
  }
}
