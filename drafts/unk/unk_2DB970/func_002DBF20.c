/* Draft (not built): func_002DBF20 at 0x002DBF20, size 0xC0, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB8, original 0xC0; then decomp-permuter: score 675 -> 10
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DBF20.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct Scene2DB970
{
  char pad0[0x388];
  f32 f388;
} Scene2DB970;
extern s8 D_004703F4;
extern Scene2DB970 *gOptionWork;
extern void func_002DD8A0(void);
s32 func_001A3610(s32);
s32 func_001A36E0(s32, s32);
extern void amTask_Kill(void *);
void func_002DCC50(void);
void func_002DDC30(void);
void func_002DBF20(u8 *arg0)
{
  f32 temp_f1;
  f32 var_f2;
  s32 temp_s1;
  u8 *temp_s0;
  temp_s0 = (u8 *) gOptionWork;
  temp_s1 = *((s32 *) (((u8 *) temp_s0) + 0x330));
  if ((*((s32 *) (((u8 *) ((temp_s1 * 4) + temp_s0)) + 0x334))) != (-1))
  {
    func_001A36E0(temp_s1, 0x80);
    if (D_004703F4 != 3)
    {
      var_f2 = 1.0f;
    }
    else
    {
      var_f2 = 1.2f;
    }
    temp_f1 = (*((f32 *) (((u8 *) temp_s0) + 0x32C)) = (*((f32 *) (((u8 *) temp_s0) + 0x32C))) + var_f2);
    if (!(temp_f1 <= 60.0f))
    {
      func_001A3610(temp_s1);
      amTask_Kill(arg0);
      *((s32 *) (((u8 *) temp_s0) + 0x328)) = 0;
    }
  }
}
