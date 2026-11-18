/* Draft (not built): func_0026E3B0 at 0x0026E3B0, size 0xF0, segment menu/ess_main_2 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 26 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE0, original 0xF0; then decomp-permuter: score 1150 -> 890
 * Original: asm/nonmatchings/menu/ess_main_2/func_0026E3B0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern s16 D_0046B1CE[];
extern u8 *gEssMain;
extern void Trade_Start(void);
extern void EssInfo_Init(void);
extern void Shop_InitZenie(void);
extern void EssList_Clear(void);
extern void EssEdit_Clear(void);
extern void *amTask_Create();
extern void Ess_TaskMain();
extern char D_0046B470[];
extern void Scene_SetReady();
extern void SoundRpc_SendWord2();
extern void SoundRpc_SendWord();
extern void amAdx_Stop();
extern void amCdFs_Close(void *, s32);
s32 amTask_KillGroup(s32, s32, s32);
extern s32 D_0058F5D0;
extern void amCdFs_ReleaseCache(void *);
extern void StrStatus_Exit();
extern void Help_Exit();
extern void Save_Exit();
extern void *gEssEdit;
extern void func_0026EF00();
extern char D_0046B480[];
extern void SeReady_Start();
extern void func_0027E120(void *);
extern void func_0027E070(void);
extern void SklEdit_Close(void);
void func_0026D9C0(u8 *a0, s32 a1);
void Ess_Init(void);
void Ess_Start(void);
void EssEdit_Start(void);
void EssEdit_Exit(void);
void func_0026E3B0(void)
{
  s32 *var_s0_2;
  s32 temp_a0;
  s32 var_s0;
  s32 var_s1;
  s32 var_s1_2;
  u8 *temp_a0_2;
  StrStatus_Exit(*((s32 *) (((u8 *) gEssMain) + 0x20)));
  Help_Exit();
  Save_Exit();
  amTask_KillGroup(0x200, 1, 0);
  var_s1 = 0;
  var_s0 = 0;
  do
  {
    temp_a0 = *(gEssMain + var_s0);
    if (temp_a0 != 0)
    {
      amCdFs_Close((void *) temp_a0, 0);
    }
    var_s1 += 1;
    var_s0 += 4;
  }
  while (var_s1 < 3);
  var_s1_2 = 0;
  if (0 < D_0058F5D0)
  {
    var_s0_2 = &D_0058F5D0;
    do
    {
      amCdFs_ReleaseCache(*((u8 **) (((u8 *) var_s0_2) + 4)));
      var_s1_2 += 1;
      var_s0_2 += 4;
    }
    while (var_s1_2 < D_0058F5D0);
  }
  temp_a0_2 = *((u8 **) (((u8 *) gEssMain) + 0x270));
  if (temp_a0_2 != ((void *) 0))
  {
    amHeap_Free(temp_a0_2);
  }
  amHeap_Free(gEssMain);
  gEssMain = (void *) 0;
}
