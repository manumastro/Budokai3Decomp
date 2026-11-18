/* Draft (not built): func_00307D50 at 0x00307D50, size 0xE4, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 25 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); then decomp-permuter: score 920 -> 450
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00307D50.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern void func_003077E0();
extern void ArenaList_Free();
extern f32 gFrameDelta;
extern u8 *D_00470988;
extern s16 ArenaList_GetFirst();
extern s32 func_0027E2D0();
extern u8 D_004B4B63[];
extern u8 D_005C4126[];
extern u8 D_004B4B56[];
extern void ArenaStageSel_Start();
extern void func_002D1C50();
extern void func_003083E0();
extern void A2d_FlushList(void);
extern void func_00133B50(s32, s32);
extern void func_00139620(s32, f32, void *, s32, s32, s32);
extern s8 func_0027DAB0(void *);
extern void func_0027E120(void *);
extern s32 ArenaList_Create(s16);
extern void func_00307F10();
extern s16 D_005C4132[];
extern s16 D_005C412E[];
extern s16 D_005C4134[];
extern s16 D_005C4130[];
extern s16 D_005C4136[];
extern void func_003081F0();
extern void func_0027E070(void);
extern void func_00307C00(void *);
extern void amCdFs_Close(void *, s32);
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern char D_0046FA50[];
extern char D_0046FA70[];
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void Scene_SetReady();
extern void func_00308500();
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_0027E7E0(void);
void func_00307CF0(u8 *a0);
void func_00307D40(void);
void ArenaCharasel_TaskOpenList(u8 *a0);
void func_003081E0(u8 *a0);
void ArenaCharaselPvsc_Clear(void);
void func_00308860(void);
void ArenaCharaselPvsc_Load(void);
void func_00307D50(u8 *arg0)
{
  f32 temp_f2;
  u8 *temp_s0;
  u8 *temp_s1;
  u8 *temp_v1;
  u8 *new_var;
  temp_s0 = *((u8 **) (((u8 *) arg0) + 0x30));
  temp_f2 = *((f32 *) (((u8 *) temp_s0) + 0x44));
  temp_s1 = D_00470988;
  new_var = (u8 *) temp_s0;
  if (temp_f2 < 1.0f)
  {
    *((f32 *) (new_var + 0x44)) = (f32) (temp_f2 + (0.05f * gFrameDelta));
  }
  if (!((*((f32 *) (new_var + 0x44))) <= 1.0f))
  {
    *((f32 *) (new_var + 0x44)) = 1.0f;
  }
  if ((*((f32 *) (new_var + 0x44))) < 1.0f)
  {
    func_003077E0(temp_s0);
    temp_v1 = *((u8 **) (((u8 *) temp_s1) + 0x10));
    *((s32 *) (((u8 *) temp_v1) + 0x30)) = 0;
    *((s32 *) (((u8 *) temp_v1) + 0x34)) = 0;
    *((s32 *) (((u8 *) temp_v1) + 0x38)) = 0;
    *((f32 *) (((u8 *) temp_v1) + 0x3C)) = (f32) (*((f32 *) (new_var + 0x44)));
    return;
  }
  ArenaStageSel_Start(D_004B4B56);
  func_002D1C50();
  ArenaList_Free();
}
