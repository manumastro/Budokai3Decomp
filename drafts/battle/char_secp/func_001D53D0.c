/* Draft (not built): func_001D53D0 at 0x001D53D0, size 0xCC, segment battle/char_secp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA4, original 0xCC; then decomp-permuter: score 3320 -> 2995
 * Original: asm/nonmatchings/battle/char_secp/func_001D53D0.s */

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
typedef struct CharBodyEntry
{
  s32 file;
  s32 secp;
  struct CharBody *list;
} CharBodyEntry;
typedef struct CharFaceEntry
{
  s32 file;
  struct CharFace *list;
} CharFaceEntry;
typedef struct CharCostume
{
  s16 unk0;
  s8 body;
  s8 face;
  s32 unk4;
} CharCostume;
typedef struct CharData
{
  s32 unk00;
  s8 numCostumes;
  s8 numBodyColors;
  s8 numFaceColors;
  s8 unk07;
  CharBodyEntry *bodies;
  CharFaceEntry *faces;
  CharCostume costume[10];
} CharData;
extern CharData D_00447440[105];
typedef struct Mtx
{
  f32 m[4][4];
} Mtx;
typedef struct Vec4
{
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} Vec4;
typedef struct Joint
{
  Mtx m;
  Vec4 v[4];
} Joint;
typedef struct Model
{
  u8 unk000[0x45C];
  Joint *joints;
} Model;
typedef struct SecpData
{
  s8 numParts;
  s8 numAcsr;
  s8 numMant;
  s32 parts[8];
  s32 acsr[2];
  s32 mant[1];
} SecpData;
typedef struct SecpSlot
{
  u8 unk00[0x20];
} SecpSlot;
typedef struct SecpOwnerData
{
  u8 unk00[0x40];
  SecpSlot slot[2];
} SecpOwnerData;
typedef struct SecpOwner
{
  s32 unk00;
  SecpOwnerData *data;
} SecpOwner;
typedef struct Secp
{
  void *parts[8];
  s32 *acsr[2];
  void *mant[1];
  s8 numParts;
  s8 numAcsr;
  s8 numMant;
  s32 unk30;
  struct SecpOwner *owner;
  SecpData *data;
  s32 unk3C;
  u8 unk40;
  s8 unk41;
} Secp;
typedef struct CharBody
{
  u8 unk00[0x30];
  s16 joint[9];
  u8 unk42[0x48 - 0x42];
  void *unk48;
  Model *model;
  s32 unk50;
  CharBodyEntry *entry;
  struct Secp *secp;
  s32 unk5C;
  s32 code;
  s32 unk64;
  s32 unk68;
  s32 unk6C;
  s32 unk70;
  s32 unk74;
  s32 key;
  s32 refs;
  struct CharBody *prev;
  struct CharBody *next;
} CharBody;
typedef struct CharFile
{
  s32 unk00;
  s16 state;
  u8 unk06[0x54 - 0x06];
  s32 data;
} CharFile;
typedef struct CharFace
{
  s16 joint[9];
  u8 unk12[0x18 - 0x12];
  s32 unk18;
  Model *model;
  u8 unk20[0x80 - 0x20];
  CharFaceEntry *entry;
  s32 unk84;
  s32 unk88;
  s32 unk8C;
  CharFile *file;
  CharFile *unk94;
  s32 unk98;
  s32 key;
  s32 refs;
  struct CharFace *prev;
  struct CharFace *next;
} CharFace;
typedef struct SecpArg
{
  Fighter *fighter;
  s32 unk04;
  s16 id;
} SecpArg;
extern s32 func_001AAEA0(void *, s32);
extern s16 func_001AA9D0(s32);
extern s16 func_001E8830(Fighter *, s32);
extern s16 func_001E89B0(Fighter *);
extern s16 func_001E89F0(Fighter *);
extern s16 func_001E8A30(Fighter *);
extern s16 func_001E8AF0(Fighter *);
extern s32 func_001E8740(Fighter *);
extern char D_00469390[];
extern void *amHeap_Alloc(s32 size, s32 flag, char *file, s32 line);
extern void memset(void *, s32, s32);
extern void *CharParts_Create(s32);
extern s32 *CharAcsr_Load(s32);
extern void *func_001D2B40(s32);
s32 func_0013B110(s32);
extern void **D_004705C0;
extern s32 D_004705D0;
extern void func_0013B0B0(void *);
extern void func_0013B960(void *);
extern void func_00142100(void *, void *);
extern void func_0013B060(void *);
Secp *CharSecp_Create(SecpData *data);
s32 func_001D4FD0(SecpArg *p);
s32 func_001D5160(SecpArg *p);
s32 func_001D51F0(SecpArg *p);
s32 func_001D5250(SecpArg *p);
s32 func_001D52B0(SecpArg *p);
s32 func_001D5330(SecpArg *p);
void func_001D53D0(u8 *arg0)
{
  u8 *temp_a0;
  u8 *temp_a0_2;
  int new_var2;
  unsigned int new_var;
  u8 *var_s0;
  var_s0 = arg0;
  M2C_ERROR();
  new_var = 0;
  func_0013B0B0((void *) new_var);
  new_var2 = 0;
  do
  {
    temp_a0 = *D_004705C0;
    M2C_ERROR();
    M2C_ERROR();
    M2C_ERROR();
    M2C_ERROR();
    if (temp_a0 != ((void *) new_var2))
    {
      func_0013B960(temp_a0);
    }
    else
    {
      func_00142100(var_s0, (void *) 0);
    }
    M2C_ERROR();
    M2C_ERROR();
    M2C_ERROR();
    D_004705C0 += 4;
    D_004705D0 += 0x40;
    temp_a0_2 = *((u8 **) (((u8 *) var_s0) + 0x38));
    M2C_ERROR();
    if (temp_a0_2 != ((void *) 0))
    {
      func_001D53D0(temp_a0_2);
    }
    var_s0 = *((u8 **) (((u8 *) var_s0) + 0x3C));
    func_0013B060((void *) new_var2);
  }
  while (var_s0 != ((void *) new_var2));
  func_0013B110(1);
}
