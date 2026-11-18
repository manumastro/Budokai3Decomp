/* Draft (not built): func_002EAEB0 at 0x002EAEB0, size 0xB8, segment unk/unk_2EA0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xE0, original 0xB8; then decomp-permuter: score 1490 -> 400
 * Original: asm/nonmatchings/unk/unk_2EA0B0/func_002EAEB0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern void Option_Load(void);
extern u8 *gBattle;
extern u8 *D_00470958;
extern u8 D_0046F678[];
extern u8 D_0046F680[];
extern void func_002E9B10(void *, void *);
extern void func_002E9B90(s32);
extern u8 D_0046F668[];
extern u8 D_0046F670[];
extern u8 D_0046F658[];
extern u8 D_0046F660[];
extern u8 D_0046F648[];
extern u8 D_0046F650[];
extern u8 D_0046F638[];
extern u8 D_0046F640[];
extern u8 D_0046F628[];
extern u8 D_0046F630[];
extern u8 D_0046F608[];
extern u8 D_0046F618[];
extern u8 D_0046F5F8[];
extern u8 D_0046F600[];
extern void func_002E9970(s32, s32);
extern s32 func_002E9900(void);
extern void amModel_SetCurrent(s32, s32);
extern void func_0022C060(s32, f32);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern s32 func_0022BF80(s32);
extern void (*D_004573F4[])(void);
extern s32 amGs_SetReg32(s32, s32);
extern void func_002EA4A0(void);
extern void func_0022C560(s32);
extern void amCdFs_ReleaseCache(s32);
extern void amCdFs_Close(s32, s32);
extern void memset(void *, s32, s32);
extern void func_0022D0E0(s32, s32);
extern u8 D_005C9F80[];
extern s32 D_00470194;
extern s32 D_00470198;
extern s32 D_00457410[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 func_0022D670(s32, f32);
extern u8 D_00457440[];
extern void (*D_004573F0[])(void);
extern void (*D_00457400[])(void);
extern void func_001C75D0(void *, s32);
extern s32 D_00457E50[];
extern void func_002E9BA0(s32);
extern void func_002EAC30(void);
void func_002EA0B0(void);
s32 func_002EA0C0(void);
void func_002EA0F0(void);
void func_002EA140(void);
void func_002EA170(void);
void func_002EA1A0(void);
void func_002EA1D0(void);
void func_002EA200(void);
void func_002EA230(void);
void func_002EA260(void);
void func_002EA290(void);
void func_002EA2C0(void);
void func_002EA2F0(void);
void func_002EA330(void);
void func_002EA370(void);
void func_002EA3B0(void);
void func_002EA3F0(void);
s32 func_002EA430(void);
void func_002EA460(void);
void func_002EA6C0(void);
void func_002EA8F0(void);
void func_002EAA80(void);
void func_002EB0D0(void);
void func_002EB280(void);
void func_002EB290(void);
void func_002EB380(void);
s32 func_002EB7B0(void);
void func_002EAEB0(void)
{
  u8 *new_var;
  s32 (*temp_v1)();
  u8 *temp_s0;
  temp_s0 = D_00470958;
  new_var = (u8 *) temp_s0;
  if ((*((s8 *) (((u8 *) (*((u8 **) (new_var + 0x18)))) + 0))) & 4)
  {
    goto block_8;
  }
  loop_2:
  *((s32 *) (new_var + 0x20)) = (s32) ((*((s32 *) (new_var + 0x20))) + 1);

  if (!((*((s8 *) (((u8 *) (*((u8 **) (new_var + 0x18)))) + 0))) & 1))
  {
    goto block_4;
  }
  *((s32 *) (new_var + 0x48)) = (s32) ((*((s32 *) (new_var + 0x48))) + 1);
  block_4:
  *((u8 **) (new_var + 0x18)) = (u8 *) ((*((u8 **) (new_var + 0x18))) + 8);

  temp_v1 = *((s32 (**)()) (((u8 *) (*((u8 **) (new_var + 0x18)))) + 4));
  if (temp_v1 == ((void *) 0))
  {
    goto block_6;
  }
  temp_v1();
  block_6:
  if (!((*((s8 *) (((u8 *) (*((u8 **) (new_var + 0x18)))) + 0))) & 4))
  {
    goto loop_2;
  }

  block_8:
  return;

}
