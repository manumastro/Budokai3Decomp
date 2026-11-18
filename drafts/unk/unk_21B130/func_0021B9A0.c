/* Draft (not built): func_0021B9A0 at 0x0021B9A0, size 0xBC, segment unk/unk_21B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB4, original 0xBC; then decomp-permuter: score 660 -> 625
 * Original: asm/nonmatchings/unk/unk_21B130/func_0021B9A0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
f32 func_0011F320(f32);
void func_0022C7D0(s32, f32, s32);
void func_0022ACF0(s32);
extern s32 D_00470698;
extern s32 D_004706A0[2];
extern void (*D_0046A450[])(void);
void func_00125740(void *, void *, s32);
s32 func_002408C0(void);
typedef struct V16
{
  s32 a;
  s32 b;
  s32 c;
  s32 d;
} V16;
extern V16 D_0044F710;
extern s32 D_00470688;
void func_0012F2C0(void);
void func_00133780(s32, s32);
s32 amGs_SetReg32(s32, s32);
void func_00139620(s32, void *, s32, s32, s32, f32);
void func_00228430(s32);
void func_002284D0(s32);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
void amModel_SetCurrent(s32, s32);
void func_0022C060(f32);
void func_0021B1E0(void);
extern s32 D_0047068C;
s32 func_00225380(void);
void func_00224F90(void);
void func_0023A7A0(void);
void func_0022D0E0(s32, s32);
void func_002401A0(void);
void func_00259FE0(void);
void func_002CD810(void);
void func_002E9770(void);
void amTask_KillGroup(s32, s32, s32);
extern f32 D_00470690;
extern f32 D_00470710;
extern f32 D_00470694;
typedef struct FPair
{
  f32 a;
  f32 b;
} FPair;
void func_0022DB20(f32, f32);
void func_0021BEA0(u8 *, s32);
void func_0022C560(s32);
extern s32 D_0046A470[];
void func_002400E0(void);
extern u8 *gBattle;
extern s32 D_00470680;
extern s32 D_00470684;
extern void memset(void *, s32, s32);
extern void func_00133780(s32, s32);
extern s32 amGs_SetReg32(s32, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_00228410();
extern void func_0022C560(s32);
extern void func_0021B130(void);
extern void func_0023FBB0(void);
extern void func_0021CA20(void);
extern u8 *gBtlSys;
u8 *func_0021C250(u8 *, u8 *);
typedef struct BtlCnt
{
  u8 pad[0x88D8];
  s32 n;
} BtlCnt;
extern u8 D_0046A4E8[];
extern u8 D_0046A4F8[];
extern u8 D_0046A508[];
extern u8 D_0046A518[];
extern u8 D_0046A528[];
s32 amTask_Create(void (*)(void), void (*)(void), s32, s32, s32, void *);
s32 func_0022D860(s32, f32);
void func_0021BA60(void);
void func_002E97E0(void);
void func_0021B420(void);
s32 func_0021B540(void);
s32 func_0021B5D0(void);
s32 func_0021B660(void);
s32 func_0021B6F0(void);
void func_0021B760(void);
void func_0021B7A0(u8 *obj);
void func_0021B810(void);
void func_0021B870(void);
void func_0021B940(void);
s32 func_0021C280(s32 a);
s32 Input_IsHeld(s32 a);
s32 func_0021C2E0(s32 id);
s32 func_0021C360(s32 id);
s32 func_0021C3D0(s32 i);
u8 *func_0021C3E0(s32 i);
u8 *func_0021C400(s32 i);
u8 *func_0021C430(s32 i);
s32 func_0021C460(s32 id);
void func_0021C540(f32 a, f32 b, f32 c);
void func_0021C560(s32 mode, f32 a, f32 b, f32 c);
void func_0021C5B0(s32 m);
void func_0021C5D0(s32 f);
void func_0021C5E0(s32 a, s32 b);
u8 *func_0021C600(void);
u8 *func_0021C610(void);
u8 *BtlSys_GetSlot(s32 i);
u8 *func_0021C660(s32 i);
u8 *func_0021C680(s32 i);
void func_0021C6A0(void);
void func_0021CAD0(void);
void func_0021CCF0(void);
s32 func_0021D170(u8 *o);
void func_0021B9A0(void)
{
  s32 new_var2;
  s32 temp_a0_2;
  s32 temp_a0_3;
  u8 *temp_a0;
  u8 *temp_v1;
  u8 *new_var;
  u8 *var_s0;
  u8 *var_s1;
  new_var = (u8 *) gBattle;
  var_s0 = gBtlSys;
  if ((new_var2 = *((s32 *) (new_var + 0x88EC))) == 0)
  {
    temp_a0 = *((u8 **) (((u8 *) var_s0) + 0xE64));
    D_00470704 = (s32) temp_a0;
    D_0047070C = 0x04001000;
    D_00470708 = 0;
    amModel_SetCurrent((s32) temp_a0, 0x04001000);
    D_00470238 = 0;
    temp_v1 = *((u8 **) (((u8 *) var_s0) + 0xEE8));
    if (temp_v1 != ((void *) 0))
    {
      temp_a0_2 = *((s32 *) (((u8 *) temp_v1) + 0x30));
      var_s1 = temp_v1 + 0x30;
      if (temp_a0_2 != 0)
      {
        func_0022C060(temp_a0_2);
      }
      temp_a0_3 = *((s32 *) (((u8 *) var_s1) + 4));
      if ((temp_a0_3 != 0) & 0xFF)
      {
        func_0022C060(*((s32 *) (((u8 *) var_s1) + 4)));
      }
    }
    if ((*((s32 *) (((u8 *) var_s0) + 0xDF8))) != 0)
    {
      func_0021B1E0();
    }
  }
}
