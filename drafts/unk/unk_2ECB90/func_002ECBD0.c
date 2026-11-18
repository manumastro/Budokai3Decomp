/* Draft (not built): func_002ECBD0 at 0x002ECBD0, size 0x108, segment unk/unk_2ECB90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x10C, original 0x108; then decomp-permuter: score 850 -> 670
 * Original: asm/nonmatchings/unk/unk_2ECB90/func_002ECBD0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern void func_001F5CB0(void *);
s32 DrawFlags_Apply(s32, s32, s32, s32);
s32 func_00133D80(s32);
s32 func_00133D90(f32);
s32 func_0013E0A0(s32);
s32 func_001F5A70(void *);
extern s32 D_00470238;
extern s32 D_0051CD20;
extern void *gBattle;
extern char *D_0051CD14[];
extern void func_0012F2C0(void);
extern void amModel_SetCurrent();
void func_002ECB90(void);
void func_002ECBA0(void *a0);
void func_002ECBD0(u8 *arg0)
{
  u8 *new_var;
  s32 temp_a0;
  temp_a0 = *((s32 *) (((u8 *) (*((u8 **) (((u8 *) ((D_0051CD20 * 0x24) + (*D_0051CD14))) + 4)))) + 0xA4));
  if (temp_a0 != 0)
  {
    D_00470238 = 1;
    if (1)
    {
    }
    amModel_SetCurrent(temp_a0, 0x02002000);
  }
  func_001F5A70(*((u8 **) (((u8 *) arg0) + 0x10)));
  new_var = (u8 *) arg0;
  if (!((*((f32 *) (((u8 *) gBattle) + 0x892C))) <= 0.0f))
  {
    func_00133D80(*((s32 *) (((u8 *) gBattle) + 0x8928)));
    func_00133D90(*((f32 *) (((u8 *) gBattle) + 0x892C)));
    DrawFlags_Apply(0x8000, 0, 0, 0x8000);
  }
  func_0013E0A0(*((s32 *) (((u8 *) (*((u8 **) (new_var + 0x10)))) + 4)));
  if (!((*((f32 *) (((u8 *) gBattle) + 0x892C))) <= 0.0f))
  {
    DrawFlags_Apply(0, 0x8000, 0, 0);
  }
  func_0012F2C0();
}
