/* Draft (not built): func_002F1650 at 0x002F1650, size 0x118, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 21 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x130, original 0x118; then decomp-permuter: score 750 -> 350
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F1650.s */

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
extern long func_002F4A80();
extern void func_002F4A90();
extern void func_002F1770();
extern s32 IpSysWnd_Start();
extern void func_002F1300();
extern void func_002F0BC0();
extern void func_0022CF70();
extern u8 *gStrStatus;
extern s8 D_004B4B63[];
extern u16 D_00492FCE[];
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void func_002F2D50();
extern void func_00133B50(s32, s32);
extern void amModel_SetCurrent(s32, s32);
extern void A2d_FlushList(void);
extern f32 gFrameDelta;
extern void Help_Exit();
extern void amCdFs_Close(void *, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void Help_Load();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern char D_0046F748[];
extern char D_0046F738[];
extern void func_002F2350();
extern void *gInputName;
extern void *A2d_AllocObj(s32, f32);
extern void memset(void *, s32, s32);
extern void amHeap_Free(void *);
extern void func_00229800(void *, void *, s32, f32);
extern void *func_0022D670(f32, void *);
extern void func_0022E0B0(s32);
extern void func_002F21B0(Task *);
extern void *amFile_Load(s32);
extern void *func_0022D860(f32, void *);
extern void func_00125740(void *, void *, s32);
extern void func_002F3210(Task *);
extern void func_002F3C60(Task *);
void func_002F06D0(u8 *a0, s32 a1);
void func_002F0870(u32 *task);
void func_002F0B00(u8 *task);
void func_002F0FD0(u8 *task);
void InputPass_CopyName(Task *t, void *dst);
u8 InputPass_GetKind(Task *t);
void InputPass_ClearName(void);
void InputPass_Release(void);
void func_002F2600(u8 *task);
void *InputPass_Create(void);
void InputPass_Acquire(void);
void func_002F2A10(u32 *task);
void func_002F2C90(u8 *task);
void func_002F2F00(u8 *task);
void func_002F3E00(Task *a0);
void InputPass_CopyBuf(Task *t, void *dst);
u8 InputPass_GetPhase(Task *t);
void InputPass_TaskFree(u8 *task);
void func_002F1650(u8 *arg0)
{
  s32 var_s2;
  void (*var_v1)();
  u8 *temp_a0;
  u8 *var_s0;
  u8 *var_s1;
  u8 *var_s3;
  u8 *var_s4;
  var_s3 = *((u8 **) (((u8 *) arg0) + 0x30));
  var_s0 = gInputName;
  var_s4 = arg0;
  A2d_FlushList();
  func_00133B50(0, 0);
  temp_a0 = *((u8 **) (((u8 *) var_s0) + 0x10));
  D_00470704 = (s32) temp_a0;
  D_0047070C = 0x5000;
  D_00470708 = 0;
  amModel_SetCurrent((s32) temp_a0, 0x5000);
  D_00470238 = 0;
  func_002F0BC0(var_s3);
  var_s2 = 0;
  if (((s32) (*((u8 *) (((u8 *) var_s3) + 0x170)))) < 5)
  {
    var_s1 = var_s3;
    var_s0 = var_s3;
    do
    {
      if ((*((u16 *) (((u8 *) var_s1) + 0x128))) != 0xFFFF)
      {
        func_0022CF70(*((s32 *) (((u8 *) var_s0) + 4)));
      }
      var_s2 += 1;
      var_s1 += 2;
      var_s0 += 4;
    }
    while (var_s2 < 0x24);
  }
  A2d_FlushList();
  func_00133B50(0, 0);
  if ((((s64) (func_002F4A80(*((s32 *) (((u8 *) var_s3) + 0x110))) << 0x30)) >> 0x30) == 4)
  {
    func_002F4A90(*((s32 *) (((u8 *) var_s3) + 0x110)));
    var_v1 = func_002F1770;
    *((s32 *) (((u8 *) var_s3) + 0x110)) = 0;
    if (func_002F1770 == ((void *) 0))
    {
      var_v1 = (void *) 0;
    }
    *((void (**)()) (((u8 *) var_s4) + 0x1C)) = var_v1;
  }
}
