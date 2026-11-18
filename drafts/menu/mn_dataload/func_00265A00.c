/* Draft (not built): func_00265A00 at 0x00265A00, size 0x134, segment menu/mn_dataload (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 21 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x13C, original 0x134; then decomp-permuter: score 520 -> 320
 * Original: asm/nonmatchings/menu/mn_dataload/func_00265A00.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
s32 func_0022D0E0(s32, s32);
extern void func_001F07B0();
extern void func_00265800();
extern void StrStatus_Exit();
extern void amHeap_Free(void *);
extern void Help_Exit();
extern void amTask_Kill(void *);
extern void func_00265BF0();
s32 Save_GetState();
s32 func_002E1A40(void (*)());
extern void Save_SetBusy(void);
extern void Save_Exit();
extern void func_00229800(void *, void *, s32, f32);
extern void Obj_CopyVec4F50(s32, void *);
extern void Obj_SetF3C(s32, s32);
extern s32 amAdx_PlayAfs(s32, s32, s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern f32 D_004E0618[];
extern f32 gFrameDelta;
extern void DataLoad_TaskWait();
void func_00265700(u8 *arg0);
void func_002659E0(void);
void func_002659F0(u8 *a0);
void func_00265B40(u8 *arg0);
void func_00266150(u8 *a0);
void func_00266EC0(u8 *arg0);
void func_00265A00(u8 *arg0)
{
  s32 temp_v0;
  u8 temp_v1;
  void (*var_v0)();
  void (*var_v0_2)();
  void (*var_v1)();
  u8 *temp_s1;
  temp_s1 = *((u8 **) (((u8 *) arg0) + 0x34));
  func_00265800(temp_s1);
  temp_v0 = Save_GetState();
  switch (temp_v0)
  {
    case 4:
      func_002E1A40(func_002659E0);
      Save_Exit();
      Save_SetBusy();
      var_v1 = func_002659F0;
      if (func_002659F0 == ((void *) 0))
    {
      var_v1 = (void *) 0;
    }
      *((void (**)()) (((u8 *) arg0) + 0x1C)) = var_v1;
      return;

    case 5:
      Save_Exit();
      var_v0 = func_00265BF0;
      if (func_00265BF0 == ((void *) 0))
    {
      var_v0 = (void *) 0;
    }
      *((void (**)()) (((u8 *) arg0) + 0x1C)) = var_v0;
      Save_SetBusy();
      return;

    case 3:
      Save_Exit();
      temp_v1 = *((u8 *) (((u8 *) temp_s1) + 0x30));
      switch (temp_v1)
    {
      case 0:
        var_v0_2 = func_00265BF0;
        if (func_00265BF0 == ((void *) 0))
      {
        var_v0_2 = (void *) 0;
      }
        block_20:
      *((void (**)()) (((u8 *) arg0) + 0x1C)) = var_v0_2;

        break;

      case 1:
        var_v0_2 = func_00265BF0;
        if (func_00265BF0 == ((void *) 0))
      {
        var_v0_2 = (void *) 0;
      }
        goto block_20;

      return;
    }

      Save_SetBusy();

  }

}
