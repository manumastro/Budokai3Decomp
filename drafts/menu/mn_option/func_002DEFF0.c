/* Draft (not built): func_002DEFF0 at 0x002DEFF0, size 0x10C, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 30 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x11C, original 0x10C; then decomp-permuter: score 2110 -> 1365
 * Original: asm/nonmatchings/menu/mn_option/func_002DEFF0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern u8 D_004E05DC[];
extern s16 D_004E05E0[];
extern u8 D_0051168A[];
extern u8 D_004E6560[];
extern s8 D_004703F4;
extern u8 *gOptionWork;
extern void func_002DDF00();
extern char D_0046F3C8[];
extern void *amHeap_Alloc(s32, s32, char *, s32);
s32 Save_GetState();
s32 Scene_FadeTo(s32, s32);
s32 func_001EF510(void *, s32);
s32 memcpy(void *, void *, s32);
extern s8 D_004B4B63;
extern s32 D_0058F680;
extern s32 func_002D9DE0;
extern void Scene_Request();
extern void func_002DEA00(void);
extern s8 D_004B4B40[];
extern s8 D_00456B20[];
extern void func_00125740(void *, void *, s32);
extern void A2d_SetMode(s32);
extern void A2d_FlushList(void);
extern s16 D_004E05F8[];
extern void *gOptionState;
extern void func_002D2AD0(f32, f32 *, f32 *);
extern void amTask_Kill(void *);
extern void func_002E0050(s32);
extern void func_002E0B70(void);
typedef struct OptionState
{
  char pad0[8];
  s32 f8;
} OptionState;
extern void amCdFs_Close(void *, s32);
extern void *amTask_Create();
extern char D_0046F3E0[];
extern void func_002E0B70();
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void memset(void *, s32, s32);
void func_002DE250(void);
void Option_Nop1(void);
void func_002DEFE0(void);
void func_002DF3D0(void);
void func_002DF6E0(void);
void Option_ReadSound(void);
void func_002DFE20(u8 *a0);
void func_002E0170(u8 *a0);
void Option_ClearState(void);
void Option_Free(void);
s32 func_002E0C70(void);
void ChangeProgress_Start(void);
s32 func_002E0D10(void);
void Option_Load(void);
void func_002DEFF0(u8 *arg0)
{
  int new_var;
  s32 *var_v0;
  s32 temp_v0;
  u8 *temp_v0_2;
  func_002DFBC0();
  temp_v0 = Save_GetState();
  switch (temp_v0)
  {
    case 4:
      temp_v0_2 = amHeap_Alloc(0xD680, 0, D_0046F3C8, 0x733);
      memcpy(temp_v0_2, (&D_0058F680) + ((((((D_004B4B63 * 0xD680) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF), 0xD680);
      func_001EF510(temp_v0_2, 0xD680);
      amHeap_Free(temp_v0_2);

    case 3:

    case 5:
      var_v0 = (s32 *) (&func_002DEA00);
      if ((&func_002DEA00) == ((void *) 0))
    {
      var_v0 = (void *) 0;
    }
      *((s32 **) (((u8 *) arg0) + 0x1C)) = var_v0;
      *((s32 **) (((u8 *) gOptionWork) + 0x34C)) = &func_002D9DE0;
      *((s32 *) (((u8 *) gOptionWork) + 0x388)) = 0;
      *((s32 *) (((u8 *) gOptionWork) + 0x38C)) = 0;
      Scene_Request(5, 0);
      new_var = 0;
      Scene_FadeTo(0xA, new_var);
      return;

  }

}
