/* Draft (not built): func_002AFCE0 at 0x002AFCE0, size 0x9C, segment unk/unk_2AF860 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 21 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB4, original 0x9C; then decomp-permuter: score 1455 -> 240
 * Original: asm/nonmatchings/unk/unk_2AF860/func_002AFCE0.s */

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
s32 func_002A9AE0(s32, s32, void *, s32);
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
s32 func_002AFCE0(u8 *arg0, s32 *arg1)
{
  u8 *temp_a0;
  u8 *temp_a2;
  u8 *temp_s0;
  u8 *new_var;
  temp_s0 = *((u8 **) (((u8 *) arg0) + 0x1C));
  if ((*((s16 *) (((u8 *) temp_s0) + 4))) != 3)
  {
    return 3;
  }
  *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
  func_002A9AE0(*(*((s32 **) (((u8 *) arg0) + 0))), *arg1, temp_a2, *((s32 *) (((u8 *) temp_a2) + 0x50)));
  *((u8 **) (((u8 *) temp_s0) + 0x40)) = (void *) 0;
  amCdFs_Close(temp_s0, 0);
  temp_a0 = *((u8 **) (((u8 *) arg0) + 0x18));
  if (temp_a0 != ((void *) 0))
  {
    amCdFs_Close(temp_a0, 0);
  }
  temp_a2 = *((u8 **) (((u8 *) temp_s0) + 0x40));
  *((u8 **) ((new_var = (u8 *) arg0) + 0x18)) = (void *) 0;
  *((u8 **) (new_var + 0x1C)) = (void *) 0;
  amCdFs_SetHeap(0);
  return 1;
}
