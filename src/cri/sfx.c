#include "common.h"

extern f32 D_00427328;

extern f32 D_0042732C;

f32 func_00121010();                                /* extern */
extern f32 D_00427330;

s32 func_001A18C8();                            /* extern */

s32 func_001A1630();                            /* extern */
extern s64 D_00427320;

s32 func_00129688();                            /* extern */

u32 func_001A0F28();                                /* extern */
s32 func_001A1348(s32, s32, s32);               /* extern */

extern s32 D_00467F40;

s32 func_00127E88(s32, s32 *, s32);         /* extern */
extern s32 D_00467F28;

extern s32 D_00467EC0;

s32 func_0019F6D0(s32, s32, s32 *); /* extern */
extern s32 D_00467E90;

extern s32 D_004270CC;

s32 func_001A01A0();                            /* extern */

s32 func_0019FD88();                            /* extern */

s32 func_001A0D98();                            /* extern */

s32 func_001A0D38();                            /* extern */

s32 func_00170B20();                            /* extern */

s32 func_00170AF8(s32);                         /* extern */

s32 func_0019ED40(s32);                         /* extern */

s32 func_0019ED28(s32, s32, s32, s32);          /* extern */

s32 func_0019ED08(s32);                         /* extern */

s32 func_0019ECE8(s32);                         /* extern */

s32 func_0019FFF0(s32, s32);                    /* extern */

s32 func_001A0840(s32);                         /* extern */

s32 SFXZ_SetZclip(s32);                         /* extern */

extern s32 D_00426C1C;

extern s32 D_00426C34;

s32 func_0019EC50(s32);                         /* extern */
s32 func_0019FE88(s32);                         /* extern */

s32 func_00170AA8();                            /* extern */
s32 func_00170B40();                            /* extern */
s32 func_0019F710(s32);                     /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_00426C20;

extern s32 D_00467CE8;

s32 func_001726E8(s32);                         /* extern */

s32 func_001726F0(s32);                         /* extern */

s32 func_0019ECB8(s32, s32, s32);               /* extern */

s32 func_0019EC78(s32, s32, s32);               /* extern */

s32 func_0019F128(s32);                         /* extern */

s32 func_001A0588(s32, s32, s32);               /* extern */

s32 func_001A02E0(s32, s32, s32);               /* extern */

s32 sfxcnv_MakeTable();                         /* extern */

typedef struct { int pad0; int format; } SfxCnvHn_UH_x0019EDD0;
extern char D_00467A80_x0019EDD0[] __asm__("D_00467A80");
void func_0019F6D0_x0019EDD0(void *obj, void *info, char *msg) __asm__("func_0019F6D0");
int sfxcnv_IsCnvUpHalf_x0019EDD0(SfxCnvHn_UH_x0019EDD0 *hn) __asm__("sfxcnv_IsCnvUpHalf");
int sfxcnv_IsCnvUpHalf_x0019EDD0(SfxCnvHn_UH_x0019EDD0 *hn)
{
    switch (hn->format) {
    case 4097:
        return 0;
    case 33:
    case 257:
        return 1;
    case 17:
    case 49:
    case 65:
    case 241:
        break;
    default:
        func_0019F6D0_x0019EDD0(0, 0, D_00467A80_x0019EDD0);
        break;
    }
    return 0;
}
void func_0019EE88(void) {
    sfxcnv_MakeTable();
}
extern s32 D_00467AB0_x0019EEA0[] __asm__("D_00467AB0");
s32 func_0019F018_x0019EEA0(u8 *, s32) __asm__("func_0019F018");
void func_0019F0D0_x0019EEA0(u8 *, s32) __asm__("func_0019F0D0");
void func_0019F0F0_x0019EEA0(u8 *, s32) __asm__("func_0019F0F0");
void func_0019F110_x0019EEA0(u8 *, s32) __asm__("func_0019F110");
void func_0019F1E0_x0019EEA0(u8 *, s32) __asm__("func_0019F1E0");
void func_0019F200_x0019EEA0(u8 *, s32) __asm__("func_0019F200");
void func_0019F220_x0019EEA0(u8 *, s32) __asm__("func_0019F220");
void func_0019F238_x0019EEA0(u8 *, s32) __asm__("func_0019F238");
void func_0019F6D0_x0019EEA0(u8 *, s32, s32 *) __asm__("func_0019F6D0");
void sfxcnv_MakeTable_x0019EEA0(u8 *cnv, s32 tbl, s32 type) __asm__("sfxcnv_MakeTable");
void sfxcnv_MakeTable_x0019EEA0(u8 *cnv, s32 tbl, s32 type)
{
    if (func_0019F018_x0019EEA0(cnv, type) != 1) {
        return;
    }
    *(s32 *)(cnv + 0x38) = type;
    switch (type) {
    case 11:
        func_0019F0D0_x0019EEA0(cnv, tbl);
        return;
    case 13:
        func_0019F0F0_x0019EEA0(cnv, tbl);
        return;
    case 2:
        func_0019F1E0_x0019EEA0(cnv, tbl);
        return;
    case 3:
        func_0019F200_x0019EEA0(cnv, tbl);
        return;
    case 21:
        func_0019F220_x0019EEA0(cnv, tbl);
        return;
    case 22:
        func_0019F238_x0019EEA0(cnv, tbl);
        return;
    case 1:
        func_0019F110_x0019EEA0(cnv, tbl);
        return;
    case 0:
    case 4:
    case 10:
    case 12:
    case 100:
    default:
        func_0019F6D0_x0019EEA0(cnv, tbl, D_00467AB0_x0019EEA0);
        return;
    }
}
__asm__("# rebind sfxcnv_MakeTable 0x0019EEA0");
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_0019F018);
void func_0019F0D0(u8 *arg0, u8 *arg1) {
    func_001A02E0(*(s32 *)((u8 *)arg0 + 0x24), *(s32 *)((u8 *)arg1 + 0x4C), *(s32 *)((u8 *)arg0 + 0x3C));
}
void func_0019F0F0(u8 *arg0, u8 *arg1) {
    func_001A0588(*(s32 *)((u8 *)arg0 + 0x24), *(s32 *)((u8 *)arg1 + 0x4C), *(s32 *)((u8 *)arg0 + 0x3C));
}
void func_0019F110(u8 *arg0) {
    func_0019F128(*(s32 *)((u8 *)arg0 + 0x3C));
}
typedef unsigned char Uint8_x0019F128;
typedef signed int Sint32_x0019F128;
typedef float Float32_x0019F128;
void func_0019F128_x0019F128(Uint8_x0019F128 *tbl) __asm__("func_0019F128");
/* sfxcnv_MakeLumiTbl: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfx_cnv.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_0019F128_x0019F128(Uint8_x0019F128 *tbl)
{
        Sint32_x0019F128 i;
        for (i = 0; i <= 15; i++) {
                tbl[i] = 0;
        }
        for (i = 16; i <= 235; i++) {
                tbl[i] = (Uint8_x0019F128)(0.582f * (Float32_x0019F128)(i - 16));
        }
        for (i = 236; i <= 255; i++) {
                tbl[i] = 0x80;
        }
}
void func_0019F1E0(u8 *arg0, u8 *arg1) {
    func_0019EC78(*(s32 *)((u8 *)arg0 + 0x30), *(s32 *)((u8 *)arg1 + 0x4C), *(s32 *)((u8 *)arg0 + 0x3C));
}
void func_0019F200(u8 *arg0, u8 *arg1) {
    func_0019ECB8(*(s32 *)((u8 *)arg0 + 0x30), *(s32 *)((u8 *)arg1 + 0x4C), *(s32 *)((u8 *)arg0 + 0x3C));
}
void func_0019F220(u8 *arg0) {
    func_001726F0(*(s32 *)((u8 *)arg0 + 0x3C));
}
void func_0019F238(u8 *arg0) {
    func_001726E8(*(s32 *)((u8 *)arg0 + 0x3C));
}
typedef struct { s32 f0[9]; s32 f24; } SfxO3_x0019F250;
extern char D_00467C88_x0019F250[] __asm__("D_00467C88");
s32 func_001A0858_x0019F250(s32) __asm__("func_001A0858");
void func_0019F6D0_x0019F250(SfxO3_x0019F250 *, s32, char *) __asm__("func_0019F6D0");
void func_0019F0D0_x0019F250(SfxO3_x0019F250 *, s32) __asm__("func_0019F0D0");
void SFX_MakeTblZ16_x0019F250(SfxO3_x0019F250 *o, s32 a1) __asm__("SFX_MakeTblZ16");
void SFX_MakeTblZ16_x0019F250(SfxO3_x0019F250 *o, s32 a1)
{
    if (func_001A0858_x0019F250(o->f24) != 1) {
        func_0019F6D0_x0019F250(o, a1, D_00467C88_x0019F250);
        return;
    }
    func_0019F0D0_x0019F250(o, a1);
}
typedef struct { s32 f0[9]; s32 f24; } SfxO3_x0019F2B8;
extern char D_00467CB8_x0019F2B8[] __asm__("D_00467CB8");
s32 func_001A0858_x0019F2B8(s32) __asm__("func_001A0858");
void func_0019F6D0_x0019F2B8(SfxO3_x0019F2B8 *, s32, char *) __asm__("func_0019F6D0");
void func_0019F0F0_x0019F2B8(SfxO3_x0019F2B8 *, s32) __asm__("func_0019F0F0");
void SFX_MakeTblZ32_x0019F2B8(SfxO3_x0019F2B8 *o, s32 a1) __asm__("SFX_MakeTblZ32");
void SFX_MakeTblZ32_x0019F2B8(SfxO3_x0019F2B8 *o, s32 a1)
{
    if (func_001A0858_x0019F2B8(o->f24) != 1) {
        func_0019F6D0_x0019F2B8(o, a1, D_00467CB8_x0019F2B8);
        return;
    }
    func_0019F0F0_x0019F2B8(o, a1);
}
s32 func_0019F320(void) {
    return 0x11;
}
void SFXA_Init_x0019F328(void) __asm__("func_0019EB08");
void SFXZ_Init_x0019F328(void) __asm__("func_0019FD70");
extern int sfx_init_cnt_x0019F328 __asm__("D_00426C18");
extern int sfxcnv_forcesplit_x0019F328 __asm__("D_00426C1C");
extern char *volatile sfx_version_ptr_x0019F328 __asm__("D_00492A68");
char *sfx_GetVersionStr_x0019F328(void) __asm__("func_0019F398");
void sfx_InitLibWork_x0019F328(void) __asm__("func_0019F3A8");
void SFXSUD_Init_x0019F328(void) __asm__("func_0019FBE0");
char *sfx_GetVersionStr_x0019F328(void) __asm__("func_0019F398");
void sfx_InitLibWork_x0019F328(void) __asm__("func_0019F3A8");
void SFXSUD_Init_x0019F328(void) __asm__("func_0019FBE0");
void func_0019F328_x0019F328(void) __asm__("func_0019F328");
/* SFX_Init: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019F328_x0019F328(void) {
    int *initialised = &sfx_init_cnt_x0019F328;
    if (*initialised > 0) {
        return;
    }
    sfx_version_ptr_x0019F328 = sfx_GetVersionStr_x0019F328();
    sfx_InitLibWork_x0019F328();
    SFXSUD_Init_x0019F328();
    SFXZ_Init_x0019F328();
    SFXA_Init_x0019F328();
    sfxcnv_forcesplit_x0019F328 = 0;
    (*initialised)++;
}
s32 *func_0019F398(void) {
    return &D_00467CE8;
}
void func_0019F3A8(void) {
    memset(&D_00426C20, 0, 0x4A8);
    *(s32 *)((u8 *)(&D_00426C20) + 4) = 8;
    func_0019F710(1);
    func_00170AA8();
    func_00170B40();
}
void CFT_Finish_x0019F3F8(void) __asm__("func_00170AE0");
void SFXA_Finish_x0019F3F8(void) __asm__("func_0019EB60");
void SFXZ_Finish_x0019F3F8(void) __asm__("func_0019FDC8");
extern int sfx_init_cnt_x0019F3F8 __asm__("D_00426C18");
void SFXSUD_Finish_x0019F3F8(void) __asm__("func_0019FBF8");
void SFXSUD_Finish_x0019F3F8(void) __asm__("func_0019FBF8");
void func_0019F3F8_x0019F3F8(void) __asm__("func_0019F3F8");
/* SFX_Finish: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019F3F8_x0019F3F8(void) {
    if (sfx_init_cnt_x0019F3F8 > 0) {
        SFXZ_Finish_x0019F3F8();
        SFXA_Finish_x0019F3F8();
        SFXSUD_Finish_x0019F3F8();
        CFT_Finish_x0019F3F8();
        sfx_init_cnt_x0019F3F8--;
    }
}
extern s32 D_00426C28_x0019F450 __asm__("D_00426C28");
void func_0019F450_x0019F450(s32 arg0, s32 arg1) __asm__("func_0019F450");
void func_0019F450_x0019F450(s32 arg0, s32 arg1)
{
  s32 *new_var;
  *((s32 *) (((u8 *) (&D_00426C28_x0019F450)) + 0)) = arg0;
  new_var = (s32 *) (((u8 *) (&D_00426C28_x0019F450)) + 4);
  *new_var = arg1;
}
typedef struct { s32 f0[9]; s32 f24; s32 pad[2]; s32 f30; } SfxObj_x0019F468;
extern s32 D_00426C20_x0019F468 __asm__("D_00426C20");
extern char D_00467D20_x0019F468[] __asm__("D_00467D20");
extern char D_00467D50_x0019F468[] __asm__("D_00467D50");
extern char D_00467D70_x0019F468[] __asm__("D_00467D70");
SfxObj_x0019F468 *func_0019F580_x0019F468(void) __asm__("func_0019F580");
s32 func_0019F670_x0019F468(s32, s32, s32) __asm__("func_0019F670");
void func_0019F6D0_x0019F468(s32, s32, char *) __asm__("func_0019F6D0");
void func_0019F5D0_x0019F468(SfxObj_x0019F468 *, s32, s32) __asm__("func_0019F5D0");
s32 func_0019FDD0_x0019F468(void) __asm__("func_0019FDD0");
s32 func_0019EB68_x0019F468(void) __asm__("func_0019EB68");
void func_0019F680_x0019F468(SfxObj_x0019F468 *) __asm__("func_0019F680");
SfxObj_x0019F468 *func_0019F468_x0019F468(s32 a0, s32 a1, s32 a2, s32 a3) __asm__("func_0019F468");
SfxObj_x0019F468 *func_0019F468_x0019F468(s32 a0, s32 a1, s32 a2, s32 a3)
{
    SfxObj_x0019F468 *e;
    s32 v;
    s32 w;

    e = func_0019F580_x0019F468();
    if (e == 0) {
        return 0;
    }
    if (func_0019F670_x0019F468(a1, a2, a3) != 1) {
        func_0019F6D0_x0019F468(0, 0, D_00467D20_x0019F468);
        return 0;
    }
    func_0019F5D0_x0019F468(e, a0, a1);
    v = func_0019FDD0_x0019F468();
    if (v == 0) {
        func_0019F6D0_x0019F468(0, 0, D_00467D50_x0019F468);
        func_0019F680_x0019F468(e);
        return 0;
    }
    e->f24 = v;
    w = func_0019EB68_x0019F468();
    if (w == 0) {
        func_0019F6D0_x0019F468(0, 0, D_00467D70_x0019F468);
        func_0019F680_x0019F468(e);
        return 0;
    }
    e->f30 = w;
    D_00426C20_x0019F468++;
    return e;
}
typedef struct CftEntry_x0019F580 { short v[4]; } CftEntry_x0019F580;
typedef enum CftZFmt_x0019F580 { CFT_ZFMT_NONE_x0019F580 = 0, CFT_ZFMT_Z16_x0019F580 = 1, CFT_ZFMT_Z24_x0019F580 = 2, CFT_ZFMT_Z32_x0019F580 = 3 } CftZFmt_x0019F580;
typedef struct CftImage_x0019F580 { CftZFmt_x0019F580 zfmt; int *base; int stride; int lines; int height; int width; } CftImage_x0019F580;
typedef struct CftArgb8888mb_x0019F580 { int addr; int pitch; int height; int mbPitch; int pad16[4]; } CftArgb8888mb_x0019F580;
typedef struct CftYccPln_x0019F580 { char *y; char *u; char *v; int ypitch; int upitch; int vpitch; void *rsv; } CftYccPln_x0019F580;
void CFT_SetFunctionName_x0019F580(char *name) __asm__("CFT_SetFunctionName");
char *CFT_GetFunctionName_x0019F580(void) __asm__("CFT_GetFunctionName");
void CFT_SetOptimizeSpeed_x0019F580(int sw) __asm__("CFT_SetOptimizeSpeed");
int CFT_GetOptimizeSpeed_x0019F580(void) __asm__("CFT_GetOptimizeSpeed");
void CFT_Init_x0019F580(void) __asm__("CFT_Init");
void CFT_Finish_x0019F580(void) __asm__("CFT_Finish");
void CFT_SetMaxAlpha_x0019F580(int max) __asm__("CFT_SetMaxAlpha");
int CFT_GetMaxAlpha_x0019F580(void) __asm__("CFT_GetMaxAlpha");
void CFT_Ycc420rgbToArgb8888_x0019F580(void) __asm__("CFT_Ycc420rgbToArgb8888");
void CFT_Ycc420plnToZ16_x0019F580(CftYccPln_x0019F580 *src, CftImage_x0019F580 *img, int *table) __asm__("CFT_Ycc420plnToZ16");
void CFT_Ycc420plnToZ32_x0019F580(CftYccPln_x0019F580 *src, CftImage_x0019F580 *img, int *table) __asm__("CFT_Ycc420plnToZ32");
void CFT_Argb8888mbToZ32_x0019F580(unsigned char **src, CftImage_x0019F580 *img, int *table) __asm__("CFT_Argb8888mbToZ32");
void CFT_MakeArgb8888ColAdjTbl_x0019F580(void *dst) __asm__("CFT_MakeArgb8888ColAdjTbl");
void CFT_MakeYcc422ColAdjTbl_x0019F580(void *dst) __asm__("CFT_MakeYcc422ColAdjTbl");
void cft_MakeYccTbl_x0019F580(int mode, int lo, int hi, CftEntry_x0019F580 *t) __asm__("cft_MakeYccTbl");
void cft_MakeAlpha3Tbl_x0019F580(CftEntry_x0019F580 *t, unsigned char alpha0, unsigned char alpha1, unsigned char alpha2) __asm__("cft_MakeAlpha3Tbl");
void cft_MakeAlpha3TblBlack_x0019F580(CftEntry_x0019F580 *t, unsigned char alpha0, unsigned char alpha1, unsigned char alpha2) __asm__("cft_MakeAlpha3TblBlack");
typedef struct SfxChunk_x0019F580 { int valid; char *data; int size; } SfxChunk_x0019F580;
typedef struct SfxPlane_x0019F580 { int addr; int pitch; int height; int pad12; } SfxPlane_x0019F580;
typedef enum SfxChromaFmt_x0019F580 { SFX_CHROMA_FMT_0_x0019F580, SFX_CHROMA_FMT_1_x0019F580, SFX_CHROMA_FMT_2_x0019F580, SFX_CHROMA_FMT_3_x0019F580 } SfxChromaFmt_x0019F580;
typedef struct SfxPicFmt_x0019F580 { int pictureStructure; SfxChromaFmt_x0019F580 chromaFormat; int progressiveFrame; int topFieldFirst; int repeatFirstField; int chromaPosH; int chromaPosV; } SfxPicFmt_x0019F580;
typedef struct SfxFrame_x0019F580 { unsigned int frmfmt; SfxPlane_x0019F580 plane[3]; int pad52[4]; int width; int height; int fno; char *tagData; int tagSize; int rsv[2]; SfxPicFmt_x0019F580 fmt; int pad120[5]; } SfxFrame_x0019F580;
typedef void (*SfxZCbFn_x0019F580)(unsigned int *, unsigned int *, float, float);
typedef struct SfxZHn_x0019F580 { int used; int zbit; SfxChunk_x0019F580 info; int pad20; SfxChunk_x0019F580 hdr; int pad36; SfxChunk_x0019F580 vfrm; int pad52[2]; float zmin; float zmax; SfxZCbFn_x0019F580 cbfn; int cbarg; } SfxZHn_x0019F580;
typedef struct SfxaPrm_x0019F580 { int mode; int lo; int hi; } SfxaPrm_x0019F580;
typedef struct SfxaHn_x0019F580 { int used; int changed; SfxaPrm_x0019F580 prm; unsigned char alpha[3]; } SfxaHn_x0019F580;
typedef struct SfxHn_x0019F580 { int used; int compo; int fxtype; int width; int height; int unitWidth; SfxChunk_x0019F580 zinf; int pad36; SfxZHn_x0019F580 *zhn; int zscale; int zoffset; void *ahn; int colAdj; int tblPtn; int tbl[4]; int pad80[2]; int work; int wksize; int sud[2]; int splitField; int progOut; int pad112; int cnvBottomUp; int padEnd[6]; } SfxHn_x0019F580;
typedef struct SfxCnvTbl_x0019F580 SfxCnvTbl_x0019F580;
typedef void (*SfxErrFn_x0019F580)(void *obj, char *msg);
void SFX_Init_x0019F580(void) __asm__("SFX_Init");
void SFX_Finish_x0019F580(void) __asm__("SFX_Finish");
void SFX_SetErrFn_x0019F580(SfxErrFn_x0019F580 fn, void *obj) __asm__("SFX_SetErrFn");
SfxHn_x0019F580 *SFX_Create_x0019F580(int work, int wksize, int a2, int a3) __asm__("SFX_Create");
void SFX_Destroy_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_Destroy");
void SFXLIB_Error_x0019F580(void *obj, void *info, char *msg) __asm__("SFXLIB_Error");
void SFX_SetCcirFx_x0019F580(int value) __asm__("SFX_SetCcirFx");
int SFX_GetCcirFx_x0019F580(void) __asm__("SFX_GetCcirFx");
void SFX_SetForceSplit_x0019F580(int value) __asm__("SFX_SetForceSplit");
int SFX_GetForceSplit_x0019F580(void) __asm__("SFX_GetForceSplit");
void SFX_SetCompoMode_x0019F580(SfxHn_x0019F580 *hn, int value) __asm__("SFX_SetCompoMode");
int SFX_GetCompoMode_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetCompoMode");
void SFX_SetFxType_x0019F580(SfxHn_x0019F580 *hn, int value) __asm__("SFX_SetFxType");
int SFX_GetOutBufSize_x0019F580(SfxHn_x0019F580 *hn, int *width, int *height) __asm__("SFX_GetOutBufSize");
void SFX_SetCnvTable_x0019F580(SfxHn_x0019F580 *hn, int index, int value) __asm__("SFX_SetCnvTable");
int SFX_GetCnvTable_x0019F580(SfxHn_x0019F580 *hn, int index) __asm__("SFX_GetCnvTable");
void SFX_SetTagInf_x0019F580(SfxHn_x0019F580 *hn, char *data, int size) __asm__("SFX_SetTagInf");
void SFX_GetTagInf_x0019F580(SfxHn_x0019F580 *hn, char **data, int *size) __asm__("SFX_GetTagInf");
void SFX_SetOutZscale_x0019F580(SfxHn_x0019F580 *hn, int value) __asm__("SFX_SetOutZscale");
int SFX_GetOutZscale_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetOutZscale");
void SFX_SetOutZoffset_x0019F580(SfxHn_x0019F580 *hn, int value) __asm__("SFX_SetOutZoffset");
int SFX_GetOutZoffset_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetOutZoffset");
void SFX_SetZclip_x0019F580(SfxHn_x0019F580 *hn, float zmin, float zmax) __asm__("SFX_SetZclip");
void SFX_GetZclip_x0019F580(SfxHn_x0019F580 *hn, float *zmin, float *zmax) __asm__("SFX_GetZclip");
void SFX_GetZfrmRange_x0019F580(SfxHn_x0019F580 *hn, SfxFrame_x0019F580 *frm, int *first, int *second) __asm__("SFX_GetZfrmRange");
void SFX_SetALumiPrm_x0019F580(SfxHn_x0019F580 *hn, int lo, int hi, int mode) __asm__("SFX_SetALumiPrm");
void SFX_GetALumiPrm_x0019F580(SfxHn_x0019F580 *hn, int *lo, int *hi, int *mode) __asm__("SFX_GetALumiPrm");
void SFX_SetAlp3Prm_x0019F580(SfxHn_x0019F580 *hn, int a, int b, int c) __asm__("SFX_SetAlp3Prm");
void SFX_GetAlp3Prm_x0019F580(SfxHn_x0019F580 *hn, unsigned char *alpha0, unsigned char *alpha1, unsigned char *alpha2) __asm__("SFX_GetAlp3Prm");
void SFX_SetColAdj_x0019F580(SfxHn_x0019F580 *hn, int value) __asm__("SFX_SetColAdj");
int SFX_GetColAdj_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetColAdj");
void SFX_SetSplitField_x0019F580(SfxHn_x0019F580 *hn, int value) __asm__("SFX_SetSplitField");
int SFX_GetSplitField_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetSplitField");
void SFX_SetProgOut_x0019F580(SfxHn_x0019F580 *hn, int value) __asm__("SFX_SetProgOut");
int SFX_GetProgOut_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetProgOut");
void SFX_SetCnvBottomUp_x0019F580(SfxHn_x0019F580 *hn, int value) __asm__("SFX_SetCnvBottomUp");
int SFX_GetCnvBottomUp_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetCnvBottomUp");
void sfx_ClipFrame_x0019F580(SfxFrame_x0019F580 *frm, int second, int first) __asm__("sfx_ClipFrame");
void SFX_SetOutBufSize_x0019F580(SfxHn_x0019F580 *hn, int width, int height) __asm__("SFX_SetOutBufSize");
void SFX_SetUnitWidth_x0019F580(SfxHn_x0019F580 *hn, int value) __asm__("SFX_SetUnitWidth");
void SFX_SetMaxAlpha_x0019F580(SfxHn_x0019F580 *hn, int value) __asm__("SFX_SetMaxAlpha");
int SFX_GetMaxAlpha_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetMaxAlpha");
void SFX_SetPicUsrDat_x0019F580(SfxHn_x0019F580 *hn, char *ud, int size) __asm__("SFX_SetPicUsrDat");
int SFX_GetSudVersion_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetSudVersion");
int SFX_GetTypeDivField_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetTypeDivField");
int SFX_GetTypeCcs_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetTypeCcs");
int SFX_GetTypeIntl_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetTypeIntl");
int SFX_GetExtScan_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetExtScan");
int SFX_GetExtFlag_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetExtFlag");
int SFX_GetExtVal0_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetExtVal0");
int SFX_GetExtVal1_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetExtVal1");
int SFX_GetExtVal2_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetExtVal2");
int SFX_GetExtVal3_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetExtVal3");
void SFX_SetZTblCbFn_x0019F580(SfxHn_x0019F580 *hn, SfxZCbFn_x0019F580 fn) __asm__("SFX_SetZTblCbFn");
void SFX_SetZTblCbArg_x0019F580(SfxHn_x0019F580 *hn, int arg) __asm__("SFX_SetZTblCbArg");
void SFX_SetOptimizeSpeed_x0019F580(int sw) __asm__("SFX_SetOptimizeSpeed");
void SFX_CnvFrmZ16_x0019F580(SfxHn_x0019F580 *hn, SfxFrame_x0019F580 *frm, int arg) __asm__("SFX_CnvFrmZ16");
void SFX_CnvFrmZ32_x0019F580(SfxHn_x0019F580 *hn, SfxFrame_x0019F580 *frm, int arg) __asm__("SFX_CnvFrmZ32");
int SFX_GetFxType_x0019F580(SfxHn_x0019F580 *hn) __asm__("SFX_GetFxType");
void *SFX_SetZbit_x0019F580(void *sfx, int zbit) __asm__("SFX_SetZbit");
void SFX_MakeTable_x0019F580(SfxCnvTbl_x0019F580 *tbl, SfxFrame_x0019F580 *frm, unsigned int compo) __asm__("SFX_MakeTable");
void SFX_MakeTblZ16_x0019F580(SfxCnvTbl_x0019F580 *tbl, SfxFrame_x0019F580 *frm) __asm__("SFX_MakeTblZ16");
void SFX_MakeTblZ32_x0019F580(SfxCnvTbl_x0019F580 *tbl, SfxFrame_x0019F580 *frm) __asm__("SFX_MakeTblZ32");
int SFXINF_GetStmInf_x0019F580(SfxFrame_x0019F580 *frm, char *tag) __asm__("SFXINF_GetStmInf");
void SFXA_Init_x0019F580(void) __asm__("SFXA_Init");
void SFXA_Finish_x0019F580(void) __asm__("SFXA_Finish");
SfxaHn_x0019F580 *SFXA_Create_x0019F580(void) __asm__("SFXA_Create");
void SFXA_MakeAlpLumiTbl_x0019F580(SfxaHn_x0019F580 *hn, int unused, CftEntry_x0019F580 *table) __asm__("SFXA_MakeAlpLumiTbl");
void SFXA_MakeAlp3110Tbl_x0019F580(SfxaHn_x0019F580 *hn, int unused, CftEntry_x0019F580 *table) __asm__("SFXA_MakeAlp3110Tbl");
void SFXA_MakeAlp3Tbl_x0019F580(SfxaHn_x0019F580 *hn, int unused, CftEntry_x0019F580 *table) __asm__("SFXA_MakeAlp3Tbl");
int SFXA_IsNeedUpdateLumiTbl_x0019F580(SfxaHn_x0019F580 *hn) __asm__("SFXA_IsNeedUpdateLumiTbl");
void SFXA_SetLumiPrm_x0019F580(SfxaHn_x0019F580 *hn, int lo, int hi, int mode) __asm__("SFXA_SetLumiPrm");
void SFXA_GetLumiPrm_x0019F580(SfxaHn_x0019F580 *hn, int *lo, int *hi, int *mode) __asm__("SFXA_GetLumiPrm");
void SFXA_SetAlp3Prm_x0019F580(SfxaHn_x0019F580 *hn, unsigned char alpha0, unsigned char alpha1, unsigned char alpha2) __asm__("SFXA_SetAlp3Prm");
void SFXA_GetAlp3Prm_x0019F580(SfxaHn_x0019F580 *hn, unsigned char *alpha0, unsigned char *alpha1, unsigned char *alpha2) __asm__("SFXA_GetAlp3Prm");
void SFXZ_Init_x0019F580(void) __asm__("SFXZ_Init");
void SFXZ_Finish_x0019F580(void) __asm__("SFXZ_Finish");
SfxZHn_x0019F580 *SFXZ_Create_x0019F580(void) __asm__("SFXZ_Create");
void SFXZ_SetTagInf_x0019F580(SfxZHn_x0019F580 *zhn, char *data, int size) __asm__("SFXZ_SetTagInf");
void SFXZ_GetZfrmRange_x0019F580(SfxZHn_x0019F580 *zhn, int frame, int *first, int *second) __asm__("SFXZ_GetZfrmRange");
void SFXZ_SetZclip_x0019F580(SfxZHn_x0019F580 *zhn, float zmin, float zmax) __asm__("SFXZ_SetZclip");
void SFXZ_GetZclip_x0019F580(SfxZHn_x0019F580 *zhn, float *zmin, float *zmax) __asm__("SFXZ_GetZclip");
int SFXZ_IsSetZclip_x0019F580(SfxZHn_x0019F580 *zhn) __asm__("SFXZ_IsSetZclip");
void SFXZ_MakeCnvZTbl_x0019F580(SfxZHn_x0019F580 *zhn, int frame, unsigned int *buf) __asm__("SFXZ_MakeCnvZTbl");
void SUD_Init_x0019F580(void) __asm__("SUD_Init");
void SUD_Finish_x0019F580(void) __asm__("SUD_Finish");
unsigned int SUD_AnalyVersion_x0019F580(char *header, int size) __asm__("SUD_AnalyVersion");
int SUD_AnalyTypeDivField_x0019F580(char *header, int size) __asm__("SUD_AnalyTypeDivField");
int SUD_AnalyTypeCcs_x0019F580(char *header, int size) __asm__("SUD_AnalyTypeCcs");
int SUD_AnalyTypeIntl_x0019F580(char *header, int size) __asm__("SUD_AnalyTypeIntl");
int SUD_AnalyExtScan_x0019F580(char *header, int size) __asm__("SUD_AnalyExtScan");
int SUD_AnalyExtFlag_x0019F580(char *header, int size) __asm__("SUD_AnalyExtFlag");
int SUD_AnalyExtVal0_x0019F580(char *header, int size) __asm__("SUD_AnalyExtVal0");
int SUD_AnalyExtVal1_x0019F580(char *header, int size) __asm__("SUD_AnalyExtVal1");
int SUD_AnalyExtVal2_x0019F580(char *header, int size) __asm__("SUD_AnalyExtVal2");
int SUD_AnalyExtVal3_x0019F580(char *header, int size) __asm__("SUD_AnalyExtVal3");
void SUD_SearchSudDat_x0019F580(char *text, int length, char **found, int *value) __asm__("SUD_SearchSudDat");
typedef unsigned int size_t_x0019F580;
typedef int ptrdiff_t_x0019F580;
void *memset_x0019F580(void *, int, size_t_x0019F580) __asm__("memset");
void *memcpy_x0019F580(void *, const void *, size_t_x0019F580) __asm__("memcpy");
void *memmove_x0019F580(void *, const void *, size_t_x0019F580) __asm__("memmove");
int memcmp_x0019F580(const void *, const void *, size_t_x0019F580) __asm__("memcmp");
size_t_x0019F580 strlen_x0019F580(const char *) __asm__("strlen");
char *strcpy_x0019F580(char *, const char *) __asm__("strcpy");
char *strncpy_x0019F580(char *, const char *, size_t_x0019F580) __asm__("strncpy");
int strcmp_x0019F580(const char *, const char *) __asm__("strcmp");
int strncmp_x0019F580(const char *, const char *, size_t_x0019F580) __asm__("strncmp");
char *strcat_x0019F580(char *, const char *) __asm__("strcat");
typedef struct SfdSj_x0019F580 SfdSj_x0019F580;
typedef struct SfdSjChunk_x0019F580 { char *data; int len; } SfdSjChunk_x0019F580;
typedef struct SfdSjVtbl_x0019F580 { void *queryInterface; void *addRef; void *release; void (*destroy)(SfdSj_x0019F580 *sj); int (*getUuid)(SfdSj_x0019F580 *sj); void (*reset)(SfdSj_x0019F580 *sj); void (*getChunk)(SfdSj_x0019F580 *sj, int id, int n, SfdSjChunk_x0019F580 *ck); void (*ungetChunk)(SfdSj_x0019F580 *sj, int id, SfdSjChunk_x0019F580 *ck); void (*putChunk)(SfdSj_x0019F580 *sj, int id, SfdSjChunk_x0019F580 *ck); int (*getNumData)(SfdSj_x0019F580 *sj, int id); } SfdSjVtbl_x0019F580;
struct SfdSj_x0019F580 { SfdSjVtbl_x0019F580 *vtbl; };
typedef struct SfdBufStat_x0019F580 { SfdSjChunk_x0019F580 ck0; SfdSjChunk_x0019F580 ck1; char *tailData; int tailLen; int tailFlag; int pad28; } SfdBufStat_x0019F580;
enum SjLine_x0019F580 { SJ_LIN_FREE_x0019F580 = 0, SJ_LIN_DATA_x0019F580 = 1 };
typedef void (*SjErrFunc_x0019F580)(void *obj, int code);
typedef struct SjxObj_x0019F580 SjxObj_x0019F580;
void SJ_SplitChunk_x0019F580(SfdSjChunk_x0019F580 *ck, int nbyte, SfdSjChunk_x0019F580 *head, SfdSjChunk_x0019F580 *rest) __asm__("SJ_SplitChunk");
void SJ_MakeTag_x0019F580(SfdSjChunk_x0019F580 *tag, const char *id) __asm__("SJ_MakeTag");
void SJ_GetTagContent_x0019F580(char *tag, SfdSjChunk_x0019F580 *content) __asm__("SJ_GetTagContent");
char *SJ_SearchTag_x0019F580(SfdSjChunk_x0019F580 *ck, const char *id, const char *endid, SfdSjChunk_x0019F580 *content) __asm__("SJ_SearchTag");
void SJCRS_Init_x0019F580(void) __asm__("SJCRS_Init");
void SJCRS_Finish_x0019F580(void) __asm__("SJCRS_Finish");
void SJCRS_BeginSvr_x0019F580(void) __asm__("SJCRS_BeginSvr");
void SJCRS_EndSvr_x0019F580(void) __asm__("SJCRS_EndSvr");
void SJCRS_Lock_x0019F580(void) __asm__("SJCRS_Lock");
void SJCRS_Unlock_x0019F580(void) __asm__("SJCRS_Unlock");
void SJERR_CallErr_x0019F580(const char *message) __asm__("SJERR_CallErr");
void SJMEM_Init_x0019F580(void) __asm__("SJMEM_Init");
void SJMEM_Finish_x0019F580(void) __asm__("SJMEM_Finish");
SfdSj_x0019F580 *SJMEM_Create_x0019F580(char *buf, int bsize) __asm__("SJMEM_Create");
char *SJMEM_GetBufPtr_x0019F580(SfdSj_x0019F580 *sj) __asm__("SJMEM_GetBufPtr");
int SJMEM_GetBufSize_x0019F580(SfdSj_x0019F580 *sj) __asm__("SJMEM_GetBufSize");
void SJRBF_Init_x0019F580(void) __asm__("SJRBF_Init");
void SJRBF_Finish_x0019F580(void) __asm__("SJRBF_Finish");
SfdSj_x0019F580 *SJRBF_Create_x0019F580(char *buf, int bsize, int xsize) __asm__("SJRBF_Create");
char *SJRBF_GetBufPtr_x0019F580(SfdSj_x0019F580 *sj) __asm__("SJRBF_GetBufPtr");
int SJRBF_GetBufSize_x0019F580(SfdSj_x0019F580 *sj) __asm__("SJRBF_GetBufSize");
int SJRBF_GetXtrSize_x0019F580(SfdSj_x0019F580 *sj) __asm__("SJRBF_GetXtrSize");
void SJRBF_SetFlowCnt_x0019F580(SfdSj_x0019F580 *sj, int line, int flow, int cnt) __asm__("SJRBF_SetFlowCnt");
int SJRBF_GetFlowCnt_x0019F580(SfdSj_x0019F580 *sj, int line, int flow) __asm__("SJRBF_GetFlowCnt");
void SJUNI_Init_x0019F580(void) __asm__("SJUNI_Init");
void SJUNI_Finish_x0019F580(void) __asm__("SJUNI_Finish");
SfdSj_x0019F580 *SJUNI_Create_x0019F580(int mode, char *work, int wksize) __asm__("SJUNI_Create");
void *SJRBF_CreateRmt_x0019F580(int buf, int bsize, int xsize) __asm__("SJRBF_CreateRmt");
void *SJMEM_CreateRmt_x0019F580(int buf, int bsize) __asm__("SJMEM_CreateRmt");
void *SJUNI_CreateRmt_x0019F580(int mode, int work, int wksize) __asm__("SJUNI_CreateRmt");
void SJRMT_Destroy_x0019F580(void *sjrmt) __asm__("SJRMT_Destroy");
int *SJRMT_GetUuid_x0019F580(void *sjrmt) __asm__("SJRMT_GetUuid");
void SJRMT_Reset_x0019F580(void *sjrmt) __asm__("SJRMT_Reset");
void SJRMT_GetChunk_x0019F580(void *sjrmt, int line, int nbyte, SfdSjChunk_x0019F580 *ck) __asm__("SJRMT_GetChunk");
void SJRMT_UngetChunk_x0019F580(void *sjrmt, int line, SfdSjChunk_x0019F580 *ck) __asm__("SJRMT_UngetChunk");
int SJRMT_PutChunk_x0019F580(void *sjrmt, int line, SfdSjChunk_x0019F580 *ck) __asm__("SJRMT_PutChunk");
int SJRMT_GetNumData_x0019F580(void *sjrmt, int line) __asm__("SJRMT_GetNumData");
int SJRMT_IsGetChunk_x0019F580(void *sjrmt, int line, int nbyte, int *rbyte) __asm__("SJRMT_IsGetChunk");
void SJRMT_Init_x0019F580(void) __asm__("SJRMT_Init");
void SJRMT_Finish_x0019F580(void) __asm__("SJRMT_Finish");
void SJX_ExecServer_x0019F580(void) __asm__("SJX_ExecServer");
void SJX_Init_x0019F580(void) __asm__("SJX_Init");
void SJX_Finish_x0019F580(void) __asm__("SJX_Finish");
SjxObj_x0019F580 *SJX_Create_x0019F580(SfdSj_x0019F580 *sj, void *sjrmt, int line) __asm__("SJX_Create");
void SJX_Destroy_x0019F580(SjxObj_x0019F580 *sjx) __asm__("SJX_Destroy");
void SJX_Reset_x0019F580(SjxObj_x0019F580 *sjx) __asm__("SJX_Reset");
typedef struct SfxCbSlot_x0019F580 { SfxErrFn_x0019F580 fn; void *obj; int count; } SfxCbSlot_x0019F580;
typedef struct SfxLib_x0019F580 { int nhn; int maxhn; SfxCbSlot_x0019F580 err; int ccirFx; SfxHn_x0019F580 hn[8]; int pad984[4]; } SfxLib_x0019F580;
extern int sfx_init_cnt_x0019F580 __asm__("sfx_init_cnt");
extern int sfxcnv_forcesplit_x0019F580 __asm__("sfxcnv_forcesplit");
extern SfxLib_x0019F580 D_00426C20_x0019F580 __asm__("D_00426C20");
extern char *volatile sfx_version_ptr_x0019F580 __asm__("sfx_version_ptr");
int SFXA_Destroy_x0019F580() __asm__("SFXA_Destroy");
void SFXZ_Destroy_x0019F580() __asm__("SFXZ_Destroy");
char *sfx_GetVersionStr_x0019F580(void) __asm__("sfx_GetVersionStr");
void sfx_InitLibWork_x0019F580(void) __asm__("sfx_InitLibWork");
SfxHn_x0019F580 *func_0019F580_x0019F580(void) __asm__("func_0019F580");
void sfx_InitHn_x0019F580(SfxHn_x0019F580 *hn, int work, int wksize) __asm__("sfx_InitHn");
int sfx_IsEnoughHnWorkSize_x0019F580(int wksize, int a, int b) __asm__("sfx_IsEnoughHnWorkSize");
void SFXSET_SetTblPtn_x0019F580(SfxHn_x0019F580 *hn, int value) __asm__("SFXSET_SetTblPtn");
void sfxset_ShiftBufInfByLine_x0019F580(SfxPlane_x0019F580 *plane, int lines) __asm__("sfxset_ShiftBufInfByLine");
void sfx_ClipBufInf_x0019F580(SfxPlane_x0019F580 *plane, int first, int second) __asm__("sfx_ClipBufInf");
void SFXSUD_Init_x0019F580(void) __asm__("SFXSUD_Init");
void SFXSUD_Finish_x0019F580(void) __asm__("SFXSUD_Finish");
void SFX_Init_x0019F580(void) __asm__("SFX_Init");
char *sfx_GetVersionStr_x0019F580(void) __asm__("sfx_GetVersionStr");
void sfx_InitLibWork_x0019F580(void) __asm__("sfx_InitLibWork");
void SFX_Finish_x0019F580(void) __asm__("SFX_Finish");
void SFX_SetErrFn_x0019F580(SfxErrFn_x0019F580 fn, void *obj) __asm__("SFX_SetErrFn");
SfxHn_x0019F580 *SFX_Create_x0019F580(int work, int wksize, int a2, int a3) __asm__("SFX_Create");
SfxHn_x0019F580 *func_0019F580_x0019F580(void) __asm__("func_0019F580");
SfxHn_x0019F580 *func_0019F580_x0019F580(void) {
    int maxhn = D_00426C20_x0019F580.maxhn;
    SfxHn_x0019F580 *tbl = D_00426C20_x0019F580.hn;
    volatile SfxHn_x0019F580 *hn;
    int i;
    for (i = 0; i < maxhn; i++) {
        hn = &tbl[i];
        if (hn->used == 0) {
            return (SfxHn_x0019F580 *)hn;
        }
    }
    return 0;
}
typedef struct { int a0; int z4; int z8; int zC; unsigned char p10[0x28 - 0x10]; int a28; int z2C; unsigned char p30[0x38 - 0x30]; int z38; int tbl0; int tbl1; int tbl2; int tbl3; unsigned char p4C[0x54 - 0x4C]; int work; int wksize; unsigned char p5C[0x64 - 0x5C]; int splitField; unsigned char p68[0x70 - 0x68]; int z70; unsigned char p74[0x90 - 0x74]; } SfxHn_F5D0_x0019F5D0;
void *memset_x0019F5D0(void *s, int c, unsigned int n) __asm__("memset");
void func_0019F5D0_x0019F5D0(SfxHn_F5D0_x0019F5D0 *hn, int work, int wksize) __asm__("func_0019F5D0");
void func_0019F5D0_x0019F5D0(SfxHn_F5D0_x0019F5D0 *hn, int work, int wksize)
{
    int base;
    memset_x0019F5D0(hn, 0, 0x90);
    base = (work + 31) & ~31;
    hn->z8 = 0;
    hn->zC = 0;
    hn->a28 = 1;
    hn->a0 = 1;
    hn->z2C = 0;
    hn->z38 = 0;
    hn->tbl0 = base;
    hn->tbl1 = base + 0x400;
    hn->tbl2 = base + 0x800;
    hn->tbl3 = base + 0xC00;
    hn->work = work;
    hn->wksize = wksize;
    hn->splitField = -1;
    hn->z70 = 0;
    hn->z4 = 0;
}
s32 func_0019F670(s32 arg0) {
    return arg0 >= 0x181F;
}
void func_0019F680(u8 *arg0) {
    s32 temp_s0;

    if (arg0 != NULL) {
        temp_s0 = *(s32 *)((u8 *)arg0 + 0x30);
        *(s32 *)((u8 *)arg0 + 0) = 0;
        func_0019FE88(*(s32 *)((u8 *)arg0 + 0x24));
        func_0019EC50(temp_s0);
        D_00426C20 -= 1;
    }
}
typedef unsigned char Uint8_x0019F6D0;
typedef signed int Sint32_x0019F6D0;
typedef char Char8_x0019F6D0;
typedef struct SFXZ_OBJ_x0019F6D0 SFXZ_OBJ_x0019F6D0;
typedef struct SFXA_OBJ_x0019F6D0 SFXA_OBJ_x0019F6D0;
typedef struct SFX_OBJ_x0019F6D0 {
        Sint32_x0019F6D0 used;
        Sint32_x0019F6D0 compo;
        Sint32_x0019F6D0 fxtype;
        Sint32_x0019F6D0 outbuf_width;
        Sint32_x0019F6D0 outbuf_height;
        Sint32_x0019F6D0 unit_width;
        Sint32_x0019F6D0 taginf_flg;
        Sint32_x0019F6D0 tag_a;
        Sint32_x0019F6D0 tag_b;
        SFXZ_OBJ_x0019F6D0 *sfxz;
        Sint32_x0019F6D0 x2c;
        Sint32_x0019F6D0 x30;
        SFXA_OBJ_x0019F6D0 *sfxa;
        void *coladj;
        Sint32_x0019F6D0 tbl_type;
        Uint8_x0019F6D0 *buf[4];
        Sint32_x0019F6D0 pad50[2];
        void *work;
        Sint32_x0019F6D0 wsize;
        Sint32_x0019F6D0 pad60[2];
        Sint32_x0019F6D0 x68;
        Sint32_x0019F6D0 pad6c[2];
        Sint32_x0019F6D0 x74;
} SFX_OBJ_x0019F6D0;
typedef struct {
        Sint32_x0019F6D0 hn_cnt;
        Sint32_x0019F6D0 max_hn;
        void (*errfn)(void *obj, const Char8_x0019F6D0 *msg);
        void *errobj;
        Sint32_x0019F6D0 err_cnt;
        Sint32_x0019F6D0 ccir_fx;
        SFX_OBJ_x0019F6D0 hn[8];
        Sint32_x0019F6D0 pad3d8[4];
} SFX_LIBWORK_x0019F6D0;
extern SFX_LIBWORK_x0019F6D0 sfx_libwork_x0019F6D0 __asm__("D_00426C20");
typedef struct {
        Uint8_x0019F6D0 *buf;
        Sint32_x0019F6D0 width;
        Sint32_x0019F6D0 height;
        Sint32_x0019F6D0 pitch;
} SFX_PLN_x0019F6D0;
typedef struct {
        Sint32_x0019F6D0 frmfmt;
        SFX_PLN_x0019F6D0 pln[3];
        Uint8_x0019F6D0 pad34[0x44 - 0x34];
        Sint32_x0019F6D0 width;
        Sint32_x0019F6D0 height;
        void *tblsrc;
        Sint32_x0019F6D0 tag_a;
        Sint32_x0019F6D0 tag_b;
        Sint32_x0019F6D0 x58;
        Sint32_x0019F6D0 x5c;
        Sint32_x0019F6D0 pic_struct;
        Sint32_x0019F6D0 chroma_format;
        Sint32_x0019F6D0 x68;
        Sint32_x0019F6D0 x6c;
        Sint32_x0019F6D0 x70;
        Sint32_x0019F6D0 chromapos_h;
        Sint32_x0019F6D0 chromapos_v;
        Uint8_x0019F6D0 pad7c[0x88 - 0x7C];
} SFX_FRM_x0019F6D0;
extern SFX_LIBWORK_x0019F6D0 sfx_libwork_x0019F6D0 __asm__("D_00426C20");
typedef struct {
        void (*errfn)(void *obj, const Char8_x0019F6D0 *msg);
        void *errobj;
        Sint32_x0019F6D0 err_cnt;
} SFX_ERRAREA_x0019F6D0;
void func_0019F6D0_x0019F6D0(SFX_OBJ_x0019F6D0 *sfx, SFX_FRM_x0019F6D0 *frm, const Char8_x0019F6D0 *msg) __asm__("func_0019F6D0");
/* SFXLIB_Error: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfx_lib.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_0019F6D0_x0019F6D0(SFX_OBJ_x0019F6D0 *sfx, SFX_FRM_x0019F6D0 *frm, const Char8_x0019F6D0 *msg)
{
        void (*fn)(void *obj, const Char8_x0019F6D0 *msg);
        void *obj;
        SFX_ERRAREA_x0019F6D0 *e = (SFX_ERRAREA_x0019F6D0 *)&sfx_libwork_x0019F6D0.errfn;
        fn = e->errfn;
        obj = e->errobj;
        e->err_cnt++;
        if (fn != 0) {
                fn(obj, msg);
        }
}
extern s32 D_00426C34_x0019F710 __asm__("D_00426C34");
void func_0019F710_x0019F710(s32 arg0) __asm__("func_0019F710");
void func_0019F710_x0019F710(s32 arg0) {
    D_00426C34_x0019F710 = arg0;
}
s32 func_0019F720(void) {
    return D_00426C34;
}
void func_0019F730(s32 arg0) {
    D_00426C1C = arg0;
}
s32 func_0019F740(void) {
    return D_00426C1C;
}
void func_0019F750(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x24)) + 0x44) = arg1;
}
void func_0019F760(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 4) = arg1;
}
s32 func_0019F768(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}
void func_0019F770_x0019F770(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0019F770");
void func_0019F770_x0019F770(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var2;
  u8 *new_var;
  new_var = arg0;
  new_var2 = ((u8 *) new_var) + 0xC;
  *((s32 *) new_var2) = arg2;
 do { } while (0);
  *((s32 *) (((u8 *) arg0) + 8)) = arg1;
}
void func_0019F780(u8 *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = *(s32 *)((u8 *)arg0 + 8);
    *arg2 = *(s32 *)((u8 *)arg0 + 0xC);
}
void func_0019F798(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x10) = arg1;
}
s32 func_0019F800_x0019F7A0() __asm__("func_0019F800");
void func_0019F7A0_x0019F7A0(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0019F7A0");
void func_0019F7A0_x0019F7A0(s32 arg0, s32 arg1, s32 arg2) {
    func_0019F800_x0019F7A0(arg0, 0x64);
    *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x3C) = arg2;
}
s32 func_0019F7F0(s32 arg0, s32 arg1) {
    return *(s32 *)((u8 *)((arg1 * 4) + arg0) + 0x3C);
}
void func_0019F800(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x38) = arg1;
}
s32 func_0019F808(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x38);
}
typedef signed char Sint8_x0019F810;
typedef int Sint32_x0019F810;
typedef struct SjChunk_x0019F810 {
    Sint8_x0019F810 *data;
    Sint32_x0019F810 len;
} SjChunk_x0019F810;
typedef struct SjTagRec_x0019F810 {
    int set;
    SjChunk_x0019F810 ck;
} SjTagRec_x0019F810;
extern Sint8_x0019F810 *SJ_SearchTag_x0019F810(SjChunk_x0019F810 *ck, Sint8_x0019F810 *tag, Sint8_x0019F810 *endtag, SjChunk_x0019F810 *tagck) __asm__("func_0016F290");
typedef struct SfxZmvTagState_x0019F810 {
    char unk00[0x08];
    SjTagRec_x0019F810 input;
    char unk14[0x04];
    SjTagRec_x0019F810 header;
    char unk24[0x04];
    SjTagRec_x0019F810 frame;
} SfxZmvTagState_x0019F810;
extern void SFXZ_SetTagInf_x0019F810(SfxZmvTagState_x0019F810 *state, Sint8_x0019F810 *data, Sint32_x0019F810 len) __asm__("func_0019FEB0");
typedef struct {
    char pad0[0x14];
    SjTagRec_x0019F810 rec;
    char pad20[4];
    SfxZmvTagState_x0019F810 *sfxz;
} TagHn_x0019F810;
extern Sint8_x0019F810 D_0045A050_x0019F810[] __asm__("D_00467D90");
extern Sint8_x0019F810 D_0045A058_x0019F810[] __asm__("D_00467D98");
void func_0019F810_x0019F810(TagHn_x0019F810 *hn, Sint8_x0019F810 *data, Sint32_x0019F810 len) __asm__("func_0019F810");
/* func_0035FC88: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0035fc88.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019F810_x0019F810(TagHn_x0019F810 *hn, Sint8_x0019F810 *data, Sint32_x0019F810 len)
{
    SjTagRec_x0019F810 *rec = &hn->rec;
    SjChunk_x0019F810 ck;
    SjChunk_x0019F810 tag;
    SfxZmvTagState_x0019F810 *sfxz;
    rec->ck.data = data;
    rec->ck.len = len;
    sfxz = hn->sfxz;
    ck.data = data;
    ck.len = len;
    if (SJ_SearchTag_x0019F810(&ck, D_0045A050_x0019F810, D_0045A058_x0019F810, &tag) == 0)
        SFXZ_SetTagInf_x0019F810(sfxz, 0, 0);
    else
        SFXZ_SetTagInf_x0019F810(sfxz, tag.data, tag.len);
    rec->set = 1;
}
void func_0019F8A8_x0019F8A8(s32 *a0, s32 *a1, s32 *a2) __asm__("func_0019F8A8");
void func_0019F8A8_x0019F8A8(s32 *a0, s32 *a1, s32 *a2) {
    s32 t;
    a0 += 5;
    if (a0[0] != 1) {
        *a1 = 0;
        *a2 = 0;
        return;
    }
    t = a0[1];
    *a2 = a0[2];
    *a1 = t;
}
void func_0019F8D8(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x28) = arg1;
}
s32 func_0019F8E0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x28);
}
void func_0019F8E8(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x2C) = arg1;
}
s32 func_0019F8F0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x2C);
}
void func_0019F8F8(u8 *arg0) {
    SFXZ_SetZclip(*(s32 *)((u8 *)arg0 + 0x24));
}
void func_0019F910(u8 *arg0) {
    func_001A0840(*(s32 *)((u8 *)arg0 + 0x24));
}
void func_0019F928(u8 *arg0, u8 *arg1) {
    func_0019FFF0(*(s32 *)((u8 *)arg0 + 0x24), *(s32 *)((u8 *)arg1 + 0x4C));
}
void func_0019F948(u8 *arg0) {
    func_0019ECE8(*(s32 *)((u8 *)arg0 + 0x30));
}
void func_0019F960(u8 *arg0) {
    func_0019ED08(*(s32 *)((u8 *)arg0 + 0x30));
}
void func_0019F978(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0019ED28(*(s32 *)((u8 *)arg0 + 0x30), arg1 & 0xFF, arg2 & 0xFF, arg3 & 0xFF);
    func_0019F800(arg0, 0);
}
void func_0019F9B8(u8 *arg0) {
    func_0019ED40(*(s32 *)((u8 *)arg0 + 0x30));
}
void func_0019F9D0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x34) = arg1;
}
s32 func_0019F9D8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x34);
}
void func_0019F9E0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x64) = arg1;
}
s32 func_0019F9E8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x64);
}
void func_0019F9F0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x68) = arg1;
}
s32 func_0019F9F8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x68);
}
void func_0019FA00(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x70) = arg1;
}
s32 func_0019FA08(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x70);
}
typedef struct SfxPlane_x0019FA10 {
    int addr;
    int pitch;
    int height;
    int f12;
} SfxPlane_x0019FA10;
typedef enum SfxChromaFmt_x0019FA10 {
    SFX_CHROMA_FMT_0_x0019FA10,
    SFX_CHROMA_FMT_1_x0019FA10,
    SFX_CHROMA_FMT_2_x0019FA10,
    SFX_CHROMA_FMT_3_x0019FA10
} SfxChromaFmt_x0019FA10;
typedef struct SfxPicFmt_x0019FA10 {
    int pictureStructure;
    SfxChromaFmt_x0019FA10 chromaFormat;
    int f8;
    int f12;
    int f16;
    int chromaPosH;
    int chromaPosV;
} SfxPicFmt_x0019FA10;
typedef struct SfxFrame_x0019FA10 {
    unsigned int frmfmt;
    SfxPlane_x0019FA10 plane[3];
    int f52[4];
    int width;
    int height;
    int fno;
    int f80;
    int f84;
    int f88;
    int f92;
    SfxPicFmt_x0019FA10 fmt;
    int f120[5];
} SfxFrame_x0019FA10;
void sfxset_ShiftBufInfByLine_x0019FA10(SfxPlane_x0019FA10 *plane, int lines) __asm__("func_0019FA70");
void sfxset_ShiftBufInfByLine_x0019FA10(SfxPlane_x0019FA10 *plane, int lines) __asm__("func_0019FA70");
void func_0019FA10_x0019FA10(SfxFrame_x0019FA10 *frm, int lines) __asm__("func_0019FA10");
/* SFX_ShiftYccPtrByLine: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019FA10_x0019FA10(SfxFrame_x0019FA10 *frm, int lines) {
    lines = lines / 2 * 2;
    sfxset_ShiftBufInfByLine_x0019FA10(&frm->plane[0], lines);
    sfxset_ShiftBufInfByLine_x0019FA10(&frm->plane[1], lines >> 1);
    sfxset_ShiftBufInfByLine_x0019FA10(&frm->plane[2], lines >> 1);
}
void func_0019FA70_x0019FA70(u8 *arg0, s32 arg1) __asm__("func_0019FA70");
void func_0019FA70_x0019FA70(u8 *arg0, s32 arg1)
{
  *((s32 *) (((u8 *) arg0) + 0)) = (s32) ((*((s32 *) (((u8 *) arg0) + 0))) + (arg1 * (*((s32 *) (((u8 *) arg0) + 4)))));
  *((s32 *) (((u8 *) arg0) + 8)) = (s32) ((*((s32 *) (((u8 *) arg0) + 8))) - arg1);
}
typedef unsigned char u8_x0019FA98;
typedef signed int s32_x0019FA98;
typedef unsigned int u32_x0019FA98;
struct fn_12_68C_Arg0_x0019FA98 {
    u8_x0019FA98 pad_0[0xC];
    u32_x0019FA98 unk_C;
    u8_x0019FA98 pad_10[0xC];
    u32_x0019FA98 unk_1C;
    u8_x0019FA98 pad_20[0xC];
    u32_x0019FA98 unk_2C;
};
void func_0019FA98_x0019FA98(struct fn_12_68C_Arg0_x0019FA98 *arg0, u32_x0019FA98 arg1) __asm__("func_0019FA98");
/* fn_12_68C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_68C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_0019FA98_x0019FA98(struct fn_12_68C_Arg0_x0019FA98 *arg0, u32_x0019FA98 arg1) {
    s32_x0019FA98 v0;
    u32_x0019FA98 v1;
    s32_x0019FA98 v2;
    v0 = ((s32_x0019FA98)(((u32_x0019FA98)arg1 >> 31) + arg1) >> 1);
    v1 = (v0 << 1);
    arg0->unk_C = v1;
    v2 = ((s32_x0019FA98)(((v0 >> 30) & 0x1) + v1) >> 1);
    arg0->unk_1C = v2;
    arg0->unk_2C = v2;
}
extern void func_0035FE20_x0019FAC0(int a0, int a1, int a2) __asm__("func_0019FB48");
void func_0019FAC0_x0019FAC0(int a0, int a1, int a2) __asm__("func_0019FAC0");
/* func_0035FD98: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0033d2d0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019FAC0_x0019FAC0(int a0, int a1, int a2) {
    int u = (a2 / 2) * 2;
    int v = (a1 / 2) * 2;
    func_0035FE20_x0019FAC0(a0 + 0x4, u, v);
    func_0035FE20_x0019FAC0(a0 + 0x14, u >> 1, v >> 1);
    func_0035FE20_x0019FAC0(a0 + 0x24, u >> 1, v >> 1);
}
void func_0019FB48(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 8) = (s32) (*(s32 *)((u8 *)arg0 + 8) - arg1);
    *(s32 *)((u8 *)arg0 + 0) = (s32) (*(s32 *)((u8 *)arg0 + 0) + (arg1 * *(s32 *)((u8 *)arg0 + 4)) + arg2);
}
void func_0019FB70(s32 arg0, s32 arg1) {
    u32 temp_s0;

    temp_s0 = arg1 & 0xFF;
    func_00170AF8(arg1);
    func_0019F800(arg0, 0);
    func_0019F978(arg0, 0, temp_s0 >> 1, temp_s0);
}
void func_0019FBC8(void) {
    func_00170B20();
}
void func_0019FBE0(void) {
    func_001A0D38();
}
void func_0019FBF8(void) {
    func_001A0D98();
}
void func_0019FC10_x0019FC10(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0019FC10");
void func_0019FC10_x0019FC10(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 + 0x5C);
 do { *((s32 *) (new_var + 4)) = arg2; *((s32 *) (((u8 *) arg0) + 0x5C)) = arg1; } while (0);
}
s32 func_0019FC20(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x5C) != 0;
}
s32 func_001A0F28_x0019FC30(s32, s32) __asm__("func_001A0F28");
void func_0019FC30_x0019FC30(u8 *arg0) __asm__("func_0019FC30");
void func_0019FC30_x0019FC30(u8 *arg0)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 + 0x5C);
  func_001A0F28_x0019FC30(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (new_var + 4)));
}
s32 func_001A0F70_x0019FC50(s32, s32) __asm__("func_001A0F70");
void func_0019FC50_x0019FC50(u8 *arg0) __asm__("func_0019FC50");
void func_0019FC50_x0019FC50(u8 *arg0)
{
  u8 *new_var;
  new_var = arg0 + 0x5C;
  func_001A0F70_x0019FC50(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (((u8 *) new_var) + 4)));
}
s32 func_001A0FB0_x0019FC70(s32, s32) __asm__("func_001A0FB0");
void func_0019FC70_x0019FC70(u8 *arg0) __asm__("func_0019FC70");
void func_0019FC70_x0019FC70(u8 *arg0)
{
  u8 *new_var;
  new_var = arg0 + 0x5C;
  func_001A0FB0_x0019FC70(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (((u8 *) new_var) + 4)));
}
s32 func_001A0FF0_x0019FC90(s32, s32) __asm__("func_001A0FF0");
void func_0019FC90_x0019FC90(u8 *arg0) __asm__("func_0019FC90");
void func_0019FC90_x0019FC90(u8 *arg0)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 + 0x5C);
  func_001A0FF0_x0019FC90(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (new_var + 4)));
}
s32 func_001A1050_x0019FCB0(s32, s32) __asm__("func_001A1050");
void func_0019FCB0_x0019FCB0(u8 *arg0) __asm__("func_0019FCB0");
void func_0019FCB0_x0019FCB0(u8 *arg0)
{
  u8 *new_var;
  new_var = arg0 + 0x5C;
  func_001A1050_x0019FCB0(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (((u8 *) new_var) + 4)));
}
s32 func_001A10E0_x0019FCD0(s32, s32) __asm__("func_001A10E0");
void func_0019FCD0_x0019FCD0(u8 *arg0) __asm__("func_0019FCD0");
void func_0019FCD0_x0019FCD0(u8 *arg0)
{
  u8 *new_var;
  new_var = arg0 + 0x5C;
  func_001A10E0_x0019FCD0(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (((u8 *) new_var) + 4)));
}
s32 func_001A1148_x0019FCF0(s32, s32) __asm__("func_001A1148");
void func_0019FCF0_x0019FCF0(u8 *arg0) __asm__("func_0019FCF0");
void func_0019FCF0_x0019FCF0(u8 *arg0)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 - -0x5C);
  func_001A1148_x0019FCF0(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (new_var + 4)));
}
s32 func_001A11C8_x0019FD10(s32, s32) __asm__("func_001A11C8");
void func_0019FD10_x0019FD10(u8 *arg0) __asm__("func_0019FD10");
void func_0019FD10_x0019FD10(u8 *arg0)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 + 0x5C);
  func_001A11C8_x0019FD10(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (new_var + 4)));
}
s32 func_001A1248_x0019FD30(s32, s32) __asm__("func_001A1248");
void func_0019FD30_x0019FD30(u8 *arg0) __asm__("func_0019FD30");
void func_0019FD30_x0019FD30(u8 *arg0)
{
  u8 *new_var;
  new_var = (u8 *) (arg0 + 0x5C);
  func_001A1248_x0019FD30(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (new_var + 4)));
}
s32 func_001A12C8_x0019FD50(s32, s32) __asm__("func_001A12C8");
void func_0019FD50_x0019FD50(u8 *arg0) __asm__("func_0019FD50");
void func_0019FD50_x0019FD50(u8 *arg0)
{
  u8 *new_var;
  new_var = arg0 + 0x5C;
  func_001A12C8_x0019FD50(*((s32 *) (((u8 *) arg0) + 0x5C)), *((s32 *) (((u8 *) new_var) + 4)));
}
void func_0019FD70(void) {
    func_0019FD88();
}
s32 func_001A0888_x0019FD88(s32) __asm__("func_001A0888");
s32 memset_x0019FD88(s32 *, s32, s32) __asm__("memset");
extern s32 D_004270C8_x0019FD88 __asm__("D_004270C8");
void func_0019FD88_x0019FD88(void) __asm__("func_0019FD88");
void func_0019FD88_x0019FD88(void) {
    memset_x0019FD88(&D_004270C8_x0019FD88, 0, 0x24C);
    *(s32 *)((u8 *)(&D_004270C8_x0019FD88) + 8) = 8;
    func_001A0888_x0019FD88(0);
}
void func_0019FDC8(void) {

}
s32 *func_0019FE28_x0019FDD0() __asm__("func_0019FE28");
s32 func_0019FE78_x0019FDD0(s32 *) __asm__("func_0019FE78");
extern s32 D_004270C8_x0019FDD0 __asm__("D_004270C8");
s32 *func_0019FDD0_x0019FDD0(void) __asm__("func_0019FDD0");
s32 *func_0019FDD0_x0019FDD0(void)
{
  s32 *temp_v0;
  temp_v0 = func_0019FE28_x0019FDD0();
  if (temp_v0 != ((void *) 0))
  {
    func_0019FE78_x0019FDD0(temp_v0);
    D_004270C8_x0019FDD0 += 1;
    *temp_v0 = 1;
    return temp_v0;
  }
}
typedef struct CftEntry_x0019FE28 { short v[4]; } CftEntry_x0019FE28;
typedef enum CftZFmt_x0019FE28 { CFT_ZFMT_NONE_x0019FE28 = 0, CFT_ZFMT_Z16_x0019FE28 = 1, CFT_ZFMT_Z24_x0019FE28 = 2, CFT_ZFMT_Z32_x0019FE28 = 3 } CftZFmt_x0019FE28;
typedef struct CftImage_x0019FE28 { CftZFmt_x0019FE28 zfmt; int *base; int stride; int lines; int height; int width; } CftImage_x0019FE28;
typedef struct CftArgb8888mb_x0019FE28 { int addr; int pitch; int height; int mbPitch; int pad16[4]; } CftArgb8888mb_x0019FE28;
typedef struct CftYccPln_x0019FE28 { char *y; char *u; char *v; int ypitch; int upitch; int vpitch; void *rsv; } CftYccPln_x0019FE28;
void CFT_SetFunctionName_x0019FE28(char *name) __asm__("CFT_SetFunctionName");
char *CFT_GetFunctionName_x0019FE28(void) __asm__("CFT_GetFunctionName");
void CFT_SetOptimizeSpeed_x0019FE28(int sw) __asm__("CFT_SetOptimizeSpeed");
int CFT_GetOptimizeSpeed_x0019FE28(void) __asm__("CFT_GetOptimizeSpeed");
void CFT_Init_x0019FE28(void) __asm__("CFT_Init");
void CFT_Finish_x0019FE28(void) __asm__("CFT_Finish");
void CFT_SetMaxAlpha_x0019FE28(int max) __asm__("CFT_SetMaxAlpha");
int CFT_GetMaxAlpha_x0019FE28(void) __asm__("CFT_GetMaxAlpha");
void CFT_Ycc420rgbToArgb8888_x0019FE28(void) __asm__("CFT_Ycc420rgbToArgb8888");
void CFT_Ycc420plnToZ16_x0019FE28(CftYccPln_x0019FE28 *src, CftImage_x0019FE28 *img, int *table) __asm__("CFT_Ycc420plnToZ16");
void CFT_Ycc420plnToZ32_x0019FE28(CftYccPln_x0019FE28 *src, CftImage_x0019FE28 *img, int *table) __asm__("CFT_Ycc420plnToZ32");
void CFT_Argb8888mbToZ32_x0019FE28(unsigned char **src, CftImage_x0019FE28 *img, int *table) __asm__("CFT_Argb8888mbToZ32");
void CFT_MakeArgb8888ColAdjTbl_x0019FE28(void *dst) __asm__("CFT_MakeArgb8888ColAdjTbl");
void CFT_MakeYcc422ColAdjTbl_x0019FE28(void *dst) __asm__("CFT_MakeYcc422ColAdjTbl");
void cft_MakeYccTbl_x0019FE28(int mode, int lo, int hi, CftEntry_x0019FE28 *t) __asm__("cft_MakeYccTbl");
void cft_MakeAlpha3Tbl_x0019FE28(CftEntry_x0019FE28 *t, unsigned char alpha0, unsigned char alpha1, unsigned char alpha2) __asm__("cft_MakeAlpha3Tbl");
void cft_MakeAlpha3TblBlack_x0019FE28(CftEntry_x0019FE28 *t, unsigned char alpha0, unsigned char alpha1, unsigned char alpha2) __asm__("cft_MakeAlpha3TblBlack");
typedef struct SfxChunk_x0019FE28 { int valid; char *data; int size; } SfxChunk_x0019FE28;
typedef struct SfxPlane_x0019FE28 { int addr; int pitch; int height; int pad12; } SfxPlane_x0019FE28;
typedef enum SfxChromaFmt_x0019FE28 { SFX_CHROMA_FMT_0_x0019FE28, SFX_CHROMA_FMT_1_x0019FE28, SFX_CHROMA_FMT_2_x0019FE28, SFX_CHROMA_FMT_3_x0019FE28 } SfxChromaFmt_x0019FE28;
typedef struct SfxPicFmt_x0019FE28 { int pictureStructure; SfxChromaFmt_x0019FE28 chromaFormat; int progressiveFrame; int topFieldFirst; int repeatFirstField; int chromaPosH; int chromaPosV; } SfxPicFmt_x0019FE28;
typedef struct SfxFrame_x0019FE28 { unsigned int frmfmt; SfxPlane_x0019FE28 plane[3]; int pad52[4]; int width; int height; int fno; char *tagData; int tagSize; int rsv[2]; SfxPicFmt_x0019FE28 fmt; int pad120[5]; } SfxFrame_x0019FE28;
typedef void (*SfxZCbFn_x0019FE28)(unsigned int *, unsigned int *, float, float);
typedef struct SfxZHn_x0019FE28 { int used; int zbit; SfxChunk_x0019FE28 info; int pad20; SfxChunk_x0019FE28 hdr; int pad36; SfxChunk_x0019FE28 vfrm; int pad52[1]; float zmin; float zmax; SfxZCbFn_x0019FE28 cbfn; int cbarg; } SfxZHn_x0019FE28;
typedef struct SfxaPrm_x0019FE28 { int mode; int lo; int hi; } SfxaPrm_x0019FE28;
typedef struct SfxaHn_x0019FE28 { int used; int changed; SfxaPrm_x0019FE28 prm; unsigned char alpha[3]; } SfxaHn_x0019FE28;
typedef struct SfxHn_x0019FE28 { int used; int compo; int fxtype; int width; int height; int unitWidth; SfxChunk_x0019FE28 zinf; int pad36; SfxZHn_x0019FE28 *zhn; int zscale; int zoffset; void *ahn; int colAdj; int tblPtn; int tbl[4]; int pad80[2]; int work; int wksize; int sud[2]; int splitField; int progOut; int pad112; int cnvBottomUp; } SfxHn_x0019FE28;
typedef struct SfxCnvTbl_x0019FE28 SfxCnvTbl_x0019FE28;
typedef void (*SfxErrFn_x0019FE28)(void *obj, char *msg);
void SFX_Init_x0019FE28(void) __asm__("SFX_Init");
void SFX_Finish_x0019FE28(void) __asm__("SFX_Finish");
void SFX_SetErrFn_x0019FE28(SfxErrFn_x0019FE28 fn, void *obj) __asm__("SFX_SetErrFn");
SfxHn_x0019FE28 *SFX_Create_x0019FE28(int work, int wksize, int a2, int a3) __asm__("SFX_Create");
void SFX_Destroy_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_Destroy");
void SFXLIB_Error_x0019FE28(void *obj, void *info, char *msg) __asm__("SFXLIB_Error");
void SFX_SetCcirFx_x0019FE28(int value) __asm__("SFX_SetCcirFx");
int SFX_GetCcirFx_x0019FE28(void) __asm__("SFX_GetCcirFx");
void SFX_SetForceSplit_x0019FE28(int value) __asm__("SFX_SetForceSplit");
int SFX_GetForceSplit_x0019FE28(void) __asm__("SFX_GetForceSplit");
void SFX_SetCompoMode_x0019FE28(SfxHn_x0019FE28 *hn, int value) __asm__("SFX_SetCompoMode");
int SFX_GetCompoMode_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetCompoMode");
void SFX_SetFxType_x0019FE28(SfxHn_x0019FE28 *hn, int value) __asm__("SFX_SetFxType");
int SFX_GetOutBufSize_x0019FE28(SfxHn_x0019FE28 *hn, int *width, int *height) __asm__("SFX_GetOutBufSize");
void SFX_SetCnvTable_x0019FE28(SfxHn_x0019FE28 *hn, int index, int value) __asm__("SFX_SetCnvTable");
int SFX_GetCnvTable_x0019FE28(SfxHn_x0019FE28 *hn, int index) __asm__("SFX_GetCnvTable");
void SFX_SetTagInf_x0019FE28(SfxHn_x0019FE28 *hn, char *data, int size) __asm__("SFX_SetTagInf");
void SFX_GetTagInf_x0019FE28(SfxHn_x0019FE28 *hn, char **data, int *size) __asm__("SFX_GetTagInf");
void SFX_SetOutZscale_x0019FE28(SfxHn_x0019FE28 *hn, int value) __asm__("SFX_SetOutZscale");
int SFX_GetOutZscale_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetOutZscale");
void SFX_SetOutZoffset_x0019FE28(SfxHn_x0019FE28 *hn, int value) __asm__("SFX_SetOutZoffset");
int SFX_GetOutZoffset_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetOutZoffset");
void SFX_SetZclip_x0019FE28(SfxHn_x0019FE28 *hn, float zmin, float zmax) __asm__("SFX_SetZclip");
void SFX_GetZclip_x0019FE28(SfxHn_x0019FE28 *hn, float *zmin, float *zmax) __asm__("SFX_GetZclip");
void SFX_GetZfrmRange_x0019FE28(SfxHn_x0019FE28 *hn, SfxFrame_x0019FE28 *frm, int *first, int *second) __asm__("SFX_GetZfrmRange");
void SFX_SetALumiPrm_x0019FE28(SfxHn_x0019FE28 *hn, int lo, int hi, int mode) __asm__("SFX_SetALumiPrm");
void SFX_GetALumiPrm_x0019FE28(SfxHn_x0019FE28 *hn, int *lo, int *hi, int *mode) __asm__("SFX_GetALumiPrm");
void SFX_SetAlp3Prm_x0019FE28(SfxHn_x0019FE28 *hn, int a, int b, int c) __asm__("SFX_SetAlp3Prm");
void SFX_GetAlp3Prm_x0019FE28(SfxHn_x0019FE28 *hn, unsigned char *alpha0, unsigned char *alpha1, unsigned char *alpha2) __asm__("SFX_GetAlp3Prm");
void SFX_SetColAdj_x0019FE28(SfxHn_x0019FE28 *hn, int value) __asm__("SFX_SetColAdj");
int SFX_GetColAdj_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetColAdj");
void SFX_SetSplitField_x0019FE28(SfxHn_x0019FE28 *hn, int value) __asm__("SFX_SetSplitField");
int SFX_GetSplitField_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetSplitField");
void SFX_SetProgOut_x0019FE28(SfxHn_x0019FE28 *hn, int value) __asm__("SFX_SetProgOut");
int SFX_GetProgOut_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetProgOut");
void SFX_SetCnvBottomUp_x0019FE28(SfxHn_x0019FE28 *hn, int value) __asm__("SFX_SetCnvBottomUp");
int SFX_GetCnvBottomUp_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetCnvBottomUp");
void sfx_ClipFrame_x0019FE28(SfxFrame_x0019FE28 *frm, int second, int first) __asm__("sfx_ClipFrame");
void SFX_SetOutBufSize_x0019FE28(SfxHn_x0019FE28 *hn, int width, int height) __asm__("SFX_SetOutBufSize");
void SFX_SetUnitWidth_x0019FE28(SfxHn_x0019FE28 *hn, int value) __asm__("SFX_SetUnitWidth");
void SFX_SetMaxAlpha_x0019FE28(SfxHn_x0019FE28 *hn, int value) __asm__("SFX_SetMaxAlpha");
int SFX_GetMaxAlpha_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetMaxAlpha");
void SFX_SetPicUsrDat_x0019FE28(SfxHn_x0019FE28 *hn, char *ud, int size) __asm__("SFX_SetPicUsrDat");
int SFX_GetSudVersion_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetSudVersion");
int SFX_GetTypeDivField_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetTypeDivField");
int SFX_GetTypeCcs_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetTypeCcs");
int SFX_GetTypeIntl_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetTypeIntl");
int SFX_GetExtScan_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetExtScan");
int SFX_GetExtFlag_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetExtFlag");
int SFX_GetExtVal0_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetExtVal0");
int SFX_GetExtVal1_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetExtVal1");
int SFX_GetExtVal2_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetExtVal2");
int SFX_GetExtVal3_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetExtVal3");
void SFX_SetZTblCbFn_x0019FE28(SfxHn_x0019FE28 *hn, SfxZCbFn_x0019FE28 fn) __asm__("SFX_SetZTblCbFn");
void SFX_SetZTblCbArg_x0019FE28(SfxHn_x0019FE28 *hn, int arg) __asm__("SFX_SetZTblCbArg");
void SFX_SetOptimizeSpeed_x0019FE28(int sw) __asm__("SFX_SetOptimizeSpeed");
void SFX_CnvFrmZ16_x0019FE28(SfxHn_x0019FE28 *hn, SfxFrame_x0019FE28 *frm, int arg) __asm__("SFX_CnvFrmZ16");
void SFX_CnvFrmZ32_x0019FE28(SfxHn_x0019FE28 *hn, SfxFrame_x0019FE28 *frm, int arg) __asm__("SFX_CnvFrmZ32");
int SFX_GetFxType_x0019FE28(SfxHn_x0019FE28 *hn) __asm__("SFX_GetFxType");
void *SFX_SetZbit_x0019FE28(void *sfx, int zbit) __asm__("SFX_SetZbit");
void SFX_MakeTable_x0019FE28(SfxCnvTbl_x0019FE28 *tbl, SfxFrame_x0019FE28 *frm, unsigned int compo) __asm__("SFX_MakeTable");
void SFX_MakeTblZ16_x0019FE28(SfxCnvTbl_x0019FE28 *tbl, SfxFrame_x0019FE28 *frm) __asm__("SFX_MakeTblZ16");
void SFX_MakeTblZ32_x0019FE28(SfxCnvTbl_x0019FE28 *tbl, SfxFrame_x0019FE28 *frm) __asm__("SFX_MakeTblZ32");
int SFXINF_GetStmInf_x0019FE28(SfxFrame_x0019FE28 *frm, char *tag) __asm__("SFXINF_GetStmInf");
void SFXA_Init_x0019FE28(void) __asm__("SFXA_Init");
void SFXA_Finish_x0019FE28(void) __asm__("SFXA_Finish");
SfxaHn_x0019FE28 *SFXA_Create_x0019FE28(void) __asm__("SFXA_Create");
void SFXA_MakeAlpLumiTbl_x0019FE28(SfxaHn_x0019FE28 *hn, int unused, CftEntry_x0019FE28 *table) __asm__("SFXA_MakeAlpLumiTbl");
void SFXA_MakeAlp3110Tbl_x0019FE28(SfxaHn_x0019FE28 *hn, int unused, CftEntry_x0019FE28 *table) __asm__("SFXA_MakeAlp3110Tbl");
void SFXA_MakeAlp3Tbl_x0019FE28(SfxaHn_x0019FE28 *hn, int unused, CftEntry_x0019FE28 *table) __asm__("SFXA_MakeAlp3Tbl");
int SFXA_IsNeedUpdateLumiTbl_x0019FE28(SfxaHn_x0019FE28 *hn) __asm__("SFXA_IsNeedUpdateLumiTbl");
void SFXA_SetLumiPrm_x0019FE28(SfxaHn_x0019FE28 *hn, int lo, int hi, int mode) __asm__("SFXA_SetLumiPrm");
void SFXA_GetLumiPrm_x0019FE28(SfxaHn_x0019FE28 *hn, int *lo, int *hi, int *mode) __asm__("SFXA_GetLumiPrm");
void SFXA_SetAlp3Prm_x0019FE28(SfxaHn_x0019FE28 *hn, unsigned char alpha0, unsigned char alpha1, unsigned char alpha2) __asm__("SFXA_SetAlp3Prm");
void SFXA_GetAlp3Prm_x0019FE28(SfxaHn_x0019FE28 *hn, unsigned char *alpha0, unsigned char *alpha1, unsigned char *alpha2) __asm__("SFXA_GetAlp3Prm");
void SFXZ_Init_x0019FE28(void) __asm__("SFXZ_Init");
void SFXZ_Finish_x0019FE28(void) __asm__("SFXZ_Finish");
SfxZHn_x0019FE28 *SFXZ_Create_x0019FE28(void) __asm__("SFXZ_Create");
void SFXZ_SetTagInf_x0019FE28(SfxZHn_x0019FE28 *zhn, char *data, int size) __asm__("SFXZ_SetTagInf");
void SFXZ_GetZfrmRange_x0019FE28(SfxZHn_x0019FE28 *zhn, int frame, int *first, int *second) __asm__("SFXZ_GetZfrmRange");
void SFXZ_SetZclip_x0019FE28(SfxZHn_x0019FE28 *zhn, float zmin, float zmax) __asm__("SFXZ_SetZclip");
void SFXZ_GetZclip_x0019FE28(SfxZHn_x0019FE28 *zhn, float *zmin, float *zmax) __asm__("SFXZ_GetZclip");
int SFXZ_IsSetZclip_x0019FE28(SfxZHn_x0019FE28 *zhn) __asm__("SFXZ_IsSetZclip");
void SFXZ_MakeCnvZTbl_x0019FE28(SfxZHn_x0019FE28 *zhn, int frame, unsigned int *buf) __asm__("SFXZ_MakeCnvZTbl");
typedef unsigned int size_t_x0019FE28;
typedef int ptrdiff_t_x0019FE28;
void *memset_x0019FE28(void *, int, size_t_x0019FE28) __asm__("memset");
void *memcpy_x0019FE28(void *, const void *, size_t_x0019FE28) __asm__("memcpy");
void *memmove_x0019FE28(void *, const void *, size_t_x0019FE28) __asm__("memmove");
int memcmp_x0019FE28(const void *, const void *, size_t_x0019FE28) __asm__("memcmp");
size_t_x0019FE28 strlen_x0019FE28(const char *) __asm__("strlen");
char *strcpy_x0019FE28(char *, const char *) __asm__("strcpy");
char *strncpy_x0019FE28(char *, const char *, size_t_x0019FE28) __asm__("strncpy");
int strcmp_x0019FE28(const char *, const char *) __asm__("strcmp");
int strncmp_x0019FE28(const char *, const char *, size_t_x0019FE28) __asm__("strncmp");
char *strcat_x0019FE28(char *, const char *) __asm__("strcat");
typedef struct SfdSj_x0019FE28 SfdSj_x0019FE28;
typedef struct SfdSjChunk_x0019FE28 { char *data; int len; } SfdSjChunk_x0019FE28;
typedef struct SfdSjVtbl_x0019FE28 { void *queryInterface; void *addRef; void *release; void (*destroy)(SfdSj_x0019FE28 *sj); int (*getUuid)(SfdSj_x0019FE28 *sj); void (*reset)(SfdSj_x0019FE28 *sj); void (*getChunk)(SfdSj_x0019FE28 *sj, int id, int n, SfdSjChunk_x0019FE28 *ck); void (*ungetChunk)(SfdSj_x0019FE28 *sj, int id, SfdSjChunk_x0019FE28 *ck); void (*putChunk)(SfdSj_x0019FE28 *sj, int id, SfdSjChunk_x0019FE28 *ck); int (*getNumData)(SfdSj_x0019FE28 *sj, int id); } SfdSjVtbl_x0019FE28;
struct SfdSj_x0019FE28 { SfdSjVtbl_x0019FE28 *vtbl; };
typedef struct SfdBufStat_x0019FE28 { SfdSjChunk_x0019FE28 ck0; SfdSjChunk_x0019FE28 ck1; char *tailData; int tailLen; int tailFlag; int pad28; } SfdBufStat_x0019FE28;
enum SjLine_x0019FE28 { SJ_LIN_FREE_x0019FE28 = 0, SJ_LIN_DATA_x0019FE28 = 1 };
typedef void (*SjErrFunc_x0019FE28)(void *obj, int code);
typedef struct SjxObj_x0019FE28 SjxObj_x0019FE28;
void SJ_SplitChunk_x0019FE28(SfdSjChunk_x0019FE28 *ck, int nbyte, SfdSjChunk_x0019FE28 *head, SfdSjChunk_x0019FE28 *rest) __asm__("SJ_SplitChunk");
void SJ_MakeTag_x0019FE28(SfdSjChunk_x0019FE28 *tag, const char *id) __asm__("SJ_MakeTag");
void SJ_GetTagContent_x0019FE28(char *tag, SfdSjChunk_x0019FE28 *content) __asm__("SJ_GetTagContent");
char *SJ_SearchTag_x0019FE28(SfdSjChunk_x0019FE28 *ck, const char *id, const char *endid, SfdSjChunk_x0019FE28 *content) __asm__("SJ_SearchTag");
void SJCRS_Init_x0019FE28(void) __asm__("SJCRS_Init");
void SJCRS_Finish_x0019FE28(void) __asm__("SJCRS_Finish");
void SJCRS_BeginSvr_x0019FE28(void) __asm__("SJCRS_BeginSvr");
void SJCRS_EndSvr_x0019FE28(void) __asm__("SJCRS_EndSvr");
void SJCRS_Lock_x0019FE28(void) __asm__("SJCRS_Lock");
void SJCRS_Unlock_x0019FE28(void) __asm__("SJCRS_Unlock");
void SJERR_CallErr_x0019FE28(const char *message) __asm__("SJERR_CallErr");
void SJMEM_Init_x0019FE28(void) __asm__("SJMEM_Init");
void SJMEM_Finish_x0019FE28(void) __asm__("SJMEM_Finish");
SfdSj_x0019FE28 *SJMEM_Create_x0019FE28(char *buf, int bsize) __asm__("SJMEM_Create");
char *SJMEM_GetBufPtr_x0019FE28(SfdSj_x0019FE28 *sj) __asm__("SJMEM_GetBufPtr");
int SJMEM_GetBufSize_x0019FE28(SfdSj_x0019FE28 *sj) __asm__("SJMEM_GetBufSize");
void SJRBF_Init_x0019FE28(void) __asm__("SJRBF_Init");
void SJRBF_Finish_x0019FE28(void) __asm__("SJRBF_Finish");
SfdSj_x0019FE28 *SJRBF_Create_x0019FE28(char *buf, int bsize, int xsize) __asm__("SJRBF_Create");
char *SJRBF_GetBufPtr_x0019FE28(SfdSj_x0019FE28 *sj) __asm__("SJRBF_GetBufPtr");
int SJRBF_GetBufSize_x0019FE28(SfdSj_x0019FE28 *sj) __asm__("SJRBF_GetBufSize");
int SJRBF_GetXtrSize_x0019FE28(SfdSj_x0019FE28 *sj) __asm__("SJRBF_GetXtrSize");
void SJRBF_SetFlowCnt_x0019FE28(SfdSj_x0019FE28 *sj, int line, int flow, int cnt) __asm__("SJRBF_SetFlowCnt");
int SJRBF_GetFlowCnt_x0019FE28(SfdSj_x0019FE28 *sj, int line, int flow) __asm__("SJRBF_GetFlowCnt");
void SJUNI_Init_x0019FE28(void) __asm__("SJUNI_Init");
void SJUNI_Finish_x0019FE28(void) __asm__("SJUNI_Finish");
SfdSj_x0019FE28 *SJUNI_Create_x0019FE28(int mode, char *work, int wksize) __asm__("SJUNI_Create");
void *SJRBF_CreateRmt_x0019FE28(int buf, int bsize, int xsize) __asm__("SJRBF_CreateRmt");
void *SJMEM_CreateRmt_x0019FE28(int buf, int bsize) __asm__("SJMEM_CreateRmt");
void *SJUNI_CreateRmt_x0019FE28(int mode, int work, int wksize) __asm__("SJUNI_CreateRmt");
void SJRMT_Destroy_x0019FE28(void *sjrmt) __asm__("SJRMT_Destroy");
int *SJRMT_GetUuid_x0019FE28(void *sjrmt) __asm__("SJRMT_GetUuid");
void SJRMT_Reset_x0019FE28(void *sjrmt) __asm__("SJRMT_Reset");
void SJRMT_GetChunk_x0019FE28(void *sjrmt, int line, int nbyte, SfdSjChunk_x0019FE28 *ck) __asm__("SJRMT_GetChunk");
void SJRMT_UngetChunk_x0019FE28(void *sjrmt, int line, SfdSjChunk_x0019FE28 *ck) __asm__("SJRMT_UngetChunk");
int SJRMT_PutChunk_x0019FE28(void *sjrmt, int line, SfdSjChunk_x0019FE28 *ck) __asm__("SJRMT_PutChunk");
int SJRMT_GetNumData_x0019FE28(void *sjrmt, int line) __asm__("SJRMT_GetNumData");
int SJRMT_IsGetChunk_x0019FE28(void *sjrmt, int line, int nbyte, int *rbyte) __asm__("SJRMT_IsGetChunk");
void SJRMT_Init_x0019FE28(void) __asm__("SJRMT_Init");
void SJRMT_Finish_x0019FE28(void) __asm__("SJRMT_Finish");
void SJX_ExecServer_x0019FE28(void) __asm__("SJX_ExecServer");
void SJX_Init_x0019FE28(void) __asm__("SJX_Init");
void SJX_Finish_x0019FE28(void) __asm__("SJX_Finish");
SjxObj_x0019FE28 *SJX_Create_x0019FE28(SfdSj_x0019FE28 *sj, void *sjrmt, int line) __asm__("SJX_Create");
void SJX_Destroy_x0019FE28(SjxObj_x0019FE28 *sjx) __asm__("SJX_Destroy");
void SJX_Reset_x0019FE28(SjxObj_x0019FE28 *sjx) __asm__("SJX_Reset");
double fptodp_x0019FE28(float value) __asm__("fptodp");
float dptofp_x0019FE28(double value) __asm__("dptofp");
double dpadd_x0019FE28(double a, double b) __asm__("dpadd");
double dpsub_x0019FE28(double a, double b) __asm__("dpsub");
double dpmul_x0019FE28(double a, double b) __asm__("dpmul");
double dpdiv_x0019FE28(double a, double b) __asm__("dpdiv");
int dpcmp_x0019FE28(double a, double b) __asm__("dpcmp");
double litodp_x0019FE28(int value) __asm__("litodp");
long long __muldi3_x0019FE28(long long u, long long v) __asm__("__muldi3");
long long __divdi3_x0019FE28(long long u, long long v) __asm__("__divdi3");
long long __moddi3_x0019FE28(long long u, long long v) __asm__("__moddi3");
unsigned long long __udivdi3_x0019FE28(unsigned long long n, unsigned long long d) __asm__("__udivdi3");
unsigned long long __umoddi3_x0019FE28(unsigned long long u, unsigned long long v) __asm__("__umoddi3");
double __floatdidf_x0019FE28(long long u) __asm__("__floatdidf");
float __floatdisf_x0019FE28(long long u) __asm__("__floatdisf");
long long __fixdfdi_x0019FE28(double a) __asm__("__fixdfdi");
long long __fixsfdi_x0019FE28(float a) __asm__("__fixsfdi");
unsigned long long __fixunsdfdi_x0019FE28(double a) __asm__("__fixunsdfdi");
unsigned long long __fixunssfdi_x0019FE28(float a) __asm__("__fixunssfdi");
int _dpflt_x0019FE28(double a, double b) __asm__("_dpflt");
int dptoli_x0019FE28(double value) __asm__("dptoli");
typedef struct SfxZLib_x0019FE28 { int nhn; int zbufType; int maxhn; SfxZHn_x0019FE28 hn[8]; } SfxZLib_x0019FE28;
extern SfxZLib_x0019FE28 D_004270C8_x0019FE28 __asm__("D_004270C8");
void sfxzmv_InitLibWork_x0019FE28(void) __asm__("sfxzmv_InitLibWork");
SfxZHn_x0019FE28 *func_0019FE28_x0019FE28(void) __asm__("func_0019FE28");
void sfxzmv_InitHn_x0019FE28(SfxZHn_x0019FE28 *zhn) __asm__("sfxzmv_InitHn");
void sfxzmv_SetTagGrp_x0019FE28(SfxZHn_x0019FE28 *zhn) __asm__("sfxzmv_SetTagGrp");
void sfxzmv_GetZfrmInf_x0019FE28(SfxZHn_x0019FE28 *zhn, char *tag, char *endtag, char **data, int *size) __asm__("sfxzmv_GetZfrmInf");
void sfxzmv_MakeOrgZ32Tbl_x0019FE28(SfxZHn_x0019FE28 *zhn, int lo, int hi, unsigned int *tbl) __asm__("sfxzmv_MakeOrgZ32Tbl");
void sfxzmv_MakeCnvZTbl_x0019FE28(SfxZHn_x0019FE28 *zhn, int lo, int hi, unsigned int *buf) __asm__("sfxzmv_MakeCnvZTbl");
void sfxzmv_MakeZ16TblFromOrgZ32_x0019FE28(SfxZHn_x0019FE28 *zhn, unsigned int *src, short *dst) __asm__("sfxzmv_MakeZ16TblFromOrgZ32");
void sfxzmv_MakeZ32TblFromOrgZ32_x0019FE28(SfxZHn_x0019FE28 *zhn, unsigned int *src, unsigned int *dst) __asm__("sfxzmv_MakeZ32TblFromOrgZ32");
int sfxzmv_IsOkZclip_x0019FE28(float zmin, float zmax) __asm__("sfxzmv_IsOkZclip");
void SFXZ_SetZbufType_x0019FE28(int value) __asm__("SFXZ_SetZbufType");
int SFXZ_GetZbufType_x0019FE28(void) __asm__("SFXZ_GetZbufType");
void sfxcnv_CnvFrmZcmn_x0019FE28(SfxHn_x0019FE28 *hn, SfxFrame_x0019FE28 *frm, int zbit, int arg) __asm__("sfxcnv_CnvFrmZcmn");
void sfxcnv_CnvFrmYcc420plnToZ_x0019FE28(SfxHn_x0019FE28 *hn, SfxFrame_x0019FE28 *frm, int zbit, int arg) __asm__("sfxcnv_CnvFrmYcc420plnToZ");
void sfxcnv_CnvFrmArgb8888mbToZ_x0019FE28(SfxHn_x0019FE28 *hn, SfxFrame_x0019FE28 *frm, int zbit, int arg) __asm__("sfxcnv_CnvFrmArgb8888mbToZ");
CftZFmt_x0019FE28 sfxcnv_CnvZbitToCft_x0019FE28(int zbit) __asm__("sfxcnv_CnvZbitToCft");
void SFXZ_Init_x0019FE28(void) __asm__("SFXZ_Init");
void sfxzmv_InitLibWork_x0019FE28(void) __asm__("sfxzmv_InitLibWork");
void SFXZ_Finish_x0019FE28(void) __asm__("SFXZ_Finish");
SfxZHn_x0019FE28 *SFXZ_Create_x0019FE28(void) __asm__("SFXZ_Create");
SfxZHn_x0019FE28 *func_0019FE28_x0019FE28(void) __asm__("func_0019FE28");
SfxZHn_x0019FE28 *func_0019FE28_x0019FE28(void) {
    int maxhn = D_004270C8_x0019FE28.maxhn;
    SfxZHn_x0019FE28 *tbl = D_004270C8_x0019FE28.hn;
    volatile SfxZHn_x0019FE28 *zhn;
    int i;
    for (i = 0; i < maxhn; i++) {
        zhn = &tbl[i];
        if (zhn->used == 0) {
            return (SfxZHn_x0019FE28 *)zhn;
        }
    }
    return 0;
}
void func_0019FE78_x0019FE78(u8 *arg0) __asm__("func_0019FE78");
void func_0019FE78_x0019FE78(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0x44)) = 0;
 do { *((s32 *) (((u8 *) arg0) + 0x3C)) = 0; } while (0);
  *((s32 *) (((u8 *) arg0) + 0x40)) = 0;
}
extern s32 D_004270C8_x0019FE88 __asm__("D_004270C8");
void func_0019FE88_x0019FE88(s32 *p) __asm__("func_0019FE88");
void func_0019FE88_x0019FE88(s32 *p)
{
    if (p != 0) {
        *p = 0;
        __asm__ volatile("");
        D_004270C8_x0019FE88--;
    }
}
typedef signed char Sint8_x0019FEB0;
typedef int Sint32_x0019FEB0;
typedef struct SjChunk_x0019FEB0 {
    Sint8_x0019FEB0 *data;
    Sint32_x0019FEB0 len;
} SjChunk_x0019FEB0;
typedef struct SjTagRec_x0019FEB0 {
    int set;
    SjChunk_x0019FEB0 ck;
} SjTagRec_x0019FEB0;
typedef struct SfxZmvTagState_x0019FEB0 {
    char unk00[0x08];
    SjTagRec_x0019FEB0 input;
    char unk14[0x04];
    SjTagRec_x0019FEB0 header;
    char unk24[0x04];
    SjTagRec_x0019FEB0 frame;
} SfxZmvTagState_x0019FEB0;
extern void sfxzmv_SetTagGrp_x0019FEB0(SfxZmvTagState_x0019FEB0 *state) __asm__("func_0019FED8");
void func_0019FEB0_x0019FEB0(SfxZmvTagState_x0019FEB0 *state, Sint8_x0019FEB0 *data, Sint32_x0019FEB0 len) __asm__("func_0019FEB0");
/* SFXZ_SetTagInf: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0035ffd8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019FEB0_x0019FEB0(SfxZmvTagState_x0019FEB0 *state, Sint8_x0019FEB0 *data, Sint32_x0019FEB0 len)
{
    SjTagRec_x0019FEB0 *input;
    input = &state->input;
    input->set = 1;
    input->ck.data = data;
    input->ck.len = len;
    sfxzmv_SetTagGrp_x0019FEB0(state);
}
typedef signed char Sint8_x0019FED8;
typedef int Sint32_x0019FED8;
typedef struct SjChunk_x0019FED8 {
    Sint8_x0019FED8 *data;
    Sint32_x0019FED8 len;
} SjChunk_x0019FED8;
typedef struct SjTagRec_x0019FED8 {
    int set;
    SjChunk_x0019FED8 ck;
} SjTagRec_x0019FED8;
extern Sint8_x0019FED8 *SJ_SearchTag_x0019FED8(SjChunk_x0019FED8 *ck, Sint8_x0019FED8 *tag, Sint8_x0019FED8 *endtag, SjChunk_x0019FED8 *tagck) __asm__("func_0016F290");
typedef struct SfxZmvTagState_x0019FED8 {
    char unk00[0x08];
    SjTagRec_x0019FED8 input;
    char unk14[0x04];
    SjTagRec_x0019FED8 header;
    char unk24[0x04];
    SjTagRec_x0019FED8 frame;
} SfxZmvTagState_x0019FED8;
extern Sint8_x0019FED8 D_0045A060_x0019FED8[] __asm__("D_00467DA0");
extern Sint8_x0019FED8 D_0045A068_x0019FED8[] __asm__("D_00467DA8");
extern Sint8_x0019FED8 D_0045A070_x0019FED8[] __asm__("D_00467DB0");
void func_0019FED8_x0019FED8(SfxZmvTagState_x0019FED8 *state) __asm__("func_0019FED8");
/* sfxzmv_SetTagGrp: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00360000.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0019FED8_x0019FED8(SfxZmvTagState_x0019FED8 *state)
{
    SjChunk_x0019FED8 input;
    SjChunk_x0019FED8 found;
    SjTagRec_x0019FED8 *header = &state->header;
    SjTagRec_x0019FED8 *frame = &state->frame;
    SjTagRec_x0019FED8 *source = &state->input;
    Sint8_x0019FED8 *data = source->ck.data;
    if (data == 0) {
        header->ck.len = 0;
        header->set = 1;
        header->ck.data = 0;
        frame->set = 1;
        frame->ck.data = 0;
        frame->ck.len = 0;
        return;
    }
    input.data = data;
    input.len = source->ck.len;
    SJ_SearchTag_x0019FED8(&input, D_0045A060_x0019FED8, D_0045A068_x0019FED8, &found);
    header->ck.data = found.data;
    header->ck.len = found.len;
    header->set = 1;
    SJ_SearchTag_x0019FED8(&input, D_0045A070_x0019FED8, D_0045A068_x0019FED8, &found);
    frame->set = 1;
    frame->ck.data = found.data;
    frame->ck.len = found.len;
}
typedef struct SfxChunk_x0019FFC0 {
    int valid;
    char *data;
    int size;
} SfxChunk_x0019FFC0;
typedef void (*SfxZCbFn_x0019FFC0)(unsigned int *, unsigned int *, float, float);
typedef struct SfxZHn_x0019FFC0 {
    int used;
    int zbit;
    SfxChunk_x0019FFC0 info;
    int pad20;
    SfxChunk_x0019FFC0 hdr;
    int pad36;
    SfxChunk_x0019FFC0 vfrm;
    int pad52[2];
    float zmin;
    float zmax;
    SfxZCbFn_x0019FFC0 cbfn;
    int cbarg;
} SfxZHn_x0019FFC0;
void func_0019FFC0_x0019FFC0(SfxZHn_x0019FFC0 *zhn, char **data, int *size) __asm__("func_0019FFC0");
/* SFXZ_GetTagInf: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfxz.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019FFC0_x0019FFC0(SfxZHn_x0019FFC0 *zhn, char **data, int *size) {
    SfxChunk_x0019FFC0 *info = &zhn->info;
    char *value4;
    int value8;
    if (info->valid != 1) {
        *data = 0;
        *size = 0;
        return;
    }
    value4 = info->data;
    value8 = info->size;
    *size = value8;
    *data = value4;
}
typedef struct SfxChunk_x0019FFF0 {
    int valid;
    char *data;
    int size;
} SfxChunk_x0019FFF0;
typedef void (*SfxZCbFn_x0019FFF0)(unsigned int *, unsigned int *, float, float);
typedef struct SfxZHn_x0019FFF0 {
    int used;
    int zbit;
    SfxChunk_x0019FFF0 info;
    int pad20;
    SfxChunk_x0019FFF0 hdr;
    int pad36;
    SfxChunk_x0019FFF0 vfrm;
    int pad52[2];
    float zmin;
    float zmax;
    SfxZCbFn_x0019FFF0 cbfn;
    int cbarg;
} SfxZHn_x0019FFF0;
int sscanf_x0019FFF0(const char *, const char *, ...) __asm__("func_00127520");
long long __muldi3_x0019FFF0(long long u, long long v) __asm__("__muldi3");
void sfxzmv_GetZfrmInf_x0019FFF0(SfxZHn_x0019FFF0 *zhn, char *tag, char *endtag, char **data, int *size) __asm__("func_001A0108");
void func_0019FFF0_x0019FFF0(SfxZHn_x0019FFF0 *zhn, int frame, int *first, int *second) __asm__("func_0019FFF0");
/* SFXZ_GetZfrmRange: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfxz.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0019FFF0_x0019FFF0(SfxZHn_x0019FFF0 *zhn, int frame, int *first, int *second) {
    char *p;
    int len;
    long long n;
    long long x, y, z;
    char *str;
    sfxzmv_GetZfrmInf_x0019FFF0(zhn, "ZMFSIZE", "SFXINFE", &p, &len);
    if (p == 0) {
        *first = 0;
        *second = 0x7FFFFFFF;
        return;
    }
    sscanf_x0019FFF0(p, "%lx", &n);
    sfxzmv_GetZfrmInf_x0019FFF0(zhn, "ZMFDATA", "SFXINFE", &p, &len);
    str = p;
    if (str == 0) {
        *first = 0x7FFFFFFF;
        return;
    }
    sscanf_x0019FFF0(str + (int)__muldi3_x0019FFF0(n, frame), "%lx %lx %lx", &x, &y, &z);
    *first = y;
    *second = z;
}
__asm__("# rebind func_0019FFF0 0x0019FFF0");
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0108);
void func_001A0188(void) {
    func_001A01A0();
}
typedef struct SfxChunk_x001A01A0 {
    int valid;
    char *data;
    int size;
} SfxChunk_x001A01A0;
typedef void (*SfxZCbFn_x001A01A0)(unsigned int *, unsigned int *, float, float);
typedef struct SfxZHn_x001A01A0 {
    int used;
    int zbit;
    SfxChunk_x001A01A0 info;
    int pad20;
    SfxChunk_x001A01A0 hdr;
    int pad36;
    SfxChunk_x001A01A0 vfrm;
    int pad52[2];
    float zmin;
    float zmax;
    SfxZCbFn_x001A01A0 cbfn;
    int cbarg;
} SfxZHn_x001A01A0;
void func_001A01A0_x001A01A0(SfxZHn_x001A01A0 *zhn, int lo, int hi, unsigned int *tbl) __asm__("func_001A01A0");
/* sfxzmv_MakeOrgZ32Tbl: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfxz.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001A01A0_x001A01A0(SfxZHn_x001A01A0 *zhn, int lo, int hi, unsigned int *tbl)
{
    int i;
    if (hi == (int)0x80000000)
        hi = 0x7FFFFFFF;
    if (lo == (int)0x80000000)
        lo = 0x7FFFFFFF;
    for (i = 8; i >= 0; i--)
        tbl[i] = 0;
    for (i = 9; i < 17; i++)
        tbl[i] = lo;
    if (lo == hi) {
        for (i = 17; i < 224; i++)
            tbl[i] = lo;
    } else {
        for (i = 17; i < 224; i++)
            tbl[i] = (unsigned int)(hi - lo) / 207 * (i - 17) + lo;
    }
    for (i = 224; i < 240; i++)
        tbl[i] = hi;
    for (i = 240; i < 256; i++)
        tbl[i] = 0x7FFFFFFF;
}
void func_0019FFF0_x001A02E0(s32, s32, s32 *, s32 *) __asm__("func_0019FFF0");
void func_001A0330_x001A02E0(s32, s32, s32, s16 *) __asm__("func_001A0330");
void func_001A02E0_x001A02E0(s32 a0, s32 a1, s16 *out) __asm__("func_001A02E0");
void func_001A02E0_x001A02E0(s32 a0, s32 a1, s16 *out)
{
    s32 x, y;
    *out = 0;
    func_0019FFF0_x001A02E0(a0, a1, &x, &y);
    func_001A0330_x001A02E0(a0, x, y, out);
}
typedef struct { u8 pad[0x3C]; float x; float y; void (*fn)(float, float, s32, s32); } Sfx_r3001A0330_x001A0330;
void func_001A0188_x001A0330(Sfx_r3001A0330_x001A0330 *, s32, s32, s32) __asm__("func_001A0188");
void func_001A03B8_x001A0330(Sfx_r3001A0330_x001A0330 *, s32, s32) __asm__("func_001A03B8");
void func_001A0330_x001A0330(Sfx_r3001A0330_x001A0330 *a0, s32 a1, s32 a2, s32 a3) __asm__("func_001A0330");
void func_001A0330_x001A0330(Sfx_r3001A0330_x001A0330 *a0, s32 a1, s32 a2, s32 a3)
{
    s32 b = a3 + 0x200;

    func_001A0188_x001A0330(a0, a1, a2, b);
    if (a0->fn == 0) {
        func_001A03B8_x001A0330(a0, b, a3);
        return;
    }
    a0->fn(a0->x, a0->y, b, a3);
}
typedef struct { unsigned char pad[0x3C]; float zmin; float zmax; } SfxZHn_x001A03B8;
int func_001A0898_x001A03B8(void) __asm__("func_001A0898");
void func_001A03B8_x001A03B8(SfxZHn_x001A03B8 *zhn, unsigned int *src, short *dst) __asm__("func_001A03B8");
void func_001A03B8_x001A03B8(SfxZHn_x001A03B8 *zhn, unsigned int *src, short *dst) {
    float zmin;
    float zmax;
    double dmin;
    double dmax;
    double inv;
    double a;
    double b;
    unsigned int v;
    short *d;
    int i;

    zmin = zhn->zmin;
    zmax = zhn->zmax;
    if (func_001A0898_x001A03B8() == 1) {
        for (i = 0; i < 256; i++) {
            dst[i] = src[i] >> 15;
        }
        return;
    }
    d = dst;
    dmin = zmin;
    dmax = zmax;
    inv = 1.0 / (dmax - dmin);
    a = dmax * 65535.0 * inv;
    b = inv * 65535.0 * dmin * dmax;
    for (i = 0; i < 256; i++) {
        if (*src == 0)
            *src = 1;
        v = *src;
        *d = (unsigned int)(a - b / (dmax * v / 2147483647.0));
        src++;
        d++;
    }
}
__asm__("# rebind func_001A03B8 0x001A03B8");
void func_0019FFF0_x001A0588(s32, s32, s32 *, s32 *) __asm__("func_0019FFF0");
void func_001A05D8_x001A0588(s32, s32, s32, s32 *) __asm__("func_001A05D8");
void func_001A0588_x001A0588(s32 a0, s32 a1, s32 *out) __asm__("func_001A0588");
void func_001A0588_x001A0588(s32 a0, s32 a1, s32 *out)
{
    s32 x, y;
    *out = 0;
    func_0019FFF0_x001A0588(a0, a1, &x, &y);
    func_001A05D8_x001A0588(a0, x, y, out);
}
typedef struct { u8 pad[0x3C]; float x; float y; void (*fn)(float, float, s32, s32); } Sfx_r3001A05D8_x001A05D8;
void func_001A0188_x001A05D8(Sfx_r3001A05D8_x001A05D8 *, s32, s32, s32) __asm__("func_001A0188");
void func_001A0660_x001A05D8(Sfx_r3001A05D8_x001A05D8 *, s32, s32) __asm__("func_001A0660");
void func_001A05D8_x001A05D8(Sfx_r3001A05D8_x001A05D8 *a0, s32 a1, s32 a2, s32 a3) __asm__("func_001A05D8");
void func_001A05D8_x001A05D8(Sfx_r3001A05D8_x001A05D8 *a0, s32 a1, s32 a2, s32 a3)
{
    s32 b = a3 + 0x400;

    func_001A0188_x001A05D8(a0, a1, a2, b);
    if (a0->fn == 0) {
        func_001A0660_x001A05D8(a0, b, a3);
        return;
    }
    a0->fn(a0->x, a0->y, b, a3);
}
typedef struct SfxChunk_x001A0660 {
    int valid;
    char *data;
    int size;
} SfxChunk_x001A0660;
typedef void (*SfxZCbFn_x001A0660)(unsigned int *, unsigned int *, float, float);
typedef struct SfxZHn_x001A0660 {
    int used;
    int zbit;
    SfxChunk_x001A0660 info;
    int pad20;
    SfxChunk_x001A0660 hdr;
    int pad36;
    SfxChunk_x001A0660 vfrm;
    int pad52[2];
    float zmin;
    float zmax;
    SfxZCbFn_x001A0660 cbfn;
    int cbarg;
} SfxZHn_x001A0660;
int SFXZ_GetZbufType_x001A0660(void) __asm__("func_001A0898");
int SFXZ_GetZbufType_x001A0660(void) __asm__("func_001A0898");
void func_001A0660_x001A0660(SfxZHn_x001A0660 *zhn, unsigned int *src, unsigned int *dst) __asm__("func_001A0660");
/* sfxzmv_MakeZ32TblFromOrgZ32: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfxz.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001A0660_x001A0660(SfxZHn_x001A0660 *zhn, unsigned int *src, unsigned int *dst)
{
    float scale = zhn->zmax;
    int i;
    unsigned int v;
    if (SFXZ_GetZbufType_x001A0660() == 1) {
        for (i = 0; i < 256; i++)
            dst[i] = (src[i] & 0x7FFFFF80) * 2;
        return;
    }
    for (i = 0; i < 256; i++) {
        if (src[i] == 0)
            src[i] = 1;
        v = src[i];
        dst[i] = 16777215.0f / (scale * v / 2147483520.0f);
    }
}
s32 func_0019F6D0_x001A07A8(s32, s32, s32 *) __asm__("func_0019F6D0");
s32 func_001A0810_x001A07A8() __asm__("func_001A0810");
extern s32 D_00467DF0_x001A07A8 __asm__("D_00467DF0");
void SFXZ_SetZclip_x001A07A8(u8 *arg0, f32 fparg0, f32 fparg1) __asm__("SFXZ_SetZclip");
void SFXZ_SetZclip_x001A07A8(u8 *arg0, f32 fparg0, f32 fparg1)
{
  u8 *new_var;
  if (func_001A0810_x001A07A8() != 1)
  {
    func_0019F6D0_x001A07A8(0, 0, &D_00467DF0_x001A07A8);
  }
  new_var = ((u8 *) arg0) + 0x3C;
  *((f32 *) new_var) = fparg0;
  *((f32 *) (((u8 *) arg0) + 0x40)) = fparg1;
}
s32 func_001A0810(f32 fparg0, f32 fparg1) {
    s32 var_v0;

    var_v0 = 1;
    if (fparg1 <= fparg0) {
        var_v0 = 0;
    }
    if ((fparg1 - fparg0) < -14.0f) {
        var_v0 = 0;
    }
    return var_v0;
}
void func_001A0840_x001A0840(u8 *arg0, f32 *arg1, f32 *arg2) __asm__("func_001A0840");
void func_001A0840_x001A0840(u8 *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x3C);
    *arg2 = *(f32 *)((u8 *)arg0 + 0x40);
}
s32 func_001A0858_x001A0858(u8 *arg0) __asm__("func_001A0858");
s32 func_001A0858_x001A0858(u8 *arg0)
{
  f32 new_var;
  s32 var_v0;
  new_var = *((f32 *) (((u8 *) arg0) + 0x40));
  var_v0 = 1;
  if (((*((f32 *) (((u8 *) arg0) + 0x3C))) == 0.0f) && (new_var == 0.0f))
  {
    var_v0 = 0;
  }
  return var_v0;
}
void func_001A0888(s32 arg0) {
    D_004270CC = arg0;
}
s32 func_001A0898(void) {
    return D_004270CC;
}
typedef signed int s32_x001A08A8;
extern void fn_12_C60_x001A08A8(void *arg0, void *arg1, s32_x001A08A8 arg2, void *arg3) __asm__("func_001A0908");
void func_001A08A8_x001A08A8(void *arg0, void *arg1, void *arg2) __asm__("func_001A08A8");
/* fn_12_D60: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_D60.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_001A08A8_x001A08A8(void *arg0, void *arg1, void *arg2) {
    fn_12_C60_x001A08A8(arg0, arg1, 16, arg2);
}
s32 func_001A0908_x001A08C8() __asm__("func_001A0908");
void func_001A08C8_x001A08C8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_001A08C8");
void func_001A08C8_x001A08C8(s32 arg0, s32 arg1, s32 arg2) {
    func_001A0908_x001A08C8(arg0, arg1, 0x18, arg2);
}
typedef unsigned int u32_x001A08E8;
extern void fn_12_C60_x001A08E8(u32_x001A08E8, u32_x001A08E8, u32_x001A08E8, u32_x001A08E8) __asm__("func_001A0908");
void func_001A08E8_x001A08E8(u32_x001A08E8 arg0, u32_x001A08E8 arg1, u32_x001A08E8 arg2) __asm__("func_001A08E8");
/* fn_12_D38: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_D38.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_001A08E8_x001A08E8(u32_x001A08E8 arg0, u32_x001A08E8 arg1, u32_x001A08E8 arg2) {
    fn_12_C60_x001A08E8(arg0, arg1, 0x20, arg2);
}
extern char D_00467E20_x001A0908[] __asm__("D_00467E20");
extern char D_00467E28_x001A0908[] __asm__("D_00467E28");
extern char D_00467E58_x001A0908[] __asm__("D_00467E58");
s32 func_0019F320_x001A0908(s32 *, char *) __asm__("func_0019F320");
s32 func_001A0858_x001A0908(s32) __asm__("func_001A0858");
void func_0019F6D0_x001A0908(void *, s32 *, char *) __asm__("func_0019F6D0");
void func_001A0BC8_x001A0908(void *, s32 *, s32, s32) __asm__("func_001A0BC8");
void func_001A0A38_x001A0908(void *, s32 *, s32, s32) __asm__("func_001A0A38");
void func_001A0908_x001A0908(u8 *a0, s32 *a1, s32 a2, s32 a3) __asm__("func_001A0908");
void func_001A0908_x001A0908(u8 *a0, s32 *a1, s32 a2, s32 a3)
{
    if (*(s32 *)(a0 + 4) == 0) {
        *(s32 *)(a0 + 4) = func_0019F320_x001A0908(a1, D_00467E20_x001A0908);
    }
    if (func_001A0858_x001A0908(*(s32 *)(a0 + 0x24)) != 1) {
        func_0019F6D0_x001A0908(a0, a1, D_00467E28_x001A0908);
        return;
    }
    switch ((u32)*a1) {
    case 3:
        func_001A0A38_x001A0908(a0, a1, a2, a3);
        return;
    case 2:
        func_001A0BC8_x001A0908(a0, a1, a2, a3);
        return;
    case 1:
        break;
    }
    func_0019F6D0_x001A0908(a0, a1, D_00467E58_x001A0908);
}
typedef struct { int addr; int pitch; int height; int pad; } SfxPlane_0A38_x001A0A38;
typedef struct { int pad0; SfxPlane_0A38_x001A0A38 plane[3]; } SfxFrame_0A38_x001A0A38;
typedef struct { int used; int compo; int width; int height; unsigned char pad10[0x3C - 0x10]; int tbl[4]; } SfxHn_0A38_x001A0A38;
typedef struct { char *y; char *u; char *v; int ypitch; int upitch; int vpitch; void *rsv; } CftYccPln_0A38_x001A0A38;
typedef struct { int zfmt; int *base; int stride; int lines; int height; int width; } CftImage_0A38_x001A0A38;
int sfxcnv_CnvZbitToCft_x001A0A38(int zbit) __asm__("sfxcnv_CnvZbitToCft");
void func_0019EE88_x001A0A38(SfxHn_0A38_x001A0A38 *hn, SfxFrame_0A38_x001A0A38 *frm, int ptn) __asm__("func_0019EE88");
void func_00170B80_x001A0A38(CftYccPln_0A38_x001A0A38 *src, CftImage_0A38_x001A0A38 *dst, int *tbl) __asm__("func_00170B80");
void func_00170B88_x001A0A38(CftYccPln_0A38_x001A0A38 *src, CftImage_0A38_x001A0A38 *dst, int *tbl) __asm__("func_00170B88");
void func_001A0A38_x001A0A38(SfxHn_0A38_x001A0A38 *hn, SfxFrame_0A38_x001A0A38 *frm, int zbit, int arg) __asm__("func_001A0A38");
void func_001A0A38_x001A0A38(SfxHn_0A38_x001A0A38 *hn, SfxFrame_0A38_x001A0A38 *frm, int zbit, int arg)
{
    SfxPlane_0A38_x001A0A38 *py = &frm->plane[0];
    SfxPlane_0A38_x001A0A38 *pu = &frm->plane[1];
    SfxPlane_0A38_x001A0A38 *pv = &frm->plane[2];
    CftYccPln_0A38_x001A0A38 src;
    CftImage_0A38_x001A0A38 dst;
    int pitch;
    int height;
    int ofs;

    src.rsv = 0;
    ofs = py->pitch * py->height / 2;
    src.y = (char *)py->addr + ofs;
    src.u = (char *)pu->addr + ofs / 2;
    src.v = (char *)pv->addr + ofs / 2;
    src.ypitch = py->pitch;
    src.upitch = pu->pitch;
    src.vpitch = pv->pitch;
    if (hn->width == 0)
        pitch = py->pitch;
    else
        pitch = hn->width;
    if (hn->height == 0)
        height = py->height / 2;
    else
        height = hn->height;
    dst.zfmt = sfxcnv_CnvZbitToCft_x001A0A38(zbit);
    dst.base = (int *)arg;
    dst.stride = pitch;
    dst.lines = height;
    dst.height = py->pitch;
    dst.width = py->height / 2;
    switch (zbit) {
    case 16:
        func_0019EE88_x001A0A38(hn, frm, 11);
        func_00170B80_x001A0A38(&src, &dst, (int *)hn->tbl[0]);
        break;
    case 32:
        func_0019EE88_x001A0A38(hn, frm, 13);
        func_00170B88_x001A0A38(&src, &dst, (int *)hn->tbl[0]);
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfx", func_001A0BC8);
s32 sfxcnv_CnvZbitToCft(u32 arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (arg0 != 0x10) {
        if (arg0 >= 0x11U) {
            var_v1 = 2;
            if (arg0 != 0x18) {
                var_v1 = 3;
                if (arg0 != 0x20) {
                    goto block_5;
                }
            }
        } else {
block_5:
            func_0019F6D0(0, 0, &D_00467E90);
            var_v1 = 0;
        }
    }
    return var_v1;
}
extern int D_003EEA6C_x001A0D38 __asm__("D_00427318");
extern int *volatile D_00766CA4_x001A0D38 __asm__("D_00492A70");
extern int *Obj0000_Get_D_0045A1B0_360790_x001A0D38(void) __asm__("func_001A0D88");
void func_001A0D38_x001A0D38(void) __asm__("func_001A0D38");
/* func_00360740: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00331ce0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001A0D38_x001A0D38(void) {
    if (D_003EEA6C_x001A0D38 <= 0) {
        D_00766CA4_x001A0D38 = Obj0000_Get_D_0045A1B0_360790_x001A0D38();
        D_003EEA6C_x001A0D38 = D_003EEA6C_x001A0D38 + 1;
    }
}
s32 *func_001A0D88(void) {
    return &D_00467EC0;
}
extern s32 D_00427318_x001A0D98 __asm__("D_00427318");
void func_001A0D98_x001A0D98(void) __asm__("func_001A0D98");
void func_001A0D98_x001A0D98(void) {
    if (D_00427318_x001A0D98 > 0) {
        D_00427318_x001A0D98 -= 1;
    }
}
typedef unsigned int size_t_x001A0DB8;
int sprintf_x001A0DB8(char *, const char *, ...) __asm__("func_00127488");
extern void qsort_x001A0DB8(void *, size_t_x001A0DB8, size_t_x001A0DB8, int (*)(const void *, const void *)) __asm__("qsort");
char *strncpy_x001A0DB8(char *, const char *, size_t_x001A0DB8) __asm__("func_00128040");
char *strcat_x001A0DB8(char *, const char *) __asm__("func_00127810");
void SUD_SetFmtTypeToBuf_x001A0DB8(char *dst, int *flags) __asm__("func_001A0E48");
void SUD_SetFmtTypeToBuf_x001A0DB8(char *dst, int *flags) __asm__("func_001A0E48");
extern char ext_str0_x001A0DB8[] __asm__("D_00467F18");
extern char ext_str1_x001A0DB8[] __asm__("D_00467F10");
extern char ext_str2_x001A0DB8[] __asm__("D_00467F08");
extern char ext_str3_x001A0DB8[] __asm__("D_00467EF8");
void func_001A0DB8_x001A0DB8(char *out, int unused, int *flags) __asm__("func_001A0DB8");
/* SUD_MakePicUsrDat: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001A0DB8_x001A0DB8(char *out, int unused, int *flags) {
    char number[16];
    char *field;
    strncpy_x001A0DB8(out, ext_str3_x001A0DB8, 8);
    sprintf_x001A0DB8(number, ext_str2_x001A0DB8, 19);
    field = out + 16;
    strcat_x001A0DB8(out, number);
    strncpy_x001A0DB8(field, ext_str1_x001A0DB8, 2);
    SUD_SetFmtTypeToBuf_x001A0DB8(field, flags);
    strcat_x001A0DB8(field, ext_str0_x001A0DB8);
}
typedef unsigned int size_t_x001A0E48;
extern void qsort_x001A0E48(void *, size_t_x001A0E48, size_t_x001A0E48, int (*)(const void *, const void *)) __asm__("qsort");
char *strncpy_x001A0E48(char *, const char *, size_t_x001A0E48) __asm__("func_00128040");
typedef struct SudFlagChars_x001A0E48 {
    char *s[2];
} SudFlagChars_x001A0E48;
void func_001A0E48_x001A0E48(char *dst, int *flags) __asm__("func_001A0E48");
/* SUD_SetFmtTypeToBuf: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001A0E48_x001A0E48(char *dst, int *flags) {
    SudFlagChars_x001A0E48 a = {{"A", "D"}};
    SudFlagChars_x001A0E48 b = {{"N", "C"}};
    SudFlagChars_x001A0E48 c = {{"P", "I"}};
    strncpy_x001A0E48(dst + 2, a.s[flags[0]], 1);
    strncpy_x001A0E48(dst + 3, b.s[flags[1]], 1);
    strncpy_x001A0E48(dst + 4, c.s[flags[2]], 1);
}
__asm__("# rebind func_001A0E48 0x001A0E48");
int atoi_x001A0F28(const char *) __asm__("func_001221D8");
typedef struct SudChars2_x001A0F28 {
    char c[2];
} SudChars2_x001A0F28;
unsigned int func_001A0F28_x001A0F28(char *header, int index) __asm__("func_001A0F28");
/* SUD_AnalyVersion: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
unsigned int func_001A0F28_x001A0F28(char *header, int index) {
    SudChars2_x001A0F28 digits;
    if (header == 0 || index < 0) {
        return 0;
    }
    digits = *(SudChars2_x001A0F28 *)(header + 16);
    return atoi_x001A0F28(digits.c);
}
s32 func_001A0F70(s32 arg0, s32 arg1) {
    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    return func_00127E88(arg0 + 0x12, &D_00467F28, 1) == 0;
}
s32 func_001A0FB0(s32 arg0, s32 arg1) {
    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    return func_00127E88(arg0 + 0x13, &D_00467F40, 1) == 0;
}
s32 func_00127E88_x001A0FF0(s32, s32 *, s32) __asm__("func_00127E88");
s32 func_001A0F28_x001A0FF0() __asm__("func_001A0F28");
extern s32 D_00467F58_x001A0FF0 __asm__("D_00467F58");
s32 func_001A0FF0_x001A0FF0(s32 arg0, s32 arg1) __asm__("func_001A0FF0");
s32 func_001A0FF0_x001A0FF0(s32 arg0, s32 arg1) {
    s32 var_v0;

    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    var_v0 = func_001A0F28_x001A0FF0(arg0, arg1);
    if (var_v0 != 0) {
        var_v0 = func_00127E88_x001A0FF0(arg0 + 0x14, &D_00467F58_x001A0FF0, 1) == 0;
    }
    return var_v0;
}
typedef unsigned int size_t_x001A1050;
int strncmp_x001A1050(const char *, const char *, size_t_x001A1050) __asm__("func_00127E88");
unsigned int SUD_AnalyVersion_x001A1050(char *header, int index) __asm__("func_001A0F28");
unsigned int SUD_AnalyVersion_x001A1050(char *header, int index) __asm__("func_001A0F28");
extern char ext_str0_x001A1050[] __asm__("D_00467F58");
extern char ext_str1_x001A1050[] __asm__("D_00467F50");
int func_001A1050_x001A1050(char *header, int index) __asm__("func_001A1050");
/* FUN_002b5400: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001A1050_x001A1050(char *header, int index) {
    char *field;
    int kind;
    if (header == 0 || index < 0) {
        return 0;
    }
    if (SUD_AnalyVersion_x001A1050(header, index) < 2) {
        return 0;
    }
    field = header + 21;
    if (strncmp_x001A1050(field, ext_str1_x001A1050, 1) == 0) {
        kind = 1;
    } else {
        kind = strncmp_x001A1050(field, ext_str0_x001A1050, 1) != 0 ? 0 : 2;
    }
    return kind;
}
typedef unsigned int size_t_x001A10E0;
int strncmp_x001A10E0(const char *, const char *, size_t_x001A10E0) __asm__("func_00127E88");
unsigned int SUD_AnalyVersion_x001A10E0(char *header, int index) __asm__("func_001A0F28");
unsigned int SUD_AnalyVersion_x001A10E0(char *header, int index) __asm__("func_001A0F28");
extern char ext_str0_x001A10E0[] __asm__("D_00467F20");
int func_001A10E0_x001A10E0(char *header, int index) __asm__("func_001A10E0");
/* FUN_002b5490: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001A10E0_x001A10E0(char *header, int index) {
    if (header == 0 || index < 0) {
        return 0;
    }
    if (SUD_AnalyVersion_x001A10E0(header, index) < 2) {
        return 0;
    }
    return strncmp_x001A10E0(header + 22, ext_str0_x001A10E0, 1) != 0;
}
s32 func_001A1148(s32 arg0, s32 arg1) {
    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    if (func_001A0F28() >= 2U) {
        return func_001A1348(arg0, arg1, 0x17);
    }
    return 0;
}
s32 func_001A11C8(s32 arg0, s32 arg1) {
    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    if (func_001A0F28() >= 2U) {
        return func_001A1348(arg0, arg1, 0x1A);
    }
    return 0;
}
s32 func_001A1248(s32 arg0, s32 arg1) {
    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    if (func_001A0F28() >= 2U) {
        return func_001A1348(arg0, arg1, 0x1D);
    }
    return 0;
}
s32 func_001A12C8(s32 arg0, s32 arg1) {
    if ((arg0 == 0) || (arg1 < 0)) {
        return 0;
    }
    if (func_001A0F28() >= 2U) {
        return func_001A1348(arg0, arg1, 0x20);
    }
    return 0;
}
typedef struct SudChars3_x001A1348 {
    char c[3];
} SudChars3_x001A1348;
unsigned long FUN_002b5758_x001A1348(char *text, char **end, int radix) __asm__("func_001A13A8");
unsigned long FUN_002b5758_x001A1348(char *text, char **end, int radix) __asm__("func_001A13A8");
int func_001A1348_x001A1348(char *base, int index, int offset) __asm__("func_001A1348");
/* FUN_002b56f8: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001A1348_x001A1348(char *base, int index, int offset) {
    SudChars3_x001A1348 digits;
    char *end;
    if (base == 0 || index < 0) {
        return 0;
    }
    digits = *(SudChars3_x001A1348 *)(base + offset);
    return FUN_002b5758_x001A1348(digits.c, &end, 16);
}
void func_001A13A8(void) {
    func_00129688();
}
s32 func_001A1488_x001A13C0(s32) __asm__("func_001A1488");
s32 memcmp_x001A13C0(s32, s32 *, s32) __asm__("memcmp");
extern s32 D_00467EF8_x001A13C0 __asm__("D_00467EF8");
extern s32 D_00467F68_x001A13C0 __asm__("D_00467F68");
void func_001A13C0_x001A13C0(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) __asm__("func_001A13C0");
void func_001A13C0_x001A13C0(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3)
{
  s32 var_s1;
  s32 var_s0;
  var_s0 = arg0;
  *arg3 = 0;
  *arg2 = 0;
  if (((var_s0 != 0) && (var_s1 = arg1 > 0)) && (arg1 > 0))
  {
    var_s1 = arg1;
    do
    {
      if ((memcmp_x001A13C0(var_s0, &D_00467F68_x001A13C0, 1) == 0) && (memcmp_x001A13C0(var_s0, &D_00467EF8_x001A13C0, 8) == 0))
      {
        *arg2 = var_s0;
        arg1++;
        arg1--;
        *arg3 = func_001A1488_x001A13C0(var_s0);
      }
      var_s1 = var_s1 - 1;
      var_s0 += 1;
    }
    while (var_s1 != 0);
  }
}
s32 func_001A1488_x001A1488(s32 arg0) __asm__("func_001A1488");
s32 func_001A1488_x001A1488(s32 arg0) {
    return (arg0 == 0) ? 0 : 0x23;
}
/* padding for ee-gcc (scripts/func_insert.py, moved_pad) */
extern int b3m03b81_000000;
typedef struct { s64 d; s16 h; s16 pad[3]; } SfxQ_x001A1498;
extern volatile s32 D_00427334_x001A1498 __asm__("D_00427334");
extern s32 D_00427338_x001A1498 __asm__("D_00427338");
extern s32 D_0042733C_x001A1498 __asm__("D_0042733C");
extern volatile u32 *D_00467F70_x001A1498[] __asm__("D_00467F70");
extern volatile s32 *D_00467F80_x001A1498[] __asm__("D_00467F80");
extern volatile SfxQ_x001A1498 D_00492A78_x001A1498 __asm__("D_00492A78");
extern volatile SfxQ_x001A1498 D_00492A88_x001A1498 __asm__("D_00492A88");
extern volatile SfxQ_x001A1498 *volatile D_00492A98_x001A1498 __asm__("D_00492A98");
extern volatile s32 D_00492A9C_x001A1498 __asm__("D_00492A9C");
void func_001A18C8_x001A1498(s32) __asm__("func_001A18C8");
void func_001A1498_x001A1498(s32 a0) __asm__("func_001A1498");
void func_001A1498_x001A1498(s32 a0)
{
    volatile u32 *e;
    u32 v;

    D_00427334_x001A1498++;
    if (D_00427334_x001A1498 >= 2 && D_00427338_x001A1498 == a0) return;
    D_00427338_x001A1498 = a0;
    if (a0 == -1) {
        func_001A18C8_x001A1498(1);
        return;
    }
    func_001A18C8_x001A1498(0x8CA00);
    D_0042733C_x001A1498 = v = *(e = D_00467F70_x001A1498[a0]);
    if ((v & 0xC7) != 0x82) {
        *D_00467F80_x001A1498[a0] = 0;
        *e = 0x82;
    }
    D_00492A78_x001A1498.h = *D_00467F80_x001A1498[a0];
    D_00492A78_x001A1498.d = 0;
    D_00492A88_x001A1498 = D_00492A78_x001A1498;
    D_00492A98_x001A1498 = &D_00492A78_x001A1498;
    D_00492A9C_x001A1498 = 0;
}
extern volatile int D_003EEA78_x001A15C0 __asm__("D_00427334");
extern int D_003EEA7C_x001A15C0 __asm__("D_00427338");
extern unsigned int D_003EEA80_x001A15C0 __asm__("D_0042733C");
extern volatile unsigned int *D_0045A260_x001A15C0[] __asm__("D_00467F70");
void func_001A15C0_x001A15C0(void) __asm__("func_001A15C0");
/* IntrNest_leave: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0032afb0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001A15C0_x001A15C0(void)
{
    D_003EEA78_x001A15C0--;
    if (D_003EEA78_x001A15C0 == 0 && D_003EEA7C_x001A15C0 != -1 && (D_003EEA80_x001A15C0 & 0xC7) != 0x82)
        *D_0045A260_x001A15C0[D_003EEA7C_x001A15C0] = D_003EEA80_x001A15C0 ^ 0xC00;
    if (D_003EEA78_x001A15C0 < 0)
        D_003EEA78_x001A15C0 = 0;
}
typedef unsigned int size_t_x001A1630;
extern void qsort_x001A1630(void *, size_t_x001A1630, size_t_x001A1630, int (*)(const void *, const void *)) __asm__("qsort");
typedef struct SudClock_x001A1630 {
    long long base;
    unsigned short last;
} SudClock_x001A1630;
extern volatile int utytmr_init_cnt_x001A1630 __asm__("D_00427334");
extern int utytmr_ch_x001A1630 __asm__("D_00427338");
extern volatile SudClock_x001A1630 DAT_005856b0_x001A1630 __asm__("D_00492A78");
extern volatile SudClock_x001A1630 DAT_005856c0_x001A1630 __asm__("D_00492A88");
extern volatile SudClock_x001A1630 *volatile DAT_005856d0_x001A1630 __asm__("D_00492A98");
extern volatile int DAT_005856d4_x001A1630 __asm__("D_00492A9C");
extern volatile unsigned int *const sud_tmr_count_x001A1630[] __asm__("D_00467F80");
long long func_001A1630_x001A1630(void) __asm__("func_001A1630");
/* UTY_GetTmr: from https://github.com/crashbashash/DW4_Decomp (src/cri/sud.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
long long func_001A1630_x001A1630(void) {
    unsigned int count;
    long long now;
    if (utytmr_init_cnt_x001A1630 <= 0 || utytmr_ch_x001A1630 == -1) {
        return 0;
    }
    DAT_005856d4_x001A1630++;
    if (DAT_005856d4_x001A1630 == 1) {
        DAT_005856c0_x001A1630 = DAT_005856b0_x001A1630;
        DAT_005856d0_x001A1630 = &DAT_005856c0_x001A1630;
        count = *sud_tmr_count_x001A1630[utytmr_ch_x001A1630] & 0xFFFF;
        if (count < DAT_005856b0_x001A1630.last) {
            DAT_005856b0_x001A1630.base += 0x10000;
        }
        DAT_005856b0_x001A1630.last = count;
        now = count + DAT_005856b0_x001A1630.base;
        DAT_005856d0_x001A1630 = &DAT_005856b0_x001A1630;
    } else {
        count = *sud_tmr_count_x001A1630[utytmr_ch_x001A1630] & 0xFFFF;
        now = count + DAT_005856d0_x001A1630->base;
        if (count < DAT_005856d0_x001A1630->last) {
            now += 0x10000;
        }
    }
    DAT_005856d4_x001A1630--;
    return now;
}
s32 func_001A1758(void) {
    func_001A1630();
    return D_00427320 == 1;
}
void func_001A1788(void) {
    func_001A18C8();
}
s64 func_001A17A0(void) {
    return D_00427320;
}
s32 func_0011F758_x001A17B0() __asm__("func_0011F758");
extern s64 D_00427320_x001A17B0 __asm__("D_00427320");
void func_001A17B0_x001A17B0(s64 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_001A17B0");
void func_001A17B0_x001A17B0(s64 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0011F758_x001A17B0(arg0 * 0xF4240, D_00427320_x001A17B0, arg2, arg3);
    __asm__ __volatile__("");
}
s32 func_0011F758_x001A17F0() __asm__("func_0011F758");
extern s64 D_00427320_x001A17F0 __asm__("D_00427320");
void func_001A17F0_x001A17F0(s64 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_001A17F0");
void func_001A17F0_x001A17F0(s64 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0011F758_x001A17F0(arg0 * 0x3E8, D_00427320_x001A17F0, arg2, arg3);
    __asm__ __volatile__("");
}
s32 func_0011F758_x001A1828() __asm__("func_0011F758");
extern s64 D_00427320_x001A1828 __asm__("D_00427320");
void func_001A1828_x001A1828(s32 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_001A1828");
void func_001A1828_x001A1828(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0011F758_x001A1828(arg0, D_00427320_x001A1828, arg2, arg3);
    __asm__ __volatile__("");
}
f32 func_001A1850(void) {
    return func_00121010() * D_00427330;
}
f32 func_001A1878(void) {
    return func_00121010() * D_0042732C;
}
f32 func_001A18A0(void) {
    return func_00121010() * D_00427328;
}
extern long D_00427320_x001A18C8 __asm__("D_00427320");
extern float D_00427328_x001A18C8 __asm__("D_00427328");
extern float D_0042732C_x001A18C8 __asm__("D_0042732C");
extern float D_00427330_x001A18C8 __asm__("D_00427330");
void func_001A18C8_x001A18C8(long a0) __asm__("func_001A18C8");
void func_001A18C8_x001A18C8(long a0)
{
    D_00427320_x001A18C8 = a0;
    D_00427328_x001A18C8 = 1.0f / a0;
    D_0042732C_x001A18C8 = 1000.0f / a0;
    D_00427330_x001A18C8 = 1000000.0f / a0;
}
void func_001A1970_x001A1970(u8 *arg0) __asm__("func_001A1970");
void func_001A1970_x001A1970(u8 *arg0)
{
  unsigned long new_var2;
  u8 *new_var;
  unsigned int new_var3;
  new_var2 = 1U;
  *((s32 *) (((u8 *) arg0) + 0x18)) = 0;
  new_var = (u8 *) arg0;
  *((u64 *) (new_var + 8)) = (u64) ((-new_var2) >> 1);
  new_var3 = 0x10;
  *((s64 *) (new_var + 0)) = 0;
 do { } while (0);
  *((s64 *) (((u8 *) arg0) + new_var3)) = 0;
}
typedef struct { long long current; long long max; long long min; int count; } SftmrTsum_x001A1990;
void func_001A1990_x001A1990(SftmrTsum_x001A1990 *tsum, long long delta) __asm__("func_001A1990");
void func_001A1990_x001A1990(SftmrTsum_x001A1990 *tsum, long long delta)
{
    tsum->current += delta;
    tsum->max = (delta < tsum->max) ? delta : tsum->max;
    tsum->min = (delta > tsum->min) ? delta : tsum->min;
    tsum->count++;
}
