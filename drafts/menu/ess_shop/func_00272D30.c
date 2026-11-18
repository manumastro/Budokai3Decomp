/* Draft (not built): func_00272D30 at 0x00272D30, size 0xF0, segment menu/ess_shop (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 29 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE0, original 0xF0; then decomp-permuter: score 740 -> 535
 * Original: asm/nonmatchings/menu/ess_shop/func_00272D30.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern s32 gEssShop;
extern u8 D_004E0660[];
extern void func_0026E000(u8 *, s32);
extern s32 D_00452FA0[];
extern u8 D_004E066A[];
extern void func_00274120(void);
extern s32 func_00283BF0(void);
extern void SklSheet_Free(void);
extern void func_002759F0(void);
extern f32 gFrameDelta;
extern s32 func_0022BC30(s32, f32);
extern void func_00274120();
extern void func_00273E20();
extern void func_002759F0();
extern void func_00275230();
extern s32 amAdx_IsStopped(s32);
extern void func_0026D6A0(void);
extern void func_0026D570(s32);
extern void Zenie_Open(s32);
extern void func_00276610(void);
extern f32 D_004E0618[];
extern s32 EssMain_GetFlag();
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern void EssShop_TaskWaitVoice();
extern void Zenie_Init(void);
extern void SklSheet_Clear(void);
extern void *amTask_Create();
extern void func_00276840();
extern char D_0046B530[];
extern void StrStatus_Exit();
extern void amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void Zenie_Release();
void func_00274B40(u8 *a0);
void func_00274E70(u8 *a0);
void func_00275050(u8 *a0);
void func_00276400(u8 *a0);
void func_00276470(u8 *a0);
void Shop_InitZenie(void);
void EssShop_Start(void);
void EssShop_Exit(void);
void func_00276CE0(u8 *a0, s32 a1);
s32 func_00272D30(void)
{
  s32 *new_var;
  s32 temp_a0;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v1;
  s32 var_a3;
  s32 var_t0;
  s32 var_v1;
  u8 *var_a2;
  temp_v1 = *((s32 *) (((u8 *) gEssShop) + 0x60));
  var_t0 = 0;
  if (temp_v1 == 0)
  {
    var_t0 = *((s32 *) (((u8 *) gEssShop) + 0x6C));
  }
  else
  {
    var_a3 = 0;
    if ((*((s32 *) (((u8 *) gEssShop) + 0x6C))) > 0)
    {
      var_a2 = (u8 *) gEssShop;
      do
      {
        if ((*((s16 *) (((u8 *) var_a2) + 0x80))) == (temp_v1 - 1))
        {
          var_t0 += 1;
        }
        var_a3 += 1;
        var_a2 += 0x14;
      }
      while ((*(new_var = &var_a3)) < (*((s32 *) (((u8 *) gEssShop) + 0x6C))));
    }
  }
  if (var_t0 == 0)
  {
    return 0;
  }
  var_v1 = var_t0 - 1;
  if (var_t0 >= 4)
  {
    var_v1 = 3;
  }
  temp_v0 = (*((s32 *) (((u8 *) gEssShop) + 0x68))) + 1;
  *((s32 *) (((u8 *) gEssShop) + 0x68)) = temp_v0;
  if (var_v1 < temp_v0)
  {
    *((s32 *) (((u8 *) gEssShop) + 0x68)) = var_v1;
    if (var_t0 >= 5)
    {
      temp_a0 = var_t0 - 4;
      temp_v0_2 = (*((s32 *) (((u8 *) gEssShop) + 0x64))) + 1;
      *((s32 *) (((u8 *) gEssShop) + 0x64)) = temp_v0_2;
      if (temp_a0 < temp_v0_2)
      {
        *((s32 *) (((u8 *) gEssShop) + 0x64)) = temp_a0;
        return 0;
      }
      return 1;
    }
    return 0;
  }
  return 1;
}
