/* Draft (not built): func_00282CB0 at 0x00282CB0, size 0x15C, segment menu/skl_sheet (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x154, original 0x15C; then decomp-permuter: score 3805 -> 530
 * Original: asm/nonmatchings/menu/skl_sheet/func_00282CB0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern u8 *D_004706CC;
extern u8 *D_00470820;
extern void Help_Exit();
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *);
extern void Obj_ResetF38(void *);
extern void amHeap_Free(void *);
void SklSheet_SetIndex(s16 a0);
s32 func_00283BF0(void);
void SklSheet_Clear(void);
void SklSheet_Free(void);
void func_00282CB0(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3)
{
  f32 temp_f4;
  f32 temp_f3;
  f32 var_f0;
  u8 *temp_a1;
  temp_a1 = arg1 + (*(((*((s32 *) (((u8 *) arg1) + 0x14))) + arg1) + ((arg2 - (*((s32 *) (((u8 *) arg1) + 0x18)))) * 4)));
  temp_f4 = (f32) (*((s16 *) (((u8 *) temp_a1) + 0x10)));
  temp_f3 = (f32) (*((s16 *) (((u8 *) temp_a1) + 0x12)));
  if (arg3 & 1)
  {
    *((f32 *) (((u8 *) arg0) + 0x34)) = 0.0f;
    var_f0 = temp_f3 * (*((f32 *) (((u8 *) D_004706CC) + 0x3C)));
    goto block_6;
  }
  if (arg3 & 2)
  {
    *((f32 *) (((u8 *) arg0) + 0x34)) = (f32) ((-temp_f3) * (*((f32 *) (((u8 *) D_004706CC) + 0x3C))));
    *((f32 *) (((u8 *) arg0) + 0x3C)) = 0.0f;
  }
  else
  {
    *((f32 *) (((u8 *) arg0) + 0x34)) = (f32) (((-temp_f3) / 2.0f) * (*((f32 *) (((u8 *) D_004706CC) + 0x3C))));
    var_f0 = (temp_f3 / 2.0f) * (*((f32 *) (((u8 *) D_004706CC) + 0x3C)));
    block_6:
    *((f32 *) (((u8 *) arg0) + 0x3C)) = var_f0;

  }
  if (arg3 & 8)
  {
    *((f32 *) (((u8 *) arg0) + 0x30)) = 0.0f;
    *((f32 *) (((u8 *) arg0) + 0x38)) = (f32) (temp_f4 * (*((f32 *) (((u8 *) D_004706CC) + 0x38))));
  }
  else
    if (arg3 & 0x10)
  {
    *((f32 *) (((u8 *) arg0) + 0x30)) = (f32) ((-temp_f4) * (*((f32 *) (((u8 *) D_004706CC) + 0x38))));
    *((f32 *) (((u8 *) arg0) + 0x38)) = 0.0f;
  }
  else
  {
    *((f32 *) (((u8 *) arg0) + 0x30)) = (f32) (((-temp_f4) / 2.0f) * (*((f32 *) (((u8 *) D_004706CC) + 0x38))));
    *((f32 *) (((u8 *) arg0) + 0x38)) = (f32) ((temp_f4 / 2.0f) * (*((f32 *) (((u8 *) D_004706CC) + 0x38))));
  }
  *((s32 *) (((u8 *) arg0) + 0x40)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x44)) = 0;
  *((f32 *) (((u8 *) arg0) + 0x48)) = temp_f4;
  *((f32 *) (((u8 *) arg0) + 0x4C)) = temp_f3;
}
