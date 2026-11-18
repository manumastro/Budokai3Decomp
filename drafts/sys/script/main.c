/* Draft (not built): main at 0x0014E4B0, size 0xCC, segment sys/script (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x80, original 0xCC; then decomp-permuter: score 2295 -> 2095
 * Original: asm/nonmatchings/sys/script/main.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct ScrCtx
{
  s32 r[8];
  u8 *base;
  u8 *x24;
  u8 *x28;
  s32 *sp;
  u8 *x30;
  u8 *x34;
  u8 *x38;
  u8 *stack;
} ScrCtx;
typedef struct ScrHeader
{
  char pad[0x14];
  s32 codeOffset;
  char pad18[8];
  s32 entry[1];
} ScrHeader;
typedef struct Blk80
{
  u8 b[0x80];
} Blk80;
typedef struct ScrMachine
{
  s32 id;
  ScrHeader *data;
  u8 *code;
  s32 state;
  s32 x10;
  s32 x14;
  s32 x18;
  s32 n;
  s32 x20;
  u8 *x24;
  u8 *x28;
  u8 *x2C;
  u8 *x30;
  Blk80 *x34;
  s32 size38;
  s32 size3C;
  s32 size40;
  void (*cb44)(struct ScrMachine *, s32);
  void (*cb48)(struct ScrMachine *, s32);
  void (*cb4C)(struct ScrMachine *, s32);
  void (*cb50)(void *, void *);
  void (*cb54)();
  s8 *x58;
} ScrMachine;
typedef struct ScrWork
{
  ScrMachine *m;
  ScrCtx *ctx;
  s16 x8;
  s16 slot;
  s32 xC;
  s32 x10;
  s32 x14;
} ScrWork;
typedef struct ScrTask
{
  char pad[0x30];
  ScrWork w;
} ScrTask;
extern s32 gScrMachineCount;
extern s32 gScrDebugAlloc;
extern u8 *gScrArea0;
extern s32 *gScrArea1;
extern s32 *gScrArea2;
extern s32 *gScrArea3;
extern Blk80 *gScrContexts;
extern ScrMachine *gScrMachines;
extern char D_0045F6F0[];
extern char D_0045F700[];
extern void *func_00124940(s32, s32);
extern void func_00124BC8(void *);
extern void *memset(void *, s32, u32);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void amHeap_Free(void *);
extern ScrTask *amTask_Create(s32 (*)(), void (*)(ScrTask *), u32, u32, u32, char *);
extern void amTask_KillGroup(s32, s32, s32);
extern f32 func_0011EE78(f32);
extern f32 func_0011F220(f32);
extern f32 func_0011F4C0(f32);
extern f32 func_0011F5A8(f32);
extern f32 func_0011F650(f32);
extern f32 func_0011F668(f32);
extern f32 func_0011F680(f32, f32);
extern f32 func_0011F6B0(f32, f32);
extern f32 sqrtf(f32);
void Scr_Free(void);
extern s32 Scr_TaskMain();
void Scr_TaskExit(ScrTask *task);
void Scr_Copy4(s8 *dst, s8 *src);
extern s32 Scr_ReadInt(ScrCtx *, u8 **);
extern f32 Scr_ReadFloat(ScrCtx *, u8 **);
extern u8 *Scr_IntOperand(ScrCtx *, u8 **);
extern u8 *Scr_FloatOperand(ScrCtx *, u8 **);
ScrTask *Scr_CreateTask(ScrMachine *, u8 *, s32);
s32 func_0012EAE0(s32);
extern s32 D_0047A5C0;
extern void amCdFs_Main(void);
extern void amDraw3d_SetDefaultRegs(void);
extern void amMc_Sync(void);
extern void amDbg_Draw(void);
extern void amDraw_ResetPackets(void);
extern void amTask_Run(void);
extern void func_001433F0(void);
extern void func_001470D0(void);
extern void func_001A3520(void);
void Scr_Init(s32 count, s32 n, s32 size0, s32 size1, s32 size2, s32 size3, s32 dbg);
void Scr_KillAllTasks(void);
s32 Scr_Alloc(s32 a, s32 b, s32 c);
void Scr_KillTasks(s32 i);
void Scr_SetData(s32 i, ScrHeader *data);
void Scr_SetCallback44(s32 i, void *f);
void Scr_SetStartCallback(s32 i, void *f);
void Scr_SetEndCallback(s32 i, void *f);
void Scr_SetTaskStartCallback(s32 i, void *f);
void Scr_SetTaskEndCallback(s32 i, void *f);
void Scr_Start(s32 i, s32 entry);
s32 ScrOp_Nop(void);
s32 ScrOp_MovI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_ClrI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_MovF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_ClrF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_OneF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_ItoF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_FtoI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_PushI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_PushF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_PopI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_PopF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_IncI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_DecI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_AddI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_SubI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_MulI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_DivI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_ModI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_NegI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_PowI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_IncF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_DecF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_AddF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_SubF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_MulF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_DivF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_ModF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_NegF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_PowF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_SqrtF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_And(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Or(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Xor(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Not(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Sin(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Cos(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Tan(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Asin(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Acos(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Atan(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Atan2(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_GtI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_TestI(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_GtF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_TestF(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Shl(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Shr(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Sar(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Rol(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Ror(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Jmp(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_JmpIf(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_JmpIfNot(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Call(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_CallIf(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_CallIfNot(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Ret(ScrMachine **sys, ScrCtx *ctx, u8 **pc);
s32 ScrOp_RetTo(ScrMachine **sys, ScrCtx *ctx, u8 **pc);
s32 ScrOp_RetIf(ScrMachine **sys, ScrCtx *ctx, u8 **pc);
s32 ScrOp_RetToIf(ScrMachine **sys, ScrCtx *ctx, u8 **pc);
s32 ScrOp_RetIfNot(ScrMachine **sys, ScrCtx *ctx, u8 **pc);
s32 ScrOp_RetToIfNot(ScrMachine **sys, ScrCtx *ctx, u8 **pc);
s32 ScrOp_CmdCall(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_SetX28(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Spawn(ScrMachine **sys, ScrCtx *ctx, u8 **pc);
s32 ScrOp_SpawnPrio(ScrMachine **sys, ScrCtx *ctx, u8 **pc);
s32 ScrOp_End(void);
s32 ScrOp_Wait(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Op2(void);
s32 ScrOp_Op4(void);
s32 ScrOp_Native(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Native2(s32 unused, ScrCtx *ctx, u8 **pc);
s32 ScrOp_Op6(void);
inline s32 *inline_fn()
{
  return &D_0047A5C0;
}

void main(void)
{
  Sys_Init();
  goto loop_1;
  loop_1:
  func_001470D0();

  memset(inline_fn(), 0, 0x700);
  amCdFs_Main();
  amMc_Sync();
  func_001A3520();
  amDraw_ResetPackets();
  amDraw3d_SetDefaultRegs();
  amTask_Run();
  func_001433F0();
  func_0012EAE0(0x20);
  amDbg_Draw();
}
