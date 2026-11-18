/* Draft (not built): func_00309050 at 0x00309050, size 0x98, segment menu/mn_ArenaCharasel_pvsp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x90, original 0x98; then decomp-permuter: score 1250 -> 950
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsp/func_00309050.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern s16 ArenaList_GetF0(void *);
extern void Help_TaskKill(s32);
extern s16 func_0027D3B0(s32, s32);
extern s32 func_0027E2D0(s32, s32, s32, s32, s32, s32, s32, s32);
extern s16 D_005C4126[];
extern s8 D_0058F66A[];
extern void func_00309000(u8 *);
extern s16 ArenaList_GetF2(void *);
extern u8 D_00492FCE[];
extern s16 D_005C4122[];
extern void func_0030D300(void *);
extern void func_00308BD0(u8 *);
extern void func_00308AF0(u8 *);
extern s8 func_0027DAA0(void *);
extern s16 func_0027DAE0(void *);
extern s16 func_0027DAD0(void *);
extern s8 func_0027DAB0(void *);
extern void func_0027DB20(void *);
extern s16 D_005C412A[];
extern void func_00308E40(u8 *);
extern void func_00308DA0(u8 *);
extern void A2d_FlushList(void);
extern void func_00133B50(s32, s32);
extern void func_00139620(s32, f32, void *, s32, s32, s32);
extern void func_00308C40();
extern void func_0027E120(void *);
extern s32 ArenaRegCharList_Start(s32, s32, s32);
extern void func_00308D50();
extern void func_00308EB0();
s32 func_0022C060(void *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void func_0022CD00(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern u8 *D_0047098C;
extern char D_0046FAC0[];
extern char D_0046FAE0[];
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void Scene_SetReady();
extern void func_00309680();
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_0027E7E0(void);
extern void ArenaRegCharList_Load(void);
void func_00308A90(u8 *a0);
void func_00308AE0(void);
void ArenaCharaselPvsp_Clear(void);
void func_00309CD0(void);
void ArenaCharaselPvsp_Load(void);
void func_00309050(u8 *arg0)
{
  u8 *sp2C;
  s32 var_v0;
  u8 **var_v1;
  u8 *temp_a0;
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
    while (var_v0 != 0);
  }
  sp2C = *((u8 **) (((u8 *) temp_a0) + 0x14));
  temp_a0_2 = *((u8 **) (((u8 *) temp_a0) + 4));
  D_00470704 = temp_a0_2;
  D_0047070C = 0x2000;
  D_00470708 = 0;
  amModel_SetCurrent(temp_a0_2, 0x2000);
  D_00470238 = 0;
  temp_s0 = sp2C;
  {
    func_0022C060(temp_s0, 0x3F800000);
    func_0022CD00(temp_s0);
  }
}
