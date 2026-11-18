/* Draft (not built): func_00307E40 at 0x00307E40, size 0xCC, segment menu/mn_ArenaCharasel_pvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 30 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC8, original 0xCC; then decomp-permuter: score 2705 -> 1770
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsc/func_00307E40.s */

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
void func_00307E40(u8 *arg0)
{
  void (*var_v1)();
  unsigned char new_var2;
  u8 *temp_s0;
  void (**new_var)();
  temp_s0 = *((u8 **) (((u8 *) arg0) + 0x30));
  func_003077E0(temp_s0);
  if ((((s64) (ArenaList_GetFirst(*((s32 *) (((u8 *) temp_s0) + (0x10 & 0xFFFFu)))) << 0x30)) >> 0x30) >= 6)
  {
    ArenaList_Free();
    var_v1 += 0;
    new_var2 = D_004B4B63 == 0;
    *((s32 *) (((u8 *) temp_s0) + 0x10)) = 0;
    *((s32 *) (((u8 *) temp_s0) + 8)) = func_0027E2D0(5, (0 | (((new_var2) ? (2) : (4)) & 0xFF)) & 0xFF, 1, -1);
    *((s32 *) (((u8 *) temp_s0) + 0x40)) = 0x42200000;
    var_v1 = func_003083E0;
    if (func_003083E0 == ((void *) 0))
    {
      var_v1 = (void *) 0;
    }
    new_var = (void (**)()) (((u8 *) arg0) + 0x1C);
    *new_var = var_v1;
  }
}
