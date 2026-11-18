/* Draft (not built): func_002400E0 at 0x002400E0, size 0xB8, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xBC, original 0xB8; then decomp-permuter: score 775 -> 265
 * Original: asm/nonmatchings/unk/unk_23A890/func_002400E0.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
void func_0021B070(void);
void func_00248C70(void);
void func_00252B10(void);
void func_0025BE30(void);
void func_002CA440(void);
extern u8 *D_0058D3CC;
extern u8 *D_0046FE4C;
void Obj_ResetF38(s32);
s32 func_002096D0(s32, s32, s32);
void func_00243600(s32);
void func_00241D60(s32);
extern s32 D_0058BF30[];
extern u8 D_0046AC18[];
extern u8 D_0046AC28[];
s32 func_0021C360(s32);
void func_00127488(void *, void *, s32);
void func_0023A000(void *, s32);
void func_0023A3B0(void);
void Dmg_TaskKill(void);
void func_00239E80(void);
typedef struct Arr6
{
  s32 v[6];
} Arr6;
extern Arr6 D_004500E0;
s32 Input_IsHeld(s32);
u8 *func_0021C400(s32);
void amDraw_SetPacketMode(s32);
void func_0022C6B0(s32);
extern u8 D_0058CAA0[];
void func_00244CC0(s32, s32);
void amTask_KillGroup(s32, s32, s32);
void func_0020DE30(void);
void func_00248C80(void);
void func_00252B20(void);
void Wave_Create(void);
void func_002CA490(void);
void func_001F7210(s32);
void func_00247820(void);
void BtbObj_RemoveByKey(s32);
void func_001F5B10(s32, s32);
void func_00247FF0(void);
void func_002CDC20(void);
extern u8 D_0058BF50[];
void func_00254100(s32);
extern u8 D_0046AD90[];
u8 *func_001F5FD0(s32, u8 *, s32, void (*)(void), void (*)(void));
void func_002477C0(u8 *o);
void func_00247770();
extern s32 D_0058CA08[];
u8 *func_00215320(s32, s32);
void func_00212480(void);
void func_00212650(void);
s32 func_00209540(s32, s32, s32);
void func_00209B50(s32, s32, s32);
extern u8 *gWave;
void func_00215500(s32);
void func_00244280(void);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern u8 *gBtlSys;
s32 func_0021C3D0(s32);
u8 *func_0021C660(s32);
u8 *func_0021C430(s32);
void func_0022C7D0(s32, f32, s32);
void func_0022ACF0(s32);
extern u8 D_0058CAB0[];
extern u8 D_0058CF30[];
extern u8 D_0046AD80[];
extern u8 D_0046AD88[];
s32 amTask_Create(void (*)(void), void (*)(void), s32, s32, s32, void *);
void func_002454B0(void);
void func_002453D0(void);
void func_00248CC0(void);
void func_00252B60(void);
void func_0025BE50(void);
void func_002CA4A0(void);
extern f32 D_00470690;
extern f32 D_00470694;
extern u8 D_0058BF70[];
void func_0022DB20(f32, f32);
void func_0023D680(void);
void func_0022C560(s32);
void func_00214DD0(void *, s32);
void func_00214F80(s32, void *);
void func_00241600(s32);
void func_00241C10(s32);
extern s32 D_00452130[];
s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 D_0051CD0C[];
extern s32 D_0051CD20[];
s32 func_001A50F0(s32, s32);
void func_001F7DB0(void);
void func_001F7BF0(void);
void func_001F7820(void);
void func_001F7690(void);
void func_001F6E50(void);
void func_001F6D60(void);
s32 func_001F5EF0(s32, s32);
void func_001F5B70(s32);
void func_001F7470(s32);
void amCdFs_ReleaseCache(s32);
void amCdFs_Close(s32, s32);
void amHeap_Free(void *);
extern u8 *D_0046FE44;
extern u8 D_004505F0[];
extern u8 D_00450470[];
extern u8 D_004502F0[];
extern u8 D_00450770[];
void func_00208F70(s32);
extern u8 D_0046ACE0[];
extern u8 D_0046ACF0[];
extern u8 *D_0051CD00[];
void func_00209450(s32, s32);
void Ar_InitLights(void);
void func_00243020(void);
void func_00242E10(void);
void func_00242290(void);
void func_002420F0(void);
void func_002529B0(s32, u8 *, s32);
void amModel_SetCurrent(s32, s32);
void func_002D04A0(s32);
void func_002CFDE0(s32);
void func_0013E170(s32);
extern u8 *D_00470740[2];
extern u8 *gBattle;
extern u8 *D_0046FE48;
void amTask_Kill(s32);
void func_00215040(s16, s16, s16);
void func_0023B6B0(s32);
void func_0023B4C0(void);
extern s32 D_00451B10[];
extern s32 D_00451970[];
void func_00248C60(void);
void func_00252B00(void);
void func_0025BE20(void);
void func_002CA3F0(void);
extern u8 D_004508F0[];
extern u8 D_00450B60[];
extern u8 D_0058C6C0[];
extern u8 D_0058C5B0[];
void memset(void *, s32, s32);
void func_00242870(void);
void func_00244F00(s32, s32);
void func_00248D70(s32, s32);
void func_00252C20(s32, s32);
void BtbObj_RemoveFromList(u8 *);
void func_00248910(s32, u8 *);
void func_001D9C40(u8 *, s32, s32);
void func_001F3DF0(u8 *);
void func_00208D70(s32);
void BtbObj_CheckDrawFlags(u8 *);
extern s32 D_00470734;
void func_00240A90(s32);
void func_00245240(void);
void func_00215230(s16, s16);
void func_00241500(s32, s32);
void func_00241EB0(s32, s32);
void func_00241FA0(s32, s32);
void func_00244D80(s32, s32);
s32 func_0023F3F0(u8 *, s32, s32, s32);
void func_00253BA0(s32, u8 *);
extern s32 D_00450070[];
s32 BtlChara_Reset(s32, s32);
s32 func_00253600(s32 *, s32);
void func_0022D4B0(s32, s32);
extern s32 D_0044FC20[];
u8 *func_0021C3E0(s32);
s32 SkillFile_Load(s32);
void func_002433F0(void);
void func_002BF3B0(void);
extern u8 D_00450AF0[];
extern void (*jtbl_00450160[])();
extern s8 D_004703F4;
typedef struct B7Q
{
  u8 v[0x10];
  s32 id;
  s32 u14;
  s32 u18;
  s32 flags;
  s16 h20;
  s16 h22;
  u8 pad[0xC];
} B7Q;
void func_00241280(B7Q *);
void func_00243280(s32);
extern s32 D_00452100[];
extern u8 D_0046AC98[];
extern u8 D_0046ACA8[];
void func_00242B40(void);
void func_00242A10(void);
void func_0013B160(s32);
void func_00142100(void *, void *);
typedef struct Blk48
{
  s32 w[12];
} Blk48;
extern s32 D_0046AC70[];
extern u8 D_0046AD08[];
s32 BtlCmd_GetMotEntry(s32, s32);
s32 func_00127E88(void *, void *, s32);
void func_0020A100(void *);
s32 amObject_Create(s32, s32);
void amFile_Load(s32);
extern u8 D_00451CC0[];
void func_0020F700(s32);
typedef struct B5V
{
  f32 x;
  f32 y;
  f32 z;
  f32 w;
} B5V;
typedef struct B5E
{
  char pad0[0x10];
  B5V f10;
  char pad20[0x50 - 0x20];
  s16 f50;
  s16 f52;
  s16 f54;
  char pad56[0x6C - 0x56];
  void *f6C;
  char pad70[0x94 - 0x70];
  s16 f94;
  s16 f96;
  s16 f98;
  char pad9A[0xA0 - 0x9A];
  s16 fA0;
  s16 fA2;
  s16 fA4;
  char padA6[0xB0 - 0xA6];
} B5E;
typedef struct B5C
{
  B5V v;
  void *f10;
  s16 f14;
  s16 f16;
  char pad18[8];
} B5C;
extern void memset(void *, s32, s32);
void func_0020D780(void *);
void func_002183F0(s32, void *);
void func_00248550(u8 *, s32);
void func_00252780(s32, u8 *);
void amMotion_Apply(u8 *, f32, f32);
void func_002D0110(s32, s32, f32);
typedef struct 
{
  s32 pad[2];
  void *a;
  void *b;
} B3N;
typedef struct 
{
  u8 pad[0x30];
  B3N sub;
} B3O;
void Dmg_Start(s32 id, s32 y);
void func_0023B3C0(s32 x);
void func_0023DB40(s32 a0);
void func_0023F370(void);
s32 func_0023F610(s32 a0);
void func_00240C30(s32 i);
void func_00240CD0(s32 i);
void func_00240D70(s32 i);
void func_00240E10(s32 i);
void func_00240E20(s32 i);
void func_00240E30(s32 i);
void func_00240E40(s32 i);
void func_00240EE0(void);
u8 *func_00240EF0(s32 i);
u8 *func_00240F10(s32 a, s32 b);
u8 *func_00240F40(s32 i, s32 kind);
void func_00240FF0(s32 a0, s32 a1);
void func_002410D0(s32 i);
void func_00242490(s32 i);
void func_002439E0(u8 *o);
void func_00243AC0(u8 *o);
void func_00243AD0(u8 *o);
void func_00243AE0(u8 *o);
void func_00243AF0(u8 *o);
void func_00243BC0(u8 *o);
void func_00243D80(u8 *o);
void func_00243DB0(u8 *o);
u8 *func_00243DC0(s32 i);
void Sp_CallHandler(s32 idx, Blk48 *src);
s32 func_00243E50(s32 i, s32 k);
void func_00243ED0(void);
void func_00243F20(void);
void Sp_KillTasks(void);
void Ar_Start(void);
void func_00244150(void);
void func_00245A80(u8 *o, s32 k);
void func_00245BE0(u8 *o);
void func_00245BF0(u8 *o);
void func_00245C00(u8 *o);
s32 func_00245C50(u8 *o);
void func_00245CC0(u8 *o, s32 idx);
void func_00245D30(u8 *o, s32 idx);
void func_002463B0(s32 mode, u8 **pp);
u8 *func_00246CA0(s32 i, s32 j);
void func_00246D20(void);
void func_00246D50(u8 *o);
void func_00246DA0(u8 *o);
void func_00246E20(u8 *o);
void func_00247060(u8 *o, f32 x);
void func_00247080(u8 *src);
void func_00247090(u8 *o, s32 x);
void func_00247280(void);
void func_002472F0(void);
void func_00247500(void);
void func_002475D0(void);
s32 func_002475E0(u8 *a0);
void func_00247900(void);
void func_002479B0(u8 *a0);
void func_00247C80(u8 *o);
void func_00247F70(u8 *o);
void func_00248350(s32 x);
void func_00248410(void);
void func_00248480(void);
void func_002400E0(void)
{
  s32 *var_s2;
  s32 temp_a0_2;
  s32 var_s0;
  volatile unsigned long long new_var;
  u8 *temp_a0;
  u8 *var_s1;
  var_s1 = gBtlSys;
  new_var = (*((s32 *) (((u8 *) gBattle) + 0x88D8))) > 0;
  var_s0 = 0;
  if (new_var)
  {
    var_s2 = (s32 *) (&D_0058BF50);
    do
    {
      temp_a0 = *((u8 **) (var_s2 + 0x10));
      if (temp_a0 != ((void *) 0))
      {
        amCdFs_ReleaseCache((s32) ((void *) temp_a0));
      }
      *((u8 **) (((u8 *) var_s2) + 0x10)) = (void *) 0;
      *((s32 *) (((u8 *) var_s1) + 0xE8C)) = 0;
      temp_a0_2 = *((s32 *) (((u8 *) var_s1) + 0xEC0));
      if (temp_a0_2 != 0)
      {
 do { func_00254100(temp_a0_2); } while (0);
      }
      var_s0 += 1;
      var_s2 += 4;
      var_s1 += 4;
    }
    while (var_s0 < (*((s32 *) (((u8 *) gBattle) + 0x88D8))));
  }
}
