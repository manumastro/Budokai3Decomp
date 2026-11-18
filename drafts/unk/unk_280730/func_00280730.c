/* Draft (not built): func_00280730 at 0x00280730, size 0xA0, segment unk/unk_280730 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x9C, original 0xA0; then decomp-permuter: score 990 -> 170
 * Original: asm/nonmatchings/unk/unk_280730/func_00280730.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct Ac280
{
  char pad0[0x1C];
  void *f1C;
  char pad20[0x1C];
  s8 f3C;
  char pad3D;
  u16 f3E;
  s16 f40;
  f32 f44;
  s32 f48;
  f32 f4C;
  f32 f50;
  f32 f54;
} Ac280;
typedef struct Sub280
{
  char pad0[0xC];
  s8 fC;
  char padD[3];
  s16 f10;
  char padE[2];
  f32 f14;
} Sub280;
typedef struct Sub2C60
{
  char pad0[2];
  s8 f2;
  s8 f3;
  char pad4[8];
  f32 fC;
} Sub2C60;
typedef struct Wrap280
{
  char pad0[0x30];
  Sub2C60 *f30;
} Wrap280;
extern f32 gFrameDelta;
extern void func_002811D0(void *);
extern void amCdFs_Close(void *, s32);
extern void amHeap_Free(void *);
extern void func_0022D4B0(s32, s32);
void func_002807E0(Ac280 *o);
void func_00280C70(Ac280 *o);
extern s32 D_004532F0[][2];
extern void func_00280AB0(void);
extern void func_0022CF70();
typedef struct Q808
{
  char pad0[8];
  u8 *f8;
  char padC[2];
  u16 fE;
  char pad10[8];
  f32 f18;
} Q808;
typedef struct Sub5C280
{
  char pad0[0x5C];
  f32 f5C;
} Sub5C280;
extern void func_002808E0(void *);
typedef struct Sub30_280
{
  char pad0[8];
  void *f8;
  u8 fC;
  char padD[1];
  s16 fE;
  s16 f10;
  s32 f14;
  s32 f18;
  f32 f1C;
  f32 f20;
  s32 f24;
} Sub30_280;
extern void *amTask_Create();
extern void *A2d_AllocObj(s32, f32);
extern char D_0046B740[];
void func_002807D0(void);
void func_00280A00(Ac280 *o);
void func_00280D20(Wrap280 *w);
void func_00280D90(Ac280 *o, f32 a, f32 d);
void func_00280DC0(Ac280 *o);
void func_00280E40(Ac280 *o, s16 a);
void *func_00280E70(s16 a0, s16 a1);
void CsSubStat_CloseStep(Wrap280 *w);
void func_00281CC0(Wrap280 *w);
void func_00280730(u8 *arg0)
{
  f32 temp_f1;
  f32 temp_f1_2;
  f32 temp_f3;
  u8 *new_var;
  u8 *temp_v0;
  temp_f3 = *((f32 *) (((u8 *) arg0) + 0x24));
  new_var = (u8 *) arg0;
  temp_v0 = *((u8 **) (new_var + 8));
  if (temp_f3 != 0.0f)
  {
    *((f32 *) (new_var + 0x1C)) = (f32) ((*((f32 *) (new_var + 0x1C))) + (temp_f3 * gFrameDelta));
    if (!((*((f32 *) (new_var + 0x24))) <= 0.0f))
    {
      temp_f1 = *((f32 *) (new_var + 0x20));
      if (!((*((f32 *) (new_var + 0x1C))) <= temp_f1))
      {
        *((f32 *) (new_var + 0x1C)) = temp_f1;
        *((f32 *) (new_var + 0x24)) = 0.0f;
      }
    }
    else
    {
      temp_f1_2 = *((f32 *) (new_var + 0x20));
      if ((*((f32 *) (new_var + 0x1C))) < temp_f1_2)
      {
        *((f32 *) (new_var + 0x1C)) = temp_f1_2;
        *((f32 *) (new_var + 0x24)) = 0.0f;
      }
    }
  }
  *((f32 *) (((u8 *) temp_v0) + 0x50)) = (f32) (*((f32 *) (new_var + 0x1C)));
  *((f32 *) (((u8 *) temp_v0) + 0x54)) = (f32) (*((f32 *) (new_var + 0x1C)));
  *((f32 *) (((u8 *) temp_v0) + 0x58)) = (f32) (*((f32 *) (new_var + 0x1C)));
  func_0022CF70();
}
