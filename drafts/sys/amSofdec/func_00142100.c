/* Draft (not built): func_00142100 at 0x00142100, size 0x14, segment sys/amSofdec (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 5 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x20, original 0x14; then decomp-permuter: score 1200 -> 600
 * Original: asm/nonmatchings/sys/amSofdec/func_00142100.s */

typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long s64;
typedef unsigned long u64;
typedef float f32;
extern void func_00142120(void);
extern void func_0011F4C0(void);
extern void func_0011F220(void);
typedef struct Skel
{
  char pad[0x10];
  s32 n;
  char pad2[0x24 - 0x14];
  char *bones;
} Skel;
typedef struct Pose
{
  s32 pad0;
  s32 n;
  struct 
  {
    s32 key;
    s32 pad;
  } e[1];
} Pose;
typedef struct Key
{
  char pad[0xC];
  struct 
  {
    s16 t;
    s16 v;
  } k[1];
} Key;
typedef struct Track
{
  char pad[0xC];
  Key **keys;
} Track;
typedef struct Mot
{
  char pad[0x14];
  Track *tracks;
  s32 n;
  char *bones;
} Mot;
typedef struct MotSet
{
  union 
  {
    Skel **skel;
    Pose *pose;
  } u;
  Mot *mot[16];
  s16 map[16][256];
} MotSet;
extern void memset(void *, s32, s32);
extern s32 amMotion_MatchName(char *, char *);
extern s32 amMotion_FindKey4(Key *, f32);
typedef struct MwPly MwPly;
typedef struct MwPlyVtbl
{
  void *f[5];
  void (*destroy)(MwPly *);
  void (*start_fname)(MwPly *, char *);
  void (*stop)(MwPly *);
  s32 (*get_stat)(MwPly *);
} MwPlyVtbl;
struct MwPly
{
  MwPlyVtbl *vtbl;
};
typedef struct SfdFrm
{
  void *buf;
} SfdFrm;
typedef struct Movie
{
  MwPly *ply;
  void *work;
  void *buf;
  s32 unkC;
  s32 unk10;
  s8 flags;
  s8 own_buf;
  s32 file;
  s32 loops;
  s32 width;
  s32 height;
  char pad28[8];
  s64 unk30;
  SfdFrm frm;
  char pad3C[0x84 - 0x3C];
  char fname[0x108 - 0x84];
} Movie;
typedef struct MovieParam
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
  s32 unkC;
  s32 unk10;
  s32 unk14;
  void *buf;
  s32 unk1C;
  u16 unk20;
} MovieParam;
typedef struct SfdCprm
{
  s32 unk0;
  s32 unk4;
  s32 unk8;
  s32 unkC;
  s32 unk10;
  s32 unk14;
  void *work;
  s32 worksize;
  s32 unk20;
  char pad[0x30 - 0x24];
} SfdCprm;
typedef struct SfdFx
{
  f32 fps;
  s32 unk4;
  s32 unk8;
  s32 unkC;
  char pad[0x10];
} SfdFx;
extern Movie gSofdecMovie[1];
extern s8 gSofdecFree[1];
extern s32 gSofdecFreeCount;
extern s8 D_004703F4;
extern s8 D_00470208;
extern char D_0045F570[];
extern void func_00181FD0(SfdFx *);
extern void func_00182330(void);
extern void amHeap_Free(void *);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void mwPlyGetCurFrm(MwPly *, SfdFrm *);
extern void mwPlyRelCurFrm(MwPly *);
extern void mwPlyStartAfs(MwPly *, s32, s32);
extern s32 mwPlyCalcWorkCprmSfd(SfdCprm *);
extern MwPly *func_00180290(SfdCprm *);
extern void amDma_CopyViaSpr(void *, void *, s32);
void amSofdec_DestroyAll(void);
void amMotSet_Init(MotSet *s, Skel **skel);
void amMotSet_Bind(MotSet *s, s32 idx, Mot *m);
void amMotSet_Apply(MotSet *s, s32 packed, f32 t);
void amSofdec_Init(void);
void amSofdec_Exit(void);
void amSofdec_Update(void);
s32 amSofdec_Create(MovieParam *p);
void amSofdec_Destroy(s32 id);
void func_00142100(u8 *arg0)
{
  volatile long pad;
 goto dummy_label_70297;
  func_00142120();
  dummy_label_70297:
  ;

}
