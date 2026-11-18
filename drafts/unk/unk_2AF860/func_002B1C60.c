/* Draft (not built): func_002B1C60 at 0x002B1C60, size 0x104, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 25 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x110, original 0x104; then decomp-permuter: score 1005 -> 510
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002B1C60.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern void func_002AF650(void *, void *);
extern u8 D_005BCD20[];
extern void func_002A9930(s32, s32, void *, s32);
extern void amCdFs_Close(void *, s32);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void amCdFs_SetHeap(u8);
extern void func_002AFCE0(void);
extern void func_002AFE00(void);
extern s32 func_002B0000(u8 *, s32 *);
extern void func_002A9C00(s32, s32, s32, void *, s32);
extern void func_002A9D30(s32, s32, void *, s32);
extern s32 func_002B0390(u8 *, s32 *);
extern void func_002A9EA0(s32, s32, void *, s32);
extern void func_0012F2C0(void);
extern void amDraw_ResetPackets(void);
extern f32 D_004708F8;
extern u8 D_004E0660[];
extern u8 D_004E0668[];
extern s32 func_002B0190(u8 *, u8 *);
extern void amCdFs_ReleaseCache(s32);
extern s32 func_002AF8E0(u8 *, u8 *);
extern u8 D_005BC180[];
extern s32 amFile_Load(u8 *);
extern void amCamera_Init(void *);
extern u8 D_005ABA80[];
extern s8 D_004B4B41[];
extern s8 D_004B4B57[];
extern u8 *gSklEdit;
extern u8 D_004E0688[];
extern void func_002B1D70(u8 *);
extern void func_002B1B10(u8 *, s32);
extern u8 *D_004706CC;
void func_002AF860(u8 *a, u8 *b);
s32 func_002AF880(s32 **a, u8 *b);
s32 func_002AF9E0(u8 *s3, u8 *s0);
s32 func_002AFB20(u8 *a, u8 *b);
s32 func_002AFBC0(u8 *a, u8 *b);
void func_002AFCA0(u8 *a, u8 *b);
s32 func_002AFD80(u8 *a, u8 *b);
s32 func_002AFFA0(u8 *a, u8 *b);
s32 func_002B0130(u8 *a, u8 *b);
s32 func_002B0230(u8 *a, u8 *b);
s32 func_002B0290(u8 *a, u8 *b);
s32 func_002B0330(u8 *a, u8 *b);
s32 func_002B0490(u8 *a, u8 *b);
s32 func_002B04F0(u8 *a, u8 *b);
s32 func_002B0590(u8 *a, u8 *b);
s32 func_002B05F0(void);
s32 func_002B0610(u8 *a);
s32 func_002B0630(void);
s32 func_002B0650(u8 *a);
s32 func_002B0680(void);
s32 func_002B0690(void);
f32 func_002B06A0(void);
s32 func_002B0BF0(s32 i);
void func_002B1E90(u8 *d, u8 *b, s32 idx, s32 flags);
s32 func_002B1C60(u8 *arg0)
{
  s16 temp_v1_2;
  s32 temp_a0;
  s32 temp_s0;
  volatile int var_v0;
  u8 *temp_s1;
  u8 *temp_v1;
  temp_v1 = arg0 + ((*((s32 *) (((u8 *) arg0) + 0x24))) * 0x1C);
  temp_s1 = temp_v1 + 0x48;
  temp_a0 = *((s32 *) (((u8 *) temp_v1) + 0x48));
  temp_v1_2 = *((s16 *) (((u8 *) temp_v1) + 0x62));
  temp_s0 = (*((s32 *) (((u8 *) temp_v1) + 0x4C))) + temp_a0;
  if ((temp_s0 + 9) < temp_v1_2)
  {
    if ((temp_s0 + 0x12) < temp_v1_2)
    {
      *((s32 *) (((u8 *) temp_v1) + 0x48)) = (s32) (temp_a0 + 9);
    }
    else
    {
      *((s32 *) (((u8 *) temp_v1) + 0x48)) = (s32) (temp_v1_2 - 9);
      var_v0 = 9 - ((*((s32 *) (((u8 *) temp_v1) + 0x48))) - temp_s0);
      goto block_7;
    }
  }
  else
  {
    if (temp_v1_2 < 9)
    {
      *((s32 *) (((u8 *) temp_v1) + 0x48)) = 0;
      var_v0 = (*((s16 *) (((u8 *) temp_s1) + 0x1A))) - 1;
    }
    else
    {
      *((s32 *) (((u8 *) temp_v1) + 0x48)) = (s32) (temp_v1_2 - 9);
      var_v0 = 8;
    }
    block_7:
    *((s32 *) (((u8 *) temp_s1) + 4)) = var_v0;

  }
  func_002B1D70(arg0);
  func_002B1B10(arg0, *((s16 *) (((u8 *) (((*((s32 *) (((u8 *) temp_s1) + 4))) * 2) + temp_s1)) + 8)));
  return temp_s0 != ((*((s32 *) (((u8 *) temp_s1) + 4))) + (*((s32 *) (((u8 *) temp_v1) + 0x48))));
}
