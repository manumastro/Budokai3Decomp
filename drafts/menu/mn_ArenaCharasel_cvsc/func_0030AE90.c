/* Draft (not built): func_0030AE90 at 0x0030AE90, size 0x188, segment menu/mn_ArenaCharasel_cvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 26 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x194, original 0x188; then decomp-permuter: score 455 -> 50
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_cvsc/func_0030AE90.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern void A2d_FlushList(void);
extern void func_00133B50(s32, s32);
extern void func_00139620(s32, f32, void *, s32, s32, s32);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void func_0022C060(void *, f32);
extern void func_0022CD00(void *);
extern u8 *D_00470990;
s32 Help_TaskKill(s32);
s32 amCdFs_Close(s32, s32);
s32 func_0022D0E0(s32, s32);
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern void func_0027E120(void *);
extern void func_0027E070(void);
extern void ArenaList_Exit(void);
extern char D_0046FB40[];
extern char D_0046FB60[];
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void Scene_SetReady();
extern void func_0030AA40();
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_0027E7E0(void);
extern void ArenaRegCharList_Load(void);
void func_00309DE0(u8 *a0);
void func_00309E30(void);
void ArenaCharaselCvsc_Clear(void);
void ArenaCharaselCvsc_Load(void);
void func_0030AE90(void)
{
  s32 temp_a0_2;
  s32 temp_a0_3;
  s32 temp_a0_6;
  s32 temp_a0_7;
  s32 var_s1;
  s32 var_s4_2;
  u8 *temp_a0;
  u8 *temp_a0_4;
  u8 *temp_a0_5;
  u8 *temp_a0_8;
  u8 *temp_a0_9;
  u8 *temp_s0;
  u8 *temp_s2;
  u8 *temp_v0;
  u8 *var_s1_2;
  u8 *var_s4;
  temp_s0 = D_00470990;
  if (temp_s0 != ((void *) 0))
  {
    temp_v0 = *((u8 **) (((u8 *) temp_s0) + 0xC));
    var_s1 = 0;
    temp_s2 = *((u8 **) (((u8 *) temp_v0) + 0x30));
    var_s4 = temp_s2;
    do
    {
      temp_a0 = *((u8 **) (((u8 *) var_s4) + 8));
      if (temp_a0 != ((void *) 0))
      {
        func_0027E120(temp_a0);
      }
      var_s1 += 1;
      var_s4 += 4;
    }
    while (var_s1 < 2);
    var_s4_2 = 0;
    var_s1_2 = temp_s2;
    do
    {
      temp_a0_2 = *((s32 *) (((u8 *) var_s1_2) + 0x10));
      if (temp_a0_2 != 0)
      {
        Help_TaskKill(temp_a0_2);
      }
      var_s4_2 += 1;
      var_s1_2 += 4;
    }
    while (var_s4_2 < 2);
    temp_a0_3 = *((s32 *) (((u8 *) (*((u8 **) (((u8 *) temp_v0) + 0x30)))) + 0x1C));
    if (temp_a0_3 != 0)
    {
      func_0022D0E0(temp_a0_3, 1);
    }
    temp_a0_4 = *((u8 **) (((u8 *) temp_s2) + 0));
    if (temp_a0_4 != ((void *) 0))
    {
      amHeap_Free(temp_a0_4);
    }
    temp_a0_5 = *((u8 **) (((u8 *) temp_s2) + 4));
    if (temp_a0_5 != ((void *) 0))
    {
      amHeap_Free(temp_a0_5);
    }
    amHeap_Free(temp_s2);
    temp_a0_5 = (u8 *) temp_s0;
    temp_a0_6 = *((s32 *) (((u8 *) temp_s0) + 0));
    if (temp_a0_6 != 0)
    {
      amCdFs_Close(temp_a0_6, 0);
    }
    temp_a0_7 = *((s32 *) (((u8 *) temp_s0) + 4));
    if (temp_a0_7 != 0)
    {
      amCdFs_Close(temp_a0_7, 0);
    }
    temp_a0_8 = *((u8 **) (temp_a0_5 + 8));
    if (temp_a0_8 != ((void *) 0))
    {
      amTask_Kill(temp_a0_8);
    }
    temp_a0_9 = *((u8 **) (temp_a0_5 + 0x10));
    if (temp_a0_9 != ((void *) 0))
    {
      amTask_Kill(temp_a0_9);
    }
    amTask_Kill(*((u8 **) (temp_a0_5 + 0xC)));
    amHeap_Free(temp_s0);
    D_00470990 = (void *) 0;
    func_0027E070();
    ArenaList_Exit();
  }
}
