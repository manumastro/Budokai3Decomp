/* Draft (not built): func_00298CC0 at 0x00298CC0, size 0xDC, segment unk/unk_297C60 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB4, original 0xDC; then decomp-permuter: score 1970 -> 1370
 * Original: asm/nonmatchings/unk/unk_297C60/func_00298CC0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct Vec4f
{
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} Vec4f;
typedef struct Slot
{
  s32 id;
  s32 f4;
  s32 f8;
  f32 fC;
  Vec4f f10;
  s32 f20;
  s32 f24;
  s32 f28;
  s32 f2C;
  s32 f30;
  s32 f34;
  s32 f38;
  char pad3C[4];
} Slot;
typedef struct SndWork
{
  char pad0[0x80];
  Slot slot[64];
  s32 f1080[72];
  s32 f11A0[8];
  Vec4f f11C0;
  s32 f11D0;
  s32 f11D4;
  s32 f11D8;
  char pad11DC[4];
  s8 f11E0;
  s8 f11E1;
  s8 f11E2;
  s8 f11E3;
  s8 f11E4;
  s8 f11E5;
  s8 f11E6;
} SndWork;
typedef struct Vec4i
{
  s32 v[4];
} Vec4i;
typedef struct Ctl
{
  char pad0[0x4];
  s16 f4;
  char pad6[0x44 - 0x6];
  s32 f44;
  char pad48[0x50 - 0x48];
  s32 f50;
} Ctl;
typedef struct Msg3
{
  s32 a;
  s32 b;
  s32 c;
} Msg3;
typedef struct Proc
{
  char pad0[0x1C];
  void (*f1C)(struct Proc *);
} Proc;
extern s32 gSoundState;
extern void *D_005AA550[];
extern Ctl *D_005AA574[];
extern Ctl *D_005AA59C[];
extern void *D_005AA5A0[];
extern SndWork *D_005AA604[];
extern void *D_005AA608[];
extern s32 D_005AA640[];
extern s32 D_005AA644[];
extern char D_0046BB70[];
extern Vec4i D_00453DA0;
extern s32 D_00453C80[];
extern s32 D_00453980[][5];
extern void *D_005AA554[];
extern void *D_005AA558[];
extern void *D_005AA55C[];
extern void *D_005AA560[];
extern void *D_005AA564[];
extern void *D_005AA568[];
extern void *D_005AA56C[];
extern void *D_005AA570[];
extern void func_0029D6C0(Vec4i *);
extern s32 Flight_MapIndex(s32);
extern void *func_001CAAB0(s32, s32, s32, s32, s32);
extern void *amCdFs_ReadFileId(s32, s32, s32);
extern void func_002BFEE0(s32, s32, s32);
extern void Help_Load(void);
extern void StrMap_Load(s32);
extern void func_00291390(s32);
extern u8 D_004E6560[];
extern s8 D_00511450[];
extern Vec4f D_00453D90;
extern Vec4f D_005AA680;
extern Vec4f D_005AA690;
extern s32 D_005AA664[];
extern s32 D_005AA668[];
extern s32 D_005AA670[];
extern void func_001F0660(void);
extern f32 func_00146E90(Vec4f *);
extern f32 func_0011F680(f32, f32);
extern void Scr_SetRecord(Vec4f *, s32);
extern void func_00143B50(s32, s32);
extern void amSound_LoadBank(Msg3 *);
extern void func_002980F0(Proc *);
extern void func_002984A0(void);
extern void Scene_SetReady(void);
extern void SoundRpc_SendWord2(s32);
extern void SoundRpc_SendWord(s32);
extern void amAdx_Stop(s32);
extern void func_0028EB40(Proc *, s32, void (*)(void), s32);
extern void Scene_Request();
extern s32 func_002908D0(s32);
extern s32 func_00290AE0(s32);
extern void func_00290410(Slot *);
extern void func_00290390(s32, s32);
extern void func_002904C0(Slot *);
extern void memset(void *, s32, s32);
extern void StrMap_Clear(void);
extern void StrBg_Clear(void);
extern void func_002BFCF0(void);
extern void amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amCdFs_ReleaseCache(void *);
extern void func_0022D0E0(void *, s32);
extern void Character_Release(void *);
extern void func_002BFD90(void);
extern void StrMap_Free(void);
extern void StrBg_Stop(void);
extern void Help_Exit(void);
extern void Flight_TaskMain(Proc *);
extern void *amTask_Create(void (*)(Proc *), s32, s32, s32, s32, char *);
inline Slot *Snd_FindSlot(s32 id);
void func_00298420(Proc *o);
void func_002987E0(s32 n);
void func_00298890(s32 a, s32 b);
void func_002988D0(s32 a, s32 b);
void func_00298910(s32 a0);
void func_00298990(s32 a, s32 b, s32 c);
void func_002989F0(s32 id, s32 a, s32 b);
void func_00298A50(s32 id, s32 a);
void Snd_SetSlotF2C(s32 id, s32 a);
void func_00298B10(s32 id, s32 a, s32 b, s32 c);
void func_00298C40(s32 id);
void func_00298DA0(void);
void func_00298E00(s32 a);
void func_00298E10(s32 a);
void func_00298E30(Vec4f *v, s32 a);
void StrSelect_ClearWork(void);
void Flight_Exit(void);
void Flight_Start(void);
void Flight_Load(void);
void StrSelect_Reset(s32 n);
void func_00298CC0(s32 arg0, s32 arg1, s32 arg2, u8 *arg3, f32 fparg0)
{
  s32 *var_t1;
  s32 var_t0;
  s32 var_v1;
  u8 *new_var;
  var_v1 = 0;
  var_t1 = (s32 *) (D_005AA604 + 0x80);
  loop_1:
  if ((*var_t1) == arg0)
  {
    if (var_t1 && var_t1)
    {
    }
  }
  else
  {
    var_v1 += 1;
    var_t1 += 0x40;
    if (var_v1 >= 0x40)
    {
      var_t1 = (void *) 0;
    }
    else
    {
      goto loop_1;
    }
  }

  if (var_t1 == ((void *) 0))
  {
    var_t1 = (s32 *) (D_005AA604 + 0x80);
    var_t0 = 0;
    loop_8:
    if ((*var_t1) == (-1))
    {
    }
    else
    {
      var_t0 += 1;
      var_t1 += 0x40;
      if (var_t0 >= 0x40)
      {
        var_t1 = (void *) 0;
      }
      else
      {
        goto loop_8;
      }
    }

  }
  *((s32 *) (((u8 *) var_t1) + 0)) = arg0;
  *((s32 *) (((u8 *) var_t1) + 4)) = arg1;
  *((s32 *) (((u8 *) var_t1) + 8)) = arg2;
  *((f32 *) (((u8 *) var_t1) + 0xC)) = fparg0;
  new_var = ((u8 *) arg3) + 8;
  *((f32 *) (((u8 *) var_t1) + 0x10)) = (f32) (*((f32 *) (((u8 *) arg3) + 0)));
  *((f32 *) (((u8 *) var_t1) + 0x14)) = (f32) (*((f32 *) (((u8 *) arg3) + 4)));
  *((f32 *) (((u8 *) var_t1) + 0x18)) = (f32) (*((f32 *) new_var));
  *((f32 *) (((u8 *) var_t1) + 0x1C)) = (f32) (*((f32 *) (((u8 *) arg3) + 0xC)));
  *((s32 *) (((u8 *) var_t1) + 0x20)) = -1;
  *((s32 *) (((u8 *) var_t1) + 0x2C)) = -1;
  *((s32 *) (((u8 *) var_t1) + 0x30)) = -1;
  *((s32 *) (((u8 *) var_t1) + 0x34)) = -1;
  func_002904C0((struct Slot *) var_t1);
}
