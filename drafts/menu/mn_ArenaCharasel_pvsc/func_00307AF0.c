/* Draft (not built): func_00307AF0 at 0x00307AF0, size 0x10C, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 28 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); then decomp-permuter: score 2525 -> 2270
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00307AF0.s */

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
s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *D_00470704;
extern void amModel_SetCurrent();
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
void func_00307AF0(u8 *arg0)
{
  s32 var_s1;
  u8 *new_var;
  s32 var_s2;
  u8 *temp_a0;
  u8 *var_s0;
  temp_a0 = *((u8 **) (((u8 *) arg0) + 4));
  D_00470704 = temp_a0;
  D_0047070C = 0x2000;
  D_00470708 = 0;
  amModel_SetCurrent(temp_a0, 0x2000);
  D_00470238 = 0;
  var_s2 = 0;
  var_s1 = 0;
  var_s0 = arg0;
  do
  {
    *((s32 *) (((u8 *) var_s0) + 0x70)) = func_0022D860(*((s32 *) (((u8 *) ((*((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0)))) + 0x14))) + var_s1)) + 0x1C)), 0);
    var_s2 += 1;
    var_s1 += 4;
    var_s0 += 4;
  }
  while (var_s2 < 7);
  new_var = (u8 *) (*((u8 **) (((u8 *) arg0) + 0)));
  *((s32 *) (((u8 *) arg0) + 0x5C)) = func_0022D860(*((s32 *) (((u8 *) (*((u8 **) (new_var + 0x14)))) + 8)), 0);
  *((s32 *) (((u8 *) arg0) + 0x60)) = func_0022D860(*((s32 *) (((u8 *) (*((u8 **) (new_var + 0x14)))) + 0xC)), 0);
  *((s32 *) (((u8 *) arg0) + 0x64)) = func_0022D860(*((s32 *) (((u8 *) (*((u8 **) (new_var + 0x14)))) + 0x10)), 0);
  *((s32 *) (((u8 *) arg0) + 0x68)) = func_0022D860(*((s32 *) (((u8 *) (*((u8 **) (new_var + 0x14)))) + 0x14)), 0);
  *((s32 *) (((u8 *) arg0) + 0x6C)) = func_0022D860(*((s32 *) (((u8 *) (*((u8 **) (new_var + 0x14)))) + 0x18)), 0);
}
