/* Draft (not built): func_00248550 at 0x00248550, size 0xE8, segment unk/unk_248550 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 25 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xC0, original 0xE8; then decomp-permuter: score 1820 -> 1415
 * Original: asm/nonmatchings/unk/unk_248550/func_00248550.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern void memset(void *, s32, s32);
s32 func_001D9C40(s32, s32, s32);
s32 func_002183F0(s32, void **);
s32 func_00218440(s32, void **);
extern void func_00146F30(void *);
extern void func_0020D780(void *);
typedef struct PackFile
{
  char pad0[8];
  s32 f8;
  s32 fC;
} PackFile;
typedef struct PackDir
{
  char pad0[0xC];
  s32 fC;
  char pad10[0x10];
  PackFile *f20[1];
} PackDir;
typedef struct PackRefs
{
  void *f0[2];
  s32 f8[2];
} PackRefs;
extern PackRefs *D_0046FE50;
extern char D_0046ADC8[];
extern s32 func_00127E88(void *, char *, s32);
extern PackDir *func_00246CA0(s32, s32);
extern void func_00209450(s32, s32);
void func_00248C60(void);
void func_00248C70(void);
void func_00248C80(void);
void func_00248CC0(void);
void func_00248D70(s32 i, s32 j);
void func_00248550(u8 *arg0, s32 arg1)
{
  s32 sp40;
  s32 sp50;
  u8 *sp60;
  s32 *sp64;
  s16 sp80;
  volatile unsigned short sp82;
  s32 temp_s0;
  temp_s0 = *((s32 *) (((u8 *) arg0) + 0x1354));
  memset(&sp60, 0, 0x2C);
  func_0020D780(&sp50);
  sp64 = &sp50;
  sp60 = arg0 + 0x130;
  sp80 = 9;
  sp82 = 0;
  if (0, arg1 == 2)
  {
    func_002183F0(1, (void **) (&sp60));
    func_001D9C40(temp_s0, 1, 0x3B);
  }
  if (arg1 == 3)
  {
    func_002183F0(1, (void **) (&sp60));
    M2C_ERROR();
    M2C_ERROR();
    func_00146F30(&sp40);
    sp60 = arg0 + 0x130;
    sp64 = &sp40;
    func_00218440((2 & 0xFFFFu) & 0xFFFFu, (void **) (&sp60));
    func_001D9C40(temp_s0, 1, 0x3B);
    if (!arg0)
    {
    }
  }
}
