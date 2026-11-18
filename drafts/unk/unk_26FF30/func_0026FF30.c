/* Draft (not built): func_0026FF30 at 0x0026FF30, size 0xF0, segment unk/unk_26FF30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 23 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x100, original 0xF0; then decomp-permuter: score 1085 -> 965
 * Original: asm/nonmatchings/unk/unk_26FF30/func_0026FF30.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct Ac26F
{
  char pad0[0x1C];
  void *f1C;
} Ac26F;
extern s32 func_002D20D0(void *);
extern s32 func_00283BF0(void *);
extern void SklSheet_Free(void);
extern void func_00271AF0(void);
typedef struct Ac26FB
{
  char pad0[0x1C];
  void *f1C;
  char pad20[0x10];
  s32 f30;
  s32 f34;
} Ac26FB;
typedef struct G26FB
{
  char pad0[0x1C];
  void *f1C;
  char pad20[0x2C];
  s32 f4C;
} G26FB;
extern G26FB *D_004707FC;
extern f32 gFrameDelta;
extern f32 D_0047001C;
extern void func_00271580(void);
typedef struct G270
{
  char pad0[0x48];
  s32 f48;
  s32 f4C;
  s32 f50;
  char pad54[0x4];
  s32 f58;
  char pad5C[0x580];
  s32 f5DC[0x30];
} G270;
typedef struct Ac270
{
  s32 f0;
  char pad4[3];
  u8 f7;
} Ac270;
typedef struct Ent270
{
  char pad0[0xB];
  u8 fB;
  char pad0C[0x1C];
} Ent270;
typedef struct G270C
{
  char pad0[0x40];
  s32 f40;
  s32 f44;
  char pad48[0x1C];
  s32 *f64;
} G270C;
extern u8 D_004E0660[];
extern u8 D_0059CA9D[];
s32 func_00270020(void);
void func_002702A0(u8 *a0, s32 a1);
void func_002719D0(Ac26F *s);
void func_00271A20(Ac26F *s);
void func_00271A70(Ac26F *s);
s32 func_0026FF30(void)
{
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a3;
  s32 var_a0;
  u8 *new_var;
  s32 var_t1;
  s32 var_t2;
  u8 *temp_a2;
  var_t1 = 0x2F;
  temp_a3 = *((s32 *) (((u8 *) D_004707FC) + 0x50));
  temp_a2 = (u8 *) (D_004707FC + 0x5DC);
  var_t2 = *((s32 *) (((u8 *) D_004707FC) + 0x698));
  temp_a0 = *(temp_a2 + (temp_a3 * 4));
  new_var = ((u8 *) D_004707FC) + 0x4C;
  if (temp_a0 < ((*((s32 *) (((u8 *) D_004707FC) + 0x4C))) + (*((s32 *) (((u8 *) D_004707FC) + 0x48)))))
  {
    var_t2 = temp_a0;
    var_t1 = temp_a3;
  }
  else
  {
    var_a0 = temp_a3 - 1;
    if (var_a0 >= 0)
    {
      temp_a2 = (u8 *) (D_004707FC + (var_a0 * 4));
      loop_5:
      if ((*((s32 *) (((u8 *) temp_a2) + 0x5DC))) >= 0)
      {
        var_t2 = *(temp_a2 + (var_a0 * 4));
        var_t1 = var_a0;
      }
      else
      {
        var_a0 -= 1;
        temp_a2 -= 4;
        if (var_a0 < 0)
        {
        }
        else
        {
          goto loop_5;
        }
      }

    }
  }
  if (var_t2 >= 0)
  {
    *((s32 *) (((u8 *) D_004707FC) + 0x50)) = var_t1;
    temp_a0_2 = *((s32 *) (((u8 *) D_004707FC) + 0x58));
    if (temp_a0_2 < (var_t2 + 9))
    {
      *((s32 *) new_var) = (s32) (temp_a0_2 - 9);
      *((s32 *) (((u8 *) D_004707FC) + 0x48)) = (s32) (var_t2 - (*((s32 *) new_var)));
    }
    else
    {
      *((s32 *) (((u8 *) D_004707FC) + 0x4C)) = var_t2;
      if (temp_a0)
      {
      }
      *((s32 *) (((u8 *) D_004707FC) + 0x48)) = 0;
    }
    return 1;
  }
  return 0;
}
