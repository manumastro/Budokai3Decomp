/* Draft (not built): func_0030E330 at 0x0030E330, size 0xB8, segment story/str_staffroll (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); then decomp-permuter: score 710 -> 5
 * Original: asm/nonmatchings/story/str_staffroll/func_0030E330.s */

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
extern f32 gFrameDelta;
extern char D_0046FBB0[];
extern void amSofdec_StartFname(s32, char *, s32);
extern void func_0030DB10(s32 *);
extern void func_0030E170(s32 *);
extern s32 func_002A8F90(void);
extern void Scene_Request(s32, s32);
extern void Scene_FadeTo(s32, s32);
extern void func_0030D970(char *);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern s32 D_00470998;
extern s32 D_0046FD5C;
extern s32 amSofdec_Create(s32 *);
extern void func_0030DC70(s32 *);
extern s32 amSofdec_GetStat(s32);
extern void amSofdec_Stop(s32);
extern void amSofdec_Destroy(s32);
extern void amModel_SetCurrent(s32, s32);
extern void func_0022C060(s32, f32);
extern void func_0022C560(s32);
extern void func_0022D0E0(s32, s32);
extern s32 func_0022D860(s32, f32);
extern void func_0030E4D0(s32 *);
extern void func_00136E80(s32, void *, s32, s32, s32);
extern void func_00137560(void *, void *);
extern void amDraw_FlushPacket(void);
extern f32 D_0047042C;
extern f32 D_00470430;
typedef struct 
{
  f32 f[4];
} StfVec;
extern StfVec D_004591A0;
extern StfVec D_004591B0;
extern StfVec D_004591C0;
extern StfVec D_004591D0;
extern StfVec D_00459100;
extern StfVec D_00459110;
extern StfVec D_00459120;
extern StfVec D_00459130;
extern StfVec D_00459160;
extern StfVec D_00459170;
extern StfVec D_00459180;
extern StfVec D_00459190;
extern void Ball_Start(void);
extern void func_00137C10(void *, void *);
extern s8 D_004B4B63[];
extern u8 D_00492FCE[];
extern StfVec D_00459140;
extern StfVec D_00459150;
extern void func_0030E290(s32 *);
extern void amCdFs_Close(void *, s32);
extern void func_0022E0B0(void *);
extern void amFile_Load(void *);
extern s32 func_002A8C50(s32);
extern void func_002A8A60(void);
extern void Fade_Request(s32, s32, s32);
extern void func_0030EAE0(void);
extern char D_0046FBC8[];
extern char D_0046FBD8[];
extern char D_0046FBE8[];
extern u8 D_004590B0[];
extern void func_0030EDA0(void);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void memset(void *, s32, s32);
extern char D_0046FC00[];
void func_0030D630(s32 *a0);
void func_0030D7D0(s32 *a0);
void func_0030DBB0(s32 *a0);
void func_0030DC00(s32 *a0);
void StaffRoll_TaskEnding(s32 *a0);
void func_0030E3F0(s32 *a0);
void func_0030E5B0(s32 *a0);
void func_0030E630(s32 *a0);
void StaffRoll_Load(s32 *a0);
void StaffRoll_Clear(void);
void func_0030E330(u8 *arg0)
{
  f32 temp_f1;
  u8 *new_var;
  s32 temp_a0_2;
  s32 temp_s0;
  u8 *temp_a0;
  u8 *temp_s1;
  temp_s1 = arg0 + 0x30;
  temp_s0 = *((s32 *) (((u8 *) arg0) + 0x38));
  temp_a0 = *((u8 **) (((u8 *) arg0) + 0x34));
  D_00470704 = (s32) temp_a0;
  D_0047070C = 0x3000;
  new_var = (u8 *) temp_s1;
  D_00470708 = 0;
  amModel_SetCurrent((s32) temp_a0, 0x3000);
  D_00470238 = 0;
  if (temp_s0 != 0)
  {
    func_0022C060(temp_s0, 0x3F800000);
    func_0022C560(temp_s0);
  }
  temp_f1 = (*((f32 *) (new_var + 0xC))) + gFrameDelta;
  *((f32 *) (new_var + 0xC)) = temp_f1;
  if (!(temp_f1 < 14116.0f))
  {
    temp_a0_2 = *((s32 *) (new_var + 8));
    if (temp_a0_2 != 0)
    {
      func_0022D0E0(temp_a0_2, 1);
      *((s32 *) (new_var + 8)) = 0;
    }
    *((s32 *) (((u8 *) arg0) + 0x1C)) = 0;
  }
}
