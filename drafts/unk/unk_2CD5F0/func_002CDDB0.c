/* Draft (not built): func_002CDDB0 at 0x002CDDB0, size 0xD8, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xD0, original 0xD8; then decomp-permuter: score 720 -> 475
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CDDB0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern u8 D_005C2050[];
extern u8 D_005C2060[];
extern void amTask_Kill(s32);
extern void func_001F7DB0(void);
extern void func_001F7BF0(void);
extern void func_001F7820(void);
extern void func_001F7690(void);
extern void func_001F6E50(void);
extern void func_001F7470(s32);
extern s32 D_0051CD20[];
extern void func_001F6D60(void);
extern void func_001F5B10(void *, s32);
extern void func_002CDC20(void);
extern void func_00208F70(void *);
extern void BtbObj_RemoveFromList(void *);
extern void amModel_SetCurrent(s32, s32);
extern void func_001F3DF0(void *);
extern void BtbObj_CheckDrawFlags(void *);
extern void func_00208D70(void *);
extern s32 D_00470238;
extern void func_001F5D50(void *);
extern void func_001F5E20(void *);
extern void amMotion_BuildMatrices(s32);
extern s32 func_001F5EF0(s32, s32);
extern u8 *func_001F5FD0(s32, void *, s32, void *, void *);
extern void func_002CED60(void);
extern u8 D_0046F258[];
extern void func_001444E0(void *, f32, s32);
extern void func_00144430(void *);
extern u8 D_005C206C[];
extern u8 D_005C2074[];
extern u8 *gBattle;
extern s32 D_00470148;
extern s32 D_0047014C;
extern s32 D_00470150;
extern u8 D_005C2070[];
extern f32 D_00470154;
extern f32 func_00146E30(s32, s32);
extern u8 D_005C2068[];
extern s32 D_0051CD0C[];
extern s32 func_001A50F0(s32, s32);
extern s32 func_00209540(s32, s32, s32);
extern u8 D_0046F218[];
extern void memset(void *, s32, s32);
extern u8 D_0046F230[];
extern void BtbObj_RemoveByIdx(s32, s32);
extern void func_001F5B50(u8 *, s32);
extern void BtbObj_RemoveByKey(void *);
extern void func_00125740(void *, void *, s32);
extern void func_001F5A70(s32);
extern void func_0013E2A0(s32);
extern void func_0013E170(s32);
extern void func_0013E0A0(s32);
extern u8 D_00495718[];
extern u8 D_00495758[];
extern u8 *D_0051CD00[];
extern void func_001F5B70(u8 *);
extern void func_002CEA60(void);
extern s32 gBtbBg[];
extern void func_00200270(f32, f32);
extern void func_002CDD50(u8 *);
extern void func_002CDD00(u8 *);
extern void func_002CDA30(u8 *);
extern void func_002CD9E0(u8 *);
void memset(void *, s32, s32);
extern void func_0013B0B0(void *);
extern void func_00131F00(u8 *, f32, f32);
extern void func_00132DF0(s32);
extern void func_0013B110(s32);
extern void func_00133780(s32, s32);
extern u8 D_0047CA40[];
extern u8 D_0046F228[];
extern u8 D_004566D0[];
extern u8 D_00456680[];
extern u8 D_00459390[];
extern u8 *D_004566A4[];
extern u8 *D_00456730[];
extern u8 *D_00456734[];
extern s32 func_002096D0(u8 *, s32, s32);
extern void func_002CDA90(void);
extern u8 D_0051CD24[];
extern void func_001F5CB0(u8 *);
extern void func_001F5AB0(s32);
extern s32 func_001B0D10(void);
extern u8 D_0044AE50[];
extern char D_0046F240[];
extern char D_0046F248[];
extern char *D_0051CD14[];
extern void func_002CE0A0(void);
extern void func_002CE2A0(u8 *);
extern void func_002CE3D0(u8 *);
extern void func_002CE500(void);
extern u8 D_005C2064[];
extern u32 func_0012EAE0(s32);
extern u8 D_00456A30[];
extern void func_001E9B00(s32, s32, s32, s32, f32, f32);
typedef struct 
{
  s32 w[4];
} Q16;
typedef struct 
{
  Q16 q[2];
  s32 tail[2];
} Tab40;
void func_002CD810(void);
void func_002CD870(void);
void func_002CD890(void);
void func_002CD8F0(void);
void func_002CD960(void);
void func_002CDB70(u8 *p);
void func_002CDB80(u8 *p);
void func_002CDE90(void);
void func_002CDF70(void);
void func_002CDFE0(void);
void func_002CE980(u8 *a0);
void func_002CEC50(void);
void func_002CF010(u8 *a);
void func_002CF070(void);
void func_002CF0E0(void);
s32 func_002CF180(u8 *p);
s32 func_002CF280(void);
s32 func_002CF290(void);
s32 func_002CF2A0(void);
s32 func_002CF2B0(u8 *s0);
s32 func_002CF3A0(void);
void func_002CF650(s32 flag);
void func_002CF6E0(s32 i, s32 kind);
void func_002CF820(void);
void func_002CDDB0(void)
{
  s32 temp_a3;
  s32 new_var;
  s32 temp_v0;
  s32 var_s1;
  s8 *temp_s2;
  u8 *temp_v0_2;
  var_s1 = 0;
  temp_s2 = (s8 *) (*D_0051CD0C);
  new_var = (s32) temp_s2;
  temp_v0 = func_001A50F0(new_var, 0x212);
  if (temp_v0 != 0)
  {
    var_s1 = func_00209540(temp_v0, 0x02000004, 0);
  }
  if (var_s1 != 0)
  {
    temp_v0_2 = func_001F5FD0(0x85000000, &D_0046F230, 0, &func_002CDD50, 0);
    temp_a3 = *((s32 *) (((u8 *) temp_v0_2) + 0x20));
    *((s32 *) (((u8 *) temp_v0_2) + 0x20)) = (s32) (temp_a3 & (~0x800));
    *((s32 *) (((u8 *) temp_v0_2) + 0x20)) = (s32) ((*((s32 *) (((u8 *) temp_v0_2) + 0x20))) | 0x800);
    memset(temp_v0_2 + 0x30, 0, 0x80);
    *((s32 *) (((u8 *) temp_v0_2) + 0x38)) = var_s1;
    *((s32 *) (((u8 *) (temp_v0_2 + 0x30)) + 4)) = func_001A50F0(new_var, 0x280);
  }
}
