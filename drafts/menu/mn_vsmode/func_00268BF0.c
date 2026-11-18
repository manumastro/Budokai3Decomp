/* Draft (not built): func_00268BF0 at 0x00268BF0, size 0x104, segment menu/mn_vsmode (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xFC, original 0x104; then decomp-permuter: score 1730 -> 1175
 * Original: asm/nonmatchings/menu/mn_vsmode/func_00268BF0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
s32 func_0022D0E0(s32, s32);
extern void *D_004707DC;
s32 func_0022C060(s32 *, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern void A2d_FlushList(void);
extern void func_0022CD00(void *);
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void StrStatus_Exit(void *);
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern void amCdFs_Close(void *, s32);
extern void Help_Exit();
extern void func_0028DF20();
extern char D_0046B430[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void *amHeap_Alloc(s32, s32, char *, s32);
void func_00268A80(u8 *arg0);
void VsMode_Clear(void);
void VsMode_Exit(void);
void VsMode_Load(void);
void func_00268BF0(u8 *arg0)
{
  volatile int new_var;
  s32 *var_s0;
  s32 *var_s1;
  s32 *var_s3;
  s32 var_s2;
  u8 *temp_a0;
  var_s0 = *((s32 **) (((u8 *) arg0) + 0x30));
  temp_a0 = *((u8 **) (((u8 *) D_004707DC) + 0xC));
  D_00470704 = temp_a0;
  D_0047070C = 0x1000;
  D_00470708 = 0;
  amModel_SetCurrent(temp_a0, 0x1000);
  D_00470238 = 0;
  var_s1 = (s32 *) (*var_s0);
  new_var = 0x3F800000;
  if (var_s1 != ((void *) 0))
  {
    func_0022C060(var_s1, new_var);
    func_0022CD00(var_s1);
  }
  var_s2 = 0;
  var_s1 = var_s0;
  do
  {
    var_s3 = *((s32 **) (((u8 *) var_s1) + 0x2C));
    if (var_s3 != ((void *) 0))
    {
      func_0022C060(var_s3, new_var);
      func_0022CD00(var_s3);
    }
    var_s2 += 1;
    var_s1 += 4;
  }
  while (var_s2 < 2);
  func_00268170(var_s0);
  func_00267E00(var_s0);
  var_s1 = (void *) 0;
  do
  {
    var_s2 = *((s32 *) (((u8 *) var_s0) + 4));
    if (var_s2 != 0)
    {
      func_0022C060((s32 *) var_s2, new_var);
      func_0022CD00((u8 *) var_s2);
    }
    var_s1 += 1;
    var_s0 += 4;
  }
  while (((s32) var_s1) < 2);
  A2d_FlushList();
}
