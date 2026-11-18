/* Draft (not built): func_002928C0 at 0x002928C0, size 0xDC, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE4, original 0xDC; then decomp-permuter: score 355 -> 220
 * Original: asm/nonmatchings/unk/unk_2918A0/func_002928C0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct Work2918A0
{
  char pad0[0x1C];
  void (*f1C)(void);
  char pad20[0x10];
  s32 f30;
  char pad34[0x8];
  f32 f3C;
  f32 f40;
} Work2918A0;
extern Work2918A0 *D_005AA5A0[];
extern void func_00291BF0(void);
extern void func_00293250(void);
extern void StrStatus_Start(s32, s32);
extern void func_00133780(s32, s32);
extern void func_00139620(s32, void *, s32, s32, s32, f32);
extern s32 D_005AA5E4[];
extern s32 D_005AA5CC[];
extern s32 D_005AA5D8[];
extern char D_00453DC0[];
typedef struct Q2918A0
{
  s32 v[4];
} Q2918A0;
extern s32 func_0022BF80(s32);
extern void func_0028EE90(void *, void *, void *, void *, void *, s32, s32, s32);
extern void func_00294A10(void);
extern s32 D_005AA604[];
extern s32 D_005AA664[];
extern s32 D_005AB340[];
extern s32 D_005AA5F8[];
extern void func_00293E80(void);
extern s32 D_005AA640[];
extern s32 func_002A8F90(void);
extern void Scene_FadeTo(s32, s32);
extern void func_00264140(s32, s32);
extern void func_002935F0(void);
extern void func_00295300(void);
extern f32 gFrameDelta;
extern s32 D_005AA5A4[];
typedef struct Sub2918A0
{
  char pad0[0xC];
  f32 fC;
  char padC[0x4];
  f32 f10;
} Sub2918A0;
extern s32 D_005AA550[];
extern void func_0022D0E0(s32, s32);
extern void amTask_Kill(s32);
extern void func_002BF310(void);
extern s32 D_005AA5C0[];
extern s32 D_005AA5C4[];
void func_002927E0(Work2918A0 *w);
extern s32 D_005AA5BC[];
extern s32 D_005AA5FC[];
extern s32 D_005AA5F4[];
typedef struct Copy16B_2918A0
{
  s32 a;
  s32 b;
  s32 c;
  s32 d;
} Copy16B_2918A0;
void StrStatus_OpenScene(void);
void func_002919B0(void);
void func_00292780(Work2918A0 *o);
void func_002929A0(Work2918A0 *w);
void func_002948C0(Work2918A0 *w);
void func_00294960(Work2918A0 *w);
void func_00295260(Work2918A0 *w);
void func_002928C0(u8 *arg0)
{
  s32 *var_v0;
  f32 temp_f0;
  f32 temp_f1;
  f32 *new_var;
  f32 temp_f3;
  u8 *temp_v1;
  temp_v1 = arg0 + 0x30;
  temp_f1 = (*((f32 *) (((u8 *) arg0) + 0x40))) - gFrameDelta;
  *((f32 *) (((u8 *) arg0) + 0x40)) = temp_f1;
  if (temp_f1 < 0.0f)
  {
    var_v0 = (s32 *) (&func_00292780);
    *((f32 *) (((u8 *) temp_v1) + 0x10)) = 0.0f;
    if ((&func_00292780) == ((void *) 0))
    {
      var_v0 = (void *) 0;
    }
    *((s32 **) (((u8 *) arg0) + 0x1C)) = var_v0;
  }
  temp_f3 = *((f32 *) (((u8 *) temp_v1) + 0x10));
  if (temp_f3 <= 0.0f)
  {
    *(new_var = (f32 *) (((u8 *) temp_v1) + 0xC)) = 0.75f;
  }
  else
  {
    temp_f0 = (*new_var) + ((0.75f * gFrameDelta) / temp_f3);
    *new_var = temp_f0;
    if (!(temp_f0 <= 0.75f))
    {
      *((f32 *) (((u8 *) temp_v1) + 0xC)) = 0.75f;
    }
  }
  func_00133780(0, 1);
  func_00139620(0x900, arg0 + 0x30, -1, 0x44, 0, 0);
  func_00133780(0, 0);
}
