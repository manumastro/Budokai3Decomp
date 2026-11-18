/* Draft (not built): func_0030C8F0 at 0x0030C8F0, size 0xD0, segment unk/unk_30B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE4, original 0xD0; then decomp-permuter: score 1230 -> 485
 * Original: asm/nonmatchings/unk/unk_30B130/func_0030C8F0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct Part30C
{
  s16 f0;
  char pad2[0x1A];
  f32 f1C;
} Part30C;
typedef struct Ac30C
{
  char pad0[0x1C];
  void *f1C;
  char pad20[0x10];
  Part30C *f30;
} Ac30C;
extern f32 gFrameDelta;
extern void func_0030BFC0(Part30C *);
extern void func_0030B2E0(Part30C *);
extern void func_0030C860(void);
extern void func_0022D4B0(s32, s32);
extern void func_0022D0E0(s32, s32);
s32 func_0022D860(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void *gArenaRegCharList;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_0030C9C0(void);
void func_0030BF10(s32 *p);
void func_0030C280(u8 *arg0);
void func_0030C870(Ac30C *s);
void func_0030C8F0(u8 *arg0)
{
  struct Part30C *new_var3;
  u8 *new_var2;
  s32 *var_v1;
  s32 temp_a0_2;
  u8 *temp_a0;
  u8 *new_var;
  u8 *temp_s0;
  u8 *temp_s2;
  temp_s0 = *((u8 **) (((u8 *) arg0) + 0x30));
  func_0030BFC0((struct Part30C *) temp_s0);
  new_var3 = (struct Part30C *) temp_s0;
  func_0030B2E0(new_var3);
  new_var2 = (u8 *) temp_s0;
  if ((*((s16 *) (new_var2 + 0))) != 5)
  {
    *((s16 *) (new_var2 + 2)) = -1;
    *((s16 *) (new_var2 + 0)) = 4;
    *((s16 *) (new_var2 + 4)) = 2;
    temp_s2 = gArenaRegCharList;
    temp_a0 = *((u8 **) (((u8 *) temp_s2) + 0xC));
    D_00470704 = temp_a0;
    D_0047070C = 0x4000;
    D_00470708 = 0;
    new_var = (u8 *) temp_s2;
    amModel_SetCurrent(temp_a0, 0x4000);
    D_00470238 = 0;
    temp_a0_2 = *((s32 *) (new_var2 + 0x64));
    if ((*((s32 *) (new_var2 + 0x64))) != 0)
    {
      func_0022D0E0(*((s32 *) (new_var2 + 0x64)), 1);
    }
    var_v1 = (*((s32 **) (((u8 *) arg0) + 0x1C)) = (s32 *) (&func_0030C9C0));
    *((s32 *) (new_var2 + 0x64)) = func_0022D860(*(*((s32 **) (((u8 *) (*((u8 **) (new_var + 8)))) + 0x14))), 0);
    if ((&func_0030C9C0) == ((void *) 0))
    {
      var_v1 = (void *) 0;
    }
  }
}
