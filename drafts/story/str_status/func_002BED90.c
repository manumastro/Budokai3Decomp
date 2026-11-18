/* Draft (not built): func_002BED90 at 0x002BED90, size 0x144, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 27 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x140, original 0x144; then decomp-permuter: score 775 -> 570
 * Original: asm/nonmatchings/story/str_status/func_002BED90.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct TaskData
{
  void *work;
  s32 wait;
} TaskData;
typedef struct Task
{
  char name[16];
  s32 f10;
  s32 f14;
  s32 prio;
  void (*func)(struct Task *);
  void (*func2)(struct Task *);
  struct Task *prev;
  struct Task *next;
  s32 f2C;
  TaskData data;
} Task;
typedef void (*TaskFunc)(Task *);
extern Task *amTask_Create(TaskFunc func, TaskFunc func2, s32 prio, s32 f10, s32 f14, char *name);
extern void amTask_Kill(Task *task);
extern void *amHeap_Alloc(s32 size, s32 flags, char *file, s32 line);
extern void amHeap_Free(void *p);
typedef struct TourModeGlobal
{
  void *file[2];
  Task *task;
} TourModeGlobal;
extern TourModeGlobal *gTourMode;
typedef struct StrStatusWork
{
  char pad0[0x4];
  void *f4;
  char pad8[0x38 - 0x8];
  Task *f38;
  char pad3C[0x274 - 0x3C];
  s32 f274;
  s32 f278;
  char pad27C[0x284 - 0x27C];
  s32 f284;
  s32 f288[12];
  char pad2B8[0x2D4 - 0x2B8];
  s32 f2D4;
  char pad2D8[0x2DC - 0x2D8];
  s32 f2DC[7];
} StrStatusWork;
extern StrStatusWork *gStrStatus;
extern s32 *D_0046FE44;
extern s32 *D_0047011C;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern s32 func_0022D670(s32, f32);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);
extern void func_002C0860(s32 *);
extern void func_002BDF50(void *, void *);
extern void Obj_ResetF38(s32);
extern void func_00215230(s16, s16);
extern void func_00214FD0(void);
extern void amTask_KillGroup(s32, s32, s32);
extern void *gWave;
extern char D_005BCF80[];
extern void memset(void *, s32, s32);
extern s16 D_0046EE50[];
extern s32 *D_0046FE48;
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 func_00243E50(s32, s32);
extern void func_00243ED0(void);
extern void func_002CA3F0(void);
extern void func_00209450(s32, s32);
extern void func_00243F20(void);
extern void func_002CA440(void);
extern void StrStatus_ReleaseBuffers(void);
extern void func_00215900(void);
extern void func_00244150(void);
extern void func_002BE320(s32);
extern void func_002BEB50(void);
extern void func_002CA4A0(void);
extern void StrStatus_TaskComment(s32 *);
extern void A2d_FlushList();
extern char D_0046EE10[];
extern void (*D_0046EE30[])(void *);
extern void func_0028EB40(Task *, s32, void (*)(Task *), s32);
extern void func_002BD140(Task *);
extern void amCdFs_Close(s32, s32);
extern void amFile_Load(s32);
typedef struct StrStatusCopy
{
  u8 b00;
  u8 b01;
  u8 b02;
  u8 b03;
  u8 b04;
  u8 b05;
  u8 b06;
  u8 b07;
  u8 b08;
  u8 b09;
  u8 b0A;
  u8 b0B;
  s32 w0C;
  s32 w10;
  char pad14[4];
  s32 w18;
  s32 w1C;
  s32 w20;
  s32 w24;
  s32 w28;
  s32 w2C;
  s32 w30;
} StrStatusCopy;
extern void Character_Release(s32);
extern void func_0029E450(s32);
extern void Help_Exit(void);
extern void OutputPass_Release(void);
extern void func_0013B160(s32);
extern void func_00142100(void *, void *);
extern void func_00208D70(s32);
extern u8 D_003F0800[];
extern void func_00131B90(void *);
extern void func_00131F00(void *, f32, f32);
extern void func_00132DF0(s32);
extern void func_00209D20(s32);
extern void func_00209C50(void);
extern void func_0013B110(s32);
void *func_00209540(void *, s32, s32);
extern void *D_005BD1A0;
extern s32 D_0046FD18;
extern void func_00133780(s32, s32);
extern void func_002BDE80(void);
extern void func_00209E50(s32);
extern s32 amGs_SetReg32(s32, s32);
extern void func_002BE0B0(s32);
extern void func_00243280(s32);
extern void func_00240FF0(s32, s32);
extern void func_00208E50(s32, s32);
extern u8 D_0051D9A8[];
extern s32 func_002BECB0(s32, s32);
extern void func_00133B50(s32, s32);
extern void func_002BFFD0(void *, s32);
extern void func_002C02C0(s32 *);
typedef struct 
{
  u8 b[16];
} StsCp16;
extern u8 D_00456380[];
extern s32 func_0027DAB0(s32);
extern void func_0027E120(s32);
extern char D_005C4140[];
extern void func_00304DC0(s32, s32);
extern void Scene_Request(s32, s32);
extern void Scene_FadeTo(s32, s32);
extern void func_002C1A00(s32 *);
extern s32 func_0027E2D0(s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_002C2470(s32 *);
extern void func_002C0750(s32 *);
extern void func_002C1320(s32 *);
extern void func_002C2FF0(s32 *);
extern f32 gFrameDelta;
extern void func_002C1F90(void);
extern void func_002C2560(void);
extern void func_002C1720(s32 *);
extern void func_002C3A10(s32 *);
extern s32 amAdx_PlayAfs(s32, s32, s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void Obj_SetF3C(void *, s16);
extern void func_002C29A0(void);
extern f32 D_004E0618[];
extern void func_002C15E0(s32 *);
extern void func_002C32C0(void);
extern void func_0022E0B0(s32);
extern void Fade_Request(s32, s32, s32);
extern void func_002C3B40(void);
extern void func_0027E070(void);
extern void func_0028DF20(void);
void StrStatus_TaskMain(Task *t);
void func_002BD400(StrStatusCopy *out);
void StrStatus_ClearWork(void);
void StrStatus_Free(void);
void StrStatus_Start(s32 a, s32 b);
void func_002BDC50(void);
void func_002BE4E0(s32 *a0);
void func_002BE710(s32 *a0);
void func_002BE7C0(s32 *a0);
void func_002BE830(char *p);
void func_002BEEE0(void *a0);
void func_002BF310(void);
void func_002BF520(void);
void func_002BF850(u8 *a0);
void StrStatus_Dispatch(s32 *p);
void func_002BFC50(void);
void func_002BFCF0(void);
void func_002BFD90(void);
void func_002BFE60(s32 a0);
s32 func_002BFEE0(s32 a0, s32 a1, s32 a2);
void func_002C0220(s32 *a0);
void func_002C03E0(s32 *a0);
void Obj_CopyVec4F50(u8 *a0, void *a1);
void *func_002C04A0(void);
void StrStatus_Exit(Task *p);
void func_002C0FC0(s32 *a0);
void func_002C1860(u8 *arg0);
void VsCharaselEd_TaskMain(Task *task);
void StrStatus_TaskRequestScene(s32 *a0);
void func_002C1CF0(s32 *a0);
void func_002C28A0(s32 *a0);
void func_002C3120(s32 *a0);
void func_002C3220(s32 *a0);
void func_002C3D20(s32 *a0);
void StrStatus_ClearTourMode(void);
void func_002BED90(s32 arg0)
{
  u8 *temp_a0;
  u8 *temp_a1;
  u8 *temp_a2;
  void *new_var2;
  u8 *temp_s0;
  u8 *new_var;
  temp_a0 = *((u8 **) (((u8 *) D_0047011C) + 0x1A4));
  temp_s0 = (u8 *) D_0046FE44;
  if (temp_a0 == ((void *) 0))
  {
    goto block_2;
  }
  Obj_ResetF38((s32) ((void *) temp_a0));
  *((u8 **) (((u8 *) D_0047011C) + 0x1A4)) = (void *) 0;
  block_2:
  temp_a2 = *((u8 **) (((u8 *) (((u8 *) (new_var2 = D_005BD1A0)) + (*((s32 *) (((u8 *) new_var2) + 0xC))))) + 0x24));

  new_var = ((u8 *) temp_a2) + 0x28;
  temp_a1 = *((u8 **) new_var);
  *((s32 *) (((u8 *) temp_a2) + 0xA4)) = (s32) (((*((s16 *) (((u8 *) temp_s0) + 0x34))) * 2) + 0x1A);
  *((s32 *) (((u8 *) temp_a1) + 0xA4)) = (s32) (((*((s16 *) (((u8 *) temp_s0) + 0x34))) * 2) + 0x1A);
  if (arg0 == 0x12)
  {
    goto block_9;
  }
  if (arg0 == 0x11)
  {
    goto block_8;
  }
  if (arg0 == 0xF)
  {
    goto block_7;
  }
  if (arg0 == 0x10)
  {
    goto block_7;
  }
  goto block_10;
  block_7:
  *((s32 *) (((u8 *) temp_a2) + 0x5C)) = 0x41700000;

  *((s32 *) (((u8 *) temp_a2) + 0xA0)) = 0;
  *((s32 *) (((u8 *) temp_a1) + 0x5C)) = 0x40E00000;
  *((s32 *) (((u8 *) temp_a1) + 0xA0)) = 1;
  goto block_11;
  block_8:
  *((s32 *) (((u8 *) temp_a2) + 0x5C)) = 0x41B00000;

  *((s32 *) (((u8 *) temp_a2) + 0xA0)) = 0;
  *((s32 *) (((u8 *) temp_a1) + 0x5C)) = 0x41800000;
  *((s32 *) (((u8 *) temp_a1) + 0xA0)) = 1;
  goto block_11;
  block_9:
  *((s32 *) (((u8 *) temp_a2) + 0x5C)) = 0x41A00000;

  *((s32 *) (((u8 *) temp_a2) + 0xA0)) = 0;
  *((s32 *) (((u8 *) temp_a1) + 0x5C)) = 0x41400000;
  *((s32 *) (((u8 *) temp_a1) + 0xA0)) = 2;
  goto block_11;
  block_10:
  *((s32 *) (((u8 *) temp_a2) + 0x5C)) = 0;

  *((s32 *) (((u8 *) temp_a2) + 0xA0)) = 0;
  *((s32 *) (((u8 *) temp_a1) + 0x5C)) = 0;
  *((s32 *) (((u8 *) temp_a1) + 0xA0)) = 1;
  block_11:
  *((u8 **) (((u8 *) D_0047011C) + 0x1A4)) = func_00209540(new_var2, 0x400020, 0);

  return;
}
