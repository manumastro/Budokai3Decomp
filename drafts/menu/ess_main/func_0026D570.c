/* Draft (not built): func_0026D570 at 0x0026D570, size 0xA0, segment menu/ess_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 23 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA8, original 0xA0; then decomp-permuter: score 1290 -> 295
 * Original: asm/nonmatchings/menu/ess_main/func_0026D570.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern u8 *gEssMain;
extern void EssMain_TickA(void);
extern void func_0026CD50(void);
extern void EssMain_TickB(void);
extern void func_0026B560(void);
extern s32 amAdx_GetStat(s32);
extern s32 D_00452EC0[];
extern char D_0046B450[];
extern s32 D_00452EE8[];
extern void EssShop_Exit(void);
extern void func_0026A680(void);
extern s32 D_00452ECC[];
extern void EssTrade_Exit(void);
extern void func_0028DFC0(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_00452EE4[];
extern s32 D_00452EEC[];
extern s32 D_00452ED0[];
extern void EssInfo_Exit(void);
extern s32 Save_GetState(void);
extern void func_001EF510(void *, s32);
extern void amHeap_Free(void *);
extern void func_0026B460(u8 *);
extern void EssEdit_Exit(void);
extern void func_00272B70(void);
extern void func_0026BD50(void);
extern void EssShop_Start(s32);
extern void func_0026BD10(void);
extern s16 func_002C04A0(void *);
extern void *amFile_Load();
extern void EssMain_TickC(void);
extern u32 func_0012EAE0(s32);
extern void EssTrade_Start(void);
extern s32 D_004707F0;
extern char D_00452EB0[];
extern void func_00272A20(s32, s32, s32);
extern f32 gFrameDelta;
extern s32 func_0022BC30(s32, f32);
extern void Scene_FadeTo(s32, s32);
extern void func_0026B770(void);
extern void func_0026B880(void);
extern void EssEdit_Start(void);
extern void func_00269B90(void);
extern void func_00269CC0(void);
extern s32 D_00452EC4[];
extern f32 D_004E0610[];
extern char D_0046B460[];
extern void func_00264140(s32, s32);
extern void *amTask_Create();
extern f32 D_004E0618[];
extern void amTask_Kill(void *);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern void amModel_SetCurrent(s32, s32);
extern void func_00133780(s32, s32);
extern void func_00133B50(s32, s32);
extern void func_00228430(s32);
extern void func_002284D0(s32);
extern void func_00228410(void);
extern void func_0022C1D0(void *, s32, f32);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern u8 D_0058F680[];
extern u8 D_004E0660[];
extern s32 D_0058F5D0[];
extern s32 D_0058F5D4[];
extern void amCdFs_ReleaseCache(s32);
void EssBg_TaskDraw(void);
void EssMsg_TaskSet(u8 *a0);
void Ess_Exit(u8 *a0);
void func_0026ADC0(u8 *a0);
void func_0026AEB0(u8 *a0);
void Ess_TaskShopStart(u8 *a0);
void Ess_TaskShopEnd(u8 *a0);
void Ess_TaskEditStart(u8 *a0);
void Ess_TaskEditEnd(u8 *a0);
void Ess_TaskInfoEnd(u8 *a0);
void func_0026C910(u8 *a0);
void Ess_TaskTradeEnd(u8 *a0);
void Ess_TaskTradeStart(u8 *a0);
void func_0026CF80(u8 *a0);
void Ess_TaskMsgStart(u8 *a0);
void Ess_TaskBgStart(u8 *a0);
void Ess_TaskMain(u8 *a0);
s32 func_0026D480(s32 arg0);
u8 EssMain_GetFlag(void);
void EssMain_SetByte(u8 v);
void func_0026D530(s32 a0, s32 a1);
void func_0026D570(s32 arg0)
{
  u8 *new_var;
  u8 *temp_t0;
  new_var = gEssMain;
  *((s32 *) (((u8 *) new_var) + 0x130)) = 0;
  temp_t0 = new_var + 0x120;
  if (arg0 == 0)
  {
    *((s32 *) (((u8 *) new_var) + 0x120)) = (s32) ((!((*((u8 *) (((u8 *) gEssMain) + 0x5D))) & 1)) ? (0x17) : (0x13));
    *((s32 *) (((u8 *) temp_t0) + 8)) = 0;
    *((s32 *) (((u8 *) new_var) + 0x150)) = 0xC;
    *((s32 *) (((u8 *) new_var) + 0x15C)) = 1;
    *((s32 *) (((u8 *) gEssMain) + 0x158)) = 0;
    return;
  }
  *((s32 *) (((u8 *) gEssMain) + 0x120)) = (s32) ((!((*((u8 *) (((u8 *) gEssMain) + 0x5D))) & 1)) ? (0x14) : (0x10));
  *((s32 *) (((u8 *) temp_t0) + 8)) = 0;
  *((s32 *) (((u8 *) new_var) + 0x150)) = (s32) ((!((*((u8 *) (((u8 *) gEssMain) + 0x5D))) & 1)) ? (0x16) : (0x12));
  *((s32 *) (((u8 *) new_var) + 0x15C)) = 0;
  *((s32 *) (((u8 *) new_var) + 0x158)) = 0;
}
