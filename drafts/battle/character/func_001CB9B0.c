/* Draft (not built): func_001CB9B0 at 0x001CB9B0, size 0x34, segment battle/character (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 9 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x54, original 0x34; then decomp-permuter: score 1275 -> 360
 * Original: asm/nonmatchings/battle/character/func_001CB9B0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
typedef struct ScriptCtx
{
  s32 ret;
  s32 unk04[3];
  s32 (*wait)(struct ScriptCtx *ctx);
  s32 unk14[3];
  s32 base;
  s32 unk24[2];
  s32 *args;
  s32 unk30[2];
  void *unk38;
  s32 unk3C;
  f32 fret;
} ScriptCtx;
typedef struct Fighter
{
  u8 unk0000[0x1350];
  s32 unk1350;
  struct Fighter *other;
  u8 unk1358[0x1360 - 0x1358];
  u8 unk1360[0x13A4 - 0x1360];
  s16 unk13A4;
  u8 unk13A6[0x17E4 - 0x13A6];
  f32 unk17E4;
  f32 unk17E8;
  u8 unk17EC[0x1AC4 - 0x17EC];
  s32 unk1AC4;
  u8 unk1AC8[0x1ACE - 0x1AC8];
  s16 unk1ACE;
  u8 unk1AD0[0x1AD6 - 0x1AD0];
  s16 unk1AD6;
  f32 unk1AD8;
  f32 unk1ADC;
  u8 unk1AE0[0x1CFC - 0x1AE0];
  s32 unk1CFC;
  u8 unk1D00[0x1EE8 - 0x1D00];
  s32 unk1EE8;
  u8 unk1EEC[0x1FF8 - 0x1EEC];
  s8 unk1FF8;
} Fighter;
typedef struct BattleWork
{
  u8 unk0000[0x88EC];
  s32 unk88EC;
  f32 unk88F0;
  u8 unk88F4[0x891C - 0x88F4];
  s32 unk891C;
  u8 unk8920[0x8934 - 0x8920];
  Fighter *fighter[2];
  u8 unk893C[0x8944 - 0x893C];
  s16 unk8944;
  u8 unk8946[0x8952 - 0x8946];
  s16 unk8952;
  u8 unk8954[0x8AB1 - 0x8954];
  s8 unk8AB1;
  s8 unk8AB2;
  s8 unk8AB3;
} BattleWork;
extern BattleWork *gBattle;
extern s32 D_00470578;
extern s32 D_0047057C;
extern void *D_00470580[2];
typedef struct BtlMsg
{
  s32 unk00[4];
  s32 side;
  s32 val;
  s16 val2;
  u8 unk1A[0x16];
} BtlMsg;
extern float sqrtf(float);
extern f32 func_00146E90(f32 *);
extern f32 func_00146E30(f32 *, f32 *);
extern f32 func_0011F680(f32, f32);
extern u32 func_0012EAE0(s32);
extern void srand(s32);
extern void func_001E2510(Fighter *);
extern void Sp_CallHandler(s32, void *);
extern s32 func_001DF420(Fighter *, s32, s32);
extern void Btl_UpdateLimitXY(s32, f32, f32);
extern void func_001DA4C0(void);
extern void func_001D8A50(Fighter *);
extern void PlyScr_Start(Fighter *, s32, s32);
extern void amTask_Kill(void *);
extern s32 D_004B41F0[7];
extern char D_00469250[];
extern void *amHeap_Alloc(s32 size, s32 flag, char *file, s32 line);
extern void AdxSlot_Pause(void *);
extern void func_001E73E0(void *, s32, s32);
extern void func_001D9EB0(void *, s32);
extern void func_001E9B00(void *, s32, s32, s32, f32, f32);
typedef struct Task
{
  u8 unk00[0x30];
  u8 work[1];
} Task;
typedef struct CharFlash
{
  s32 side;
  s32 unk04;
  u8 from;
  u8 to;
  u8 flags;
  u8 rand;
  f32 time;
  f32 length;
} CharFlash;
typedef struct ScriptOwner
{
  s32 *info;
} ScriptOwner;
typedef struct CharPair
{
  s16 chara;
  s16 value;
} CharPair;
extern CharPair D_00469290[];
extern char D_004692C0[];
extern void *amTask_Create(void (*update)(Task *), void (*kill)(Task *), s32 prio, s32, s32, char *name);
extern void memset(void *, s32, s32);
extern void func_001A3610(s32);
extern void func_001E11E0(s32, void *);
extern void func_0021A030(void *, s32, s32, f32);
extern void func_00237000(s32, void *);
extern void func_001DD680(Fighter *, s32);
extern void func_001D80A0(Fighter *, s32);
extern void func_001D9960(Fighter *, s32, s32);
extern void CharLight_Release(s32);
extern void CharBody_Release(s32);
extern void func_001C9840(s32);
extern void amHeap_Free(void *);
extern s32 func_001C9A70(s32);
extern s32 func_001CA130(s32);
void ScrVib_TaskKill(Task *task);
void func_001CACB0(Task *task);
typedef struct CharColor
{
  s32 id;
  s32 unk04;
  s32 unk08;
  f32 unk0C;
  s32 unk10;
} CharColor;
typedef struct CharColorArg
{
  f32 unk00;
  s32 unk04;
  s32 unk08;
  s32 unk0C;
} CharColorArg;
typedef struct CharTimer
{
  s32 count;
  f32 length;
  void (*func)(void);
} CharTimer;
typedef struct CharAnim
{
  void *obj;
  s32 id;
} CharAnim;
void *Character_CreateWork(s32 i, s32 size);
void func_001CA460(s32 i, s32 v);
void Character_Release(s32 *c);
s32 func_001CAA30(s32 *c);
void func_001CAFB0(s32 *a);
void Character_PauseVoice(s32 *a);
void func_001CAFE0(s32 *a);
void func_001CB010(s32 *a);
void func_001CB020(Task *task);
s32 Scr_CmdVecPairCall146E30(void *self, ScriptCtx *ctx);
s32 Scr_CmdVecCall146E90(void *self, ScriptCtx *ctx);
s32 Scr_CmdAngleDeg(void *self, ScriptCtx *ctx);
s32 Scr_CmdRandom(void *self, ScriptCtx *ctx);
s32 Scr_CmdRandomBelow(void *self, ScriptCtx *ctx);
s32 Scr_CmdSeedRand(void *self, ScriptCtx *ctx);
s32 Scr_CmdSqrt(void *self, ScriptCtx *ctx);
s32 Scr_CmdSetFighter8952(void *self, ScriptCtx *ctx);
s32 Scr_CmdSpCall8(void *self, ScriptCtx *ctx);
s32 Scr_CmdSpCall0(void *self, ScriptCtx *ctx);
s32 Scr_CmdSpCall3(void *self, ScriptCtx *ctx);
s32 func_001CB4A0(ScriptCtx *ctx);
s32 Scr_CmdSetWaitCb1CB4A0(ScriptCtx *ctx);
s32 Scr_CmdSetGlobalFlag470578(void);
s32 func_001CB660(void *self, ScriptCtx *ctx);
s32 Scr_CmdResetLimitXY(void);
s32 Scr_CmdUpdateLimitXY(void *self, ScriptCtx *ctx);
s32 Scr_CmdResetBattle8AB2(void);
s32 Scr_CmdSetBattle8AB2(void);
s32 func_001CB7E0(void *self, ScriptCtx *ctx);
s32 Scr_CmdCall1DA4C0(void);
s32 Scr_CmdFighter1AD8(void *self, ScriptCtx *ctx);
s32 Scr_CmdFighter1ACE(void *self, ScriptCtx *ctx);
s32 Scr_CmdFighterCall1D8A50(void *self, ScriptCtx *ctx);
s32 Character_CmdPlyScr(void *self, ScriptCtx *ctx);
s32 ScrVib_CmdCtrl(ScriptOwner *self, ScriptCtx *ctx);
s32 ScrVib_CmdFlash(ScriptOwner *self, ScriptCtx *ctx);
s32 Scr_CmdKillTaskSlot(void *self, ScriptCtx *ctx);
s32 func_001CB9B0(u8 *arg1)
{
  u8 *temp_v1;
  BattleWork **new_var2;
  u8 *new_var3;
  BattleWork *new_var;
  temp_v1 = *((u8 **) (((u8 *) arg1) + 0x2C));
  new_var = gBattle;
  new_var2 = &new_var;
  new_var3 = *((u8 **) (((u8 *) (*new_var2)) + 0x8934));
  new_var = ((*((s32 *) (((u8 *) temp_v1) + 4))) * 4) + (*new_var2);
  *((s16 *) (((u8 *) new_var3) + 0x1AD6)) = (s16) ((*((s32 *) (((u8 *) temp_v1) + 0))) != 0);
  return 1;
}
