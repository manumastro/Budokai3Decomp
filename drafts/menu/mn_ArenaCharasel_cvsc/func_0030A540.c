/* Draft (not built): func_0030A540 at 0x0030A540, size 0x98, segment menu/mn_ArenaCharasel_cvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 23 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); then decomp-permuter: score 790 -> 540
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_cvsc/func_0030A540.s */

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
extern volatile unsigned int func_0022CD00(void *);
extern u8 *D_00470990;
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
void func_0030A540(u8 *arg0)
{
  u8 *sp2C;
  s32 var_v0;
  u8 **var_v1;
  u8 *temp_a0;
  int new_var;
  u8 *temp_a0_2;
  u8 *temp_s0;
  var_v1 = &sp2C;
  temp_a0 = *((u8 **) (((u8 *) arg0) + 0x30));
  var_v0 = 4;
  if (var_v1 != ((void *) 0))
  {
    do
    {
      *var_v1 = 0;
      var_v0 -= 1;
      var_v1 += 1;
    }
    while (var_v0 != (new_var = 0));
  }
  sp2C = *((u8 **) (((u8 *) temp_a0) + 0x1C));
  temp_a0_2 = *((u8 **) (((u8 *) temp_a0) + 4));
  D_00470704 = (s32) temp_a0_2;
  D_0047070C = 0x2000;
  D_00470708 = 0;
  amModel_SetCurrent((s32) temp_a0_2, 0x2000);
  D_00470238 = new_var;
  temp_s0 = sp2C;
  if (temp_s0 != ((void *) 0))
  {
    func_0022C060(temp_s0, 0x3F800000);
    func_0022CD00(temp_s0);
  }
}
