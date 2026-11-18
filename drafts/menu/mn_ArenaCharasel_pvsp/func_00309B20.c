/* Draft (not built): func_00309B20 at 0x00309B20, size 0x1A8, segment menu/mn_ArenaCharasel_pvsp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B0, original 0x1A8; then decomp-permuter: score 705 -> 340
 * Original: asm/nonmatchings/menu/mn_ArenaCharasel_pvsp/func_00309B20.s */

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
extern u8 *D_0047098C;
s32 amCdFs_Close(s32, s32);
s32 func_0022D0E0(s32, s32);
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern void func_0027E070(void);
extern void ArenaList_Exit(void);
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
void func_00309B20(void)
{
  s32 temp_a0_10;
  s32 temp_a0_11;
  s32 temp_a0_2;
  s32 temp_a0_4;
  s32 temp_a0_5;
  u8 *temp_a0;
  u8 *temp_a0_3;
  u8 *temp_a0_6;
  u8 *temp_a0_7;
  u8 *temp_a0_8;
  u8 *temp_a0_9;
  u8 *temp_s0;
  u8 *temp_s2;
  u8 *temp_s3;
  u8 *temp_s3_2;
  u8 *temp_v0;
  temp_s2 = D_0047098C;
  if (temp_s2 != ((void *) 0))
  {
    temp_v0 = *((u8 **) (((u8 *) temp_s2) + 8));
    temp_s0 = *((u8 **) (((u8 *) temp_v0) + 0x30));
    temp_s3 = *((u8 **) (((u8 *) temp_s0) + 8));
    if (temp_s3 != ((void *) 0))
    {
      temp_a0 = *((u8 **) (((u8 *) temp_s3) + 0x30));
      if (temp_a0 != ((void *) 0))
      {
        func_0027E120(temp_a0);
      }
      temp_a0_2 = *((s32 *) (((u8 *) (temp_s3 + 0x30)) + 4));
      if (temp_a0_2 != 0)
      {
        Help_TaskKill(temp_a0_2);
      }
      amTask_Kill(temp_s3);
    }
    temp_s3_2 = *((u8 **) (((u8 *) temp_s0) + 0xC));
    if (temp_s3_2 != ((void *) 0))
    {
      temp_v0 = ((u8 *) temp_s3_2) + 0x30;
      temp_a0_3 = *((u8 **) temp_v0);
      if (temp_a0_3 != ((void *) 0))
      {
        func_0027E120(temp_a0_3);
      }
      temp_a0_4 = *((s32 *) (((u8 *) (temp_s3_2 + 0x30)) + 4));
      if (temp_a0_4 != 0)
      {
        Help_TaskKill(temp_a0_4);
      }
      amTask_Kill(temp_s3_2);
    }
    func_0027E070();
    ArenaList_Exit();
    temp_a0_5 = *((s32 *) (((u8 *) (*((u8 **) (((u8 *) temp_v0) + 0x30)))) + 0x14));
    if (temp_a0_5 != 0)
    {
      func_0022D0E0(temp_a0_5, 1);
    }
    temp_a0_6 = *((u8 **) (((u8 *) temp_s0) + 0));
    if (temp_a0_6 != ((void *) 0))
    {
      amHeap_Free(temp_a0_6);
    }
    temp_a0_7 = *((u8 **) (((u8 *) temp_s0) + 4));
    if (temp_a0_7 != ((void *) 0))
    {
      amHeap_Free(temp_a0_7);
    }
    amHeap_Free(temp_s0);
    temp_a0_8 = *((u8 **) (((u8 *) temp_s2) + 0xC));
    if (temp_a0_8 != ((void *) 0))
    {
      amTask_Kill(temp_a0_8);
    }
    temp_a0_9 = *((u8 **) (((u8 *) temp_s2) + 0x10));
    if (temp_a0_9 != ((void *) 0))
    {
      amTask_Kill(temp_a0_9);
    }
    amTask_Kill(*((u8 **) (((u8 *) temp_s2) + 8)));
    temp_a0_10 = *((s32 *) (((u8 *) temp_s2) + 0));
    if (temp_a0_10 != 0)
    {
      amCdFs_Close(temp_a0_10, 0);
    }
    temp_a0_11 = *((s32 *) (((u8 *) temp_s2) + 4));
    if (temp_a0_11 != 0)
    {
      amCdFs_Close(temp_a0_11, 0);
    }
    amHeap_Free(temp_s2);
    D_0047098C = (void *) 0;
  }
}
