/* Draft (not built): func_0030A950 at 0x0030A950, size 0xE8, segment menu/mn_ArenaCharasel_cvsc (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 25 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xF0, original 0xE8; then decomp-permuter: score 1025 -> 510
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_cvsc/func_0030A950.s */

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
extern f32 gFrameDelta;
extern void func_0030A5E0(void);
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
void func_0030A950(u8 *arg0)
{
  u8 *sp4C;
  s32 *var_v1_2;
  f32 temp_f1;
  u8 *new_var2;
  s32 var_v0;
  u8 **var_v1;
  u8 *temp_a0;
  u8 *temp_s0;
  f32 *new_var3;
  u8 *temp_s2;
  u8 *new_var;
  var_v0 = 4;
  var_v1 = &sp4C;
  temp_s0 = *((u8 **) ((new_var2 = (u8 *) arg0) + 0x30));
  if (var_v1 != ((void *) 0))
  {
    do
    {
      *var_v1 = 0;
      var_v0 -= 1;
      var_v1 += 1;
    }
    while (var_v0 != ((((((((((((0 & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu) & 0xFFFFFFFFu));
  }
  sp4C = *((u8 **) (((u8 *) temp_s0) + 0x1C));
  temp_a0 = *((u8 **) (((u8 *) temp_s0) + 4));
  D_00470704 = (s32) temp_a0;
  D_0047070C = 0x2000;
  D_00470708 = 0;
  amModel_SetCurrent((s32) temp_a0, 0x2000);
  D_00470238 = 0;
  temp_s2 = sp4C;
  temp_a0 = temp_s2;
  new_var3 = (f32 *) (((u8 *) temp_s0) + 0x24);
  if (temp_s2 != ((void *) 0))
  {
    new_var = temp_a0;
    func_0022C060(temp_s2, 0x3F800000);
    func_0022CD00(new_var);
  }
  temp_f1 = (*new_var3) - gFrameDelta;
  *new_var3 = temp_f1;
  if (temp_f1 <= 0.0f)
  {
    var_v1_2 = (s32 *) (&func_0030A5E0);
    *new_var3 = 180.0f;
    if ((&func_0030A5E0) == ((void *) 0))
    {
      var_v1_2 = (void *) 0;
    }
    *((s32 **) (new_var2 + 0x1C)) = var_v1_2;
  }
}
