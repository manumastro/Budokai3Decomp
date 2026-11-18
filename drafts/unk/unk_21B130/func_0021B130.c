/* Draft (not built): func_0021B130 at 0x0021B130, size 0xA4, segment unk/unk_21B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 23 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x9C, original 0xA4; then decomp-permuter: score 1495 -> 1275
 * Original: asm/nonmatchings/unk/unk_21B130/func_0021B130.s */

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
void func_0021B9A0(void);
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
void func_0021B130(void)
{
  f32 sp1C;
  s32 var_a0;
  s32 var_v1;
  var_a0 = D_00470684 & D_00470680;
  if ((var_a0 & 0x80000000) && ((var_a0 &= 2, var_v1 = 1, var_a0 == 2)))
  {
  }
  else
  {
    var_v1 = 0;
  }
  if ((var_v1 != 0) && (D_0047068C != 0))
  {
    sp1C = D_00470690;
    sp1C = D_00470694;
    func_0022DB20(var_a0, var_a0 = D_00470684);
    func_0021BEA0((u8 *) D_0047068C, 0x18);
    func_0022C560(D_0047068C);
    func_0022DB20(0, 0);
  }
}
