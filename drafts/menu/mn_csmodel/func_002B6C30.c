/* Draft (not built): func_002B6C30 at 0x002B6C30, size 0x184, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 30 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x194, original 0x184; then decomp-permuter: score 1755 -> 1325
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B6C30.s */

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
extern void *func_0022D670(void *, f32);
extern void *func_0022D860(void *, f32);
extern void func_0022D0E0(void *, s32);
extern f32 D_004E0618[];
extern s32 amAdx_PlayAfs();
extern void amAdx_SetVolume(void *, f32);
extern void amAdx_Pause();
extern void func_002B8D20();
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern f32 gFrameDelta;
extern void amModel_SetCurrent(s32, s32);
extern void func_002B7690(void *);
extern void A2d_FlushList(void);
extern s8 D_004B4BEA[];
extern void func_002B7800();
extern void func_002B7930();
extern void func_002B89E0();
extern void func_002B91F0();
extern void Obj_SetF3C();
extern void amCamera_Init(void *);
extern char D_0046ED20[];
extern char D_0046ED30[];
typedef struct CsModelWork
{
  char pad0[0xB0];
  s16 fB0;
  s16 fB2;
  s16 fB4;
  s16 fB6;
  s16 fB8;
  s16 fBA;
  s32 fBC;
  f32 fC0;
  char padC4[0x1C];
  f32 fE0;
  f32 fE4;
  f32 fE8;
} CsModelWork;
extern void *gPracMode;
s32 func_00131F00(void *, s32, s32);
s32 func_0029E120(s32, s16, s32, s32, s32);
s32 func_0029E610(s32);
s32 func_0029E7F0(s32);
extern void func_00131B90(void *);
extern void func_002B61E0(void);
extern void func_002B6DC0(Task *);
extern void func_0029E450(void *);
extern void amHeap_Free(void *);
extern void Scene_Request(s32, s32);
extern void Scene_FadeTo(s32, s32);
extern u8 D_004B4B41[];
extern u8 D_004B4B59[];
extern void VsCharasel_Start(s8, s8);
extern void PracMode_Exit();
extern s32 D_0047010C;
void CsModel_CallIfSet(Task *t);
void func_002B7180(u8 *a0);
void CsModel_SetMode(Task *t);
void CsModel_SetScale(Task *t);
void CsModel_Ease(Task *t, f32 target, f32 div);
void CsModel_Shift(Task *t, s16 a, s16 b);
void *CsModel_Create(s16 a0, s16 a1, s16 a2);
void func_002B7DC0(u8 *s0);
void func_002B8410(u8 *task);
void CsModel_Start(Task *t);
void CsModel_TaskEnd(u8 *a0);
void func_002B8B50(u8 *task);
void CsModel_Start2(Task *t);
void func_002B92E0(u8 *task);
void CsModel_ResetPrac(void);
void func_002B6C30(u8 *arg0)
{
  s32 *var_v1;
  f32 temp_f0;
  f32 temp_f0_2;
  f32 temp_f0_3;
  f32 temp_f3;
  f32 temp_f3_2;
  u8 *new_var;
  f32 temp_f3_3;
  f32 var_f2;
  u16 temp_v1;
  u8 *temp_s0;
  temp_s0 = *((u8 **) (((u8 *) arg0) + 0x30));
  new_var = (u8 *) temp_s0;
  temp_f3 = *((f32 *) (new_var + 0xC0));
  if (temp_f3 != 0.0f)
  {
    temp_f0 = temp_f3 - (0.125f * gFrameDelta);
    *((f32 *) (new_var + 0xC0)) = temp_f0;
    if (temp_f0 < 0.0f)
    {
      *((f32 *) (new_var + 0xC0)) = 0.0f;
    }
  }
  temp_v1 = *((u16 *) (new_var + 0xB0));
  if (temp_v1 == 3)
  {
    *((f32 *) (new_var + 0xBC)) = 0.0f;
  }
  else
    if (temp_v1 == 2)
  {
    temp_f3_2 = *((f32 *) (new_var + 0xBC));
    var_f2 = 0.0f;
    if (!(temp_f3_2 <= 0.0f))
    {
      temp_f0_2 = temp_f3_2 - (2.0f * gFrameDelta);
      *((f32 *) (new_var + 0xBC)) = temp_f3_2 - (2.0f * gFrameDelta);
      if (temp_f0_2 < 0.0f)
      {
        goto block_12;
      }
    }
  }
  else
    if (temp_v1 == 4)
  {
    temp_f3_3 = *((f32 *) (new_var + 0xBC));
    var_f2 = 20.0f;
    if (temp_f3_3 < 20.0f)
    {
      temp_f0_3 = temp_f3_3 + (2.0f * gFrameDelta);
      *((f32 *) (new_var + 0xBC)) = temp_f0_3;
      if (!(temp_f0_3 <= 20.0f))
      {
        block_12:
        *((f32 *) (new_var + 0xBC)) = var_f2;

      }
    }
  }
  if (func_0029E7F0(*((s32 *) (new_var + 0))) != 0)
  {
    func_0029E610(*((s32 *) (new_var + 0)));
    func_0029E120(*((s32 *) (new_var + 0)), *((s16 *) (new_var + 0xB4)), 1, 0x3F800000, 0);
    func_00131B90(temp_s0 + 0x50);
    func_00131F00(temp_s0 + 0x50, 0, 0);
    var_v1 = (s32 *) (&func_002B61E0);
    if ((&func_002B61E0) == ((void *) 0))
    {
      var_v1 = (void *) 0;
    }
    *((s32 **) (((u8 *) arg0) + 0x1C)) = var_v1;
  }
}
