#include "common.h"

s32 func_00194AD0();                                /* extern */

s32 func_0017E968();                            /* extern */

s32 memcpy(s32, s32, s32);                      /* extern */

s32 func_00190138(s32);                             /* extern */
s32 func_00190180(s32);                             /* extern */
s32 func_00194778();                                /* extern */

s32 func_0018FF20();                            /* extern */

s32 func_0017E7B8();                            /* extern */

s32 func_0017B3D0();                            /* extern */

s32 func_0018B730(void *, s32);                     /* extern */
s32 func_0018EE10();                                /* extern */
s32 func_0018EE80(void *, s32);             /* extern */
s32 func_0018EEE0(void *, s32);                     /* extern */

s32 func_0018DC00(void *);                          /* extern */
s32 func_0018EAA8();                                /* extern */
s32 func_0018ED30(void *);                      /* extern */

s32 func_0018DB90();                            /* extern */

s32 func_0017AFA8();                            /* extern */

s32 func_0016FF58();                            /* extern */

s32 func_0016FF40();                            /* extern */

s32 func_001966A8();                            /* extern */

s32 func_0016E0D0();                            /* extern */

s32 func_0016E078();                            /* extern */

s32 func_0018D638();                            /* extern */

extern s32 D_004673D0;

s32 func_0018CD70(s32);                         /* extern */
s32 func_0018D390(s32);                         /* extern */

s32 func_0018CBE8(s32, s32);                    /* extern */
s32 func_0018CD20();                                /* extern */

s32 func_0018CA58();                                /* extern */

s32 func_0019D590();                            /* extern */

s32 func_0019D500(s32, s32 *);          /* extern */
extern s32 D_0048E088;

s32 func_0018D650(s32, s32, s32);       /* extern */
s32 func_0018D870();                                /* extern */
s32 func_00199818(s32, s32, s32);       /* extern */

s32 func_00189EC0();                            /* extern */
s32 func_00189F30(s32);                         /* extern */

s32 ADXT_Stop(s32);                             /* extern */

s32 ADXT_Destroy();                             /* extern */

extern s32 D_00426AE0;

s32 ADXT_Create(s32, s32, s32);                     /* extern */
s32 func_0015F5B0(s32, s32);                /* extern */
s32 func_00189588();                                /* extern */
s32 func_00197EB8();                                /* extern */

s32 ADXT_GetStat(s32);                              /* extern */

s32 func_0015FCD8(s32);                         /* extern */

s32 func_001884E8();                            /* extern */

s32 func_001563B0();                            /* extern */
s32 func_00158B08();                            /* extern */

s32 func_00156210();                            /* extern */
s32 func_00158AF0();                            /* extern */
s32 func_00179018(s32 *, s32, s32); /* extern */
extern s32 D_0048CFD0;

s32 ADXT_GetOutVol(s32);                        /* extern */

s32 ADXT_SetOutVol(s32);                        /* extern */

s32 ADXT_GetOutPan(s32);                        /* extern */

s32 ADXT_SetOutPan(s32);                        /* extern */

s32 func_0015CC78(s32);                         /* extern */
s32 func_0015CE38();                            /* extern */

s32 func_0015CC38(s32);                         /* extern */
s32 func_0015CDD0();                            /* extern */

s32 func_0015CB30();                            /* extern */

s32 func_0015D678();                            /* extern */

s32 func_0015D488();                            /* extern */

s32 func_0015D4A8();                            /* extern */

s32 func_0015CCD0();                                /* extern */

s32 func_0015CD48();                            /* extern */

s32 func_001835A8();                            /* extern */
s32 func_001835C0();                            /* extern */
s32 func_00187180();                            /* extern */
s32 func_001871F0(s32);                         /* extern */

s32 func_00187D00();                                /* extern */

void *func_00181FA8();                              /* extern */

void func_00187D90(u8 *arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = func_00181FA8();
    *(s32 *)((u8 *)arg0 + 0x60) = arg1;
    *(s32 *)((u8 *)temp_v0 + 0x24) = arg1;
}
s32 func_00187DC8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x60);
}
s32 func_00187DD0(void) {
    return *(s32 *)((u8 *)(func_00181FA8()) + 0x24);
}
s32 func_00187DF0(void) {
    return func_00187D00() != 1;
}
void func_00187E18(s32 arg0) {
    func_001835A8();
    func_00187D90(arg0, 1);
    func_00187180();
    func_00187D90(arg0, 0);
    func_001835C0();
    func_001871F0(arg0);
}
s32 func_00187E68(void) {
    return 0;
}
s32 func_00187E70(void) {
    return 0;
}
s32 func_00187E78(void) {
    return 0;
}
s32 func_00187E80(void) {
    return 0;
}
typedef signed int Sint32_x00187E88;
typedef struct ADXSTM_OBJ *ADXSTM_x00187E88;
extern Sint32_x00187E88 func_004d2c98_x00187E88(ADXSTM_x00187E88 stm, Sint32_x00187E88 nsct) __asm__("func_0015D4B8");
Sint32_x00187E88 func_00187E88_x00187E88(ADXSTM_x00187E88 stm, Sint32_x00187E88 nsct) __asm__("func_00187E88");
/* func_00511f98: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/mwstm_11f98.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00187E88 func_00187E88_x00187E88(ADXSTM_x00187E88 stm, Sint32_x00187E88 nsct)
{
        if (stm == 0)
                return 0;
        func_004d2c98_x00187E88(stm, nsct);
        return 0;
}
s32 func_00187EB0(void) {
    return 0;
}
s32 fn_8004AE94_x00187EB8() __asm__("fn_8004AE94");
s32 func_0015CCF8_x00187EB8() __asm__("func_0015CCF8");
s32 func_0015D4D0_x00187EB8() __asm__("func_0015D4D0");
s32 func_00187EB8_x00187EB8(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00187EB8");
s32 func_00187EB8_x00187EB8(s32 arg0, s32 arg1, s32 arg2)
{
  s32 new_var;
  s32 temp_a1;
  s32 temp_v0;
  if (arg2 != 0)
  {
    goto block_3;
  }
  fn_8004AE94_x00187EB8(arg0, arg1);
  goto block_9;
  block_3:
  if (arg2 == 1)
  {
    goto block_5;
  }

  goto block_7;
  block_5:
  fn_8004AE94_x00187EB8(arg0, func_0015CCF8_x00187EB8() + arg1);

  goto block_9;
  block_7:
  if (arg2 != 2)
  {
    goto block_9;
  }

  temp_v0 = func_0015D4D0_x00187EB8();
  temp_a1 = temp_v0 + 0x7FF;
  new_var = (s32) ((temp_a1 < 0) ? (temp_v0 + 0xFFE) : (temp_a1));
  fn_8004AE94_x00187EB8(arg0, (new_var >> 0xB) + arg1);
  block_9:
  return 0;

}
s32 func_00187F58(void) {
    func_0015CD48();
    return 0;
}
s32 func_00187F78(void) {
    return func_0015CCD0() == 4;
}
void func_00187FA0(void) {

}
void func_00187FA8(s32 arg0) {
    if (arg0 != 0) {
        func_0015D4A8();
    }
}
void func_00187FD0(void) {
    func_0015D488();
}
s32 func_0015D4D0_x00187FE8() __asm__("func_0015D4D0");
void func_00187FE8_x00187FE8(s32 a0, s32 *a1) __asm__("func_00187FE8");
void func_00187FE8_x00187FE8(s32 a0, s32 *a1) {
    *a1 = func_0015D4D0_x00187FE8();
}
void func_00188010(void) {
    func_0015D678();
}
s32 func_0015CAE8_x00188028(s32, s32) __asm__("func_0015CAE8");
void func_00188028_x00188028(s32 a0) __asm__("func_00188028");
void func_00188028_x00188028(s32 a0) {
    func_0015CAE8_x00188028(a0, 0);
}
void func_00188040(void) {
    func_0015CB30();
}
typedef signed int Sint32_x00188058;
typedef char Char8_x00188058;
typedef struct ADXSTM_OBJ *ADXSTM_x00188058;
extern void func_004d1f00_x00188058(ADXSTM_x00188058 stm) __asm__("func_0015CC38");
extern void func_004d1d70_x00188058(ADXSTM_x00188058 stm, const Char8_x00188058 *fname, void *dir, Sint32_x00188058 ofst, Sint32_x00188058 nsct) __asm__("func_0015CB88");
extern void func_004d23a8_x00188058(ADXSTM_x00188058 stm, Sint32_x00188058 nsct) __asm__("func_0015CE98");
void func_00188058_x00188058(ADXSTM_x00188058 stm, const Char8_x00188058 *fname) __asm__("func_00188058");
/* func_00512168: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/mwstm_12150.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_00188058_x00188058(ADXSTM_x00188058 stm, const Char8_x00188058 *fname)
{
        func_004d1f00_x00188058(stm);
        func_004d1d70_x00188058(stm, fname, 0, 0, 0xFFFFF);
        func_004d23a8_x00188058(stm, 0xFFFFF);
}
typedef unsigned int u32_x001880B0;
extern u32_x001880B0 fn_8004AC04_x001880B0(u32_x001880B0, u32_x001880B0) __asm__("func_0015CE98");
extern u32_x001880B0 fn_8004B180_x001880B0(u32_x001880B0, u32_x001880B0, u32_x001880B0, u32_x001880B0, u32_x001880B0) __asm__("func_0015CB88");
extern void fn_8004B0EC_x001880B0(void *) __asm__("func_0015CC38");
void func_001880B0_x001880B0(u32_x001880B0 arg0, u32_x001880B0 arg1, u32_x001880B0 arg2, u32_x001880B0 arg3, u32_x001880B0 arg4) __asm__("func_001880B0");
/* fn_12_34F04: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_34F04.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_001880B0_x001880B0(u32_x001880B0 arg0, u32_x001880B0 arg1, u32_x001880B0 arg2, u32_x001880B0 arg3, u32_x001880B0 arg4) {
    fn_8004B0EC_x001880B0((void *)arg0);
    fn_8004B180_x001880B0(arg0, arg1, arg2, arg3, arg4);
    fn_8004AC04_x001880B0(arg0, arg4);
}
void func_00188128(void) {
    func_0015CD48();
}
void func_00188140(s32 arg0) {
    func_0015CDD0();
    func_0015CC38(arg0);
}
void func_00188168(s32 arg0) {
    func_0015CE38();
    func_0015CC78(arg0);
}
void func_00188190(void) {
    func_0015CCD0();
}
typedef unsigned int size_t_x001881A8;
int strncmp_x001881A8(const char *, const char *, size_t_x001881A8) __asm__("func_00127E88");
extern char ext_str0_x001881A8[] __asm__("D_00467238");
int func_001881A8_x001881A8(unsigned char *header, int length, int *headerSize) __asm__("func_001881A8");
/* SFADXT_IsHeader: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfadx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001881A8_x001881A8(unsigned char *header, int length, int *headerSize) {
    *headerSize = 288;
    if (length < 288) {
        return 0;
    }
    if (header[0] != 0x80) {
        return 0;
    }
    if (header[1] != 0) {
        return 0;
    }
    return strncmp_x001881A8(header + 282, ext_str0_x001881A8, 6) == 0;
}
int func_00188208_x00188208(unsigned char *header, int length, int *headerSize) __asm__("func_00188208");
/* SFADXT_IsEndcode: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfadx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00188208_x00188208(unsigned char *header, int length, int *headerSize) {
    *headerSize = 18;
    if (length < 18) {
        return 0;
    }
    if (header[0] != 0x80) {
        return 0;
    }
    return header[1] == 1;
}
void func_00188248(u8 *arg0) {
    ADXT_SetOutPan(**(s32 **)((u8 *)arg0 + 0x1CB4));
}
void func_00188268(u8 *arg0) {
    ADXT_GetOutPan(**(s32 **)((u8 *)arg0 + 0x1CB4));
}
void func_00188288(u8 *arg0) {
    ADXT_SetOutVol(**(s32 **)((u8 *)arg0 + 0x1CB4));
}
void func_001882A8(u8 *arg0) {
    ADXT_GetOutVol(**(s32 **)((u8 *)arg0 + 0x1CB4));
}
s32 func_00121F28_x001882C8(s32) __asm__("func_00121F28");
s32 func_0011F638_x001882C8(s32) __asm__("func_0011F638");
float func_001220B0_x001882C8(s32) __asm__("func_001220B0");
void func_0015F9E8_x001882C8(s32, s32, s32) __asm__("func_0015F9E8");
void func_001882C8_x001882C8(u8 *a0, s32 a1) __asm__("func_001882C8");
void func_001882C8_x001882C8(u8 *a0, s32 a1)
{
    s32 h;
    float f;
    s32 hi;

    h = **(s32 **)(a0 + 0x1CB4);
    if (h) {
        f = (func_001220B0_x001882C8(func_0011F638_x001882C8(func_00121F28_x001882C8(a1))) - 6.907755f) * 1731.2341f;
        hi = (s32)(f * 0.01f);
        func_0015F9E8_x001882C8(h, hi, (s32)f - hi * 100);
    }
}
typedef unsigned int Uint32_x00188380;
typedef signed int Sint32_x00188380;
typedef struct {
        Sint32_x00188380 bsize;
        Sint32_x00188380 xsize;
        void *buf;
        Sint32_x00188380 maxnch;
        Sint32_x00188380 x10;
        Sint32_x00188380 worksize;
        void *work;
} SFADXT_PARA_x00188380;
extern SFADXT_PARA_x00188380 sfadxt_para_x00188380 __asm__("D_0048CFD0");
void func_00188380_x00188380(SFADXT_PARA_x00188380 *para) __asm__("func_00188380");
/* SFD_SetAdxtPara: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_adxt.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_00188380_x00188380(SFADXT_PARA_x00188380 *para)
{
        sfadxt_para_x00188380.bsize = para->bsize;
        sfadxt_para_x00188380.xsize = para->xsize;
        sfadxt_para_x00188380.buf = (void *)(((Uint32_x00188380)para->buf + 31) & ~31);
        sfadxt_para_x00188380.maxnch = para->maxnch;
        sfadxt_para_x00188380.x10 = para->x10;
        sfadxt_para_x00188380.worksize = para->worksize;
        sfadxt_para_x00188380.work = (void *)(((Uint32_x00188380)para->work + 31) & ~31);
}
s32 func_001883D8(void) {
    func_00156210();
    func_00158AF0();
    func_00179018(&D_0048CFD0, 0, 7);
    return 0;
}
s32 func_00188418(void) {
    func_00158B08();
    func_001563B0();
    return 0;
}
s32 ADXT_GetNumSmpl_x00188440(s32) __asm__("ADXT_GetNumSmpl");
s32 ADXT_GetSfreq_x00188440(s32) __asm__("ADXT_GetSfreq");
void func_0018B970_x00188440(u8 *, s32, s32) __asm__("func_0018B970");
void func_00188440_x00188440(u8 *a0) __asm__("func_00188440");
void func_00188440_x00188440(u8 *a0)
{
    u8 *q = a0 + 0xCC0;
    s32 h = **(s32 **)(a0 + 0x1CB4);
    s32 n;
    s32 fr;
    if (*(s32 *)(q + 0x1E8) != *(s32 *)(q + 0x1EC)) {
        return;
    }
    n = ADXT_GetNumSmpl_x00188440(h);
    fr = ADXT_GetSfreq_x00188440(h);
    if (n <= 0 || fr <= 0) {
        return;
    }
    func_0018B970_x00188440(a0, n, fr);
}
void func_001884D0(void) {
    func_001884E8();
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001884E8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188578);
typedef struct SfdSj_x001885F0 SfdSj_x001885F0;
typedef struct SfdSjChunk_x001885F0 {
    char *data;
    int len;
} SfdSjChunk_x001885F0;
typedef struct SfdSjVtbl_x001885F0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001885F0 *sj);
    int (*getUuid)(SfdSj_x001885F0 *sj);
    void (*reset)(SfdSj_x001885F0 *sj);
    void (*getChunk)(SfdSj_x001885F0 *sj, int id, int n, SfdSjChunk_x001885F0 *ck);
    void (*ungetChunk)(SfdSj_x001885F0 *sj, int id, SfdSjChunk_x001885F0 *ck);
    void (*putChunk)(SfdSj_x001885F0 *sj, int id, SfdSjChunk_x001885F0 *ck);
    int (*getNumData)(SfdSj_x001885F0 *sj, int id);
} SfdSjVtbl_x001885F0;
struct SfdSj_x001885F0 {
    SfdSjVtbl_x001885F0 *vtbl;
};
struct SfdSj_x001885F0;
typedef struct AdxPdObj_x001885F0 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x001885F0;
typedef struct AdxDecPara_x001885F0 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x001885F0;
struct Pl2Enc_x001885F0;
typedef struct AdxbObj_x001885F0 AdxbObj_x001885F0;
typedef short *(*AdxbGetWrFunc_x001885F0)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x001885F0)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x001885F0 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x001885F0 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x001885F0 dp;
    AdxbGetWrFunc_x001885F0 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x001885F0 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x001885F0 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x001885F0(AdxbObj_x001885F0 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x001885F0 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x001885F0 *adxb;
    SfdSj_x001885F0 *sji;
    SfdSj_x001885F0 *sjo[2];
    SfdSjChunk_x001885F0 cki;
    SfdSjChunk_x001885F0 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x001885F0;
extern void ADXSJD_EntryFltFunc_x001885F0(AdxSjdObj_x001885F0 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x001885F0(AdxSjdObj_x001885F0 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x001885F0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x001885F0)(CvFsErrFn_x001885F0 func, void *obj);
typedef int (*CvFsPathFn_x001885F0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x001885F0)(void);
typedef int (*CvFsOpenFn_x001885F0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x001885F0)(int fd);
typedef int (*CvFsFdIntFn_x001885F0)(int fd);
typedef int (*CvFsSeekFn_x001885F0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x001885F0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x001885F0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x001885F0)(void);
typedef int (*CvFsLoadDirInfoFn_x001885F0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x001885F0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x001885F0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x001885F0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x001885F0 entry_err_func;
    CvFsPathFn_x001885F0 get_file_size;
    CvFsGetFreeSizeFn_x001885F0 get_free_size;
    CvFsOpenFn_x001885F0 open;
    CvFsFdFn_x001885F0 close;
    CvFsSeekFn_x001885F0 seek;
    CvFsFdIntFn_x001885F0 tell;
    CvFsXferFn_x001885F0 req_rd;
    CvFsXferFn_x001885F0 req_wr;
    CvFsFdFn_x001885F0 stop_tr;
    CvFsFdIntFn_x001885F0 get_stat;
    CvFsFdIntFn_x001885F0 get_sct_len;
    CvFsSetSctLenFn_x001885F0 set_sct_len;
    CvFsFdIntFn_x001885F0 get_num_tr;
    CvFsPathFn_x001885F0 change_dir;
    CvFsPathFn_x001885F0 is_exist_file;
    CvFsGetNumFilesFn_x001885F0 get_num_files;
    CvFsLoadDirInfoFn_x001885F0 load_dir_info;
    CvFsFdIntFn_x001885F0 get_max_byte_rate;
    CvFsPathFn_x001885F0 make_dir;
    CvFsPathFn_x001885F0 remove_dir;
    CvFsPathFn_x001885F0 delete_file;
    CvFsGetFileSizeExFn_x001885F0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x001885F0 opt_fn2;
} CvFsVtbl_x001885F0;
typedef struct CvFsHandle_x001885F0 {
    CvFsVtbl_x001885F0 *vtbl;
    int fd;
} CvFsHandle_x001885F0;
extern CvFsVtbl_x001885F0 *addDevice_x001885F0(char *devname, CvFsVtbl_x001885F0 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x001885F0 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x001885F0 *sj;
    CvFsHandle_x001885F0 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x001885F0 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x001885F0;
extern void ADXSTM_EntryEosFunc_x001885F0(AdxStmObj_x001885F0 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
struct SfdSj_x001885F0;
typedef struct M2vErrInf_x001885F0 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x001885F0;
typedef struct Mpeg2Ext_x001885F0 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x001885F0;
typedef enum M2vFrameRate_x001885F0 {
    M2V_FRAME_RATE_FORBIDDEN_x001885F0 = 0
} M2vFrameRate_x001885F0;
typedef enum M2vPicType_x001885F0 {
    M2V_PICTYPE_I_x001885F0 = 1,
    M2V_PICTYPE_P_x001885F0 = 2,
    M2V_PICTYPE_B_x001885F0 = 3,
    M2V_PICTYPE_D_x001885F0 = 4
} M2vPicType_x001885F0;
typedef enum M2vPicStruct_x001885F0 {
    M2V_PICSTRUCT_TOP_FIELD_x001885F0 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x001885F0 = 2,
    M2V_PICSTRUCT_FRAME_x001885F0 = 3
} M2vPicStruct_x001885F0;
typedef enum M2vPicAtrF64_x001885F0 {
    M2V_PICATR_F64_0_x001885F0 = 0
} M2vPicAtrF64_x001885F0;
typedef struct M2vPicAtr_x001885F0 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x001885F0 frame_rate_code;
    int temporal_reference;
    M2vPicType_x001885F0 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x001885F0 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x001885F0 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x001885F0;
typedef void (*M2vUsrDatFn_x001885F0)(void *obj, int level);
typedef struct M2vUsrSj_x001885F0 {
    struct SfdSj_x001885F0 *sj;
    M2vUsrDatFn_x001885F0 fn;
    void *obj;
} M2vUsrSj_x001885F0;
typedef struct M2vPicUsr_x001885F0 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x001885F0;
typedef void (*M2vCondFn_x001885F0)();
typedef struct M2vObj_x001885F0 {
    int stat;
    M2vErrInf_x001885F0 err;
    M2vCondFn_x001885F0 cond[16];
    M2vPicAtr_x001885F0 picatr;
    char pad216[64];
    M2vUsrSj_x001885F0 usrsj[4];
    M2vPicUsr_x001885F0 picusr;
    char pad340[12];
    Mpeg2Ext_x001885F0 ext;
    char pad1656[8];
} M2vObj_x001885F0;
extern void M2V_SetErrFunc_x001885F0(M2vObj_x001885F0 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
void func_001885F0_x001885F0(SfdSj_x001885F0 *sj, int n, SfdSjChunk_x001885F0 *ck) __asm__("func_001885F0");
/* sfadxt_GetFreeChunk: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfadx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001885F0_x001885F0(SfdSj_x001885F0 *sj, int n, SfdSjChunk_x001885F0 *ck) {
    sj->vtbl->getChunk(sj, 0, n, ck);
}
typedef struct SfdSj_x00188620 SfdSj_x00188620;
typedef struct SfdSjChunk_x00188620 {
    char *data;
    int len;
} SfdSjChunk_x00188620;
typedef struct SfdSjVtbl_x00188620 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00188620 *sj);
    int (*getUuid)(SfdSj_x00188620 *sj);
    void (*reset)(SfdSj_x00188620 *sj);
    void (*getChunk)(SfdSj_x00188620 *sj, int id, int n, SfdSjChunk_x00188620 *ck);
    void (*ungetChunk)(SfdSj_x00188620 *sj, int id, SfdSjChunk_x00188620 *ck);
    void (*putChunk)(SfdSj_x00188620 *sj, int id, SfdSjChunk_x00188620 *ck);
    int (*getNumData)(SfdSj_x00188620 *sj, int id);
} SfdSjVtbl_x00188620;
struct SfdSj_x00188620 {
    SfdSjVtbl_x00188620 *vtbl;
};
void SJ_SplitChunk_x00188620(SfdSjChunk_x00188620 *ck, int nbyte, SfdSjChunk_x00188620 *head, SfdSjChunk_x00188620 *rest) __asm__("func_0016F050");
struct SfdSj_x00188620;
typedef struct AdxPdObj_x00188620 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x00188620;
typedef struct AdxDecPara_x00188620 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x00188620;
struct Pl2Enc_x00188620;
typedef struct AdxbObj_x00188620 AdxbObj_x00188620;
typedef short *(*AdxbGetWrFunc_x00188620)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00188620)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00188620 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00188620 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x00188620 dp;
    AdxbGetWrFunc_x00188620 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00188620 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x00188620 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00188620(AdxbObj_x00188620 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00188620 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00188620 *adxb;
    SfdSj_x00188620 *sji;
    SfdSj_x00188620 *sjo[2];
    SfdSjChunk_x00188620 cki;
    SfdSjChunk_x00188620 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x00188620;
extern void ADXSJD_EntryFltFunc_x00188620(AdxSjdObj_x00188620 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00188620(AdxSjdObj_x00188620 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00188620)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00188620)(CvFsErrFn_x00188620 func, void *obj);
typedef int (*CvFsPathFn_x00188620)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00188620)(void);
typedef int (*CvFsOpenFn_x00188620)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00188620)(int fd);
typedef int (*CvFsFdIntFn_x00188620)(int fd);
typedef int (*CvFsSeekFn_x00188620)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00188620)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00188620)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00188620)(void);
typedef int (*CvFsLoadDirInfoFn_x00188620)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00188620)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00188620)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00188620 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00188620 entry_err_func;
    CvFsPathFn_x00188620 get_file_size;
    CvFsGetFreeSizeFn_x00188620 get_free_size;
    CvFsOpenFn_x00188620 open;
    CvFsFdFn_x00188620 close;
    CvFsSeekFn_x00188620 seek;
    CvFsFdIntFn_x00188620 tell;
    CvFsXferFn_x00188620 req_rd;
    CvFsXferFn_x00188620 req_wr;
    CvFsFdFn_x00188620 stop_tr;
    CvFsFdIntFn_x00188620 get_stat;
    CvFsFdIntFn_x00188620 get_sct_len;
    CvFsSetSctLenFn_x00188620 set_sct_len;
    CvFsFdIntFn_x00188620 get_num_tr;
    CvFsPathFn_x00188620 change_dir;
    CvFsPathFn_x00188620 is_exist_file;
    CvFsGetNumFilesFn_x00188620 get_num_files;
    CvFsLoadDirInfoFn_x00188620 load_dir_info;
    CvFsFdIntFn_x00188620 get_max_byte_rate;
    CvFsPathFn_x00188620 make_dir;
    CvFsPathFn_x00188620 remove_dir;
    CvFsPathFn_x00188620 delete_file;
    CvFsGetFileSizeExFn_x00188620 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00188620 opt_fn2;
} CvFsVtbl_x00188620;
typedef struct CvFsHandle_x00188620 {
    CvFsVtbl_x00188620 *vtbl;
    int fd;
} CvFsHandle_x00188620;
extern CvFsVtbl_x00188620 *addDevice_x00188620(char *devname, CvFsVtbl_x00188620 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00188620 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00188620 *sj;
    CvFsHandle_x00188620 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00188620 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x00188620;
extern void ADXSTM_EntryEosFunc_x00188620(AdxStmObj_x00188620 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
struct SfdSj_x00188620;
typedef struct M2vErrInf_x00188620 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00188620;
typedef struct Mpeg2Ext_x00188620 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00188620;
typedef enum M2vFrameRate_x00188620 {
    M2V_FRAME_RATE_FORBIDDEN_x00188620 = 0
} M2vFrameRate_x00188620;
typedef enum M2vPicType_x00188620 {
    M2V_PICTYPE_I_x00188620 = 1,
    M2V_PICTYPE_P_x00188620 = 2,
    M2V_PICTYPE_B_x00188620 = 3,
    M2V_PICTYPE_D_x00188620 = 4
} M2vPicType_x00188620;
typedef enum M2vPicStruct_x00188620 {
    M2V_PICSTRUCT_TOP_FIELD_x00188620 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00188620 = 2,
    M2V_PICSTRUCT_FRAME_x00188620 = 3
} M2vPicStruct_x00188620;
typedef enum M2vPicAtrF64_x00188620 {
    M2V_PICATR_F64_0_x00188620 = 0
} M2vPicAtrF64_x00188620;
typedef struct M2vPicAtr_x00188620 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00188620 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00188620 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00188620 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00188620 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00188620;
typedef void (*M2vUsrDatFn_x00188620)(void *obj, int level);
typedef struct M2vUsrSj_x00188620 {
    struct SfdSj_x00188620 *sj;
    M2vUsrDatFn_x00188620 fn;
    void *obj;
} M2vUsrSj_x00188620;
typedef struct M2vPicUsr_x00188620 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00188620;
typedef void (*M2vCondFn_x00188620)();
typedef struct M2vObj_x00188620 {
    int stat;
    M2vErrInf_x00188620 err;
    M2vCondFn_x00188620 cond[16];
    M2vPicAtr_x00188620 picatr;
    char pad216[64];
    M2vUsrSj_x00188620 usrsj[4];
    M2vPicUsr_x00188620 picusr;
    char pad340[12];
    Mpeg2Ext_x00188620 ext;
    char pad1656[8];
} M2vObj_x00188620;
extern void M2V_SetErrFunc_x00188620(M2vObj_x00188620 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
void func_00188620_x00188620(SfdSj_x00188620 *sj, int len, SfdSjChunk_x00188620 *ck) __asm__("func_00188620");
/* sfadxt_PutDataChunk: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfadx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00188620_x00188620(SfdSj_x00188620 *sj, int len, SfdSjChunk_x00188620 *ck) {
    SfdSjChunk_x00188620 rest;
    if (len == 0) {
        sj->vtbl->ungetChunk(sj, 0, ck);
        return;
    }
    SJ_SplitChunk_x00188620(ck, len, ck, &rest);
    sj->vtbl->putChunk(sj, 1, ck);
    sj->vtbl->ungetChunk(sj, 0, &rest);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001886A8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188760);
typedef signed char Sint8_x001889C0;
typedef signed int Sint32_x001889C0;
Sint32_x001889C0 ADXT_IsEndcode_x001889C0(Sint8_x001889C0 *adr, Sint32_x001889C0 siz, Sint32_x001889C0 *endsiz) __asm__("func_0015FC98");
Sint32_x001889C0 func_001889C0_x001889C0(Sint8_x001889C0 *buf, Sint32_x001889C0 size, Sint32_x001889C0 *pFound) __asm__("func_001889C0");
/* sfadxt_AdjDiscard: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003358e8.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x001889C0 func_001889C0_x001889C0(Sint8_x001889C0 *buf, Sint32_x001889C0 size, Sint32_x001889C0 *pFound) {
    Sint32_x001889C0 endsiz;
    Sint32_x001889C0 i;
    *pFound = 0;
    for (i = 0; i < size; i += 18) {
        if (!ADXT_IsEndcode_x001889C0(buf, 18, &endsiz)) {
            buf += 18;
            continue;
        }
        *pFound = 1;
        break;
    }
    return i;
}
void func_00188A48(u8 *arg0) {
    func_0015FCD8(**(s32 **)((u8 *)arg0 + 0x1CB4));
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00188A68);
typedef struct SfdSj_x00188B20 SfdSj_x00188B20;
typedef struct SfdSjChunk_x00188B20 {
    char *data;
    int len;
} SfdSjChunk_x00188B20;
typedef struct SfdSjVtbl_x00188B20 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00188B20 *sj);
    int (*getUuid)(SfdSj_x00188B20 *sj);
    void (*reset)(SfdSj_x00188B20 *sj);
    void (*getChunk)(SfdSj_x00188B20 *sj, int id, int n, SfdSjChunk_x00188B20 *ck);
    void (*ungetChunk)(SfdSj_x00188B20 *sj, int id, SfdSjChunk_x00188B20 *ck);
    void (*putChunk)(SfdSj_x00188B20 *sj, int id, SfdSjChunk_x00188B20 *ck);
    int (*getNumData)(SfdSj_x00188B20 *sj, int id);
} SfdSjVtbl_x00188B20;
struct SfdSj_x00188B20 {
    SfdSjVtbl_x00188B20 *vtbl;
};
struct SfdSj_x00188B20;
struct SfdRecSlot_x00188B20;
struct SfdRec_x00188B20;
struct SfdMpvCond_x00188B20;
struct SfdPlanes_x00188B20;
struct SfdFrameInfo_x00188B20;
struct SfdPly_x00188B20;
typedef int (*SfdTimeFn_x00188B20)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x00188B20 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00188B20;
typedef struct SfdTimeRec_x00188B20 {
    int valid;
    SfdTimeCode_x00188B20 tc;
    int time;
    int unit;
} SfdTimeRec_x00188B20;
typedef struct SfdTst_x00188B20 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00188B20;
typedef struct SfdSyncTally_x00188B20 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x00188B20;
typedef struct SfdSyncQueue_x00188B20 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x00188B20;
typedef struct SfdFieldEntry_x00188B20 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x00188B20;
typedef struct SfdPtsm_x00188B20 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x00188B20;
typedef struct SfdHdrAudio_x00188B20 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x00188B20;
typedef struct SfdHdrMux_x00188B20 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x00188B20;
typedef struct SfdHdrVideo_x00188B20 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x00188B20;
typedef struct SfdHdrInf_x00188B20 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x00188B20 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x00188B20 audio;
    SfdHdrVideo_x00188B20 video;
    int size;
    char data[2048];
} SfdHdrInf_x00188B20;
typedef struct SfdMvInf_x00188B20 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00188B20;
typedef struct SfdPlyInf_x00188B20 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x00188B20;
typedef void (*SfdErrFn_x00188B20)(void *obj, int code);
typedef struct SfdErrInf_x00188B20 {
    SfdErrFn_x00188B20 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x00188B20;
typedef int (*SfdExtClockFn_x00188B20)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x00188B20)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x00188B20 {
    SfdTimeFn_x00188B20 timefn[6];
    SfdIsSkipFn_x00188B20 isSkipFn;
    SfdTimeCode_x00188B20 tc;
    SfdTimeRec_x00188B20 state;
    SfdTimeRec_x00188B20 best;
    SfdTimeRec_x00188B20 tot;
    SfdTimeRec_x00188B20 cur;
    SfdTimeRec_x00188B20 latest;
    SfdTimeRec_x00188B20 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x00188B20 tally;
    SfdSyncQueue_x00188B20 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x00188B20 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x00188B20 tst;
    SfdFieldEntry_x00188B20 fields[64];
    SfdPtsm_x00188B20 ptsm;
    char pad1468[36];
} SfdTim_x00188B20;
enum {
    SFD_COND_VIDEO_x00188B20 = 5,
    SFD_COND_AUDIO_x00188B20 = 6,
    SFD_COND_KEEPSUP_x00188B20 = 8,
    SFD_COND_SYNCMODE_x00188B20 = 15,
    SFD_COND_ETIME_x00188B20 = 20,
    SFD_COND_ETUNIT_x00188B20 = 21,
    SFD_COND_LNKSTM_x00188B20 = 49,
    SFD_COND_SUPPLY_END_x00188B20 = 56,
    SFD_COND_DECODE_END_x00188B20 = 57,
    SFD_COND_DEMUX_SPLIT_x00188B20 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x00188B20 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x00188B20 = 80,
    SFD_COND_SYSHD_FN_x00188B20 = 85,
    SFD_COND_SYSHD_FN_OBJ_x00188B20 = 86,
    SFD_COND_NUM_x00188B20 = 100
};
typedef enum SfdBufFmt_x00188B20 {
    SFD_BUFFMT_0_x00188B20 = 0
} SfdBufFmt_x00188B20;
typedef enum SfdBufId_x00188B20 {
    SFD_BUF_NONE_x00188B20 = 8
} SfdBufId_x00188B20;
typedef struct SfdCrePrm_x00188B20 {
    struct SfdTrnConfig_x00188B20 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x00188B20 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x00188B20;
typedef struct SfdItem_x00188B20 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x00188B20;
typedef struct SfdRing_x00188B20 {
    SfdItem_x00188B20 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x00188B20;
typedef struct SfdBufInf_x00188B20 {
    char *data;
    struct SfdSj_x00188B20 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x00188B20;
typedef struct SfdBufCur_x00188B20 {
    char *pos;
    int len;
} SfdBufCur_x00188B20;
typedef struct SfdBufDlm_x00188B20 {
    char *pos;
    char *end;
} SfdBufDlm_x00188B20;
typedef struct SfdBufRing_x00188B20 {
    SfdBufInf_x00188B20 sup;
    SfdBufDlm_x00188B20 dlm;
    int wtot;
    int rtot;
    SfdRing_x00188B20 ptsque;
} SfdBufRing_x00188B20;
typedef struct SfdBufAring_x00188B20 {
    SfdBufInf_x00188B20 sup;
    SfdBufCur_x00188B20 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x00188B20;
typedef struct SfdUoch_x00188B20 {
    struct SfdSj_x00188B20 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x00188B20;
typedef struct SfdBufEnt_x00188B20 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x00188B20 ring;
        SfdBufAring_x00188B20 aring;
        SfdBufInf_x00188B20 vfrm;
        SfdUoch_x00188B20 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x00188B20;
typedef int (*SfdTrnFn_x00188B20)();
typedef struct SfdTrnConfig_x00188B20 {
    SfdTrnFn_x00188B20 *fns[9];
} SfdTrnConfig_x00188B20;
typedef struct SfdMpsPrm_x00188B20 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x00188B20 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x00188B20;
typedef struct SfdAdxCfg_x00188B20 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x00188B20;
typedef void (*SfdAdxStep_x00188B20)(struct SfdPly_x00188B20 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x00188B20 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x00188B20 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x00188B20 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x00188B20;
typedef struct SfdAoap_x00188B20 {
    int rna;
    void (*setOutPan)(struct SfdPly_x00188B20 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x00188B20 *h, int ch);
    void (*setOutVol)(struct SfdPly_x00188B20 *h, int vol);
    int (*getOutVol)(struct SfdPly_x00188B20 *h);
    void (*setSpeed)(struct SfdPly_x00188B20 *h, int speed);
} SfdAoap_x00188B20;
typedef struct SfainfOut_x00188B20 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x00188B20;
typedef struct SfainfList_x00188B20 {
    int nout;
    SfainfOut_x00188B20 out[3];
} SfainfList_x00188B20;
typedef struct SfdTrnSlot_x00188B20 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x00188B20 *mps;
        struct SfdMpv_x00188B20 *mpv;
        SfdAdxCtx_x00188B20 *adxt;
        SfdAoap_x00188B20 *aoap;
        SfainfList_x00188B20 *uo;
    } hn;
    SfdTrnFn_x00188B20 *fns;
    SfdBufId_x00188B20 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x00188B20;
typedef struct SfdTsum_x00188B20 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x00188B20;
typedef struct SfdTmrInf_x00188B20 {
    SfdTsum_x00188B20 tsum[6];
} SfdTmrInf_x00188B20;
int sfd_ReportError_x00188B20(void *sfd, int code) __asm__("func_0018D650");
typedef struct AdxPdObj_x00188B20 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x00188B20;
typedef struct AdxDecPara_x00188B20 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x00188B20;
struct Pl2Enc_x00188B20;
typedef struct AdxbObj_x00188B20 AdxbObj_x00188B20;
typedef short *(*AdxbGetWrFunc_x00188B20)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00188B20)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00188B20 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00188B20 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x00188B20 dp;
    AdxbGetWrFunc_x00188B20 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00188B20 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x00188B20 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00188B20(AdxbObj_x00188B20 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00188B20 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00188B20 *adxb;
    SfdSj_x00188B20 *sji;
    SfdSj_x00188B20 *sjo[2];
    SfdSjChunk_x00188B20 cki;
    SfdSjChunk_x00188B20 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x00188B20;
extern void ADXSJD_EntryFltFunc_x00188B20(AdxSjdObj_x00188B20 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00188B20(AdxSjdObj_x00188B20 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00188B20)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00188B20)(CvFsErrFn_x00188B20 func, void *obj);
typedef int (*CvFsPathFn_x00188B20)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00188B20)(void);
typedef int (*CvFsOpenFn_x00188B20)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00188B20)(int fd);
typedef int (*CvFsFdIntFn_x00188B20)(int fd);
typedef int (*CvFsSeekFn_x00188B20)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00188B20)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00188B20)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00188B20)(void);
typedef int (*CvFsLoadDirInfoFn_x00188B20)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00188B20)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00188B20)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00188B20 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00188B20 entry_err_func;
    CvFsPathFn_x00188B20 get_file_size;
    CvFsGetFreeSizeFn_x00188B20 get_free_size;
    CvFsOpenFn_x00188B20 open;
    CvFsFdFn_x00188B20 close;
    CvFsSeekFn_x00188B20 seek;
    CvFsFdIntFn_x00188B20 tell;
    CvFsXferFn_x00188B20 req_rd;
    CvFsXferFn_x00188B20 req_wr;
    CvFsFdFn_x00188B20 stop_tr;
    CvFsFdIntFn_x00188B20 get_stat;
    CvFsFdIntFn_x00188B20 get_sct_len;
    CvFsSetSctLenFn_x00188B20 set_sct_len;
    CvFsFdIntFn_x00188B20 get_num_tr;
    CvFsPathFn_x00188B20 change_dir;
    CvFsPathFn_x00188B20 is_exist_file;
    CvFsGetNumFilesFn_x00188B20 get_num_files;
    CvFsLoadDirInfoFn_x00188B20 load_dir_info;
    CvFsFdIntFn_x00188B20 get_max_byte_rate;
    CvFsPathFn_x00188B20 make_dir;
    CvFsPathFn_x00188B20 remove_dir;
    CvFsPathFn_x00188B20 delete_file;
    CvFsGetFileSizeExFn_x00188B20 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00188B20 opt_fn2;
} CvFsVtbl_x00188B20;
typedef struct CvFsHandle_x00188B20 {
    CvFsVtbl_x00188B20 *vtbl;
    int fd;
} CvFsHandle_x00188B20;
extern CvFsVtbl_x00188B20 *addDevice_x00188B20(char *devname, CvFsVtbl_x00188B20 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00188B20 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00188B20 *sj;
    CvFsHandle_x00188B20 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00188B20 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x00188B20;
extern void ADXSTM_EntryEosFunc_x00188B20(AdxStmObj_x00188B20 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
int ADXT_IsEndcode_x00188B20(unsigned char *buf, int len, int *ftrlen) __asm__("func_0015FC98");
struct SfdSj_x00188B20;
typedef struct M2vErrInf_x00188B20 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00188B20;
typedef struct Mpeg2Ext_x00188B20 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00188B20;
typedef enum M2vFrameRate_x00188B20 {
    M2V_FRAME_RATE_FORBIDDEN_x00188B20 = 0
} M2vFrameRate_x00188B20;
typedef enum M2vPicType_x00188B20 {
    M2V_PICTYPE_I_x00188B20 = 1,
    M2V_PICTYPE_P_x00188B20 = 2,
    M2V_PICTYPE_B_x00188B20 = 3,
    M2V_PICTYPE_D_x00188B20 = 4
} M2vPicType_x00188B20;
typedef enum M2vPicStruct_x00188B20 {
    M2V_PICSTRUCT_TOP_FIELD_x00188B20 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00188B20 = 2,
    M2V_PICSTRUCT_FRAME_x00188B20 = 3
} M2vPicStruct_x00188B20;
typedef enum M2vPicAtrF64_x00188B20 {
    M2V_PICATR_F64_0_x00188B20 = 0
} M2vPicAtrF64_x00188B20;
typedef struct M2vPicAtr_x00188B20 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00188B20 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00188B20 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00188B20 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00188B20 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00188B20;
typedef void (*M2vUsrDatFn_x00188B20)(void *obj, int level);
typedef struct M2vUsrSj_x00188B20 {
    struct SfdSj_x00188B20 *sj;
    M2vUsrDatFn_x00188B20 fn;
    void *obj;
} M2vUsrSj_x00188B20;
typedef struct M2vPicUsr_x00188B20 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00188B20;
typedef void (*M2vCondFn_x00188B20)();
typedef struct M2vObj_x00188B20 {
    int stat;
    M2vErrInf_x00188B20 err;
    M2vCondFn_x00188B20 cond[16];
    M2vPicAtr_x00188B20 picatr;
    char pad216[64];
    M2vUsrSj_x00188B20 usrsj[4];
    M2vPicUsr_x00188B20 picusr;
    char pad340[12];
    Mpeg2Ext_x00188B20 ext;
    char pad1656[8];
} M2vObj_x00188B20;
extern void M2V_SetErrFunc_x00188B20(M2vObj_x00188B20 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x00188B20 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00188B20;
typedef struct sceMpeg_x00188B20 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00188B20 *sys;
} sceMpeg_x00188B20;
typedef enum {
    sceMpegCbError_x00188B20,
    sceMpegCbNodata_x00188B20,
    sceMpegCbStopDMA_x00188B20,
    sceMpegCbRestartDMA_x00188B20,
    sceMpegCbBackground_x00188B20,
    sceMpegCbTimeStamp_x00188B20,
    sceMpegCbStr_x00188B20,
    sceMpegCbNum_x00188B20
} sceMpegCbType_x00188B20;
typedef struct {
    sceMpegCbType_x00188B20 type;
    char *errMessage;
} sceMpegCbDataError_x00188B20;
typedef struct {
    sceMpegCbType_x00188B20 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00188B20;
typedef struct {
    sceMpegCbType_x00188B20 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00188B20;
typedef union {
    sceMpegCbType_x00188B20 type;
    sceMpegCbDataError_x00188B20 error;
    sceMpegCbDataTimeStamp_x00188B20 ts;
    sceMpegCbDataStr_x00188B20 str;
} sceMpegCbData_x00188B20;
typedef int (*sceMpegCallback_x00188B20)(sceMpeg_x00188B20 *mp, sceMpegCbData_x00188B20 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00188B20 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x00188B20;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x00188B20;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x00188B20;
typedef struct {
    _sceMpegPicture_x00188B20 *ref_image;
    _sceMpegPicture_x00188B20 *prev_image;
    _sceMpegPicture_x00188B20 *decode;
    _sceMpegPicture_x00188B20 *image;
} _sceMpegPictureSlot_x00188B20;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00188B20;
typedef void (*_sceMpegMcKernel_x00188B20)(_sceMpegMcFetch_x00188B20 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x00188B20 luma_kernel[4];
    _sceMpegMcKernel_x00188B20 chroma_kernel[4];
    _sceMpegMcFetch_x00188B20 luma[4];
    _sceMpegMcFetch_x00188B20 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00188B20;
typedef struct _sceMpegDecoder_x00188B20 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x00188B20 callbacks[sceMpegCbNum_x00188B20];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x00188B20 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x00188B20 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00188B20 slots[3];
    _sceMpegPicture_x00188B20 pictures[9];
    _sceMpegSprBuffer_x00188B20 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00188B20 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x00188B20;
typedef struct SfdPlanes_x00188B20 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x00188B20;
typedef struct SfdUserData_x00188B20 {
    char data[512];
    int size;
} SfdUserData_x00188B20;
typedef struct SfdRecVideo_x00188B20 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x00188B20 stamp;
    SfdUserData_x00188B20 user;
} SfdRecVideo_x00188B20;
typedef struct SfdSlot_x00188B20 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00188B20 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00188B20 *blob;
    M2vPicAtr_x00188B20 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00188B20;
typedef struct SfdBufPool_x00188B20 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00188B20 slot[18];
} SfdBufPool_x00188B20;
typedef struct SfdMpvCond_x00188B20 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00188B20;
typedef struct SfdMpvWorkBufs_x00188B20 {
    int w[2];
} SfdMpvWorkBufs_x00188B20;
typedef struct SfdMpvFrameBufs_x00188B20 {
    int w[16];
} SfdMpvFrameBufs_x00188B20;
typedef struct SfdIpuEntry_x00188B20 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00188B20;
typedef struct SfdDmaTag_x00188B20 {
    long long tag;
    long long pad;
} SfdDmaTag_x00188B20;
typedef struct SfdIpuStream_x00188B20 {
    void *base;
    SfdDmaTag_x00188B20 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00188B20 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00188B20;
typedef struct SfdIpuCtl_x00188B20 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x00188B20 mpeg;
    SfdIpuStream_x00188B20 stream;
    sceMpegCbDataError_x00188B20 error;
} SfdIpuCtl_x00188B20;
typedef struct SfdPtsComp_x00188B20 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x00188B20 ptsent;
} SfdPtsComp_x00188B20;
typedef struct SfdMpv_x00188B20 {
    void *handle;
    SfdMpvCond_x00188B20 cond;
    SfdMpvWorkBufs_x00188B20 work;
    SfdMpvFrameBufs_x00188B20 bufs;
    SfdSlot_x00188B20 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x00188B20 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x00188B20 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x00188B20 planes[2];
    SfdSlot_x00188B20 *first;
    SfdSlot_x00188B20 *second;
    SfdSlot_x00188B20 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x00188B20 slots[16];
    SfdBufPool_x00188B20 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x00188B20 ipu;
} SfdMpv_x00188B20;
typedef enum SfdPicType_x00188B20 {
    SFD_PICTYPE_I_x00188B20 = 1,
    SFD_PICTYPE_P_x00188B20 = 2,
    SFD_PICTYPE_B_x00188B20 = 3
} SfdPicType_x00188B20;
typedef enum SfdFrmInfF60_x00188B20 {
    SFD_FRMINF_F60_0_x00188B20 = 0
} SfdFrmInfF60_x00188B20;
typedef struct SfdFrameDetail_x00188B20 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x00188B20;
typedef struct SfdFrameInfo_x00188B20 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x00188B20 picType;
    int time;
    int unit;
    SfdBufFmt_x00188B20 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00188B20 *picUsr;
    SfdFrmInfF60_x00188B20 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x00188B20 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x00188B20;
typedef struct SfdVfrm_x00188B20 {
    int used;
    int f4;
    SfdFrameInfo_x00188B20 inf;
} SfdVfrm_x00188B20;
typedef struct SfdPly_x00188B20 SfdPly_x00188B20;
typedef struct SfdRec_x00188B20 SfdRec_x00188B20;
typedef struct SfdRecSub_x00188B20 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x00188B20;
typedef struct SfdRecSlot_x00188B20 {
    SfdRec_x00188B20 *rec;
    SfdRecSub_x00188B20 sub;
} SfdRecSlot_x00188B20;
typedef struct SfdSysHd_x00188B20 {
    char data[2][176];
    int len[2];
} SfdSysHd_x00188B20;
typedef struct SfdRecSys_x00188B20 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x00188B20 syshd;
} SfdRecSys_x00188B20;
typedef struct SfdRecAudio_x00188B20 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x00188B20;
struct SfdRec_x00188B20 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x00188B20 hdrInf;
    SfdRecSys_x00188B20 sys;
    char pad2616[152];
    SfdRecVideo_x00188B20 video;
    SfdRecAudio_x00188B20 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x00188B20 {
    SfdCrePrm_x00188B20 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x00188B20 hdr;
    SfdMvInf_x00188B20 mvInf;
    char pad2380[4];
    SfdPlyInf_x00188B20 plyInf;
    SfdErrInf_x00188B20 err;
    int cond[SFD_COND_NUM_x00188B20];
    int cond2[SFD_COND_NUM_x00188B20];
    char pad3364[4];
    SfdTim_x00188B20 tim;
    SfdBufEnt_x00188B20 buf[8];
    SfdVfrm_x00188B20 vfrm[16];
    SfdTrnSlot_x00188B20 trn[9];
    char pad8588[4];
    SfdMpsPrm_x00188B20 mps;
    char pad8944[176];
    SfdMpv_x00188B20 mpv;
    SfdAdxCtx_x00188B20 adxt;
    char pad13680[100];
    SfdAoap_x00188B20 aoap;
    char pad13804[4];
    SfainfList_x00188B20 uo;
    char pad13860[4];
    SfdRecSlot_x00188B20 see;
    SfdTmrInf_x00188B20 tmr;
};
char *func_00188B20_x00188B20(SfdPly_x00188B20 *h, char *buf, int size) __asm__("func_00188B20");
/* sfadxt_SearchAlign: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfadx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
char *func_00188B20_x00188B20(SfdPly_x00188B20 *h, char *buf, int size) {
    int ftrlen;
    char *end = buf + size;
    char *base;
    char *p;
    char *bestBase = 0;
    int found = 0;
    char *best = 0;
    for (base = buf; base < buf + 36; base += 2) {
        found = 0;
        for (p = base; p < end; p += 18) {
            if (*p < 0) {
                found = 1;
                if (ADXT_IsEndcode_x00188B20(p, 18, &ftrlen) != 0 && best < p) {
                    best = p;
                    bestBase = base;
                }
                break;
            }
        }
        if (!found)
            break;
    }
    if (found) {
        if (bestBase == 0) {
            sfd_ReportError_x00188B20(h, 0xFF000C0A);
            return buf;
        }
        base = bestBase;
    }
    return base;
}
extern u8 D_00467220_x00188C40[] __asm__("D_00467220");
s32 func_0018D3C0_x00188C40(void *) __asm__("func_0018D3C0");
void func_00188A68_x00188C40() __asm__("func_00188A68");
s32 func_00188D48_x00188C40(void *, s32 *, s32 *) __asm__("func_00188D48");
int memcmp_x00188C40(const void *, const void *, unsigned int) __asm__("memcmp");
void func_00188C40_x00188C40(u8 *a0, u8 *buf, s32 len, s32 *out) __asm__("func_00188C40");
void func_00188C40_x00188C40(u8 *a0, u8 *buf, s32 len, s32 *out)
{
    u8 *w;
    s32 i;
    s32 v[2];

    w = *(u8 **)(a0 + 0x1CB4);
    *out = 0;
    if (func_0018D3C0_x00188C40(a0) >= 0x6C) {
        *(void **)(w + 0x3C) = func_00188A68_x00188C40;
        return;
    }
    for (i = 0; i < len - 0x12; i += 0x12) {
        if (memcmp_x00188C40(buf, D_00467220_x00188C40, 0x12) != 0) {
            *(void **)(w + 0x3C) = func_00188A68_x00188C40;
            break;
        }
        buf += 0x12;
    }
    *out = i;
    if (func_00188D48_x00188C40(a0, &v[0], &v[1]) == 0) {
        *(s32 *)(w + 0x38) += (i / (v[0] * 18)) * 32;
    }
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3c00188C40_0;
extern int b3c00188C40_1;
extern int b3cse_pad32_00188C40_0_xxxx;
void *func_0034B618_x00188D48(char *self) __asm__("func_00189BC0");
int func_00188D48_x00188D48(int a0, int *a1, int *a2) __asm__("func_00188D48");
/* func_0034A6F8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0032f938.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00188D48_x00188D48(int a0, int *a1, int *a2) {
    int *r = func_0034B618_x00188D48(a0);
    if (r == 0) return -1;
    *a1 = r[3];
    *a2 = r[4];
    return 0;
}
s32 func_00188E40_x00188D98() __asm__("func_00188E40");
s32 func_0018B710_x00188D98() __asm__("func_0018B710");
s32 func_0018B730_x00188D98() __asm__("func_0018B730");
void func_00188D98_x00188D98(s32 arg0) __asm__("func_00188D98");
void func_00188D98_x00188D98(s32 arg0) {
    s32 temp_s0;
    s32 temp_s2;
    u8 *temp_v0;

    temp_v0 = arg0 + 0x1CAC;
    temp_s2 = *(s32 *)((u8 *)temp_v0 + 0x14);
    temp_s0 = *(s32 *)((u8 *)temp_v0 + 0x10);
    if ((func_0018B730_x00188D98(arg0, temp_s2) != 1) && (func_0018B730_x00188D98(arg0, temp_s0) == 1) && (func_00188E40_x00188D98(arg0) != 0)) {
        func_0018B710_x00188D98(arg0, temp_s2, 1);
    }
}
s32 func_00188E40(u8 *arg0) {
    return ADXT_GetStat(**(s32 **)((u8 *)arg0 + 0x1CB4)) == 3;
}
extern s32 D_0048CFEC_x00188E68 __asm__("D_0048CFEC");
s32 ADXT_GetStat_x00188E68(s32) __asm__("ADXT_GetStat");
s32 ADXT_GetErrCode_x00188E68(s32) __asm__("ADXT_GetErrCode");
s32 func_001999E0_x00188E68(void *, s32) __asm__("func_001999E0");
s32 func_0018D650_x00188E68(void *, s32) __asm__("func_0018D650");
void func_0019C348_x00188E68(void *, s32) __asm__("func_0019C348");
void func_001890A0_x00188E68(void *, s32) __asm__("func_001890A0");
s32 func_00189070_x00188E68(void *) __asm__("func_00189070");
void func_0015FA00_x00188E68(s32) __asm__("func_0015FA00");
void func_00188E68_x00188E68(u8 *a0, s32 a1) __asm__("func_00188E68");
void func_00188E68_x00188E68(u8 *a0, s32 a1)
{
    s32 *s;
    s32 h;
    s32 st;
    s32 e;
    u8 *p;

    p = a0 + 0xFA0;
    s = *(s32 **)(a0 + 0x1CB4);
    h = s[0];
    st = ADXT_GetStat_x00188E68(h);
    e = ADXT_GetErrCode_x00188E68(h);
    if (e != 0) {
        D_0048CFEC_x00188E68 = e;
    }
    if (func_001999E0_x00188E68(a0, 0x1A) == 0) {
        e = 0;
    }
    switch (e) {
    case -1:
        func_0018D650_x00188E68(a0, 0xFF000C08);
        break;
    case 0:
        break;
    case -2:
        func_0018D650_x00188E68(a0, 0xFF000C09);
        break;
    default:
        func_0018D650_x00188E68(a0, 0xFF000C07);
        break;
    }
    if (st == 4 || st == 5) {
        func_0019C348_x00188E68(p, 0);
    }
    if (st == 5 || e != 0) {
        func_001890A0_x00188E68(a0, 1);
    }
    if (func_00189070_x00188E68(a0) != 1) {
        return;
    }
    if (a1 != 0) {
        return;
    }
    func_0015FA00_x00188E68(h);
    if (s[0x48 / 4] != 0) {
        return;
    }
    func_001890A0_x00188E68(a0, 1);
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3cse_pad32_00188E68_0_xxxx;
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189008);
s32 func_0018AB58_x00189050() __asm__("func_0018AB58");
void func_00189050_x00189050(u8 *arg0, s32 arg1) __asm__("func_00189050");
void func_00189050_x00189050(u8 *arg0, s32 arg1) {
    func_0018AB58_x00189050(arg0, *(s32 *)((u8 *)arg0 + 0x1CBC), arg1);
    __asm__ __volatile__("");
}
s32 func_0018B770_x00189070(u8 *a0, s32 a1) __asm__("func_0018B770");
s32 func_00189070_x00189070(u8 *arg0) __asm__("func_00189070");
s32 func_00189070_x00189070(u8 *arg0) {
    return func_0018B770_x00189070(arg0, *(s32 *)(arg0 + 0x1CBC));
}
s32 func_0018B770_x00189088(u8 *a0, s32 a1) __asm__("func_0018B770");
s32 func_00189088_x00189088(u8 *arg0) __asm__("func_00189088");
s32 func_00189088_x00189088(u8 *arg0) {
    return func_0018B770_x00189088(arg0, *(s32 *)(arg0 + 0x1CC0));
}
s32 func_0018B750_x001890A0() __asm__("func_0018B750");
void func_001890A0_x001890A0(u8 *arg0, s32 arg1) __asm__("func_001890A0");
void func_001890A0_x001890A0(u8 *arg0, s32 arg1) {
    func_0018B750_x001890A0(arg0, *(s32 *)((u8 *)arg0 + 0x1CC0), arg1);
}
s32 *func_00189BC0_x001890C0(u8 *) __asm__("func_00189BC0");
s32 func_00189178_x001890C0(s32) __asm__("func_00189178");
s32 ADXT_GetSfreq_x001890C0(s32) __asm__("ADXT_GetSfreq");
s32 ADXT_GetNumSmpl_x001890C0(s32) __asm__("ADXT_GetNumSmpl");
s32 ADXT_GetNumChan_x001890C0(s32) __asm__("ADXT_GetNumChan");
void func_001890C0_x001890C0(u8 *a0) __asm__("func_001890C0");
void func_001890C0_x001890C0(u8 *a0)
{
    s32 *s = func_00189BC0_x001890C0(a0);
    s32 h;
    if (s == 0 || s[0] != 0) {
        return;
    }
    h = **(s32 **)(a0 + 0x1CB4);
    if (func_00189178_x001890C0(h) == 0) {
        return;
    }
    s[4] = ADXT_GetSfreq_x001890C0(h);
    s[5] = ADXT_GetNumSmpl_x001890C0(h);
    s[3] = ADXT_GetNumChan_x001890C0(h);
    s[1] = s[4] * s[3] * 9 / 16;
    s[2] = 1;
    s[0] = 1;
}
extern int GuardedCall_00329FD0_329F98_x00189178(void *hn) __asm__("ADXT_GetStat");
int func_00189178_x00189178(void *hn) __asm__("func_00189178");
/* sfadxt_IsEndDecinfo: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00349d38.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00189178_x00189178(void *hn)
{
    if ((unsigned int)GuardedCall_00329FD0_329F98_x00189178(hn) < 2) return 0;
    return 1;
}
s32 ADXT_SetSvrFreq_x001891A0() __asm__("ADXT_SetSvrFreq");
s32 func_001999E0_x001891A0() __asm__("func_001999E0");
void func_001891A0_x001891A0(u8 *arg0) __asm__("func_001891A0");
void func_001891A0_x001891A0(u8 *arg0) {
    s32 *temp_s1;
    s32 temp_s0;
    s32 temp_v0;

    temp_s1 = *(s32 **)((u8 *)arg0 + 0x1CB4);
    temp_s0 = *(s32 *)((u8 *)temp_s1 + 0);
    temp_v0 = func_001999E0_x001891A0(arg0, 0x1B);
    if (*(s32 *)((u8 *)temp_s1 + 0x44) != temp_v0) {
        *(s32 *)((u8 *)temp_s1 + 0x44) = temp_v0;
        ADXT_SetSvrFreq_x001891A0(temp_s0, temp_v0);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189208);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189360);
s32 func_00189518(u8 *arg0) {
    s32 var_v0;
    s32 var_v0_2;

    if (func_00197EB8() != 1) {
        var_v0_2 = ADXT_Create(*(s32 *)((u8 *)arg0 + 0xC), *(s32 *)((u8 *)arg0 + 0x18), *(s32 *)((u8 *)arg0 + 0x14));
    } else {
        var_v0_2 = func_00189588();
    }
    var_v0 = 0;
    if (var_v0_2 != 0) {
        func_0015F5B0(var_v0_2, 0);
        var_v0 = var_v0_2;
    }
    return var_v0;
}
s32 func_00189588(void) {
    return D_00426AE0;
}
s32 func_00199818_x00189598() __asm__("func_00199818");
s32 func_0019AE00_x00189598() __asm__("func_0019AE00");
extern s32 func_001895D8_x00189598 __asm__("func_001895D8");
void func_00189598_x00189598(s32 arg0) __asm__("func_00189598");
void func_00189598_x00189598(s32 arg0) {
    func_0019AE00_x00189598(arg0, &func_001895D8_x00189598, 2);
    func_00199818_x00189598(arg0, 0xF, 2);
}
typedef struct { s32 h; u8 pad[0x20]; s32 a; s32 b; } SfdIf_x001895D8_x001895D8;
s32 func_0019AA08_x001895D8(s32) __asm__("func_0019AA08");
void func_00189698_x001895D8(void *, s32, s32 *, s32 *) __asm__("func_00189698");
s32 func_001895D8_x001895D8(s32 a0, s32 *o1, s32 *o2) __asm__("func_001895D8");
s32 func_001895D8_x001895D8(s32 a0, s32 *o1, s32 *o2)
{
    SfdIf_x001895D8_x001895D8 *s = *(SfdIf_x001895D8_x001895D8 **)(a0 + 0x1CB4);
    s32 h = s->h;
    u8 *q = (u8 *)a0 + 0xFA0;
    s32 x, y;

    if (func_0019AA08_x001895D8(a0) == 0) {
        return 0;
    }
    if (*(s32 *)(a0 + 0x48) == 4) {
        func_00189698_x001895D8(q, h, &x, &y);
        if (s->a < x) {
            s32 ty = y;
            s->a = x;
            s->b = ty;
        }
    }
    *o1 = s->a;
    *o2 = s->b;
    return 0;
}
typedef struct SfdSj_x00189698 SfdSj_x00189698;
typedef struct SfdSjChunk_x00189698 {
    char *data;
    int len;
} SfdSjChunk_x00189698;
typedef struct SfdSjVtbl_x00189698 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00189698 *sj);
    int (*getUuid)(SfdSj_x00189698 *sj);
    void (*reset)(SfdSj_x00189698 *sj);
    void (*getChunk)(SfdSj_x00189698 *sj, int id, int n, SfdSjChunk_x00189698 *ck);
    void (*ungetChunk)(SfdSj_x00189698 *sj, int id, SfdSjChunk_x00189698 *ck);
    void (*putChunk)(SfdSj_x00189698 *sj, int id, SfdSjChunk_x00189698 *ck);
    int (*getNumData)(SfdSj_x00189698 *sj, int id);
} SfdSjVtbl_x00189698;
struct SfdSj_x00189698 {
    SfdSjVtbl_x00189698 *vtbl;
};
typedef struct SjxObj_x00189698 SjxObj_x00189698;
long long UTY_GetTmr_x00189698(void) __asm__("func_001A1630");
long long UTY_GetTmrUnit_x00189698(void) __asm__("func_001A17A0");
struct SfdSj_x00189698;
typedef struct SfdRatio_x00189698 {
    long long num;
    long long den;
} SfdRatio_x00189698;
typedef struct SfdTst_x00189698 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00189698;
void SFTST_Calc_x00189698(SfdTst_x00189698 *tst, SfdRatio_x00189698 *mt, SfdRatio_x00189698 *hlp, SfdRatio_x00189698 *out) __asm__("func_0019C3A8");
typedef struct LscStm_x00189698 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm_x00189698;
typedef struct LscObj_x00189698 {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x00189698 *sj;
    SfdSjChunk_x00189698 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x00189698 stms[16];
} LscObj_x00189698;
typedef struct AdxPdObj_x00189698 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x00189698;
typedef struct AdxDecPara_x00189698 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x00189698;
struct Pl2Enc_x00189698;
typedef struct AdxbObj_x00189698 AdxbObj_x00189698;
typedef short *(*AdxbGetWrFunc_x00189698)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00189698)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00189698 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00189698 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x00189698 dp;
    AdxbGetWrFunc_x00189698 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00189698 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x00189698 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00189698(AdxbObj_x00189698 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00189698 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00189698 *adxb;
    SfdSj_x00189698 *sji;
    SfdSj_x00189698 *sjo[2];
    SfdSjChunk_x00189698 cki;
    SfdSjChunk_x00189698 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x00189698;
extern void ADXSJD_EntryFltFunc_x00189698(AdxSjdObj_x00189698 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00189698(AdxSjdObj_x00189698 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00189698)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00189698)(CvFsErrFn_x00189698 func, void *obj);
typedef int (*CvFsPathFn_x00189698)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00189698)(void);
typedef int (*CvFsOpenFn_x00189698)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00189698)(int fd);
typedef int (*CvFsFdIntFn_x00189698)(int fd);
typedef int (*CvFsSeekFn_x00189698)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00189698)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00189698)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00189698)(void);
typedef int (*CvFsLoadDirInfoFn_x00189698)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00189698)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00189698)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00189698 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00189698 entry_err_func;
    CvFsPathFn_x00189698 get_file_size;
    CvFsGetFreeSizeFn_x00189698 get_free_size;
    CvFsOpenFn_x00189698 open;
    CvFsFdFn_x00189698 close;
    CvFsSeekFn_x00189698 seek;
    CvFsFdIntFn_x00189698 tell;
    CvFsXferFn_x00189698 req_rd;
    CvFsXferFn_x00189698 req_wr;
    CvFsFdFn_x00189698 stop_tr;
    CvFsFdIntFn_x00189698 get_stat;
    CvFsFdIntFn_x00189698 get_sct_len;
    CvFsSetSctLenFn_x00189698 set_sct_len;
    CvFsFdIntFn_x00189698 get_num_tr;
    CvFsPathFn_x00189698 change_dir;
    CvFsPathFn_x00189698 is_exist_file;
    CvFsGetNumFilesFn_x00189698 get_num_files;
    CvFsLoadDirInfoFn_x00189698 load_dir_info;
    CvFsFdIntFn_x00189698 get_max_byte_rate;
    CvFsPathFn_x00189698 make_dir;
    CvFsPathFn_x00189698 remove_dir;
    CvFsPathFn_x00189698 delete_file;
    CvFsGetFileSizeExFn_x00189698 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00189698 opt_fn2;
} CvFsVtbl_x00189698;
typedef struct CvFsHandle_x00189698 {
    CvFsVtbl_x00189698 *vtbl;
    int fd;
} CvFsHandle_x00189698;
extern CvFsVtbl_x00189698 *addDevice_x00189698(char *devname, CvFsVtbl_x00189698 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00189698 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00189698 *sj;
    CvFsHandle_x00189698 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00189698 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x00189698;
extern void ADXSTM_EntryEosFunc_x00189698(AdxStmObj_x00189698 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
typedef struct AdxAmpObj_x00189698 AdxAmpObj_x00189698;
typedef struct DtrObj_x00189698 DtrObj_x00189698;
typedef struct Ps2RnaPsj_x00189698 {
    char used;
    void *sjrmt;
    SfdSj_x00189698 *sjuni;
    SjxObj_x00189698 *sjx;
    SfdSjChunk_x00189698 ck;
} Ps2RnaPsj_x00189698;
typedef struct Ps2Rna_x00189698 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x00189698 *psj[2];
    DtrObj_x00189698 *dtr[2];
    SfdSj_x00189698 *sjo[2];
    void *id;
    int pad36;
    int ring_size;
    int psj_bufsize;
    int sfreq;
    int sent_sfreq;
    int outvol;
    int sent_outvol;
    int outpan[2];
    int sent_outpan[2];
    signed char playsw;
    signed char sent_playsw;
    signed char nch;
    signed char sent_nch;
    signed char auxsw;
    signed char sent_auxsw;
    signed char dualsw;
    signed char sent_dualsw;
    signed char transsw;
    signed char trans_stopped;
    signed char sent_stopflag;
    signed char stopflag;
    int outbalance;
    int sent_outbalance;
} Ps2Rna_x00189698;
typedef struct AdxtObj_x00189698 {
    signed char used;
    signed char stat;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x00189698 *sjd;
    AdxStmObj_x00189698 *stm;
    Ps2Rna_x00189698 *rna;
    SfdSj_x00189698 *sjf;
    SfdSj_x00189698 *sji;
    SfdSj_x00189698 *sjo[2];
    char *ibuf;
    int ibufbsize;
    int ibufxsize;
    char *obuf;
    int obufsize;
    int obufdist;
    int svrfreq;
    short maxsct;
    short minsct;
    short outvol;
    short outpan[2];
    short outbalance;
    int maxdecsmpl;
    int lpcnt;
    int lp_skiplen;
    int trp;
    int wpos;
    int mofst;
    short ercode;
    int edecpos;
    short edeccnt;
    short eshrtcnt;
    signed char lpflg;
    signed char autorcvr;
    signed char fltmode;
    signed char execflag;
    signed char pstwait_flag;
    signed char pstready_flag;
    signed char pause_flag;
    AdxAmpObj_x00189698 *amp;
    SfdSj_x00189698 *ampsji[2];
    SfdSj_x00189698 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x00189698 *lsc;
    signed char lnkflg;
    unsigned int vtime;
    int vbase;
    int decofst;
    int pad_nsmpl;
    signed char stm_req;
    char *fnbuf;
    char *fname;
    void *dir;
    int ofst;
    int nsct;
} AdxtObj_x00189698;
int ADXT_GetStat_x00189698(AdxtObj_x00189698 *adxt) __asm__("ADXT_GetStat");
void ADXT_GetTime_x00189698(AdxtObj_x00189698 *adxt, int *ncount, int *tscale) __asm__("ADXT_GetTime");
struct SfdSj_x00189698;
typedef struct M2vErrInf_x00189698 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00189698;
typedef struct Mpeg2Ext_x00189698 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00189698;
typedef enum M2vFrameRate_x00189698 {
    M2V_FRAME_RATE_FORBIDDEN_x00189698 = 0
} M2vFrameRate_x00189698;
typedef enum M2vPicType_x00189698 {
    M2V_PICTYPE_I_x00189698 = 1,
    M2V_PICTYPE_P_x00189698 = 2,
    M2V_PICTYPE_B_x00189698 = 3,
    M2V_PICTYPE_D_x00189698 = 4
} M2vPicType_x00189698;
typedef enum M2vPicStruct_x00189698 {
    M2V_PICSTRUCT_TOP_FIELD_x00189698 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00189698 = 2,
    M2V_PICSTRUCT_FRAME_x00189698 = 3
} M2vPicStruct_x00189698;
typedef enum M2vPicAtrF64_x00189698 {
    M2V_PICATR_F64_0_x00189698 = 0
} M2vPicAtrF64_x00189698;
typedef struct M2vPicAtr_x00189698 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00189698 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00189698 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00189698 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00189698 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00189698;
typedef void (*M2vUsrDatFn_x00189698)(void *obj, int level);
typedef struct M2vUsrSj_x00189698 {
    struct SfdSj_x00189698 *sj;
    M2vUsrDatFn_x00189698 fn;
    void *obj;
} M2vUsrSj_x00189698;
typedef struct M2vPicUsr_x00189698 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00189698;
typedef void (*M2vCondFn_x00189698)();
typedef struct M2vObj_x00189698 {
    int stat;
    M2vErrInf_x00189698 err;
    M2vCondFn_x00189698 cond[16];
    M2vPicAtr_x00189698 picatr;
    char pad216[64];
    M2vUsrSj_x00189698 usrsj[4];
    M2vPicUsr_x00189698 picusr;
    char pad340[12];
    Mpeg2Ext_x00189698 ext;
    char pad1656[8];
} M2vObj_x00189698;
extern void M2V_SetErrFunc_x00189698(M2vObj_x00189698 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
extern int sfadxt_stat_x00189698 __asm__("D_004268C0");
void func_00189698_x00189698(void *blk, AdxtObj_x00189698 *adxt, int *out0, int *out1) __asm__("func_00189698");
/* sfadxt_GetTimeTst: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfadx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00189698_x00189698(void *blk, AdxtObj_x00189698 *adxt, int *out0, int *out1) {
    SfdRatio_x00189698 size;
    SfdRatio_x00189698 extra;
    SfdRatio_x00189698 result;
    int width;
    int height;
    sfadxt_stat_x00189698 = ADXT_GetStat_x00189698(adxt);
    ADXT_GetTime_x00189698(adxt, &width, &height);
    size.num = width;
    size.den = height;
    extra.num = UTY_GetTmr_x00189698();
    extra.den = UTY_GetTmrUnit_x00189698();
    SFTST_Calc_x00189698(blk, &size, &extra, &result);
    *out0 = result.num;
    *out1 = result.den;
}
typedef struct { s32 w[7]; } W7_x00189740;
typedef struct Obj_x00189740 Obj_x00189740;
typedef struct { void *f0; void *f4; void *f8; void (*fC)(Obj_x00189740 *); } ObjVt_x00189740;
struct Obj_x00189740 { ObjVt_x00189740 *vt; };
extern W7_x00189740 D_0048CFD0_x00189740 __asm__("D_0048CFD0");
s32 func_00197EB8_x00189740() __asm__("func_00197EB8");
void func_00189870_x00189740(void *) __asm__("func_00189870");
s32 func_00189818_x00189740(s32) __asm__("func_00189818");
s32 func_00189838_x00189740(s32) __asm__("func_00189838");
void func_001A15C0_x00189740(void) __asm__("func_001A15C0");
s32 func_00189740_x00189740(u8 *a0) __asm__("func_00189740");
s32 func_00189740_x00189740(u8 *a0)
{
    s32 *p;
    s32 h;
    Obj_x00189740 *o;

    p = *(s32 **)(a0 + 0x1CB4);
    h = p[0];
    o = (Obj_x00189740 *)p[1];
    if (h == 0) {
        return 0;
    }
    D_0048CFD0_x00189740 = *(W7_x00189740 *)(p + 2);
    if (func_00197EB8_x00189740() != 1) {
        h = func_00189818_x00189740(h);
    } else {
        func_00189870_x00189740(a0);
        h = func_00189838_x00189740(h);
    }
    o->vt->fC(o);
    func_001A15C0_x00189740();
    return h;
}
s32 func_00189818(void) {
    ADXT_Destroy();
    return 0;
}
s32 func_00189838(s32 arg0) {
    D_00426AE0 = arg0;
    return 0;
}
s32 func_00189848(void) {
    return 0;
}
extern void func_0034B3E0_x00189850(int a, int b) __asm__("func_00189988");
int func_00189850_x00189850(int a0) __asm__("func_00189850");
/* func_0034B2A8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0031f4e0.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00189850_x00189850(int a0) {
    func_0034B3E0_x00189850(a0, 0);
    return 0;
}
s32 func_00189870(u8 *arg0) {
    ADXT_Stop(**(s32 **)((u8 *)arg0 + 0x1CB4));
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189898);
s32 func_00189A20_x00189988(s32, s32, s32, s32) __asm__("func_00189A20");
void func_00189988_x00189988(u8 *arg0, s32 arg1) __asm__("func_00189988");
void func_00189988_x00189988(u8 *arg0, s32 arg1)
{
  s32 temp_a3;
  u8 *temp_v1;
  u8 *new_var;
  temp_v1 = *((u8 **) (((u8 *) arg0) + 0x1CB4));
  *((s32 *) (((u8 *) temp_v1) + 0x2C)) = arg1;
  new_var = arg0 + 0xFA0;
  temp_a3 = *((s32 *) (((u8 *) temp_v1) + 0));
  if ((arg1 != 0) || ((*((s32 *) (((u8 *) arg0) + 0x50))) != 1))
  {
    func_00189A20_x00189988(temp_a3, new_var, arg1, temp_a3);
  }
}
void func_00189A20_x001899D8(s32, u8 *, s32) __asm__("func_00189A20");
void func_001899D8_x001899D8(u8 *a0, s32 a1) __asm__("func_001899D8");
void func_001899D8_x001899D8(u8 *a0, s32 a1)
{
    s32 *q = *(s32 **)(a0 + 0x1CB4);
    u8 *p = a0 + 0xFA0;
    s32 h = q[0];
    if (a1 == 0 && q[0x2C / 4] == 1) {
        return;
    }
    func_00189A20_x001899D8(h, p, a1);
}
extern void func_0032B300_x00189A20(void *hn, int sw) __asm__("ADXT_Pause");
extern void Obj35C0_SetField_4_C538_x00189A20(int a0, int sw) __asm__("func_0019C340");
void func_00189A20_x00189A20(void *hn, int a1, int sw) __asm__("func_00189A20");
/* sfadxt_WtPause: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00349d38.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00189A20_x00189A20(void *hn, int a1, int sw)
{
    func_0032B300_x00189A20(hn, sw);
    Obj35C0_SetField_4_C538_x00189A20(a1, sw);
}
typedef struct SfdSj_x00189A60 SfdSj_x00189A60;
typedef struct SfdSjChunk_x00189A60 {
    char *data;
    int len;
} SfdSjChunk_x00189A60;
typedef struct SfdSjVtbl_x00189A60 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00189A60 *sj);
    int (*getUuid)(SfdSj_x00189A60 *sj);
    void (*reset)(SfdSj_x00189A60 *sj);
    void (*getChunk)(SfdSj_x00189A60 *sj, int id, int n, SfdSjChunk_x00189A60 *ck);
    void (*ungetChunk)(SfdSj_x00189A60 *sj, int id, SfdSjChunk_x00189A60 *ck);
    void (*putChunk)(SfdSj_x00189A60 *sj, int id, SfdSjChunk_x00189A60 *ck);
    int (*getNumData)(SfdSj_x00189A60 *sj, int id);
} SfdSjVtbl_x00189A60;
struct SfdSj_x00189A60 {
    SfdSjVtbl_x00189A60 *vtbl;
};
int UTY_MulDiv_x00189A60(int a, int b, int c) __asm__("func_0017EE78");
struct SfdSj_x00189A60;
void SFTIM_GetTimeOneFrmVideo_x00189A60(void *sfd, int *scale, int *rate) __asm__("func_0019B2E0");
typedef struct AdxPdObj_x00189A60 {
    int used;
    int id;
    int mode;
    int stat;
    int nblk_decoded;
    int channels;
    unsigned char *ibuf;
    int nblk;
    short *obufl;
    short *obufr;
    short dly[2][2];
    short k0;
    short k1;
    short seed;
    short mul;
    short add;
} AdxPdObj_x00189A60;
typedef struct AdxDecPara_x00189A60 {
    char *ibuf;
    int niblk;
    int nch;
    int blksize;
    int blknsmpl;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    int wpos;
    int nroom;
    int lp_nsmpl;
    int ndecsmpl;
} AdxDecPara_x00189A60;
struct Pl2Enc_x00189A60;
typedef struct AdxbObj_x00189A60 AdxbObj_x00189A60;
typedef short *(*AdxbGetWrFunc_x00189A60)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00189A60)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00189A60 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00189A60 *xpd;
    signed char code;
    signed char bps;
    signed char nch;
    signed char blklen;
    int blknsmpl;
    int sfreq;
    int total_nsmpl;
    short cof;
    short rsv1;
    int lp_ins_nsmpl;
    short nloop;
    short lp_type;
    int lp_spos;
    int lp_sofst;
    int lp_epos;
    int lp_eofst;
    int maxnch;
    short *pcmbuf;
    int pcmbsize;
    int pcmbdist;
    AdxDecPara_x00189A60 dp;
    AdxbGetWrFunc_x00189A60 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00189A60 addwrfunc;
    void *addwrobj;
    int total_ndecsmpl;
    int curwpos;
    int ndecsmpl;
    int ndeclen;
    short fmttype;
    unsigned short def_fmttype;
    short cdctype;
    short f158;
    short k0;
    short km;
    short ka;
    unsigned short xp_key;
    unsigned short xp_km;
    unsigned short xp_ka;
    unsigned short dly1[2];
    unsigned short dly2[2];
    void *ahx;
    int ahx_dec_nsmpl;
    int ahx_dec_nfrm;
    void *ac3;
    int ac3_dec_nsmpl;
    int ac3_dec_nfrm;
    int ainf_len;
    char dataid[16];
    short def_outvol;
    short def_pan[2];
    char pad230[2];
    struct Pl2Enc_x00189A60 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00189A60(AdxbObj_x00189A60 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00189A60 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00189A60 *adxb;
    SfdSj_x00189A60 *sji;
    SfdSj_x00189A60 *sjo[2];
    SfdSjChunk_x00189A60 cki;
    SfdSjChunk_x00189A60 cko[2];
    int total_decsmpl;
    int total_decdtlen;
    int decpos;
    int maxdecsmpl;
    int dtrpsmpl;
    int dtrpcnt;
    int dtrpdtlen;
    void (*dtrpfunc)(void *context);
    void *dtrpobj;
    void (*dfltfunc)(void *context, int ch, char *data, int len);
    void *dfltobj;
    char hdr[64];
    int hdrlen;
    int lnksw;
    int fill;
    int skip;
} AdxSjdObj_x00189A60;
extern void ADXSJD_EntryFltFunc_x00189A60(AdxSjdObj_x00189A60 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00189A60(AdxSjdObj_x00189A60 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00189A60)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00189A60)(CvFsErrFn_x00189A60 func, void *obj);
typedef int (*CvFsPathFn_x00189A60)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00189A60)(void);
typedef int (*CvFsOpenFn_x00189A60)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00189A60)(int fd);
typedef int (*CvFsFdIntFn_x00189A60)(int fd);
typedef int (*CvFsSeekFn_x00189A60)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00189A60)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00189A60)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00189A60)(void);
typedef int (*CvFsLoadDirInfoFn_x00189A60)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00189A60)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00189A60)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00189A60 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00189A60 entry_err_func;
    CvFsPathFn_x00189A60 get_file_size;
    CvFsGetFreeSizeFn_x00189A60 get_free_size;
    CvFsOpenFn_x00189A60 open;
    CvFsFdFn_x00189A60 close;
    CvFsSeekFn_x00189A60 seek;
    CvFsFdIntFn_x00189A60 tell;
    CvFsXferFn_x00189A60 req_rd;
    CvFsXferFn_x00189A60 req_wr;
    CvFsFdFn_x00189A60 stop_tr;
    CvFsFdIntFn_x00189A60 get_stat;
    CvFsFdIntFn_x00189A60 get_sct_len;
    CvFsSetSctLenFn_x00189A60 set_sct_len;
    CvFsFdIntFn_x00189A60 get_num_tr;
    CvFsPathFn_x00189A60 change_dir;
    CvFsPathFn_x00189A60 is_exist_file;
    CvFsGetNumFilesFn_x00189A60 get_num_files;
    CvFsLoadDirInfoFn_x00189A60 load_dir_info;
    CvFsFdIntFn_x00189A60 get_max_byte_rate;
    CvFsPathFn_x00189A60 make_dir;
    CvFsPathFn_x00189A60 remove_dir;
    CvFsPathFn_x00189A60 delete_file;
    CvFsGetFileSizeExFn_x00189A60 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00189A60 opt_fn2;
} CvFsVtbl_x00189A60;
typedef struct CvFsHandle_x00189A60 {
    CvFsVtbl_x00189A60 *vtbl;
    int fd;
} CvFsHandle_x00189A60;
extern CvFsVtbl_x00189A60 *addDevice_x00189A60(char *devname, CvFsVtbl_x00189A60 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00189A60 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00189A60 *sj;
    CvFsHandle_x00189A60 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00189A60 rdck;
    int reqrdsct;
    int eos;
    int rdbyte;
    void (*eosfunc)(void *obj);
    void *eosobj;
    int buflen;
    signed char pause;
    signed char open_req;
    signed char close_req;
    signed char start_req;
    signed char stop_req;
    signed char opened;
    signed char nrmlflg;
    char f75[5];
    const char *fname;
    void *dir;
    int curpos;
    int maxsct;
} AdxStmObj_x00189A60;
extern void ADXSTM_EntryEosFunc_x00189A60(AdxStmObj_x00189A60 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
struct SfdSj_x00189A60;
typedef struct M2vErrInf_x00189A60 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00189A60;
typedef struct Mpeg2Ext_x00189A60 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00189A60;
typedef enum M2vFrameRate_x00189A60 {
    M2V_FRAME_RATE_FORBIDDEN_x00189A60 = 0
} M2vFrameRate_x00189A60;
typedef enum M2vPicType_x00189A60 {
    M2V_PICTYPE_I_x00189A60 = 1,
    M2V_PICTYPE_P_x00189A60 = 2,
    M2V_PICTYPE_B_x00189A60 = 3,
    M2V_PICTYPE_D_x00189A60 = 4
} M2vPicType_x00189A60;
typedef enum M2vPicStruct_x00189A60 {
    M2V_PICSTRUCT_TOP_FIELD_x00189A60 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00189A60 = 2,
    M2V_PICSTRUCT_FRAME_x00189A60 = 3
} M2vPicStruct_x00189A60;
typedef enum M2vPicAtrF64_x00189A60 {
    M2V_PICATR_F64_0_x00189A60 = 0
} M2vPicAtrF64_x00189A60;
typedef struct M2vPicAtr_x00189A60 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00189A60 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00189A60 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00189A60 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00189A60 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00189A60;
typedef void (*M2vUsrDatFn_x00189A60)(void *obj, int level);
typedef struct M2vUsrSj_x00189A60 {
    struct SfdSj_x00189A60 *sj;
    M2vUsrDatFn_x00189A60 fn;
    void *obj;
} M2vUsrSj_x00189A60;
typedef struct M2vPicUsr_x00189A60 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00189A60;
typedef void (*M2vCondFn_x00189A60)();
typedef struct M2vObj_x00189A60 {
    int stat;
    M2vErrInf_x00189A60 err;
    M2vCondFn_x00189A60 cond[16];
    M2vPicAtr_x00189A60 picatr;
    char pad216[64];
    M2vUsrSj_x00189A60 usrsj[4];
    M2vPicUsr_x00189A60 picusr;
    char pad340[12];
    Mpeg2Ext_x00189A60 ext;
    char pad1656[8];
} M2vObj_x00189A60;
extern void M2V_SetErrFunc_x00189A60(M2vObj_x00189A60 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
void func_00189A60_x00189A60(void *blk, int *result, int target) __asm__("func_00189A60");
/* sfadxt_GetTimeOneFrmAudio: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfadx.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00189A60_x00189A60(void *blk, int *result, int target) {
    int x;
    int y;
    SFTIM_GetTimeOneFrmVideo_x00189A60(blk, &x, &y);
    *result = UTY_MulDiv_x00189A60(target, x, y);
}
s32 func_0018D650_x00189AB0() __asm__("func_0018D650");
void func_00189AB0_x00189AB0(s32 arg0) __asm__("func_00189AB0");
void func_00189AB0_x00189AB0(s32 arg0) {
    func_0018D650_x00189AB0(arg0, 0xFF000C03);
}
s32 func_0018D650_x00189AD0() __asm__("func_0018D650");
void func_00189AD0_x00189AD0(s32 arg0) __asm__("func_00189AD0");
void func_00189AD0_x00189AD0(s32 arg0) {
    func_0018D650_x00189AD0(arg0, 0xFF000C03);
}
s32 func_0018D650_x00189AF0() __asm__("func_0018D650");
void func_00189AF0_x00189AF0(s32 arg0) __asm__("func_00189AF0");
void func_00189AF0_x00189AF0(s32 arg0) {
    func_0018D650_x00189AF0(arg0, 0xFF000C03);
}
s32 func_0018D650_x00189B10() __asm__("func_0018D650");
void func_00189B10_x00189B10(s32 arg0) __asm__("func_00189B10");
void func_00189B10_x00189B10(s32 arg0) {
    func_0018D650_x00189B10(arg0, 0xFF000C03);
}
typedef struct { s32 hn; u8 pad[0x30]; s32 started; s32 pad38; void (*cb)(void); } SfdAdx_x00189B30_x00189B30;
typedef struct { s32 on; s32 pad[2]; s32 a; s32 b; s32 c; } SfdAdxReq_x00189B30_x00189B30;
SfdAdxReq_x00189B30_x00189B30 *func_00189BC0_x00189B30(s32) __asm__("func_00189BC0");
void func_00156488_x00189B30(s32, s32, s32, s32) __asm__("func_00156488");
void func_0015FB50_x00189B30(s32, s32) __asm__("func_0015FB50");
void func_00188C40_x00189B30(void) __asm__("func_00188C40");
s32 func_00189B30_x00189B30(s32 a0) __asm__("func_00189B30");
s32 func_00189B30_x00189B30(s32 a0)
{
    SfdAdxReq_x00189B30_x00189B30 *r;
    SfdAdx_x00189B30_x00189B30 *s;
    s32 hn;

    r = func_00189BC0_x00189B30(a0);
    if (r == 0) {
        return 0;
    }
    s = *(SfdAdx_x00189B30_x00189B30 **)(a0 + 0x1CB4);
    hn = s->hn;
    if (s->started != 0) {
        return 0;
    }
    if (r->on == 0) {
        return 0;
    }
    func_00156488_x00189B30(hn, r->a, r->b, r->c);
    func_0015FB50_x00189B30(hn, 0);
    s->started = 1;
    s->cb = func_00188C40_x00189B30;
    return 0;
}
s32 func_00189BC0_x00189BC0(u8 *p) __asm__("func_00189BC0");
s32 func_00189BC0_x00189BC0(u8 *p)
{
    s32 v = *(s32 *)(p + 0x31E8);
    u8 *q = *(u8 **)(p + 0x1CB4);
    if (v == 0) {
        return 0;
    }
    if (*(s32 *)(q + 0x40) > 0) {
        return 0;
    }
    return v + 0xD00;
}
s32 func_0018D650_x00189BF0(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00189BF0() __asm__("func_0018D870");
s32 func_001999E0_x00189BF0(void *, s32) __asm__("func_001999E0");
void func_00189BF0_x00189BF0(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00189BF0");
void func_00189BF0_x00189BF0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 p;
    s32 fn;

    if (func_0018D870_x00189BF0(arg0) != 0) {
        func_0018D650_x00189BF0(0, 0xFF0001A1);
        return;
    }
    if (func_001999E0_x00189BF0(arg0, 6) != 0) {
        p = *(s32 *)(arg0 + 0x1DC4);
        fn = *(s32 *)(p + 4);
        ((void (*)(u8 *, s32, s32))fn)(arg0, arg1, arg2);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00189C80);
s32 func_0018D650_x00189CF8(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00189CF8() __asm__("func_0018D870");
s32 func_001999E0_x00189CF8(void *, s32) __asm__("func_001999E0");
void func_00189CF8_x00189CF8(u8 *arg0, s32 arg1) __asm__("func_00189CF8");
void func_00189CF8_x00189CF8(u8 *arg0, s32 arg1) {
    s32 p;
    s32 fn;

    if (func_0018D870_x00189CF8(arg0) != 0) {
        func_0018D650_x00189CF8(0, 0xFF0001A3);
        return;
    }
    if (func_001999E0_x00189CF8(arg0, 6) != 0) {
        p = *(s32 *)(arg0 + 0x1DC4);
        fn = *(s32 *)(p + 0xC);
        ((void (*)(u8 *, s32))fn)(arg0, arg1);
    }
}
s32 func_0018D650_x00189D78(s32, s32) __asm__("func_0018D650");
s32 func_0018D870_x00189D78() __asm__("func_0018D870");
s32 func_001999E0_x00189D78(void *, s32) __asm__("func_001999E0");
s32 func_00189D78_x00189D78(u8 *arg0) __asm__("func_00189D78");
s32 func_00189D78_x00189D78(u8 *arg0)
{
  s32 var_v0;
  if (func_0018D870_x00189D78() != 0)
  {
    func_0018D650_x00189D78(0, 0xFF0001A4);
    return 0;
  }
  var_v0 = func_001999E0_x00189D78(arg0, 6);
  if (var_v0 != 0)
  {
    var_v0 = (*((s32 (**)(u8 *)) (((u8 *) (*((u8 **) (((u8 *) arg0) + 0x1DC4)))) + 0x10)))(arg0);
    return var_v0;
  }
}
s32 func_001999E0_x00189DE8() __asm__("func_001999E0");
void func_00189DE8_x00189DE8(u8 *arg0, s32 arg1) __asm__("func_00189DE8");
void func_00189DE8_x00189DE8(u8 *arg0, s32 arg1) {
    s32 (*temp_v0)(u8 *, s32);

    if (func_001999E0_x00189DE8(arg0, 6) != 0) {
        temp_v0 = *(s32 (**)(u8 *, s32))((u8 *)(*(u8 **)((u8 *)arg0 + 0x1DC4)) + 0x14);
        if (temp_v0 != NULL) {
            temp_v0(arg0, arg1);
        }
    }
}
s32 func_00189E40(void) {
    return 0;
}
s32 func_00189E48(void) {
    return 0;
}
s32 func_00189E90_x00189E50() __asm__("func_00189E90");
s32 func_001999E0_x00189E50() __asm__("func_001999E0");
void func_00189E50_x00189E50(s32 arg0) __asm__("func_00189E50");
void func_00189E50_x00189E50(s32 arg0) {
    if (func_001999E0_x00189E50(arg0, 6) != 0) {
        func_00189E90_x00189E50(arg0);
    }
}
s32 func_00189E90(s32 arg0) {
    func_00189EC0();
    func_00189F30(arg0);
    return 0;
}
s32 func_0018B730_x00189EC0() __asm__("func_0018B730");
s32 func_0019C128_x00189EC0() __asm__("func_0019C128");
s32 func_0019C140_x00189EC0() __asm__("func_0019C140");
void func_00189EC0_x00189EC0(u8 *arg0) __asm__("func_00189EC0");
void func_00189EC0_x00189EC0(u8 *arg0) {
    if ((func_0019C140_x00189EC0(arg0, 7) != 1) && (func_0018B730_x00189EC0(arg0, *(s32 *)((u8 *)arg0 + 0x1DCC)) == 1)) {
        func_0019C128_x00189EC0(arg0, 7, 1);
    }
}
s32 func_0018B770_x00189F30() __asm__("func_0018B770");
s32 func_0019C158_x00189F30() __asm__("func_0019C158");
s32 func_0019C170_x00189F30() __asm__("func_0019C170");
void func_00189F30_x00189F30(u8 *arg0) __asm__("func_00189F30");
void func_00189F30_x00189F30(u8 *arg0) {
    if ((func_0019C170_x00189F30(arg0, 7) != 1) && (func_0018B770_x00189F30(arg0, *(s32 *)((u8 *)arg0 + 0x1DCC)) == 1)) {
        func_0019C158_x00189F30(arg0, 7, 1);
    }
}
s32 func_00189FE0_x00189FA0() __asm__("func_00189FE0");
s32 func_001999E0_x00189FA0() __asm__("func_001999E0");
s32 func_00189FA0_x00189FA0(u8 *arg0) __asm__("func_00189FA0");
s32 func_00189FA0_x00189FA0(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;

    var_v0 = func_001999E0_x00189FA0(arg0, 6);
    temp_v1 = arg0 + 0x3194;
    if (var_v0 != 0) {
        *(s32 *)((u8 *)arg0 + 0x1DC4) = temp_v1;
        func_00189FE0_x00189FA0(temp_v1);
        var_v0 = 0;
    }
    return var_v0;
}
void func_00189FE0(void) {

}
s32 func_00189FE8(void) {
    return 0;
}
extern int fn_12_2D73C_x00189FF0(void *arg, int value) __asm__("func_001999E0");
extern int fn_12_2F210_x00189FF0(void *arg, int a, int b, int c, int d) __asm__("func_0019C0D8");
int func_00189FF0_x00189FF0(void *arg) __asm__("func_00189FF0");
/* fn_12_21864: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_21864.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_00189FF0_x00189FF0(void *arg) {
    int temp;
    int result;
    if (fn_12_2D73C_x00189FF0(arg, 6) == 0) {
        return 0;
    }
    temp = fn_12_2F210_x00189FF0(arg, 3, 5, 0, 0);
    result = 0;
    if (temp != 0) {
        result = temp;
    }
    return result;
}
extern int fn_12_2D73C_x0018A038(int arg0, int arg1) __asm__("func_001999E0");
extern int fn_12_2F210_x0018A038(int arg0, int arg1, int arg2, int arg3, int arg4) __asm__("func_0019C0D8");
int func_0018A038_x0018A038(int arg0) __asm__("func_0018A038");
/* fn_12_217F8: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_217F8.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0018A038_x0018A038(int arg0) {
    int result;
    int value;
    if (fn_12_2D73C_x0018A038(arg0, 6) == 0) {
        return 0;
    }
    value = fn_12_2F210_x0018A038(arg0, 3, 6, 0, 0);
    result = 0;
    if (value != 0) {
        result = value;
    }
    return result;
}
extern int fn_12_2D73C_x0018A080(void *arg0, int arg1) __asm__("func_001999E0");
extern int fn_12_2F210_x0018A080(void *arg0, int arg1, int arg2, int arg3, int arg4) __asm__("func_0019C0D8");
int func_0018A080_x0018A080(void *arg0) __asm__("func_0018A080");
/* fn_12_2178C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2178C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0018A080_x0018A080(void *arg0) {
    int result;
    int value;
    if (!fn_12_2D73C_x0018A080(arg0, 6)) {
        return 0;
    }
    value = fn_12_2F210_x0018A080(arg0, 3, 7, 0, 0);
    result = 0;
    if (value) {
        result = value;
    }
    return result;
}
extern int fn_12_2D73C_x0018A0C8(void *arg0, int arg1) __asm__("func_001999E0");
extern int fn_12_2F210_x0018A0C8(void *arg0, int arg1, int arg2, int arg3, int arg4) __asm__("func_0019C0D8");
int func_0018A0C8_x0018A0C8(void *arg0, int arg1) __asm__("func_0018A0C8");
/* fn_12_21714: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_21714.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0018A0C8_x0018A0C8(void *arg0, int arg1) {
    int result;
    int value;
    if (!fn_12_2D73C_x0018A0C8(arg0, 6)) {
        return 0;
    }
    value = fn_12_2F210_x0018A0C8(arg0, 3, 8, arg1, 0);
    result = 0;
    if (value) {
        result = value;
    }
    return result;
}
s32 func_0018D650_x0018A120() __asm__("func_0018D650");
void func_0018A120_x0018A120(s32 arg0) __asm__("func_0018A120");
void func_0018A120_x0018A120(s32 arg0) {
    func_0018D650_x0018A120(arg0, 0xFF000A01);
}
s32 func_0018D650_x0018A140() __asm__("func_0018D650");
void func_0018A140_x0018A140(s32 arg0) __asm__("func_0018A140");
void func_0018A140_x0018A140(s32 arg0) {
    func_0018D650_x0018A140(arg0, 0xFF000A01);
}
s32 func_0018D650_x0018A160() __asm__("func_0018D650");
void func_0018A160_x0018A160(s32 arg0) __asm__("func_0018A160");
void func_0018A160_x0018A160(s32 arg0) {
    func_0018D650_x0018A160(arg0, 0xFF000A01);
}
s32 func_0018D650_x0018A180() __asm__("func_0018D650");
void func_0018A180_x0018A180(s32 arg0) __asm__("func_0018A180");
void func_0018A180_x0018A180(s32 arg0) {
    func_0018D650_x0018A180(arg0, 0xFF000A01);
}
s32 func_0018A1A0(void) {
    return 0;
}
void func_0018A1A8(void) {

}
void func_0018A1B0(void) {

}
void func_0018A318_x0018A1B8__(s32 *, s32 *, s32) __asm__("func_0018A318");
s32 func_0018A358_x0018A1B8__(s32, s32 *, s32 *, s32, s32) __asm__("func_0018A358");
s32 func_0018D650_x0018A1B8__(void *, s32) __asm__("func_0018D650");
void func_0018A520_x0018A1B8__(void *, s32, s32 *, s32 *, s32) __asm__("func_0018A520");
void func_0018A5D8_x0018A1B8__(s32, s32 *, s32 *, s32) __asm__("func_0018A5D8");
void func_0018A700_x0018A1B8__(s32, s32 *, s32 *, s32) __asm__("func_0018A700");
s32 func_0018A1B8_x0018A1B8__(void *a0, s32 a1, s32 *a2) __asm__("func_0018A1B8");
s32 func_0018A1B8_x0018A1B8__(void *a0, s32 a1, s32 *a2)
{
    s32 buf[8];
    s32 *p;
    s32 r0;
    s32 r1;
    s32 r2;

    p = a2 + 2;
    func_0018A318_x0018A1B8__(buf, p, a2[1]);
    r0 = func_0018A358_x0018A1B8__(a1, buf, p, 0, p[0] % a2[10]);
    r1 = func_0018A358_x0018A1B8__(a1, buf, p, 1, 0x800);
    r2 = func_0018A358_x0018A1B8__(a1, buf, p, 2, 0);
    if (r0 || r1 || r2) {
        return func_0018D650_x0018A1B8__(a0, 0xFF00040A);
    }
    func_0018A520_x0018A1B8__(a0, a1, buf, p, 3);
    func_0018A5D8_x0018A1B8__(a1, buf, p, 4);
    func_0018A520_x0018A1B8__(a0, a1, buf, p, 5);
    func_0018A5D8_x0018A1B8__(a1, buf, p, 6);
    func_0018A700_x0018A1B8__(a1, buf, p, 7);
    return 0;
}
void func_0018A318_x0018A318(char **areas, int *sizes, char *base) __asm__("func_0018A318");
/* sfbuf_MakeBufPtr: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdbuf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018A318_x0018A318(char **areas, int *sizes, char *base) {
    int i;
    for (i = 0; i < 8; i++) {
        areas[i] = base;
        base += sizes[i];
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A358);
s32 func_0016E120_x0018A420(s32, s32, s32) __asm__("func_0016E120");
s32 func_0018A420_x0018A420(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_0018A420");
s32 func_0018A420_x0018A420(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  s32 temp_v1;
  s32 var_v0;
  temp_v1 = arg2 - arg3;
  *((s32 *) (((u8 *) arg0) + 8)) = arg1;
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = temp_v1;
  if (temp_v1 <= 0)
  {
    return 0;
  }
  *((s32 *) (((u8 *) arg0) + 0x10)) = arg3;
  *((s32 *) (((u8 *) arg0) + 0x14)) = 0;
  var_v0 = func_0016E120_x0018A420(arg1, temp_v1, arg3);
  *((s32 *) (((u8 *) arg0) + 4)) = var_v0;
  return var_v0;
}
extern void func_0034BD98_x0018A478(void *sj, int kind) __asm__("func_0018A4B8");
void func_0018A478_x0018A478(void *sj) __asm__("func_0018A478");
/* SFBUF_DestroySj: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00201a50.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0018A478_x0018A478(void *sj)
{
    func_0034BD98_x0018A478(sj, 0);
    func_0034BD98_x0018A478(sj, 1);
    func_0034BD98_x0018A478(sj, 2);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A4B8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A520);
typedef struct SfdSj_x0018A5D8 SfdSj_x0018A5D8;
typedef struct SfdSjChunk_x0018A5D8 {
    char *data;
    int len;
} SfdSjChunk_x0018A5D8;
typedef struct SfdSjVtbl_x0018A5D8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018A5D8 *sj);
    int (*getUuid)(SfdSj_x0018A5D8 *sj);
    void (*reset)(SfdSj_x0018A5D8 *sj);
    void (*getChunk)(SfdSj_x0018A5D8 *sj, int id, int n, SfdSjChunk_x0018A5D8 *ck);
    void (*ungetChunk)(SfdSj_x0018A5D8 *sj, int id, SfdSjChunk_x0018A5D8 *ck);
    void (*putChunk)(SfdSj_x0018A5D8 *sj, int id, SfdSjChunk_x0018A5D8 *ck);
    int (*getNumData)(SfdSj_x0018A5D8 *sj, int id);
} SfdSjVtbl_x0018A5D8;
struct SfdSj_x0018A5D8 {
    SfdSjVtbl_x0018A5D8 *vtbl;
};
struct SfdSj_x0018A5D8;
typedef struct SfdItem_x0018A5D8 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018A5D8;
typedef struct SfdRing_x0018A5D8 {
    SfdItem_x0018A5D8 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018A5D8;
typedef struct SfdBufInf_x0018A5D8 {
    char *data;
    struct SfdSj_x0018A5D8 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018A5D8;
typedef struct SfdBufCur_x0018A5D8 {
    char *pos;
    int len;
} SfdBufCur_x0018A5D8;
typedef struct SfdBufDlm_x0018A5D8 {
    char *pos;
    char *end;
} SfdBufDlm_x0018A5D8;
typedef struct SfdBufRing_x0018A5D8 {
    SfdBufInf_x0018A5D8 sup;
    SfdBufDlm_x0018A5D8 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018A5D8 ptsque;
} SfdBufRing_x0018A5D8;
typedef struct SfdBufAring_x0018A5D8 {
    SfdBufInf_x0018A5D8 sup;
    SfdBufCur_x0018A5D8 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018A5D8;
typedef struct SfdUoch_x0018A5D8 {
    struct SfdSj_x0018A5D8 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018A5D8;
typedef struct SfdBufEnt_x0018A5D8 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018A5D8 ring;
        SfdBufAring_x0018A5D8 aring;
        SfdBufInf_x0018A5D8 vfrm;
        SfdUoch_x0018A5D8 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018A5D8;
struct SfdSj_x0018A5D8;
void sfbuf_InitBufData_x0018A5D8(SfdBufEnt_x0018A5D8 *ent, int state, int flag) __asm__("func_0018A750");
void sfbuf_InitBufData_x0018A5D8(SfdBufEnt_x0018A5D8 *ent, int state, int flag) __asm__("func_0018A750");
void func_0018A5D8_x0018A5D8(SfdBufEnt_x0018A5D8 *ents, char **areas, int *sizes, int index) __asm__("func_0018A5D8");
/* sfbuf_InitAringBuf: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdbuf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018A5D8_x0018A5D8(SfdBufEnt_x0018A5D8 *ents, char **areas, int *sizes, int index) {
    char **area = &areas[index];
    int *size = &sizes[index];
    SfdBufEnt_x0018A5D8 *ent = &ents[index];
    SfdBufAring_x0018A5D8 *body = &ent->u.aring;
    sfbuf_InitBufData_x0018A5D8(ent, 2, *size != 0);
    body->sup.data = *area;
    body->sup.sj = (SfdSj_x0018A5D8 *)*size;
    body->sup.buf = 0;
    body->sup.size = 0;
    body->sup.xsize = 0;
    body->sup.p0 = 0;
    body->ch1.pos = 0;
    body->ch1.len = 0;
    body->wpos = 0;
    body->rpos = 0;
    body->wtot = 0;
    body->rtot = 0;
}
typedef struct { s32 base; s32 size; s32 x; s32 bits; s32 n; s32 f14; s32 f18; s32 f1C; } SfdEl_x0018A678_x0018A678;
void func_0018A678_x0018A678(s32 a0, s32 a1, s32 bits, s32 n, s32 x) __asm__("func_0018A678");
void func_0018A678_x0018A678(s32 a0, s32 a1, s32 bits, s32 n, s32 x)
{
  SfdEl_x0018A678_x0018A678 *e = (SfdEl_x0018A678_x0018A678 *) ((a0 + (a1 * 0x74)) + 0x1290);
  s32 bytes;
  int new_var;
  s32 v = e->size;
  s32 new_var2;
  int new_var3;
  s32 new_var4;
  s32 base = e->base;
  if (n >= 2)
  {
    v = v / n;
  }
  bytes = (bits + 7) / 8;
  new_var4 = bytes;
  e->bits = bits;
  e->n = n;
  new_var3 = base + v;
  e->x = x;
  new_var = new_var3;
  new_var2 = base;
  e->f14 = new_var2;
  e->f18 = new_var;
  e->f1C = v / new_var4;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3c0018A678_0;
extern int b3c0018A678_1;
extern int b3cse_pad32_0018A678_0_xxxx;
s32 func_0018A750_x0018A700(s32, s32, s32) __asm__("func_0018A750");
s32 func_0018A770_x0018A700(s32) __asm__("func_0018A770");
void func_0018A700_x0018A700(s32 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_0018A700");
void func_0018A700_x0018A700(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
  int new_var;
  s32 temp_s0;
  new_var = arg0 + (arg3 * 0x74);
  temp_s0 = new_var;
  new_var = temp_s0 + 0x10;
  func_0018A750_x0018A700(temp_s0, 3, 1);
  func_0018A770_x0018A700(new_var);
}
void func_0018A750_x0018A750(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0018A750");
void func_0018A750_x0018A750(u8 *arg0, s32 arg1, s32 arg2)
{
  *((s32 *) (((u8 *) arg0) + 0)) = arg1;
  *((s32 *) (((u8 *) arg0) + 4)) = arg2;
  *((s32 *) (((u8 *) arg0) + 0xC)) = (*((s32 *) (((u8 *) arg0) + 8)) = 0);
  *((s32 *) (((u8 *) arg0) + 0x4C)) = 9;
  *((s32 *) (((u8 *) arg0) + 0x50)) = 9;
}
void func_0018A770(u8 *arg0) {
    s32 var_v0;
    u8 *var_a0;

    var_a0 = arg0;
    var_v0 = 2;
    do {
        var_v0 -= 1;
        *(s32 *)((u8 *)var_a0 + 0) = 0;
        *(s32 *)((u8 *)var_a0 + 4) = 0;
        *(s32 *)((u8 *)var_a0 + 8) = 0;
        *(s32 *)((u8 *)var_a0 + 0xC) = 0;
        var_a0 += 0x10;
    } while (var_v0 >= 0);
}
typedef struct SfdSj_x0018A7A0 SfdSj_x0018A7A0;
typedef struct SfdSjChunk_x0018A7A0 {
    char *data;
    int len;
} SfdSjChunk_x0018A7A0;
typedef struct SfdSjVtbl_x0018A7A0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018A7A0 *sj);
    int (*getUuid)(SfdSj_x0018A7A0 *sj);
    void (*reset)(SfdSj_x0018A7A0 *sj);
    void (*getChunk)(SfdSj_x0018A7A0 *sj, int id, int n, SfdSjChunk_x0018A7A0 *ck);
    void (*ungetChunk)(SfdSj_x0018A7A0 *sj, int id, SfdSjChunk_x0018A7A0 *ck);
    void (*putChunk)(SfdSj_x0018A7A0 *sj, int id, SfdSjChunk_x0018A7A0 *ck);
    int (*getNumData)(SfdSj_x0018A7A0 *sj, int id);
} SfdSjVtbl_x0018A7A0;
struct SfdSj_x0018A7A0 {
    SfdSjVtbl_x0018A7A0 *vtbl;
};
struct SfdSj_x0018A7A0;
struct SfdRecSlot_x0018A7A0;
struct SfdRec_x0018A7A0;
struct SfdMpvCond_x0018A7A0;
struct SfdPlanes_x0018A7A0;
struct SfdFrameInfo_x0018A7A0;
struct SfdPly_x0018A7A0;
typedef int (*SfdTimeFn_x0018A7A0)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0018A7A0 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0018A7A0;
typedef struct SfdTimeRec_x0018A7A0 {
    int valid;
    SfdTimeCode_x0018A7A0 tc;
    int time;
    int unit;
} SfdTimeRec_x0018A7A0;
typedef struct SfdTst_x0018A7A0 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0018A7A0;
typedef struct SfdSyncTally_x0018A7A0 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0018A7A0;
typedef struct SfdSyncQueue_x0018A7A0 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0018A7A0;
typedef struct SfdFieldEntry_x0018A7A0 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0018A7A0;
typedef struct SfdPtsm_x0018A7A0 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0018A7A0;
typedef struct SfdHdrAudio_x0018A7A0 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018A7A0;
typedef struct SfdHdrMux_x0018A7A0 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018A7A0;
typedef struct SfdHdrVideo_x0018A7A0 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018A7A0;
typedef struct SfdHdrInf_x0018A7A0 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018A7A0 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018A7A0 audio;
    SfdHdrVideo_x0018A7A0 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018A7A0;
typedef struct SfdMvInf_x0018A7A0 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0018A7A0;
typedef struct SfdPlyInf_x0018A7A0 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0018A7A0;
typedef void (*SfdErrFn_x0018A7A0)(void *obj, int code);
typedef struct SfdErrInf_x0018A7A0 {
    SfdErrFn_x0018A7A0 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018A7A0;
typedef int (*SfdExtClockFn_x0018A7A0)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0018A7A0)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0018A7A0 {
    SfdTimeFn_x0018A7A0 timefn[6];
    SfdIsSkipFn_x0018A7A0 isSkipFn;
    SfdTimeCode_x0018A7A0 tc;
    SfdTimeRec_x0018A7A0 state;
    SfdTimeRec_x0018A7A0 best;
    SfdTimeRec_x0018A7A0 tot;
    SfdTimeRec_x0018A7A0 cur;
    SfdTimeRec_x0018A7A0 latest;
    SfdTimeRec_x0018A7A0 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0018A7A0 tally;
    SfdSyncQueue_x0018A7A0 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0018A7A0 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0018A7A0 tst;
    SfdFieldEntry_x0018A7A0 fields[64];
    SfdPtsm_x0018A7A0 ptsm;
    char pad1468[36];
} SfdTim_x0018A7A0;
enum {
    SFD_COND_VIDEO_x0018A7A0 = 5,
    SFD_COND_AUDIO_x0018A7A0 = 6,
    SFD_COND_KEEPSUP_x0018A7A0 = 8,
    SFD_COND_SYNCMODE_x0018A7A0 = 15,
    SFD_COND_ETIME_x0018A7A0 = 20,
    SFD_COND_ETUNIT_x0018A7A0 = 21,
    SFD_COND_LNKSTM_x0018A7A0 = 49,
    SFD_COND_SUPPLY_END_x0018A7A0 = 56,
    SFD_COND_DECODE_END_x0018A7A0 = 57,
    SFD_COND_DEMUX_SPLIT_x0018A7A0 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0018A7A0 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0018A7A0 = 80,
    SFD_COND_SYSHD_FN_x0018A7A0 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0018A7A0 = 86,
    SFD_COND_NUM_x0018A7A0 = 100
};
typedef enum SfdBufFmt_x0018A7A0 {
    SFD_BUFFMT_0_x0018A7A0 = 0
} SfdBufFmt_x0018A7A0;
typedef enum SfdBufId_x0018A7A0 {
    SFD_BUF_NONE_x0018A7A0 = 8
} SfdBufId_x0018A7A0;
typedef struct SfdCrePrm_x0018A7A0 {
    struct SfdTrnConfig_x0018A7A0 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0018A7A0 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0018A7A0;
typedef struct SfdItem_x0018A7A0 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018A7A0;
typedef struct SfdRing_x0018A7A0 {
    SfdItem_x0018A7A0 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018A7A0;
typedef struct SfdBufInf_x0018A7A0 {
    char *data;
    struct SfdSj_x0018A7A0 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018A7A0;
typedef struct SfdBufCur_x0018A7A0 {
    char *pos;
    int len;
} SfdBufCur_x0018A7A0;
typedef struct SfdBufDlm_x0018A7A0 {
    char *pos;
    char *end;
} SfdBufDlm_x0018A7A0;
typedef struct SfdBufRing_x0018A7A0 {
    SfdBufInf_x0018A7A0 sup;
    SfdBufDlm_x0018A7A0 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018A7A0 ptsque;
} SfdBufRing_x0018A7A0;
typedef struct SfdBufAring_x0018A7A0 {
    SfdBufInf_x0018A7A0 sup;
    SfdBufCur_x0018A7A0 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018A7A0;
typedef struct SfdUoch_x0018A7A0 {
    struct SfdSj_x0018A7A0 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018A7A0;
typedef struct SfdBufEnt_x0018A7A0 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018A7A0 ring;
        SfdBufAring_x0018A7A0 aring;
        SfdBufInf_x0018A7A0 vfrm;
        SfdUoch_x0018A7A0 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018A7A0;
typedef int (*SfdTrnFn_x0018A7A0)();
typedef struct SfdTrnConfig_x0018A7A0 {
    SfdTrnFn_x0018A7A0 *fns[9];
} SfdTrnConfig_x0018A7A0;
typedef struct SfdMpsPrm_x0018A7A0 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0018A7A0 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0018A7A0;
typedef struct SfdAdxCfg_x0018A7A0 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0018A7A0;
typedef void (*SfdAdxStep_x0018A7A0)(struct SfdPly_x0018A7A0 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0018A7A0 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0018A7A0 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0018A7A0 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0018A7A0;
typedef struct SfdAoap_x0018A7A0 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0018A7A0 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0018A7A0 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0018A7A0 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0018A7A0 *h);
    void (*setSpeed)(struct SfdPly_x0018A7A0 *h, int speed);
} SfdAoap_x0018A7A0;
typedef struct SfainfOut_x0018A7A0 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0018A7A0;
typedef struct SfainfList_x0018A7A0 {
    int nout;
    SfainfOut_x0018A7A0 out[3];
} SfainfList_x0018A7A0;
typedef struct SfdTrnSlot_x0018A7A0 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0018A7A0 *mps;
        struct SfdMpv_x0018A7A0 *mpv;
        SfdAdxCtx_x0018A7A0 *adxt;
        SfdAoap_x0018A7A0 *aoap;
        SfainfList_x0018A7A0 *uo;
    } hn;
    SfdTrnFn_x0018A7A0 *fns;
    SfdBufId_x0018A7A0 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0018A7A0;
typedef struct SfdTsum_x0018A7A0 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0018A7A0;
typedef struct SfdTmrInf_x0018A7A0 {
    SfdTsum_x0018A7A0 tsum[6];
} SfdTmrInf_x0018A7A0;
int sfd_ReportError_x0018A7A0(void *sfd, int code) __asm__("func_0018D650");
int SFTRN_IsSetup_x0018A7A0(void *sfd, int index) __asm__("func_0019C188");
struct SfdSj_x0018A7A0;
typedef struct M2vErrInf_x0018A7A0 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018A7A0;
typedef struct Mpeg2Ext_x0018A7A0 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018A7A0;
typedef enum M2vFrameRate_x0018A7A0 {
    M2V_FRAME_RATE_FORBIDDEN_x0018A7A0 = 0
} M2vFrameRate_x0018A7A0;
typedef enum M2vPicType_x0018A7A0 {
    M2V_PICTYPE_I_x0018A7A0 = 1,
    M2V_PICTYPE_P_x0018A7A0 = 2,
    M2V_PICTYPE_B_x0018A7A0 = 3,
    M2V_PICTYPE_D_x0018A7A0 = 4
} M2vPicType_x0018A7A0;
typedef enum M2vPicStruct_x0018A7A0 {
    M2V_PICSTRUCT_TOP_FIELD_x0018A7A0 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018A7A0 = 2,
    M2V_PICSTRUCT_FRAME_x0018A7A0 = 3
} M2vPicStruct_x0018A7A0;
typedef enum M2vPicAtrF64_x0018A7A0 {
    M2V_PICATR_F64_0_x0018A7A0 = 0
} M2vPicAtrF64_x0018A7A0;
typedef struct M2vPicAtr_x0018A7A0 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018A7A0 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018A7A0 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018A7A0 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018A7A0 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018A7A0;
typedef void (*M2vUsrDatFn_x0018A7A0)(void *obj, int level);
typedef struct M2vUsrSj_x0018A7A0 {
    struct SfdSj_x0018A7A0 *sj;
    M2vUsrDatFn_x0018A7A0 fn;
    void *obj;
} M2vUsrSj_x0018A7A0;
typedef struct M2vPicUsr_x0018A7A0 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018A7A0;
typedef void (*M2vCondFn_x0018A7A0)();
typedef struct M2vObj_x0018A7A0 {
    int stat;
    M2vErrInf_x0018A7A0 err;
    M2vCondFn_x0018A7A0 cond[16];
    M2vPicAtr_x0018A7A0 picatr;
    char pad216[64];
    M2vUsrSj_x0018A7A0 usrsj[4];
    M2vPicUsr_x0018A7A0 picusr;
    char pad340[12];
    Mpeg2Ext_x0018A7A0 ext;
    char pad1656[8];
} M2vObj_x0018A7A0;
extern void M2V_SetErrFunc_x0018A7A0(M2vObj_x0018A7A0 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0018A7A0 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0018A7A0;
typedef struct sceMpeg_x0018A7A0 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0018A7A0 *sys;
} sceMpeg_x0018A7A0;
typedef enum {
    sceMpegCbError_x0018A7A0,
    sceMpegCbNodata_x0018A7A0,
    sceMpegCbStopDMA_x0018A7A0,
    sceMpegCbRestartDMA_x0018A7A0,
    sceMpegCbBackground_x0018A7A0,
    sceMpegCbTimeStamp_x0018A7A0,
    sceMpegCbStr_x0018A7A0,
    sceMpegCbNum_x0018A7A0
} sceMpegCbType_x0018A7A0;
typedef struct {
    sceMpegCbType_x0018A7A0 type;
    char *errMessage;
} sceMpegCbDataError_x0018A7A0;
typedef struct {
    sceMpegCbType_x0018A7A0 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0018A7A0;
typedef struct {
    sceMpegCbType_x0018A7A0 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0018A7A0;
typedef union {
    sceMpegCbType_x0018A7A0 type;
    sceMpegCbDataError_x0018A7A0 error;
    sceMpegCbDataTimeStamp_x0018A7A0 ts;
    sceMpegCbDataStr_x0018A7A0 str;
} sceMpegCbData_x0018A7A0;
typedef int (*sceMpegCallback_x0018A7A0)(sceMpeg_x0018A7A0 *mp, sceMpegCbData_x0018A7A0 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0018A7A0 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0018A7A0;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0018A7A0;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0018A7A0;
typedef struct {
    _sceMpegPicture_x0018A7A0 *ref_image;
    _sceMpegPicture_x0018A7A0 *prev_image;
    _sceMpegPicture_x0018A7A0 *decode;
    _sceMpegPicture_x0018A7A0 *image;
} _sceMpegPictureSlot_x0018A7A0;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0018A7A0;
typedef void (*_sceMpegMcKernel_x0018A7A0)(_sceMpegMcFetch_x0018A7A0 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0018A7A0 luma_kernel[4];
    _sceMpegMcKernel_x0018A7A0 chroma_kernel[4];
    _sceMpegMcFetch_x0018A7A0 luma[4];
    _sceMpegMcFetch_x0018A7A0 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0018A7A0;
typedef struct _sceMpegDecoder_x0018A7A0 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0018A7A0 callbacks[sceMpegCbNum_x0018A7A0];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0018A7A0 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0018A7A0 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0018A7A0 slots[3];
    _sceMpegPicture_x0018A7A0 pictures[9];
    _sceMpegSprBuffer_x0018A7A0 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0018A7A0 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0018A7A0;
typedef struct SfdPlanes_x0018A7A0 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018A7A0;
typedef struct SfdUserData_x0018A7A0 {
    char data[512];
    int size;
} SfdUserData_x0018A7A0;
typedef struct SfdRecVideo_x0018A7A0 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0018A7A0 stamp;
    SfdUserData_x0018A7A0 user;
} SfdRecVideo_x0018A7A0;
typedef struct SfdSlot_x0018A7A0 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0018A7A0 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018A7A0 *blob;
    M2vPicAtr_x0018A7A0 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0018A7A0;
typedef struct SfdBufPool_x0018A7A0 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0018A7A0 slot[18];
} SfdBufPool_x0018A7A0;
typedef struct SfdMpvCond_x0018A7A0 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018A7A0;
typedef struct SfdMpvWorkBufs_x0018A7A0 {
    int w[2];
} SfdMpvWorkBufs_x0018A7A0;
typedef struct SfdMpvFrameBufs_x0018A7A0 {
    int w[16];
} SfdMpvFrameBufs_x0018A7A0;
typedef struct SfdIpuEntry_x0018A7A0 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0018A7A0;
typedef struct SfdDmaTag_x0018A7A0 {
    long long tag;
    long long pad;
} SfdDmaTag_x0018A7A0;
typedef struct SfdIpuStream_x0018A7A0 {
    void *base;
    SfdDmaTag_x0018A7A0 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0018A7A0 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0018A7A0;
typedef struct SfdIpuCtl_x0018A7A0 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0018A7A0 mpeg;
    SfdIpuStream_x0018A7A0 stream;
    sceMpegCbDataError_x0018A7A0 error;
} SfdIpuCtl_x0018A7A0;
typedef struct SfdPtsComp_x0018A7A0 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0018A7A0 ptsent;
} SfdPtsComp_x0018A7A0;
typedef struct SfdMpv_x0018A7A0 {
    void *handle;
    SfdMpvCond_x0018A7A0 cond;
    SfdMpvWorkBufs_x0018A7A0 work;
    SfdMpvFrameBufs_x0018A7A0 bufs;
    SfdSlot_x0018A7A0 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0018A7A0 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0018A7A0 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0018A7A0 planes[2];
    SfdSlot_x0018A7A0 *first;
    SfdSlot_x0018A7A0 *second;
    SfdSlot_x0018A7A0 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0018A7A0 slots[16];
    SfdBufPool_x0018A7A0 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0018A7A0 ipu;
} SfdMpv_x0018A7A0;
typedef enum SfdPicType_x0018A7A0 {
    SFD_PICTYPE_I_x0018A7A0 = 1,
    SFD_PICTYPE_P_x0018A7A0 = 2,
    SFD_PICTYPE_B_x0018A7A0 = 3
} SfdPicType_x0018A7A0;
typedef enum SfdFrmInfF60_x0018A7A0 {
    SFD_FRMINF_F60_0_x0018A7A0 = 0
} SfdFrmInfF60_x0018A7A0;
typedef struct SfdFrameDetail_x0018A7A0 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0018A7A0;
typedef struct SfdFrameInfo_x0018A7A0 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0018A7A0 picType;
    int time;
    int unit;
    SfdBufFmt_x0018A7A0 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018A7A0 *picUsr;
    SfdFrmInfF60_x0018A7A0 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0018A7A0 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0018A7A0;
typedef struct SfdVfrm_x0018A7A0 {
    int used;
    int f4;
    SfdFrameInfo_x0018A7A0 inf;
} SfdVfrm_x0018A7A0;
typedef struct SfdPly_x0018A7A0 SfdPly_x0018A7A0;
typedef struct SfdRec_x0018A7A0 SfdRec_x0018A7A0;
typedef struct SfdRecSub_x0018A7A0 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0018A7A0;
typedef struct SfdRecSlot_x0018A7A0 {
    SfdRec_x0018A7A0 *rec;
    SfdRecSub_x0018A7A0 sub;
} SfdRecSlot_x0018A7A0;
typedef struct SfdSysHd_x0018A7A0 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0018A7A0;
typedef struct SfdRecSys_x0018A7A0 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0018A7A0 syshd;
} SfdRecSys_x0018A7A0;
typedef struct SfdRecAudio_x0018A7A0 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0018A7A0;
struct SfdRec_x0018A7A0 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0018A7A0 hdrInf;
    SfdRecSys_x0018A7A0 sys;
    char pad2616[152];
    SfdRecVideo_x0018A7A0 video;
    SfdRecAudio_x0018A7A0 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0018A7A0 {
    SfdCrePrm_x0018A7A0 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0018A7A0 hdr;
    SfdMvInf_x0018A7A0 mvInf;
    char pad2380[4];
    SfdPlyInf_x0018A7A0 plyInf;
    SfdErrInf_x0018A7A0 err;
    int cond[SFD_COND_NUM_x0018A7A0];
    int cond2[SFD_COND_NUM_x0018A7A0];
    char pad3364[4];
    SfdTim_x0018A7A0 tim;
    SfdBufEnt_x0018A7A0 buf[8];
    SfdVfrm_x0018A7A0 vfrm[16];
    SfdTrnSlot_x0018A7A0 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0018A7A0 mps;
    char pad8944[176];
    SfdMpv_x0018A7A0 mpv;
    SfdAdxCtx_x0018A7A0 adxt;
    char pad13680[100];
    SfdAoap_x0018A7A0 aoap;
    char pad13804[4];
    SfainfList_x0018A7A0 uo;
    char pad13860[4];
    SfdRecSlot_x0018A7A0 see;
    SfdTmrInf_x0018A7A0 tmr;
};
int sfbuf_ChkSupSj_x0018A7A0(SfdBufInf_x0018A7A0 *inf) __asm__("func_0018A848");
int sfbuf_SetSupplySjSub_x0018A7A0(SfdPly_x0018A7A0 *h, SfdBufInf_x0018A7A0 *inf, int index) __asm__("func_0018A890");
int sfbuf_ChkSupSj_x0018A7A0(SfdBufInf_x0018A7A0 *inf) __asm__("func_0018A848");
int sfbuf_SetSupplySjSub_x0018A7A0(SfdPly_x0018A7A0 *h, SfdBufInf_x0018A7A0 *inf, int index) __asm__("func_0018A890");
int func_0018A7A0_x0018A7A0(void *sfd, SfdBufInf_x0018A7A0 *inf) __asm__("func_0018A7A0");
/* SFBUF_SetSupplySj: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdbuf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018A7A0_x0018A7A0(void *sfd, SfdBufInf_x0018A7A0 *inf) {
    SfdPly_x0018A7A0 *h = sfd;
    int index;
    if (sfbuf_ChkSupSj_x0018A7A0(inf) != 0) {
        return sfd_ReportError_x0018A7A0(h, 0xFF000408);
    }
    if (SFTRN_IsSetup_x0018A7A0(h, 1) != 0) {
        index = 0;
    } else if (SFTRN_IsSetup_x0018A7A0(h, 2) != 0) {
        index = 1;
    } else if (SFTRN_IsSetup_x0018A7A0(h, 3) != 0) {
        index = 2;
    } else {
        index = 0;
    }
    return sfbuf_SetSupplySjSub_x0018A7A0(h, inf, index);
}
typedef unsigned char Uint8_x0018A848;
typedef unsigned int Uint32_x0018A848;
typedef signed int Sint32_x0018A848;
typedef char Char8_x0018A848;
typedef struct SJ_OBJ_x0018A848 *SJ_x0018A848;
typedef struct {
        Uint8_x0018A848 *data;
        Sint32_x0018A848 len;
} SJCK_x0018A848;
typedef struct {
        Uint8_x0018A848 data[16];
} SJUUID_x0018A848;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x0018A848 sj);
        const SJUUID_x0018A848 *(*GetUuid)(SJ_x0018A848 sj);
        void (*Reset)(SJ_x0018A848 sj);
        void (*GetChunk)(SJ_x0018A848 sj, Sint32_x0018A848 id, Sint32_x0018A848 nbyte, SJCK_x0018A848 *ck);
        void (*UngetChunk)(SJ_x0018A848 sj, Sint32_x0018A848 id, SJCK_x0018A848 *ck);
        void (*PutChunk)(SJ_x0018A848 sj, Sint32_x0018A848 id, SJCK_x0018A848 *ck);
        Sint32_x0018A848 (*GetNumData)(SJ_x0018A848 sj, Sint32_x0018A848 id);
        Sint32_x0018A848 (*IsGetChunk)(SJ_x0018A848 sj, Sint32_x0018A848 id, Sint32_x0018A848 nbyte, Sint32_x0018A848 *rbyte);
        void (*EntryErrFunc)(SJ_x0018A848 sj, void (*func)(void *obj, Char8_x0018A848 *msg), void *obj);
} SJ_IF_x0018A848;
struct SJ_OBJ_x0018A848 {
        SJ_IF_x0018A848 *vtbl;
};
typedef struct {
        Sint32_x0018A848 kind;
        SJ_x0018A848 sj;
        Uint32_x0018A848 ofst;
        Sint32_x0018A848 size;
        Sint32_x0018A848 xsize;
        Sint32_x0018A848 x14;
} SFBUF_SUP_x0018A848;
Sint32_x0018A848 func_0018A848_x0018A848(SFBUF_SUP_x0018A848 *sup) __asm__("func_0018A848");
/* sfbuf_CheckSup: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_buf.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0018A848 func_0018A848_x0018A848(SFBUF_SUP_x0018A848 *sup)
{
        if (sup->sj == 0) {
                return -1;
        }
        if (sup->kind == 0) {
                if (sup->ofst == 0) {
                        return -1;
                }
                if (sup->size <= 0) {
                        return -1;
                }
                if (sup->x14 > 0) {
                        return -1;
                }
        }
        return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018A890);
typedef struct { s32 w[6]; } SfdW6_x0018A900_;
void func_0018D908_x0018A900_(void *) __asm__("func_0018D908");
void func_0018D920_x0018A900_(void *) __asm__("func_0018D920");
void func_0018A9A0_x0018A900_(u8 *) __asm__("func_0018A9A0");
void func_00198450_x0018A900_(u8 *) __asm__("func_00198450");
void func_0018A900_x0018A900_(u8 *o, SfdW6_x0018A900_ *src, s32 *p2, s32 v) __asm__("func_0018A900");
void func_0018A900_x0018A900_(u8 *o, SfdW6_x0018A900_ *src, s32 *p2, s32 v)
{
    s32 lk[4];

    func_0018D908_x0018A900_(lk);
    p2[1] = v;
    *(SfdW6_x0018A900_ *)o = *src;
    func_0018A9A0_x0018A900_(o + 0x18);
    *(s32 *)(o + 0x20) = 0;
    *(s32 *)(o + 0x24) = 0;
    func_00198450_x0018A900_(o + 0x28);
    func_0018D920_x0018A900_(lk);
}
void func_0018A9A0_x0018A9A0(u8 *arg0) __asm__("func_0018A9A0");
void func_0018A9A0_x0018A9A0(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
}
typedef struct { s32 w[4]; } Blk16_x0018A9B0;
void func_0018A9B0_x0018A9B0(u8 *p, s32 i, s32 j, Blk16_x0018A9B0 *src) __asm__("func_0018A9B0");
void func_0018A9B0_x0018A9B0(u8 *p, s32 i, s32 j, Blk16_x0018A9B0 *src)
{
    p += i * 0x74;
    p += 0x1290;
    p += j * 16;
    *(Blk16_x0018A9B0 *)p = *src;
}
typedef struct { s32 w[4]; } Blk16_x0018A9F8;
void func_0018A9F8_x0018A9F8(u8 *p, s32 i, s32 j, Blk16_x0018A9F8 *src) __asm__("func_0018A9F8");
void func_0018A9F8_x0018A9F8(u8 *p, s32 i, s32 j, Blk16_x0018A9F8 *src)
{
    p += i * 0x74;
    p += 0x1290;
    p += j * 16;
    *src = *(Blk16_x0018A9F8 *)p;
}
void func_0018AA40_x0018AA40(s32 arg0, s32 arg1, s32 *arg2) __asm__("func_0018AA40");
void func_0018AA40_x0018AA40(s32 arg0, s32 arg1, s32 *arg2)
{
  int new_var;
  new_var = arg1 * 0x74;
  *arg2 = *((s32 *) (((u8 *) (arg0 + new_var)) + 0x1294));
}
s32 func_0018AA98_x0018AA68(s32 a0, s32 a1, s32 a2, s32 a3) __asm__("func_0018AA98");
s32 func_0018AA68_x0018AA68(s32 a0, s32 a1, s32 a2) __asm__("func_0018AA68");
s32 func_0018AA68_x0018AA68(s32 a0, s32 a1, s32 a2) {
    return func_0018AA98_x0018AA68(a0, a1, a2, 0);
}
s32 func_0018AA98_x0018AA80(s32 a0, s32 a1, s32 a2, s32 a3) __asm__("func_0018AA98");
s32 func_0018AA80_x0018AA80(s32 a0, s32 a1, s32 a2) __asm__("func_0018AA80");
s32 func_0018AA80_x0018AA80(s32 a0, s32 a1, s32 a2) {
    return func_0018AA98_x0018AA80(a0, a1, a2, 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AA98);
void func_0018AB70_x0018AB40(s32, s32, s32, s32) __asm__("func_0018AB70");
void func_0018AB40_x0018AB40(s32 a, s32 b, s32 c) __asm__("func_0018AB40");
void func_0018AB40_x0018AB40(s32 a, s32 b, s32 c) {
    func_0018AB70_x0018AB40(a, b, c, 0);
}
void func_0018AB70_x0018AB58(s32, s32, s32, s32) __asm__("func_0018AB70");
void func_0018AB58_x0018AB58(s32 a, s32 b, s32 c) __asm__("func_0018AB58");
void func_0018AB58_x0018AB58(s32 a, s32 b, s32 c) {
    func_0018AB70_x0018AB58(a, b, c, 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018AB70);
extern void sfbuf_PeekChunk_x0018ACC0(void *buf, int a1, void *out0, void *out1) __asm__("func_0018AD50");
typedef struct {
    int start;
    int len;
} SfChunk_x0018ACC0;
typedef struct {
    int pos;
    int next;
} SfConti_x0018ACC0;
typedef struct {
    void *dummy0;
    void *buf;
    int pad[4];
    SfConti_x0018ACC0 conti;
} SfBuf_x0018ACC0;
void func_0018ACC0_x0018ACC0(SfBuf_x0018ACC0 *a0) __asm__("func_0018ACC0");
/* sfbuf_ResetConti: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003272c0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0018ACC0_x0018ACC0(SfBuf_x0018ACC0 *a0) {
    SfConti_x0018ACC0 *s0;
    SfChunk_x0018ACC0 chunk1;
    SfChunk_x0018ACC0 chunk2;
    unsigned int pos;
    s0 = &a0->conti;
    sfbuf_PeekChunk_x0018ACC0(a0->buf, 1, &chunk1, &chunk2);
    pos = (unsigned int)s0->pos;
    if ((unsigned int)pos < (unsigned int)chunk1.start) {
        goto check2;
    }
    if ((unsigned int)pos < (unsigned int)(chunk1.start + chunk1.len)) {
        return;
    }
check2:
    if ((unsigned int)pos < (unsigned int)chunk2.start) {
        s0->pos = 0;
        s0->next = 0;
        return;
    }
    if ((unsigned int)pos < (unsigned int)(chunk2.start + chunk2.len)) {
        return;
    }
    s0->pos = 0;
    s0->next = 0;
}
typedef unsigned char Uint8_x0018AD50;
typedef int Sint32_x0018AD50;
typedef struct _sj_obj_x0018AD50 {
    struct _sj_vtbl_x0018AD50 *vtbl;
} SJ_OBJ_x0018AD50, *SJ_x0018AD50;
typedef struct {
    Uint8_x0018AD50 *data;
    Sint32_x0018AD50 len;
} SJCK_x0018AD50;
struct _sj_vtbl_x0018AD50 {
    void (*QueryInterface)();
    void (*AddRef)();
    void (*Release)();
    void (*Destroy)();
    void *(*GetUuid)();
    void (*Reset)();
    void (*GetChunk)(SJ_x0018AD50, Sint32_x0018AD50, Sint32_x0018AD50, SJCK_x0018AD50 *);
    void (*UngetChunk)(SJ_x0018AD50, Sint32_x0018AD50, SJCK_x0018AD50 *);
    void (*PutChunk)();
    Sint32_x0018AD50 (*GetNumData)(SJ_x0018AD50, Sint32_x0018AD50);
    Sint32_x0018AD50 (*IsGetChunk)();
    void (*EntryErrFunc)();
};
Sint32_x0018AD50 func_0018AD50_x0018AD50(SJ_x0018AD50 sj, Sint32_x0018AD50 type, SJCK_x0018AD50 *ck1, SJCK_x0018AD50 *ck2) __asm__("func_0018AD50");
/* sfbuf_PeekChunk: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0034c588.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x0018AD50 func_0018AD50_x0018AD50(SJ_x0018AD50 sj, Sint32_x0018AD50 type, SJCK_x0018AD50 *ck1, SJCK_x0018AD50 *ck2)
{
    Sint32_x0018AD50 ndata;
    ndata = ((sj)->vtbl->GetNumData((sj), (type)));
    ((sj)->vtbl->GetChunk((sj), (type), (0x7FFFFFFF), (ck1)));
    if (ck1->len < ndata) {
        ((sj)->vtbl->GetChunk((sj), (type), (0x7FFFFFFF), (ck2)));
        ((sj)->vtbl->UngetChunk((sj), (type), (ck2)));
    } else {
        ck2->data = 0;
        ck2->len = 0;
    }
    ((sj)->vtbl->UngetChunk((sj), (type), (ck1)));
    return ndata;
}
typedef s32 (*CriVFn_x0018AE48)(void *self, s32 a1, s32 a2, s32 *out);
typedef s32 (*CriVFn3_x0018AE48)(void *self, s32 a1, s32 *out);
typedef struct CriObj_x0018AE48 { CriVFn_x0018AE48 *vtbl; } CriObj_x0018AE48;
s32 func_0018AE48_x0018AE48(CriObj_x0018AE48 *obj, s32 a1, s32 a2) __asm__("func_0018AE48");
s32 func_0018AE48_x0018AE48(CriObj_x0018AE48 *obj, s32 a1, s32 a2) {
    s32 buf[4];
    s32 flag;

    flag = a1 == 0;
    obj->vtbl[6](obj, a1, a2, buf);
    ((CriVFn3_x0018AE48)obj->vtbl[8])(obj, flag, buf);
    return buf[1];
}
s32 func_0018D908_x0018AEA0(void *) __asm__("func_0018D908");
s32 func_0018D920_x0018AEA0(void *) __asm__("func_0018D920");
void func_0018AEA0_x0018AEA0(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) __asm__("func_0018AEA0");
void func_0018AEA0_x0018AEA0(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3)
{
  u8 sp[8];
  u8 *new_var;
  u8 *temp_s0;
  temp_s0 = arg0 + (arg1 * 0x74);
  func_0018D908_x0018AEA0(sp);
  new_var = (u8 *) (temp_s0 + 0x12A8);
  *arg2 = *((s32 *) (((u8 *) temp_s0) + 0x12A8));
  *arg3 = *((s32 *) (new_var + 4));
  func_0018D920_x0018AEA0(sp);
}
s32 func_0018D908_x0018AF10(void *) __asm__("func_0018D908");
s32 func_0018D920_x0018AF10(void *) __asm__("func_0018D920");
void func_0018AF10_x0018AF10(s32 arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_0018AF10");
void func_0018AF10_x0018AF10(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
  u8 *new_var;
  u8 sp[8];
  u8 *temp_s0;
  u8 *new_var2;
  temp_s0 = arg0 + (arg1 * 0x74);
  func_0018D908_x0018AF10(sp);
  new_var2 = temp_s0 + 0x12A8;
  *((s32 *) (((u8 *) temp_s0) + 0x12A8)) = arg2;
  *((s32 *) (((u8 *) (new_var = new_var2)) + 4)) = arg3;
  func_0018D920_x0018AF10(sp);
}
s32 func_0018AF78_x0018AF78(s32 arg0, s32 arg1) __asm__("func_0018AF78");
s32 func_0018AF78_x0018AF78(s32 arg0, s32 arg1)
{
  s32 *new_var;
  new_var = (s32 *) (((u8 *) (arg0 + (arg1 * 0x74))) + 0x129C);
  return *new_var;
}
s32 func_0018AF98_x0018AF98(s32 arg0, s32 arg1) __asm__("func_0018AF98");
s32 func_0018AF98_x0018AF98(s32 arg0, s32 arg1)
{
  int new_var;
  new_var = arg1 * 0x74;
  return *((s32 *) (((u8 *) (arg0 + new_var)) + 0x12B4));
}
typedef struct SjObj_x0018AFB8_x0018AFB8 { struct { u8 pad[0x24]; s32 (*fn)(struct SjObj_x0018AFB8_x0018AFB8 *, s32); } *vt; } SjObj_x0018AFB8_x0018AFB8;
typedef struct { s32 pad0; SjObj_x0018AFB8_x0018AFB8 *sj; u8 pad[0x18]; s32 a; s32 b; } SfdEl_x0018AFB8_x0018AFB8;
void func_0018D908_x0018AFB8(s32 *) __asm__("func_0018D908");
void func_0018D920_x0018AFB8(s32 *) __asm__("func_0018D920");
s32 func_0018AFB8_x0018AFB8(s32 a0, s32 a1) __asm__("func_0018AFB8");
s32 func_0018AFB8_x0018AFB8(s32 a0, s32 a1)
{
    SfdEl_x0018AFB8_x0018AFB8 *e = (SfdEl_x0018AFB8_x0018AFB8 *)(a0 + a1 * 0x74 + 0x1290);
    s32 buf[4];
    s32 r, b;

    func_0018D908_x0018AFB8(buf);
    r = e->a;
    b = e->b;
    if (r == 0 && b != 0) {
        r = b + e->sj->vt->fn(e->sj, 1);
    }
    if (r < 0) {
        r = 0x7FFFFFFF;
    }
    func_0018D920_x0018AFB8(buf);
    return r;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B058);
void func_0018B0B8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u8 *temp_a0;

    temp_a0 = arg0 + (arg1 * 0x74) + 0x1290;
    temp_v0 = *(s32 *)((u8 *)temp_a0 + 0x24);
    if (temp_v0 >= 0) {
        *(s32 *)((u8 *)temp_a0 + 0x24) = (s32) (temp_v0 + arg2);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B0F0);
typedef struct { s32 kind; s32 f4; u8 pad[0x8]; s32 s[0x19]; } SfdEnt74_x0018B298;
s32 func_0018D650_x0018B298(u8 *, s32) __asm__("func_0018D650");
void func_0018D908_x0018B298(void *) __asm__("func_0018D908");
void func_0018D920_x0018B298(void *) __asm__("func_0018D920");
s32 func_0018B298_x0018B298(u8 *a0, s32 idx, s32 n) __asm__("func_0018B298");
s32 func_0018B298_x0018B298(u8 *a0, s32 idx, s32 n)
{
    SfdEnt74_x0018B298 *tbl = (SfdEnt74_x0018B298 *)(a0 + 0x1280);
    SfdEnt74_x0018B298 *e = &tbl[idx];
    s32 *s;
    s32 r = 0;
    s32 v;
    s32 lk[4];

    if (n == 0) {
        return 0;
    }
    if (e->f4 == 0) {
        return func_0018D650_x0018B298(a0, 0xFF000401);
    }
    s = e->s;
    func_0018D908_x0018B298(lk);
    s[8] += n;
    if (s[8] >= s[7]) {
        s[8] -= s[7];
    }
    s[10] += n;
    if (s[10] > s[11] + s[7]) {
        r = func_0018D650_x0018B298(a0, 0xFF000406);
    }
    *(s32 *)(a0 + 0x44) = 1;
    func_0018D920_x0018B298(lk);
    return r;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3cse_pad32_0018B298_0_xxxx;
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B390);
typedef struct { s32 kind; s32 f4; u8 pad[0x8]; s32 s[0x19]; } SfdEnt74_x0018B540;
s32 func_0018D650_x0018B540(u8 *, s32) __asm__("func_0018D650");
void func_0018D908_x0018B540(void *) __asm__("func_0018D908");
void func_0018D920_x0018B540(void *) __asm__("func_0018D920");
s32 func_0018B540_x0018B540(u8 *a0, s32 idx, s32 n) __asm__("func_0018B540");
s32 func_0018B540_x0018B540(u8 *a0, s32 idx, s32 n)
{
    SfdEnt74_x0018B540 *tbl = (SfdEnt74_x0018B540 *)(a0 + 0x1280);
    SfdEnt74_x0018B540 *e = &tbl[idx];
    s32 *s;
    s32 r = 0;
    s32 v;
    s32 lk[4];

    if (n == 0) {
        return 0;
    }
    if (e->f4 == 0) {
        return func_0018D650_x0018B540(a0, 0xFF000401);
    }
    s = e->s;
    func_0018D908_x0018B540(lk);
    s[9] += n;
    if (s[9] >= s[7]) {
        s[9] -= s[7];
    }
    s[11] += n;
    if (s[11] > s[10]) {
        r = func_0018D650_x0018B540(a0, 0xFF000407);
    }
    *(s32 *)(a0 + 0x44) = 1;
    func_0018D920_x0018B540(lk);
    return r;
}
s32 func_0018B630(void) {
    return 0;
}
s32 func_0018B638_x0018B638(u8 *arg0) __asm__("func_0018B638");
s32 func_0018B638_x0018B638(u8 *arg0)
{
  *((s32 *) (((u8 *) arg0) + 0x44)) = 1;
 do { return 0; } while (0);
}
typedef struct { s32 f0; s32 f4; u8 pad[0x44]; s32 f4C; u8 pad2[0x24]; } SfdEnt74_x0018B648;
s32 func_0019C0D8_x0018B648(u8 *, s32, s32, s32, s32) __asm__("func_0019C0D8");
s32 func_0018B648_x0018B648(u8 *a0, s32 a1, s32 a2) __asm__("func_0018B648");
s32 func_0018B648_x0018B648(u8 *a0, s32 a1, s32 a2)
{
    SfdEnt74_x0018B648 *tbl = (SfdEnt74_x0018B648 *)(a0 + 0x1280);
    SfdEnt74_x0018B648 *e = &tbl[a1];
    if (e->f4 == 0) {
        return func_0019C0D8_x0018B648(a0, e->f4C, 11, a2, 0);
    }
    return 0;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3c0018B648_0;
s32 func_0019C0D8_x0018B6A0(s32, s32, s32, s32, s32) __asm__("func_0019C0D8");
s32 func_0018B6A0_x0018B6A0(u8 *p, s32 idx, s32 a2) __asm__("func_0018B6A0");
s32 func_0018B6A0_x0018B6A0(u8 *p, s32 idx, s32 a2)
{
    u8 *base;
    s32 *t;
    s32 r;

    base = p + 0x1280;
    r = 0;
    t = (s32 *)(base + idx * 116);
    if (t[1] == 0) {
        r = func_0019C0D8_x0018B6A0((s32)p, t[19], 12, a2, 0);
    }
    ((s32 *)p)[17] = 1;
    return r;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3c0018B6A0_0;
extern int b3cse_pad32_0018B6A0_0_xxxx;
void func_0018B710_x0018B710(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0018B710");
void func_0018B710_x0018B710(s32 arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  new_var = ((u8 *) (arg0 + (arg1 * 0x74))) + 0x1288;
  *((s32 *) new_var) = arg2;
}
s32 func_0018B730_x0018B730(s32 arg0, s32 arg1) __asm__("func_0018B730");
s32 func_0018B730_x0018B730(s32 arg0, s32 arg1)
{
  s32 *new_var;
  new_var = (s32 *) (((u8 *) (arg0 + (arg1 * 0x74))) + 0x1288);
  return *new_var;
}
void func_0018B750_x0018B750(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0018B750");
void func_0018B750_x0018B750(s32 arg0, s32 arg1, s32 arg2)
{
  u8 *new_var2;
  s32 new_var;
  new_var = arg2;
  new_var2 = (u8 *) (arg0 + (arg1 * 0x74));
  *((s32 *) (new_var2 + 0x128C)) = new_var;
}
s32 func_0018B770_x0018B770(s32 arg0, s32 arg1) __asm__("func_0018B770");
s32 func_0018B770_x0018B770(s32 arg0, s32 arg1)
{
  s32 *new_var;
  new_var = (s32 *) (((u8 *) (arg0 + (arg1 * 0x74))) + 0x128C);
  return *new_var;
}
s32 func_0018AA80_x0018B790(s32, s32, s32 *) __asm__("func_0018AA80");
s32 func_0018B790_x0018B790(s32 a0, s32 a1) __asm__("func_0018B790");
s32 func_0018B790_x0018B790(s32 a0, s32 a1)
{
    s32 buf[8];
    func_0018AA80_x0018B790(a0, a1, buf);
    return buf[1] + buf[3];
}
s32 func_0018AA68_x0018B7B8(s32, s32, s32 *) __asm__("func_0018AA68");
s32 func_0018B7B8_x0018B7B8(s32 a0, s32 a1) __asm__("func_0018B7B8");
s32 func_0018B7B8_x0018B7B8(s32 a0, s32 a1) { s32 buf[8]; func_0018AA68_x0018B7B8(a0, a1, buf); return buf[1] + buf[3]; }
s32 func_0018B7E0(s32 arg0) {
    if (func_0018D870() != 0) {
        return func_0018D650(0, 0xFF000161, 1);
    }
    func_00199818(arg0, 0x31, 1);
    return 0;
}
s32 func_001999E0_x0018B840(s32, s32) __asm__("func_001999E0");
s32 func_0018B840_x0018B840(s32 a0) __asm__("func_0018B840");
s32 func_0018B840_x0018B840(s32 a0) {
    return func_001999E0_x0018B840(a0, 0x31) != 0;
}
s32 func_001999E0_x0018B860() __asm__("func_001999E0");
s32 func_0018B860_x0018B860(s32 arg0) __asm__("func_0018B860");
s32 func_0018B860_x0018B860(s32 arg0) {
    s32 var_v0;

    if ((func_001999E0_x0018B860(arg0, 0x31) != 0) || (var_v0 = func_001999E0_x0018B860(arg0, 0x38), (var_v0 != 0))) {
        var_v0 = 1;
    }
    return var_v0;
}
s32 func_001999E0_x0018B8A8() __asm__("func_001999E0");
s32 func_0018B8A8_x0018B8A8(s32 arg0) __asm__("func_0018B8A8");
s32 func_0018B8A8_x0018B8A8(s32 arg0) {
    s32 var_v0;

    if ((func_001999E0_x0018B8A8(arg0, 0x31) != 0) || (var_v0 = func_001999E0_x0018B8A8(arg0, 0x39), (var_v0 != 0))) {
        var_v0 = 1;
    }
    return var_v0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018B8F0);
typedef struct { u8 pad[0x1E0]; s32 f1E0; s32 pad1E4; s32 wr; s32 rd; s32 ring[32]; } SfdCC0_x0018B970_x0018B970;
void func_0018D908_x0018B970(s32 *) __asm__("func_0018D908");
void func_0018D920_x0018B970(s32 *) __asm__("func_0018D920");
s32 func_0018B970_x0018B970(s32 a0, s32 a1, s32 a2) __asm__("func_0018B970");
s32 func_0018B970_x0018B970(s32 a0, s32 a1, s32 a2)
{
    SfdCC0_x0018B970_x0018B970 *h = (SfdCC0_x0018B970_x0018B970 *)(a0 + 0xCC0);
    s32 buf[4];
    s32 r;
    s32 i;

    func_0018D908_x0018B970(buf);
    i = h->wr;
    r = 0;
    if (i - h->rd < 32) {
        h->f1E0 = a2;
        h->ring[i % 32] = a1;
        r = 1;
        h->wr++;
    }
    func_0018D920_x0018B970(buf);
    return r;
}
s32 func_0018D908_x0018BA20(void *) __asm__("func_0018D908");
s32 func_0018D920_x0018BA20(void *) __asm__("func_0018D920");
s32 func_0018BA20_x0018BA20(s32 arg0, s32 *arg1, s32 *arg2) __asm__("func_0018BA20");
s32 func_0018BA20_x0018BA20(s32 arg0, s32 *arg1, s32 *arg2)
{
  u8 sp[8];
  s32 temp_v1;
  int new_var;
  s32 var_s3;
  u8 *temp_s0;
  temp_s0 = arg0 + 0xCC0;
  func_0018D908_x0018BA20(sp);
  if (((*((s32 *) (((u8 *) temp_s0) + 0x1E8))) - (*((s32 *) (((u8 *) temp_s0) + 0x1EC)))) <= 0)
  {
    var_s3 = 0;
    *arg1 = -1;
  }
  else
  {
    var_s3 = 1;
    *arg2 = *((s32 *) (((u8 *) temp_s0) + 0x1E0));
    temp_v1 = *((s32 *) (((u8 *) temp_s0) + 0x1EC));
    new_var = (s32) ((temp_v1 < 0) ? (temp_v1 + 0x1F) : (temp_v1));
    *arg1 = *((s32 *) (((u8 *) (((temp_v1 - ((new_var >> 5) << 5)) * 4) + temp_s0)) + 0x1F0));
    *((s32 *) (((u8 *) temp_s0) + 0x1EC)) = (s32) ((*((s32 *) (((u8 *) temp_s0) + 0x1EC))) + 1);
  }
  func_0018D920_x0018BA20(sp);
  return var_s3;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BAE0);
typedef unsigned char Uint8_x0018BC30;
typedef signed char Sint8_x0018BC30;
typedef signed int Sint32_x0018BC30;
typedef struct {
        Sint32_x0018BC30 (*Init)();
        Sint32_x0018BC30 (*Finish)();
        Sint32_x0018BC30 (*ExecServer)();
        Sint32_x0018BC30 (*Create)();
        Sint32_x0018BC30 (*Destroy)();
        Sint32_x0018BC30 (*Standby)();
        Sint32_x0018BC30 (*Start)();
        Sint32_x0018BC30 (*Stop)();
        Sint32_x0018BC30 (*Pause)();
        Sint32_x0018BC30 (*GetWrite)();
        Sint32_x0018BC30 (*AddWrite)();
        Sint32_x0018BC30 (*GetRead)();
        Sint32_x0018BC30 (*AddRead)();
        Sint32_x0018BC30 (*Seek)();
} SFD_TR_IF_x0018BC30;
typedef struct {
        Sint8_x0018BC30 creatable;
        Sint8_x0018BC30 avail;
        const SFD_TR_IF_x0018BC30 *strif;
        const SFD_TR_IF_x0018BC30 *vtrif;
        const SFD_TR_IF_x0018BC30 *atrif;
        Sint32_x0018BC30 packsiz;
        Sint32_x0018BC30 picw;
        Sint32_x0018BC30 pich;
        Sint32_x0018BC30 bitrate;
        Sint32_x0018BC30 picrate;
        Sint32_x0018BC30 vbvsiz;
        Sint8_x0018BC30 ach;
        Sint32_x0018BC30 afreq;
        Sint32_x0018BC30 rsv[4];
} SFD_CREINF_x0018BC30;
void SFLIB_LockCs_x0018BC30(Sint32_x0018BC30 *cs) __asm__("func_0018D908");
void SFLIB_UnlockCs_x0018BC30(Sint32_x0018BC30 *cs) __asm__("func_0018D920");
void sfcre_AnalyCreInf_x0018BC30(Uint8_x0018BC30 *data, Sint32_x0018BC30 size, SFD_CREINF_x0018BC30 *inf) __asm__("func_0018BCD0");
void func_0018BC30_x0018BC30(void *data, Sint32_x0018BC30 size, SFD_CREINF_x0018BC30 *inf) __asm__("func_0018BC30");
/* SFD_AnalyCreInf: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_cre.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_0018BC30_x0018BC30(void *data, Sint32_x0018BC30 size, SFD_CREINF_x0018BC30 *inf)
{
        Sint32_x0018BC30 cs;
        SFLIB_LockCs_x0018BC30(&cs);
        sfcre_AnalyCreInf_x0018BC30(data, size, inf);
        if (inf->vtrif != 0 || inf->atrif != 0 || inf->packsiz == -1) {
                inf->creatable = 1;
        }
        if (inf->vtrif != 0 || inf->atrif != 0) {
                inf->avail = 1;
        }
        SFLIB_UnlockCs_x0018BC30(&cs);
}
s32 func_0018BD80_x0018BCD0(s32) __asm__("func_0018BD80");
s32 func_0018BDE0_x0018BCD0(s32, s32, s32) __asm__("func_0018BDE0");
s32 func_0018BDE8_x0018BCD0(s32, s32, s32) __asm__("func_0018BDE8");
s32 func_0018C318_x0018BCD0(s32, s32, s32) __asm__("func_0018C318");
s32 func_0018C5B8_x0018BCD0(s32, s32, s32) __asm__("func_0018C5B8");
s32 func_0018C7B0_x0018BCD0(s32, s32, s32) __asm__("func_0018C7B0");
void func_0018BCD0_x0018BCD0(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0018BCD0");
void func_0018BCD0_x0018BCD0(s32 arg0, s32 arg1, s32 arg2) {
    func_0018BD80_x0018BCD0(arg2);
    if (func_0018BDE0_x0018BCD0(arg0, arg1, arg2) != 0) {
        goto block_5;
    }
    if (func_0018BDE8_x0018BCD0(arg0, arg1, arg2) != 0) {
        goto block_5;
    }
    if (func_0018C7B0_x0018BCD0(arg0, arg1, arg2) != 0) {
        goto block_5;
    }
    if (func_0018C318_x0018BCD0(arg0, arg1, arg2) != 0) {
        goto block_5;
    }
    func_0018C5B8_x0018BCD0(arg0, arg1, arg2);
block_5:
    return;
}
typedef struct SfdAnaInf_x0018BD80 {
    char found;
    char isAv;
    char pad2[2];
    void *system;
    void *video;
    void *audio;
    int packSize;
    int width;
    int height;
    int bps;
    int frameRate;
    int vbvSize;
    signed char nch;
    char pad41[3];
    int sfreq;
    char pad48[16];
} SfdAnaInf_x0018BD80;
typedef unsigned int size_t_x0018BD80;
void *memset_x0018BD80(void *, int, size_t_x0018BD80) __asm__("memset");
void func_0018BD80_x0018BD80(SfdAnaInf_x0018BD80 *inf) __asm__("func_0018BD80");
/* sfcre_SetDflCreInf: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdana.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018BD80_x0018BD80(SfdAnaInf_x0018BD80 *inf) {
    memset_x0018BD80(inf, 0, sizeof(SfdAnaInf_x0018BD80));
    inf->found = 0;
    inf->isAv = 0;
    inf->system = 0;
    inf->video = 0;
    inf->audio = 0;
    inf->packSize = 0;
    inf->width = 0;
    inf->height = 0;
    inf->bps = 0;
    inf->frameRate = 0;
    inf->vbvSize = 0;
    inf->nch = 0;
    inf->sfreq = 0;
}
s32 func_0018BDE0(void) {
    return 0;
}
typedef struct SfdAnaInf_x0018BDE8 {
    char found;
    char isAv;
    char pad2[2];
    void *system;
    void *video;
    void *audio;
    int packSize;
    int width;
    int height;
    int bps;
    int frameRate;
    int vbvSize;
    signed char nch;
    char pad41[3];
    int sfreq;
    char pad48[16];
} SfdAnaInf_x0018BDE8;
extern char sfmps_handler_x0018BDE8[] __asm__("D_00467458");
int sfcre_AnalyPackSiz_x0018BDE8(unsigned char *buf, int size, int *muxRate) __asm__("func_0018BEA0");
void sfcre_AnalySfh_x0018BDE8(unsigned char *buf, int size, SfdAnaInf_x0018BDE8 *inf) __asm__("func_0018C020");
void sfcre_AnalyAudio_x0018BDE8(unsigned char *buf, int size, SfdAnaInf_x0018BDE8 *inf) __asm__("func_0018C128");
int sfcre_AnalyMpv_x0018BDE8(unsigned char *buf, int size, SfdAnaInf_x0018BDE8 *inf) __asm__("func_0018C7B0");
int sfcre_AnalyPackSiz_x0018BDE8(unsigned char *buf, int size, int *muxRate) __asm__("func_0018BEA0");
void sfcre_AnalySfh_x0018BDE8(unsigned char *buf, int size, SfdAnaInf_x0018BDE8 *inf) __asm__("func_0018C020");
void sfcre_AnalyAudio_x0018BDE8(unsigned char *buf, int size, SfdAnaInf_x0018BDE8 *inf) __asm__("func_0018C128");
int sfcre_AnalyMpv_x0018BDE8(unsigned char *buf, int size, SfdAnaInf_x0018BDE8 *inf) __asm__("func_0018C7B0");
int func_0018BDE8_x0018BDE8(unsigned char *buf, int size, SfdAnaInf_x0018BDE8 *inf) __asm__("func_0018BDE8");
/* sfcre_AnalyMps: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdana.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018BDE8_x0018BDE8(unsigned char *buf, int size, SfdAnaInf_x0018BDE8 *inf) {
    int muxRate;
    int packSize;
    packSize = sfcre_AnalyPackSiz_x0018BDE8(buf, size, &muxRate);
    if (packSize == 0) {
        return 0;
    }
    inf->packSize = packSize;
    if (packSize == -1) {
        return 1;
    }
    if (muxRate > 0) {
        inf->bps = muxRate * 50;
    }
    inf->system = sfmps_handler_x0018BDE8;
    sfcre_AnalySfh_x0018BDE8(buf, size, inf);
    sfcre_AnalyAudio_x0018BDE8(buf, size, inf);
    sfcre_AnalyMpv_x0018BDE8(buf, size, inf);
    return 1;
}
void sfcre_AnalyMuxRate_x0018BEA0(unsigned char *pack, int size, int *muxRate) __asm__("func_0018BF88");
unsigned char *sfcre_SearchMpsDelim_x0018BEA0(unsigned char *p, int size, int kind) __asm__("func_0018C230");
void sfcre_AnalyMuxRate_x0018BEA0(unsigned char *pack, int size, int *muxRate) __asm__("func_0018BF88");
unsigned char *sfcre_SearchMpsDelim_x0018BEA0(unsigned char *p, int size, int kind) __asm__("func_0018C230");
int func_0018BEA0_x0018BEA0(unsigned char *buf, int size, int *muxRate) __asm__("func_0018BEA0");
/* sfcre_AnalyPackSiz: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdana.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018BEA0_x0018BEA0(unsigned char *buf, int size, int *muxRate) {
    unsigned char *first;
    unsigned char *second;
    unsigned char *third;
    int offset;
    int rest;
    int gap;
    *muxRate = 0;
    first = sfcre_SearchMpsDelim_x0018BEA0(buf, size, 0x10000);
    offset = first - buf;
    rest = size - offset;
    if (first == 0) {
        return 0;
    }
    second = sfcre_SearchMpsDelim_x0018BEA0(first + 1, rest - 1, 0x10000);
    if (second == 0) {
        return 0;
    }
    third = sfcre_SearchMpsDelim_x0018BEA0(second + 1, size - (second - buf) - 1, 0x10000);
    if (third == 0) {
        return 0;
    }
    gap = second - first;
    if (gap != third - second) {
        return -1;
    }
    if (offset % gap != 0) {
        return -1;
    }
    sfcre_AnalyMuxRate_x0018BEA0(first, rest, muxRate);
    return gap;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018BF88);
extern s32 D_0048D7F0_x0018C020[] __asm__("D_0048D7F0");
s32 func_0018CA88_x0018C020(s32, s32) __asm__("func_0018CA88");
void func_0018C0D8_x0018C020(s32, s32, s32 *) __asm__("func_0018C0D8");
void func_0018C020_x0018C020(s32 a0, s32 a1, s32 *a2) __asm__("func_0018C020");
void func_0018C020_x0018C020(s32 a0, s32 a1, s32 *a2)
{
    s32 i;
    s32 sz;

    i = 0;
    sz = a2[4];
    while (!func_0018CA88_x0018C020(a0, a1)) {
        a1 -= sz;
        a0 += sz;
        if (i >= 3) {
            return;
        }
        if (a1 <= 0) {
            return;
        }
        i++;
    }
    func_0018C0D8_x0018C020(a0, a1, D_0048D7F0_x0018C020);
    if (D_0048D7F0_x0018C020[0] == 0) {
        return;
    }
    if (D_0048D7F0_x0018C020[3] > 0) {
        a2[7] = D_0048D7F0_x0018C020[3];
    }
}
s32 func_00178BA8_x0018C0D8(s32, s32, s32) __asm__("func_00178BA8");
s32 func_0018CD70_x0018C0D8(void *) __asm__("func_0018CD70");
void func_0018C0D8_x0018C0D8(s32 arg0, s32 arg1, u8 *arg2) __asm__("func_0018C0D8");
void func_0018C0D8_x0018C0D8(s32 arg0, s32 arg1, u8 *arg2) {
    s32 temp_s0;

    temp_s0 = (arg1 < 0x801) ? arg1 : 0x800;
    func_00178BA8_x0018C0D8(arg2 + 0x94, arg0, temp_s0);
    *(s32 *)((u8 *)arg2 + 0x90) = temp_s0;
    func_0018CD70_x0018C0D8(arg2);
}
typedef struct SfdAnaInf_x0018C128 {
    char found;
    char isAv;
    char pad2[2];
    void *system;
    void *video;
    void *audio;
    int packSize;
    int width;
    int height;
    int bps;
    int frameRate;
    int vbvSize;
    signed char nch;
    char pad41[3];
    int sfreq;
    char pad48[16];
} SfdAnaInf_x0018C128;
unsigned char *sfcre_SearchMpsDelim_x0018C128(unsigned char *p, int size, int kind) __asm__("func_0018C230");
unsigned char *sfcre_GetPketData_x0018C128(unsigned char *pes, int size) __asm__("func_0018C298");
int sfcre_AnalyAdx_x0018C128(unsigned char *buf, int size, SfdAnaInf_x0018C128 *inf) __asm__("func_0018C318");
int sfana_ChkMpa_x0018C128(unsigned char *buf, int size, SfdAnaInf_x0018C128 *inf) __asm__("func_0018C5B8");
unsigned char *sfcre_SearchMpsDelim_x0018C128(unsigned char *p, int size, int kind) __asm__("func_0018C230");
unsigned char *sfcre_GetPketData_x0018C128(unsigned char *pes, int size) __asm__("func_0018C298");
int sfcre_AnalyAdx_x0018C128(unsigned char *buf, int size, SfdAnaInf_x0018C128 *inf) __asm__("func_0018C318");
int sfana_ChkMpa_x0018C128(unsigned char *buf, int size, SfdAnaInf_x0018C128 *inf) __asm__("func_0018C5B8");
void func_0018C128_x0018C128(unsigned char *buf, int size, SfdAnaInf_x0018C128 *inf) __asm__("func_0018C128");
/* sfcre_AnalyAudio: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdana.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018C128_x0018C128(unsigned char *buf, int size, SfdAnaInf_x0018C128 *inf) {
    unsigned char *end = buf + size;
    int packSize = inf->packSize;
    unsigned char *pes;
    unsigned char *data;
    int n;
    int skip;
    while (size > 0) {
        pes = sfcre_SearchMpsDelim_x0018C128(buf, size, 0x40000);
        if (pes == 0) {
            break;
        }
        if ((unsigned char)(pes[3] + 64) < 32) {
            data = sfcre_GetPketData_x0018C128(pes, end - pes);
            n = packSize;
            if (end - data < n) {
                n = end - data;
            }
            if (sfcre_AnalyAdx_x0018C128(data, n, inf) != 0) {
                break;
            }
            if (sfana_ChkMpa_x0018C128(data, n, inf) != 0) {
                break;
            }
        }
        skip = pes - buf + 1;
        buf += skip;
        size -= skip;
    }
}
typedef unsigned char Uint8_x0018C230;
typedef unsigned int Uint32_x0018C230;
typedef signed int Sint32_x0018C230;
Uint32_x0018C230 MPS_CheckDelim_x0018C230(Uint8_x0018C230 *p) __asm__("func_0017AAF0");
Uint8_x0018C230 *func_0018C230_x0018C230(Uint8_x0018C230 *p, Sint32_x0018C230 n, Uint32_x0018C230 code) __asm__("func_0018C230");
/* sfcre_SearchDelim: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_cre.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Uint8_x0018C230 *func_0018C230_x0018C230(Uint8_x0018C230 *p, Sint32_x0018C230 n, Uint32_x0018C230 code)
{
        while (n >= 4) {
                if (MPS_CheckDelim_x0018C230(p) == code) {
                        return p;
                }
                p++;
                n--;
        }
        return 0;
}
typedef struct SfdSj_x0018C298 SfdSj_x0018C298;
typedef struct SfdSjChunk_x0018C298 {
    char *data;
    int len;
} SfdSjChunk_x0018C298;
typedef struct SfdSjVtbl_x0018C298 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018C298 *sj);
    int (*getUuid)(SfdSj_x0018C298 *sj);
    void (*reset)(SfdSj_x0018C298 *sj);
    void (*getChunk)(SfdSj_x0018C298 *sj, int id, int n, SfdSjChunk_x0018C298 *ck);
    void (*ungetChunk)(SfdSj_x0018C298 *sj, int id, SfdSjChunk_x0018C298 *ck);
    void (*putChunk)(SfdSj_x0018C298 *sj, int id, SfdSjChunk_x0018C298 *ck);
    int (*getNumData)(SfdSj_x0018C298 *sj, int id);
} SfdSjVtbl_x0018C298;
struct SfdSj_x0018C298 {
    SfdSjVtbl_x0018C298 *vtbl;
};
struct SfdSj_x0018C298;
struct SfdSj_x0018C298;
typedef struct M2vErrInf_x0018C298 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018C298;
typedef struct Mpeg2Ext_x0018C298 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018C298;
typedef enum M2vFrameRate_x0018C298 {
    M2V_FRAME_RATE_FORBIDDEN_x0018C298 = 0
} M2vFrameRate_x0018C298;
typedef enum M2vPicType_x0018C298 {
    M2V_PICTYPE_I_x0018C298 = 1,
    M2V_PICTYPE_P_x0018C298 = 2,
    M2V_PICTYPE_B_x0018C298 = 3,
    M2V_PICTYPE_D_x0018C298 = 4
} M2vPicType_x0018C298;
typedef enum M2vPicStruct_x0018C298 {
    M2V_PICSTRUCT_TOP_FIELD_x0018C298 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018C298 = 2,
    M2V_PICSTRUCT_FRAME_x0018C298 = 3
} M2vPicStruct_x0018C298;
typedef enum M2vPicAtrF64_x0018C298 {
    M2V_PICATR_F64_0_x0018C298 = 0
} M2vPicAtrF64_x0018C298;
typedef struct M2vPicAtr_x0018C298 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018C298 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018C298 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018C298 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018C298 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018C298;
typedef void (*M2vUsrDatFn_x0018C298)(void *obj, int level);
typedef struct M2vUsrSj_x0018C298 {
    struct SfdSj_x0018C298 *sj;
    M2vUsrDatFn_x0018C298 fn;
    void *obj;
} M2vUsrSj_x0018C298;
typedef struct M2vPicUsr_x0018C298 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018C298;
typedef void (*M2vCondFn_x0018C298)();
typedef struct M2vObj_x0018C298 {
    int stat;
    M2vErrInf_x0018C298 err;
    M2vCondFn_x0018C298 cond[16];
    M2vPicAtr_x0018C298 picatr;
    char pad216[64];
    M2vUsrSj_x0018C298 usrsj[4];
    M2vPicUsr_x0018C298 picusr;
    char pad340[12];
    Mpeg2Ext_x0018C298 ext;
    char pad1656[8];
} M2vObj_x0018C298;
extern void M2V_SetErrFunc_x0018C298(M2vObj_x0018C298 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef int (*MpsErrFn_x0018C298)(void *obj);
typedef struct MpsErr_x0018C298 {
    MpsErrFn_x0018C298 fn;
    void *obj;
    int code;
} MpsErr_x0018C298;
typedef struct MpsPackHd_x0018C298 {
    long long scr;
    int isMpeg1;
    int muxRate;
} MpsPackHd_x0018C298;
typedef struct MpsSysHd_x0018C298 {
    int headerLength;
    int rateBound;
    int audioBound;
    int videoBound;
    int fixedFlag;
    int cspsFlag;
    int audioLockFlag;
    int videoLockFlag;
} MpsSysHd_x0018C298;
typedef struct MpsSysHdStream_x0018C298 {
    unsigned char streamId;
    unsigned char bufferBoundScale;
    unsigned short bufferSizeBound;
} MpsSysHdStream_x0018C298;
typedef struct MpsSysHdInf_x0018C298 {
    int rateBound;
    unsigned char audioBound;
    unsigned char fixedFlag;
    unsigned char cspsFlag;
    unsigned char audioLockFlag;
    unsigned char videoLockFlag;
    unsigned char videoBound;
    unsigned char packetRateRestrictionFlag;
    unsigned char reserved;
    int streamCount;
    MpsSysHdStream_x0018C298 stream[48];
} MpsSysHdInf_x0018C298;
typedef struct MpsPesInf_x0018C298 {
    long long pts;
    long long dts;
    int streamId;
    int streamKind;
    int streamNo;
    int packetLength;
    int stdBufferSize;
    int dataSize;
} MpsPesInf_x0018C298;
typedef struct MpsHn_x0018C298 MpsHn_x0018C298;
typedef int (*MpsDecodeFn_x0018C298)(MpsHn_x0018C298 *mps, unsigned char *pos, int n, int *len, int *flags);
typedef void (*MpsCbFn_x0018C298)(void *obj, int arg);
typedef void (*MpsSysHdFn_x0018C298)(void *obj, MpsSysHdInf_x0018C298 *inf);
struct MpsHn_x0018C298 {
    int stat;
    MpsErr_x0018C298 err;
    int pesSw;
    int f20;
    MpsPackHd_x0018C298 pack;
    MpsSysHd_x0018C298 sysHd;
    MpsSysHd_x0018C298 sysHdKind[3];
    MpsPesInf_x0018C298 pes;
    int f208;
    MpsDecodeFn_x0018C298 decode;
    int f216;
    int f220;
    int f224;
    MpsSysHdFn_x0018C298 sysHdFn;
    void *sysHdObj;
    MpsCbFn_x0018C298 auxFn;
    void *auxObj;
    MpsCbFn_x0018C298 pesFn;
    void *pesObj;
    int f252;
};
int MPS_DecodeChunk_x0018C298(MpsHn_x0018C298 *mps, unsigned char *pos, int n, int *len, int *flags) __asm__("func_00179148");
MpsHn_x0018C298 *MPS_Create_x0018C298(void) __asm__("func_0017B240");
int MPS_Destroy_x0018C298(MpsHn_x0018C298 *mps) __asm__("func_0017B3D0");
extern void mpvhook_SetErrFunc_x0018C298(M2vObj_x0018C298 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
unsigned char *func_0018C298_x0018C298(unsigned char *pes, int size) __asm__("func_0018C298");
/* sfcre_GetPketData: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdana.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
unsigned char *func_0018C298_x0018C298(unsigned char *pes, int size) {
    MpsHn_x0018C298 *mps;
    int consumed;
    int flags;
    mps = MPS_Create_x0018C298();
    if (mps == 0) {
        return pes + (size < 7 ? size : 6);
    }
    MPS_DecodeChunk_x0018C298(mps, pes, size, &consumed, &flags);
    MPS_Destroy_x0018C298(mps);
    return pes + consumed;
}
s32 func_0018C3B0_x0018C318() __asm__("func_0018C3B0");
s32 func_0018C318_x0018C318(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0018C318");
s32 func_0018C318_x0018C318(s32 arg0, s32 arg1, s32 arg2) {
    if (func_0018C3B0_x0018C318() != 0) {
        goto block_5;
    }
    if (func_0018C3B0_x0018C318(arg0 + 2, arg1 - 2, arg2) == 0) {
        goto block_3;
    }
    return 1;
block_3:
    if (func_0018C3B0_x0018C318(arg0 + 1, arg1 - 1, arg2) == 0) {
        goto block_7;
    }
block_5:
    return 1;
block_7:
    return func_0018C3B0_x0018C318(arg0 + 3, arg1 - 3, arg2) != 0;
}
typedef struct SfdAnaInf_x0018C3B0 {
    char found;
    char isAv;
    char pad2[2];
    void *system;
    void *video;
    void *audio;
    int packSize;
    int width;
    int height;
    int bps;
    int frameRate;
    int vbvSize;
    signed char nch;
    char pad41[3];
    int sfreq;
    char pad48[16];
} SfdAnaInf_x0018C3B0;
int SFADXT_IsHeader_x0018C3B0(unsigned char *header, int length, int *headerSize) __asm__("func_001881A8");
typedef unsigned int size_t_x0018C3B0;
void *memcpy_x0018C3B0(void *, const void *, size_t_x0018C3B0) __asm__("func_00125740");
extern char sfadx_handler_x0018C3B0[] __asm__("D_004671E8");
extern unsigned char sfana_adx_buf_x0018C3B0[2048] __asm__("D_0048CFF0");
int func_0018C3B0_x0018C3B0(unsigned char *buf, int size, SfdAnaInf_x0018C3B0 *inf) __asm__("func_0018C3B0");
/* sfcre_AnalyAdxAlign4: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdana.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018C3B0_x0018C3B0(unsigned char *buf, int size, SfdAnaInf_x0018C3B0 *inf) {
    unsigned char *p;
    int hdrSize;
    if (size > 2048) {
        size = 2048;
    }
    memcpy_x0018C3B0(sfana_adx_buf_x0018C3B0, buf, size);
    p = sfana_adx_buf_x0018C3B0;
    for (; size > 0; size -= 4, p += 4) {
        if (SFADXT_IsHeader_x0018C3B0(p, size, &hdrSize) != 0) {
            inf->audio = sfadx_handler_x0018C3B0;
            inf->nch = p[7];
            inf->sfreq = (p[8] << 24) | (p[9] << 16) | (p[10] << 8) | p[11];
            return 1;
        }
    }
    return 0;
}
typedef struct SfdMpaHdr_x0018C488 {
    unsigned char layer;
    unsigned char protection;
    unsigned char bitrate;
    unsigned char sfreq;
    unsigned char padding;
    unsigned char priv;
    unsigned char mode;
    unsigned char modeExt;
    unsigned char copyright;
    unsigned char original;
    unsigned char emphasis;
} SfdMpaHdr_x0018C488;
extern int sfana_mpa_bitrates_x0018C488[4][16] __asm__("D_004672C0");
unsigned char *sfcre_SerachMpaAau_x0018C488(SfdMpaHdr_x0018C488 *hdr, unsigned char *p, int size) __asm__("func_0018C660");
unsigned char *sfcre_SerachMpaAau_x0018C488(SfdMpaHdr_x0018C488 *hdr, unsigned char *p, int size) __asm__("func_0018C660");
int func_0018C488_x0018C488(unsigned char *p, int size) __asm__("func_0018C488");
/* SFCRE_AnalyMpaBitrate: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdana.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018C488_x0018C488(unsigned char *p, int size) {
    SfdMpaHdr_x0018C488 hdr;
    int kbps;
    if (sfcre_SerachMpaAau_x0018C488(&hdr, p, size) == 0) {
        return -1;
    }
    kbps = sfana_mpa_bitrates_x0018C488[hdr.layer][hdr.bitrate];
    if (kbps == -1) {
        return -1;
    }
    return kbps * 1000;
}
typedef struct SfdMpaHdr_x0018C500 {
    unsigned char layer;
    unsigned char protection;
    unsigned char bitrate;
    unsigned char sfreq;
    unsigned char padding;
    unsigned char priv;
    unsigned char mode;
    unsigned char modeExt;
    unsigned char copyright;
    unsigned char original;
    unsigned char emphasis;
} SfdMpaHdr_x0018C500;
extern int sfana_mpa_sfreqs_x0018C500[4] __asm__("D_004672B0");
extern int sfana_mpa_bitrates_x0018C500[4][16] __asm__("D_004672C0");
extern int sfana_mpa_frame_samples_x0018C500[4] __asm__("D_004673C0");
unsigned char *sfcre_SerachMpaAau_x0018C500(SfdMpaHdr_x0018C500 *hdr, unsigned char *p, int size) __asm__("func_0018C660");
unsigned char *sfcre_SerachMpaAau_x0018C500(SfdMpaHdr_x0018C500 *hdr, unsigned char *p, int size) __asm__("func_0018C660");
int func_0018C500_x0018C500(unsigned char *p, int size) __asm__("func_0018C500");
/* SFCRE_AnalyAauSiz: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdana.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018C500_x0018C500(unsigned char *p, int size) {
    SfdMpaHdr_x0018C500 hdr;
    int kbps;
    if (sfcre_SerachMpaAau_x0018C500(&hdr, p, size) == 0) {
        return -1;
    }
    kbps = sfana_mpa_bitrates_x0018C500[hdr.layer][hdr.bitrate];
    if (kbps == -1) {
        return -1;
    }
    return sfana_mpa_frame_samples_x0018C500[hdr.layer] * kbps * 1000 / (sfana_mpa_sfreqs_x0018C500[hdr.sfreq] * 8);
}
typedef struct SfdAnaInf_x0018C5B8 {
    char found;
    char isAv;
    char pad2[2];
    void *system;
    void *video;
    void *audio;
    int packSize;
    int width;
    int height;
    int bps;
    int frameRate;
    int vbvSize;
    signed char nch;
    char pad41[3];
    int sfreq;
    char pad48[16];
} SfdAnaInf_x0018C5B8;
typedef struct SfdMpaHdr_x0018C5B8 {
    unsigned char layer;
    unsigned char protection;
    unsigned char bitrate;
    unsigned char sfreq;
    unsigned char padding;
    unsigned char priv;
    unsigned char mode;
    unsigned char modeExt;
    unsigned char copyright;
    unsigned char original;
    unsigned char emphasis;
} SfdMpaHdr_x0018C5B8;
extern int sfana_mpa_nch_x0018C5B8[4] __asm__("D_004672A0");
extern int sfana_mpa_sfreqs_x0018C5B8[4] __asm__("D_004672B0");
extern SfdMpaHdr_x0018C5B8 sfana_mpa_hdr_x0018C5B8 __asm__("D_004268C8");
unsigned char *sfcre_SerachMpaAau_x0018C5B8(SfdMpaHdr_x0018C5B8 *hdr, unsigned char *p, int size) __asm__("func_0018C660");
unsigned char *sfcre_SerachMpaAau_x0018C5B8(SfdMpaHdr_x0018C5B8 *hdr, unsigned char *p, int size) __asm__("func_0018C660");
int func_0018C5B8_x0018C5B8(unsigned char *buf, int size, SfdAnaInf_x0018C5B8 *inf) __asm__("func_0018C5B8");
/* sfana_ChkMpa: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdana.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018C5B8_x0018C5B8(unsigned char *buf, int size, SfdAnaInf_x0018C5B8 *inf) {
    SfdMpaHdr_x0018C5B8 hdr;
    if (sfcre_SerachMpaAau_x0018C5B8(&hdr, buf, size) == 0) {
        return 0;
    }
    inf->audio = 0;
    inf->nch = sfana_mpa_nch_x0018C5B8[hdr.mode];
    inf->sfreq = sfana_mpa_sfreqs_x0018C5B8[hdr.sfreq];
    sfana_mpa_hdr_x0018C5B8 = hdr;
    return 1;
}
typedef struct SfdMpaHdr_x0018C660 {
    unsigned char layer;
    unsigned char protection;
    unsigned char bitrate;
    unsigned char sfreq;
    unsigned char padding;
    unsigned char priv;
    unsigned char mode;
    unsigned char modeExt;
    unsigned char copyright;
    unsigned char original;
    unsigned char emphasis;
} SfdMpaHdr_x0018C660;
void sfcre_ReadAauHdr_x0018C660(SfdMpaHdr_x0018C660 *hdr, unsigned char *p) __asm__("func_0018C730");
void sfcre_ReadAauHdr_x0018C660(SfdMpaHdr_x0018C660 *hdr, unsigned char *p) __asm__("func_0018C730");
unsigned char *func_0018C660_x0018C660(SfdMpaHdr_x0018C660 *hdr, unsigned char *p, int size) __asm__("func_0018C660");
/* sfcre_SerachMpaAau: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdana.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
unsigned char *func_0018C660_x0018C660(SfdMpaHdr_x0018C660 *hdr, unsigned char *p, int size) {
    for (; size >= 4; size--, p++) {
        if (p[0] == 0xFF && (p[1] & 0xF8) == 0xF8) {
            sfcre_ReadAauHdr_x0018C660(hdr, p);
            if (hdr->layer != 0 && hdr->bitrate != 15 && hdr->sfreq != 3) {
                return p;
            }
        }
    }
    return 0;
}
typedef struct SfdMpaHdr_x0018C730 {
    unsigned char layer;
    unsigned char protection;
    unsigned char bitrate;
    unsigned char sfreq;
    unsigned char padding;
    unsigned char priv;
    unsigned char mode;
    unsigned char modeExt;
    unsigned char copyright;
    unsigned char original;
    unsigned char emphasis;
} SfdMpaHdr_x0018C730;
void func_0018C730_x0018C730(SfdMpaHdr_x0018C730 *hdr, unsigned char *p) __asm__("func_0018C730");
/* sfcre_ReadAauHdr: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdana.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018C730_x0018C730(SfdMpaHdr_x0018C730 *hdr, unsigned char *p) {
    unsigned char b1 = p[1];
    unsigned char b2 = p[2];
    unsigned char b3 = p[3];
    hdr->layer = (b1 >> 1) & 3;
    hdr->protection = b1 & 1;
    hdr->bitrate = b2 >> 4;
    hdr->sfreq = (b2 >> 2) & 3;
    hdr->padding = (b2 >> 1) & 1;
    hdr->priv = b2 & 1;
    hdr->mode = b3 >> 6;
    hdr->modeExt = (b3 >> 4) & 3;
    hdr->copyright = (b3 >> 3) & 1;
    hdr->original = (b3 >> 2) & 1;
    hdr->emphasis = b3 & 3;
}
typedef struct SfdAnaInf_x0018C7B0 {
    char found;
    char isAv;
    char pad2[2];
    void *system;
    void *video;
    void *audio;
    int packSize;
    int width;
    int height;
    int bps;
    int frameRate;
    int vbvSize;
    signed char nch;
    char pad41[3];
    int sfreq;
    char pad48[16];
} SfdAnaInf_x0018C7B0;
char *MPV_SearchDelim_x0018C7B0(char *buf, int len, int mask) __asm__("func_0017B5B8");
extern char sfmpv_handler_x0018C7B0[] __asm__("D_004674A0");
extern int sfana_frame_rates_x0018C7B0[] __asm__("D_00467278");
int func_0018C7B0_x0018C7B0(unsigned char *buf, int size, SfdAnaInf_x0018C7B0 *inf) __asm__("func_0018C7B0");
/* sfcre_AnalyMpv: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdana.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018C7B0_x0018C7B0(unsigned char *buf, int size, SfdAnaInf_x0018C7B0 *inf) {
    unsigned char *seq;
    unsigned char b4, b5, b6, b7, b8, b9, b10, b11;
    int used;
    while (size > 0) {
        seq = MPV_SearchDelim_x0018C7B0(buf, size, 64);
        if (seq == 0) {
            return 0;
        }
        used = seq - buf;
        used++;
        size -= used;
        buf += used;
        b4 = seq[4];
        b5 = seq[5];
        b6 = seq[6];
        b7 = seq[7];
        b8 = seq[8];
        b9 = seq[9];
        b10 = seq[10];
        b11 = seq[11];
        if ((b7 >> 4) == 0) {
            continue;
        }
        b7 &= 0xF;
        if (b7 < 1 || b7 > 8) {
            continue;
        }
        if ((b10 >> 5) & 1) {
            inf->width = (b4 << 4) | (b5 >> 4);
            inf->height = ((b5 & 0xF) << 8) | b6;
            if (inf->bps == 0) {
                inf->bps = ((b8 << 10) | (b9 << 2) | (b10 >> 6)) * 50;
            }
            inf->frameRate = sfana_frame_rates_x0018C7B0[b7];
            inf->video = sfmpv_handler_x0018C7B0;
            inf->vbvSize = (((b10 & 0x1F) << 5) | (b11 >> 3)) << 11;
            break;
        }
    }
    return 1;
}
void func_0018C918(void) {
    func_0019D500(0x20, &D_0048E088);
}
void func_0018C938(void) {
    func_0019D590();
}
typedef unsigned char u8_x0018C950;
typedef unsigned int u32_x0018C950;
typedef struct MovieModule_x0018C950 {
    u32_x0018C950 unk_00;
    u32_x0018C950 unk_04;
    u32_x0018C950 unk_08;
    u32_x0018C950 unk_0c;
    u8_x0018C950 pad_10[0x80];
    u32_x0018C950 unk_90;
} MovieModule_x0018C950;
void func_0018C950_x0018C950(MovieModule_x0018C950 *self) __asm__("func_0018C950");
/* fn_12_248E8: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_248E8.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_0018C950_x0018C950(MovieModule_x0018C950 *self) {
    self->unk_00 = 0;
    self->unk_04 = 0;
    self->unk_08 = 0;
    self->unk_0c = 0;
    self->unk_90 = 0;
}
void func_0018C968_x0018C968(u8 *arg0) __asm__("func_0018C968");
void func_0018C968_x0018C968(u8 *arg0)
{
 do { *((s32 *) (((u8 *) arg0) + 0x90)) = 0; } while (0);
  *((s32 *) (((u8 *) arg0) + 0)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
}
typedef struct SfdSj_x0018C978 SfdSj_x0018C978;
typedef struct SfdSjChunk_x0018C978 {
    char *data;
    int len;
} SfdSjChunk_x0018C978;
typedef struct SfdSjVtbl_x0018C978 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018C978 *sj);
    int (*getUuid)(SfdSj_x0018C978 *sj);
    void (*reset)(SfdSj_x0018C978 *sj);
    void (*getChunk)(SfdSj_x0018C978 *sj, int id, int n, SfdSjChunk_x0018C978 *ck);
    void (*ungetChunk)(SfdSj_x0018C978 *sj, int id, SfdSjChunk_x0018C978 *ck);
    void (*putChunk)(SfdSj_x0018C978 *sj, int id, SfdSjChunk_x0018C978 *ck);
    int (*getNumData)(SfdSj_x0018C978 *sj, int id);
} SfdSjVtbl_x0018C978;
struct SfdSj_x0018C978 {
    SfdSjVtbl_x0018C978 *vtbl;
};
struct SfdSj_x0018C978;
struct SfdRecSlot_x0018C978;
struct SfdRec_x0018C978;
struct SfdMpvCond_x0018C978;
struct SfdPlanes_x0018C978;
struct SfdFrameInfo_x0018C978;
struct SfdPly_x0018C978;
typedef int (*SfdTimeFn_x0018C978)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0018C978 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0018C978;
typedef struct SfdTimeRec_x0018C978 {
    int valid;
    SfdTimeCode_x0018C978 tc;
    int time;
    int unit;
} SfdTimeRec_x0018C978;
typedef struct SfdTst_x0018C978 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0018C978;
typedef struct SfdSyncTally_x0018C978 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0018C978;
typedef struct SfdSyncQueue_x0018C978 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0018C978;
typedef struct SfdFieldEntry_x0018C978 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0018C978;
typedef struct SfdPtsm_x0018C978 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0018C978;
typedef struct SfdHdrAudio_x0018C978 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018C978;
typedef struct SfdHdrMux_x0018C978 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018C978;
typedef struct SfdHdrVideo_x0018C978 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018C978;
typedef struct SfdHdrInf_x0018C978 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018C978 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018C978 audio;
    SfdHdrVideo_x0018C978 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018C978;
typedef struct SfdMvInf_x0018C978 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0018C978;
typedef struct SfdPlyInf_x0018C978 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0018C978;
typedef void (*SfdErrFn_x0018C978)(void *obj, int code);
typedef struct SfdErrInf_x0018C978 {
    SfdErrFn_x0018C978 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018C978;
typedef int (*SfdExtClockFn_x0018C978)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0018C978)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0018C978 {
    SfdTimeFn_x0018C978 timefn[6];
    SfdIsSkipFn_x0018C978 isSkipFn;
    SfdTimeCode_x0018C978 tc;
    SfdTimeRec_x0018C978 state;
    SfdTimeRec_x0018C978 best;
    SfdTimeRec_x0018C978 tot;
    SfdTimeRec_x0018C978 cur;
    SfdTimeRec_x0018C978 latest;
    SfdTimeRec_x0018C978 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0018C978 tally;
    SfdSyncQueue_x0018C978 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0018C978 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0018C978 tst;
    SfdFieldEntry_x0018C978 fields[64];
    SfdPtsm_x0018C978 ptsm;
    char pad1468[36];
} SfdTim_x0018C978;
enum {
    SFD_COND_VIDEO_x0018C978 = 5,
    SFD_COND_AUDIO_x0018C978 = 6,
    SFD_COND_KEEPSUP_x0018C978 = 8,
    SFD_COND_SYNCMODE_x0018C978 = 15,
    SFD_COND_ETIME_x0018C978 = 20,
    SFD_COND_ETUNIT_x0018C978 = 21,
    SFD_COND_LNKSTM_x0018C978 = 49,
    SFD_COND_SUPPLY_END_x0018C978 = 56,
    SFD_COND_DECODE_END_x0018C978 = 57,
    SFD_COND_DEMUX_SPLIT_x0018C978 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0018C978 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0018C978 = 80,
    SFD_COND_SYSHD_FN_x0018C978 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0018C978 = 86,
    SFD_COND_NUM_x0018C978 = 100
};
typedef enum SfdBufFmt_x0018C978 {
    SFD_BUFFMT_0_x0018C978 = 0
} SfdBufFmt_x0018C978;
typedef enum SfdBufId_x0018C978 {
    SFD_BUF_NONE_x0018C978 = 8
} SfdBufId_x0018C978;
typedef struct SfdCrePrm_x0018C978 {
    struct SfdTrnConfig_x0018C978 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0018C978 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0018C978;
typedef struct SfdItem_x0018C978 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018C978;
typedef struct SfdRing_x0018C978 {
    SfdItem_x0018C978 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018C978;
typedef struct SfdBufInf_x0018C978 {
    char *data;
    struct SfdSj_x0018C978 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018C978;
typedef struct SfdBufCur_x0018C978 {
    char *pos;
    int len;
} SfdBufCur_x0018C978;
typedef struct SfdBufDlm_x0018C978 {
    char *pos;
    char *end;
} SfdBufDlm_x0018C978;
typedef struct SfdBufRing_x0018C978 {
    SfdBufInf_x0018C978 sup;
    SfdBufDlm_x0018C978 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018C978 ptsque;
} SfdBufRing_x0018C978;
typedef struct SfdBufAring_x0018C978 {
    SfdBufInf_x0018C978 sup;
    SfdBufCur_x0018C978 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018C978;
typedef struct SfdUoch_x0018C978 {
    struct SfdSj_x0018C978 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018C978;
typedef struct SfdBufEnt_x0018C978 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018C978 ring;
        SfdBufAring_x0018C978 aring;
        SfdBufInf_x0018C978 vfrm;
        SfdUoch_x0018C978 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018C978;
typedef int (*SfdTrnFn_x0018C978)();
typedef struct SfdTrnConfig_x0018C978 {
    SfdTrnFn_x0018C978 *fns[9];
} SfdTrnConfig_x0018C978;
typedef struct SfdMpsPrm_x0018C978 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0018C978 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0018C978;
typedef struct SfdAdxCfg_x0018C978 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0018C978;
typedef void (*SfdAdxStep_x0018C978)(struct SfdPly_x0018C978 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0018C978 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0018C978 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0018C978 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0018C978;
typedef struct SfdAoap_x0018C978 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0018C978 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0018C978 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0018C978 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0018C978 *h);
    void (*setSpeed)(struct SfdPly_x0018C978 *h, int speed);
} SfdAoap_x0018C978;
typedef struct SfainfOut_x0018C978 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0018C978;
typedef struct SfainfList_x0018C978 {
    int nout;
    SfainfOut_x0018C978 out[3];
} SfainfList_x0018C978;
typedef struct SfdTrnSlot_x0018C978 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0018C978 *mps;
        struct SfdMpv_x0018C978 *mpv;
        SfdAdxCtx_x0018C978 *adxt;
        SfdAoap_x0018C978 *aoap;
        SfainfList_x0018C978 *uo;
    } hn;
    SfdTrnFn_x0018C978 *fns;
    SfdBufId_x0018C978 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0018C978;
typedef struct SfdTsum_x0018C978 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0018C978;
typedef struct SfdTmrInf_x0018C978 {
    SfdTsum_x0018C978 tsum[6];
} SfdTmrInf_x0018C978;
int SFHDS_IsSfdHeader_x0018C978(unsigned char *p, int size) __asm__("func_0018CA88");
struct SfdSj_x0018C978;
typedef struct M2vErrInf_x0018C978 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018C978;
typedef struct Mpeg2Ext_x0018C978 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018C978;
typedef enum M2vFrameRate_x0018C978 {
    M2V_FRAME_RATE_FORBIDDEN_x0018C978 = 0
} M2vFrameRate_x0018C978;
typedef enum M2vPicType_x0018C978 {
    M2V_PICTYPE_I_x0018C978 = 1,
    M2V_PICTYPE_P_x0018C978 = 2,
    M2V_PICTYPE_B_x0018C978 = 3,
    M2V_PICTYPE_D_x0018C978 = 4
} M2vPicType_x0018C978;
typedef enum M2vPicStruct_x0018C978 {
    M2V_PICSTRUCT_TOP_FIELD_x0018C978 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018C978 = 2,
    M2V_PICSTRUCT_FRAME_x0018C978 = 3
} M2vPicStruct_x0018C978;
typedef enum M2vPicAtrF64_x0018C978 {
    M2V_PICATR_F64_0_x0018C978 = 0
} M2vPicAtrF64_x0018C978;
typedef struct M2vPicAtr_x0018C978 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018C978 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018C978 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018C978 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018C978 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018C978;
typedef void (*M2vUsrDatFn_x0018C978)(void *obj, int level);
typedef struct M2vUsrSj_x0018C978 {
    struct SfdSj_x0018C978 *sj;
    M2vUsrDatFn_x0018C978 fn;
    void *obj;
} M2vUsrSj_x0018C978;
typedef struct M2vPicUsr_x0018C978 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018C978;
typedef void (*M2vCondFn_x0018C978)();
typedef struct M2vObj_x0018C978 {
    int stat;
    M2vErrInf_x0018C978 err;
    M2vCondFn_x0018C978 cond[16];
    M2vPicAtr_x0018C978 picatr;
    char pad216[64];
    M2vUsrSj_x0018C978 usrsj[4];
    M2vPicUsr_x0018C978 picusr;
    char pad340[12];
    Mpeg2Ext_x0018C978 ext;
    char pad1656[8];
} M2vObj_x0018C978;
extern void M2V_SetErrFunc_x0018C978(M2vObj_x0018C978 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0018C978 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0018C978;
typedef struct sceMpeg_x0018C978 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0018C978 *sys;
} sceMpeg_x0018C978;
typedef enum {
    sceMpegCbError_x0018C978,
    sceMpegCbNodata_x0018C978,
    sceMpegCbStopDMA_x0018C978,
    sceMpegCbRestartDMA_x0018C978,
    sceMpegCbBackground_x0018C978,
    sceMpegCbTimeStamp_x0018C978,
    sceMpegCbStr_x0018C978,
    sceMpegCbNum_x0018C978
} sceMpegCbType_x0018C978;
typedef struct {
    sceMpegCbType_x0018C978 type;
    char *errMessage;
} sceMpegCbDataError_x0018C978;
typedef struct {
    sceMpegCbType_x0018C978 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0018C978;
typedef struct {
    sceMpegCbType_x0018C978 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0018C978;
typedef union {
    sceMpegCbType_x0018C978 type;
    sceMpegCbDataError_x0018C978 error;
    sceMpegCbDataTimeStamp_x0018C978 ts;
    sceMpegCbDataStr_x0018C978 str;
} sceMpegCbData_x0018C978;
typedef int (*sceMpegCallback_x0018C978)(sceMpeg_x0018C978 *mp, sceMpegCbData_x0018C978 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0018C978 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0018C978;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0018C978;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0018C978;
typedef struct {
    _sceMpegPicture_x0018C978 *ref_image;
    _sceMpegPicture_x0018C978 *prev_image;
    _sceMpegPicture_x0018C978 *decode;
    _sceMpegPicture_x0018C978 *image;
} _sceMpegPictureSlot_x0018C978;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0018C978;
typedef void (*_sceMpegMcKernel_x0018C978)(_sceMpegMcFetch_x0018C978 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0018C978 luma_kernel[4];
    _sceMpegMcKernel_x0018C978 chroma_kernel[4];
    _sceMpegMcFetch_x0018C978 luma[4];
    _sceMpegMcFetch_x0018C978 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0018C978;
typedef struct _sceMpegDecoder_x0018C978 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0018C978 callbacks[sceMpegCbNum_x0018C978];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0018C978 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0018C978 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0018C978 slots[3];
    _sceMpegPicture_x0018C978 pictures[9];
    _sceMpegSprBuffer_x0018C978 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0018C978 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0018C978;
typedef struct SfdPlanes_x0018C978 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018C978;
typedef struct SfdUserData_x0018C978 {
    char data[512];
    int size;
} SfdUserData_x0018C978;
typedef struct SfdRecVideo_x0018C978 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0018C978 stamp;
    SfdUserData_x0018C978 user;
} SfdRecVideo_x0018C978;
typedef struct SfdSlot_x0018C978 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0018C978 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018C978 *blob;
    M2vPicAtr_x0018C978 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0018C978;
typedef struct SfdBufPool_x0018C978 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0018C978 slot[18];
} SfdBufPool_x0018C978;
typedef struct SfdMpvCond_x0018C978 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018C978;
typedef struct SfdMpvWorkBufs_x0018C978 {
    int w[2];
} SfdMpvWorkBufs_x0018C978;
typedef struct SfdMpvFrameBufs_x0018C978 {
    int w[16];
} SfdMpvFrameBufs_x0018C978;
typedef struct SfdIpuEntry_x0018C978 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0018C978;
typedef struct SfdDmaTag_x0018C978 {
    long long tag;
    long long pad;
} SfdDmaTag_x0018C978;
typedef struct SfdIpuStream_x0018C978 {
    void *base;
    SfdDmaTag_x0018C978 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0018C978 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0018C978;
typedef struct SfdIpuCtl_x0018C978 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0018C978 mpeg;
    SfdIpuStream_x0018C978 stream;
    sceMpegCbDataError_x0018C978 error;
} SfdIpuCtl_x0018C978;
typedef struct SfdPtsComp_x0018C978 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0018C978 ptsent;
} SfdPtsComp_x0018C978;
typedef struct SfdMpv_x0018C978 {
    void *handle;
    SfdMpvCond_x0018C978 cond;
    SfdMpvWorkBufs_x0018C978 work;
    SfdMpvFrameBufs_x0018C978 bufs;
    SfdSlot_x0018C978 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0018C978 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0018C978 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0018C978 planes[2];
    SfdSlot_x0018C978 *first;
    SfdSlot_x0018C978 *second;
    SfdSlot_x0018C978 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0018C978 slots[16];
    SfdBufPool_x0018C978 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0018C978 ipu;
} SfdMpv_x0018C978;
typedef enum SfdPicType_x0018C978 {
    SFD_PICTYPE_I_x0018C978 = 1,
    SFD_PICTYPE_P_x0018C978 = 2,
    SFD_PICTYPE_B_x0018C978 = 3
} SfdPicType_x0018C978;
typedef enum SfdFrmInfF60_x0018C978 {
    SFD_FRMINF_F60_0_x0018C978 = 0
} SfdFrmInfF60_x0018C978;
typedef struct SfdFrameDetail_x0018C978 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0018C978;
typedef struct SfdFrameInfo_x0018C978 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0018C978 picType;
    int time;
    int unit;
    SfdBufFmt_x0018C978 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018C978 *picUsr;
    SfdFrmInfF60_x0018C978 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0018C978 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0018C978;
typedef struct SfdVfrm_x0018C978 {
    int used;
    int f4;
    SfdFrameInfo_x0018C978 inf;
} SfdVfrm_x0018C978;
typedef struct SfdPly_x0018C978 SfdPly_x0018C978;
typedef struct SfdRec_x0018C978 SfdRec_x0018C978;
typedef struct SfdRecSub_x0018C978 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0018C978;
typedef struct SfdRecSlot_x0018C978 {
    SfdRec_x0018C978 *rec;
    SfdRecSub_x0018C978 sub;
} SfdRecSlot_x0018C978;
typedef struct SfdSysHd_x0018C978 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0018C978;
typedef struct SfdRecSys_x0018C978 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0018C978 syshd;
} SfdRecSys_x0018C978;
typedef struct SfdRecAudio_x0018C978 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0018C978;
struct SfdRec_x0018C978 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0018C978 hdrInf;
    SfdRecSys_x0018C978 sys;
    char pad2616[152];
    SfdRecVideo_x0018C978 video;
    SfdRecAudio_x0018C978 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0018C978 {
    SfdCrePrm_x0018C978 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0018C978 hdr;
    SfdMvInf_x0018C978 mvInf;
    char pad2380[4];
    SfdPlyInf_x0018C978 plyInf;
    SfdErrInf_x0018C978 err;
    int cond[SFD_COND_NUM_x0018C978];
    int cond2[SFD_COND_NUM_x0018C978];
    char pad3364[4];
    SfdTim_x0018C978 tim;
    SfdBufEnt_x0018C978 buf[8];
    SfdVfrm_x0018C978 vfrm[16];
    SfdTrnSlot_x0018C978 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0018C978 mps;
    char pad8944[176];
    SfdMpv_x0018C978 mpv;
    SfdAdxCtx_x0018C978 adxt;
    char pad13680[100];
    SfdAoap_x0018C978 aoap;
    char pad13804[4];
    SfainfList_x0018C978 uo;
    char pad13860[4];
    SfdRecSlot_x0018C978 see;
    SfdTmrInf_x0018C978 tmr;
};
int sfhds_IsPrvate2PketStart_x0018C978(unsigned char *p) __asm__("func_0018CA30");
int sfhdr_SetHdr_x0018C978(SfdPly_x0018C978 *hn, unsigned char *data, int size) __asm__("func_0018CAE0");
int sfhds_IsPrvate2PketStart_x0018C978(unsigned char *p) __asm__("func_0018CA30");
int SFHDS_IsSfdHeader_x0018C978(unsigned char *p, int size) __asm__("func_0018CA88");
int sfhdr_SetHdr_x0018C978(SfdPly_x0018C978 *hn, unsigned char *data, int size) __asm__("func_0018CAE0");
int func_0018C978_x0018C978(SfdPly_x0018C978 *hn, int type, unsigned char *p, int size, int *set) __asm__("func_0018C978");
/* SFHDS_SetHdr: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018C978_x0018C978(SfdPly_x0018C978 *hn, int type, unsigned char *p, int size, int *set) {
    *set = 0;
    if (type != 2) {
        return 0;
    }
    p -= 6;
    size += 6;
    if (!sfhds_IsPrvate2PketStart_x0018C978(p)) {
        p -= 2;
        size += 2;
        if (!sfhds_IsPrvate2PketStart_x0018C978(p)) {
            return 0;
        }
    }
    p -= 12;
    size += 12;
    if (!SFHDS_IsSfdHeader_x0018C978(p, size)) {
        return 0;
    }
    *set = sfhdr_SetHdr_x0018C978(hn, p, size);
    return 1;
}
s32 func_0018CA30(void) {
    return func_0018CA58() == 0x1BF;
}
s32 func_0018CA58(u8 *arg0) {
    return (((((*(u8 *)((u8 *)arg0 + 0) << 8) | *(u8 *)((u8 *)arg0 + 1)) << 8) | *(u8 *)((u8 *)arg0 + 2)) << 8) | *(u8 *)((u8 *)arg0 + 3);
}
typedef unsigned int u32_x0018CA88;
extern void *fn_12_3310C_x0018CA88(void) __asm__("func_0019D5D8");
extern int fn_12_32EAC_x0018CA88(void *movie, u32_x0018CA88 *result) __asm__("func_0019D7F0");
extern void fn_12_330E0_x0018CA88(void *movie) __asm__("func_0019D6A0");
u32_x0018CA88 func_0018CA88_x0018CA88(void) __asm__("func_0018CA88");
/* fn_12_24760: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_24760.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
u32_x0018CA88 func_0018CA88_x0018CA88(void) {
    void *movie;
    u32_x0018CA88 result;
    movie = fn_12_3310C_x0018CA88();
    if (movie == 0) {
        return 0;
    }
    if (fn_12_32EAC_x0018CA88(movie, &result) == 0) {
        result = 0;
    }
    fn_12_330E0_x0018CA88(movie);
    return result;
}
typedef struct SfdSj_x0018CAE0 SfdSj_x0018CAE0;
typedef struct SfdSjChunk_x0018CAE0 {
    char *data;
    int len;
} SfdSjChunk_x0018CAE0;
typedef struct SfdSjVtbl_x0018CAE0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018CAE0 *sj);
    int (*getUuid)(SfdSj_x0018CAE0 *sj);
    void (*reset)(SfdSj_x0018CAE0 *sj);
    void (*getChunk)(SfdSj_x0018CAE0 *sj, int id, int n, SfdSjChunk_x0018CAE0 *ck);
    void (*ungetChunk)(SfdSj_x0018CAE0 *sj, int id, SfdSjChunk_x0018CAE0 *ck);
    void (*putChunk)(SfdSj_x0018CAE0 *sj, int id, SfdSjChunk_x0018CAE0 *ck);
    int (*getNumData)(SfdSj_x0018CAE0 *sj, int id);
} SfdSjVtbl_x0018CAE0;
struct SfdSj_x0018CAE0 {
    SfdSjVtbl_x0018CAE0 *vtbl;
};
struct SfdSj_x0018CAE0;
struct SfdRecSlot_x0018CAE0;
struct SfdRec_x0018CAE0;
struct SfdMpvCond_x0018CAE0;
struct SfdPlanes_x0018CAE0;
struct SfdFrameInfo_x0018CAE0;
struct SfdPly_x0018CAE0;
typedef int (*SfdTimeFn_x0018CAE0)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0018CAE0 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0018CAE0;
typedef struct SfdTimeRec_x0018CAE0 {
    int valid;
    SfdTimeCode_x0018CAE0 tc;
    int time;
    int unit;
} SfdTimeRec_x0018CAE0;
typedef struct SfdTst_x0018CAE0 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0018CAE0;
typedef struct SfdSyncTally_x0018CAE0 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0018CAE0;
typedef struct SfdSyncQueue_x0018CAE0 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0018CAE0;
typedef struct SfdFieldEntry_x0018CAE0 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0018CAE0;
typedef struct SfdPtsm_x0018CAE0 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0018CAE0;
typedef struct SfdHdrAudio_x0018CAE0 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018CAE0;
typedef struct SfdHdrMux_x0018CAE0 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018CAE0;
typedef struct SfdHdrVideo_x0018CAE0 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018CAE0;
typedef struct SfdHdrInf_x0018CAE0 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018CAE0 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018CAE0 audio;
    SfdHdrVideo_x0018CAE0 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018CAE0;
typedef struct SfdMvInf_x0018CAE0 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0018CAE0;
typedef struct SfdPlyInf_x0018CAE0 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0018CAE0;
typedef void (*SfdErrFn_x0018CAE0)(void *obj, int code);
typedef struct SfdErrInf_x0018CAE0 {
    SfdErrFn_x0018CAE0 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018CAE0;
typedef int (*SfdExtClockFn_x0018CAE0)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0018CAE0)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0018CAE0 {
    SfdTimeFn_x0018CAE0 timefn[6];
    SfdIsSkipFn_x0018CAE0 isSkipFn;
    SfdTimeCode_x0018CAE0 tc;
    SfdTimeRec_x0018CAE0 state;
    SfdTimeRec_x0018CAE0 best;
    SfdTimeRec_x0018CAE0 tot;
    SfdTimeRec_x0018CAE0 cur;
    SfdTimeRec_x0018CAE0 latest;
    SfdTimeRec_x0018CAE0 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0018CAE0 tally;
    SfdSyncQueue_x0018CAE0 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0018CAE0 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0018CAE0 tst;
    SfdFieldEntry_x0018CAE0 fields[64];
    SfdPtsm_x0018CAE0 ptsm;
    char pad1468[36];
} SfdTim_x0018CAE0;
enum {
    SFD_COND_VIDEO_x0018CAE0 = 5,
    SFD_COND_AUDIO_x0018CAE0 = 6,
    SFD_COND_KEEPSUP_x0018CAE0 = 8,
    SFD_COND_SYNCMODE_x0018CAE0 = 15,
    SFD_COND_ETIME_x0018CAE0 = 20,
    SFD_COND_ETUNIT_x0018CAE0 = 21,
    SFD_COND_LNKSTM_x0018CAE0 = 49,
    SFD_COND_SUPPLY_END_x0018CAE0 = 56,
    SFD_COND_DECODE_END_x0018CAE0 = 57,
    SFD_COND_DEMUX_SPLIT_x0018CAE0 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0018CAE0 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0018CAE0 = 80,
    SFD_COND_SYSHD_FN_x0018CAE0 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0018CAE0 = 86,
    SFD_COND_NUM_x0018CAE0 = 100
};
typedef enum SfdBufFmt_x0018CAE0 {
    SFD_BUFFMT_0_x0018CAE0 = 0
} SfdBufFmt_x0018CAE0;
typedef enum SfdBufId_x0018CAE0 {
    SFD_BUF_NONE_x0018CAE0 = 8
} SfdBufId_x0018CAE0;
typedef struct SfdCrePrm_x0018CAE0 {
    struct SfdTrnConfig_x0018CAE0 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0018CAE0 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0018CAE0;
typedef struct SfdItem_x0018CAE0 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018CAE0;
typedef struct SfdRing_x0018CAE0 {
    SfdItem_x0018CAE0 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018CAE0;
typedef struct SfdBufInf_x0018CAE0 {
    char *data;
    struct SfdSj_x0018CAE0 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018CAE0;
typedef struct SfdBufCur_x0018CAE0 {
    char *pos;
    int len;
} SfdBufCur_x0018CAE0;
typedef struct SfdBufDlm_x0018CAE0 {
    char *pos;
    char *end;
} SfdBufDlm_x0018CAE0;
typedef struct SfdBufRing_x0018CAE0 {
    SfdBufInf_x0018CAE0 sup;
    SfdBufDlm_x0018CAE0 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018CAE0 ptsque;
} SfdBufRing_x0018CAE0;
typedef struct SfdBufAring_x0018CAE0 {
    SfdBufInf_x0018CAE0 sup;
    SfdBufCur_x0018CAE0 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018CAE0;
typedef struct SfdUoch_x0018CAE0 {
    struct SfdSj_x0018CAE0 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018CAE0;
typedef struct SfdBufEnt_x0018CAE0 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018CAE0 ring;
        SfdBufAring_x0018CAE0 aring;
        SfdBufInf_x0018CAE0 vfrm;
        SfdUoch_x0018CAE0 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018CAE0;
typedef int (*SfdTrnFn_x0018CAE0)();
typedef struct SfdTrnConfig_x0018CAE0 {
    SfdTrnFn_x0018CAE0 *fns[9];
} SfdTrnConfig_x0018CAE0;
typedef struct SfdMpsPrm_x0018CAE0 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0018CAE0 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0018CAE0;
typedef struct SfdAdxCfg_x0018CAE0 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0018CAE0;
typedef void (*SfdAdxStep_x0018CAE0)(struct SfdPly_x0018CAE0 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0018CAE0 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0018CAE0 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0018CAE0 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0018CAE0;
typedef struct SfdAoap_x0018CAE0 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0018CAE0 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0018CAE0 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0018CAE0 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0018CAE0 *h);
    void (*setSpeed)(struct SfdPly_x0018CAE0 *h, int speed);
} SfdAoap_x0018CAE0;
typedef struct SfainfOut_x0018CAE0 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0018CAE0;
typedef struct SfainfList_x0018CAE0 {
    int nout;
    SfainfOut_x0018CAE0 out[3];
} SfainfList_x0018CAE0;
typedef struct SfdTrnSlot_x0018CAE0 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0018CAE0 *mps;
        struct SfdMpv_x0018CAE0 *mpv;
        SfdAdxCtx_x0018CAE0 *adxt;
        SfdAoap_x0018CAE0 *aoap;
        SfainfList_x0018CAE0 *uo;
    } hn;
    SfdTrnFn_x0018CAE0 *fns;
    SfdBufId_x0018CAE0 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0018CAE0;
typedef struct SfdTsum_x0018CAE0 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0018CAE0;
typedef struct SfdTmrInf_x0018CAE0 {
    SfdTsum_x0018CAE0 tsum[6];
} SfdTmrInf_x0018CAE0;
int SFSET_GetCond_x0018CAE0(void *sfd, int index) __asm__("func_001999E0");
void SFHDS_ProcessHdr_x0018CAE0(SfdHdrInf_x0018CAE0 *hdr) __asm__("func_0018CD70");
struct SfdSj_x0018CAE0;
typedef struct M2vErrInf_x0018CAE0 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018CAE0;
typedef struct Mpeg2Ext_x0018CAE0 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018CAE0;
typedef enum M2vFrameRate_x0018CAE0 {
    M2V_FRAME_RATE_FORBIDDEN_x0018CAE0 = 0
} M2vFrameRate_x0018CAE0;
typedef enum M2vPicType_x0018CAE0 {
    M2V_PICTYPE_I_x0018CAE0 = 1,
    M2V_PICTYPE_P_x0018CAE0 = 2,
    M2V_PICTYPE_B_x0018CAE0 = 3,
    M2V_PICTYPE_D_x0018CAE0 = 4
} M2vPicType_x0018CAE0;
typedef enum M2vPicStruct_x0018CAE0 {
    M2V_PICSTRUCT_TOP_FIELD_x0018CAE0 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018CAE0 = 2,
    M2V_PICSTRUCT_FRAME_x0018CAE0 = 3
} M2vPicStruct_x0018CAE0;
typedef enum M2vPicAtrF64_x0018CAE0 {
    M2V_PICATR_F64_0_x0018CAE0 = 0
} M2vPicAtrF64_x0018CAE0;
typedef struct M2vPicAtr_x0018CAE0 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018CAE0 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018CAE0 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018CAE0 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018CAE0 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018CAE0;
typedef void (*M2vUsrDatFn_x0018CAE0)(void *obj, int level);
typedef struct M2vUsrSj_x0018CAE0 {
    struct SfdSj_x0018CAE0 *sj;
    M2vUsrDatFn_x0018CAE0 fn;
    void *obj;
} M2vUsrSj_x0018CAE0;
typedef struct M2vPicUsr_x0018CAE0 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018CAE0;
typedef void (*M2vCondFn_x0018CAE0)();
typedef struct M2vObj_x0018CAE0 {
    int stat;
    M2vErrInf_x0018CAE0 err;
    M2vCondFn_x0018CAE0 cond[16];
    M2vPicAtr_x0018CAE0 picatr;
    char pad216[64];
    M2vUsrSj_x0018CAE0 usrsj[4];
    M2vPicUsr_x0018CAE0 picusr;
    char pad340[12];
    Mpeg2Ext_x0018CAE0 ext;
    char pad1656[8];
} M2vObj_x0018CAE0;
extern void M2V_SetErrFunc_x0018CAE0(M2vObj_x0018CAE0 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0018CAE0 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0018CAE0;
typedef struct sceMpeg_x0018CAE0 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0018CAE0 *sys;
} sceMpeg_x0018CAE0;
typedef enum {
    sceMpegCbError_x0018CAE0,
    sceMpegCbNodata_x0018CAE0,
    sceMpegCbStopDMA_x0018CAE0,
    sceMpegCbRestartDMA_x0018CAE0,
    sceMpegCbBackground_x0018CAE0,
    sceMpegCbTimeStamp_x0018CAE0,
    sceMpegCbStr_x0018CAE0,
    sceMpegCbNum_x0018CAE0
} sceMpegCbType_x0018CAE0;
typedef struct {
    sceMpegCbType_x0018CAE0 type;
    char *errMessage;
} sceMpegCbDataError_x0018CAE0;
typedef struct {
    sceMpegCbType_x0018CAE0 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0018CAE0;
typedef struct {
    sceMpegCbType_x0018CAE0 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0018CAE0;
typedef union {
    sceMpegCbType_x0018CAE0 type;
    sceMpegCbDataError_x0018CAE0 error;
    sceMpegCbDataTimeStamp_x0018CAE0 ts;
    sceMpegCbDataStr_x0018CAE0 str;
} sceMpegCbData_x0018CAE0;
typedef int (*sceMpegCallback_x0018CAE0)(sceMpeg_x0018CAE0 *mp, sceMpegCbData_x0018CAE0 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0018CAE0 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0018CAE0;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0018CAE0;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0018CAE0;
typedef struct {
    _sceMpegPicture_x0018CAE0 *ref_image;
    _sceMpegPicture_x0018CAE0 *prev_image;
    _sceMpegPicture_x0018CAE0 *decode;
    _sceMpegPicture_x0018CAE0 *image;
} _sceMpegPictureSlot_x0018CAE0;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0018CAE0;
typedef void (*_sceMpegMcKernel_x0018CAE0)(_sceMpegMcFetch_x0018CAE0 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0018CAE0 luma_kernel[4];
    _sceMpegMcKernel_x0018CAE0 chroma_kernel[4];
    _sceMpegMcFetch_x0018CAE0 luma[4];
    _sceMpegMcFetch_x0018CAE0 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0018CAE0;
typedef struct _sceMpegDecoder_x0018CAE0 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0018CAE0 callbacks[sceMpegCbNum_x0018CAE0];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0018CAE0 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0018CAE0 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0018CAE0 slots[3];
    _sceMpegPicture_x0018CAE0 pictures[9];
    _sceMpegSprBuffer_x0018CAE0 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0018CAE0 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0018CAE0;
typedef struct SfdPlanes_x0018CAE0 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018CAE0;
typedef struct SfdUserData_x0018CAE0 {
    char data[512];
    int size;
} SfdUserData_x0018CAE0;
typedef struct SfdRecVideo_x0018CAE0 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0018CAE0 stamp;
    SfdUserData_x0018CAE0 user;
} SfdRecVideo_x0018CAE0;
typedef struct SfdSlot_x0018CAE0 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0018CAE0 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018CAE0 *blob;
    M2vPicAtr_x0018CAE0 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0018CAE0;
typedef struct SfdBufPool_x0018CAE0 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0018CAE0 slot[18];
} SfdBufPool_x0018CAE0;
typedef struct SfdMpvCond_x0018CAE0 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018CAE0;
typedef struct SfdMpvWorkBufs_x0018CAE0 {
    int w[2];
} SfdMpvWorkBufs_x0018CAE0;
typedef struct SfdMpvFrameBufs_x0018CAE0 {
    int w[16];
} SfdMpvFrameBufs_x0018CAE0;
typedef struct SfdIpuEntry_x0018CAE0 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0018CAE0;
typedef struct SfdDmaTag_x0018CAE0 {
    long long tag;
    long long pad;
} SfdDmaTag_x0018CAE0;
typedef struct SfdIpuStream_x0018CAE0 {
    void *base;
    SfdDmaTag_x0018CAE0 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0018CAE0 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0018CAE0;
typedef struct SfdIpuCtl_x0018CAE0 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0018CAE0 mpeg;
    SfdIpuStream_x0018CAE0 stream;
    sceMpegCbDataError_x0018CAE0 error;
} SfdIpuCtl_x0018CAE0;
typedef struct SfdPtsComp_x0018CAE0 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0018CAE0 ptsent;
} SfdPtsComp_x0018CAE0;
typedef struct SfdMpv_x0018CAE0 {
    void *handle;
    SfdMpvCond_x0018CAE0 cond;
    SfdMpvWorkBufs_x0018CAE0 work;
    SfdMpvFrameBufs_x0018CAE0 bufs;
    SfdSlot_x0018CAE0 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0018CAE0 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0018CAE0 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0018CAE0 planes[2];
    SfdSlot_x0018CAE0 *first;
    SfdSlot_x0018CAE0 *second;
    SfdSlot_x0018CAE0 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0018CAE0 slots[16];
    SfdBufPool_x0018CAE0 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0018CAE0 ipu;
} SfdMpv_x0018CAE0;
typedef enum SfdPicType_x0018CAE0 {
    SFD_PICTYPE_I_x0018CAE0 = 1,
    SFD_PICTYPE_P_x0018CAE0 = 2,
    SFD_PICTYPE_B_x0018CAE0 = 3
} SfdPicType_x0018CAE0;
typedef enum SfdFrmInfF60_x0018CAE0 {
    SFD_FRMINF_F60_0_x0018CAE0 = 0
} SfdFrmInfF60_x0018CAE0;
typedef struct SfdFrameDetail_x0018CAE0 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0018CAE0;
typedef struct SfdFrameInfo_x0018CAE0 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0018CAE0 picType;
    int time;
    int unit;
    SfdBufFmt_x0018CAE0 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018CAE0 *picUsr;
    SfdFrmInfF60_x0018CAE0 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0018CAE0 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0018CAE0;
typedef struct SfdVfrm_x0018CAE0 {
    int used;
    int f4;
    SfdFrameInfo_x0018CAE0 inf;
} SfdVfrm_x0018CAE0;
typedef struct SfdPly_x0018CAE0 SfdPly_x0018CAE0;
typedef struct SfdRec_x0018CAE0 SfdRec_x0018CAE0;
typedef struct SfdRecSub_x0018CAE0 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0018CAE0;
typedef struct SfdRecSlot_x0018CAE0 {
    SfdRec_x0018CAE0 *rec;
    SfdRecSub_x0018CAE0 sub;
} SfdRecSlot_x0018CAE0;
typedef struct SfdSysHd_x0018CAE0 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0018CAE0;
typedef struct SfdRecSys_x0018CAE0 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0018CAE0 syshd;
} SfdRecSys_x0018CAE0;
typedef struct SfdRecAudio_x0018CAE0 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0018CAE0;
struct SfdRec_x0018CAE0 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0018CAE0 hdrInf;
    SfdRecSys_x0018CAE0 sys;
    char pad2616[152];
    SfdRecVideo_x0018CAE0 video;
    SfdRecAudio_x0018CAE0 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0018CAE0 {
    SfdCrePrm_x0018CAE0 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0018CAE0 hdr;
    SfdMvInf_x0018CAE0 mvInf;
    char pad2380[4];
    SfdPlyInf_x0018CAE0 plyInf;
    SfdErrInf_x0018CAE0 err;
    int cond[SFD_COND_NUM_x0018CAE0];
    int cond2[SFD_COND_NUM_x0018CAE0];
    char pad3364[4];
    SfdTim_x0018CAE0 tim;
    SfdBufEnt_x0018CAE0 buf[8];
    SfdVfrm_x0018CAE0 vfrm[16];
    SfdTrnSlot_x0018CAE0 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0018CAE0 mps;
    char pad8944[176];
    SfdMpv_x0018CAE0 mpv;
    SfdAdxCtx_x0018CAE0 adxt;
    char pad13680[100];
    SfdAoap_x0018CAE0 aoap;
    char pad13804[4];
    SfainfList_x0018CAE0 uo;
    char pad13860[4];
    SfdRecSlot_x0018CAE0 see;
    SfdTmrInf_x0018CAE0 tmr;
};
void MEM_Copy_x0018CAE0(void *dst, void *src, int n) __asm__("func_00178BA8");
void sfhds_SetHdrSeek_x0018CAE0(SfdPly_x0018CAE0 *hn) __asm__("func_0018CBA8");
void sfhds_SetMvInf_x0018CAE0(SfdPly_x0018CAE0 *hn) __asm__("func_0018D390");
void sfhds_SetHdrSeek_x0018CAE0(SfdPly_x0018CAE0 *hn) __asm__("func_0018CBA8");
void SFHDS_ProcessHdr_x0018CAE0(SfdHdrInf_x0018CAE0 *hdr) __asm__("func_0018CD70");
void sfhds_SetMvInf_x0018CAE0(SfdPly_x0018CAE0 *hn) __asm__("func_0018D390");
int func_0018CAE0_x0018CAE0(SfdPly_x0018CAE0 *hn, unsigned char *data, int size) __asm__("func_0018CAE0");
/* sfhdr_SetHdr: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018CAE0_x0018CAE0(SfdPly_x0018CAE0 *hn, unsigned char *data, int size) {
    void (*callback)(int obj, unsigned char *data, int size);
    int obj;
    int len;
    SfdHdrInf_x0018CAE0 *hdr;
    callback = (void (*)(int, unsigned char *, int))SFSET_GetCond_x0018CAE0(hn, 75);
    obj = SFSET_GetCond_x0018CAE0(hn, 76);
    if (callback != 0) {
        callback(obj, data, size);
    }
    hdr = &hn->hdr;
    if (hdr->valid != 0) {
        return 0;
    }
    len = size > 2048 ? 2048 : size;
    MEM_Copy_x0018CAE0(hn->hdr.data, (char *)data, len);
    hdr->size = len;
    SFHDS_ProcessHdr_x0018CAE0(hdr);
    sfhds_SetMvInf_x0018CAE0(hn);
    sfhds_SetHdrSeek_x0018CAE0(hn);
    return 1;
}
void func_0018CBA8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_0018CD20();
    if (temp_v0 != 0) {
        func_0018CBE8(temp_v0, arg0 + 0x78);
    }
}
typedef struct SfdHdrAudio_x0018CBE8 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018CBE8;
typedef struct SfdHdrMux_x0018CBE8 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018CBE8;
typedef struct SfdHdrVideo_x0018CBE8 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018CBE8;
typedef struct SfdHdrInf_x0018CBE8 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018CBE8 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018CBE8 audio;
    SfdHdrVideo_x0018CBE8 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018CBE8;
void func_0018CBE8_x0018CBE8(SfdHdrInf_x0018CBE8 *dst, SfdHdrInf_x0018CBE8 *src) __asm__("func_0018CBE8");
/* sfhds_CopyFhd: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018CBE8_x0018CBE8(SfdHdrInf_x0018CBE8 *dst, SfdHdrInf_x0018CBE8 *src) {
    *dst = *src;
}
void func_0018CCB8(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = arg0 + 0x78;
    temp_v0 = func_0018CD20();
    if (temp_v0 != 0) {
        func_0018CBE8(temp_s0, temp_v0);
        func_0018CD70(temp_s0);
        func_0018D390(arg0);
    }
}
s32 func_0018F6C0_x0018CD20(u8 *) __asm__("func_0018F6C0");
s32 func_0018CD20_x0018CD20(u8 *p) __asm__("func_0018CD20");
s32 func_0018CD20_x0018CD20(u8 *p)
{
    if (*(s32 *)(p + 0x31E8) == 0) {
        return 0;
    }
    if (func_0018F6C0_x0018CD20(p) > 0) {
        return 0;
    }
    return *(s32 *)(p + 0x31E8) + 0xC;
}
s32 func_0018CDD8_x0018CD70(s32, void *) __asm__("func_0018CDD8");
s32 func_0019D5D8_x0018CD70(s32, s32) __asm__("func_0019D5D8");
s32 func_0019D6A0_x0018CD70(s32) __asm__("func_0019D6A0");
void func_0018CD70_x0018CD70(u8 *arg0) __asm__("func_0018CD70");
void func_0018CD70_x0018CD70(u8 *arg0) {
    s32 temp_v0;

    temp_v0 = func_0019D5D8_x0018CD70(arg0 + 0x94, *(s32 *)((u8 *)arg0 + 0x90));
    if (temp_v0 != 0) {
        func_0018CDD8_x0018CD70(temp_v0, arg0);
        func_0019D6A0_x0018CD70(temp_v0);
    }
}
typedef struct SfdHdrAudio_x0018CDD8 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018CDD8;
typedef struct SfdHdrMux_x0018CDD8 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018CDD8;
typedef struct SfdHdrVideo_x0018CDD8 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018CDD8;
typedef struct SfdHdrInf_x0018CDD8 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018CDD8 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018CDD8 audio;
    SfdHdrVideo_x0018CDD8 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018CDD8;
typedef struct SfhHn_x0018CDD8 {
    int stat;
    struct SfhHdr *hdr;
    unsigned int size;
    int version;
} SfhHn_x0018CDD8;
int SFH_IsSfdHeader_x0018CDD8(SfhHn_x0018CDD8 *hn, int *ok) __asm__("func_0019D7F0");
int SFH_AnlyHdrToolVer_x0018CDD8(SfhHn_x0018CDD8 *hn, int *major, int *minor) __asm__("func_0019DBD8");
int SFH_AnlyByteRate_x0018CDD8(SfhHn_x0018CDD8 *hn, int *value) __asm__("func_0019E020");
void sfhds_AnlyHead_x0018CDD8(SfhHn_x0018CDD8 *sfh, SfdHdrInf_x0018CDD8 *hdr) __asm__("func_0018CF30");
void sfhds_AnlySys_x0018CDD8(SfhHn_x0018CDD8 *sfh, SfdHdrMux_x0018CDD8 *mux) __asm__("func_0018CFC0");
int sfhds_AnlyUsedStmid_x0018CDD8(SfhHn_x0018CDD8 *sfh, int first, int last) __asm__("func_0018D078");
void sfhds_AnlyAudio_x0018CDD8(SfhHn_x0018CDD8 *sfh, int id, SfdHdrAudio_x0018CDD8 *audio) __asm__("func_0018D0F0");
void sfhds_AnlyVideo_x0018CDD8(SfhHn_x0018CDD8 *sfh, int id, SfdHdrVideo_x0018CDD8 *video) __asm__("func_0018D188");
void sfhds_AnlyHead_x0018CDD8(SfhHn_x0018CDD8 *sfh, SfdHdrInf_x0018CDD8 *hdr) __asm__("func_0018CF30");
void sfhds_AnlySys_x0018CDD8(SfhHn_x0018CDD8 *sfh, SfdHdrMux_x0018CDD8 *mux) __asm__("func_0018CFC0");
int sfhds_AnlyUsedStmid_x0018CDD8(SfhHn_x0018CDD8 *sfh, int first, int last) __asm__("func_0018D078");
void sfhds_AnlyAudio_x0018CDD8(SfhHn_x0018CDD8 *sfh, int id, SfdHdrAudio_x0018CDD8 *audio) __asm__("func_0018D0F0");
void sfhds_AnlyVideo_x0018CDD8(SfhHn_x0018CDD8 *sfh, int id, SfdHdrVideo_x0018CDD8 *video) __asm__("func_0018D188");
void func_0018CDD8_x0018CDD8(SfhHn_x0018CDD8 *sfh, SfdHdrInf_x0018CDD8 *hdr) __asm__("func_0018CDD8");
/* sfhds_DoProcessHdr: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018CDD8_x0018CDD8(SfhHn_x0018CDD8 *sfh, SfdHdrInf_x0018CDD8 *hdr) {
    int ok;
    int major;
    int minor;
    int muxRate;
    int version;
    if (SFH_IsSfdHeader_x0018CDD8(sfh, &ok) == 0) {
        ok = 0;
    }
    if (ok == 0) {
        return;
    }
    if (SFH_AnlyHdrToolVer_x0018CDD8(sfh, &major, &minor) == 0) {
        major = 0;
        minor = 0;
    }
    hdr->verMajor = major;
    hdr->verMinor = minor;
    version = major * 100 + minor;
    if (SFH_AnlyByteRate_x0018CDD8(sfh, &muxRate) == 0) {
        muxRate = 0;
    }
    if (version < 110) {
        muxRate = -muxRate;
    }
    hdr->muxRate = muxRate;
    sfhds_AnlyHead_x0018CDD8(sfh, hdr);
    sfhds_AnlySys_x0018CDD8(sfh, &hdr->mux);
    hdr->adxStm = sfhds_AnlyUsedStmid_x0018CDD8(sfh, 0xBD, 0xBD);
    hdr->prv2Stm = sfhds_AnlyUsedStmid_x0018CDD8(sfh, 0xBF, 0xBF);
    hdr->audioStm = sfhds_AnlyUsedStmid_x0018CDD8(sfh, 0xC0, 0xDF);
    hdr->videoStm = sfhds_AnlyUsedStmid_x0018CDD8(sfh, 0xE0, 0xEF);
    sfhds_AnlyAudio_x0018CDD8(sfh, hdr->audioStm, &hdr->audio);
    sfhds_AnlyVideo_x0018CDD8(sfh, hdr->videoStm, &hdr->video);
    hdr->valid = 1;
}
s32 func_0018D320_x0018CF30() __asm__("func_0018D320");
extern s32 func_0019DCF8_x0018CF30 __asm__("func_0019DCF8");
extern s32 func_0019DD40_x0018CF30 __asm__("func_0019DD40");
extern s32 func_0019DD88_x0018CF30 __asm__("func_0019DD88");
extern s32 func_0019DDD0_x0018CF30 __asm__("func_0019DDD0");
void func_0018CF30_x0018CF30(s32 *arg0, u8 *arg1) __asm__("func_0018CF30");
void func_0018CF30_x0018CF30(s32 *arg0, u8 *arg1) {
    s32 temp_v0;

    *(s32 *)((u8 *)arg1 + 0x10) = func_0018D320_x0018CF30(arg0, &func_0019DCF8_x0018CF30);
    *(s32 *)((u8 *)arg1 + 0x14) = func_0018D320_x0018CF30(arg0, &func_0019DD40_x0018CF30);
    temp_v0 = func_0018D320_x0018CF30(arg0, &func_0019DD88_x0018CF30);
    *(s32 *)((u8 *)arg1 + 0x18) = temp_v0;
    if (temp_v0 == -1) {
        *(s32 *)((u8 *)arg1 + 0x18) = 2;
    }
    *(s32 *)((u8 *)arg1 + 0x1C) = func_0018D320_x0018CF30(arg0, &func_0019DDD0_x0018CF30);
}
s32 func_0018D320_x0018CFC0() __asm__("func_0018D320");
extern s32 func_0019DF00_x0018CFC0 __asm__("func_0019DF00");
extern s32 func_0019DF48_x0018CFC0 __asm__("func_0019DF48");
extern s32 func_0019DF90_x0018CFC0 __asm__("func_0019DF90");
extern s32 func_0019DFD8_x0018CFC0 __asm__("func_0019DFD8");
extern s32 func_0019E088_x0018CFC0 __asm__("func_0019E088");
extern s32 func_0019E0D0_x0018CFC0 __asm__("func_0019E0D0");
extern s32 func_0019E118_x0018CFC0 __asm__("func_0019E118");
void func_0018CFC0_x0018CFC0(s32 *arg0, u8 *arg1) __asm__("func_0018CFC0");
void func_0018CFC0_x0018CFC0(s32 *arg0, u8 *arg1) {
    *(s32 *)((u8 *)arg1 + 0) = func_0018D320_x0018CFC0(arg0, &func_0019DF00_x0018CFC0);
    *(s32 *)((u8 *)arg1 + 4) = func_0018D320_x0018CFC0(arg0, &func_0019DF48_x0018CFC0);
    *(s32 *)((u8 *)arg1 + 8) = func_0018D320_x0018CFC0(arg0, &func_0019DF90_x0018CFC0);
    *(s32 *)((u8 *)arg1 + 0xC) = func_0018D320_x0018CFC0(arg0, &func_0019DFD8_x0018CFC0);
    *(s32 *)((u8 *)arg1 + 0x10) = func_0018D320_x0018CFC0(arg0, &func_0019E088_x0018CFC0);
    *(s32 *)((u8 *)arg1 + 0x14) = func_0018D320_x0018CFC0(arg0, &func_0019E0D0_x0018CFC0);
    *(s32 *)((u8 *)arg1 + 0x18) = func_0018D320_x0018CFC0(arg0, &func_0019E118_x0018CFC0);
}
typedef struct SfhHn_x0018D078 {
    int stat;
    struct SfhHdr *hdr;
    unsigned int size;
    int version;
} SfhHn_x0018D078;
int SFH_IsExistStmId_x0018D078(SfhHn_x0018D078 *hn, unsigned char id, int *exist) __asm__("func_0019D8E0");
int func_0018D078_x0018D078(SfhHn_x0018D078 *sfh, int first, int last) __asm__("func_0018D078");
/* sfhds_AnlyUsedStmid: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018D078_x0018D078(SfhHn_x0018D078 *sfh, int first, int last) {
    int exist;
    int id;
    for (id = first; id <= last; id++) {
        if (SFH_IsExistStmId_x0018D078(sfh, (unsigned char)id, &exist) != 0 && exist != 0) {
            return id;
        }
    }
    return 0;
}
s32 func_0018D358_x0018D0F0() __asm__("func_0018D358");
extern s32 func_0019E298_x0018D0F0 __asm__("func_0019E298");
extern s32 func_0019E300_x0018D0F0 __asm__("func_0019E300");
extern s32 func_0019E380_x0018D0F0 __asm__("func_0019E380");
extern s32 func_0019E3E8_x0018D0F0 __asm__("func_0019E3E8");
void func_0018D0F0_x0018D0F0(s32 *arg0, s32 arg1, u8 *arg2) __asm__("func_0018D0F0");
void func_0018D0F0_x0018D0F0(s32 *arg0, s32 arg1, u8 *arg2) {
    if (arg1 != 0) {
        *(s32 *)((u8 *)arg2 + 0) = func_0018D358_x0018D0F0(arg0, arg1, &func_0019E298_x0018D0F0);
        *(s32 *)((u8 *)arg2 + 4) = func_0018D358_x0018D0F0(arg0, arg1, &func_0019E300_x0018D0F0);
        *(s32 *)((u8 *)arg2 + 8) = func_0018D358_x0018D0F0(arg0, arg1, &func_0019E380_x0018D0F0);
        *(s32 *)((u8 *)arg2 + 0xC) = func_0018D358_x0018D0F0(arg0, arg1, &func_0019E3E8_x0018D0F0);
    }
}
typedef struct SfdHdrVideo_x0018D188 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018D188;
typedef struct SfhHn_x0018D188 {
    int stat;
    struct SfhHdr *hdr;
    unsigned int size;
    int version;
} SfhHn_x0018D188;
int SFH_IsEffFtrInf_x0018D188(SfhHn_x0018D188 *hn, unsigned char id, int *avail) __asm__("func_0019D950");
int SFH_AnlyElemCodecVid_x0018D188(SfhHn_x0018D188 *hn, unsigned char id, int *value) __asm__("func_0019E450");
int SFH_AnlyElemBitRate_x0018D188(SfhHn_x0018D188 *hn, unsigned char id, int *value) __asm__("func_0019E4B8");
int SFH_AnlyElemPicSz_x0018D188(SfhHn_x0018D188 *hn, unsigned char id, int *width, int *height) __asm__("func_0019E528");
int SFH_AnlyElemPicRate_x0018D188(SfhHn_x0018D188 *hn, unsigned char id, int *value) __asm__("func_0019E5D0");
int SFH_AnlyFtrColType_x0018D188(SfhHn_x0018D188 *hn, unsigned char id, int *value) __asm__("func_0019E640");
int SFH_AnlyFtrPicType_x0018D188(SfhHn_x0018D188 *hn, unsigned char id, int *value) __asm__("func_0019E6A8");
int SFH_AnlyFtrFixFlg_x0018D188(SfhHn_x0018D188 *hn, unsigned char id, int *value) __asm__("func_0019E710");
int SFH_AnlyFtrShcFixFlg_x0018D188(SfhHn_x0018D188 *hn, unsigned char id, int *value) __asm__("func_0019E780");
int SFH_AnlyFtrExpand_x0018D188(SfhHn_x0018D188 *hn, unsigned char id, int *value) __asm__("func_0019E7F0");
int SFH_AnlyFtrGopN_x0018D188(SfhHn_x0018D188 *hn, unsigned char id, int *value) __asm__("func_0019E858");
int SFH_AnlyFtrGopM_x0018D188(SfhHn_x0018D188 *hn, unsigned char id, int *value) __asm__("func_0019E8D0");
typedef int (*SfhGetStmFn_x0018D188)(SfhHn_x0018D188 *sfh, unsigned char id, int *value);
int sfhds_CallS_x0018D188(SfhHn_x0018D188 *sfh, int id, SfhGetStmFn_x0018D188 get) __asm__("func_0018D358");
int sfhds_CallS_x0018D188(SfhHn_x0018D188 *sfh, int id, SfhGetStmFn_x0018D188 get) __asm__("func_0018D358");
void func_0018D188_x0018D188(SfhHn_x0018D188 *sfh, int id, SfdHdrVideo_x0018D188 *video) __asm__("func_0018D188");
/* sfhds_AnlyVideo: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018D188_x0018D188(SfhHn_x0018D188 *sfh, int id, SfdHdrVideo_x0018D188 *video) {
    int avail;
    video->codec = sfhds_CallS_x0018D188(sfh, id, SFH_AnlyElemCodecVid_x0018D188);
    video->bitRate = sfhds_CallS_x0018D188(sfh, id, SFH_AnlyElemBitRate_x0018D188);
    if (SFH_AnlyElemPicSz_x0018D188(sfh, id, &video->width, &video->height) == 0) {
        video->width = -1;
        video->height = -1;
    }
    video->frameRate = sfhds_CallS_x0018D188(sfh, id, SFH_AnlyElemPicRate_x0018D188);
    if (SFH_IsEffFtrInf_x0018D188(sfh, id, &avail) == 0) {
        avail = 0;
    }
    video->avail = avail != 0;
    if (avail == 0) {
        return;
    }
    video->picType = sfhds_CallS_x0018D188(sfh, id, SFH_AnlyFtrColType_x0018D188);
    video->profile = sfhds_CallS_x0018D188(sfh, id, SFH_AnlyFtrPicType_x0018D188);
    video->flag0 = sfhds_CallS_x0018D188(sfh, id, SFH_AnlyFtrFixFlg_x0018D188);
    video->flag4 = sfhds_CallS_x0018D188(sfh, id, SFH_AnlyFtrShcFixFlg_x0018D188);
    video->chroma = sfhds_CallS_x0018D188(sfh, id, SFH_AnlyFtrExpand_x0018D188);
    video->zFirst = sfhds_CallS_x0018D188(sfh, id, SFH_AnlyFtrGopN_x0018D188);
    video->zSecond = sfhds_CallS_x0018D188(sfh, id, SFH_AnlyFtrGopM_x0018D188);
}
typedef struct SfhHn_x0018D320 {
    int stat;
    struct SfhHdr *hdr;
    unsigned int size;
    int version;
} SfhHn_x0018D320;
typedef int (*SfhGetFn_x0018D320)(SfhHn_x0018D320 *sfh, int *value);
int func_0018D320_x0018D320(SfhHn_x0018D320 *sfh, SfhGetFn_x0018D320 get) __asm__("func_0018D320");
/* sfhds_CallN: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018D320_x0018D320(SfhHn_x0018D320 *sfh, SfhGetFn_x0018D320 get) {
    int value;
    if (get(sfh, &value) != 0) {
        return value;
    }
    return -1;
}
typedef struct SfhHn_x0018D358 {
    int stat;
    struct SfhHdr *hdr;
    unsigned int size;
    int version;
} SfhHn_x0018D358;
typedef int (*SfhGetStmFn_x0018D358)(SfhHn_x0018D358 *sfh, unsigned char id, int *value);
int func_0018D358_x0018D358(SfhHn_x0018D358 *sfh, int id, SfhGetStmFn_x0018D358 get) __asm__("func_0018D358");
/* sfhds_CallS: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018D358_x0018D358(SfhHn_x0018D358 *sfh, int id, SfhGetStmFn_x0018D358 get) {
    int value;
    if (get(sfh, id, &value) == 0) {
        return -1;
    }
    return value;
}
void func_0018D390_x0018D390(s32 arg0) __asm__("func_0018D390");
void func_0018D390_x0018D390(s32 arg0) {
    u8 *temp_a0;
    u8 *temp_a1;

    temp_a1 = arg0 + 0x98;
    temp_a0 = arg0 + 0x90C;
    *(s32 *)((u8 *)temp_a0 + 0x24) = (s32) *(s32 *)((u8 *)temp_a1 + 4);
    *(s32 *)((u8 *)temp_a0 + 0x28) = (s32) *(s32 *)((u8 *)temp_a1 + 8);
    *(s32 *)((u8 *)temp_a0 + 0x2C) = (s32) *(s32 *)((u8 *)temp_a1 + 0xC);
}
s32 func_0018D3B8(void) {
    return 2;
}
typedef struct SfdSj_x0018D3C0 SfdSj_x0018D3C0;
typedef struct SfdSjChunk_x0018D3C0 {
    char *data;
    int len;
} SfdSjChunk_x0018D3C0;
typedef struct SfdSjVtbl_x0018D3C0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018D3C0 *sj);
    int (*getUuid)(SfdSj_x0018D3C0 *sj);
    void (*reset)(SfdSj_x0018D3C0 *sj);
    void (*getChunk)(SfdSj_x0018D3C0 *sj, int id, int n, SfdSjChunk_x0018D3C0 *ck);
    void (*ungetChunk)(SfdSj_x0018D3C0 *sj, int id, SfdSjChunk_x0018D3C0 *ck);
    void (*putChunk)(SfdSj_x0018D3C0 *sj, int id, SfdSjChunk_x0018D3C0 *ck);
    int (*getNumData)(SfdSj_x0018D3C0 *sj, int id);
} SfdSjVtbl_x0018D3C0;
struct SfdSj_x0018D3C0 {
    SfdSjVtbl_x0018D3C0 *vtbl;
};
struct SfdSj_x0018D3C0;
struct SfdRecSlot_x0018D3C0;
struct SfdRec_x0018D3C0;
struct SfdMpvCond_x0018D3C0;
struct SfdPlanes_x0018D3C0;
struct SfdFrameInfo_x0018D3C0;
struct SfdPly_x0018D3C0;
typedef int (*SfdTimeFn_x0018D3C0)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0018D3C0 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0018D3C0;
typedef struct SfdTimeRec_x0018D3C0 {
    int valid;
    SfdTimeCode_x0018D3C0 tc;
    int time;
    int unit;
} SfdTimeRec_x0018D3C0;
typedef struct SfdTst_x0018D3C0 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0018D3C0;
typedef struct SfdSyncTally_x0018D3C0 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0018D3C0;
typedef struct SfdSyncQueue_x0018D3C0 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0018D3C0;
typedef struct SfdFieldEntry_x0018D3C0 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0018D3C0;
typedef struct SfdPtsm_x0018D3C0 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0018D3C0;
typedef struct SfdHdrAudio_x0018D3C0 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018D3C0;
typedef struct SfdHdrMux_x0018D3C0 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018D3C0;
typedef struct SfdHdrVideo_x0018D3C0 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018D3C0;
typedef struct SfdHdrInf_x0018D3C0 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018D3C0 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018D3C0 audio;
    SfdHdrVideo_x0018D3C0 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018D3C0;
typedef struct SfdMvInf_x0018D3C0 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0018D3C0;
typedef struct SfdPlyInf_x0018D3C0 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0018D3C0;
typedef void (*SfdErrFn_x0018D3C0)(void *obj, int code);
typedef struct SfdErrInf_x0018D3C0 {
    SfdErrFn_x0018D3C0 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018D3C0;
typedef int (*SfdExtClockFn_x0018D3C0)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0018D3C0)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0018D3C0 {
    SfdTimeFn_x0018D3C0 timefn[6];
    SfdIsSkipFn_x0018D3C0 isSkipFn;
    SfdTimeCode_x0018D3C0 tc;
    SfdTimeRec_x0018D3C0 state;
    SfdTimeRec_x0018D3C0 best;
    SfdTimeRec_x0018D3C0 tot;
    SfdTimeRec_x0018D3C0 cur;
    SfdTimeRec_x0018D3C0 latest;
    SfdTimeRec_x0018D3C0 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0018D3C0 tally;
    SfdSyncQueue_x0018D3C0 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0018D3C0 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0018D3C0 tst;
    SfdFieldEntry_x0018D3C0 fields[64];
    SfdPtsm_x0018D3C0 ptsm;
    char pad1468[36];
} SfdTim_x0018D3C0;
enum {
    SFD_COND_VIDEO_x0018D3C0 = 5,
    SFD_COND_AUDIO_x0018D3C0 = 6,
    SFD_COND_KEEPSUP_x0018D3C0 = 8,
    SFD_COND_SYNCMODE_x0018D3C0 = 15,
    SFD_COND_ETIME_x0018D3C0 = 20,
    SFD_COND_ETUNIT_x0018D3C0 = 21,
    SFD_COND_LNKSTM_x0018D3C0 = 49,
    SFD_COND_SUPPLY_END_x0018D3C0 = 56,
    SFD_COND_DECODE_END_x0018D3C0 = 57,
    SFD_COND_DEMUX_SPLIT_x0018D3C0 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0018D3C0 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0018D3C0 = 80,
    SFD_COND_SYSHD_FN_x0018D3C0 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0018D3C0 = 86,
    SFD_COND_NUM_x0018D3C0 = 100
};
typedef enum SfdBufFmt_x0018D3C0 {
    SFD_BUFFMT_0_x0018D3C0 = 0
} SfdBufFmt_x0018D3C0;
typedef enum SfdBufId_x0018D3C0 {
    SFD_BUF_NONE_x0018D3C0 = 8
} SfdBufId_x0018D3C0;
typedef struct SfdCrePrm_x0018D3C0 {
    struct SfdTrnConfig_x0018D3C0 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0018D3C0 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0018D3C0;
typedef struct SfdItem_x0018D3C0 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018D3C0;
typedef struct SfdRing_x0018D3C0 {
    SfdItem_x0018D3C0 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018D3C0;
typedef struct SfdBufInf_x0018D3C0 {
    char *data;
    struct SfdSj_x0018D3C0 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018D3C0;
typedef struct SfdBufCur_x0018D3C0 {
    char *pos;
    int len;
} SfdBufCur_x0018D3C0;
typedef struct SfdBufDlm_x0018D3C0 {
    char *pos;
    char *end;
} SfdBufDlm_x0018D3C0;
typedef struct SfdBufRing_x0018D3C0 {
    SfdBufInf_x0018D3C0 sup;
    SfdBufDlm_x0018D3C0 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018D3C0 ptsque;
} SfdBufRing_x0018D3C0;
typedef struct SfdBufAring_x0018D3C0 {
    SfdBufInf_x0018D3C0 sup;
    SfdBufCur_x0018D3C0 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018D3C0;
typedef struct SfdUoch_x0018D3C0 {
    struct SfdSj_x0018D3C0 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018D3C0;
typedef struct SfdBufEnt_x0018D3C0 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018D3C0 ring;
        SfdBufAring_x0018D3C0 aring;
        SfdBufInf_x0018D3C0 vfrm;
        SfdUoch_x0018D3C0 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018D3C0;
typedef int (*SfdTrnFn_x0018D3C0)();
typedef struct SfdTrnConfig_x0018D3C0 {
    SfdTrnFn_x0018D3C0 *fns[9];
} SfdTrnConfig_x0018D3C0;
typedef struct SfdMpsPrm_x0018D3C0 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0018D3C0 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0018D3C0;
typedef struct SfdAdxCfg_x0018D3C0 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0018D3C0;
typedef void (*SfdAdxStep_x0018D3C0)(struct SfdPly_x0018D3C0 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0018D3C0 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0018D3C0 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0018D3C0 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0018D3C0;
typedef struct SfdAoap_x0018D3C0 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0018D3C0 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0018D3C0 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0018D3C0 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0018D3C0 *h);
    void (*setSpeed)(struct SfdPly_x0018D3C0 *h, int speed);
} SfdAoap_x0018D3C0;
typedef struct SfainfOut_x0018D3C0 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0018D3C0;
typedef struct SfainfList_x0018D3C0 {
    int nout;
    SfainfOut_x0018D3C0 out[3];
} SfainfList_x0018D3C0;
typedef struct SfdTrnSlot_x0018D3C0 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0018D3C0 *mps;
        struct SfdMpv_x0018D3C0 *mpv;
        SfdAdxCtx_x0018D3C0 *adxt;
        SfdAoap_x0018D3C0 *aoap;
        SfainfList_x0018D3C0 *uo;
    } hn;
    SfdTrnFn_x0018D3C0 *fns;
    SfdBufId_x0018D3C0 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0018D3C0;
typedef struct SfdTsum_x0018D3C0 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0018D3C0;
typedef struct SfdTmrInf_x0018D3C0 {
    SfdTsum_x0018D3C0 tsum[6];
} SfdTmrInf_x0018D3C0;
struct SfdSj_x0018D3C0;
typedef struct M2vErrInf_x0018D3C0 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018D3C0;
typedef struct Mpeg2Ext_x0018D3C0 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018D3C0;
typedef enum M2vFrameRate_x0018D3C0 {
    M2V_FRAME_RATE_FORBIDDEN_x0018D3C0 = 0
} M2vFrameRate_x0018D3C0;
typedef enum M2vPicType_x0018D3C0 {
    M2V_PICTYPE_I_x0018D3C0 = 1,
    M2V_PICTYPE_P_x0018D3C0 = 2,
    M2V_PICTYPE_B_x0018D3C0 = 3,
    M2V_PICTYPE_D_x0018D3C0 = 4
} M2vPicType_x0018D3C0;
typedef enum M2vPicStruct_x0018D3C0 {
    M2V_PICSTRUCT_TOP_FIELD_x0018D3C0 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018D3C0 = 2,
    M2V_PICSTRUCT_FRAME_x0018D3C0 = 3
} M2vPicStruct_x0018D3C0;
typedef enum M2vPicAtrF64_x0018D3C0 {
    M2V_PICATR_F64_0_x0018D3C0 = 0
} M2vPicAtrF64_x0018D3C0;
typedef struct M2vPicAtr_x0018D3C0 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018D3C0 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018D3C0 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018D3C0 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018D3C0 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018D3C0;
typedef void (*M2vUsrDatFn_x0018D3C0)(void *obj, int level);
typedef struct M2vUsrSj_x0018D3C0 {
    struct SfdSj_x0018D3C0 *sj;
    M2vUsrDatFn_x0018D3C0 fn;
    void *obj;
} M2vUsrSj_x0018D3C0;
typedef struct M2vPicUsr_x0018D3C0 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018D3C0;
typedef void (*M2vCondFn_x0018D3C0)();
typedef struct M2vObj_x0018D3C0 {
    int stat;
    M2vErrInf_x0018D3C0 err;
    M2vCondFn_x0018D3C0 cond[16];
    M2vPicAtr_x0018D3C0 picatr;
    char pad216[64];
    M2vUsrSj_x0018D3C0 usrsj[4];
    M2vPicUsr_x0018D3C0 picusr;
    char pad340[12];
    Mpeg2Ext_x0018D3C0 ext;
    char pad1656[8];
} M2vObj_x0018D3C0;
extern void M2V_SetErrFunc_x0018D3C0(M2vObj_x0018D3C0 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0018D3C0 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0018D3C0;
typedef struct sceMpeg_x0018D3C0 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0018D3C0 *sys;
} sceMpeg_x0018D3C0;
typedef enum {
    sceMpegCbError_x0018D3C0,
    sceMpegCbNodata_x0018D3C0,
    sceMpegCbStopDMA_x0018D3C0,
    sceMpegCbRestartDMA_x0018D3C0,
    sceMpegCbBackground_x0018D3C0,
    sceMpegCbTimeStamp_x0018D3C0,
    sceMpegCbStr_x0018D3C0,
    sceMpegCbNum_x0018D3C0
} sceMpegCbType_x0018D3C0;
typedef struct {
    sceMpegCbType_x0018D3C0 type;
    char *errMessage;
} sceMpegCbDataError_x0018D3C0;
typedef struct {
    sceMpegCbType_x0018D3C0 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0018D3C0;
typedef struct {
    sceMpegCbType_x0018D3C0 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0018D3C0;
typedef union {
    sceMpegCbType_x0018D3C0 type;
    sceMpegCbDataError_x0018D3C0 error;
    sceMpegCbDataTimeStamp_x0018D3C0 ts;
    sceMpegCbDataStr_x0018D3C0 str;
} sceMpegCbData_x0018D3C0;
typedef int (*sceMpegCallback_x0018D3C0)(sceMpeg_x0018D3C0 *mp, sceMpegCbData_x0018D3C0 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0018D3C0 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0018D3C0;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0018D3C0;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0018D3C0;
typedef struct {
    _sceMpegPicture_x0018D3C0 *ref_image;
    _sceMpegPicture_x0018D3C0 *prev_image;
    _sceMpegPicture_x0018D3C0 *decode;
    _sceMpegPicture_x0018D3C0 *image;
} _sceMpegPictureSlot_x0018D3C0;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0018D3C0;
typedef void (*_sceMpegMcKernel_x0018D3C0)(_sceMpegMcFetch_x0018D3C0 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0018D3C0 luma_kernel[4];
    _sceMpegMcKernel_x0018D3C0 chroma_kernel[4];
    _sceMpegMcFetch_x0018D3C0 luma[4];
    _sceMpegMcFetch_x0018D3C0 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0018D3C0;
typedef struct _sceMpegDecoder_x0018D3C0 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0018D3C0 callbacks[sceMpegCbNum_x0018D3C0];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0018D3C0 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0018D3C0 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0018D3C0 slots[3];
    _sceMpegPicture_x0018D3C0 pictures[9];
    _sceMpegSprBuffer_x0018D3C0 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0018D3C0 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0018D3C0;
typedef struct SfdPlanes_x0018D3C0 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018D3C0;
typedef struct SfdUserData_x0018D3C0 {
    char data[512];
    int size;
} SfdUserData_x0018D3C0;
typedef struct SfdRecVideo_x0018D3C0 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0018D3C0 stamp;
    SfdUserData_x0018D3C0 user;
} SfdRecVideo_x0018D3C0;
typedef struct SfdSlot_x0018D3C0 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0018D3C0 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018D3C0 *blob;
    M2vPicAtr_x0018D3C0 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0018D3C0;
typedef struct SfdBufPool_x0018D3C0 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0018D3C0 slot[18];
} SfdBufPool_x0018D3C0;
typedef struct SfdMpvCond_x0018D3C0 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018D3C0;
typedef struct SfdMpvWorkBufs_x0018D3C0 {
    int w[2];
} SfdMpvWorkBufs_x0018D3C0;
typedef struct SfdMpvFrameBufs_x0018D3C0 {
    int w[16];
} SfdMpvFrameBufs_x0018D3C0;
typedef struct SfdIpuEntry_x0018D3C0 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0018D3C0;
typedef struct SfdDmaTag_x0018D3C0 {
    long long tag;
    long long pad;
} SfdDmaTag_x0018D3C0;
typedef struct SfdIpuStream_x0018D3C0 {
    void *base;
    SfdDmaTag_x0018D3C0 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0018D3C0 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0018D3C0;
typedef struct SfdIpuCtl_x0018D3C0 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0018D3C0 mpeg;
    SfdIpuStream_x0018D3C0 stream;
    sceMpegCbDataError_x0018D3C0 error;
} SfdIpuCtl_x0018D3C0;
typedef struct SfdPtsComp_x0018D3C0 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0018D3C0 ptsent;
} SfdPtsComp_x0018D3C0;
typedef struct SfdMpv_x0018D3C0 {
    void *handle;
    SfdMpvCond_x0018D3C0 cond;
    SfdMpvWorkBufs_x0018D3C0 work;
    SfdMpvFrameBufs_x0018D3C0 bufs;
    SfdSlot_x0018D3C0 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0018D3C0 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0018D3C0 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0018D3C0 planes[2];
    SfdSlot_x0018D3C0 *first;
    SfdSlot_x0018D3C0 *second;
    SfdSlot_x0018D3C0 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0018D3C0 slots[16];
    SfdBufPool_x0018D3C0 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0018D3C0 ipu;
} SfdMpv_x0018D3C0;
typedef enum SfdPicType_x0018D3C0 {
    SFD_PICTYPE_I_x0018D3C0 = 1,
    SFD_PICTYPE_P_x0018D3C0 = 2,
    SFD_PICTYPE_B_x0018D3C0 = 3
} SfdPicType_x0018D3C0;
typedef enum SfdFrmInfF60_x0018D3C0 {
    SFD_FRMINF_F60_0_x0018D3C0 = 0
} SfdFrmInfF60_x0018D3C0;
typedef struct SfdFrameDetail_x0018D3C0 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0018D3C0;
typedef struct SfdFrameInfo_x0018D3C0 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0018D3C0 picType;
    int time;
    int unit;
    SfdBufFmt_x0018D3C0 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018D3C0 *picUsr;
    SfdFrmInfF60_x0018D3C0 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0018D3C0 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0018D3C0;
typedef struct SfdVfrm_x0018D3C0 {
    int used;
    int f4;
    SfdFrameInfo_x0018D3C0 inf;
} SfdVfrm_x0018D3C0;
typedef struct SfdPly_x0018D3C0 SfdPly_x0018D3C0;
typedef struct SfdRec_x0018D3C0 SfdRec_x0018D3C0;
typedef struct SfdRecSub_x0018D3C0 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0018D3C0;
typedef struct SfdRecSlot_x0018D3C0 {
    SfdRec_x0018D3C0 *rec;
    SfdRecSub_x0018D3C0 sub;
} SfdRecSlot_x0018D3C0;
typedef struct SfdSysHd_x0018D3C0 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0018D3C0;
typedef struct SfdRecSys_x0018D3C0 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0018D3C0 syshd;
} SfdRecSys_x0018D3C0;
typedef struct SfdRecAudio_x0018D3C0 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0018D3C0;
struct SfdRec_x0018D3C0 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0018D3C0 hdrInf;
    SfdRecSys_x0018D3C0 sys;
    char pad2616[152];
    SfdRecVideo_x0018D3C0 video;
    SfdRecAudio_x0018D3C0 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0018D3C0 {
    SfdCrePrm_x0018D3C0 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0018D3C0 hdr;
    SfdMvInf_x0018D3C0 mvInf;
    char pad2380[4];
    SfdPlyInf_x0018D3C0 plyInf;
    SfdErrInf_x0018D3C0 err;
    int cond[SFD_COND_NUM_x0018D3C0];
    int cond2[SFD_COND_NUM_x0018D3C0];
    char pad3364[4];
    SfdTim_x0018D3C0 tim;
    SfdBufEnt_x0018D3C0 buf[8];
    SfdVfrm_x0018D3C0 vfrm[16];
    SfdTrnSlot_x0018D3C0 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0018D3C0 mps;
    char pad8944[176];
    SfdMpv_x0018D3C0 mpv;
    SfdAdxCtx_x0018D3C0 adxt;
    char pad13680[100];
    SfdAoap_x0018D3C0 aoap;
    char pad13804[4];
    SfainfList_x0018D3C0 uo;
    char pad13860[4];
    SfdRecSlot_x0018D3C0 see;
    SfdTmrInf_x0018D3C0 tmr;
};
int func_0018D3C0_x0018D3C0(void *sfd) __asm__("func_0018D3C0");
/* SFHDS_GetMuxVerNum: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdhdr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018D3C0_x0018D3C0(void *sfd) {
    SfdPly_x0018D3C0 *hn = sfd;
    SfdHdrInf_x0018D3C0 *hdr = &hn->hdr;
    if (hdr->valid == 0) {
        return 0;
    }
    return hdr->verMajor * 100 + hdr->verMinor;
}
typedef unsigned char u8_x0018D3F8;
typedef signed int s32_x0018D3F8;
typedef struct MovieSub_x0018D3F8 {
    u8_x0018D3F8 pad_00[0x14];
    s32_x0018D3F8 unk_14;
    void *unk_18;
} MovieSub_x0018D3F8;
typedef struct MovieModule_x0018D3F8 {
    u8_x0018D3F8 pad_00[0x78];
    s32_x0018D3F8 unk_78;
    u8_x0018D3F8 pad_7c[0x58];
    u8_x0018D3F8 unk_d4[1];
} MovieModule_x0018D3F8;
void *func_0018D3F8_x0018D3F8(MovieModule_x0018D3F8 *self) __asm__("func_0018D3F8");
/* fn_12_23F00: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_23F00.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void *func_0018D3F8_x0018D3F8(MovieModule_x0018D3F8 *self) {
    void *base = (u8_x0018D3F8 *)self + 0xd4;
    if (self->unk_78 == 0) {
        return (void *)-1;
    }
    if (((MovieSub_x0018D3F8 *)base)->unk_14 != 0) {
        return ((MovieSub_x0018D3F8 *)base)->unk_18;
    }
    return (void *)-1;
}
s32 *func_0018D420(void) {
    return &D_004673D0;
}
s32 func_0018D430_x0018D430(s32 arg0, s32 arg1) __asm__("func_0018D430");
s32 func_0018D430_x0018D430(s32 arg0, s32 arg1) {
    return arg1 == 0x32B8;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D440);
void MEM_Copy_x0018D4A8(void *dst, void *src, int n) __asm__("func_00178BA8");
void UTY_MemsetDword_x0018D4A8(void *dst, int value, unsigned int count) __asm__("func_00179018");
struct SfdSj_x0018D4A8;
struct SfdRecSlot_x0018D4A8;
struct SfdRec_x0018D4A8;
struct SfdMpvCond_x0018D4A8;
struct SfdPlanes_x0018D4A8;
struct SfdFrameInfo_x0018D4A8;
struct SfdPly_x0018D4A8;
typedef int (*SfdTimeFn_x0018D4A8)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0018D4A8 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0018D4A8;
typedef struct SfdTimeRec_x0018D4A8 {
    int valid;
    SfdTimeCode_x0018D4A8 tc;
    int time;
    int unit;
} SfdTimeRec_x0018D4A8;
typedef struct SfdTst_x0018D4A8 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0018D4A8;
typedef struct SfdSyncTally_x0018D4A8 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0018D4A8;
typedef struct SfdSyncQueue_x0018D4A8 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0018D4A8;
typedef struct SfdFieldEntry_x0018D4A8 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0018D4A8;
typedef struct SfdPtsm_x0018D4A8 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0018D4A8;
typedef struct SfdHdrAudio_x0018D4A8 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018D4A8;
typedef struct SfdHdrMux_x0018D4A8 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018D4A8;
typedef struct SfdHdrVideo_x0018D4A8 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018D4A8;
typedef struct SfdHdrInf_x0018D4A8 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018D4A8 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018D4A8 audio;
    SfdHdrVideo_x0018D4A8 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018D4A8;
typedef struct SfdMvInf_x0018D4A8 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0018D4A8;
typedef struct SfdPlyInf_x0018D4A8 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0018D4A8;
typedef void (*SfdErrFn_x0018D4A8)(void *obj, int code);
typedef struct SfdErrInf_x0018D4A8 {
    SfdErrFn_x0018D4A8 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018D4A8;
typedef int (*SfdExtClockFn_x0018D4A8)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0018D4A8)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0018D4A8 {
    SfdTimeFn_x0018D4A8 timefn[6];
    SfdIsSkipFn_x0018D4A8 isSkipFn;
    SfdTimeCode_x0018D4A8 tc;
    SfdTimeRec_x0018D4A8 state;
    SfdTimeRec_x0018D4A8 best;
    SfdTimeRec_x0018D4A8 tot;
    SfdTimeRec_x0018D4A8 cur;
    SfdTimeRec_x0018D4A8 latest;
    SfdTimeRec_x0018D4A8 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0018D4A8 tally;
    SfdSyncQueue_x0018D4A8 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0018D4A8 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0018D4A8 tst;
    SfdFieldEntry_x0018D4A8 fields[64];
    SfdPtsm_x0018D4A8 ptsm;
    char pad1468[36];
} SfdTim_x0018D4A8;
enum {
    SFD_COND_VIDEO_x0018D4A8 = 5,
    SFD_COND_AUDIO_x0018D4A8 = 6,
    SFD_COND_KEEPSUP_x0018D4A8 = 8,
    SFD_COND_SYNCMODE_x0018D4A8 = 15,
    SFD_COND_ETIME_x0018D4A8 = 20,
    SFD_COND_ETUNIT_x0018D4A8 = 21,
    SFD_COND_LNKSTM_x0018D4A8 = 49,
    SFD_COND_SUPPLY_END_x0018D4A8 = 56,
    SFD_COND_DECODE_END_x0018D4A8 = 57,
    SFD_COND_DEMUX_SPLIT_x0018D4A8 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0018D4A8 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0018D4A8 = 80,
    SFD_COND_SYSHD_FN_x0018D4A8 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0018D4A8 = 86,
    SFD_COND_NUM_x0018D4A8 = 100
};
typedef enum SfdBufFmt_x0018D4A8 {
    SFD_BUFFMT_0_x0018D4A8 = 0
} SfdBufFmt_x0018D4A8;
typedef enum SfdBufId_x0018D4A8 {
    SFD_BUF_NONE_x0018D4A8 = 8
} SfdBufId_x0018D4A8;
typedef struct SfdCrePrm_x0018D4A8 {
    struct SfdTrnConfig_x0018D4A8 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0018D4A8 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0018D4A8;
typedef struct SfdItem_x0018D4A8 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018D4A8;
typedef struct SfdRing_x0018D4A8 {
    SfdItem_x0018D4A8 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018D4A8;
typedef struct SfdBufInf_x0018D4A8 {
    char *data;
    struct SfdSj_x0018D4A8 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018D4A8;
typedef struct SfdBufCur_x0018D4A8 {
    char *pos;
    int len;
} SfdBufCur_x0018D4A8;
typedef struct SfdBufDlm_x0018D4A8 {
    char *pos;
    char *end;
} SfdBufDlm_x0018D4A8;
typedef struct SfdBufRing_x0018D4A8 {
    SfdBufInf_x0018D4A8 sup;
    SfdBufDlm_x0018D4A8 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018D4A8 ptsque;
} SfdBufRing_x0018D4A8;
typedef struct SfdBufAring_x0018D4A8 {
    SfdBufInf_x0018D4A8 sup;
    SfdBufCur_x0018D4A8 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018D4A8;
typedef struct SfdUoch_x0018D4A8 {
    struct SfdSj_x0018D4A8 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018D4A8;
typedef struct SfdBufEnt_x0018D4A8 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018D4A8 ring;
        SfdBufAring_x0018D4A8 aring;
        SfdBufInf_x0018D4A8 vfrm;
        SfdUoch_x0018D4A8 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018D4A8;
typedef int (*SfdTrnFn_x0018D4A8)();
typedef struct SfdTrnModules_x0018D4A8 {
    SfdTrnFn_x0018D4A8 *fns[15];
} SfdTrnModules_x0018D4A8;
typedef struct SfdTrnConfig_x0018D4A8 {
    SfdTrnFn_x0018D4A8 *fns[9];
} SfdTrnConfig_x0018D4A8;
typedef struct SfdInitPrm_x0018D4A8 {
    SfdTrnModules_x0018D4A8 *modules;
    int vrate;
} SfdInitPrm_x0018D4A8;
typedef struct SfdMpsPrm_x0018D4A8 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0018D4A8 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0018D4A8;
typedef struct SfdAdxCfg_x0018D4A8 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0018D4A8;
typedef void (*SfdAdxStep_x0018D4A8)(struct SfdPly_x0018D4A8 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0018D4A8 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0018D4A8 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0018D4A8 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0018D4A8;
typedef struct SfdAoap_x0018D4A8 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0018D4A8 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0018D4A8 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0018D4A8 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0018D4A8 *h);
    void (*setSpeed)(struct SfdPly_x0018D4A8 *h, int speed);
} SfdAoap_x0018D4A8;
typedef struct SfainfOut_x0018D4A8 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0018D4A8;
typedef struct SfainfList_x0018D4A8 {
    int nout;
    SfainfOut_x0018D4A8 out[3];
} SfainfList_x0018D4A8;
typedef struct SfdTrnSlot_x0018D4A8 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0018D4A8 *mps;
        struct SfdMpv_x0018D4A8 *mpv;
        SfdAdxCtx_x0018D4A8 *adxt;
        SfdAoap_x0018D4A8 *aoap;
        SfainfList_x0018D4A8 *uo;
    } hn;
    SfdTrnFn_x0018D4A8 *fns;
    SfdBufId_x0018D4A8 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0018D4A8;
typedef struct SfdTsum_x0018D4A8 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0018D4A8;
typedef struct SfdTmrInf_x0018D4A8 {
    SfdTsum_x0018D4A8 tsum[6];
} SfdTmrInf_x0018D4A8;
typedef struct SfdTimLib_x0018D4A8 {
    int vcount;
    int f4;
    int vrate;
} SfdTimLib_x0018D4A8;
typedef struct SfdSvrCnt_x0018D4A8 {
    int cnt;
    int busy;
} SfdSvrCnt_x0018D4A8;
typedef struct SfdLibInf_x0018D4A8 {
    int cond[SFD_COND_NUM_x0018D4A8];
    SfdInitPrm_x0018D4A8 prm;
    int sysStat;
    SfdErrInf_x0018D4A8 err;
    SfdTimLib_x0018D4A8 tim;
    int buf;
    SfdTrnModules_x0018D4A8 trn;
    SfdSvrCnt_x0018D4A8 svr;
    struct SfdPly_x0018D4A8 *hn[8];
} SfdLibInf_x0018D4A8;
extern SfdLibInf_x0018D4A8 sfd_lib_x0018D4A8 __asm__("D_004268E0");
void sfbuf_Init_x0018D4A8(void *work) __asm__("func_0018A1A8");
int SFTRN_Init_x0018D4A8(struct SfdTrnModules_x0018D4A8 *dst, struct SfdTrnModules_x0018D4A8 *src) __asm__("func_0019B9A8");
void SFTIM_Init_x0018D4A8(SfdTimLib_x0018D4A8 *lib, int vrate) __asm__("func_00199DF0");
typedef struct SfdSj_x0018D4A8 SfdSj_x0018D4A8;
typedef struct SfdSjChunk_x0018D4A8 {
    char *data;
    int len;
} SfdSjChunk_x0018D4A8;
typedef struct SfdSjVtbl_x0018D4A8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018D4A8 *sj);
    int (*getUuid)(SfdSj_x0018D4A8 *sj);
    void (*reset)(SfdSj_x0018D4A8 *sj);
    void (*getChunk)(SfdSj_x0018D4A8 *sj, int id, int n, SfdSjChunk_x0018D4A8 *ck);
    void (*ungetChunk)(SfdSj_x0018D4A8 *sj, int id, SfdSjChunk_x0018D4A8 *ck);
    void (*putChunk)(SfdSj_x0018D4A8 *sj, int id, SfdSjChunk_x0018D4A8 *ck);
    int (*getNumData)(SfdSj_x0018D4A8 *sj, int id);
} SfdSjVtbl_x0018D4A8;
struct SfdSj_x0018D4A8 {
    SfdSjVtbl_x0018D4A8 *vtbl;
};
struct SfdSj_x0018D4A8;
typedef struct M2vErrInf_x0018D4A8 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018D4A8;
typedef struct Mpeg2Ext_x0018D4A8 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018D4A8;
typedef enum M2vFrameRate_x0018D4A8 {
    M2V_FRAME_RATE_FORBIDDEN_x0018D4A8 = 0
} M2vFrameRate_x0018D4A8;
typedef enum M2vPicType_x0018D4A8 {
    M2V_PICTYPE_I_x0018D4A8 = 1,
    M2V_PICTYPE_P_x0018D4A8 = 2,
    M2V_PICTYPE_B_x0018D4A8 = 3,
    M2V_PICTYPE_D_x0018D4A8 = 4
} M2vPicType_x0018D4A8;
typedef enum M2vPicStruct_x0018D4A8 {
    M2V_PICSTRUCT_TOP_FIELD_x0018D4A8 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018D4A8 = 2,
    M2V_PICSTRUCT_FRAME_x0018D4A8 = 3
} M2vPicStruct_x0018D4A8;
typedef enum M2vPicAtrF64_x0018D4A8 {
    M2V_PICATR_F64_0_x0018D4A8 = 0
} M2vPicAtrF64_x0018D4A8;
typedef struct M2vPicAtr_x0018D4A8 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018D4A8 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018D4A8 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018D4A8 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018D4A8 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018D4A8;
typedef void (*M2vUsrDatFn_x0018D4A8)(void *obj, int level);
typedef struct M2vUsrSj_x0018D4A8 {
    struct SfdSj_x0018D4A8 *sj;
    M2vUsrDatFn_x0018D4A8 fn;
    void *obj;
} M2vUsrSj_x0018D4A8;
typedef struct M2vPicUsr_x0018D4A8 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018D4A8;
typedef void (*M2vCondFn_x0018D4A8)();
typedef struct M2vObj_x0018D4A8 {
    int stat;
    M2vErrInf_x0018D4A8 err;
    M2vCondFn_x0018D4A8 cond[16];
    M2vPicAtr_x0018D4A8 picatr;
    char pad216[64];
    M2vUsrSj_x0018D4A8 usrsj[4];
    M2vPicUsr_x0018D4A8 picusr;
    char pad340[12];
    Mpeg2Ext_x0018D4A8 ext;
    char pad1656[8];
} M2vObj_x0018D4A8;
extern void M2V_SetErrFunc_x0018D4A8(M2vObj_x0018D4A8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0018D4A8 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0018D4A8;
typedef struct sceMpeg_x0018D4A8 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0018D4A8 *sys;
} sceMpeg_x0018D4A8;
typedef enum {
    sceMpegCbError_x0018D4A8,
    sceMpegCbNodata_x0018D4A8,
    sceMpegCbStopDMA_x0018D4A8,
    sceMpegCbRestartDMA_x0018D4A8,
    sceMpegCbBackground_x0018D4A8,
    sceMpegCbTimeStamp_x0018D4A8,
    sceMpegCbStr_x0018D4A8,
    sceMpegCbNum_x0018D4A8
} sceMpegCbType_x0018D4A8;
typedef struct {
    sceMpegCbType_x0018D4A8 type;
    char *errMessage;
} sceMpegCbDataError_x0018D4A8;
typedef struct {
    sceMpegCbType_x0018D4A8 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0018D4A8;
typedef struct {
    sceMpegCbType_x0018D4A8 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0018D4A8;
typedef union {
    sceMpegCbType_x0018D4A8 type;
    sceMpegCbDataError_x0018D4A8 error;
    sceMpegCbDataTimeStamp_x0018D4A8 ts;
    sceMpegCbDataStr_x0018D4A8 str;
} sceMpegCbData_x0018D4A8;
typedef int (*sceMpegCallback_x0018D4A8)(sceMpeg_x0018D4A8 *mp, sceMpegCbData_x0018D4A8 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0018D4A8 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0018D4A8;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0018D4A8;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0018D4A8;
typedef struct {
    _sceMpegPicture_x0018D4A8 *ref_image;
    _sceMpegPicture_x0018D4A8 *prev_image;
    _sceMpegPicture_x0018D4A8 *decode;
    _sceMpegPicture_x0018D4A8 *image;
} _sceMpegPictureSlot_x0018D4A8;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0018D4A8;
typedef void (*_sceMpegMcKernel_x0018D4A8)(_sceMpegMcFetch_x0018D4A8 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0018D4A8 luma_kernel[4];
    _sceMpegMcKernel_x0018D4A8 chroma_kernel[4];
    _sceMpegMcFetch_x0018D4A8 luma[4];
    _sceMpegMcFetch_x0018D4A8 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0018D4A8;
typedef struct _sceMpegDecoder_x0018D4A8 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0018D4A8 callbacks[sceMpegCbNum_x0018D4A8];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0018D4A8 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0018D4A8 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0018D4A8 slots[3];
    _sceMpegPicture_x0018D4A8 pictures[9];
    _sceMpegSprBuffer_x0018D4A8 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0018D4A8 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0018D4A8;
typedef struct SfdPlanes_x0018D4A8 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018D4A8;
typedef struct SfdUserData_x0018D4A8 {
    char data[512];
    int size;
} SfdUserData_x0018D4A8;
typedef struct SfdRecVideo_x0018D4A8 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0018D4A8 stamp;
    SfdUserData_x0018D4A8 user;
} SfdRecVideo_x0018D4A8;
typedef struct SfdSlot_x0018D4A8 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0018D4A8 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018D4A8 *blob;
    M2vPicAtr_x0018D4A8 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0018D4A8;
typedef struct SfdBufPool_x0018D4A8 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0018D4A8 slot[18];
} SfdBufPool_x0018D4A8;
typedef struct SfdMpvCond_x0018D4A8 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018D4A8;
typedef struct SfdMpvWorkBufs_x0018D4A8 {
    int w[2];
} SfdMpvWorkBufs_x0018D4A8;
typedef struct SfdMpvFrameBufs_x0018D4A8 {
    int w[16];
} SfdMpvFrameBufs_x0018D4A8;
typedef struct SfdIpuEntry_x0018D4A8 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0018D4A8;
typedef struct SfdDmaTag_x0018D4A8 {
    long long tag;
    long long pad;
} SfdDmaTag_x0018D4A8;
typedef struct SfdIpuStream_x0018D4A8 {
    void *base;
    SfdDmaTag_x0018D4A8 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0018D4A8 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0018D4A8;
typedef struct SfdIpuCtl_x0018D4A8 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0018D4A8 mpeg;
    SfdIpuStream_x0018D4A8 stream;
    sceMpegCbDataError_x0018D4A8 error;
} SfdIpuCtl_x0018D4A8;
typedef struct SfdPtsComp_x0018D4A8 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0018D4A8 ptsent;
} SfdPtsComp_x0018D4A8;
typedef struct SfdMpv_x0018D4A8 {
    void *handle;
    SfdMpvCond_x0018D4A8 cond;
    SfdMpvWorkBufs_x0018D4A8 work;
    SfdMpvFrameBufs_x0018D4A8 bufs;
    SfdSlot_x0018D4A8 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0018D4A8 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0018D4A8 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0018D4A8 planes[2];
    SfdSlot_x0018D4A8 *first;
    SfdSlot_x0018D4A8 *second;
    SfdSlot_x0018D4A8 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0018D4A8 slots[16];
    SfdBufPool_x0018D4A8 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0018D4A8 ipu;
} SfdMpv_x0018D4A8;
typedef enum SfdPicType_x0018D4A8 {
    SFD_PICTYPE_I_x0018D4A8 = 1,
    SFD_PICTYPE_P_x0018D4A8 = 2,
    SFD_PICTYPE_B_x0018D4A8 = 3
} SfdPicType_x0018D4A8;
typedef enum SfdFrmInfF60_x0018D4A8 {
    SFD_FRMINF_F60_0_x0018D4A8 = 0
} SfdFrmInfF60_x0018D4A8;
typedef struct SfdFrameDetail_x0018D4A8 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0018D4A8;
typedef struct SfdFrameInfo_x0018D4A8 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0018D4A8 picType;
    int time;
    int unit;
    SfdBufFmt_x0018D4A8 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018D4A8 *picUsr;
    SfdFrmInfF60_x0018D4A8 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0018D4A8 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0018D4A8;
typedef struct SfdVfrm_x0018D4A8 {
    int used;
    int f4;
    SfdFrameInfo_x0018D4A8 inf;
} SfdVfrm_x0018D4A8;
typedef struct SfdPly_x0018D4A8 SfdPly_x0018D4A8;
typedef struct SfdRec_x0018D4A8 SfdRec_x0018D4A8;
typedef struct SfdRecSub_x0018D4A8 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0018D4A8;
typedef struct SfdRecSlot_x0018D4A8 {
    SfdRec_x0018D4A8 *rec;
    SfdRecSub_x0018D4A8 sub;
} SfdRecSlot_x0018D4A8;
typedef struct SfdSysHd_x0018D4A8 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0018D4A8;
typedef struct SfdRecSys_x0018D4A8 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0018D4A8 syshd;
} SfdRecSys_x0018D4A8;
typedef struct SfdRecAudio_x0018D4A8 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0018D4A8;
struct SfdRec_x0018D4A8 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0018D4A8 hdrInf;
    SfdRecSys_x0018D4A8 sys;
    char pad2616[152];
    SfdRecVideo_x0018D4A8 video;
    SfdRecAudio_x0018D4A8 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0018D4A8 {
    SfdCrePrm_x0018D4A8 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0018D4A8 hdr;
    SfdMvInf_x0018D4A8 mvInf;
    char pad2380[4];
    SfdPlyInf_x0018D4A8 plyInf;
    SfdErrInf_x0018D4A8 err;
    int cond[SFD_COND_NUM_x0018D4A8];
    int cond2[SFD_COND_NUM_x0018D4A8];
    char pad3364[4];
    SfdTim_x0018D4A8 tim;
    SfdBufEnt_x0018D4A8 buf[8];
    SfdVfrm_x0018D4A8 vfrm[16];
    SfdTrnSlot_x0018D4A8 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0018D4A8 mps;
    char pad8944[176];
    SfdMpv_x0018D4A8 mpv;
    SfdAdxCtx_x0018D4A8 adxt;
    char pad13680[100];
    SfdAoap_x0018D4A8 aoap;
    char pad13804[4];
    SfainfList_x0018D4A8 uo;
    char pad13860[4];
    SfdRecSlot_x0018D4A8 see;
    SfdTmrInf_x0018D4A8 tmr;
};
extern int sfd_cond_defaults_x0018D4A8[100] __asm__("D_00467570");
void sfd_ClearSvrCnt_x0018D4A8(SfdLibInf_x0018D4A8 *lib) __asm__("func_0018D568");
void sfd_InitErr_x0018D4A8(SfdErrInf_x0018D4A8 *err) __asm__("func_0018D620");
void sfd_ClearSvrCnt_x0018D4A8(SfdLibInf_x0018D4A8 *lib) __asm__("func_0018D568");
void sfd_InitErr_x0018D4A8(SfdErrInf_x0018D4A8 *err) __asm__("func_0018D620");
long func_0018D4A8_x0018D4A8(SfdInitPrm_x0018D4A8 *prm) __asm__("func_0018D4A8");
/* sfd_InitLib: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdlib.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
long func_0018D4A8_x0018D4A8(SfdInitPrm_x0018D4A8 *prm) {
    SfdLibInf_x0018D4A8 *lib = &sfd_lib_x0018D4A8;
    int i;
    UTY_MemsetDword_x0018D4A8(lib, 0, sizeof(SfdLibInf_x0018D4A8) / 4);
    MEM_Copy_x0018D4A8((char *)lib->cond, (char *)sfd_cond_defaults_x0018D4A8, sizeof(lib->cond));
    lib->prm = *prm;
    lib->sysStat = 0;
    sfd_InitErr_x0018D4A8(&lib->err);
    SFTIM_Init_x0018D4A8(&lib->tim, prm->vrate);
    sfbuf_Init_x0018D4A8(&lib->buf);
    sfd_ClearSvrCnt_x0018D4A8(lib);
    for (i = 7; i >= 0; i--) {
        lib->hn[i] = 0;
    }
    return SFTRN_Init_x0018D4A8(&sfd_lib_x0018D4A8.trn, prm->modules);
}
void func_0018D568_x0018D568(u8 *arg0) __asm__("func_0018D568");
void func_0018D568_x0018D568(u8 *arg0)
{
  u8 *new_var;
  u8 *new_var2;
  u8 *new_var3;
  new_var = arg0;
 new_var3 = arg0 + 0x1FC; *((s32 *) (((u8 *) new_var3) + 4)) = 0; do { } while (0); new_var2 = new_var; *((s32 *) (((u8 *) new_var2) + 0x1FC)) = 0;
}
struct SfdSj_x0018D578;
struct SfdRecSlot_x0018D578;
struct SfdRec_x0018D578;
struct SfdMpvCond_x0018D578;
struct SfdPlanes_x0018D578;
struct SfdFrameInfo_x0018D578;
struct SfdPly_x0018D578;
typedef int (*SfdTimeFn_x0018D578)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0018D578 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0018D578;
typedef struct SfdTimeRec_x0018D578 {
    int valid;
    SfdTimeCode_x0018D578 tc;
    int time;
    int unit;
} SfdTimeRec_x0018D578;
typedef struct SfdTst_x0018D578 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0018D578;
typedef struct SfdSyncTally_x0018D578 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0018D578;
typedef struct SfdSyncQueue_x0018D578 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0018D578;
typedef struct SfdFieldEntry_x0018D578 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0018D578;
typedef struct SfdPtsm_x0018D578 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0018D578;
typedef struct SfdHdrAudio_x0018D578 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018D578;
typedef struct SfdHdrMux_x0018D578 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018D578;
typedef struct SfdHdrVideo_x0018D578 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018D578;
typedef struct SfdHdrInf_x0018D578 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018D578 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018D578 audio;
    SfdHdrVideo_x0018D578 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018D578;
typedef struct SfdMvInf_x0018D578 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0018D578;
typedef struct SfdPlyInf_x0018D578 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0018D578;
typedef void (*SfdErrFn_x0018D578)(void *obj, int code);
typedef struct SfdErrInf_x0018D578 {
    SfdErrFn_x0018D578 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018D578;
typedef int (*SfdExtClockFn_x0018D578)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0018D578)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0018D578 {
    SfdTimeFn_x0018D578 timefn[6];
    SfdIsSkipFn_x0018D578 isSkipFn;
    SfdTimeCode_x0018D578 tc;
    SfdTimeRec_x0018D578 state;
    SfdTimeRec_x0018D578 best;
    SfdTimeRec_x0018D578 tot;
    SfdTimeRec_x0018D578 cur;
    SfdTimeRec_x0018D578 latest;
    SfdTimeRec_x0018D578 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0018D578 tally;
    SfdSyncQueue_x0018D578 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0018D578 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0018D578 tst;
    SfdFieldEntry_x0018D578 fields[64];
    SfdPtsm_x0018D578 ptsm;
    char pad1468[36];
} SfdTim_x0018D578;
enum {
    SFD_COND_VIDEO_x0018D578 = 5,
    SFD_COND_AUDIO_x0018D578 = 6,
    SFD_COND_KEEPSUP_x0018D578 = 8,
    SFD_COND_SYNCMODE_x0018D578 = 15,
    SFD_COND_ETIME_x0018D578 = 20,
    SFD_COND_ETUNIT_x0018D578 = 21,
    SFD_COND_LNKSTM_x0018D578 = 49,
    SFD_COND_SUPPLY_END_x0018D578 = 56,
    SFD_COND_DECODE_END_x0018D578 = 57,
    SFD_COND_DEMUX_SPLIT_x0018D578 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0018D578 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0018D578 = 80,
    SFD_COND_SYSHD_FN_x0018D578 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0018D578 = 86,
    SFD_COND_NUM_x0018D578 = 100
};
typedef enum SfdBufFmt_x0018D578 {
    SFD_BUFFMT_0_x0018D578 = 0
} SfdBufFmt_x0018D578;
typedef enum SfdBufId_x0018D578 {
    SFD_BUF_NONE_x0018D578 = 8
} SfdBufId_x0018D578;
typedef struct SfdCrePrm_x0018D578 {
    struct SfdTrnConfig_x0018D578 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0018D578 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0018D578;
typedef struct SfdItem_x0018D578 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018D578;
typedef struct SfdRing_x0018D578 {
    SfdItem_x0018D578 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018D578;
typedef struct SfdBufInf_x0018D578 {
    char *data;
    struct SfdSj_x0018D578 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018D578;
typedef struct SfdBufCur_x0018D578 {
    char *pos;
    int len;
} SfdBufCur_x0018D578;
typedef struct SfdBufDlm_x0018D578 {
    char *pos;
    char *end;
} SfdBufDlm_x0018D578;
typedef struct SfdBufRing_x0018D578 {
    SfdBufInf_x0018D578 sup;
    SfdBufDlm_x0018D578 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018D578 ptsque;
} SfdBufRing_x0018D578;
typedef struct SfdBufAring_x0018D578 {
    SfdBufInf_x0018D578 sup;
    SfdBufCur_x0018D578 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018D578;
typedef struct SfdUoch_x0018D578 {
    struct SfdSj_x0018D578 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018D578;
typedef struct SfdBufEnt_x0018D578 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018D578 ring;
        SfdBufAring_x0018D578 aring;
        SfdBufInf_x0018D578 vfrm;
        SfdUoch_x0018D578 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018D578;
typedef int (*SfdTrnFn_x0018D578)();
typedef struct SfdTrnModules_x0018D578 {
    SfdTrnFn_x0018D578 *fns[15];
} SfdTrnModules_x0018D578;
typedef struct SfdTrnConfig_x0018D578 {
    SfdTrnFn_x0018D578 *fns[9];
} SfdTrnConfig_x0018D578;
typedef struct SfdInitPrm_x0018D578 {
    SfdTrnModules_x0018D578 *modules;
    int vrate;
} SfdInitPrm_x0018D578;
typedef struct SfdMpsPrm_x0018D578 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0018D578 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0018D578;
typedef struct SfdAdxCfg_x0018D578 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0018D578;
typedef void (*SfdAdxStep_x0018D578)(struct SfdPly_x0018D578 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0018D578 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0018D578 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0018D578 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0018D578;
typedef struct SfdAoap_x0018D578 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0018D578 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0018D578 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0018D578 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0018D578 *h);
    void (*setSpeed)(struct SfdPly_x0018D578 *h, int speed);
} SfdAoap_x0018D578;
typedef struct SfainfOut_x0018D578 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0018D578;
typedef struct SfainfList_x0018D578 {
    int nout;
    SfainfOut_x0018D578 out[3];
} SfainfList_x0018D578;
typedef struct SfdTrnSlot_x0018D578 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0018D578 *mps;
        struct SfdMpv_x0018D578 *mpv;
        SfdAdxCtx_x0018D578 *adxt;
        SfdAoap_x0018D578 *aoap;
        SfainfList_x0018D578 *uo;
    } hn;
    SfdTrnFn_x0018D578 *fns;
    SfdBufId_x0018D578 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0018D578;
typedef struct SfdTsum_x0018D578 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0018D578;
typedef struct SfdTmrInf_x0018D578 {
    SfdTsum_x0018D578 tsum[6];
} SfdTmrInf_x0018D578;
typedef struct SfdTimLib_x0018D578 {
    int vcount;
    int f4;
    int vrate;
} SfdTimLib_x0018D578;
typedef struct SfdSvrCnt_x0018D578 {
    int cnt;
    int busy;
} SfdSvrCnt_x0018D578;
typedef struct SfdLibInf_x0018D578 {
    int cond[SFD_COND_NUM_x0018D578];
    SfdInitPrm_x0018D578 prm;
    int sysStat;
    SfdErrInf_x0018D578 err;
    SfdTimLib_x0018D578 tim;
    int buf;
    SfdTrnModules_x0018D578 trn;
    SfdSvrCnt_x0018D578 svr;
    struct SfdPly_x0018D578 *hn[8];
} SfdLibInf_x0018D578;
extern SfdLibInf_x0018D578 sfd_lib_x0018D578 __asm__("D_004268E0");
void SFBUF_Finish_x0018D578(void *work) __asm__("func_0018A1B0");
int SFD_Destroy_x0018D578(void *sfd) __asm__("func_00197C68");
int SFTRN_Finish_x0018D578(struct SfdTrnModules_x0018D578 *modules) __asm__("func_0019BA40");
void SFTIM_Finish_x0018D578(SfdTimLib_x0018D578 *lib) __asm__("func_00199E00");
typedef struct SfdSj_x0018D578 SfdSj_x0018D578;
typedef struct SfdSjChunk_x0018D578 {
    char *data;
    int len;
} SfdSjChunk_x0018D578;
typedef struct SfdSjVtbl_x0018D578 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018D578 *sj);
    int (*getUuid)(SfdSj_x0018D578 *sj);
    void (*reset)(SfdSj_x0018D578 *sj);
    void (*getChunk)(SfdSj_x0018D578 *sj, int id, int n, SfdSjChunk_x0018D578 *ck);
    void (*ungetChunk)(SfdSj_x0018D578 *sj, int id, SfdSjChunk_x0018D578 *ck);
    void (*putChunk)(SfdSj_x0018D578 *sj, int id, SfdSjChunk_x0018D578 *ck);
    int (*getNumData)(SfdSj_x0018D578 *sj, int id);
} SfdSjVtbl_x0018D578;
struct SfdSj_x0018D578 {
    SfdSjVtbl_x0018D578 *vtbl;
};
struct SfdSj_x0018D578;
typedef struct M2vErrInf_x0018D578 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018D578;
typedef struct Mpeg2Ext_x0018D578 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018D578;
typedef enum M2vFrameRate_x0018D578 {
    M2V_FRAME_RATE_FORBIDDEN_x0018D578 = 0
} M2vFrameRate_x0018D578;
typedef enum M2vPicType_x0018D578 {
    M2V_PICTYPE_I_x0018D578 = 1,
    M2V_PICTYPE_P_x0018D578 = 2,
    M2V_PICTYPE_B_x0018D578 = 3,
    M2V_PICTYPE_D_x0018D578 = 4
} M2vPicType_x0018D578;
typedef enum M2vPicStruct_x0018D578 {
    M2V_PICSTRUCT_TOP_FIELD_x0018D578 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018D578 = 2,
    M2V_PICSTRUCT_FRAME_x0018D578 = 3
} M2vPicStruct_x0018D578;
typedef enum M2vPicAtrF64_x0018D578 {
    M2V_PICATR_F64_0_x0018D578 = 0
} M2vPicAtrF64_x0018D578;
typedef struct M2vPicAtr_x0018D578 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018D578 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018D578 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018D578 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018D578 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018D578;
typedef void (*M2vUsrDatFn_x0018D578)(void *obj, int level);
typedef struct M2vUsrSj_x0018D578 {
    struct SfdSj_x0018D578 *sj;
    M2vUsrDatFn_x0018D578 fn;
    void *obj;
} M2vUsrSj_x0018D578;
typedef struct M2vPicUsr_x0018D578 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018D578;
typedef void (*M2vCondFn_x0018D578)();
typedef struct M2vObj_x0018D578 {
    int stat;
    M2vErrInf_x0018D578 err;
    M2vCondFn_x0018D578 cond[16];
    M2vPicAtr_x0018D578 picatr;
    char pad216[64];
    M2vUsrSj_x0018D578 usrsj[4];
    M2vPicUsr_x0018D578 picusr;
    char pad340[12];
    Mpeg2Ext_x0018D578 ext;
    char pad1656[8];
} M2vObj_x0018D578;
extern void M2V_SetErrFunc_x0018D578(M2vObj_x0018D578 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0018D578 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0018D578;
typedef struct sceMpeg_x0018D578 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0018D578 *sys;
} sceMpeg_x0018D578;
typedef enum {
    sceMpegCbError_x0018D578,
    sceMpegCbNodata_x0018D578,
    sceMpegCbStopDMA_x0018D578,
    sceMpegCbRestartDMA_x0018D578,
    sceMpegCbBackground_x0018D578,
    sceMpegCbTimeStamp_x0018D578,
    sceMpegCbStr_x0018D578,
    sceMpegCbNum_x0018D578
} sceMpegCbType_x0018D578;
typedef struct {
    sceMpegCbType_x0018D578 type;
    char *errMessage;
} sceMpegCbDataError_x0018D578;
typedef struct {
    sceMpegCbType_x0018D578 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0018D578;
typedef struct {
    sceMpegCbType_x0018D578 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0018D578;
typedef union {
    sceMpegCbType_x0018D578 type;
    sceMpegCbDataError_x0018D578 error;
    sceMpegCbDataTimeStamp_x0018D578 ts;
    sceMpegCbDataStr_x0018D578 str;
} sceMpegCbData_x0018D578;
typedef int (*sceMpegCallback_x0018D578)(sceMpeg_x0018D578 *mp, sceMpegCbData_x0018D578 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0018D578 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0018D578;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0018D578;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0018D578;
typedef struct {
    _sceMpegPicture_x0018D578 *ref_image;
    _sceMpegPicture_x0018D578 *prev_image;
    _sceMpegPicture_x0018D578 *decode;
    _sceMpegPicture_x0018D578 *image;
} _sceMpegPictureSlot_x0018D578;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0018D578;
typedef void (*_sceMpegMcKernel_x0018D578)(_sceMpegMcFetch_x0018D578 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0018D578 luma_kernel[4];
    _sceMpegMcKernel_x0018D578 chroma_kernel[4];
    _sceMpegMcFetch_x0018D578 luma[4];
    _sceMpegMcFetch_x0018D578 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0018D578;
typedef struct _sceMpegDecoder_x0018D578 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0018D578 callbacks[sceMpegCbNum_x0018D578];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0018D578 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0018D578 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0018D578 slots[3];
    _sceMpegPicture_x0018D578 pictures[9];
    _sceMpegSprBuffer_x0018D578 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0018D578 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0018D578;
typedef struct SfdPlanes_x0018D578 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018D578;
typedef struct SfdUserData_x0018D578 {
    char data[512];
    int size;
} SfdUserData_x0018D578;
typedef struct SfdRecVideo_x0018D578 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0018D578 stamp;
    SfdUserData_x0018D578 user;
} SfdRecVideo_x0018D578;
typedef struct SfdSlot_x0018D578 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0018D578 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018D578 *blob;
    M2vPicAtr_x0018D578 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0018D578;
typedef struct SfdBufPool_x0018D578 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0018D578 slot[18];
} SfdBufPool_x0018D578;
typedef struct SfdMpvCond_x0018D578 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018D578;
typedef struct SfdMpvWorkBufs_x0018D578 {
    int w[2];
} SfdMpvWorkBufs_x0018D578;
typedef struct SfdMpvFrameBufs_x0018D578 {
    int w[16];
} SfdMpvFrameBufs_x0018D578;
typedef struct SfdIpuEntry_x0018D578 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0018D578;
typedef struct SfdDmaTag_x0018D578 {
    long long tag;
    long long pad;
} SfdDmaTag_x0018D578;
typedef struct SfdIpuStream_x0018D578 {
    void *base;
    SfdDmaTag_x0018D578 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0018D578 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0018D578;
typedef struct SfdIpuCtl_x0018D578 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0018D578 mpeg;
    SfdIpuStream_x0018D578 stream;
    sceMpegCbDataError_x0018D578 error;
} SfdIpuCtl_x0018D578;
typedef struct SfdPtsComp_x0018D578 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0018D578 ptsent;
} SfdPtsComp_x0018D578;
typedef struct SfdMpv_x0018D578 {
    void *handle;
    SfdMpvCond_x0018D578 cond;
    SfdMpvWorkBufs_x0018D578 work;
    SfdMpvFrameBufs_x0018D578 bufs;
    SfdSlot_x0018D578 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0018D578 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0018D578 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0018D578 planes[2];
    SfdSlot_x0018D578 *first;
    SfdSlot_x0018D578 *second;
    SfdSlot_x0018D578 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0018D578 slots[16];
    SfdBufPool_x0018D578 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0018D578 ipu;
} SfdMpv_x0018D578;
typedef enum SfdPicType_x0018D578 {
    SFD_PICTYPE_I_x0018D578 = 1,
    SFD_PICTYPE_P_x0018D578 = 2,
    SFD_PICTYPE_B_x0018D578 = 3
} SfdPicType_x0018D578;
typedef enum SfdFrmInfF60_x0018D578 {
    SFD_FRMINF_F60_0_x0018D578 = 0
} SfdFrmInfF60_x0018D578;
typedef struct SfdFrameDetail_x0018D578 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0018D578;
typedef struct SfdFrameInfo_x0018D578 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0018D578 picType;
    int time;
    int unit;
    SfdBufFmt_x0018D578 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018D578 *picUsr;
    SfdFrmInfF60_x0018D578 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0018D578 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0018D578;
typedef struct SfdVfrm_x0018D578 {
    int used;
    int f4;
    SfdFrameInfo_x0018D578 inf;
} SfdVfrm_x0018D578;
typedef struct SfdPly_x0018D578 SfdPly_x0018D578;
typedef struct SfdRec_x0018D578 SfdRec_x0018D578;
typedef struct SfdRecSub_x0018D578 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0018D578;
typedef struct SfdRecSlot_x0018D578 {
    SfdRec_x0018D578 *rec;
    SfdRecSub_x0018D578 sub;
} SfdRecSlot_x0018D578;
typedef struct SfdSysHd_x0018D578 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0018D578;
typedef struct SfdRecSys_x0018D578 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0018D578 syshd;
} SfdRecSys_x0018D578;
typedef struct SfdRecAudio_x0018D578 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0018D578;
struct SfdRec_x0018D578 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0018D578 hdrInf;
    SfdRecSys_x0018D578 sys;
    char pad2616[152];
    SfdRecVideo_x0018D578 video;
    SfdRecAudio_x0018D578 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0018D578 {
    SfdCrePrm_x0018D578 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0018D578 hdr;
    SfdMvInf_x0018D578 mvInf;
    char pad2380[4];
    SfdPlyInf_x0018D578 plyInf;
    SfdErrInf_x0018D578 err;
    int cond[SFD_COND_NUM_x0018D578];
    int cond2[SFD_COND_NUM_x0018D578];
    char pad3364[4];
    SfdTim_x0018D578 tim;
    SfdBufEnt_x0018D578 buf[8];
    SfdVfrm_x0018D578 vfrm[16];
    SfdTrnSlot_x0018D578 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0018D578 mps;
    char pad8944[176];
    SfdMpv_x0018D578 mpv;
    SfdAdxCtx_x0018D578 adxt;
    char pad13680[100];
    SfdAoap_x0018D578 aoap;
    char pad13804[4];
    SfainfList_x0018D578 uo;
    char pad13860[4];
    SfdRecSlot_x0018D578 see;
    SfdTmrInf_x0018D578 tmr;
};
void sfd_FinishSj_x0018D578(void) __asm__("func_0018D8A8");
void sfd_FinishModules_x0018D578(void) __asm__("func_0018D8E0");
void sfd_FinishOther_x0018D578(void) __asm__("func_0018D900");
void sfd_FinishSj_x0018D578(void) __asm__("func_0018D8A8");
void sfd_FinishModules_x0018D578(void) __asm__("func_0018D8E0");
void sfd_FinishOther_x0018D578(void) __asm__("func_0018D900");
int func_0018D578_x0018D578(void) __asm__("func_0018D578");
/* SFD_Finish: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdlib.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018D578_x0018D578(void) {
    int i;
    SfdPly_x0018D578 **hn = sfd_lib_x0018D578.hn;
    int ret = 0;
    int err;
    for (i = 7; i >= 0; i--) {
        if (*hn != 0) {
            ret = SFD_Destroy_x0018D578(*hn);
        }
        hn++;
    }
    SFTIM_Finish_x0018D578(&sfd_lib_x0018D578.tim);
    SFBUF_Finish_x0018D578(&sfd_lib_x0018D578.buf);
    err = SFTRN_Finish_x0018D578(&sfd_lib_x0018D578.trn);
    sfd_FinishOther_x0018D578();
    sfd_FinishModules_x0018D578();
    sfd_FinishSj_x0018D578();
    if (err != 0) {
        return err;
    }
    return ret;
}
void func_0018D620(void) {
    func_0018D638();
}
void func_0018D638_x0018D638(u8 *arg0) __asm__("func_0018D638");
void func_0018D638_x0018D638(u8 *arg0)
{
  u8 *new_var;
  new_var = ((u8 *) arg0) + 0;
  *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
  *((s32 *) new_var) = 0;
  *((s32 *) (((u8 *) arg0) + 4)) = 0;
 do { } while (0);
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = 0;
}
s32 func_0018D6C0_x0018D650() __asm__("func_0018D6C0");
extern s32 D_00426A7C_x0018D650 __asm__("D_00426A7C");
s32 func_0018D650_x0018D650(u8 *arg0, s32 arg1) __asm__("func_0018D650");
s32 func_0018D650_x0018D650(u8 *arg0, s32 arg1)
{
  s32 temp_v0;
  temp_v0 = 0;
  if (arg1 != 0)
  {
    if (arg0 == ((void *) 0))
    {
      func_0018D6C0_x0018D650(&D_00426A7C_x0018D650, arg1);
    }
    else
    {
      func_0018D6C0_x0018D650(arg0 + 0x98C);
      temp_v0 = *((s32 *) (((u8 *) arg0) + 0x48));
      if (temp_v0 > 0)
      {
        *((s32 *) (((u8 *) arg0) + 0x48)) = (s32) (-temp_v0);
      }
    }
    temp_v0 = arg1;
  }
  return temp_v0;
}
struct SfdSj_x0018D6C0;
typedef void (*SfdErrFn_x0018D6C0)(void *obj, int code);
typedef struct SfdErrInf_x0018D6C0 {
    SfdErrFn_x0018D6C0 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018D6C0;
typedef struct SfdSj_x0018D6C0 SfdSj_x0018D6C0;
typedef struct SfdSjChunk_x0018D6C0 {
    char *data;
    int len;
} SfdSjChunk_x0018D6C0;
typedef struct SfdSjVtbl_x0018D6C0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018D6C0 *sj);
    int (*getUuid)(SfdSj_x0018D6C0 *sj);
    void (*reset)(SfdSj_x0018D6C0 *sj);
    void (*getChunk)(SfdSj_x0018D6C0 *sj, int id, int n, SfdSjChunk_x0018D6C0 *ck);
    void (*ungetChunk)(SfdSj_x0018D6C0 *sj, int id, SfdSjChunk_x0018D6C0 *ck);
    void (*putChunk)(SfdSj_x0018D6C0 *sj, int id, SfdSjChunk_x0018D6C0 *ck);
    int (*getNumData)(SfdSj_x0018D6C0 *sj, int id);
} SfdSjVtbl_x0018D6C0;
struct SfdSj_x0018D6C0 {
    SfdSjVtbl_x0018D6C0 *vtbl;
};
struct SfdSj_x0018D6C0;
typedef struct M2vErrInf_x0018D6C0 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018D6C0;
typedef struct Mpeg2Ext_x0018D6C0 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018D6C0;
typedef enum M2vFrameRate_x0018D6C0 {
    M2V_FRAME_RATE_FORBIDDEN_x0018D6C0 = 0
} M2vFrameRate_x0018D6C0;
typedef enum M2vPicType_x0018D6C0 {
    M2V_PICTYPE_I_x0018D6C0 = 1,
    M2V_PICTYPE_P_x0018D6C0 = 2,
    M2V_PICTYPE_B_x0018D6C0 = 3,
    M2V_PICTYPE_D_x0018D6C0 = 4
} M2vPicType_x0018D6C0;
typedef enum M2vPicStruct_x0018D6C0 {
    M2V_PICSTRUCT_TOP_FIELD_x0018D6C0 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018D6C0 = 2,
    M2V_PICSTRUCT_FRAME_x0018D6C0 = 3
} M2vPicStruct_x0018D6C0;
typedef enum M2vPicAtrF64_x0018D6C0 {
    M2V_PICATR_F64_0_x0018D6C0 = 0
} M2vPicAtrF64_x0018D6C0;
typedef struct M2vPicAtr_x0018D6C0 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018D6C0 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018D6C0 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018D6C0 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018D6C0 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018D6C0;
typedef void (*M2vUsrDatFn_x0018D6C0)(void *obj, int level);
typedef struct M2vUsrSj_x0018D6C0 {
    struct SfdSj_x0018D6C0 *sj;
    M2vUsrDatFn_x0018D6C0 fn;
    void *obj;
} M2vUsrSj_x0018D6C0;
typedef struct M2vPicUsr_x0018D6C0 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018D6C0;
typedef void (*M2vCondFn_x0018D6C0)();
typedef struct M2vObj_x0018D6C0 {
    int stat;
    M2vErrInf_x0018D6C0 err;
    M2vCondFn_x0018D6C0 cond[16];
    M2vPicAtr_x0018D6C0 picatr;
    char pad216[64];
    M2vUsrSj_x0018D6C0 usrsj[4];
    M2vPicUsr_x0018D6C0 picusr;
    char pad340[12];
    Mpeg2Ext_x0018D6C0 ext;
    char pad1656[8];
} M2vObj_x0018D6C0;
extern void M2V_SetErrFunc_x0018D6C0(M2vObj_x0018D6C0 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
void func_0018D6C0_x0018D6C0(SfdErrInf_x0018D6C0 *err, int code) __asm__("func_0018D6C0");
/* sfd_RecordError: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfdlib.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018D6C0_x0018D6C0(SfdErrInf_x0018D6C0 *err, int code) {
    if (err->code == 0) {
        err->code = code;
    }
    if (code != 0 && err->func != 0) {
        err->func(err->obj, code);
    }
}
s32 func_0018D650_x0018D700() __asm__("func_0018D650");
s32 func_0018D798_x0018D700() __asm__("func_0018D798");
s32 func_0018D870_x0018D700() __asm__("func_0018D870");
extern s32 D_00426A7C_x0018D700 __asm__("D_00426A7C");
s32 func_0018D700_x0018D700(s32 arg0, s32 arg1, s32 arg2) __asm__("func_0018D700");
s32 func_0018D700_x0018D700(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0) {
        goto block_2;
    }
    func_0018D798_x0018D700(&D_00426A7C_x0018D700);
    goto block_6;
block_2:
    if (func_0018D870_x0018D700() == 0) {
        goto block_5;
    }
    return func_0018D650_x0018D700(0, 0xFF000101);
block_5:
    func_0018D798_x0018D700(arg0 + 0x98C, arg1, arg2);
block_6:
    return 0;
}
void func_0018D798_x0018D798(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0018D798");
void func_0018D798_x0018D798(u8 *arg0, s32 arg1, s32 arg2)
{
  u8 *new_var;
  new_var = ((u8 *) arg0) + 0;
  *((s32 *) new_var) = arg1;
  *((s32 *) (((u8 *) arg0) + 4)) = arg2;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018D7A8);
extern void *D_004268D8_x0018D870 __asm__("D_004268D8");
s32 func_0018D870_x0018D870(u8 *arg0) __asm__("func_0018D870");
s32 func_0018D870_x0018D870(u8 *arg0)
{
  s32 var_v0;
  D_004268D8_x0018D870 = arg0;
  var_v0 = -1;
  if (arg0 != ((void *) 0))
  {
    var_v0 = (var_v0 = (*((s32 *) (((u8 *) arg0) + 0x48))) != 0) ? (0) : (-1);
  }
  return var_v0;
}
void func_0018D890(void) {
    func_0016E078();
}
void func_0018D8A8(void) {
    func_0016E0D0();
}
void func_0018D8C0(void) {
    func_001966A8();
    func_0018C918();
}
void func_0018D8E0(void) {
    func_0018C938();
}
void func_0018D8F8(void) {

}
void func_0018D900(void) {

}
void func_0018D908(void) {
    func_0016FF40();
}
void func_0018D920(void) {
    func_0016FF58();
}
s32 func_0018D938(void) {
    return 0;
}
s32 func_0018D940(void) {
    return 0;
}
s32 func_0018B710_x0018D948() __asm__("func_0018B710");
s32 func_0018D948_x0018D948(u8 *arg0) __asm__("func_0018D948");
s32 func_0018D948_x0018D948(u8 *arg0) {
    func_0018B710_x0018D948(arg0, *(s32 *)((u8 *)arg0 + 0x1BF4), 1);
    return 0;
}
s32 func_0018D970(void) {
    return 0;
}
s32 func_0018D978(void) {
    return 0;
}
s32 func_0018D980(void) {
    return 0;
}
s32 func_0018D988(void) {
    return 0;
}
s32 func_0018D990(void) {
    return 0;
}
s32 func_0018D998(void) {
    return 0;
}
s32 func_0018AA68_x0018D9A0() __asm__("func_0018AA68");
void func_0018D9A0_x0018D9A0(u8 *arg0, s32 arg1) __asm__("func_0018D9A0");
void func_0018D9A0_x0018D9A0(u8 *arg0, s32 arg1) {
    func_0018AA68_x0018D9A0(arg0, *(s32 *)((u8 *)arg0 + 0x1BF4), arg1);
}
s32 func_0018AB40_x0018D9C0() __asm__("func_0018AB40");
void func_0018D9C0_x0018D9C0(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0018D9C0");
void func_0018D9C0_x0018D9C0(u8 *arg0, s32 arg1, s32 arg2) {
    func_0018AB40_x0018D9C0(arg0, *(s32 *)((u8 *)arg0 + 0x1BF4), arg1, arg2);
}
s32 func_0018D650_x0018D9E8() __asm__("func_0018D650");
void func_0018D9E8_x0018D9E8(s32 arg0) __asm__("func_0018D9E8");
void func_0018D9E8_x0018D9E8(s32 arg0) {
    func_0018D650_x0018D9E8(arg0, 0xFF000501);
}
s32 func_0018D650_x0018DA08() __asm__("func_0018D650");
void func_0018DA08_x0018DA08(s32 arg0) __asm__("func_0018DA08");
void func_0018DA08_x0018DA08(s32 arg0) {
    func_0018D650_x0018DA08(arg0, 0xFF000501);
}
s32 func_0018DA28(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DA30);
s32 func_0017AE98_x0018DAE0(s32, s32 *) __asm__("func_0017AE98");
s32 func_0018D650_x0018DAE0(s32, s32) __asm__("func_0018D650");
s32 func_0018DB50_x0018DAE0() __asm__("func_0018DB50");
extern s32 D_00426B08_x0018DAE0 __asm__("D_00426B08");
extern s32 D_0048E298_x0018DAE0 __asm__("D_0048E298");
unsigned int func_0018DAE0_x0018DAE0(void) __asm__("func_0018DAE0");
unsigned int func_0018DAE0_x0018DAE0(void)
{
  if (func_0018DB50_x0018DAE0() != 0)
  {
    loop_1:
    goto loop_1;

  }
  if (func_0017AE98_x0018DAE0(8, &D_0048E298_x0018DAE0) != 0)
  {
    func_0018D650_x0018DAE0(0, 0xFF000D01);
    return;
  }
  D_00426B08_x0018DAE0 = 0;
}
s32 func_0018DB50(void) {
    return 0;
}
s32 func_0018DB58(void) {
    func_0017AFA8();
    return 0;
}
void func_0018DB78(void) {
    func_0018DB90();
}
s32 func_0018DB90(u8 *arg0) {
    s32 temp_s1;

    if (func_0018EAA8() == 1) {
        return 0;
    }
    temp_s1 = func_0018DC00(arg0);
    if (*(s32 *)((u8 *)arg0 + 0x48) == 2) {
        func_0018ED30(arg0);
    }
    return temp_s1;
}
s32 func_0018DCD0_x0018DC00__(void *, s32 *, s32 *, s32, s32 *) __asm__("func_0018DCD0");
s32 func_0018DD58_x0018DC00__(void *, s32, s32, s32 *, s32) __asm__("func_0018DD58");
s32 func_0018DD38_x0018DC00__(void *, s32) __asm__("func_0018DD38");
s32 func_0018DC00_x0018DC00__(u8 *a0) __asm__("func_0018DC00");
s32 func_0018DC00_x0018DC00__(u8 *a0)
{
    s32 r;
    s32 n;
    s32 h;
    s32 b0, b1, b2, b3;

    r = 0;
    n = 0;
    h = *(s32 *)(a0 + 0x28);
    while (n <= 0x7FFFFFFE) {
        r = func_0018DCD0_x0018DC00__(a0, &b0, &b1, h, &b2);
        if (r) {
            break;
        }
        r = func_0018DD58_x0018DC00__(a0, b0, b1, &b3, b2);
        if (r) {
            break;
        }
        if (b3 == 0) {
            break;
        }
        r = func_0018DD38_x0018DC00__(a0, b3);
        if (r) {
            break;
        }
        n += b3;
    }
    return r;
}
s32 func_0018AA80_x0018DCD0(u8 *, s32, s32 *) __asm__("func_0018AA80");
s32 func_0018DCD0_x0018DCD0(u8 *p, s32 *o1, s32 *o2, s32 a3, s32 *o3) __asm__("func_0018DCD0");
s32 func_0018DCD0_x0018DCD0(u8 *p, s32 *o1, s32 *o2, s32 a3, s32 *o3)
{
    s32 buf[8];
    s32 r = func_0018AA80_x0018DCD0(p, *(s32 *)(p + 0x1C34), buf);
    if (r != 0) {
        return r;
    }
    *o2 = buf[1];
    *o1 = buf[0];
    *o3 = buf[1] + buf[3];
    return 0;
}
s32 func_0018AB58_x0018DD38() __asm__("func_0018AB58");
void func_0018DD38_x0018DD38(u8 *arg0, s32 arg1) __asm__("func_0018DD38");
void func_0018DD38_x0018DD38(u8 *arg0, s32 arg1) {
    func_0018AB58_x0018DD38(arg0, *(s32 *)((u8 *)arg0 + 0x1C34), arg1);
    __asm__ __volatile__("");
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018DD58);
typedef struct SfdSj_x0018DEF8 SfdSj_x0018DEF8;
typedef struct SfdSjChunk_x0018DEF8 {
    char *data;
    int len;
} SfdSjChunk_x0018DEF8;
typedef struct SfdSjVtbl_x0018DEF8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018DEF8 *sj);
    int (*getUuid)(SfdSj_x0018DEF8 *sj);
    void (*reset)(SfdSj_x0018DEF8 *sj);
    void (*getChunk)(SfdSj_x0018DEF8 *sj, int id, int n, SfdSjChunk_x0018DEF8 *ck);
    void (*ungetChunk)(SfdSj_x0018DEF8 *sj, int id, SfdSjChunk_x0018DEF8 *ck);
    void (*putChunk)(SfdSj_x0018DEF8 *sj, int id, SfdSjChunk_x0018DEF8 *ck);
    int (*getNumData)(SfdSj_x0018DEF8 *sj, int id);
} SfdSjVtbl_x0018DEF8;
struct SfdSj_x0018DEF8 {
    SfdSjVtbl_x0018DEF8 *vtbl;
};
struct SfdSj_x0018DEF8;
struct SfdRecSlot_x0018DEF8;
struct SfdRec_x0018DEF8;
struct SfdMpvCond_x0018DEF8;
struct SfdPlanes_x0018DEF8;
struct SfdFrameInfo_x0018DEF8;
struct SfdPly_x0018DEF8;
typedef int (*SfdTimeFn_x0018DEF8)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0018DEF8 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0018DEF8;
typedef struct SfdTimeRec_x0018DEF8 {
    int valid;
    SfdTimeCode_x0018DEF8 tc;
    int time;
    int unit;
} SfdTimeRec_x0018DEF8;
typedef struct SfdTst_x0018DEF8 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0018DEF8;
typedef struct SfdSyncTally_x0018DEF8 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0018DEF8;
typedef struct SfdSyncQueue_x0018DEF8 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0018DEF8;
typedef struct SfdFieldEntry_x0018DEF8 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0018DEF8;
typedef struct SfdPtsm_x0018DEF8 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0018DEF8;
typedef struct SfdHdrAudio_x0018DEF8 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018DEF8;
typedef struct SfdHdrMux_x0018DEF8 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018DEF8;
typedef struct SfdHdrVideo_x0018DEF8 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018DEF8;
typedef struct SfdHdrInf_x0018DEF8 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018DEF8 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018DEF8 audio;
    SfdHdrVideo_x0018DEF8 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018DEF8;
typedef struct SfdMvInf_x0018DEF8 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0018DEF8;
typedef struct SfdPlyInf_x0018DEF8 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0018DEF8;
typedef void (*SfdErrFn_x0018DEF8)(void *obj, int code);
typedef struct SfdErrInf_x0018DEF8 {
    SfdErrFn_x0018DEF8 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018DEF8;
typedef int (*SfdExtClockFn_x0018DEF8)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0018DEF8)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0018DEF8 {
    SfdTimeFn_x0018DEF8 timefn[6];
    SfdIsSkipFn_x0018DEF8 isSkipFn;
    SfdTimeCode_x0018DEF8 tc;
    SfdTimeRec_x0018DEF8 state;
    SfdTimeRec_x0018DEF8 best;
    SfdTimeRec_x0018DEF8 tot;
    SfdTimeRec_x0018DEF8 cur;
    SfdTimeRec_x0018DEF8 latest;
    SfdTimeRec_x0018DEF8 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0018DEF8 tally;
    SfdSyncQueue_x0018DEF8 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0018DEF8 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0018DEF8 tst;
    SfdFieldEntry_x0018DEF8 fields[64];
    SfdPtsm_x0018DEF8 ptsm;
    char pad1468[36];
} SfdTim_x0018DEF8;
enum {
    SFD_COND_VIDEO_x0018DEF8 = 5,
    SFD_COND_AUDIO_x0018DEF8 = 6,
    SFD_COND_KEEPSUP_x0018DEF8 = 8,
    SFD_COND_SYNCMODE_x0018DEF8 = 15,
    SFD_COND_ETIME_x0018DEF8 = 20,
    SFD_COND_ETUNIT_x0018DEF8 = 21,
    SFD_COND_LNKSTM_x0018DEF8 = 49,
    SFD_COND_SUPPLY_END_x0018DEF8 = 56,
    SFD_COND_DECODE_END_x0018DEF8 = 57,
    SFD_COND_DEMUX_SPLIT_x0018DEF8 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0018DEF8 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0018DEF8 = 80,
    SFD_COND_SYSHD_FN_x0018DEF8 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0018DEF8 = 86,
    SFD_COND_NUM_x0018DEF8 = 100
};
typedef enum SfdBufFmt_x0018DEF8 {
    SFD_BUFFMT_0_x0018DEF8 = 0
} SfdBufFmt_x0018DEF8;
typedef enum SfdBufId_x0018DEF8 {
    SFD_BUF_NONE_x0018DEF8 = 8
} SfdBufId_x0018DEF8;
typedef struct SfdCrePrm_x0018DEF8 {
    struct SfdTrnConfig_x0018DEF8 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0018DEF8 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0018DEF8;
typedef struct SfdItem_x0018DEF8 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018DEF8;
typedef struct SfdRing_x0018DEF8 {
    SfdItem_x0018DEF8 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018DEF8;
typedef struct SfdBufInf_x0018DEF8 {
    char *data;
    struct SfdSj_x0018DEF8 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018DEF8;
typedef struct SfdBufCur_x0018DEF8 {
    char *pos;
    int len;
} SfdBufCur_x0018DEF8;
typedef struct SfdBufDlm_x0018DEF8 {
    char *pos;
    char *end;
} SfdBufDlm_x0018DEF8;
typedef struct SfdBufRing_x0018DEF8 {
    SfdBufInf_x0018DEF8 sup;
    SfdBufDlm_x0018DEF8 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018DEF8 ptsque;
} SfdBufRing_x0018DEF8;
typedef struct SfdBufAring_x0018DEF8 {
    SfdBufInf_x0018DEF8 sup;
    SfdBufCur_x0018DEF8 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018DEF8;
typedef struct SfdUoch_x0018DEF8 {
    struct SfdSj_x0018DEF8 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018DEF8;
typedef struct SfdBufEnt_x0018DEF8 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018DEF8 ring;
        SfdBufAring_x0018DEF8 aring;
        SfdBufInf_x0018DEF8 vfrm;
        SfdUoch_x0018DEF8 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018DEF8;
typedef int (*SfdTrnFn_x0018DEF8)();
typedef struct SfdTrnConfig_x0018DEF8 {
    SfdTrnFn_x0018DEF8 *fns[9];
} SfdTrnConfig_x0018DEF8;
typedef struct SfdMpsPrm_x0018DEF8 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0018DEF8 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0018DEF8;
typedef struct SfdAdxCfg_x0018DEF8 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0018DEF8;
typedef void (*SfdAdxStep_x0018DEF8)(struct SfdPly_x0018DEF8 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0018DEF8 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0018DEF8 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0018DEF8 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0018DEF8;
typedef struct SfdAoap_x0018DEF8 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0018DEF8 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0018DEF8 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0018DEF8 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0018DEF8 *h);
    void (*setSpeed)(struct SfdPly_x0018DEF8 *h, int speed);
} SfdAoap_x0018DEF8;
typedef struct SfainfOut_x0018DEF8 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0018DEF8;
typedef struct SfainfList_x0018DEF8 {
    int nout;
    SfainfOut_x0018DEF8 out[3];
} SfainfList_x0018DEF8;
typedef struct SfdTrnSlot_x0018DEF8 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0018DEF8 *mps;
        struct SfdMpv_x0018DEF8 *mpv;
        SfdAdxCtx_x0018DEF8 *adxt;
        SfdAoap_x0018DEF8 *aoap;
        SfainfList_x0018DEF8 *uo;
    } hn;
    SfdTrnFn_x0018DEF8 *fns;
    SfdBufId_x0018DEF8 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0018DEF8;
typedef struct SfdTsum_x0018DEF8 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0018DEF8;
typedef struct SfdTmrInf_x0018DEF8 {
    SfdTsum_x0018DEF8 tsum[6];
} SfdTmrInf_x0018DEF8;
struct SfdSj_x0018DEF8;
typedef struct M2vErrInf_x0018DEF8 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018DEF8;
typedef struct Mpeg2Ext_x0018DEF8 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018DEF8;
typedef enum M2vFrameRate_x0018DEF8 {
    M2V_FRAME_RATE_FORBIDDEN_x0018DEF8 = 0
} M2vFrameRate_x0018DEF8;
typedef enum M2vPicType_x0018DEF8 {
    M2V_PICTYPE_I_x0018DEF8 = 1,
    M2V_PICTYPE_P_x0018DEF8 = 2,
    M2V_PICTYPE_B_x0018DEF8 = 3,
    M2V_PICTYPE_D_x0018DEF8 = 4
} M2vPicType_x0018DEF8;
typedef enum M2vPicStruct_x0018DEF8 {
    M2V_PICSTRUCT_TOP_FIELD_x0018DEF8 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018DEF8 = 2,
    M2V_PICSTRUCT_FRAME_x0018DEF8 = 3
} M2vPicStruct_x0018DEF8;
typedef enum M2vPicAtrF64_x0018DEF8 {
    M2V_PICATR_F64_0_x0018DEF8 = 0
} M2vPicAtrF64_x0018DEF8;
typedef struct M2vPicAtr_x0018DEF8 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018DEF8 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018DEF8 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018DEF8 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018DEF8 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018DEF8;
typedef void (*M2vUsrDatFn_x0018DEF8)(void *obj, int level);
typedef struct M2vUsrSj_x0018DEF8 {
    struct SfdSj_x0018DEF8 *sj;
    M2vUsrDatFn_x0018DEF8 fn;
    void *obj;
} M2vUsrSj_x0018DEF8;
typedef struct M2vPicUsr_x0018DEF8 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018DEF8;
typedef void (*M2vCondFn_x0018DEF8)();
typedef struct M2vObj_x0018DEF8 {
    int stat;
    M2vErrInf_x0018DEF8 err;
    M2vCondFn_x0018DEF8 cond[16];
    M2vPicAtr_x0018DEF8 picatr;
    char pad216[64];
    M2vUsrSj_x0018DEF8 usrsj[4];
    M2vPicUsr_x0018DEF8 picusr;
    char pad340[12];
    Mpeg2Ext_x0018DEF8 ext;
    char pad1656[8];
} M2vObj_x0018DEF8;
extern void M2V_SetErrFunc_x0018DEF8(M2vObj_x0018DEF8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0018DEF8 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0018DEF8;
typedef struct sceMpeg_x0018DEF8 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0018DEF8 *sys;
} sceMpeg_x0018DEF8;
typedef enum {
    sceMpegCbError_x0018DEF8,
    sceMpegCbNodata_x0018DEF8,
    sceMpegCbStopDMA_x0018DEF8,
    sceMpegCbRestartDMA_x0018DEF8,
    sceMpegCbBackground_x0018DEF8,
    sceMpegCbTimeStamp_x0018DEF8,
    sceMpegCbStr_x0018DEF8,
    sceMpegCbNum_x0018DEF8
} sceMpegCbType_x0018DEF8;
typedef struct {
    sceMpegCbType_x0018DEF8 type;
    char *errMessage;
} sceMpegCbDataError_x0018DEF8;
typedef struct {
    sceMpegCbType_x0018DEF8 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0018DEF8;
typedef struct {
    sceMpegCbType_x0018DEF8 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0018DEF8;
typedef union {
    sceMpegCbType_x0018DEF8 type;
    sceMpegCbDataError_x0018DEF8 error;
    sceMpegCbDataTimeStamp_x0018DEF8 ts;
    sceMpegCbDataStr_x0018DEF8 str;
} sceMpegCbData_x0018DEF8;
typedef int (*sceMpegCallback_x0018DEF8)(sceMpeg_x0018DEF8 *mp, sceMpegCbData_x0018DEF8 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0018DEF8 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0018DEF8;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0018DEF8;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0018DEF8;
typedef struct {
    _sceMpegPicture_x0018DEF8 *ref_image;
    _sceMpegPicture_x0018DEF8 *prev_image;
    _sceMpegPicture_x0018DEF8 *decode;
    _sceMpegPicture_x0018DEF8 *image;
} _sceMpegPictureSlot_x0018DEF8;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0018DEF8;
typedef void (*_sceMpegMcKernel_x0018DEF8)(_sceMpegMcFetch_x0018DEF8 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0018DEF8 luma_kernel[4];
    _sceMpegMcKernel_x0018DEF8 chroma_kernel[4];
    _sceMpegMcFetch_x0018DEF8 luma[4];
    _sceMpegMcFetch_x0018DEF8 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0018DEF8;
typedef struct _sceMpegDecoder_x0018DEF8 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0018DEF8 callbacks[sceMpegCbNum_x0018DEF8];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0018DEF8 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0018DEF8 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0018DEF8 slots[3];
    _sceMpegPicture_x0018DEF8 pictures[9];
    _sceMpegSprBuffer_x0018DEF8 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0018DEF8 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0018DEF8;
typedef struct SfdPlanes_x0018DEF8 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018DEF8;
typedef struct SfdUserData_x0018DEF8 {
    char data[512];
    int size;
} SfdUserData_x0018DEF8;
typedef struct SfdRecVideo_x0018DEF8 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0018DEF8 stamp;
    SfdUserData_x0018DEF8 user;
} SfdRecVideo_x0018DEF8;
typedef struct SfdSlot_x0018DEF8 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0018DEF8 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018DEF8 *blob;
    M2vPicAtr_x0018DEF8 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0018DEF8;
typedef struct SfdBufPool_x0018DEF8 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0018DEF8 slot[18];
} SfdBufPool_x0018DEF8;
typedef struct SfdMpvCond_x0018DEF8 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018DEF8;
typedef struct SfdMpvWorkBufs_x0018DEF8 {
    int w[2];
} SfdMpvWorkBufs_x0018DEF8;
typedef struct SfdMpvFrameBufs_x0018DEF8 {
    int w[16];
} SfdMpvFrameBufs_x0018DEF8;
typedef struct SfdIpuEntry_x0018DEF8 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0018DEF8;
typedef struct SfdDmaTag_x0018DEF8 {
    long long tag;
    long long pad;
} SfdDmaTag_x0018DEF8;
typedef struct SfdIpuStream_x0018DEF8 {
    void *base;
    SfdDmaTag_x0018DEF8 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0018DEF8 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0018DEF8;
typedef struct SfdIpuCtl_x0018DEF8 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0018DEF8 mpeg;
    SfdIpuStream_x0018DEF8 stream;
    sceMpegCbDataError_x0018DEF8 error;
} SfdIpuCtl_x0018DEF8;
typedef struct SfdPtsComp_x0018DEF8 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0018DEF8 ptsent;
} SfdPtsComp_x0018DEF8;
typedef struct SfdMpv_x0018DEF8 {
    void *handle;
    SfdMpvCond_x0018DEF8 cond;
    SfdMpvWorkBufs_x0018DEF8 work;
    SfdMpvFrameBufs_x0018DEF8 bufs;
    SfdSlot_x0018DEF8 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0018DEF8 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0018DEF8 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0018DEF8 planes[2];
    SfdSlot_x0018DEF8 *first;
    SfdSlot_x0018DEF8 *second;
    SfdSlot_x0018DEF8 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0018DEF8 slots[16];
    SfdBufPool_x0018DEF8 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0018DEF8 ipu;
} SfdMpv_x0018DEF8;
typedef enum SfdPicType_x0018DEF8 {
    SFD_PICTYPE_I_x0018DEF8 = 1,
    SFD_PICTYPE_P_x0018DEF8 = 2,
    SFD_PICTYPE_B_x0018DEF8 = 3
} SfdPicType_x0018DEF8;
typedef enum SfdFrmInfF60_x0018DEF8 {
    SFD_FRMINF_F60_0_x0018DEF8 = 0
} SfdFrmInfF60_x0018DEF8;
typedef struct SfdFrameDetail_x0018DEF8 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0018DEF8;
typedef struct SfdFrameInfo_x0018DEF8 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0018DEF8 picType;
    int time;
    int unit;
    SfdBufFmt_x0018DEF8 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018DEF8 *picUsr;
    SfdFrmInfF60_x0018DEF8 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0018DEF8 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0018DEF8;
typedef struct SfdVfrm_x0018DEF8 {
    int used;
    int f4;
    SfdFrameInfo_x0018DEF8 inf;
} SfdVfrm_x0018DEF8;
typedef struct SfdPly_x0018DEF8 SfdPly_x0018DEF8;
typedef struct SfdRec_x0018DEF8 SfdRec_x0018DEF8;
typedef struct SfdRecSub_x0018DEF8 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0018DEF8;
typedef struct SfdRecSlot_x0018DEF8 {
    SfdRec_x0018DEF8 *rec;
    SfdRecSub_x0018DEF8 sub;
} SfdRecSlot_x0018DEF8;
typedef struct SfdSysHd_x0018DEF8 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0018DEF8;
typedef struct SfdRecSys_x0018DEF8 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0018DEF8 syshd;
} SfdRecSys_x0018DEF8;
typedef struct SfdRecAudio_x0018DEF8 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0018DEF8;
struct SfdRec_x0018DEF8 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0018DEF8 hdrInf;
    SfdRecSys_x0018DEF8 sys;
    char pad2616[152];
    SfdRecVideo_x0018DEF8 video;
    SfdRecAudio_x0018DEF8 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0018DEF8 {
    SfdCrePrm_x0018DEF8 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0018DEF8 hdr;
    SfdMvInf_x0018DEF8 mvInf;
    char pad2380[4];
    SfdPlyInf_x0018DEF8 plyInf;
    SfdErrInf_x0018DEF8 err;
    int cond[SFD_COND_NUM_x0018DEF8];
    int cond2[SFD_COND_NUM_x0018DEF8];
    char pad3364[4];
    SfdTim_x0018DEF8 tim;
    SfdBufEnt_x0018DEF8 buf[8];
    SfdVfrm_x0018DEF8 vfrm[16];
    SfdTrnSlot_x0018DEF8 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0018DEF8 mps;
    char pad8944[176];
    SfdMpv_x0018DEF8 mpv;
    SfdAdxCtx_x0018DEF8 adxt;
    char pad13680[100];
    SfdAoap_x0018DEF8 aoap;
    char pad13804[4];
    SfainfList_x0018DEF8 uo;
    char pad13860[4];
    SfdRecSlot_x0018DEF8 see;
    SfdTmrInf_x0018DEF8 tmr;
};
int MPS_GetStartCodeKind_x0018DEF8(unsigned char *p) __asm__("func_0017AAF0");
int sfmps_IsZero_x0018DEF8(unsigned char *p, int n) __asm__("func_0018DFD8");
int sfmps_IsEndOfRingBuf_x0018DEF8(SfdPly_x0018DEF8 *hn, unsigned char *pos) __asm__("func_0018E018");
int sfmps_IsZero_x0018DEF8(unsigned char *p, int n) __asm__("func_0018DFD8");
int sfmps_IsEndOfRingBuf_x0018DEF8(SfdPly_x0018DEF8 *hn, unsigned char *pos) __asm__("func_0018E018");
void func_0018DEF8_x0018DEF8(SfdPly_x0018DEF8 *hn, unsigned char *buf, int size, int *skip) __asm__("func_0018DEF8");
/* sfmps_SkipNext: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmps.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018DEF8_x0018DEF8(SfdPly_x0018DEF8 *hn, unsigned char *buf, int size, int *skip) {
    int n;
    int count;
    *skip = 0;
    n = hn->cre.unit;
    if (size >= n + 3 && sfmps_IsZero_x0018DEF8(buf, n) != 0) {
        *skip = n;
        return;
    }
    count = 0;
    while (size >= 4) {
        if (MPS_GetStartCodeKind_x0018DEF8(buf++) & (0x80000 | 0x40000 | 0x10000)) {
            *skip = count;
            return;
        }
        size--;
        count++;
    }
    if (size >= 1 && size <= 3 && sfmps_IsEndOfRingBuf_x0018DEF8(hn, buf + size) != 0) {
        count += size;
    }
    *skip = count;
}
s32 func_0018DFD8_x0018DFD8(u8 *arg0, s32 arg1) __asm__("func_0018DFD8");
s32 func_0018DFD8_x0018DFD8(u8 *arg0, s32 arg1)
{
  s32 var_a2;
  s32 var_v0;
  u8 *var_a0;
  u8 var_v1;
  var_a0 = arg0;
  var_a2 = 0;
  if (arg1 > 0)
  {
 do { var_v1 = *var_a0; loop_2: var_a0 += 1; var_v0 = 0; if (var_v1 == 0) { var_a2 += 1; if (var_a2 < arg1) { var_v1 = *var_a0; goto loop_2; } goto block_6; } } while (0);
  }
  else
  {
    block_6:
    var_v0 = 1;

  }
  return var_v0;
}
typedef struct SfdSj_x0018E018 SfdSj_x0018E018;
typedef struct SfdSjChunk_x0018E018 {
    char *data;
    int len;
} SfdSjChunk_x0018E018;
typedef struct SfdSjVtbl_x0018E018 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018E018 *sj);
    int (*getUuid)(SfdSj_x0018E018 *sj);
    void (*reset)(SfdSj_x0018E018 *sj);
    void (*getChunk)(SfdSj_x0018E018 *sj, int id, int n, SfdSjChunk_x0018E018 *ck);
    void (*ungetChunk)(SfdSj_x0018E018 *sj, int id, SfdSjChunk_x0018E018 *ck);
    void (*putChunk)(SfdSj_x0018E018 *sj, int id, SfdSjChunk_x0018E018 *ck);
    int (*getNumData)(SfdSj_x0018E018 *sj, int id);
} SfdSjVtbl_x0018E018;
struct SfdSj_x0018E018 {
    SfdSjVtbl_x0018E018 *vtbl;
};
struct SfdSj_x0018E018;
struct SfdRecSlot_x0018E018;
struct SfdRec_x0018E018;
struct SfdMpvCond_x0018E018;
struct SfdPlanes_x0018E018;
struct SfdFrameInfo_x0018E018;
struct SfdPly_x0018E018;
typedef int (*SfdTimeFn_x0018E018)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0018E018 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0018E018;
typedef struct SfdTimeRec_x0018E018 {
    int valid;
    SfdTimeCode_x0018E018 tc;
    int time;
    int unit;
} SfdTimeRec_x0018E018;
typedef struct SfdTst_x0018E018 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0018E018;
typedef struct SfdSyncTally_x0018E018 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0018E018;
typedef struct SfdSyncQueue_x0018E018 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0018E018;
typedef struct SfdFieldEntry_x0018E018 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0018E018;
typedef struct SfdPtsm_x0018E018 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0018E018;
typedef struct SfdHdrAudio_x0018E018 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018E018;
typedef struct SfdHdrMux_x0018E018 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018E018;
typedef struct SfdHdrVideo_x0018E018 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018E018;
typedef struct SfdHdrInf_x0018E018 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018E018 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018E018 audio;
    SfdHdrVideo_x0018E018 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018E018;
typedef struct SfdMvInf_x0018E018 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0018E018;
typedef struct SfdPlyInf_x0018E018 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0018E018;
typedef void (*SfdErrFn_x0018E018)(void *obj, int code);
typedef struct SfdErrInf_x0018E018 {
    SfdErrFn_x0018E018 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018E018;
typedef int (*SfdExtClockFn_x0018E018)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0018E018)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0018E018 {
    SfdTimeFn_x0018E018 timefn[6];
    SfdIsSkipFn_x0018E018 isSkipFn;
    SfdTimeCode_x0018E018 tc;
    SfdTimeRec_x0018E018 state;
    SfdTimeRec_x0018E018 best;
    SfdTimeRec_x0018E018 tot;
    SfdTimeRec_x0018E018 cur;
    SfdTimeRec_x0018E018 latest;
    SfdTimeRec_x0018E018 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0018E018 tally;
    SfdSyncQueue_x0018E018 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0018E018 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0018E018 tst;
    SfdFieldEntry_x0018E018 fields[64];
    SfdPtsm_x0018E018 ptsm;
    char pad1468[36];
} SfdTim_x0018E018;
enum {
    SFD_COND_VIDEO_x0018E018 = 5,
    SFD_COND_AUDIO_x0018E018 = 6,
    SFD_COND_KEEPSUP_x0018E018 = 8,
    SFD_COND_SYNCMODE_x0018E018 = 15,
    SFD_COND_ETIME_x0018E018 = 20,
    SFD_COND_ETUNIT_x0018E018 = 21,
    SFD_COND_LNKSTM_x0018E018 = 49,
    SFD_COND_SUPPLY_END_x0018E018 = 56,
    SFD_COND_DECODE_END_x0018E018 = 57,
    SFD_COND_DEMUX_SPLIT_x0018E018 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0018E018 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0018E018 = 80,
    SFD_COND_SYSHD_FN_x0018E018 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0018E018 = 86,
    SFD_COND_NUM_x0018E018 = 100
};
typedef enum SfdBufFmt_x0018E018 {
    SFD_BUFFMT_0_x0018E018 = 0
} SfdBufFmt_x0018E018;
typedef enum SfdBufId_x0018E018 {
    SFD_BUF_NONE_x0018E018 = 8
} SfdBufId_x0018E018;
typedef struct SfdCrePrm_x0018E018 {
    struct SfdTrnConfig_x0018E018 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0018E018 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0018E018;
typedef struct SfdItem_x0018E018 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018E018;
typedef struct SfdRing_x0018E018 {
    SfdItem_x0018E018 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018E018;
typedef struct SfdBufInf_x0018E018 {
    char *data;
    struct SfdSj_x0018E018 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018E018;
typedef struct SfdBufCur_x0018E018 {
    char *pos;
    int len;
} SfdBufCur_x0018E018;
typedef struct SfdBufDlm_x0018E018 {
    char *pos;
    char *end;
} SfdBufDlm_x0018E018;
typedef struct SfdBufRing_x0018E018 {
    SfdBufInf_x0018E018 sup;
    SfdBufDlm_x0018E018 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018E018 ptsque;
} SfdBufRing_x0018E018;
typedef struct SfdBufAring_x0018E018 {
    SfdBufInf_x0018E018 sup;
    SfdBufCur_x0018E018 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018E018;
typedef struct SfdUoch_x0018E018 {
    struct SfdSj_x0018E018 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018E018;
typedef struct SfdBufEnt_x0018E018 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018E018 ring;
        SfdBufAring_x0018E018 aring;
        SfdBufInf_x0018E018 vfrm;
        SfdUoch_x0018E018 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018E018;
typedef int (*SfdTrnFn_x0018E018)();
typedef struct SfdTrnConfig_x0018E018 {
    SfdTrnFn_x0018E018 *fns[9];
} SfdTrnConfig_x0018E018;
typedef struct SfdMpsPrm_x0018E018 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0018E018 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0018E018;
typedef struct SfdAdxCfg_x0018E018 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0018E018;
typedef void (*SfdAdxStep_x0018E018)(struct SfdPly_x0018E018 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0018E018 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0018E018 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0018E018 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0018E018;
typedef struct SfdAoap_x0018E018 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0018E018 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0018E018 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0018E018 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0018E018 *h);
    void (*setSpeed)(struct SfdPly_x0018E018 *h, int speed);
} SfdAoap_x0018E018;
typedef struct SfainfOut_x0018E018 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0018E018;
typedef struct SfainfList_x0018E018 {
    int nout;
    SfainfOut_x0018E018 out[3];
} SfainfList_x0018E018;
typedef struct SfdTrnSlot_x0018E018 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0018E018 *mps;
        struct SfdMpv_x0018E018 *mpv;
        SfdAdxCtx_x0018E018 *adxt;
        SfdAoap_x0018E018 *aoap;
        SfainfList_x0018E018 *uo;
    } hn;
    SfdTrnFn_x0018E018 *fns;
    SfdBufId_x0018E018 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0018E018;
typedef struct SfdTsum_x0018E018 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0018E018;
typedef struct SfdTmrInf_x0018E018 {
    SfdTsum_x0018E018 tsum[6];
} SfdTmrInf_x0018E018;
struct SfdSj_x0018E018;
typedef struct M2vErrInf_x0018E018 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018E018;
typedef struct Mpeg2Ext_x0018E018 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018E018;
typedef enum M2vFrameRate_x0018E018 {
    M2V_FRAME_RATE_FORBIDDEN_x0018E018 = 0
} M2vFrameRate_x0018E018;
typedef enum M2vPicType_x0018E018 {
    M2V_PICTYPE_I_x0018E018 = 1,
    M2V_PICTYPE_P_x0018E018 = 2,
    M2V_PICTYPE_B_x0018E018 = 3,
    M2V_PICTYPE_D_x0018E018 = 4
} M2vPicType_x0018E018;
typedef enum M2vPicStruct_x0018E018 {
    M2V_PICSTRUCT_TOP_FIELD_x0018E018 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018E018 = 2,
    M2V_PICSTRUCT_FRAME_x0018E018 = 3
} M2vPicStruct_x0018E018;
typedef enum M2vPicAtrF64_x0018E018 {
    M2V_PICATR_F64_0_x0018E018 = 0
} M2vPicAtrF64_x0018E018;
typedef struct M2vPicAtr_x0018E018 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018E018 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018E018 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018E018 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018E018 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018E018;
typedef void (*M2vUsrDatFn_x0018E018)(void *obj, int level);
typedef struct M2vUsrSj_x0018E018 {
    struct SfdSj_x0018E018 *sj;
    M2vUsrDatFn_x0018E018 fn;
    void *obj;
} M2vUsrSj_x0018E018;
typedef struct M2vPicUsr_x0018E018 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018E018;
typedef void (*M2vCondFn_x0018E018)();
typedef struct M2vObj_x0018E018 {
    int stat;
    M2vErrInf_x0018E018 err;
    M2vCondFn_x0018E018 cond[16];
    M2vPicAtr_x0018E018 picatr;
    char pad216[64];
    M2vUsrSj_x0018E018 usrsj[4];
    M2vPicUsr_x0018E018 picusr;
    char pad340[12];
    Mpeg2Ext_x0018E018 ext;
    char pad1656[8];
} M2vObj_x0018E018;
extern void M2V_SetErrFunc_x0018E018(M2vObj_x0018E018 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0018E018 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0018E018;
typedef struct sceMpeg_x0018E018 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0018E018 *sys;
} sceMpeg_x0018E018;
typedef enum {
    sceMpegCbError_x0018E018,
    sceMpegCbNodata_x0018E018,
    sceMpegCbStopDMA_x0018E018,
    sceMpegCbRestartDMA_x0018E018,
    sceMpegCbBackground_x0018E018,
    sceMpegCbTimeStamp_x0018E018,
    sceMpegCbStr_x0018E018,
    sceMpegCbNum_x0018E018
} sceMpegCbType_x0018E018;
typedef struct {
    sceMpegCbType_x0018E018 type;
    char *errMessage;
} sceMpegCbDataError_x0018E018;
typedef struct {
    sceMpegCbType_x0018E018 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0018E018;
typedef struct {
    sceMpegCbType_x0018E018 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0018E018;
typedef union {
    sceMpegCbType_x0018E018 type;
    sceMpegCbDataError_x0018E018 error;
    sceMpegCbDataTimeStamp_x0018E018 ts;
    sceMpegCbDataStr_x0018E018 str;
} sceMpegCbData_x0018E018;
typedef int (*sceMpegCallback_x0018E018)(sceMpeg_x0018E018 *mp, sceMpegCbData_x0018E018 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0018E018 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0018E018;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0018E018;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0018E018;
typedef struct {
    _sceMpegPicture_x0018E018 *ref_image;
    _sceMpegPicture_x0018E018 *prev_image;
    _sceMpegPicture_x0018E018 *decode;
    _sceMpegPicture_x0018E018 *image;
} _sceMpegPictureSlot_x0018E018;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0018E018;
typedef void (*_sceMpegMcKernel_x0018E018)(_sceMpegMcFetch_x0018E018 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0018E018 luma_kernel[4];
    _sceMpegMcKernel_x0018E018 chroma_kernel[4];
    _sceMpegMcFetch_x0018E018 luma[4];
    _sceMpegMcFetch_x0018E018 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0018E018;
typedef struct _sceMpegDecoder_x0018E018 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0018E018 callbacks[sceMpegCbNum_x0018E018];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0018E018 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0018E018 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0018E018 slots[3];
    _sceMpegPicture_x0018E018 pictures[9];
    _sceMpegSprBuffer_x0018E018 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0018E018 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0018E018;
typedef struct SfdPlanes_x0018E018 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018E018;
typedef struct SfdUserData_x0018E018 {
    char data[512];
    int size;
} SfdUserData_x0018E018;
typedef struct SfdRecVideo_x0018E018 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0018E018 stamp;
    SfdUserData_x0018E018 user;
} SfdRecVideo_x0018E018;
typedef struct SfdSlot_x0018E018 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0018E018 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018E018 *blob;
    M2vPicAtr_x0018E018 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0018E018;
typedef struct SfdBufPool_x0018E018 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0018E018 slot[18];
} SfdBufPool_x0018E018;
typedef struct SfdMpvCond_x0018E018 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018E018;
typedef struct SfdMpvWorkBufs_x0018E018 {
    int w[2];
} SfdMpvWorkBufs_x0018E018;
typedef struct SfdMpvFrameBufs_x0018E018 {
    int w[16];
} SfdMpvFrameBufs_x0018E018;
typedef struct SfdIpuEntry_x0018E018 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0018E018;
typedef struct SfdDmaTag_x0018E018 {
    long long tag;
    long long pad;
} SfdDmaTag_x0018E018;
typedef struct SfdIpuStream_x0018E018 {
    void *base;
    SfdDmaTag_x0018E018 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0018E018 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0018E018;
typedef struct SfdIpuCtl_x0018E018 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0018E018 mpeg;
    SfdIpuStream_x0018E018 stream;
    sceMpegCbDataError_x0018E018 error;
} SfdIpuCtl_x0018E018;
typedef struct SfdPtsComp_x0018E018 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0018E018 ptsent;
} SfdPtsComp_x0018E018;
typedef struct SfdMpv_x0018E018 {
    void *handle;
    SfdMpvCond_x0018E018 cond;
    SfdMpvWorkBufs_x0018E018 work;
    SfdMpvFrameBufs_x0018E018 bufs;
    SfdSlot_x0018E018 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0018E018 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0018E018 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0018E018 planes[2];
    SfdSlot_x0018E018 *first;
    SfdSlot_x0018E018 *second;
    SfdSlot_x0018E018 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0018E018 slots[16];
    SfdBufPool_x0018E018 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0018E018 ipu;
} SfdMpv_x0018E018;
typedef enum SfdPicType_x0018E018 {
    SFD_PICTYPE_I_x0018E018 = 1,
    SFD_PICTYPE_P_x0018E018 = 2,
    SFD_PICTYPE_B_x0018E018 = 3
} SfdPicType_x0018E018;
typedef enum SfdFrmInfF60_x0018E018 {
    SFD_FRMINF_F60_0_x0018E018 = 0
} SfdFrmInfF60_x0018E018;
typedef struct SfdFrameDetail_x0018E018 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0018E018;
typedef struct SfdFrameInfo_x0018E018 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0018E018 picType;
    int time;
    int unit;
    SfdBufFmt_x0018E018 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018E018 *picUsr;
    SfdFrmInfF60_x0018E018 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0018E018 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0018E018;
typedef struct SfdVfrm_x0018E018 {
    int used;
    int f4;
    SfdFrameInfo_x0018E018 inf;
} SfdVfrm_x0018E018;
typedef struct SfdPly_x0018E018 SfdPly_x0018E018;
typedef struct SfdRec_x0018E018 SfdRec_x0018E018;
typedef struct SfdRecSub_x0018E018 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0018E018;
typedef struct SfdRecSlot_x0018E018 {
    SfdRec_x0018E018 *rec;
    SfdRecSub_x0018E018 sub;
} SfdRecSlot_x0018E018;
typedef struct SfdSysHd_x0018E018 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0018E018;
typedef struct SfdRecSys_x0018E018 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0018E018 syshd;
} SfdRecSys_x0018E018;
typedef struct SfdRecAudio_x0018E018 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0018E018;
struct SfdRec_x0018E018 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0018E018 hdrInf;
    SfdRecSys_x0018E018 sys;
    char pad2616[152];
    SfdRecVideo_x0018E018 video;
    SfdRecAudio_x0018E018 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0018E018 {
    SfdCrePrm_x0018E018 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0018E018 hdr;
    SfdMvInf_x0018E018 mvInf;
    char pad2380[4];
    SfdPlyInf_x0018E018 plyInf;
    SfdErrInf_x0018E018 err;
    int cond[SFD_COND_NUM_x0018E018];
    int cond2[SFD_COND_NUM_x0018E018];
    char pad3364[4];
    SfdTim_x0018E018 tim;
    SfdBufEnt_x0018E018 buf[8];
    SfdVfrm_x0018E018 vfrm[16];
    SfdTrnSlot_x0018E018 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0018E018 mps;
    char pad8944[176];
    SfdMpv_x0018E018 mpv;
    SfdAdxCtx_x0018E018 adxt;
    char pad13680[100];
    SfdAoap_x0018E018 aoap;
    char pad13804[4];
    SfainfList_x0018E018 uo;
    char pad13860[4];
    SfdRecSlot_x0018E018 see;
    SfdTmrInf_x0018E018 tmr;
};
SfdBufInf_x0018E018 *sfmps_GetSupSj_x0018E018(SfdPly_x0018E018 *hn) __asm__("func_0018E078");
SfdBufInf_x0018E018 *sfmps_GetSupSj_x0018E018(SfdPly_x0018E018 *hn) __asm__("func_0018E078");
int func_0018E018_x0018E018(SfdPly_x0018E018 *hn, unsigned char *pos) __asm__("func_0018E018");
/* sfmps_IsEndOfRingBuf: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmps.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018E018_x0018E018(SfdPly_x0018E018 *hn, unsigned char *pos) {
    SfdBufInf_x0018E018 *in = sfmps_GetSupSj_x0018E018(hn);
    if (in->data == 0 && (in->xsize != 0 || in->p0 != 0)) {
        return 0;
    }
    return pos == (unsigned char *)in->buf + in->size;
}
u8 *func_0018E078(u8 *arg0) {
    return arg0 + (*(s32 *)((u8 *)arg0 + 0x1C34) * 0x74) + 0x1290;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E0A0);
extern int sfmps_CopySj_x0018E218(int a0, int a1, int a2, int a3) __asm__("func_0018E7D8");
int func_0018E218_x0018E218(int a0, int (*a1)(int, int), int a2, int a3, int a4, int a5) __asm__("func_0018E218");
/* func_0034EB28: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00323a00.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_0018E218_x0018E218(int a0, int (*a1)(int, int), int a2, int a3, int a4, int a5) {
    int r;
    r = sfmps_CopySj_x0018E218(a0, a4, a5, a3);
    if (r == 1) {
        if (a1) {
            a1(a2, a3);
        }
    }
    return r;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E288);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E400);
typedef struct SfdSj_x0018E5D8 SfdSj_x0018E5D8;
typedef struct SfdSjChunk_x0018E5D8 {
    char *data;
    int len;
} SfdSjChunk_x0018E5D8;
typedef struct SfdSjVtbl_x0018E5D8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018E5D8 *sj);
    int (*getUuid)(SfdSj_x0018E5D8 *sj);
    void (*reset)(SfdSj_x0018E5D8 *sj);
    void (*getChunk)(SfdSj_x0018E5D8 *sj, int id, int n, SfdSjChunk_x0018E5D8 *ck);
    void (*ungetChunk)(SfdSj_x0018E5D8 *sj, int id, SfdSjChunk_x0018E5D8 *ck);
    void (*putChunk)(SfdSj_x0018E5D8 *sj, int id, SfdSjChunk_x0018E5D8 *ck);
    int (*getNumData)(SfdSj_x0018E5D8 *sj, int id);
} SfdSjVtbl_x0018E5D8;
struct SfdSj_x0018E5D8 {
    SfdSjVtbl_x0018E5D8 *vtbl;
};
struct SfdSj_x0018E5D8;
struct SfdRecSlot_x0018E5D8;
struct SfdRec_x0018E5D8;
struct SfdMpvCond_x0018E5D8;
struct SfdPlanes_x0018E5D8;
struct SfdFrameInfo_x0018E5D8;
struct SfdPly_x0018E5D8;
typedef int (*SfdTimeFn_x0018E5D8)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0018E5D8 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0018E5D8;
typedef struct SfdTimeRec_x0018E5D8 {
    int valid;
    SfdTimeCode_x0018E5D8 tc;
    int time;
    int unit;
} SfdTimeRec_x0018E5D8;
typedef struct SfdTst_x0018E5D8 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0018E5D8;
typedef struct SfdSyncTally_x0018E5D8 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0018E5D8;
typedef struct SfdSyncQueue_x0018E5D8 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0018E5D8;
typedef struct SfdFieldEntry_x0018E5D8 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0018E5D8;
typedef struct SfdPtsm_x0018E5D8 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0018E5D8;
typedef struct SfdHdrAudio_x0018E5D8 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018E5D8;
typedef struct SfdHdrMux_x0018E5D8 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018E5D8;
typedef struct SfdHdrVideo_x0018E5D8 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018E5D8;
typedef struct SfdHdrInf_x0018E5D8 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018E5D8 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018E5D8 audio;
    SfdHdrVideo_x0018E5D8 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018E5D8;
typedef struct SfdMvInf_x0018E5D8 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0018E5D8;
typedef struct SfdPlyInf_x0018E5D8 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0018E5D8;
typedef void (*SfdErrFn_x0018E5D8)(void *obj, int code);
typedef struct SfdErrInf_x0018E5D8 {
    SfdErrFn_x0018E5D8 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018E5D8;
typedef int (*SfdExtClockFn_x0018E5D8)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0018E5D8)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0018E5D8 {
    SfdTimeFn_x0018E5D8 timefn[6];
    SfdIsSkipFn_x0018E5D8 isSkipFn;
    SfdTimeCode_x0018E5D8 tc;
    SfdTimeRec_x0018E5D8 state;
    SfdTimeRec_x0018E5D8 best;
    SfdTimeRec_x0018E5D8 tot;
    SfdTimeRec_x0018E5D8 cur;
    SfdTimeRec_x0018E5D8 latest;
    SfdTimeRec_x0018E5D8 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0018E5D8 tally;
    SfdSyncQueue_x0018E5D8 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0018E5D8 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0018E5D8 tst;
    SfdFieldEntry_x0018E5D8 fields[64];
    SfdPtsm_x0018E5D8 ptsm;
    char pad1468[36];
} SfdTim_x0018E5D8;
enum {
    SFD_COND_VIDEO_x0018E5D8 = 5,
    SFD_COND_AUDIO_x0018E5D8 = 6,
    SFD_COND_KEEPSUP_x0018E5D8 = 8,
    SFD_COND_SYNCMODE_x0018E5D8 = 15,
    SFD_COND_ETIME_x0018E5D8 = 20,
    SFD_COND_ETUNIT_x0018E5D8 = 21,
    SFD_COND_LNKSTM_x0018E5D8 = 49,
    SFD_COND_SUPPLY_END_x0018E5D8 = 56,
    SFD_COND_DECODE_END_x0018E5D8 = 57,
    SFD_COND_DEMUX_SPLIT_x0018E5D8 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0018E5D8 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0018E5D8 = 80,
    SFD_COND_SYSHD_FN_x0018E5D8 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0018E5D8 = 86,
    SFD_COND_NUM_x0018E5D8 = 100
};
typedef enum SfdBufFmt_x0018E5D8 {
    SFD_BUFFMT_0_x0018E5D8 = 0
} SfdBufFmt_x0018E5D8;
typedef enum SfdBufId_x0018E5D8 {
    SFD_BUF_NONE_x0018E5D8 = 8
} SfdBufId_x0018E5D8;
typedef struct SfdCrePrm_x0018E5D8 {
    struct SfdTrnConfig_x0018E5D8 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0018E5D8 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0018E5D8;
typedef struct SfdItem_x0018E5D8 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018E5D8;
typedef struct SfdRing_x0018E5D8 {
    SfdItem_x0018E5D8 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018E5D8;
typedef struct SfdBufInf_x0018E5D8 {
    char *data;
    struct SfdSj_x0018E5D8 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018E5D8;
typedef struct SfdBufCur_x0018E5D8 {
    char *pos;
    int len;
} SfdBufCur_x0018E5D8;
typedef struct SfdBufDlm_x0018E5D8 {
    char *pos;
    char *end;
} SfdBufDlm_x0018E5D8;
typedef struct SfdBufRing_x0018E5D8 {
    SfdBufInf_x0018E5D8 sup;
    SfdBufDlm_x0018E5D8 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018E5D8 ptsque;
} SfdBufRing_x0018E5D8;
typedef struct SfdBufAring_x0018E5D8 {
    SfdBufInf_x0018E5D8 sup;
    SfdBufCur_x0018E5D8 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018E5D8;
typedef struct SfdUoch_x0018E5D8 {
    struct SfdSj_x0018E5D8 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018E5D8;
typedef struct SfdBufEnt_x0018E5D8 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018E5D8 ring;
        SfdBufAring_x0018E5D8 aring;
        SfdBufInf_x0018E5D8 vfrm;
        SfdUoch_x0018E5D8 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018E5D8;
typedef int (*SfdTrnFn_x0018E5D8)();
typedef struct SfdTrnConfig_x0018E5D8 {
    SfdTrnFn_x0018E5D8 *fns[9];
} SfdTrnConfig_x0018E5D8;
typedef struct SfdMpsPrm_x0018E5D8 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0018E5D8 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0018E5D8;
typedef struct SfdAdxCfg_x0018E5D8 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0018E5D8;
typedef void (*SfdAdxStep_x0018E5D8)(struct SfdPly_x0018E5D8 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0018E5D8 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0018E5D8 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0018E5D8 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0018E5D8;
typedef struct SfdAoap_x0018E5D8 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0018E5D8 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0018E5D8 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0018E5D8 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0018E5D8 *h);
    void (*setSpeed)(struct SfdPly_x0018E5D8 *h, int speed);
} SfdAoap_x0018E5D8;
typedef struct SfainfOut_x0018E5D8 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0018E5D8;
typedef struct SfainfList_x0018E5D8 {
    int nout;
    SfainfOut_x0018E5D8 out[3];
} SfainfList_x0018E5D8;
typedef struct SfdTrnSlot_x0018E5D8 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0018E5D8 *mps;
        struct SfdMpv_x0018E5D8 *mpv;
        SfdAdxCtx_x0018E5D8 *adxt;
        SfdAoap_x0018E5D8 *aoap;
        SfainfList_x0018E5D8 *uo;
    } hn;
    SfdTrnFn_x0018E5D8 *fns;
    SfdBufId_x0018E5D8 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0018E5D8;
typedef struct SfdTsum_x0018E5D8 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0018E5D8;
typedef struct SfdTmrInf_x0018E5D8 {
    SfdTsum_x0018E5D8 tsum[6];
} SfdTmrInf_x0018E5D8;
int SFSET_GetCond_x0018E5D8(void *sfd, int index) __asm__("func_001999E0");
struct SfdSj_x0018E5D8;
typedef struct M2vErrInf_x0018E5D8 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018E5D8;
typedef struct Mpeg2Ext_x0018E5D8 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018E5D8;
typedef enum M2vFrameRate_x0018E5D8 {
    M2V_FRAME_RATE_FORBIDDEN_x0018E5D8 = 0
} M2vFrameRate_x0018E5D8;
typedef enum M2vPicType_x0018E5D8 {
    M2V_PICTYPE_I_x0018E5D8 = 1,
    M2V_PICTYPE_P_x0018E5D8 = 2,
    M2V_PICTYPE_B_x0018E5D8 = 3,
    M2V_PICTYPE_D_x0018E5D8 = 4
} M2vPicType_x0018E5D8;
typedef enum M2vPicStruct_x0018E5D8 {
    M2V_PICSTRUCT_TOP_FIELD_x0018E5D8 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018E5D8 = 2,
    M2V_PICSTRUCT_FRAME_x0018E5D8 = 3
} M2vPicStruct_x0018E5D8;
typedef enum M2vPicAtrF64_x0018E5D8 {
    M2V_PICATR_F64_0_x0018E5D8 = 0
} M2vPicAtrF64_x0018E5D8;
typedef struct M2vPicAtr_x0018E5D8 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018E5D8 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018E5D8 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018E5D8 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018E5D8 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018E5D8;
typedef void (*M2vUsrDatFn_x0018E5D8)(void *obj, int level);
typedef struct M2vUsrSj_x0018E5D8 {
    struct SfdSj_x0018E5D8 *sj;
    M2vUsrDatFn_x0018E5D8 fn;
    void *obj;
} M2vUsrSj_x0018E5D8;
typedef struct M2vPicUsr_x0018E5D8 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018E5D8;
typedef void (*M2vCondFn_x0018E5D8)();
typedef struct M2vObj_x0018E5D8 {
    int stat;
    M2vErrInf_x0018E5D8 err;
    M2vCondFn_x0018E5D8 cond[16];
    M2vPicAtr_x0018E5D8 picatr;
    char pad216[64];
    M2vUsrSj_x0018E5D8 usrsj[4];
    M2vPicUsr_x0018E5D8 picusr;
    char pad340[12];
    Mpeg2Ext_x0018E5D8 ext;
    char pad1656[8];
} M2vObj_x0018E5D8;
extern void M2V_SetErrFunc_x0018E5D8(M2vObj_x0018E5D8 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0018E5D8 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0018E5D8;
typedef struct sceMpeg_x0018E5D8 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0018E5D8 *sys;
} sceMpeg_x0018E5D8;
typedef enum {
    sceMpegCbError_x0018E5D8,
    sceMpegCbNodata_x0018E5D8,
    sceMpegCbStopDMA_x0018E5D8,
    sceMpegCbRestartDMA_x0018E5D8,
    sceMpegCbBackground_x0018E5D8,
    sceMpegCbTimeStamp_x0018E5D8,
    sceMpegCbStr_x0018E5D8,
    sceMpegCbNum_x0018E5D8
} sceMpegCbType_x0018E5D8;
typedef struct {
    sceMpegCbType_x0018E5D8 type;
    char *errMessage;
} sceMpegCbDataError_x0018E5D8;
typedef struct {
    sceMpegCbType_x0018E5D8 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0018E5D8;
typedef struct {
    sceMpegCbType_x0018E5D8 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0018E5D8;
typedef union {
    sceMpegCbType_x0018E5D8 type;
    sceMpegCbDataError_x0018E5D8 error;
    sceMpegCbDataTimeStamp_x0018E5D8 ts;
    sceMpegCbDataStr_x0018E5D8 str;
} sceMpegCbData_x0018E5D8;
typedef int (*sceMpegCallback_x0018E5D8)(sceMpeg_x0018E5D8 *mp, sceMpegCbData_x0018E5D8 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0018E5D8 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0018E5D8;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0018E5D8;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0018E5D8;
typedef struct {
    _sceMpegPicture_x0018E5D8 *ref_image;
    _sceMpegPicture_x0018E5D8 *prev_image;
    _sceMpegPicture_x0018E5D8 *decode;
    _sceMpegPicture_x0018E5D8 *image;
} _sceMpegPictureSlot_x0018E5D8;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0018E5D8;
typedef void (*_sceMpegMcKernel_x0018E5D8)(_sceMpegMcFetch_x0018E5D8 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0018E5D8 luma_kernel[4];
    _sceMpegMcKernel_x0018E5D8 chroma_kernel[4];
    _sceMpegMcFetch_x0018E5D8 luma[4];
    _sceMpegMcFetch_x0018E5D8 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0018E5D8;
typedef struct _sceMpegDecoder_x0018E5D8 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0018E5D8 callbacks[sceMpegCbNum_x0018E5D8];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0018E5D8 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0018E5D8 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0018E5D8 slots[3];
    _sceMpegPicture_x0018E5D8 pictures[9];
    _sceMpegSprBuffer_x0018E5D8 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0018E5D8 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0018E5D8;
typedef struct SfdPlanes_x0018E5D8 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018E5D8;
typedef struct SfdUserData_x0018E5D8 {
    char data[512];
    int size;
} SfdUserData_x0018E5D8;
typedef struct SfdRecVideo_x0018E5D8 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0018E5D8 stamp;
    SfdUserData_x0018E5D8 user;
} SfdRecVideo_x0018E5D8;
typedef struct SfdSlot_x0018E5D8 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0018E5D8 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018E5D8 *blob;
    M2vPicAtr_x0018E5D8 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0018E5D8;
typedef struct SfdBufPool_x0018E5D8 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0018E5D8 slot[18];
} SfdBufPool_x0018E5D8;
typedef struct SfdMpvCond_x0018E5D8 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018E5D8;
typedef struct SfdMpvWorkBufs_x0018E5D8 {
    int w[2];
} SfdMpvWorkBufs_x0018E5D8;
typedef struct SfdMpvFrameBufs_x0018E5D8 {
    int w[16];
} SfdMpvFrameBufs_x0018E5D8;
typedef struct SfdIpuEntry_x0018E5D8 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0018E5D8;
typedef struct SfdDmaTag_x0018E5D8 {
    long long tag;
    long long pad;
} SfdDmaTag_x0018E5D8;
typedef struct SfdIpuStream_x0018E5D8 {
    void *base;
    SfdDmaTag_x0018E5D8 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0018E5D8 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0018E5D8;
typedef struct SfdIpuCtl_x0018E5D8 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0018E5D8 mpeg;
    SfdIpuStream_x0018E5D8 stream;
    sceMpegCbDataError_x0018E5D8 error;
} SfdIpuCtl_x0018E5D8;
typedef struct SfdPtsComp_x0018E5D8 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0018E5D8 ptsent;
} SfdPtsComp_x0018E5D8;
typedef struct SfdMpv_x0018E5D8 {
    void *handle;
    SfdMpvCond_x0018E5D8 cond;
    SfdMpvWorkBufs_x0018E5D8 work;
    SfdMpvFrameBufs_x0018E5D8 bufs;
    SfdSlot_x0018E5D8 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0018E5D8 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0018E5D8 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0018E5D8 planes[2];
    SfdSlot_x0018E5D8 *first;
    SfdSlot_x0018E5D8 *second;
    SfdSlot_x0018E5D8 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0018E5D8 slots[16];
    SfdBufPool_x0018E5D8 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0018E5D8 ipu;
} SfdMpv_x0018E5D8;
typedef enum SfdPicType_x0018E5D8 {
    SFD_PICTYPE_I_x0018E5D8 = 1,
    SFD_PICTYPE_P_x0018E5D8 = 2,
    SFD_PICTYPE_B_x0018E5D8 = 3
} SfdPicType_x0018E5D8;
typedef enum SfdFrmInfF60_x0018E5D8 {
    SFD_FRMINF_F60_0_x0018E5D8 = 0
} SfdFrmInfF60_x0018E5D8;
typedef struct SfdFrameDetail_x0018E5D8 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0018E5D8;
typedef struct SfdFrameInfo_x0018E5D8 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0018E5D8 picType;
    int time;
    int unit;
    SfdBufFmt_x0018E5D8 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018E5D8 *picUsr;
    SfdFrmInfF60_x0018E5D8 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0018E5D8 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0018E5D8;
typedef struct SfdVfrm_x0018E5D8 {
    int used;
    int f4;
    SfdFrameInfo_x0018E5D8 inf;
} SfdVfrm_x0018E5D8;
typedef struct SfdPly_x0018E5D8 SfdPly_x0018E5D8;
typedef struct SfdRec_x0018E5D8 SfdRec_x0018E5D8;
typedef struct SfdRecSub_x0018E5D8 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0018E5D8;
typedef struct SfdRecSlot_x0018E5D8 {
    SfdRec_x0018E5D8 *rec;
    SfdRecSub_x0018E5D8 sub;
} SfdRecSlot_x0018E5D8;
typedef struct SfdSysHd_x0018E5D8 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0018E5D8;
typedef struct SfdRecSys_x0018E5D8 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0018E5D8 syshd;
} SfdRecSys_x0018E5D8;
typedef struct SfdRecAudio_x0018E5D8 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0018E5D8;
struct SfdRec_x0018E5D8 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0018E5D8 hdrInf;
    SfdRecSys_x0018E5D8 sys;
    char pad2616[152];
    SfdRecVideo_x0018E5D8 video;
    SfdRecAudio_x0018E5D8 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0018E5D8 {
    SfdCrePrm_x0018E5D8 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0018E5D8 hdr;
    SfdMvInf_x0018E5D8 mvInf;
    char pad2380[4];
    SfdPlyInf_x0018E5D8 plyInf;
    SfdErrInf_x0018E5D8 err;
    int cond[SFD_COND_NUM_x0018E5D8];
    int cond2[SFD_COND_NUM_x0018E5D8];
    char pad3364[4];
    SfdTim_x0018E5D8 tim;
    SfdBufEnt_x0018E5D8 buf[8];
    SfdVfrm_x0018E5D8 vfrm[16];
    SfdTrnSlot_x0018E5D8 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0018E5D8 mps;
    char pad8944[176];
    SfdMpv_x0018E5D8 mpv;
    SfdAdxCtx_x0018E5D8 adxt;
    char pad13680[100];
    SfdAoap_x0018E5D8 aoap;
    char pad13804[4];
    SfainfList_x0018E5D8 uo;
    char pad13860[4];
    SfdRecSlot_x0018E5D8 see;
    SfdTmrInf_x0018E5D8 tmr;
};
void sfmps_GetStmNum_x0018E5D8(SfdPly_x0018E5D8 *hn, int *audio, int *video) __asm__("func_0018F008");
void sfmps_GetStmNum_x0018E5D8(SfdPly_x0018E5D8 *hn, int *audio, int *video) __asm__("func_0018F008");
int func_0018E5D8_x0018E5D8(SfdPly_x0018E5D8 *hn, int dflt) __asm__("func_0018E5D8");
/* sfmps_AutoVchPlay: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmps.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018E5D8_x0018E5D8(SfdPly_x0018E5D8 *hn, int dflt) {
    int mode = SFSET_GetCond_x0018E5D8(hn, SFD_COND_DEMUX_SPLIT_x0018E5D8);
    int audio;
    int video;
    if (mode == 1) {
        return dflt;
    }
    if (mode < 2) {
        return dflt;
    }
    if (mode == 2) {
        sfmps_GetStmNum_x0018E5D8(hn, &audio, &video);
        return video >= 2 ? mode : dflt;
    }
    return dflt;
}
typedef struct SfdSj_x0018E660 SfdSj_x0018E660;
typedef struct SfdSjChunk_x0018E660 {
    char *data;
    int len;
} SfdSjChunk_x0018E660;
typedef struct SfdSjVtbl_x0018E660 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018E660 *sj);
    int (*getUuid)(SfdSj_x0018E660 *sj);
    void (*reset)(SfdSj_x0018E660 *sj);
    void (*getChunk)(SfdSj_x0018E660 *sj, int id, int n, SfdSjChunk_x0018E660 *ck);
    void (*ungetChunk)(SfdSj_x0018E660 *sj, int id, SfdSjChunk_x0018E660 *ck);
    void (*putChunk)(SfdSj_x0018E660 *sj, int id, SfdSjChunk_x0018E660 *ck);
    int (*getNumData)(SfdSj_x0018E660 *sj, int id);
} SfdSjVtbl_x0018E660;
struct SfdSj_x0018E660 {
    SfdSjVtbl_x0018E660 *vtbl;
};
struct SfdSj_x0018E660;
struct SfdRecSlot_x0018E660;
struct SfdRec_x0018E660;
struct SfdMpvCond_x0018E660;
struct SfdPlanes_x0018E660;
struct SfdFrameInfo_x0018E660;
struct SfdPly_x0018E660;
typedef int (*SfdTimeFn_x0018E660)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0018E660 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0018E660;
typedef struct SfdTimeRec_x0018E660 {
    int valid;
    SfdTimeCode_x0018E660 tc;
    int time;
    int unit;
} SfdTimeRec_x0018E660;
typedef struct SfdTst_x0018E660 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0018E660;
typedef struct SfdSyncTally_x0018E660 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0018E660;
typedef struct SfdSyncQueue_x0018E660 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0018E660;
typedef struct SfdFieldEntry_x0018E660 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0018E660;
typedef struct SfdPtsm_x0018E660 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0018E660;
typedef struct SfdHdrAudio_x0018E660 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018E660;
typedef struct SfdHdrMux_x0018E660 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018E660;
typedef struct SfdHdrVideo_x0018E660 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018E660;
typedef struct SfdHdrInf_x0018E660 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018E660 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018E660 audio;
    SfdHdrVideo_x0018E660 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018E660;
typedef struct SfdMvInf_x0018E660 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0018E660;
typedef struct SfdPlyInf_x0018E660 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0018E660;
typedef void (*SfdErrFn_x0018E660)(void *obj, int code);
typedef struct SfdErrInf_x0018E660 {
    SfdErrFn_x0018E660 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018E660;
typedef int (*SfdExtClockFn_x0018E660)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0018E660)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0018E660 {
    SfdTimeFn_x0018E660 timefn[6];
    SfdIsSkipFn_x0018E660 isSkipFn;
    SfdTimeCode_x0018E660 tc;
    SfdTimeRec_x0018E660 state;
    SfdTimeRec_x0018E660 best;
    SfdTimeRec_x0018E660 tot;
    SfdTimeRec_x0018E660 cur;
    SfdTimeRec_x0018E660 latest;
    SfdTimeRec_x0018E660 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0018E660 tally;
    SfdSyncQueue_x0018E660 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0018E660 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0018E660 tst;
    SfdFieldEntry_x0018E660 fields[64];
    SfdPtsm_x0018E660 ptsm;
    char pad1468[36];
} SfdTim_x0018E660;
enum {
    SFD_COND_VIDEO_x0018E660 = 5,
    SFD_COND_AUDIO_x0018E660 = 6,
    SFD_COND_KEEPSUP_x0018E660 = 8,
    SFD_COND_SYNCMODE_x0018E660 = 15,
    SFD_COND_ETIME_x0018E660 = 20,
    SFD_COND_ETUNIT_x0018E660 = 21,
    SFD_COND_LNKSTM_x0018E660 = 49,
    SFD_COND_SUPPLY_END_x0018E660 = 56,
    SFD_COND_DECODE_END_x0018E660 = 57,
    SFD_COND_DEMUX_SPLIT_x0018E660 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0018E660 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0018E660 = 80,
    SFD_COND_SYSHD_FN_x0018E660 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0018E660 = 86,
    SFD_COND_NUM_x0018E660 = 100
};
typedef enum SfdBufFmt_x0018E660 {
    SFD_BUFFMT_0_x0018E660 = 0
} SfdBufFmt_x0018E660;
typedef enum SfdBufId_x0018E660 {
    SFD_BUF_NONE_x0018E660 = 8
} SfdBufId_x0018E660;
typedef struct SfdCrePrm_x0018E660 {
    struct SfdTrnConfig_x0018E660 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0018E660 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0018E660;
typedef struct SfdItem_x0018E660 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018E660;
typedef struct SfdRing_x0018E660 {
    SfdItem_x0018E660 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018E660;
typedef struct SfdBufInf_x0018E660 {
    char *data;
    struct SfdSj_x0018E660 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018E660;
typedef struct SfdBufCur_x0018E660 {
    char *pos;
    int len;
} SfdBufCur_x0018E660;
typedef struct SfdBufDlm_x0018E660 {
    char *pos;
    char *end;
} SfdBufDlm_x0018E660;
typedef struct SfdBufRing_x0018E660 {
    SfdBufInf_x0018E660 sup;
    SfdBufDlm_x0018E660 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018E660 ptsque;
} SfdBufRing_x0018E660;
typedef struct SfdBufAring_x0018E660 {
    SfdBufInf_x0018E660 sup;
    SfdBufCur_x0018E660 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018E660;
typedef struct SfdUoch_x0018E660 {
    struct SfdSj_x0018E660 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018E660;
typedef struct SfdBufEnt_x0018E660 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018E660 ring;
        SfdBufAring_x0018E660 aring;
        SfdBufInf_x0018E660 vfrm;
        SfdUoch_x0018E660 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018E660;
typedef int (*SfdTrnFn_x0018E660)();
typedef struct SfdTrnConfig_x0018E660 {
    SfdTrnFn_x0018E660 *fns[9];
} SfdTrnConfig_x0018E660;
typedef struct SfdMpsPrm_x0018E660 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0018E660 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0018E660;
typedef struct SfdAdxCfg_x0018E660 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0018E660;
typedef void (*SfdAdxStep_x0018E660)(struct SfdPly_x0018E660 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0018E660 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0018E660 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0018E660 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0018E660;
typedef struct SfdAoap_x0018E660 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0018E660 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0018E660 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0018E660 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0018E660 *h);
    void (*setSpeed)(struct SfdPly_x0018E660 *h, int speed);
} SfdAoap_x0018E660;
typedef struct SfainfOut_x0018E660 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0018E660;
typedef struct SfainfList_x0018E660 {
    int nout;
    SfainfOut_x0018E660 out[3];
} SfainfList_x0018E660;
typedef struct SfdTrnSlot_x0018E660 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0018E660 *mps;
        struct SfdMpv_x0018E660 *mpv;
        SfdAdxCtx_x0018E660 *adxt;
        SfdAoap_x0018E660 *aoap;
        SfainfList_x0018E660 *uo;
    } hn;
    SfdTrnFn_x0018E660 *fns;
    SfdBufId_x0018E660 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0018E660;
typedef struct SfdTsum_x0018E660 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0018E660;
typedef struct SfdTmrInf_x0018E660 {
    SfdTsum_x0018E660 tsum[6];
} SfdTmrInf_x0018E660;
int SFHDS_SetHdr_x0018E660(struct SfdPly_x0018E660 *hn, int type, unsigned char *p, int size, int *set) __asm__("func_0018C978");
struct SfdSj_x0018E660;
typedef struct M2vErrInf_x0018E660 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018E660;
typedef struct Mpeg2Ext_x0018E660 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018E660;
typedef enum M2vFrameRate_x0018E660 {
    M2V_FRAME_RATE_FORBIDDEN_x0018E660 = 0
} M2vFrameRate_x0018E660;
typedef enum M2vPicType_x0018E660 {
    M2V_PICTYPE_I_x0018E660 = 1,
    M2V_PICTYPE_P_x0018E660 = 2,
    M2V_PICTYPE_B_x0018E660 = 3,
    M2V_PICTYPE_D_x0018E660 = 4
} M2vPicType_x0018E660;
typedef enum M2vPicStruct_x0018E660 {
    M2V_PICSTRUCT_TOP_FIELD_x0018E660 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018E660 = 2,
    M2V_PICSTRUCT_FRAME_x0018E660 = 3
} M2vPicStruct_x0018E660;
typedef enum M2vPicAtrF64_x0018E660 {
    M2V_PICATR_F64_0_x0018E660 = 0
} M2vPicAtrF64_x0018E660;
typedef struct M2vPicAtr_x0018E660 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018E660 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018E660 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018E660 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018E660 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018E660;
typedef void (*M2vUsrDatFn_x0018E660)(void *obj, int level);
typedef struct M2vUsrSj_x0018E660 {
    struct SfdSj_x0018E660 *sj;
    M2vUsrDatFn_x0018E660 fn;
    void *obj;
} M2vUsrSj_x0018E660;
typedef struct M2vPicUsr_x0018E660 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018E660;
typedef void (*M2vCondFn_x0018E660)();
typedef struct M2vObj_x0018E660 {
    int stat;
    M2vErrInf_x0018E660 err;
    M2vCondFn_x0018E660 cond[16];
    M2vPicAtr_x0018E660 picatr;
    char pad216[64];
    M2vUsrSj_x0018E660 usrsj[4];
    M2vPicUsr_x0018E660 picusr;
    char pad340[12];
    Mpeg2Ext_x0018E660 ext;
    char pad1656[8];
} M2vObj_x0018E660;
extern void M2V_SetErrFunc_x0018E660(M2vObj_x0018E660 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0018E660 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0018E660;
typedef struct sceMpeg_x0018E660 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0018E660 *sys;
} sceMpeg_x0018E660;
typedef enum {
    sceMpegCbError_x0018E660,
    sceMpegCbNodata_x0018E660,
    sceMpegCbStopDMA_x0018E660,
    sceMpegCbRestartDMA_x0018E660,
    sceMpegCbBackground_x0018E660,
    sceMpegCbTimeStamp_x0018E660,
    sceMpegCbStr_x0018E660,
    sceMpegCbNum_x0018E660
} sceMpegCbType_x0018E660;
typedef struct {
    sceMpegCbType_x0018E660 type;
    char *errMessage;
} sceMpegCbDataError_x0018E660;
typedef struct {
    sceMpegCbType_x0018E660 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0018E660;
typedef struct {
    sceMpegCbType_x0018E660 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0018E660;
typedef union {
    sceMpegCbType_x0018E660 type;
    sceMpegCbDataError_x0018E660 error;
    sceMpegCbDataTimeStamp_x0018E660 ts;
    sceMpegCbDataStr_x0018E660 str;
} sceMpegCbData_x0018E660;
typedef int (*sceMpegCallback_x0018E660)(sceMpeg_x0018E660 *mp, sceMpegCbData_x0018E660 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0018E660 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0018E660;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0018E660;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0018E660;
typedef struct {
    _sceMpegPicture_x0018E660 *ref_image;
    _sceMpegPicture_x0018E660 *prev_image;
    _sceMpegPicture_x0018E660 *decode;
    _sceMpegPicture_x0018E660 *image;
} _sceMpegPictureSlot_x0018E660;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0018E660;
typedef void (*_sceMpegMcKernel_x0018E660)(_sceMpegMcFetch_x0018E660 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0018E660 luma_kernel[4];
    _sceMpegMcKernel_x0018E660 chroma_kernel[4];
    _sceMpegMcFetch_x0018E660 luma[4];
    _sceMpegMcFetch_x0018E660 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0018E660;
typedef struct _sceMpegDecoder_x0018E660 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0018E660 callbacks[sceMpegCbNum_x0018E660];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0018E660 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0018E660 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0018E660 slots[3];
    _sceMpegPicture_x0018E660 pictures[9];
    _sceMpegSprBuffer_x0018E660 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0018E660 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0018E660;
typedef struct SfdPlanes_x0018E660 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018E660;
typedef struct SfdUserData_x0018E660 {
    char data[512];
    int size;
} SfdUserData_x0018E660;
typedef struct SfdRecVideo_x0018E660 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0018E660 stamp;
    SfdUserData_x0018E660 user;
} SfdRecVideo_x0018E660;
typedef struct SfdSlot_x0018E660 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0018E660 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018E660 *blob;
    M2vPicAtr_x0018E660 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0018E660;
typedef struct SfdBufPool_x0018E660 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0018E660 slot[18];
} SfdBufPool_x0018E660;
typedef struct SfdMpvCond_x0018E660 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018E660;
typedef struct SfdMpvWorkBufs_x0018E660 {
    int w[2];
} SfdMpvWorkBufs_x0018E660;
typedef struct SfdMpvFrameBufs_x0018E660 {
    int w[16];
} SfdMpvFrameBufs_x0018E660;
typedef struct SfdIpuEntry_x0018E660 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0018E660;
typedef struct SfdDmaTag_x0018E660 {
    long long tag;
    long long pad;
} SfdDmaTag_x0018E660;
typedef struct SfdIpuStream_x0018E660 {
    void *base;
    SfdDmaTag_x0018E660 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0018E660 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0018E660;
typedef struct SfdIpuCtl_x0018E660 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0018E660 mpeg;
    SfdIpuStream_x0018E660 stream;
    sceMpegCbDataError_x0018E660 error;
} SfdIpuCtl_x0018E660;
typedef struct SfdPtsComp_x0018E660 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0018E660 ptsent;
} SfdPtsComp_x0018E660;
typedef struct SfdMpv_x0018E660 {
    void *handle;
    SfdMpvCond_x0018E660 cond;
    SfdMpvWorkBufs_x0018E660 work;
    SfdMpvFrameBufs_x0018E660 bufs;
    SfdSlot_x0018E660 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0018E660 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0018E660 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0018E660 planes[2];
    SfdSlot_x0018E660 *first;
    SfdSlot_x0018E660 *second;
    SfdSlot_x0018E660 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0018E660 slots[16];
    SfdBufPool_x0018E660 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0018E660 ipu;
} SfdMpv_x0018E660;
typedef enum SfdPicType_x0018E660 {
    SFD_PICTYPE_I_x0018E660 = 1,
    SFD_PICTYPE_P_x0018E660 = 2,
    SFD_PICTYPE_B_x0018E660 = 3
} SfdPicType_x0018E660;
typedef enum SfdFrmInfF60_x0018E660 {
    SFD_FRMINF_F60_0_x0018E660 = 0
} SfdFrmInfF60_x0018E660;
typedef struct SfdFrameDetail_x0018E660 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0018E660;
typedef struct SfdFrameInfo_x0018E660 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0018E660 picType;
    int time;
    int unit;
    SfdBufFmt_x0018E660 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018E660 *picUsr;
    SfdFrmInfF60_x0018E660 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0018E660 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0018E660;
typedef struct SfdVfrm_x0018E660 {
    int used;
    int f4;
    SfdFrameInfo_x0018E660 inf;
} SfdVfrm_x0018E660;
typedef struct SfdPly_x0018E660 SfdPly_x0018E660;
typedef struct SfdRec_x0018E660 SfdRec_x0018E660;
typedef struct SfdRecSub_x0018E660 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0018E660;
typedef struct SfdRecSlot_x0018E660 {
    SfdRec_x0018E660 *rec;
    SfdRecSub_x0018E660 sub;
} SfdRecSlot_x0018E660;
typedef struct SfdSysHd_x0018E660 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0018E660;
typedef struct SfdRecSys_x0018E660 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0018E660 syshd;
} SfdRecSys_x0018E660;
typedef struct SfdRecAudio_x0018E660 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0018E660;
struct SfdRec_x0018E660 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0018E660 hdrInf;
    SfdRecSys_x0018E660 sys;
    char pad2616[152];
    SfdRecVideo_x0018E660 video;
    SfdRecAudio_x0018E660 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0018E660 {
    SfdCrePrm_x0018E660 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0018E660 hdr;
    SfdMvInf_x0018E660 mvInf;
    char pad2380[4];
    SfdPlyInf_x0018E660 plyInf;
    SfdErrInf_x0018E660 err;
    int cond[SFD_COND_NUM_x0018E660];
    int cond2[SFD_COND_NUM_x0018E660];
    char pad3364[4];
    SfdTim_x0018E660 tim;
    SfdBufEnt_x0018E660 buf[8];
    SfdVfrm_x0018E660 vfrm[16];
    SfdTrnSlot_x0018E660 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0018E660 mps;
    char pad8944[176];
    SfdMpv_x0018E660 mpv;
    SfdAdxCtx_x0018E660 adxt;
    char pad13680[100];
    SfdAoap_x0018E660 aoap;
    char pad13804[4];
    SfainfList_x0018E660 uo;
    char pad13860[4];
    SfdRecSlot_x0018E660 see;
    SfdTmrInf_x0018E660 tmr;
};
int sfmps_PutUoch_x0018E660(SfdPly_x0018E660 *hn, int id, unsigned char *data, int len) __asm__("func_0018E700");
void sfmps_SetCustomPketLen_x0018E660(SfdPly_x0018E660 *hn) __asm__("func_0018F5C8");
int sfmps_PutUoch_x0018E660(SfdPly_x0018E660 *hn, int id, unsigned char *data, int len) __asm__("func_0018E700");
void sfmps_SetCustomPketLen_x0018E660(SfdPly_x0018E660 *hn) __asm__("func_0018F5C8");
int func_0018E660_x0018E660(SfdPly_x0018E660 *hn, int id, unsigned char *data, int len) __asm__("func_0018E660");
/* sfmps_CopyPrvate: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmps.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018E660_x0018E660(SfdPly_x0018E660 *hn, int id, unsigned char *data, int len) {
    int found;
    if (SFHDS_SetHdr_x0018E660(hn, id, data, len, &found) != 0) {
        sfmps_SetCustomPketLen_x0018E660(hn);
        if (found != 0) {
            sfmps_PutUoch_x0018E660(hn, 0, data - 18, len + 18);
        }
        return 1;
    }
    return sfmps_PutUoch_x0018E660(hn, id, data, len);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018E700);
typedef struct SfdSj_x0018E7D8 SfdSj_x0018E7D8;
typedef struct SfdSjChunk_x0018E7D8 {
    char *data;
    int len;
} SfdSjChunk_x0018E7D8;
typedef struct SfdSjVtbl_x0018E7D8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018E7D8 *sj);
    int (*getUuid)(SfdSj_x0018E7D8 *sj);
    void (*reset)(SfdSj_x0018E7D8 *sj);
    void (*getChunk)(SfdSj_x0018E7D8 *sj, int id, int n, SfdSjChunk_x0018E7D8 *ck);
    void (*ungetChunk)(SfdSj_x0018E7D8 *sj, int id, SfdSjChunk_x0018E7D8 *ck);
    void (*putChunk)(SfdSj_x0018E7D8 *sj, int id, SfdSjChunk_x0018E7D8 *ck);
    int (*getNumData)(SfdSj_x0018E7D8 *sj, int id);
} SfdSjVtbl_x0018E7D8;
struct SfdSj_x0018E7D8 {
    SfdSjVtbl_x0018E7D8 *vtbl;
};
struct SfdSj_x0018E7D8;
struct SfdSj_x0018E7D8;
extern int sfmps_short_writes_x0018E7D8 __asm__("D_00426B08");
int sfmps_ExecCopySj_x0018E7D8(SfdSj_x0018E7D8 *sj, unsigned char *data, int len) __asm__("func_0018E880");
int sfmps_ExecCopySj_x0018E7D8(SfdSj_x0018E7D8 *sj, unsigned char *data, int len) __asm__("func_0018E880");
int func_0018E7D8_x0018E7D8(SfdSj_x0018E7D8 *sj, unsigned char *data, int len) __asm__("func_0018E7D8");
/* sfmps_CopySj: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmps.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018E7D8_x0018E7D8(SfdSj_x0018E7D8 *sj, unsigned char *data, int len) {
    int n;
    if (sj->vtbl->getNumData(sj, 0) < len) {
        return 0;
    }
    n = sfmps_ExecCopySj_x0018E7D8(sj, data, len);
    if (n == 0) {
        return 0;
    }
    len -= n;
    data += n;
    if (len > 0 && sfmps_ExecCopySj_x0018E7D8(sj, data, len) != len) {
        sfmps_short_writes_x0018E7D8++;
    }
    return 1;
}
typedef struct SfdSj_x0018E880 SfdSj_x0018E880;
typedef struct SfdSjChunk_x0018E880 {
    char *data;
    int len;
} SfdSjChunk_x0018E880;
typedef struct SfdSjVtbl_x0018E880 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018E880 *sj);
    int (*getUuid)(SfdSj_x0018E880 *sj);
    void (*reset)(SfdSj_x0018E880 *sj);
    void (*getChunk)(SfdSj_x0018E880 *sj, int id, int n, SfdSjChunk_x0018E880 *ck);
    void (*ungetChunk)(SfdSj_x0018E880 *sj, int id, SfdSjChunk_x0018E880 *ck);
    void (*putChunk)(SfdSj_x0018E880 *sj, int id, SfdSjChunk_x0018E880 *ck);
    int (*getNumData)(SfdSj_x0018E880 *sj, int id);
} SfdSjVtbl_x0018E880;
struct SfdSj_x0018E880 {
    SfdSjVtbl_x0018E880 *vtbl;
};
struct SfdSj_x0018E880;
struct SfdSj_x0018E880;
void MEM_Copy_x0018E880(void *dst, void *src, int n) __asm__("func_00178BA8");
int func_0018E880_x0018E880(SfdSj_x0018E880 *sj, unsigned char *data, int len) __asm__("func_0018E880");
/* sfmps_ExecCopySj: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmps.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018E880_x0018E880(SfdSj_x0018E880 *sj, unsigned char *data, int len) {
    SfdSjChunk_x0018E880 ck;
    sj->vtbl->getChunk(sj, 0, len, &ck);
    MEM_Copy_x0018E880(ck.data, (char *)data, ck.len);
    sj->vtbl->putChunk(sj, 1, &ck);
    return ck.len;
}
s32 func_0018E8F0(void) {
    return 1;
}
s32 func_0018AA68_x0018E8F8(void *, s32, s32 *) __asm__("func_0018AA68");
s32 func_00198890_x0018E8F8(void *, s32) __asm__("func_00198890");
void func_00178BA8_x0018E8F8(s32, u8 *, s32) __asm__("func_00178BA8");
s32 func_0018AB40_x0018E8F8(void *, s32, s32, s32) __asm__("func_0018AB40");
s32 func_00198568_x0018E8F8(void *, s32, s32 *, s32 *) __asm__("func_00198568");
s32 func_0018E8F8_x0018E8F8(void *a0, s32 a1, u8 *a2, s32 a3, s32 a4) __asm__("func_0018E8F8");
s32 func_0018E8F8_x0018E8F8(void *a0, s32 a1, u8 *a2, s32 a3, s32 a4)
{
    s32 b[8];
    s32 c[4];
    s32 d[4];
    s32 r;
    s32 n0;
    s32 p0;
    s32 p1;
    s32 h;

    r = func_0018AA68_x0018E8F8(a0, a1, b);
    if (r) {
        return r;
    }
    n0 = b[1];
    p0 = b[0];
    p1 = b[2];
    h = b[5];
    if (n0 + b[3] < a3) {
        return 0;
    }
    if (func_00198890_x0018E8F8(a0, a1)) {
        return 0;
    }
    if (n0 >= a3) {
        func_00178BA8_x0018E8F8(p0, a2, a3);
    } else {
        func_00178BA8_x0018E8F8(p0, a2, n0);
        func_00178BA8_x0018E8F8(p1, a2 + n0, a3 - n0);
    }
    r = func_0018AB40_x0018E8F8(a0, a1, a3, h);
    if (r) {
        return r;
    }
    if (a4 >= 0) {
        c[0] = a4;
        c[1] = p0;
        c[2] = a3;
        r = func_00198568_x0018E8F8(a0, a1, c, d);
        if (r) {
            return r;
        }
    }
    return 1;
}
s32 func_0018B750_x0018EA38() __asm__("func_0018B750");
s32 func_00195E20_x0018EA38() __asm__("func_00195E20");
void func_0018EA38_x0018EA38(s32 arg0, s32 arg1) __asm__("func_0018EA38");
void func_0018EA38_x0018EA38(s32 arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = arg0 + 0x1C24;
    func_0018B750_x0018EA38(arg0, *(s32 *)((u8 *)temp_s1 + 0x18), 1);
    func_0018B750_x0018EA38(arg0, *(s32 *)((u8 *)temp_s1 + 0x14), 1);
    func_0018B750_x0018EA38(arg0, *(s32 *)((u8 *)temp_s1 + 0x1C), 1);
    func_00195E20_x0018EA38(arg0, arg1);
}
s32 func_0018B770_x0018EAA8(u8 *, s32) __asm__("func_0018B770");
s32 func_0018EAA8_x0018EAA8(u8 *p) __asm__("func_0018EAA8");
s32 func_0018EAA8_x0018EAA8(u8 *p)
{
    s32 *q = (s32 *)(p + 0x1C24);
    s32 a = func_0018B770_x0018EAA8(p, q[6]);
    s32 b = func_0018B770_x0018EAA8(p, q[5]);
    return a & b & func_0018B770_x0018EAA8(p, q[7]);
}
void func_0018EB18(u8 *arg0) {
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x1C2C);
    *(s32 *)((u8 *)temp_v1 + 0x14) = (s32) (*(s32 *)((u8 *)temp_v1 + 0x14) + 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018EB30);
typedef struct SfdSj_x0018EC78 SfdSj_x0018EC78;
typedef struct SfdSjChunk_x0018EC78 {
    char *data;
    int len;
} SfdSjChunk_x0018EC78;
typedef struct SfdSjVtbl_x0018EC78 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018EC78 *sj);
    int (*getUuid)(SfdSj_x0018EC78 *sj);
    void (*reset)(SfdSj_x0018EC78 *sj);
    void (*getChunk)(SfdSj_x0018EC78 *sj, int id, int n, SfdSjChunk_x0018EC78 *ck);
    void (*ungetChunk)(SfdSj_x0018EC78 *sj, int id, SfdSjChunk_x0018EC78 *ck);
    void (*putChunk)(SfdSj_x0018EC78 *sj, int id, SfdSjChunk_x0018EC78 *ck);
    int (*getNumData)(SfdSj_x0018EC78 *sj, int id);
} SfdSjVtbl_x0018EC78;
struct SfdSj_x0018EC78 {
    SfdSjVtbl_x0018EC78 *vtbl;
};
struct SfdSj_x0018EC78;
struct SfdRecSlot_x0018EC78;
struct SfdRec_x0018EC78;
struct SfdMpvCond_x0018EC78;
struct SfdPlanes_x0018EC78;
struct SfdFrameInfo_x0018EC78;
struct SfdPly_x0018EC78;
typedef int (*SfdTimeFn_x0018EC78)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0018EC78 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0018EC78;
typedef struct SfdTimeRec_x0018EC78 {
    int valid;
    SfdTimeCode_x0018EC78 tc;
    int time;
    int unit;
} SfdTimeRec_x0018EC78;
typedef struct SfdTst_x0018EC78 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0018EC78;
typedef struct SfdSyncTally_x0018EC78 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0018EC78;
typedef struct SfdSyncQueue_x0018EC78 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0018EC78;
typedef struct SfdFieldEntry_x0018EC78 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0018EC78;
typedef struct SfdPtsm_x0018EC78 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0018EC78;
typedef struct SfdHdrAudio_x0018EC78 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018EC78;
typedef struct SfdHdrMux_x0018EC78 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018EC78;
typedef struct SfdHdrVideo_x0018EC78 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018EC78;
typedef struct SfdHdrInf_x0018EC78 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018EC78 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018EC78 audio;
    SfdHdrVideo_x0018EC78 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018EC78;
typedef struct SfdMvInf_x0018EC78 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0018EC78;
typedef struct SfdPlyInf_x0018EC78 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0018EC78;
typedef void (*SfdErrFn_x0018EC78)(void *obj, int code);
typedef struct SfdErrInf_x0018EC78 {
    SfdErrFn_x0018EC78 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018EC78;
typedef int (*SfdExtClockFn_x0018EC78)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0018EC78)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0018EC78 {
    SfdTimeFn_x0018EC78 timefn[6];
    SfdIsSkipFn_x0018EC78 isSkipFn;
    SfdTimeCode_x0018EC78 tc;
    SfdTimeRec_x0018EC78 state;
    SfdTimeRec_x0018EC78 best;
    SfdTimeRec_x0018EC78 tot;
    SfdTimeRec_x0018EC78 cur;
    SfdTimeRec_x0018EC78 latest;
    SfdTimeRec_x0018EC78 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0018EC78 tally;
    SfdSyncQueue_x0018EC78 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0018EC78 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0018EC78 tst;
    SfdFieldEntry_x0018EC78 fields[64];
    SfdPtsm_x0018EC78 ptsm;
    char pad1468[36];
} SfdTim_x0018EC78;
enum {
    SFD_COND_VIDEO_x0018EC78 = 5,
    SFD_COND_AUDIO_x0018EC78 = 6,
    SFD_COND_KEEPSUP_x0018EC78 = 8,
    SFD_COND_SYNCMODE_x0018EC78 = 15,
    SFD_COND_ETIME_x0018EC78 = 20,
    SFD_COND_ETUNIT_x0018EC78 = 21,
    SFD_COND_LNKSTM_x0018EC78 = 49,
    SFD_COND_SUPPLY_END_x0018EC78 = 56,
    SFD_COND_DECODE_END_x0018EC78 = 57,
    SFD_COND_DEMUX_SPLIT_x0018EC78 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0018EC78 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0018EC78 = 80,
    SFD_COND_SYSHD_FN_x0018EC78 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0018EC78 = 86,
    SFD_COND_NUM_x0018EC78 = 100
};
typedef enum SfdBufFmt_x0018EC78 {
    SFD_BUFFMT_0_x0018EC78 = 0
} SfdBufFmt_x0018EC78;
typedef enum SfdBufId_x0018EC78 {
    SFD_BUF_NONE_x0018EC78 = 8
} SfdBufId_x0018EC78;
typedef struct SfdCrePrm_x0018EC78 {
    struct SfdTrnConfig_x0018EC78 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0018EC78 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0018EC78;
typedef struct SfdItem_x0018EC78 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018EC78;
typedef struct SfdRing_x0018EC78 {
    SfdItem_x0018EC78 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018EC78;
typedef struct SfdBufInf_x0018EC78 {
    char *data;
    struct SfdSj_x0018EC78 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018EC78;
typedef struct SfdBufCur_x0018EC78 {
    char *pos;
    int len;
} SfdBufCur_x0018EC78;
typedef struct SfdBufDlm_x0018EC78 {
    char *pos;
    char *end;
} SfdBufDlm_x0018EC78;
typedef struct SfdBufRing_x0018EC78 {
    SfdBufInf_x0018EC78 sup;
    SfdBufDlm_x0018EC78 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018EC78 ptsque;
} SfdBufRing_x0018EC78;
typedef struct SfdBufAring_x0018EC78 {
    SfdBufInf_x0018EC78 sup;
    SfdBufCur_x0018EC78 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018EC78;
typedef struct SfdUoch_x0018EC78 {
    struct SfdSj_x0018EC78 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018EC78;
typedef struct SfdBufEnt_x0018EC78 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018EC78 ring;
        SfdBufAring_x0018EC78 aring;
        SfdBufInf_x0018EC78 vfrm;
        SfdUoch_x0018EC78 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018EC78;
typedef int (*SfdTrnFn_x0018EC78)();
typedef struct SfdTrnConfig_x0018EC78 {
    SfdTrnFn_x0018EC78 *fns[9];
} SfdTrnConfig_x0018EC78;
typedef struct SfdMpsPrm_x0018EC78 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0018EC78 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0018EC78;
typedef struct SfdAdxCfg_x0018EC78 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0018EC78;
typedef void (*SfdAdxStep_x0018EC78)(struct SfdPly_x0018EC78 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0018EC78 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0018EC78 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0018EC78 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0018EC78;
typedef struct SfdAoap_x0018EC78 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0018EC78 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0018EC78 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0018EC78 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0018EC78 *h);
    void (*setSpeed)(struct SfdPly_x0018EC78 *h, int speed);
} SfdAoap_x0018EC78;
typedef struct SfainfOut_x0018EC78 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0018EC78;
typedef struct SfainfList_x0018EC78 {
    int nout;
    SfainfOut_x0018EC78 out[3];
} SfainfList_x0018EC78;
typedef struct SfdTrnSlot_x0018EC78 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0018EC78 *mps;
        struct SfdMpv_x0018EC78 *mpv;
        SfdAdxCtx_x0018EC78 *adxt;
        SfdAoap_x0018EC78 *aoap;
        SfainfList_x0018EC78 *uo;
    } hn;
    SfdTrnFn_x0018EC78 *fns;
    SfdBufId_x0018EC78 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0018EC78;
typedef struct SfdTsum_x0018EC78 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0018EC78;
typedef struct SfdTmrInf_x0018EC78 {
    SfdTsum_x0018EC78 tsum[6];
} SfdTmrInf_x0018EC78;
int SFCON_IsEndcodeSkip_x0018EC78(void *sfd) __asm__("func_0018B840");
int SFCON_IsSystemEndcodeSkip_x0018EC78(void *sfd) __asm__("func_0018B860");
struct SfdSj_x0018EC78;
typedef struct M2vErrInf_x0018EC78 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018EC78;
typedef struct Mpeg2Ext_x0018EC78 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018EC78;
typedef enum M2vFrameRate_x0018EC78 {
    M2V_FRAME_RATE_FORBIDDEN_x0018EC78 = 0
} M2vFrameRate_x0018EC78;
typedef enum M2vPicType_x0018EC78 {
    M2V_PICTYPE_I_x0018EC78 = 1,
    M2V_PICTYPE_P_x0018EC78 = 2,
    M2V_PICTYPE_B_x0018EC78 = 3,
    M2V_PICTYPE_D_x0018EC78 = 4
} M2vPicType_x0018EC78;
typedef enum M2vPicStruct_x0018EC78 {
    M2V_PICSTRUCT_TOP_FIELD_x0018EC78 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018EC78 = 2,
    M2V_PICSTRUCT_FRAME_x0018EC78 = 3
} M2vPicStruct_x0018EC78;
typedef enum M2vPicAtrF64_x0018EC78 {
    M2V_PICATR_F64_0_x0018EC78 = 0
} M2vPicAtrF64_x0018EC78;
typedef struct M2vPicAtr_x0018EC78 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018EC78 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018EC78 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018EC78 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018EC78 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018EC78;
typedef void (*M2vUsrDatFn_x0018EC78)(void *obj, int level);
typedef struct M2vUsrSj_x0018EC78 {
    struct SfdSj_x0018EC78 *sj;
    M2vUsrDatFn_x0018EC78 fn;
    void *obj;
} M2vUsrSj_x0018EC78;
typedef struct M2vPicUsr_x0018EC78 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018EC78;
typedef void (*M2vCondFn_x0018EC78)();
typedef struct M2vObj_x0018EC78 {
    int stat;
    M2vErrInf_x0018EC78 err;
    M2vCondFn_x0018EC78 cond[16];
    M2vPicAtr_x0018EC78 picatr;
    char pad216[64];
    M2vUsrSj_x0018EC78 usrsj[4];
    M2vPicUsr_x0018EC78 picusr;
    char pad340[12];
    Mpeg2Ext_x0018EC78 ext;
    char pad1656[8];
} M2vObj_x0018EC78;
extern void M2V_SetErrFunc_x0018EC78(M2vObj_x0018EC78 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0018EC78 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0018EC78;
typedef struct sceMpeg_x0018EC78 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0018EC78 *sys;
} sceMpeg_x0018EC78;
typedef enum {
    sceMpegCbError_x0018EC78,
    sceMpegCbNodata_x0018EC78,
    sceMpegCbStopDMA_x0018EC78,
    sceMpegCbRestartDMA_x0018EC78,
    sceMpegCbBackground_x0018EC78,
    sceMpegCbTimeStamp_x0018EC78,
    sceMpegCbStr_x0018EC78,
    sceMpegCbNum_x0018EC78
} sceMpegCbType_x0018EC78;
typedef struct {
    sceMpegCbType_x0018EC78 type;
    char *errMessage;
} sceMpegCbDataError_x0018EC78;
typedef struct {
    sceMpegCbType_x0018EC78 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0018EC78;
typedef struct {
    sceMpegCbType_x0018EC78 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0018EC78;
typedef union {
    sceMpegCbType_x0018EC78 type;
    sceMpegCbDataError_x0018EC78 error;
    sceMpegCbDataTimeStamp_x0018EC78 ts;
    sceMpegCbDataStr_x0018EC78 str;
} sceMpegCbData_x0018EC78;
typedef int (*sceMpegCallback_x0018EC78)(sceMpeg_x0018EC78 *mp, sceMpegCbData_x0018EC78 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0018EC78 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0018EC78;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0018EC78;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0018EC78;
typedef struct {
    _sceMpegPicture_x0018EC78 *ref_image;
    _sceMpegPicture_x0018EC78 *prev_image;
    _sceMpegPicture_x0018EC78 *decode;
    _sceMpegPicture_x0018EC78 *image;
} _sceMpegPictureSlot_x0018EC78;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0018EC78;
typedef void (*_sceMpegMcKernel_x0018EC78)(_sceMpegMcFetch_x0018EC78 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0018EC78 luma_kernel[4];
    _sceMpegMcKernel_x0018EC78 chroma_kernel[4];
    _sceMpegMcFetch_x0018EC78 luma[4];
    _sceMpegMcFetch_x0018EC78 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0018EC78;
typedef struct _sceMpegDecoder_x0018EC78 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0018EC78 callbacks[sceMpegCbNum_x0018EC78];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0018EC78 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0018EC78 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0018EC78 slots[3];
    _sceMpegPicture_x0018EC78 pictures[9];
    _sceMpegSprBuffer_x0018EC78 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0018EC78 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0018EC78;
typedef struct SfdPlanes_x0018EC78 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018EC78;
typedef struct SfdUserData_x0018EC78 {
    char data[512];
    int size;
} SfdUserData_x0018EC78;
typedef struct SfdRecVideo_x0018EC78 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0018EC78 stamp;
    SfdUserData_x0018EC78 user;
} SfdRecVideo_x0018EC78;
typedef struct SfdSlot_x0018EC78 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0018EC78 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018EC78 *blob;
    M2vPicAtr_x0018EC78 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0018EC78;
typedef struct SfdBufPool_x0018EC78 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0018EC78 slot[18];
} SfdBufPool_x0018EC78;
typedef struct SfdMpvCond_x0018EC78 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018EC78;
typedef struct SfdMpvWorkBufs_x0018EC78 {
    int w[2];
} SfdMpvWorkBufs_x0018EC78;
typedef struct SfdMpvFrameBufs_x0018EC78 {
    int w[16];
} SfdMpvFrameBufs_x0018EC78;
typedef struct SfdIpuEntry_x0018EC78 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0018EC78;
typedef struct SfdDmaTag_x0018EC78 {
    long long tag;
    long long pad;
} SfdDmaTag_x0018EC78;
typedef struct SfdIpuStream_x0018EC78 {
    void *base;
    SfdDmaTag_x0018EC78 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0018EC78 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0018EC78;
typedef struct SfdIpuCtl_x0018EC78 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0018EC78 mpeg;
    SfdIpuStream_x0018EC78 stream;
    sceMpegCbDataError_x0018EC78 error;
} SfdIpuCtl_x0018EC78;
typedef struct SfdPtsComp_x0018EC78 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0018EC78 ptsent;
} SfdPtsComp_x0018EC78;
typedef struct SfdMpv_x0018EC78 {
    void *handle;
    SfdMpvCond_x0018EC78 cond;
    SfdMpvWorkBufs_x0018EC78 work;
    SfdMpvFrameBufs_x0018EC78 bufs;
    SfdSlot_x0018EC78 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0018EC78 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0018EC78 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0018EC78 planes[2];
    SfdSlot_x0018EC78 *first;
    SfdSlot_x0018EC78 *second;
    SfdSlot_x0018EC78 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0018EC78 slots[16];
    SfdBufPool_x0018EC78 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0018EC78 ipu;
} SfdMpv_x0018EC78;
typedef enum SfdPicType_x0018EC78 {
    SFD_PICTYPE_I_x0018EC78 = 1,
    SFD_PICTYPE_P_x0018EC78 = 2,
    SFD_PICTYPE_B_x0018EC78 = 3
} SfdPicType_x0018EC78;
typedef enum SfdFrmInfF60_x0018EC78 {
    SFD_FRMINF_F60_0_x0018EC78 = 0
} SfdFrmInfF60_x0018EC78;
typedef struct SfdFrameDetail_x0018EC78 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0018EC78;
typedef struct SfdFrameInfo_x0018EC78 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0018EC78 picType;
    int time;
    int unit;
    SfdBufFmt_x0018EC78 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018EC78 *picUsr;
    SfdFrmInfF60_x0018EC78 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0018EC78 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0018EC78;
typedef struct SfdVfrm_x0018EC78 {
    int used;
    int f4;
    SfdFrameInfo_x0018EC78 inf;
} SfdVfrm_x0018EC78;
typedef struct SfdPly_x0018EC78 SfdPly_x0018EC78;
typedef struct SfdRec_x0018EC78 SfdRec_x0018EC78;
typedef struct SfdRecSub_x0018EC78 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0018EC78;
typedef struct SfdRecSlot_x0018EC78 {
    SfdRec_x0018EC78 *rec;
    SfdRecSub_x0018EC78 sub;
} SfdRecSlot_x0018EC78;
typedef struct SfdSysHd_x0018EC78 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0018EC78;
typedef struct SfdRecSys_x0018EC78 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0018EC78 syshd;
} SfdRecSys_x0018EC78;
typedef struct SfdRecAudio_x0018EC78 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0018EC78;
struct SfdRec_x0018EC78 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0018EC78 hdrInf;
    SfdRecSys_x0018EC78 sys;
    char pad2616[152];
    SfdRecVideo_x0018EC78 video;
    SfdRecAudio_x0018EC78 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0018EC78 {
    SfdCrePrm_x0018EC78 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0018EC78 hdr;
    SfdMvInf_x0018EC78 mvInf;
    char pad2380[4];
    SfdPlyInf_x0018EC78 plyInf;
    SfdErrInf_x0018EC78 err;
    int cond[SFD_COND_NUM_x0018EC78];
    int cond2[SFD_COND_NUM_x0018EC78];
    char pad3364[4];
    SfdTim_x0018EC78 tim;
    SfdBufEnt_x0018EC78 buf[8];
    SfdVfrm_x0018EC78 vfrm[16];
    SfdTrnSlot_x0018EC78 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0018EC78 mps;
    char pad8944[176];
    SfdMpv_x0018EC78 mpv;
    SfdAdxCtx_x0018EC78 adxt;
    char pad13680[100];
    SfdAoap_x0018EC78 aoap;
    char pad13804[4];
    SfainfList_x0018EC78 uo;
    char pad13860[4];
    SfdRecSlot_x0018EC78 see;
    SfdTmrInf_x0018EC78 tmr;
};
int func_0018EC78_x0018EC78(SfdPly_x0018EC78 *hn, int kind) __asm__("func_0018EC78");
/* sfmps_IsEffectiveEndcode: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmps.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0018EC78_x0018EC78(SfdPly_x0018EC78 *hn, int kind) {
    if (kind != 0x80000) {
        return 0;
    }
    if (SFCON_IsEndcodeSkip_x0018EC78(hn) || SFCON_IsSystemEndcodeSkip_x0018EC78(hn)) {
        return 0;
    }
    return 1;
}
s32 func_0018B770_x0018ECC8() __asm__("func_0018B770");
s32 func_0018EA38_x0018ECC8() __asm__("func_0018EA38");
void func_0018ECC8_x0018ECC8(s32 arg0, s32 *arg1) __asm__("func_0018ECC8");
void func_0018ECC8_x0018ECC8(s32 arg0, s32 *arg1)
{
  s32 var_a1;
  u8 *temp_s1;
  s32 new_var;
  u8 *temp_v0;
  temp_v0 = arg0 + 0x1C24;
  temp_s1 = *((u8 **) (((u8 *) temp_v0) + 8));
  new_var = func_0018B770_x0018ECC8(arg0, *((s32 *) (((u8 *) temp_v0) + 0x10)));
 do { var_a1 = 0; if (new_var == 1) { func_0018EA38_x0018ECC8(arg0, *((s32 *) (((u8 *) temp_s1) + 0x30))); var_a1 = 1; } } while (0);
  if (arg1 != ((void *) 0))
  {
    *arg1 = var_a1;
  }
}
typedef struct SfdSj_x0018ED30 SfdSj_x0018ED30;
typedef struct SfdSjChunk_x0018ED30 {
    char *data;
    int len;
} SfdSjChunk_x0018ED30;
typedef struct SfdSjVtbl_x0018ED30 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0018ED30 *sj);
    int (*getUuid)(SfdSj_x0018ED30 *sj);
    void (*reset)(SfdSj_x0018ED30 *sj);
    void (*getChunk)(SfdSj_x0018ED30 *sj, int id, int n, SfdSjChunk_x0018ED30 *ck);
    void (*ungetChunk)(SfdSj_x0018ED30 *sj, int id, SfdSjChunk_x0018ED30 *ck);
    void (*putChunk)(SfdSj_x0018ED30 *sj, int id, SfdSjChunk_x0018ED30 *ck);
    int (*getNumData)(SfdSj_x0018ED30 *sj, int id);
} SfdSjVtbl_x0018ED30;
struct SfdSj_x0018ED30 {
    SfdSjVtbl_x0018ED30 *vtbl;
};
struct SfdSj_x0018ED30;
struct SfdRecSlot_x0018ED30;
struct SfdRec_x0018ED30;
struct SfdMpvCond_x0018ED30;
struct SfdPlanes_x0018ED30;
struct SfdFrameInfo_x0018ED30;
struct SfdPly_x0018ED30;
typedef int (*SfdTimeFn_x0018ED30)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x0018ED30 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x0018ED30;
typedef struct SfdTimeRec_x0018ED30 {
    int valid;
    SfdTimeCode_x0018ED30 tc;
    int time;
    int unit;
} SfdTimeRec_x0018ED30;
typedef struct SfdTst_x0018ED30 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x0018ED30;
typedef struct SfdSyncTally_x0018ED30 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x0018ED30;
typedef struct SfdSyncQueue_x0018ED30 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x0018ED30;
typedef struct SfdFieldEntry_x0018ED30 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x0018ED30;
typedef struct SfdPtsm_x0018ED30 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x0018ED30;
typedef struct SfdHdrAudio_x0018ED30 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x0018ED30;
typedef struct SfdHdrMux_x0018ED30 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x0018ED30;
typedef struct SfdHdrVideo_x0018ED30 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x0018ED30;
typedef struct SfdHdrInf_x0018ED30 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x0018ED30 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x0018ED30 audio;
    SfdHdrVideo_x0018ED30 video;
    int size;
    char data[2048];
} SfdHdrInf_x0018ED30;
typedef struct SfdMvInf_x0018ED30 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x0018ED30;
typedef struct SfdPlyInf_x0018ED30 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x0018ED30;
typedef void (*SfdErrFn_x0018ED30)(void *obj, int code);
typedef struct SfdErrInf_x0018ED30 {
    SfdErrFn_x0018ED30 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x0018ED30;
typedef int (*SfdExtClockFn_x0018ED30)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x0018ED30)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x0018ED30 {
    SfdTimeFn_x0018ED30 timefn[6];
    SfdIsSkipFn_x0018ED30 isSkipFn;
    SfdTimeCode_x0018ED30 tc;
    SfdTimeRec_x0018ED30 state;
    SfdTimeRec_x0018ED30 best;
    SfdTimeRec_x0018ED30 tot;
    SfdTimeRec_x0018ED30 cur;
    SfdTimeRec_x0018ED30 latest;
    SfdTimeRec_x0018ED30 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x0018ED30 tally;
    SfdSyncQueue_x0018ED30 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x0018ED30 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x0018ED30 tst;
    SfdFieldEntry_x0018ED30 fields[64];
    SfdPtsm_x0018ED30 ptsm;
    char pad1468[36];
} SfdTim_x0018ED30;
enum {
    SFD_COND_VIDEO_x0018ED30 = 5,
    SFD_COND_AUDIO_x0018ED30 = 6,
    SFD_COND_KEEPSUP_x0018ED30 = 8,
    SFD_COND_SYNCMODE_x0018ED30 = 15,
    SFD_COND_ETIME_x0018ED30 = 20,
    SFD_COND_ETUNIT_x0018ED30 = 21,
    SFD_COND_LNKSTM_x0018ED30 = 49,
    SFD_COND_SUPPLY_END_x0018ED30 = 56,
    SFD_COND_DECODE_END_x0018ED30 = 57,
    SFD_COND_DEMUX_SPLIT_x0018ED30 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x0018ED30 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x0018ED30 = 80,
    SFD_COND_SYSHD_FN_x0018ED30 = 85,
    SFD_COND_SYSHD_FN_OBJ_x0018ED30 = 86,
    SFD_COND_NUM_x0018ED30 = 100
};
typedef enum SfdBufFmt_x0018ED30 {
    SFD_BUFFMT_0_x0018ED30 = 0
} SfdBufFmt_x0018ED30;
typedef enum SfdBufId_x0018ED30 {
    SFD_BUF_NONE_x0018ED30 = 8
} SfdBufId_x0018ED30;
typedef struct SfdCrePrm_x0018ED30 {
    struct SfdTrnConfig_x0018ED30 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x0018ED30 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x0018ED30;
typedef struct SfdItem_x0018ED30 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x0018ED30;
typedef struct SfdRing_x0018ED30 {
    SfdItem_x0018ED30 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x0018ED30;
typedef struct SfdBufInf_x0018ED30 {
    char *data;
    struct SfdSj_x0018ED30 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x0018ED30;
typedef struct SfdBufCur_x0018ED30 {
    char *pos;
    int len;
} SfdBufCur_x0018ED30;
typedef struct SfdBufDlm_x0018ED30 {
    char *pos;
    char *end;
} SfdBufDlm_x0018ED30;
typedef struct SfdBufRing_x0018ED30 {
    SfdBufInf_x0018ED30 sup;
    SfdBufDlm_x0018ED30 dlm;
    int wtot;
    int rtot;
    SfdRing_x0018ED30 ptsque;
} SfdBufRing_x0018ED30;
typedef struct SfdBufAring_x0018ED30 {
    SfdBufInf_x0018ED30 sup;
    SfdBufCur_x0018ED30 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x0018ED30;
typedef struct SfdUoch_x0018ED30 {
    struct SfdSj_x0018ED30 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x0018ED30;
typedef struct SfdBufEnt_x0018ED30 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x0018ED30 ring;
        SfdBufAring_x0018ED30 aring;
        SfdBufInf_x0018ED30 vfrm;
        SfdUoch_x0018ED30 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x0018ED30;
typedef int (*SfdTrnFn_x0018ED30)();
typedef struct SfdTrnConfig_x0018ED30 {
    SfdTrnFn_x0018ED30 *fns[9];
} SfdTrnConfig_x0018ED30;
typedef struct SfdMpsPrm_x0018ED30 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x0018ED30 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x0018ED30;
typedef struct SfdAdxCfg_x0018ED30 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x0018ED30;
typedef void (*SfdAdxStep_x0018ED30)(struct SfdPly_x0018ED30 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x0018ED30 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x0018ED30 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x0018ED30 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x0018ED30;
typedef struct SfdAoap_x0018ED30 {
    int rna;
    void (*setOutPan)(struct SfdPly_x0018ED30 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x0018ED30 *h, int ch);
    void (*setOutVol)(struct SfdPly_x0018ED30 *h, int vol);
    int (*getOutVol)(struct SfdPly_x0018ED30 *h);
    void (*setSpeed)(struct SfdPly_x0018ED30 *h, int speed);
} SfdAoap_x0018ED30;
typedef struct SfainfOut_x0018ED30 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x0018ED30;
typedef struct SfainfList_x0018ED30 {
    int nout;
    SfainfOut_x0018ED30 out[3];
} SfainfList_x0018ED30;
typedef struct SfdTrnSlot_x0018ED30 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x0018ED30 *mps;
        struct SfdMpv_x0018ED30 *mpv;
        SfdAdxCtx_x0018ED30 *adxt;
        SfdAoap_x0018ED30 *aoap;
        SfainfList_x0018ED30 *uo;
    } hn;
    SfdTrnFn_x0018ED30 *fns;
    SfdBufId_x0018ED30 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x0018ED30;
typedef struct SfdTsum_x0018ED30 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x0018ED30;
typedef struct SfdTmrInf_x0018ED30 {
    SfdTsum_x0018ED30 tsum[6];
} SfdTmrInf_x0018ED30;
struct SfdSj_x0018ED30;
typedef struct M2vErrInf_x0018ED30 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x0018ED30;
typedef struct Mpeg2Ext_x0018ED30 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x0018ED30;
typedef enum M2vFrameRate_x0018ED30 {
    M2V_FRAME_RATE_FORBIDDEN_x0018ED30 = 0
} M2vFrameRate_x0018ED30;
typedef enum M2vPicType_x0018ED30 {
    M2V_PICTYPE_I_x0018ED30 = 1,
    M2V_PICTYPE_P_x0018ED30 = 2,
    M2V_PICTYPE_B_x0018ED30 = 3,
    M2V_PICTYPE_D_x0018ED30 = 4
} M2vPicType_x0018ED30;
typedef enum M2vPicStruct_x0018ED30 {
    M2V_PICSTRUCT_TOP_FIELD_x0018ED30 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x0018ED30 = 2,
    M2V_PICSTRUCT_FRAME_x0018ED30 = 3
} M2vPicStruct_x0018ED30;
typedef enum M2vPicAtrF64_x0018ED30 {
    M2V_PICATR_F64_0_x0018ED30 = 0
} M2vPicAtrF64_x0018ED30;
typedef struct M2vPicAtr_x0018ED30 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x0018ED30 frame_rate_code;
    int temporal_reference;
    M2vPicType_x0018ED30 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x0018ED30 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x0018ED30 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x0018ED30;
typedef void (*M2vUsrDatFn_x0018ED30)(void *obj, int level);
typedef struct M2vUsrSj_x0018ED30 {
    struct SfdSj_x0018ED30 *sj;
    M2vUsrDatFn_x0018ED30 fn;
    void *obj;
} M2vUsrSj_x0018ED30;
typedef struct M2vPicUsr_x0018ED30 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x0018ED30;
typedef void (*M2vCondFn_x0018ED30)();
typedef struct M2vObj_x0018ED30 {
    int stat;
    M2vErrInf_x0018ED30 err;
    M2vCondFn_x0018ED30 cond[16];
    M2vPicAtr_x0018ED30 picatr;
    char pad216[64];
    M2vUsrSj_x0018ED30 usrsj[4];
    M2vPicUsr_x0018ED30 picusr;
    char pad340[12];
    Mpeg2Ext_x0018ED30 ext;
    char pad1656[8];
} M2vObj_x0018ED30;
extern void M2V_SetErrFunc_x0018ED30(M2vObj_x0018ED30 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x0018ED30 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x0018ED30;
typedef struct sceMpeg_x0018ED30 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x0018ED30 *sys;
} sceMpeg_x0018ED30;
typedef enum {
    sceMpegCbError_x0018ED30,
    sceMpegCbNodata_x0018ED30,
    sceMpegCbStopDMA_x0018ED30,
    sceMpegCbRestartDMA_x0018ED30,
    sceMpegCbBackground_x0018ED30,
    sceMpegCbTimeStamp_x0018ED30,
    sceMpegCbStr_x0018ED30,
    sceMpegCbNum_x0018ED30
} sceMpegCbType_x0018ED30;
typedef struct {
    sceMpegCbType_x0018ED30 type;
    char *errMessage;
} sceMpegCbDataError_x0018ED30;
typedef struct {
    sceMpegCbType_x0018ED30 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x0018ED30;
typedef struct {
    sceMpegCbType_x0018ED30 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x0018ED30;
typedef union {
    sceMpegCbType_x0018ED30 type;
    sceMpegCbDataError_x0018ED30 error;
    sceMpegCbDataTimeStamp_x0018ED30 ts;
    sceMpegCbDataStr_x0018ED30 str;
} sceMpegCbData_x0018ED30;
typedef int (*sceMpegCallback_x0018ED30)(sceMpeg_x0018ED30 *mp, sceMpegCbData_x0018ED30 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x0018ED30 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x0018ED30;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x0018ED30;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x0018ED30;
typedef struct {
    _sceMpegPicture_x0018ED30 *ref_image;
    _sceMpegPicture_x0018ED30 *prev_image;
    _sceMpegPicture_x0018ED30 *decode;
    _sceMpegPicture_x0018ED30 *image;
} _sceMpegPictureSlot_x0018ED30;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x0018ED30;
typedef void (*_sceMpegMcKernel_x0018ED30)(_sceMpegMcFetch_x0018ED30 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x0018ED30 luma_kernel[4];
    _sceMpegMcKernel_x0018ED30 chroma_kernel[4];
    _sceMpegMcFetch_x0018ED30 luma[4];
    _sceMpegMcFetch_x0018ED30 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x0018ED30;
typedef struct _sceMpegDecoder_x0018ED30 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x0018ED30 callbacks[sceMpegCbNum_x0018ED30];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x0018ED30 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x0018ED30 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x0018ED30 slots[3];
    _sceMpegPicture_x0018ED30 pictures[9];
    _sceMpegSprBuffer_x0018ED30 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x0018ED30 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x0018ED30;
typedef struct SfdPlanes_x0018ED30 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018ED30;
typedef struct SfdUserData_x0018ED30 {
    char data[512];
    int size;
} SfdUserData_x0018ED30;
typedef struct SfdRecVideo_x0018ED30 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x0018ED30 stamp;
    SfdUserData_x0018ED30 user;
} SfdRecVideo_x0018ED30;
typedef struct SfdSlot_x0018ED30 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x0018ED30 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018ED30 *blob;
    M2vPicAtr_x0018ED30 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x0018ED30;
typedef struct SfdBufPool_x0018ED30 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x0018ED30 slot[18];
} SfdBufPool_x0018ED30;
typedef struct SfdMpvCond_x0018ED30 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018ED30;
typedef struct SfdMpvWorkBufs_x0018ED30 {
    int w[2];
} SfdMpvWorkBufs_x0018ED30;
typedef struct SfdMpvFrameBufs_x0018ED30 {
    int w[16];
} SfdMpvFrameBufs_x0018ED30;
typedef struct SfdIpuEntry_x0018ED30 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x0018ED30;
typedef struct SfdDmaTag_x0018ED30 {
    long long tag;
    long long pad;
} SfdDmaTag_x0018ED30;
typedef struct SfdIpuStream_x0018ED30 {
    void *base;
    SfdDmaTag_x0018ED30 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x0018ED30 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x0018ED30;
typedef struct SfdIpuCtl_x0018ED30 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x0018ED30 mpeg;
    SfdIpuStream_x0018ED30 stream;
    sceMpegCbDataError_x0018ED30 error;
} SfdIpuCtl_x0018ED30;
typedef struct SfdPtsComp_x0018ED30 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x0018ED30 ptsent;
} SfdPtsComp_x0018ED30;
typedef struct SfdMpv_x0018ED30 {
    void *handle;
    SfdMpvCond_x0018ED30 cond;
    SfdMpvWorkBufs_x0018ED30 work;
    SfdMpvFrameBufs_x0018ED30 bufs;
    SfdSlot_x0018ED30 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x0018ED30 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x0018ED30 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x0018ED30 planes[2];
    SfdSlot_x0018ED30 *first;
    SfdSlot_x0018ED30 *second;
    SfdSlot_x0018ED30 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x0018ED30 slots[16];
    SfdBufPool_x0018ED30 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x0018ED30 ipu;
} SfdMpv_x0018ED30;
typedef enum SfdPicType_x0018ED30 {
    SFD_PICTYPE_I_x0018ED30 = 1,
    SFD_PICTYPE_P_x0018ED30 = 2,
    SFD_PICTYPE_B_x0018ED30 = 3
} SfdPicType_x0018ED30;
typedef enum SfdFrmInfF60_x0018ED30 {
    SFD_FRMINF_F60_0_x0018ED30 = 0
} SfdFrmInfF60_x0018ED30;
typedef struct SfdFrameDetail_x0018ED30 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x0018ED30;
typedef struct SfdFrameInfo_x0018ED30 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x0018ED30 picType;
    int time;
    int unit;
    SfdBufFmt_x0018ED30 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x0018ED30 *picUsr;
    SfdFrmInfF60_x0018ED30 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x0018ED30 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x0018ED30;
typedef struct SfdVfrm_x0018ED30 {
    int used;
    int f4;
    SfdFrameInfo_x0018ED30 inf;
} SfdVfrm_x0018ED30;
typedef struct SfdPly_x0018ED30 SfdPly_x0018ED30;
typedef struct SfdRec_x0018ED30 SfdRec_x0018ED30;
typedef struct SfdRecSub_x0018ED30 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x0018ED30;
typedef struct SfdRecSlot_x0018ED30 {
    SfdRec_x0018ED30 *rec;
    SfdRecSub_x0018ED30 sub;
} SfdRecSlot_x0018ED30;
typedef struct SfdSysHd_x0018ED30 {
    char data[2][176];
    int len[2];
} SfdSysHd_x0018ED30;
typedef struct SfdRecSys_x0018ED30 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x0018ED30 syshd;
} SfdRecSys_x0018ED30;
typedef struct SfdRecAudio_x0018ED30 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x0018ED30;
struct SfdRec_x0018ED30 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x0018ED30 hdrInf;
    SfdRecSys_x0018ED30 sys;
    char pad2616[152];
    SfdRecVideo_x0018ED30 video;
    SfdRecAudio_x0018ED30 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x0018ED30 {
    SfdCrePrm_x0018ED30 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x0018ED30 hdr;
    SfdMvInf_x0018ED30 mvInf;
    char pad2380[4];
    SfdPlyInf_x0018ED30 plyInf;
    SfdErrInf_x0018ED30 err;
    int cond[SFD_COND_NUM_x0018ED30];
    int cond2[SFD_COND_NUM_x0018ED30];
    char pad3364[4];
    SfdTim_x0018ED30 tim;
    SfdBufEnt_x0018ED30 buf[8];
    SfdVfrm_x0018ED30 vfrm[16];
    SfdTrnSlot_x0018ED30 trn[9];
    char pad8588[4];
    SfdMpsPrm_x0018ED30 mps;
    char pad8944[176];
    SfdMpv_x0018ED30 mpv;
    SfdAdxCtx_x0018ED30 adxt;
    char pad13680[100];
    SfdAoap_x0018ED30 aoap;
    char pad13804[4];
    SfainfList_x0018ED30 uo;
    char pad13860[4];
    SfdRecSlot_x0018ED30 see;
    SfdTmrInf_x0018ED30 tmr;
};
void sfmps_ChkPrepFlg_x0018ED30(SfdPly_x0018ED30 *hn) __asm__("func_0018ED88");
void sfmps_AdjustAvPlay_x0018ED30(SfdPly_x0018ED30 *hn) __asm__("func_0018EF40");
void sfmps_GetStmNum_x0018ED30(SfdPly_x0018ED30 *hn, int *audio, int *video) __asm__("func_0018F008");
void sfmps_SetMvInf_x0018ED30(SfdPly_x0018ED30 *hn) __asm__("func_0018F0B8");
void sfmps_SetPicRec_x0018ED30(SfdPly_x0018ED30 *hn) __asm__("func_0018F150");
void sfmps_UpdateOther_x0018ED30(SfdPly_x0018ED30 *hn) __asm__("func_0018F208");
void sfmps_ChkPrepFlg_x0018ED30(SfdPly_x0018ED30 *hn) __asm__("func_0018ED88");
void sfmps_AdjustAvPlay_x0018ED30(SfdPly_x0018ED30 *hn) __asm__("func_0018EF40");
void sfmps_GetStmNum_x0018ED30(SfdPly_x0018ED30 *hn, int *audio, int *video) __asm__("func_0018F008");
void sfmps_SetMvInf_x0018ED30(SfdPly_x0018ED30 *hn) __asm__("func_0018F0B8");
void sfmps_SetPicRec_x0018ED30(SfdPly_x0018ED30 *hn) __asm__("func_0018F150");
void sfmps_UpdateOther_x0018ED30(SfdPly_x0018ED30 *hn) __asm__("func_0018F208");
void func_0018ED30_x0018ED30(SfdPly_x0018ED30 *hn) __asm__("func_0018ED30");
/* sfmps_ProcPrep: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmps.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018ED30_x0018ED30(SfdPly_x0018ED30 *hn) {
    int audio;
    int video;
    sfmps_GetStmNum_x0018ED30(hn, &audio, &video);
    sfmps_ChkPrepFlg_x0018ED30(hn);
    sfmps_SetMvInf_x0018ED30(hn);
    sfmps_AdjustAvPlay_x0018ED30(hn);
    sfmps_SetPicRec_x0018ED30(hn);
    sfmps_UpdateOther_x0018ED30(hn);
}
void func_0018ED88(u8 *arg0) {
    s32 temp_s0;

    if (func_0018EE10() != 1) {
        temp_s0 = *(s32 *)((u8 *)arg0 + 0x1C34);
        if ((func_0018B730(arg0, temp_s0) == 1) && (func_0018EEE0(arg0, temp_s0) != 0)) {
            func_0018EE80(arg0, 1);
        }
    }
}
s32 func_0018B730_x0018EE10(u8 *, s32) __asm__("func_0018B730");
s32 func_0018EE10_x0018EE10(u8 *p) __asm__("func_0018EE10");
s32 func_0018EE10_x0018EE10(u8 *p)
{
    s32 *q = (s32 *)(p + 0x1C24);
    s32 a = func_0018B730_x0018EE10(p, q[6]);
    s32 b = func_0018B730_x0018EE10(p, q[5]);
    return a | b | func_0018B730_x0018EE10(p, q[7]);
}
s32 func_0018B710_x0018EE80() __asm__("func_0018B710");
void func_0018EE80_x0018EE80(s32 arg0, s32 arg1) __asm__("func_0018EE80");
void func_0018EE80_x0018EE80(s32 arg0, s32 arg1) {
    u8 *temp_s1;

    temp_s1 = arg0 + 0x1C24;
    func_0018B710_x0018EE80(arg0, *(s32 *)((u8 *)temp_s1 + 0x18), arg1);
    func_0018B710_x0018EE80(arg0, *(s32 *)((u8 *)temp_s1 + 0x14), arg1);
    func_0018B710_x0018EE80(arg0, *(s32 *)((u8 *)temp_s1 + 0x1C), arg1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018EEE0);
s32 func_00199818_x0018EF40() __asm__("func_00199818");
s32 func_001999E0_x0018EF40() __asm__("func_001999E0");
s32 func_0019C140_x0018EF40() __asm__("func_0019C140");
void func_0018EF40_x0018EF40(u8 *arg0) __asm__("func_0018EF40");
void func_0018EF40_x0018EF40(u8 *arg0) {
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x1C2C);
    if ((func_001999E0_x0018EF40(arg0, (u8 *)6) == 1) && (*(s32 *)((u8 *)temp_s1 + 8) == 0) && (func_0019C140_x0018EF40(arg0, 6) != 0)) {
        func_00199818_x0018EF40(arg0, 6, 0);
    }
    if ((func_001999E0_x0018EF40(arg0, 5) == 1) && (*(s32 *)((u8 *)temp_s1 + 4) == 0) && (func_0019C140_x0018EF40(arg0, 7) != 0)) {
        func_00199818_x0018EF40(arg0, 5, 0);
    }
}
typedef struct { s32 h; s32 m1; s32 m2; } SfdSrc_x0018F008_x0018F008;
void func_0017ACA8_x0018F008(s32, s32 *, s32) __asm__("func_0017ACA8");
void func_0018F008_x0018F008(s32 a0, s32 *o1, s32 *o2) __asm__("func_0018F008");
void func_0018F008_x0018F008(s32 a0, s32 *o1, s32 *o2)
{
    SfdSrc_x0018F008_x0018F008 *s = *(SfdSrc_x0018F008_x0018F008 **)(a0 + 0x1C2C);
    s32 h = s->h;
    s32 buf[8];
    s32 i, m2, m1;

    i = 0;
    m2 = 0;
    m1 = 0;
    do {
        func_0017ACA8_x0018F008(h, buf, i);
        m2 = (buf[2] < m2) ? m2 : buf[2];
        m1 = (buf[3] < m1) ? m1 : buf[3];
    } while (++i < 3);
    s->m1 = m1;
    s->m2 = m2;
    *o1 = m2;
    *o2 = s->m1;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3cse_pad32_0018F008_0_xxxx;
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F0B8);
typedef struct { s32 on; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; s32 f1C; s32 f20; } SfdCfg_x0018F150_x0018F150;
typedef struct { s32 h; s32 f4; s32 f8; s32 fC; s32 f10; s32 pad[3]; s32 f20; s32 f24; } SfdSrc_x0018F150_x0018F150;
typedef struct { u8 pad[0x18]; s32 f18; s32 f1C; } Sfd90C_x0018F150_x0018F150;
typedef struct { u8 pad[0x14C]; s32 f14C; s32 f150; } SfdCC0_x0018F150_x0018F150;
SfdCfg_x0018F150_x0018F150 *func_0018F670_x0018F150(s32) __asm__("func_0018F670");
void func_0018F150_x0018F150(s32 a0) __asm__("func_0018F150");
void func_0018F150_x0018F150(s32 a0)
{
    SfdCfg_x0018F150_x0018F150 *c;
    SfdSrc_x0018F150_x0018F150 *s;
    SfdCC0_x0018F150_x0018F150 *h;
    Sfd90C_x0018F150_x0018F150 *p;

    c = func_0018F670_x0018F150(a0);
    if (c == 0) {
        return;
    }
    s = *(SfdSrc_x0018F150_x0018F150 **)(a0 + 0x1C2C);
    p = (Sfd90C_x0018F150_x0018F150 *)(a0 + 0x90C);
    h = (SfdCC0_x0018F150_x0018F150 *)(a0 + 0xCC0);
    if (s->f10 == 0x7FFFFFFF) {
        return;
    }
    h->f150 = s->f10 - c->f18;
    if (c->on != 0) {
        return;
    }
    c->f4 = p->f18 * 50;
    c->f8 = p->f1C;
    c->fC = s->f4;
    c->f10 = s->f8;
    c->f14 = h->f14C;
    c->f18 = s->fC;
    c->f1C = s->f20;
    c->f20 = s->f24;
}
void func_0018F208(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F210);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F2C8);
void func_0018F390_x0018F390(s32 *a0) __asm__("func_0018F390");
void func_0018F390_x0018F390(s32 *a0)
{
    s32 i;
    s32 *p;
    a0[0] = 0;
    a0[1] = 0;
    a0[2] = 0;
    a0[3] = 0x7FFFFFFF;
    a0[4] = 0x7FFFFFFF;
    a0[5] = 0;
    a0[6] = 0x7FFFFFFF;
    a0[7] = 0x7FFFFFFF;
    a0[8] = -1;
    a0[9] = -1;
    a0[10] = -1;
    a0[11] = -1;
    a0[12] = 0;
    for (i = 0x43, p = &a0[0x140 / 4]; i >= 0; i--) {
        *p-- = 0;
    }
    a0[0x144 / 4] = 0;
    a0[0x148 / 4] = 0;
}
s32 func_0018D650_x0018F400() __asm__("func_0018D650");
void func_0018F400_x0018F400(void) __asm__("func_0018F400");
void func_0018F400_x0018F400(void) {
    func_0018D650_x0018F400();
}
s32 func_0018D650_x0018F418(void *, s32) __asm__("func_0018D650");
s32 func_0018F468_x0018F418(s32) __asm__("func_0018F468");
void func_0018F418_x0018F418(u8 *arg0) __asm__("func_0018F418");
void func_0018F418_x0018F418(u8 *arg0) {
    if (func_0018F468_x0018F418(**(s32 **)((u8 *)arg0 + 0x1C2C)) != 0) {
        func_0018D650_x0018F418(arg0, 0xFF000D0A);
    }
}
void func_0018F468(void) {
    func_0017B3D0();
}
s32 func_0018F480(void) {
    return 0;
}
s32 func_0018F488(void) {
    return 0;
}
s32 func_0018F490(void) {
    return 0;
}
s32 func_0018F498(void) {
    return 0;
}
s32 func_0018D650_x0018F4A0() __asm__("func_0018D650");
void func_0018F4A0_x0018F4A0(s32 arg0) __asm__("func_0018F4A0");
void func_0018F4A0_x0018F4A0(s32 arg0) {
    func_0018D650_x0018F4A0(arg0, 0xFF000D0B);
}
s32 func_0018D650_x0018F4C0() __asm__("func_0018D650");
void func_0018F4C0_x0018F4C0(s32 arg0) __asm__("func_0018F4C0");
void func_0018F4C0_x0018F4C0(s32 arg0) {
    func_0018D650_x0018F4C0(arg0, 0xFF000D0B);
}
s32 func_0018D650_x0018F4E0() __asm__("func_0018D650");
void func_0018F4E0_x0018F4E0(s32 arg0) __asm__("func_0018F4E0");
void func_0018F4E0_x0018F4E0(s32 arg0) {
    func_0018D650_x0018F4E0(arg0, 0xFF000D0B);
}
s32 func_0018D650_x0018F500() __asm__("func_0018D650");
void func_0018F500_x0018F500(s32 arg0) __asm__("func_0018F500");
void func_0018F500_x0018F500(s32 arg0) {
    func_0018D650_x0018F500(arg0, 0xFF000D0B);
}
typedef struct { s32 on; u8 pad[0x10]; s32 f14; s32 f18; s32 f1C; s32 f20; } SfdCfg_x0018F520_x0018F520;
typedef struct { u8 pad[0xC]; s32 fC; u8 pad2[0x10]; s32 f20; s32 f24; } SfdDst_x0018F520_x0018F520;
typedef struct { u8 pad[0x14C]; s32 f14C; } SfdCC0_x0018F520_x0018F520;
SfdCfg_x0018F520_x0018F520 *func_0018F670_x0018F520(s32) __asm__("func_0018F670");
void func_0018CCB8_x0018F520(s32) __asm__("func_0018CCB8");
void func_0018F5C8_x0018F520(s32) __asm__("func_0018F5C8");
s32 func_0018F5D0_x0018F520(s32, SfdDst_x0018F520_x0018F520 *, SfdCfg_x0018F520_x0018F520 *) __asm__("func_0018F5D0");
s32 func_0018F520_x0018F520(s32 a0) __asm__("func_0018F520");
s32 func_0018F520_x0018F520(s32 a0)
{
    SfdCfg_x0018F520_x0018F520 *c;
    SfdDst_x0018F520_x0018F520 *d;
    SfdCC0_x0018F520_x0018F520 *h;
    s32 r;

    c = func_0018F670_x0018F520(a0);
    if (c == 0) {
        return 0;
    }
    if (c->on == 0) {
        return 0;
    }
    d = *(SfdDst_x0018F520_x0018F520 **)(a0 + 0x1C2C);
    func_0018CCB8_x0018F520(a0);
    func_0018F5C8_x0018F520(a0);
    h = (SfdCC0_x0018F520_x0018F520 *)(a0 + 0xCC0);
    r = func_0018F5D0_x0018F520(a0, d, c);
    if (r != 0) {
        return r;
    }
    d->f20 = c->f1C;
    d->f24 = c->f20;
    h->f14C = c->f14;
    d->fC = c->f18;
    return 0;
}
void func_0018F5C8(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018F5D0);
s32 func_0018F6C0_x0018F670(u8 *) __asm__("func_0018F6C0");
s32 func_0018F670_x0018F670(u8 *p) __asm__("func_0018F670");
s32 func_0018F670_x0018F670(u8 *p)
{
    if (*(s32 *)(p + 0x31E8) == 0) {
        return 0;
    }
    if (func_0018F6C0_x0018F670(p) > 0) {
        return 0;
    }
    return *(s32 *)(p + 0x31E8) + 0x8A0;
}
s32 func_0018F6C0(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C2C)) + 0x14);
}
struct SfdMpvCond_x0018F6D0;
typedef struct SfdMpvCond_x0018F6D0 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018F6D0;
typedef struct SfdMpvWorkBufs_x0018F6D0 {
    int w[2];
} SfdMpvWorkBufs_x0018F6D0;
typedef struct SfdMpvFrameBufs_x0018F6D0 {
    int w[16];
} SfdMpvFrameBufs_x0018F6D0;
typedef unsigned int size_t_x0018F6D0;
void *memset_x0018F6D0(void *, int, size_t_x0018F6D0) __asm__("memset");
extern SfdMpvCond_x0018F6D0 sfmpv_para_x0018F6D0 __asm__("D_00492988");
extern SfdMpvWorkBufs_x0018F6D0 sfmpv_rfb_adr_tbl_x0018F6D0 __asm__("D_004929B0");
extern SfdMpvFrameBufs_x0018F6D0 sfmpv_ta_adr_tbl_x0018F6D0 __asm__("D_004929B8");
void func_0018F6D0_x0018F6D0(SfdMpvCond_x0018F6D0 *cond) __asm__("func_0018F6D0");
/* SFD_SetMpvPara: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018F6D0_x0018F6D0(SfdMpvCond_x0018F6D0 *cond) {
    sfmpv_para_x0018F6D0 = *cond;
    sfmpv_para_x0018F6D0.rfb_adr = (sfmpv_para_x0018F6D0.rfb_adr + 0x3F) & ~0x3F;
    sfmpv_para_x0018F6D0.ta_adr = (sfmpv_para_x0018F6D0.ta_adr + 0x3F) & ~0x3F;
    memset_x0018F6D0(&sfmpv_rfb_adr_tbl_x0018F6D0, 0, 8);
    memset_x0018F6D0(&sfmpv_ta_adr_tbl_x0018F6D0, 0, 0x40);
}
extern struct S24 { int w[9]; } D_00766BA8_x0018F780 __asm__("D_00492988");
extern int D_00766BD0_x0018F780[] __asm__("D_004929B0");
extern int D_00766BD8_x0018F780[] __asm__("D_004929B8");
void func_0018F780_x0018F780(struct S24 *src, int *b, int *c) __asm__("func_0018F780");
/* SFD_SetMpvParaTbl: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00350150.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0018F780_x0018F780(struct S24 *src, int *b, int *c) {
    int i, n;
    D_00766BA8_x0018F780 = *src;
    D_00766BA8_x0018F780.w[4] = 0;
    D_00766BA8_x0018F780.w[8] = 0;
    for (i = 0; i < 2; i++) D_00766BD0_x0018F780[i] = (b[i] + 0x3F) & -0x40;
    n = src->w[7];
    for (i = 0; i < 0x10; i++) {
        if (i < n) D_00766BD8_x0018F780[i] = (c[i] + 0x3F) & -0x40;
        else D_00766BD8_x0018F780[i] = 0;
    }
}
struct SfdMpvCond_x0018F870;
struct SfdPlanes_x0018F870;
typedef struct SfdPlanes_x0018F870 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018F870;
typedef struct SfdMpvCond_x0018F870 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x0018F870;
void func_0018F870_x0018F870(SfdMpvCond_x0018F870 *cond, SfdPlanes_x0018F870 *planes) __asm__("func_0018F870");
/* SFD_MakeRfbInfo: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018F870_x0018F870(SfdMpvCond_x0018F870 *cond, SfdPlanes_x0018F870 *planes) {
    int columns = (cond->rfb_width + 15) / 16;
    int rows;
    int lumaBlocks = (columns * 16 + 63) / 64;
    int chromaBlocks;
    char *base;
    rows = (cond->rfb_height + 15) / 16;
    chromaBlocks = (columns * 8 + 63) / 64;
    base = (char *)cond->ta_adr;
    planes->lumaStride = lumaBlocks << 6;
    planes->chromaStride = chromaBlocks << 6;
    planes->base = base;
    planes->luma = base + ((lumaBlocks * rows) << 10);
    planes->chroma = planes->luma + ((chromaBlocks * rows) << 9);
}
struct SfdPlanes_x0018F910;
typedef struct SfdPlanes_x0018F910 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x0018F910;
void func_0018F910_x0018F910(char *base, int width, int height, SfdPlanes_x0018F910 *planes) __asm__("func_0018F910");
/* SFD_CalcYccPlane: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0018F910_x0018F910(char *base, int width, int height, SfdPlanes_x0018F910 *planes) {
    int columns = (width + 15) / 16;
    int rows;
    int lumaBlocks = (columns * 16 + 63) / 64;
    int chromaBlocks;
    rows = (height + 15) / 16;
    chromaBlocks = (columns * 8 + 63) / 64;
    planes->lumaStride = lumaBlocks << 6;
    planes->chromaStride = chromaBlocks << 6;
    planes->base = base;
    planes->luma = base + ((lumaBlocks * rows) << 10);
    planes->chroma = planes->luma + ((chromaBlocks * rows) << 9);
}
s32 func_0017E9E8_x0018F9A0(s32, s32, s32) __asm__("func_0017E9E8");
s32 func_0018D650_x0018F9A0(void *, s32) __asm__("func_0018D650");
s32 func_0018D870_x0018F9A0() __asm__("func_0018D870");
void func_0018F9A0_x0018F9A0(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0018F9A0");
void func_0018F9A0_x0018F9A0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 var_v1;

    var_v1 = 0;
    if (arg0 == NULL) {
        goto block_5;
    }
    if (func_0018D870_x0018F9A0(arg0) == 0) {
        goto block_4;
    }
    func_0018D650_x0018F9A0(NULL, 0xFF000181);
    return;
block_4:
    var_v1 = **(s32 **)((u8 *)arg0 + 0x1C70);
block_5:
    if (func_0017E9E8_x0018F9A0(var_v1, arg1, ((arg1 ^ 5) != 0) ? arg2 : 0) == 0) {
        goto block_8;
    }
    func_0018D650_x0018F9A0(arg0, 0xFF000F12);
    return;
block_8:
    return;
}
s32 func_0017EB00_x0018FA58(s32, s32, s32) __asm__("func_0017EB00");
u32 func_0018FA58_x0018FA58(u8 *arg0, s32 arg1, u32 arg2) __asm__("func_0018FA58");
u32 func_0018FA58_x0018FA58(u8 *arg0, s32 arg1, u32 arg2)
{
  s32 temp_a2;
  s32 temp_s3;
  s32 var_a1;
  s32 var_s1;
  u32 temp_s0;
  s32 var_s2;
  u32 temp_s0_2;

  temp_s3 = *(*((s32 **) (((u8 *) arg0) + 0x1C70)));
  if (temp_s3 == 0)
  {
    return 0;
  }
  temp_s0 = 2;
  temp_s0 = arg2 >> temp_s0;
  temp_s0_2 = (temp_s0 >= 0x11U) ? (0x10U) : (temp_s0);
  var_s2 = 0;
  if (temp_s0_2 != 0)
  {
    var_s1 = arg1;
    var_a1 = 0;
    do
    {
      var_a1 = var_s2;
      var_s2 += 1;
      do
      {
        temp_a2 = var_s1;
      }
      while (0);
      var_s1 += 4;
      func_0017EB00_x0018FA58(temp_s3, var_a1, temp_a2);
    }
    while (var_s2 < ((s32) temp_s0_2));
  }
  return temp_s0_2;
}
s32 func_0017E9E8_x0018FAE0(s32, s32, s32) __asm__("func_0017E9E8");
void func_0018FAE0_x0018FAE0(u8 *arg0, s32 *arg1, s32 arg2) __asm__("func_0018FAE0");
void func_0018FAE0_x0018FAE0(u8 *arg0, s32 *arg1, s32 arg2) {
    s32 *var_s0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s2;
    s32 var_s1;

    temp_s2 = **(s32 **)((u8 *)arg0 + 0x1C70);
    if (temp_s2 != 0) {
        var_s1 = 0;
        if (arg2 > 0) {
            var_s0 = arg1;
            do {
                temp_a2 = *var_s0;
                var_s0 += 1;
                temp_a1 = var_s1;
                var_s1 += 1;
                func_0017E9E8_x0018FAE0(temp_s2, temp_a1, temp_a2);
            } while (var_s1 < arg2);
        }
    }
}
typedef unsigned int u32_x0018FB58;
extern int fn_12_24990_x0018FB58(void *arg0, void *arg1) __asm__("func_0018D870");
extern int fn_12_24A88_x0018FB58(int arg0, u32_x0018FB58 arg1) __asm__("func_0018D650");
extern int fn_12_2ABF0_x0018FB58(void *arg0) __asm__("func_00194798");
int func_0018FB58_x0018FB58(void *arg0, int *arg1) __asm__("func_0018FB58");
/* fn_12_2A55C: from https://github.com/karamzov123/fzero-gx-decomp (src/rel/movie_module/fn_12_2A55C.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
int func_0018FB58_x0018FB58(void *arg0, int *arg1) {
    *arg1 = 0;
    if (fn_12_24990_x0018FB58(arg0, arg1)) {
        return fn_12_24A88_x0018FB58(0, 0xff000182);
    }
    *arg1 = fn_12_2ABF0_x0018FB58(arg0);
    return 0;
}
s32 func_0018D870_x0018FBC8(s32) __asm__("func_0018D870");
void func_0018D650_x0018FBC8(s32, s32) __asm__("func_0018D650");
s32 func_00194AB0_x0018FBC8(s32) __asm__("func_00194AB0");
s32 func_0018FBC8_x0018FBC8(s32 a0) __asm__("func_0018FBC8");
s32 func_0018FBC8_x0018FBC8(s32 a0)
{
    if (func_0018D870_x0018FBC8(a0) != 0) {
        func_0018D650_x0018FBC8(0, 0xFF000183);
        return 0;
    }
    return func_00194AB0_x0018FBC8(a0);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018FC18);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_0018FCC0);
s32 func_0017E368_x0018FE00(s32, s32 *) __asm__("func_0017E368");
s32 func_0018D650_x0018FE00(s32, s32) __asm__("func_0018D650");
s32 func_0018FEE0_x0018FE00() __asm__("func_0018FEE0");
s32 func_001957C8_x0018FE00() __asm__("func_001957C8");
s32 memset_x0018FE00(s32 *, s32, s32) __asm__("memset");
extern s32 D_00426B10_x0018FE00 __asm__("D_00426B10");
extern s32 D_0048E948_x0018FE00 __asm__("D_0048E948");
extern s32 D_00492988_x0018FE00 __asm__("D_00492988");
extern s32 D_004929B0_x0018FE00 __asm__("D_004929B0");
extern s32 D_004929B8_x0018FE00 __asm__("D_004929B8");
s32 func_0018FE00_x0018FE00(void) __asm__("func_0018FE00");
s32 func_0018FE00_x0018FE00(void)
{
  s32 temp_v0;
  func_001957C8_x0018FE00();
  if (func_0018FEE0_x0018FE00() != 0)
  {
    loop_1:
    goto loop_1;

  }
  temp_v0 = func_0017E368_x0018FE00(8, &D_0048E948_x0018FE00);
  if (temp_v0 != 0)
  {
    return func_0018D650_x0018FE00(0, (!((temp_v0 ^ 0xFF03FF05) != 0)) ? (0xFF000F13) : (0xFF000F01));
  }
  memset_x0018FE00(&D_00492988_x0018FE00, 0, 0x24);
  memset_x0018FE00(&D_004929B0_x0018FE00, 0, 8);
  memset_x0018FE00(&D_004929B8_x0018FE00, 0, 0x40);
  D_00426B10_x0018FE00 = 0;
  return 0;
}
s32 func_0018FEE0(void) {
    return 0;
}
s32 func_0018FEE8(void) {
    func_0017E7B8();
    return 0;
}
void func_0018FF08(void) {
    func_0018FF20();
}
s32 func_0018FFA0_x0018FF20() __asm__("func_0018FFA0");
s32 func_00190010_x0018FF20() __asm__("func_00190010");
s32 func_00190028_x0018FF20() __asm__("func_00190028");
s32 func_00190290_x0018FF20() __asm__("func_00190290");
s32 func_00190358_x0018FF20() __asm__("func_00190358");
s32 func_001999E0_x0018FF20() __asm__("func_001999E0");
s32 func_0018FF20_x0018FF20(s32 arg0) __asm__("func_0018FF20");
s32 func_0018FF20_x0018FF20(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = func_001999E0_x0018FF20(arg0, 5);
    if (var_v0 != 0) {
        if (func_00190010_x0018FF20(arg0) == 1) {
            return 0;
        }
        func_0018FFA0_x0018FF20(arg0);
        temp_s0 = func_00190358_x0018FF20(arg0);
        func_00190028_x0018FF20(arg0);
        func_00190290_x0018FF20(arg0);
        var_v0 = temp_s0;
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
s32 func_0018D3F8_x0018FFA0() __asm__("func_0018D3F8");
s32 func_0018F9A0_x0018FFA0() __asm__("func_0018F9A0");
s32 func_001999E0_x0018FFA0() __asm__("func_001999E0");
void func_0018FFA0_x0018FFA0(s32 arg0) __asm__("func_0018FFA0");
void func_0018FFA0_x0018FFA0(s32 arg0) {
    s32 var_a2;
    s32 temp_v0;

    if (func_001999E0_x0018FFA0(arg0, 0x1C) != 0) {
        temp_v0 = func_0018D3F8_x0018FFA0(arg0);
        var_a2 = 1;
        if ((temp_v0 == 0) || (var_a2 = 0, (temp_v0 > 0)) || (temp_v0 != -1)) {
            func_0018F9A0_x0018FFA0(arg0, 5, var_a2);
        }
    }
}
void func_0018B770_x00190010(u8 *, s32) __asm__("func_0018B770");
void func_00190010_x00190010(u8 *p) __asm__("func_00190010");
void func_00190010_x00190010(u8 *p) {
    func_0018B770_x00190010(p, *(s32 *)(p + 0x1C7C));
}
s32 func_0018B710_x00190028() __asm__("func_0018B710");
s32 func_0018B730_x00190028() __asm__("func_0018B730");
s32 func_001900D8_x00190028() __asm__("func_001900D8");
s32 func_00190268_x00190028() __asm__("func_00190268");
void func_00190028_x00190028(s32 arg0) __asm__("func_00190028");
void func_00190028_x00190028(s32 arg0) {
    s32 temp_s0;
    s32 temp_s2;
    u8 *temp_v0;

    temp_v0 = arg0 + 0x1C68;
    temp_s2 = *(s32 *)((u8 *)temp_v0 + 0x14);
    temp_s0 = *(s32 *)((u8 *)temp_v0 + 0x10);
    if ((func_0018B730_x00190028(arg0, temp_s2) != 1) && (func_0018B730_x00190028(arg0, temp_s0) == 1) && (func_001900D8_x00190028(arg0) != 0)) {
        func_0018B710_x00190028(arg0, temp_s2, 1);
        func_00190268_x00190028(arg0);
    }
}
s32 func_001900D8(s32 arg0) {
    if ((func_00194778() != 0) || ((func_00190138(arg0) != 0) && (func_00190180(arg0) != 0))) {
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190138);
s32 func_00191248_x00190180(void *) __asm__("func_00191248");
void func_0017C698_x00190180(s32, s32 *) __asm__("func_0017C698");
s32 func_0018AFB8_x00190180(void *, s32) __asm__("func_0018AFB8");
s32 func_0018AF78_x00190180(void *, s32) __asm__("func_0018AF78");
s32 func_0019C188_x00190180(void *, s32) __asm__("func_0019C188");
s32 func_00190180_x00190180(u8 *a0) __asm__("func_00190180");
s32 func_00190180_x00190180(u8 *a0)
{
    u8 *s;
    s32 h;
    s32 *p;
    s32 buf[2];
    s32 f;
    s32 x;

    s = *(u8 **)(a0 + 0x1C70);
    h = *(s32 *)s;
    p = (s32 *)(a0 + 0x78);
    if (func_00191248_x00190180(a0) == 1) {
        return 1;
    }
    if (p[0] != 0 && p[0x7C / 4] == 0) {
        return 1;
    }
    func_0017C698_x00190180(h, buf);
    if (buf[0] == 0x3FFFF) {
        return 1;
    }
    if (func_0018AFB8_x00190180(a0, 1) >= *(s32 *)(s + 0x114)) {
        return 1;
    }
    f = func_0019C188_x00190180(a0, 1) == 0;
    x = func_0018AFB8_x00190180(a0, f);
    if (x < func_0018AF78_x00190180(a0, f)) {
        return 0;
    }
    return 1;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3cse_pad32_00190180_0_xxxx;
void func_00190268_x00190268(u8 *arg0) __asm__("func_00190268");
void func_00190268_x00190268(u8 *arg0)
{
  u8 *new_var;
  if ((*((s32 *) ((new_var = (u8 *) (arg0 + 0xDD8)) + 0x24))) != 0x7FFFFFFF)
  {
    *((s32 *) (((u8 *) arg0) + 0xDD8)) = 1;
  }
}
s32 func_00190338_x00190290(void *, s32) __asm__("func_00190338");
s32 func_00194778_x00190290(void *) __asm__("func_00194778");
s32 func_00194798_x00190290() __asm__("func_00194798");
s32 func_00199818_x00190290(void *, s32, s32) __asm__("func_00199818");
void func_00190290_x00190290(u8 *arg0) __asm__("func_00190290");
void func_00190290_x00190290(u8 *arg0)
{
  s32 temp_v0;
  u8 *new_var;
  temp_v0 = func_00194798_x00190290();
  new_var = arg0 + 0x94C;
  if ((temp_v0 == (-1)) || (((func_00194778_x00190290(arg0) != 0) && (temp_v0 == 1)) && ((*((s32 *) (((u8 *) new_var) + 0x18))) != 0)))
  {
    func_00190338_x00190290(arg0, 1);
    if ((*((s32 *) (((u8 *) arg0) + 0x94C))) == 0)
    {
      func_00199818_x00190290(arg0, 5, 0);
    }
  }
}
s32 func_0018B750_x00190338() __asm__("func_0018B750");
void func_00190338_x00190338(u8 *arg0, s32 arg1) __asm__("func_00190338");
void func_00190338_x00190338(u8 *arg0, s32 arg1) {
    func_0018B750_x00190338(arg0, *(s32 *)((u8 *)arg0 + 0x1C7C), arg1);
}
s32 func_001903D0_x00190358(s32, s32 *, s32 *, s32 *) __asm__("func_001903D0");
s32 func_00190B68_x00190358(s32, s32, s32, s32, s32 *) __asm__("func_00190B68");
s32 func_00190358_x00190358(s32 a0) __asm__("func_00190358");
s32 func_00190358_x00190358(s32 a0)
{
    s32 a, b, c, d;
    s32 r;

    do {
        r = func_001903D0_x00190358(a0, &a, &b, &c);
        if (r != 0) {
            break;
        }
        r = func_00190B68_x00190358(a0, a, b, c, &d);
        if (r != 0) {
            break;
        }
    } while (d != 0);
    return r;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001903D0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190610);
typedef struct {
    unsigned int f0;
    unsigned int f4;
    unsigned int f8;
    unsigned int fC;
} SfMpv_x001907B8;
unsigned int func_001907B8_x001907B8(SfMpv_x001907B8 *p, unsigned int v) __asm__("func_001907B8");
/* sfmpv_CalcDistance: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00351108.c, MIT); ee-gcc 2.96 -O2 -G0 */
unsigned int func_001907B8_x001907B8(SfMpv_x001907B8 *p, unsigned int v) {
    unsigned int lo0 = p->f0;
    unsigned int r;
    if (v >= lo0 && v < lo0 + p->f4) {
        r = v - lo0;
    } else if (v >= p->f8 && v < p->f8 + p->fC) {
        r = (v - p->f8) + p->f4;
    } else {
        r = 0;
    }
    return r;
}
s32 func_0018AF78_x00190820() __asm__("func_0018AF78");
s32 func_0018B790_x00190820() __asm__("func_0018B790");
s32 func_0018D650_x00190820() __asm__("func_0018D650");
s32 func_00190820_x00190820(u8 *arg0) __asm__("func_00190820");
s32 func_00190820_x00190820(u8 *arg0) {
    s32 temp_s1;
    s32 temp_s2;

    temp_s2 = *(s32 *)((u8 *)arg0 + 0x1C78);
    temp_s1 = func_0018AF78_x00190820(arg0, temp_s2);
    if ((temp_s1 - func_0018B790_x00190820(arg0, temp_s2)) < *(s32 *)((u8 *)arg0 + 0x28)) {
        return func_0018D650_x00190820(arg0, 0xFF000F1C);
    }
    return 0;
}
typedef struct SfdSjChunk_x001908A8 {
    char *data;
    int len;
} SfdSjChunk_x001908A8;
typedef struct SfdBufStat_x001908A8 {
    SfdSjChunk_x001908A8 ck0;
    SfdSjChunk_x001908A8 ck1;
    char *tailData;
    int tailLen;
    int tailFlag;
    int pad28;
} SfdBufStat_x001908A8;
struct SfdBufStat_x001908A8;
int MPV_CheckDelim_x001908A8(const unsigned char *p) __asm__("func_0017B420");
char *MPV_SearchDelim_x001908A8(char *buf, int len, int mask) __asm__("func_0017B5B8");
typedef unsigned int size_t_x001908A8;
void *memcpy_x001908A8(void *, const void *, size_t_x001908A8) __asm__("func_00125740");
typedef enum SfdDelim_x001908A8 {
    SFD_DLM_SLICE_x001908A8 = 0x02,
    SFD_DLM_PIC_x001908A8 = 0x04,
    SFD_DLM_GOP_x001908A8 = 0x08,
    SFD_DLM_SEQ_x001908A8 = 0x40,
    SFD_DLM_END_x001908A8 = 0x80
} SfdDelim_x001908A8;
char *func_001908A8_x001908A8(SfdBufStat_x001908A8 *ring, int mask, SfdDelim_x001908A8 *code) __asm__("func_001908A8");
/* sfmpv_SearchDelim: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
char *func_001908A8_x001908A8(SfdBufStat_x001908A8 *ring, int mask, SfdDelim_x001908A8 *code) {
    char tmp[8];
    char *p;
    int n1;
    int n2;
    int i;
    int c;
    *code = 0;
    p = MPV_SearchDelim_x001908A8(ring->ck0.data, ring->ck0.len, mask);
    if (p != 0) {
        *code = MPV_CheckDelim_x001908A8(p);
        return p;
    }
    if (ring->ck1.len == 0) {
        return 0;
    }
    n1 = (ring->ck0.len < 3) ? ring->ck0.len : 3;
    n2 = (ring->ck1.len < 3) ? ring->ck1.len : 3;
    memcpy_x001908A8(tmp, ring->ck0.data + ring->ck0.len - n1, n1);
    memcpy_x001908A8(tmp + n1, ring->ck1.data, n2);
    for (i = 0; i < n1 + n2 - 3; i++) {
        c = MPV_CheckDelim_x001908A8(&tmp[i]);
        if (c & mask) {
            *code = c;
            return ring->ck0.data + ring->ck0.len - n1 + i;
        }
    }
    p = MPV_SearchDelim_x001908A8(ring->ck1.data, ring->ck1.len, mask);
    if (p != 0) {
        *code = MPV_CheckDelim_x001908A8(p);
        return p;
    }
    return 0;
}
typedef struct SfdSjChunk_x00190A00 {
    char *data;
    int len;
} SfdSjChunk_x00190A00;
typedef struct SfdBufStat_x00190A00 {
    SfdSjChunk_x00190A00 ck0;
    SfdSjChunk_x00190A00 ck1;
    char *tailData;
    int tailLen;
    int tailFlag;
    int pad28;
} SfdBufStat_x00190A00;
struct SfdBufStat_x00190A00;
int MPV_CheckDelim_x00190A00(const unsigned char *p) __asm__("func_0017B420");
char *MPV_BsearchDelim_x00190A00(char *end, int len, int mask) __asm__("func_0017B4B8");
typedef unsigned int size_t_x00190A00;
void *memcpy_x00190A00(void *, const void *, size_t_x00190A00) __asm__("func_00125740");
typedef enum SfdDelim_x00190A00 {
    SFD_DLM_SLICE_x00190A00 = 0x02,
    SFD_DLM_PIC_x00190A00 = 0x04,
    SFD_DLM_GOP_x00190A00 = 0x08,
    SFD_DLM_SEQ_x00190A00 = 0x40,
    SFD_DLM_END_x00190A00 = 0x80
} SfdDelim_x00190A00;
char *func_00190A00_x00190A00(SfdBufStat_x00190A00 *ring, int mask, SfdDelim_x00190A00 *code) __asm__("func_00190A00");
/* sfmpv_BsearchDelim: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
char *func_00190A00_x00190A00(SfdBufStat_x00190A00 *ring, int mask, SfdDelim_x00190A00 *code) {
    char tmp[8];
    char *p;
    int n1;
    int n2;
    int i;
    int c;
    *code = 0;
    if (ring->ck1.len != 0) {
        p = MPV_BsearchDelim_x00190A00(ring->ck1.data + ring->ck1.len, ring->ck1.len, mask);
        if (p != 0) {
            *code = MPV_CheckDelim_x00190A00(p);
            return p;
        }
        n1 = (ring->ck0.len < 3) ? ring->ck0.len : 3;
        n2 = (ring->ck1.len < 3) ? ring->ck1.len : 3;
        memcpy_x00190A00(tmp, ring->ck0.data + ring->ck0.len - n1, n1);
        memcpy_x00190A00(tmp + n1, ring->ck1.data, n2);
        for (i = 0; i < n1 + n2 - 3; i++) {
            c = MPV_CheckDelim_x00190A00(&tmp[i]);
            if (c & mask) {
                *code = c;
                return ring->ck0.data + ring->ck0.len - n1 + i;
            }
        }
    }
    p = MPV_BsearchDelim_x00190A00(ring->ck0.data + ring->ck0.len, ring->ck0.len, mask);
    if (p != 0) {
        *code = MPV_CheckDelim_x00190A00(p);
        return p;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190B68);
s32 func_0018AA80_x00190DF0(u8 *, s32, s32 *) __asm__("func_0018AA80");
void func_00190DF0_x00190DF0(u8 *arg0, s32 *arg1) __asm__("func_00190DF0");
void func_00190DF0_x00190DF0(u8 *arg0, s32 *arg1) {
    s32 buf[8];

    if (func_0018AA80_x00190DF0(arg0, *(s32 *)(arg0 + 0x1C78), buf) != 0) {
        arg1[0] = 0;
        arg1[1] = 0;
    } else {
        arg1[0] = buf[0];
        arg1[1] = buf[1];
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00190E40);
typedef struct SfMpv_x00190EF8 SfMpv_x00190EF8;
extern int func_003518D8_x00190EF8(SfMpv_x00190EF8 *p, int n) __asm__("func_00190F48");
extern void sfmpv_DiscardSec_x00190EF8(SfMpv_x00190EF8 *p, int n) __asm__("func_00191120");
int func_00190EF8_x00190EF8(SfMpv_x00190EF8 *p, int n) __asm__("func_00190EF8");
/* sfmpv_Concat: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00351888.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00190EF8_x00190EF8(SfMpv_x00190EF8 *p, int n)
{
    if (func_003518D8_x00190EF8(p, n) == -1)
        return -1;
    sfmpv_DiscardSec_x00190EF8(p, n);
    return 0;
}
typedef struct { u8 pad[0x78]; s32 f78; u8 pad2[0xC]; s32 f88; } SfdT_x00190F48_x00190F48;
s32 func_001999E0_x00190F48(s32, s32) __asm__("func_001999E0");
s32 func_00191018_x00190F48(s32) __asm__("func_00191018");
s32 func_00191078_x00190F48(s32) __asm__("func_00191078");
void func_0018B8F0_x00190F48(s32, s32) __asm__("func_0018B8F0");
s32 func_001957B8_x00190F48(s32) __asm__("func_001957B8");
s32 func_001960E0_x00190F48(s32) __asm__("func_001960E0");
void func_0019A010_x00190F48(void *, s32) __asm__("func_0019A010");
s32 func_00190F48_x00190F48(s32 a0) __asm__("func_00190F48");
s32 func_00190F48_x00190F48(s32 a0)
{
    u8 *h = (u8 *)a0 + 0xCC0;
    SfdT_x00190F48_x00190F48 *t = *(SfdT_x00190F48_x00190F48 **)(a0 + 0x1C70);
    s32 n;

    if (func_001999E0_x00190F48(a0, 6) == 0) {
        n = func_00191018_x00190F48(a0);
    } else {
        n = func_00191078_x00190F48(a0);
        if (n < 0) {
            return -1;
        }
    }
    if (n > 0) {
        func_0018B8F0_x00190F48(a0, n);
        t->f88++;
        if (func_001957B8_x00190F48(a0) != 0) {
            *(s32 *)(h + 0x154) = func_001960E0_x00190F48(a0) + 1;
        }
    }
    func_0019A010_x00190F48(h + 0x3C, 0x7FFFFFFF);
    func_0019A010_x00190F48(h + 0x68, -1);
    t->f78 = 0xC0;
    return 0;
}
void func_00191F48_x00191018(u8 *, s32 *) __asm__("func_00191F48");
void func_0019AE10_x00191018(s32 *, s32 *, s32 *) __asm__("func_0019AE10");
s32 func_00191018_x00191018(u8 *p) __asm__("func_00191018");
s32 func_00191018_x00191018(u8 *p)
{
    s32 buf[8];
    s32 a, b;
    u8 *q = p + 0xCFC;
    if (*(s32 *)(p + 0xD28) == 0) {
        return 0;
    }
    func_00191F48_x00191018(p + 0xD2C, buf);
    buf[6] = 0;
    func_0019AE10_x00191018(buf, &a, &b);
    return a - *(s32 *)(q + 0x24);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191078);
typedef struct SfdSj_x00191120 SfdSj_x00191120;
typedef struct SfdSjChunk_x00191120 {
    char *data;
    int len;
} SfdSjChunk_x00191120;
typedef struct SfdSjVtbl_x00191120 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00191120 *sj);
    int (*getUuid)(SfdSj_x00191120 *sj);
    void (*reset)(SfdSj_x00191120 *sj);
    void (*getChunk)(SfdSj_x00191120 *sj, int id, int n, SfdSjChunk_x00191120 *ck);
    void (*ungetChunk)(SfdSj_x00191120 *sj, int id, SfdSjChunk_x00191120 *ck);
    void (*putChunk)(SfdSj_x00191120 *sj, int id, SfdSjChunk_x00191120 *ck);
    int (*getNumData)(SfdSj_x00191120 *sj, int id);
} SfdSjVtbl_x00191120;
struct SfdSj_x00191120 {
    SfdSjVtbl_x00191120 *vtbl;
};
struct SfdSj_x00191120;
struct SfdRecSlot_x00191120;
struct SfdRec_x00191120;
struct SfdMpvCond_x00191120;
struct SfdPlanes_x00191120;
struct SfdFrameInfo_x00191120;
struct SfdPly_x00191120;
typedef int (*SfdTimeFn_x00191120)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x00191120 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00191120;
typedef struct SfdTimeRec_x00191120 {
    int valid;
    SfdTimeCode_x00191120 tc;
    int time;
    int unit;
} SfdTimeRec_x00191120;
typedef struct SfdTst_x00191120 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00191120;
typedef struct SfdSyncTally_x00191120 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x00191120;
typedef struct SfdSyncQueue_x00191120 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x00191120;
typedef struct SfdFieldEntry_x00191120 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x00191120;
typedef struct SfdPtsm_x00191120 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x00191120;
typedef struct SfdHdrAudio_x00191120 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x00191120;
typedef struct SfdHdrMux_x00191120 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x00191120;
typedef struct SfdHdrVideo_x00191120 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x00191120;
typedef struct SfdHdrInf_x00191120 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x00191120 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x00191120 audio;
    SfdHdrVideo_x00191120 video;
    int size;
    char data[2048];
} SfdHdrInf_x00191120;
typedef struct SfdMvInf_x00191120 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00191120;
typedef struct SfdPlyInf_x00191120 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x00191120;
typedef void (*SfdErrFn_x00191120)(void *obj, int code);
typedef struct SfdErrInf_x00191120 {
    SfdErrFn_x00191120 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x00191120;
typedef int (*SfdExtClockFn_x00191120)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x00191120)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x00191120 {
    SfdTimeFn_x00191120 timefn[6];
    SfdIsSkipFn_x00191120 isSkipFn;
    SfdTimeCode_x00191120 tc;
    SfdTimeRec_x00191120 state;
    SfdTimeRec_x00191120 best;
    SfdTimeRec_x00191120 tot;
    SfdTimeRec_x00191120 cur;
    SfdTimeRec_x00191120 latest;
    SfdTimeRec_x00191120 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x00191120 tally;
    SfdSyncQueue_x00191120 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x00191120 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x00191120 tst;
    SfdFieldEntry_x00191120 fields[64];
    SfdPtsm_x00191120 ptsm;
    char pad1468[36];
} SfdTim_x00191120;
enum {
    SFD_COND_VIDEO_x00191120 = 5,
    SFD_COND_AUDIO_x00191120 = 6,
    SFD_COND_KEEPSUP_x00191120 = 8,
    SFD_COND_SYNCMODE_x00191120 = 15,
    SFD_COND_ETIME_x00191120 = 20,
    SFD_COND_ETUNIT_x00191120 = 21,
    SFD_COND_LNKSTM_x00191120 = 49,
    SFD_COND_SUPPLY_END_x00191120 = 56,
    SFD_COND_DECODE_END_x00191120 = 57,
    SFD_COND_DEMUX_SPLIT_x00191120 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x00191120 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x00191120 = 80,
    SFD_COND_SYSHD_FN_x00191120 = 85,
    SFD_COND_SYSHD_FN_OBJ_x00191120 = 86,
    SFD_COND_NUM_x00191120 = 100
};
typedef enum SfdBufFmt_x00191120 {
    SFD_BUFFMT_0_x00191120 = 0
} SfdBufFmt_x00191120;
typedef enum SfdBufId_x00191120 {
    SFD_BUF_NONE_x00191120 = 8
} SfdBufId_x00191120;
typedef struct SfdCrePrm_x00191120 {
    struct SfdTrnConfig_x00191120 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x00191120 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x00191120;
typedef struct SfdItem_x00191120 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x00191120;
typedef struct SfdRing_x00191120 {
    SfdItem_x00191120 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x00191120;
typedef struct SfdBufInf_x00191120 {
    char *data;
    struct SfdSj_x00191120 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x00191120;
typedef struct SfdBufCur_x00191120 {
    char *pos;
    int len;
} SfdBufCur_x00191120;
typedef struct SfdBufDlm_x00191120 {
    char *pos;
    char *end;
} SfdBufDlm_x00191120;
typedef struct SfdBufRing_x00191120 {
    SfdBufInf_x00191120 sup;
    SfdBufDlm_x00191120 dlm;
    int wtot;
    int rtot;
    SfdRing_x00191120 ptsque;
} SfdBufRing_x00191120;
typedef struct SfdBufAring_x00191120 {
    SfdBufInf_x00191120 sup;
    SfdBufCur_x00191120 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x00191120;
typedef struct SfdUoch_x00191120 {
    struct SfdSj_x00191120 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x00191120;
typedef struct SfdBufEnt_x00191120 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x00191120 ring;
        SfdBufAring_x00191120 aring;
        SfdBufInf_x00191120 vfrm;
        SfdUoch_x00191120 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x00191120;
typedef int (*SfdTrnFn_x00191120)();
typedef struct SfdTrnConfig_x00191120 {
    SfdTrnFn_x00191120 *fns[9];
} SfdTrnConfig_x00191120;
typedef struct SfdMpsPrm_x00191120 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x00191120 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x00191120;
typedef struct SfdAdxCfg_x00191120 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x00191120;
typedef void (*SfdAdxStep_x00191120)(struct SfdPly_x00191120 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x00191120 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x00191120 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x00191120 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x00191120;
typedef struct SfdAoap_x00191120 {
    int rna;
    void (*setOutPan)(struct SfdPly_x00191120 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x00191120 *h, int ch);
    void (*setOutVol)(struct SfdPly_x00191120 *h, int vol);
    int (*getOutVol)(struct SfdPly_x00191120 *h);
    void (*setSpeed)(struct SfdPly_x00191120 *h, int speed);
} SfdAoap_x00191120;
typedef struct SfainfOut_x00191120 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x00191120;
typedef struct SfainfList_x00191120 {
    int nout;
    SfainfOut_x00191120 out[3];
} SfainfList_x00191120;
typedef struct SfdTrnSlot_x00191120 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x00191120 *mps;
        struct SfdMpv_x00191120 *mpv;
        SfdAdxCtx_x00191120 *adxt;
        SfdAoap_x00191120 *aoap;
        SfainfList_x00191120 *uo;
    } hn;
    SfdTrnFn_x00191120 *fns;
    SfdBufId_x00191120 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x00191120;
typedef struct SfdTsum_x00191120 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x00191120;
typedef struct SfdTmrInf_x00191120 {
    SfdTsum_x00191120 tsum[6];
} SfdTmrInf_x00191120;
struct SfdSj_x00191120;
typedef struct M2vErrInf_x00191120 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00191120;
typedef struct Mpeg2Ext_x00191120 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00191120;
typedef enum M2vFrameRate_x00191120 {
    M2V_FRAME_RATE_FORBIDDEN_x00191120 = 0
} M2vFrameRate_x00191120;
typedef enum M2vPicType_x00191120 {
    M2V_PICTYPE_I_x00191120 = 1,
    M2V_PICTYPE_P_x00191120 = 2,
    M2V_PICTYPE_B_x00191120 = 3,
    M2V_PICTYPE_D_x00191120 = 4
} M2vPicType_x00191120;
typedef enum M2vPicStruct_x00191120 {
    M2V_PICSTRUCT_TOP_FIELD_x00191120 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00191120 = 2,
    M2V_PICSTRUCT_FRAME_x00191120 = 3
} M2vPicStruct_x00191120;
typedef enum M2vPicAtrF64_x00191120 {
    M2V_PICATR_F64_0_x00191120 = 0
} M2vPicAtrF64_x00191120;
typedef struct M2vPicAtr_x00191120 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00191120 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00191120 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00191120 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00191120 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00191120;
typedef void (*M2vUsrDatFn_x00191120)(void *obj, int level);
typedef struct M2vUsrSj_x00191120 {
    struct SfdSj_x00191120 *sj;
    M2vUsrDatFn_x00191120 fn;
    void *obj;
} M2vUsrSj_x00191120;
typedef struct M2vPicUsr_x00191120 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00191120;
typedef void (*M2vCondFn_x00191120)();
typedef struct M2vObj_x00191120 {
    int stat;
    M2vErrInf_x00191120 err;
    M2vCondFn_x00191120 cond[16];
    M2vPicAtr_x00191120 picatr;
    char pad216[64];
    M2vUsrSj_x00191120 usrsj[4];
    M2vPicUsr_x00191120 picusr;
    char pad340[12];
    Mpeg2Ext_x00191120 ext;
    char pad1656[8];
} M2vObj_x00191120;
extern void M2V_SetErrFunc_x00191120(M2vObj_x00191120 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x00191120 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00191120;
typedef struct sceMpeg_x00191120 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00191120 *sys;
} sceMpeg_x00191120;
typedef enum {
    sceMpegCbError_x00191120,
    sceMpegCbNodata_x00191120,
    sceMpegCbStopDMA_x00191120,
    sceMpegCbRestartDMA_x00191120,
    sceMpegCbBackground_x00191120,
    sceMpegCbTimeStamp_x00191120,
    sceMpegCbStr_x00191120,
    sceMpegCbNum_x00191120
} sceMpegCbType_x00191120;
typedef struct {
    sceMpegCbType_x00191120 type;
    char *errMessage;
} sceMpegCbDataError_x00191120;
typedef struct {
    sceMpegCbType_x00191120 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00191120;
typedef struct {
    sceMpegCbType_x00191120 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00191120;
typedef union {
    sceMpegCbType_x00191120 type;
    sceMpegCbDataError_x00191120 error;
    sceMpegCbDataTimeStamp_x00191120 ts;
    sceMpegCbDataStr_x00191120 str;
} sceMpegCbData_x00191120;
typedef int (*sceMpegCallback_x00191120)(sceMpeg_x00191120 *mp, sceMpegCbData_x00191120 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00191120 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x00191120;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x00191120;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x00191120;
typedef struct {
    _sceMpegPicture_x00191120 *ref_image;
    _sceMpegPicture_x00191120 *prev_image;
    _sceMpegPicture_x00191120 *decode;
    _sceMpegPicture_x00191120 *image;
} _sceMpegPictureSlot_x00191120;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00191120;
typedef void (*_sceMpegMcKernel_x00191120)(_sceMpegMcFetch_x00191120 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x00191120 luma_kernel[4];
    _sceMpegMcKernel_x00191120 chroma_kernel[4];
    _sceMpegMcFetch_x00191120 luma[4];
    _sceMpegMcFetch_x00191120 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00191120;
typedef struct _sceMpegDecoder_x00191120 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x00191120 callbacks[sceMpegCbNum_x00191120];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x00191120 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x00191120 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00191120 slots[3];
    _sceMpegPicture_x00191120 pictures[9];
    _sceMpegSprBuffer_x00191120 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00191120 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x00191120;
typedef struct SfdPlanes_x00191120 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x00191120;
typedef struct SfdUserData_x00191120 {
    char data[512];
    int size;
} SfdUserData_x00191120;
typedef struct SfdRecVideo_x00191120 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x00191120 stamp;
    SfdUserData_x00191120 user;
} SfdRecVideo_x00191120;
typedef struct SfdSlot_x00191120 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00191120 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00191120 *blob;
    M2vPicAtr_x00191120 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00191120;
typedef struct SfdBufPool_x00191120 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00191120 slot[18];
} SfdBufPool_x00191120;
typedef struct SfdMpvCond_x00191120 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00191120;
typedef struct SfdMpvWorkBufs_x00191120 {
    int w[2];
} SfdMpvWorkBufs_x00191120;
typedef struct SfdMpvFrameBufs_x00191120 {
    int w[16];
} SfdMpvFrameBufs_x00191120;
typedef struct SfdIpuEntry_x00191120 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00191120;
typedef struct SfdDmaTag_x00191120 {
    long long tag;
    long long pad;
} SfdDmaTag_x00191120;
typedef struct SfdIpuStream_x00191120 {
    void *base;
    SfdDmaTag_x00191120 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00191120 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00191120;
typedef struct SfdIpuCtl_x00191120 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x00191120 mpeg;
    SfdIpuStream_x00191120 stream;
    sceMpegCbDataError_x00191120 error;
} SfdIpuCtl_x00191120;
typedef struct SfdPtsComp_x00191120 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x00191120 ptsent;
} SfdPtsComp_x00191120;
typedef struct SfdMpv_x00191120 {
    void *handle;
    SfdMpvCond_x00191120 cond;
    SfdMpvWorkBufs_x00191120 work;
    SfdMpvFrameBufs_x00191120 bufs;
    SfdSlot_x00191120 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x00191120 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x00191120 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x00191120 planes[2];
    SfdSlot_x00191120 *first;
    SfdSlot_x00191120 *second;
    SfdSlot_x00191120 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x00191120 slots[16];
    SfdBufPool_x00191120 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x00191120 ipu;
} SfdMpv_x00191120;
typedef enum SfdPicType_x00191120 {
    SFD_PICTYPE_I_x00191120 = 1,
    SFD_PICTYPE_P_x00191120 = 2,
    SFD_PICTYPE_B_x00191120 = 3
} SfdPicType_x00191120;
typedef enum SfdFrmInfF60_x00191120 {
    SFD_FRMINF_F60_0_x00191120 = 0
} SfdFrmInfF60_x00191120;
typedef struct SfdFrameDetail_x00191120 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x00191120;
typedef struct SfdFrameInfo_x00191120 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x00191120 picType;
    int time;
    int unit;
    SfdBufFmt_x00191120 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00191120 *picUsr;
    SfdFrmInfF60_x00191120 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x00191120 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x00191120;
typedef struct SfdVfrm_x00191120 {
    int used;
    int f4;
    SfdFrameInfo_x00191120 inf;
} SfdVfrm_x00191120;
typedef struct SfdPly_x00191120 SfdPly_x00191120;
typedef struct SfdRec_x00191120 SfdRec_x00191120;
typedef struct SfdRecSub_x00191120 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x00191120;
typedef struct SfdRecSlot_x00191120 {
    SfdRec_x00191120 *rec;
    SfdRecSub_x00191120 sub;
} SfdRecSlot_x00191120;
typedef struct SfdSysHd_x00191120 {
    char data[2][176];
    int len[2];
} SfdSysHd_x00191120;
typedef struct SfdRecSys_x00191120 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x00191120 syshd;
} SfdRecSys_x00191120;
typedef struct SfdRecAudio_x00191120 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x00191120;
struct SfdRec_x00191120 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x00191120 hdrInf;
    SfdRecSys_x00191120 sys;
    char pad2616[152];
    SfdRecVideo_x00191120 video;
    SfdRecAudio_x00191120 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x00191120 {
    SfdCrePrm_x00191120 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x00191120 hdr;
    SfdMvInf_x00191120 mvInf;
    char pad2380[4];
    SfdPlyInf_x00191120 plyInf;
    SfdErrInf_x00191120 err;
    int cond[SFD_COND_NUM_x00191120];
    int cond2[SFD_COND_NUM_x00191120];
    char pad3364[4];
    SfdTim_x00191120 tim;
    SfdBufEnt_x00191120 buf[8];
    SfdVfrm_x00191120 vfrm[16];
    SfdTrnSlot_x00191120 trn[9];
    char pad8588[4];
    SfdMpsPrm_x00191120 mps;
    char pad8944[176];
    SfdMpv_x00191120 mpv;
    SfdAdxCtx_x00191120 adxt;
    char pad13680[100];
    SfdAoap_x00191120 aoap;
    char pad13804[4];
    SfainfList_x00191120 uo;
    char pad13860[4];
    SfdRecSlot_x00191120 see;
    SfdTmrInf_x00191120 tmr;
};
int MPV_CheckDelim_x00191120(const unsigned char *p) __asm__("func_0017B420");
extern void mpvhook_SetErrFunc_x00191120(M2vObj_x00191120 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern int MPV_EntryErrFunc_x00191120(void *handle, void (*callback)(SfdPly_x00191120 *, int), SfdPly_x00191120 *player) __asm__("MPV_EntryErrFunc");
void sfmpv_AddRtotSj_x00191120(SfdPly_x00191120 *player, int amount) __asm__("func_001911E0");
void sfmpv_AddRtotSj_x00191120(SfdPly_x00191120 *player, int amount) __asm__("func_001911E0");
void func_00191120_x00191120(SfdPly_x00191120 *player, SfdSj_x00191120 *stream) __asm__("func_00191120");
/* sfmpv_DiscardSec: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00191120_x00191120(SfdPly_x00191120 *player, SfdSj_x00191120 *stream) {
    SfdSjChunk_x00191120 ck;
    for (;;) {
        stream->vtbl->getChunk(stream, 1, 4, &ck);
        if (ck.len != 4 || MPV_CheckDelim_x00191120((const unsigned char *)ck.data) != 128) {
            break;
        }
        stream->vtbl->putChunk(stream, 0, &ck);
        sfmpv_AddRtotSj_x00191120(player, 4);
    }
    stream->vtbl->ungetChunk(stream, 1, &ck);
}
s32 func_0018B0B8_x001911E0() __asm__("func_0018B0B8");
void func_001911E0_x001911E0(u8 *arg0, s32 arg1) __asm__("func_001911E0");
void func_001911E0_x001911E0(u8 *arg0, s32 arg1) {
    func_0018B0B8_x001911E0(arg0, *(s32 *)((u8 *)arg0 + 0x1C78), arg1);
}
typedef struct SfdSj_x00191200 SfdSj_x00191200;
typedef struct SfdSjChunk_x00191200 {
    char *data;
    int len;
} SfdSjChunk_x00191200;
typedef struct SfdSjVtbl_x00191200 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00191200 *sj);
    int (*getUuid)(SfdSj_x00191200 *sj);
    void (*reset)(SfdSj_x00191200 *sj);
    void (*getChunk)(SfdSj_x00191200 *sj, int id, int n, SfdSjChunk_x00191200 *ck);
    void (*ungetChunk)(SfdSj_x00191200 *sj, int id, SfdSjChunk_x00191200 *ck);
    void (*putChunk)(SfdSj_x00191200 *sj, int id, SfdSjChunk_x00191200 *ck);
    int (*getNumData)(SfdSj_x00191200 *sj, int id);
} SfdSjVtbl_x00191200;
struct SfdSj_x00191200 {
    SfdSjVtbl_x00191200 *vtbl;
};
struct SfdSj_x00191200;
struct SfdRecSlot_x00191200;
struct SfdRec_x00191200;
struct SfdMpvCond_x00191200;
struct SfdPlanes_x00191200;
struct SfdFrameInfo_x00191200;
struct SfdPly_x00191200;
typedef int (*SfdTimeFn_x00191200)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x00191200 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00191200;
typedef struct SfdTimeRec_x00191200 {
    int valid;
    SfdTimeCode_x00191200 tc;
    int time;
    int unit;
} SfdTimeRec_x00191200;
typedef struct SfdTst_x00191200 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00191200;
typedef struct SfdSyncTally_x00191200 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x00191200;
typedef struct SfdSyncQueue_x00191200 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x00191200;
typedef struct SfdFieldEntry_x00191200 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x00191200;
typedef struct SfdPtsm_x00191200 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x00191200;
typedef struct SfdHdrAudio_x00191200 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x00191200;
typedef struct SfdHdrMux_x00191200 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x00191200;
typedef struct SfdHdrVideo_x00191200 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x00191200;
typedef struct SfdHdrInf_x00191200 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x00191200 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x00191200 audio;
    SfdHdrVideo_x00191200 video;
    int size;
    char data[2048];
} SfdHdrInf_x00191200;
typedef struct SfdMvInf_x00191200 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00191200;
typedef struct SfdPlyInf_x00191200 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x00191200;
typedef void (*SfdErrFn_x00191200)(void *obj, int code);
typedef struct SfdErrInf_x00191200 {
    SfdErrFn_x00191200 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x00191200;
typedef int (*SfdExtClockFn_x00191200)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x00191200)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x00191200 {
    SfdTimeFn_x00191200 timefn[6];
    SfdIsSkipFn_x00191200 isSkipFn;
    SfdTimeCode_x00191200 tc;
    SfdTimeRec_x00191200 state;
    SfdTimeRec_x00191200 best;
    SfdTimeRec_x00191200 tot;
    SfdTimeRec_x00191200 cur;
    SfdTimeRec_x00191200 latest;
    SfdTimeRec_x00191200 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x00191200 tally;
    SfdSyncQueue_x00191200 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x00191200 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x00191200 tst;
    SfdFieldEntry_x00191200 fields[64];
    SfdPtsm_x00191200 ptsm;
    char pad1468[36];
} SfdTim_x00191200;
enum {
    SFD_COND_VIDEO_x00191200 = 5,
    SFD_COND_AUDIO_x00191200 = 6,
    SFD_COND_KEEPSUP_x00191200 = 8,
    SFD_COND_SYNCMODE_x00191200 = 15,
    SFD_COND_ETIME_x00191200 = 20,
    SFD_COND_ETUNIT_x00191200 = 21,
    SFD_COND_LNKSTM_x00191200 = 49,
    SFD_COND_SUPPLY_END_x00191200 = 56,
    SFD_COND_DECODE_END_x00191200 = 57,
    SFD_COND_DEMUX_SPLIT_x00191200 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x00191200 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x00191200 = 80,
    SFD_COND_SYSHD_FN_x00191200 = 85,
    SFD_COND_SYSHD_FN_OBJ_x00191200 = 86,
    SFD_COND_NUM_x00191200 = 100
};
typedef enum SfdBufFmt_x00191200 {
    SFD_BUFFMT_0_x00191200 = 0
} SfdBufFmt_x00191200;
typedef enum SfdBufId_x00191200 {
    SFD_BUF_NONE_x00191200 = 8
} SfdBufId_x00191200;
typedef struct SfdCrePrm_x00191200 {
    struct SfdTrnConfig_x00191200 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x00191200 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x00191200;
typedef struct SfdItem_x00191200 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x00191200;
typedef struct SfdRing_x00191200 {
    SfdItem_x00191200 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x00191200;
typedef struct SfdBufInf_x00191200 {
    char *data;
    struct SfdSj_x00191200 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x00191200;
typedef struct SfdBufCur_x00191200 {
    char *pos;
    int len;
} SfdBufCur_x00191200;
typedef struct SfdBufDlm_x00191200 {
    char *pos;
    char *end;
} SfdBufDlm_x00191200;
typedef struct SfdBufRing_x00191200 {
    SfdBufInf_x00191200 sup;
    SfdBufDlm_x00191200 dlm;
    int wtot;
    int rtot;
    SfdRing_x00191200 ptsque;
} SfdBufRing_x00191200;
typedef struct SfdBufAring_x00191200 {
    SfdBufInf_x00191200 sup;
    SfdBufCur_x00191200 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x00191200;
typedef struct SfdUoch_x00191200 {
    struct SfdSj_x00191200 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x00191200;
typedef struct SfdBufEnt_x00191200 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x00191200 ring;
        SfdBufAring_x00191200 aring;
        SfdBufInf_x00191200 vfrm;
        SfdUoch_x00191200 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x00191200;
typedef int (*SfdTrnFn_x00191200)();
typedef struct SfdTrnConfig_x00191200 {
    SfdTrnFn_x00191200 *fns[9];
} SfdTrnConfig_x00191200;
typedef struct SfdMpsPrm_x00191200 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x00191200 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x00191200;
typedef struct SfdAdxCfg_x00191200 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x00191200;
typedef void (*SfdAdxStep_x00191200)(struct SfdPly_x00191200 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x00191200 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x00191200 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x00191200 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x00191200;
typedef struct SfdAoap_x00191200 {
    int rna;
    void (*setOutPan)(struct SfdPly_x00191200 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x00191200 *h, int ch);
    void (*setOutVol)(struct SfdPly_x00191200 *h, int vol);
    int (*getOutVol)(struct SfdPly_x00191200 *h);
    void (*setSpeed)(struct SfdPly_x00191200 *h, int speed);
} SfdAoap_x00191200;
typedef struct SfainfOut_x00191200 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x00191200;
typedef struct SfainfList_x00191200 {
    int nout;
    SfainfOut_x00191200 out[3];
} SfainfList_x00191200;
typedef struct SfdTrnSlot_x00191200 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x00191200 *mps;
        struct SfdMpv_x00191200 *mpv;
        SfdAdxCtx_x00191200 *adxt;
        SfdAoap_x00191200 *aoap;
        SfainfList_x00191200 *uo;
    } hn;
    SfdTrnFn_x00191200 *fns;
    SfdBufId_x00191200 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x00191200;
typedef struct SfdTsum_x00191200 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x00191200;
typedef struct SfdTmrInf_x00191200 {
    SfdTsum_x00191200 tsum[6];
} SfdTmrInf_x00191200;
struct SfdSj_x00191200;
typedef struct M2vErrInf_x00191200 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00191200;
typedef struct Mpeg2Ext_x00191200 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00191200;
typedef enum M2vFrameRate_x00191200 {
    M2V_FRAME_RATE_FORBIDDEN_x00191200 = 0
} M2vFrameRate_x00191200;
typedef enum M2vPicType_x00191200 {
    M2V_PICTYPE_I_x00191200 = 1,
    M2V_PICTYPE_P_x00191200 = 2,
    M2V_PICTYPE_B_x00191200 = 3,
    M2V_PICTYPE_D_x00191200 = 4
} M2vPicType_x00191200;
typedef enum M2vPicStruct_x00191200 {
    M2V_PICSTRUCT_TOP_FIELD_x00191200 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00191200 = 2,
    M2V_PICSTRUCT_FRAME_x00191200 = 3
} M2vPicStruct_x00191200;
typedef enum M2vPicAtrF64_x00191200 {
    M2V_PICATR_F64_0_x00191200 = 0
} M2vPicAtrF64_x00191200;
typedef struct M2vPicAtr_x00191200 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00191200 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00191200 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00191200 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00191200 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00191200;
typedef void (*M2vUsrDatFn_x00191200)(void *obj, int level);
typedef struct M2vUsrSj_x00191200 {
    struct SfdSj_x00191200 *sj;
    M2vUsrDatFn_x00191200 fn;
    void *obj;
} M2vUsrSj_x00191200;
typedef struct M2vPicUsr_x00191200 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00191200;
typedef void (*M2vCondFn_x00191200)();
typedef struct M2vObj_x00191200 {
    int stat;
    M2vErrInf_x00191200 err;
    M2vCondFn_x00191200 cond[16];
    M2vPicAtr_x00191200 picatr;
    char pad216[64];
    M2vUsrSj_x00191200 usrsj[4];
    M2vPicUsr_x00191200 picusr;
    char pad340[12];
    Mpeg2Ext_x00191200 ext;
    char pad1656[8];
} M2vObj_x00191200;
extern void M2V_SetErrFunc_x00191200(M2vObj_x00191200 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x00191200 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00191200;
typedef struct sceMpeg_x00191200 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00191200 *sys;
} sceMpeg_x00191200;
typedef enum {
    sceMpegCbError_x00191200,
    sceMpegCbNodata_x00191200,
    sceMpegCbStopDMA_x00191200,
    sceMpegCbRestartDMA_x00191200,
    sceMpegCbBackground_x00191200,
    sceMpegCbTimeStamp_x00191200,
    sceMpegCbStr_x00191200,
    sceMpegCbNum_x00191200
} sceMpegCbType_x00191200;
typedef struct {
    sceMpegCbType_x00191200 type;
    char *errMessage;
} sceMpegCbDataError_x00191200;
typedef struct {
    sceMpegCbType_x00191200 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00191200;
typedef struct {
    sceMpegCbType_x00191200 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00191200;
typedef union {
    sceMpegCbType_x00191200 type;
    sceMpegCbDataError_x00191200 error;
    sceMpegCbDataTimeStamp_x00191200 ts;
    sceMpegCbDataStr_x00191200 str;
} sceMpegCbData_x00191200;
typedef int (*sceMpegCallback_x00191200)(sceMpeg_x00191200 *mp, sceMpegCbData_x00191200 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00191200 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x00191200;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x00191200;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x00191200;
typedef struct {
    _sceMpegPicture_x00191200 *ref_image;
    _sceMpegPicture_x00191200 *prev_image;
    _sceMpegPicture_x00191200 *decode;
    _sceMpegPicture_x00191200 *image;
} _sceMpegPictureSlot_x00191200;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00191200;
typedef void (*_sceMpegMcKernel_x00191200)(_sceMpegMcFetch_x00191200 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x00191200 luma_kernel[4];
    _sceMpegMcKernel_x00191200 chroma_kernel[4];
    _sceMpegMcFetch_x00191200 luma[4];
    _sceMpegMcFetch_x00191200 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00191200;
typedef struct _sceMpegDecoder_x00191200 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x00191200 callbacks[sceMpegCbNum_x00191200];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x00191200 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x00191200 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00191200 slots[3];
    _sceMpegPicture_x00191200 pictures[9];
    _sceMpegSprBuffer_x00191200 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00191200 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x00191200;
typedef struct SfdPlanes_x00191200 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x00191200;
typedef struct SfdUserData_x00191200 {
    char data[512];
    int size;
} SfdUserData_x00191200;
typedef struct SfdRecVideo_x00191200 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x00191200 stamp;
    SfdUserData_x00191200 user;
} SfdRecVideo_x00191200;
typedef struct SfdSlot_x00191200 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00191200 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00191200 *blob;
    M2vPicAtr_x00191200 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00191200;
typedef struct SfdBufPool_x00191200 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00191200 slot[18];
} SfdBufPool_x00191200;
typedef struct SfdMpvCond_x00191200 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00191200;
typedef struct SfdMpvWorkBufs_x00191200 {
    int w[2];
} SfdMpvWorkBufs_x00191200;
typedef struct SfdMpvFrameBufs_x00191200 {
    int w[16];
} SfdMpvFrameBufs_x00191200;
typedef struct SfdIpuEntry_x00191200 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00191200;
typedef struct SfdDmaTag_x00191200 {
    long long tag;
    long long pad;
} SfdDmaTag_x00191200;
typedef struct SfdIpuStream_x00191200 {
    void *base;
    SfdDmaTag_x00191200 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00191200 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00191200;
typedef struct SfdIpuCtl_x00191200 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x00191200 mpeg;
    SfdIpuStream_x00191200 stream;
    sceMpegCbDataError_x00191200 error;
} SfdIpuCtl_x00191200;
typedef struct SfdPtsComp_x00191200 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x00191200 ptsent;
} SfdPtsComp_x00191200;
typedef struct SfdMpv_x00191200 {
    void *handle;
    SfdMpvCond_x00191200 cond;
    SfdMpvWorkBufs_x00191200 work;
    SfdMpvFrameBufs_x00191200 bufs;
    SfdSlot_x00191200 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x00191200 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x00191200 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x00191200 planes[2];
    SfdSlot_x00191200 *first;
    SfdSlot_x00191200 *second;
    SfdSlot_x00191200 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x00191200 slots[16];
    SfdBufPool_x00191200 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x00191200 ipu;
} SfdMpv_x00191200;
typedef enum SfdPicType_x00191200 {
    SFD_PICTYPE_I_x00191200 = 1,
    SFD_PICTYPE_P_x00191200 = 2,
    SFD_PICTYPE_B_x00191200 = 3
} SfdPicType_x00191200;
typedef enum SfdFrmInfF60_x00191200 {
    SFD_FRMINF_F60_0_x00191200 = 0
} SfdFrmInfF60_x00191200;
typedef struct SfdFrameDetail_x00191200 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x00191200;
typedef struct SfdFrameInfo_x00191200 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x00191200 picType;
    int time;
    int unit;
    SfdBufFmt_x00191200 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00191200 *picUsr;
    SfdFrmInfF60_x00191200 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x00191200 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x00191200;
typedef struct SfdVfrm_x00191200 {
    int used;
    int f4;
    SfdFrameInfo_x00191200 inf;
} SfdVfrm_x00191200;
typedef struct SfdPly_x00191200 SfdPly_x00191200;
typedef struct SfdRec_x00191200 SfdRec_x00191200;
typedef struct SfdRecSub_x00191200 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x00191200;
typedef struct SfdRecSlot_x00191200 {
    SfdRec_x00191200 *rec;
    SfdRecSub_x00191200 sub;
} SfdRecSlot_x00191200;
typedef struct SfdSysHd_x00191200 {
    char data[2][176];
    int len[2];
} SfdSysHd_x00191200;
typedef struct SfdRecSys_x00191200 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x00191200 syshd;
} SfdRecSys_x00191200;
typedef struct SfdRecAudio_x00191200 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x00191200;
struct SfdRec_x00191200 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x00191200 hdrInf;
    SfdRecSys_x00191200 sys;
    char pad2616[152];
    SfdRecVideo_x00191200 video;
    SfdRecAudio_x00191200 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x00191200 {
    SfdCrePrm_x00191200 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x00191200 hdr;
    SfdMvInf_x00191200 mvInf;
    char pad2380[4];
    SfdPlyInf_x00191200 plyInf;
    SfdErrInf_x00191200 err;
    int cond[SFD_COND_NUM_x00191200];
    int cond2[SFD_COND_NUM_x00191200];
    char pad3364[4];
    SfdTim_x00191200 tim;
    SfdBufEnt_x00191200 buf[8];
    SfdVfrm_x00191200 vfrm[16];
    SfdTrnSlot_x00191200 trn[9];
    char pad8588[4];
    SfdMpsPrm_x00191200 mps;
    char pad8944[176];
    SfdMpv_x00191200 mpv;
    SfdAdxCtx_x00191200 adxt;
    char pad13680[100];
    SfdAoap_x00191200 aoap;
    char pad13804[4];
    SfainfList_x00191200 uo;
    char pad13860[4];
    SfdRecSlot_x00191200 see;
    SfdTmrInf_x00191200 tmr;
};
extern void mpvhook_SetErrFunc_x00191200(M2vObj_x00191200 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern int MPV_EntryErrFunc_x00191200(void *handle, void (*callback)(SfdPly_x00191200 *, int), SfdPly_x00191200 *player) __asm__("MPV_EntryErrFunc");
int sfmpv_GetTermSrc_x00191200(SfdPly_x00191200 *player) __asm__("func_00191248");
int sfmpv_GetTermSrc_x00191200(SfdPly_x00191200 *player) __asm__("func_00191248");
int func_00191200_x00191200(SfdPly_x00191200 *player, int level, int kind) __asm__("func_00191200");
/* sfmpv_IsTerm: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00191200_x00191200(SfdPly_x00191200 *player, int level, int kind) {
    if (kind == 128) {
        return 1;
    }
    if (level < 5 && sfmpv_GetTermSrc_x00191200(player) == 1) {
        return 1;
    }
    return 0;
}
void func_0018B770_x00191248(u8 *, s32) __asm__("func_0018B770");
void func_00191248_x00191248(u8 *p) __asm__("func_00191248");
void func_00191248_x00191248(u8 *p) {
    func_0018B770_x00191248(p, *(s32 *)(p + 0x1C78));
}
s32 func_00191260_x00191260(s32 a0, u32 a1, s32 a2, s32 a3) __asm__("func_00191260");
s32 func_00191260_x00191260(s32 a0, u32 a1, s32 a2, s32 a3)
{
    switch (a1) {
    case 0:
        return 0;
    case -2:
        if (a2 > 0) {
            return 0;
        }
        return ((s32 (*)(s32, s32))func_0018D650)(a0, a1);
    case -3:
        if (a2 > 0) {
            return 0;
        }
        return ((s32 (*)(s32, s32))func_0018D650)(a0, a1);
    default:
        return ((s32 (*)(s32, s32))func_0018D650)(a0, a3);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191300);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001914C8);
void func_00191588_x00191588(u8 *arg0) __asm__("func_00191588");
void func_00191588_x00191588(u8 *arg0)
{
  u8 *temp_v0;
  do
  {
    temp_v0 = arg0 + 0xC;
    *((s32 *) (((u8 *) arg0) + 8)) = 0;
    *((s32 *) (((u8 *) arg0) + 0)) = 0;
    *((s32 *) (((u8 *) arg0) + 4)) = 0;
    temp_v0++;
    temp_v0--;
    *((s32 *) (((u8 *) temp_v0) + 4)) = 0;
    *((s32 *) (((u8 *) temp_v0) + 8)) = -1;
  }
  while (0);
  *((s32 *) (((u8 *) arg0) + 0xC)) = -1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001915B0);
s32 func_0017EE78_x00191728() __asm__("func_0017EE78");
void func_00191728_x00191728(s32 arg0, s32 arg1) __asm__("func_00191728");
void func_00191728_x00191728(s32 arg0, s32 arg1) {
    func_0017EE78_x00191728(arg0, 0x015752A0, arg1);
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191748);
typedef struct { s32 w[11]; } Sfd2C_x001919D0_x001919D0;
typedef struct { u8 pad[0xC]; s32 on; u8 pad2[0x20]; s32 t; s32 y; } SfdEv_x001919D0_x001919D0;
typedef struct { u8 pad[0x60]; s32 base; u8 pad2[0x28]; s32 lim; } SfdCC0_x001919D0_x001919D0;
void func_0019AE10_x001919D0(void *, s32 *, s32 *) __asm__("func_0019AE10");
void func_001919D0_x001919D0(s32 a0, SfdEv_x001919D0_x001919D0 *a1) __asm__("func_001919D0");
void func_001919D0_x001919D0(s32 a0, SfdEv_x001919D0_x001919D0 *a1)
{
    SfdCC0_x001919D0_x001919D0 *h = (SfdCC0_x001919D0_x001919D0 *)(a0 + 0xCC0);
    s32 x, y, v;

    func_0019AE10_x001919D0((u8 *)a1 + 0x10, &x, &y);
    v = x - h->base;
    a1->on = 1;
    a1->t = v;
    a1->y = y;
    if (v >= h->lim) {
        *(Sfd2C_x001919D0_x001919D0 *)(a0 + 0xD28) = *(Sfd2C_x001919D0_x001919D0 *)&a1->on;
    }
}
typedef struct SfdSj_x00191AA0 SfdSj_x00191AA0;
typedef struct SfdSjChunk_x00191AA0 {
    char *data;
    int len;
} SfdSjChunk_x00191AA0;
typedef struct SfdSjVtbl_x00191AA0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00191AA0 *sj);
    int (*getUuid)(SfdSj_x00191AA0 *sj);
    void (*reset)(SfdSj_x00191AA0 *sj);
    void (*getChunk)(SfdSj_x00191AA0 *sj, int id, int n, SfdSjChunk_x00191AA0 *ck);
    void (*ungetChunk)(SfdSj_x00191AA0 *sj, int id, SfdSjChunk_x00191AA0 *ck);
    void (*putChunk)(SfdSj_x00191AA0 *sj, int id, SfdSjChunk_x00191AA0 *ck);
    int (*getNumData)(SfdSj_x00191AA0 *sj, int id);
} SfdSjVtbl_x00191AA0;
struct SfdSj_x00191AA0 {
    SfdSjVtbl_x00191AA0 *vtbl;
};
struct SfdSj_x00191AA0;
struct SfdRecSlot_x00191AA0;
struct SfdRec_x00191AA0;
struct SfdMpvCond_x00191AA0;
struct SfdPlanes_x00191AA0;
struct SfdFrameInfo_x00191AA0;
struct SfdPly_x00191AA0;
typedef int (*SfdTimeFn_x00191AA0)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x00191AA0 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00191AA0;
typedef struct SfdTimeRec_x00191AA0 {
    int valid;
    SfdTimeCode_x00191AA0 tc;
    int time;
    int unit;
} SfdTimeRec_x00191AA0;
typedef struct SfdTst_x00191AA0 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00191AA0;
typedef struct SfdSyncTally_x00191AA0 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x00191AA0;
typedef struct SfdSyncQueue_x00191AA0 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x00191AA0;
typedef struct SfdFieldEntry_x00191AA0 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x00191AA0;
typedef struct SfdPtsm_x00191AA0 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x00191AA0;
typedef struct SfdHdrAudio_x00191AA0 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x00191AA0;
typedef struct SfdHdrMux_x00191AA0 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x00191AA0;
typedef struct SfdHdrVideo_x00191AA0 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x00191AA0;
typedef struct SfdHdrInf_x00191AA0 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x00191AA0 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x00191AA0 audio;
    SfdHdrVideo_x00191AA0 video;
    int size;
    char data[2048];
} SfdHdrInf_x00191AA0;
typedef struct SfdMvInf_x00191AA0 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00191AA0;
typedef struct SfdPlyInf_x00191AA0 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x00191AA0;
typedef void (*SfdErrFn_x00191AA0)(void *obj, int code);
typedef struct SfdErrInf_x00191AA0 {
    SfdErrFn_x00191AA0 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x00191AA0;
typedef int (*SfdExtClockFn_x00191AA0)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x00191AA0)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x00191AA0 {
    SfdTimeFn_x00191AA0 timefn[6];
    SfdIsSkipFn_x00191AA0 isSkipFn;
    SfdTimeCode_x00191AA0 tc;
    SfdTimeRec_x00191AA0 state;
    SfdTimeRec_x00191AA0 best;
    SfdTimeRec_x00191AA0 tot;
    SfdTimeRec_x00191AA0 cur;
    SfdTimeRec_x00191AA0 latest;
    SfdTimeRec_x00191AA0 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x00191AA0 tally;
    SfdSyncQueue_x00191AA0 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x00191AA0 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x00191AA0 tst;
    SfdFieldEntry_x00191AA0 fields[64];
    SfdPtsm_x00191AA0 ptsm;
    char pad1468[36];
} SfdTim_x00191AA0;
enum {
    SFD_COND_VIDEO_x00191AA0 = 5,
    SFD_COND_AUDIO_x00191AA0 = 6,
    SFD_COND_KEEPSUP_x00191AA0 = 8,
    SFD_COND_SYNCMODE_x00191AA0 = 15,
    SFD_COND_ETIME_x00191AA0 = 20,
    SFD_COND_ETUNIT_x00191AA0 = 21,
    SFD_COND_LNKSTM_x00191AA0 = 49,
    SFD_COND_SUPPLY_END_x00191AA0 = 56,
    SFD_COND_DECODE_END_x00191AA0 = 57,
    SFD_COND_DEMUX_SPLIT_x00191AA0 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x00191AA0 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x00191AA0 = 80,
    SFD_COND_SYSHD_FN_x00191AA0 = 85,
    SFD_COND_SYSHD_FN_OBJ_x00191AA0 = 86,
    SFD_COND_NUM_x00191AA0 = 100
};
typedef enum SfdBufFmt_x00191AA0 {
    SFD_BUFFMT_0_x00191AA0 = 0
} SfdBufFmt_x00191AA0;
typedef enum SfdBufId_x00191AA0 {
    SFD_BUF_NONE_x00191AA0 = 8
} SfdBufId_x00191AA0;
typedef struct SfdCrePrm_x00191AA0 {
    struct SfdTrnConfig_x00191AA0 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x00191AA0 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x00191AA0;
typedef struct SfdItem_x00191AA0 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x00191AA0;
typedef struct SfdRing_x00191AA0 {
    SfdItem_x00191AA0 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x00191AA0;
typedef struct SfdBufInf_x00191AA0 {
    char *data;
    struct SfdSj_x00191AA0 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x00191AA0;
typedef struct SfdBufCur_x00191AA0 {
    char *pos;
    int len;
} SfdBufCur_x00191AA0;
typedef struct SfdBufDlm_x00191AA0 {
    char *pos;
    char *end;
} SfdBufDlm_x00191AA0;
typedef struct SfdBufRing_x00191AA0 {
    SfdBufInf_x00191AA0 sup;
    SfdBufDlm_x00191AA0 dlm;
    int wtot;
    int rtot;
    SfdRing_x00191AA0 ptsque;
} SfdBufRing_x00191AA0;
typedef struct SfdBufAring_x00191AA0 {
    SfdBufInf_x00191AA0 sup;
    SfdBufCur_x00191AA0 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x00191AA0;
typedef struct SfdUoch_x00191AA0 {
    struct SfdSj_x00191AA0 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x00191AA0;
typedef struct SfdBufEnt_x00191AA0 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x00191AA0 ring;
        SfdBufAring_x00191AA0 aring;
        SfdBufInf_x00191AA0 vfrm;
        SfdUoch_x00191AA0 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x00191AA0;
typedef int (*SfdTrnFn_x00191AA0)();
typedef struct SfdTrnConfig_x00191AA0 {
    SfdTrnFn_x00191AA0 *fns[9];
} SfdTrnConfig_x00191AA0;
typedef struct SfdMpsPrm_x00191AA0 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x00191AA0 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x00191AA0;
typedef struct SfdAdxCfg_x00191AA0 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x00191AA0;
typedef void (*SfdAdxStep_x00191AA0)(struct SfdPly_x00191AA0 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x00191AA0 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x00191AA0 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x00191AA0 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x00191AA0;
typedef struct SfdAoap_x00191AA0 {
    int rna;
    void (*setOutPan)(struct SfdPly_x00191AA0 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x00191AA0 *h, int ch);
    void (*setOutVol)(struct SfdPly_x00191AA0 *h, int vol);
    int (*getOutVol)(struct SfdPly_x00191AA0 *h);
    void (*setSpeed)(struct SfdPly_x00191AA0 *h, int speed);
} SfdAoap_x00191AA0;
typedef struct SfainfOut_x00191AA0 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x00191AA0;
typedef struct SfainfList_x00191AA0 {
    int nout;
    SfainfOut_x00191AA0 out[3];
} SfainfList_x00191AA0;
typedef struct SfdTrnSlot_x00191AA0 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x00191AA0 *mps;
        struct SfdMpv_x00191AA0 *mpv;
        SfdAdxCtx_x00191AA0 *adxt;
        SfdAoap_x00191AA0 *aoap;
        SfainfList_x00191AA0 *uo;
    } hn;
    SfdTrnFn_x00191AA0 *fns;
    SfdBufId_x00191AA0 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x00191AA0;
typedef struct SfdTsum_x00191AA0 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x00191AA0;
typedef struct SfdTmrInf_x00191AA0 {
    SfdTsum_x00191AA0 tsum[6];
} SfdTmrInf_x00191AA0;
void SFSET_SetCond_x00191AA0(void *sfd, int index, int value) __asm__("func_00199818");
int SFSET_GetCond_x00191AA0(void *sfd, int index) __asm__("func_001999E0");
struct SfdSj_x00191AA0;
typedef struct M2vErrInf_x00191AA0 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00191AA0;
typedef struct Mpeg2Ext_x00191AA0 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00191AA0;
typedef enum M2vFrameRate_x00191AA0 {
    M2V_FRAME_RATE_FORBIDDEN_x00191AA0 = 0
} M2vFrameRate_x00191AA0;
typedef enum M2vPicType_x00191AA0 {
    M2V_PICTYPE_I_x00191AA0 = 1,
    M2V_PICTYPE_P_x00191AA0 = 2,
    M2V_PICTYPE_B_x00191AA0 = 3,
    M2V_PICTYPE_D_x00191AA0 = 4
} M2vPicType_x00191AA0;
typedef enum M2vPicStruct_x00191AA0 {
    M2V_PICSTRUCT_TOP_FIELD_x00191AA0 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00191AA0 = 2,
    M2V_PICSTRUCT_FRAME_x00191AA0 = 3
} M2vPicStruct_x00191AA0;
typedef enum M2vPicAtrF64_x00191AA0 {
    M2V_PICATR_F64_0_x00191AA0 = 0
} M2vPicAtrF64_x00191AA0;
typedef struct M2vPicAtr_x00191AA0 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00191AA0 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00191AA0 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00191AA0 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00191AA0 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00191AA0;
typedef void (*M2vUsrDatFn_x00191AA0)(void *obj, int level);
typedef struct M2vUsrSj_x00191AA0 {
    struct SfdSj_x00191AA0 *sj;
    M2vUsrDatFn_x00191AA0 fn;
    void *obj;
} M2vUsrSj_x00191AA0;
typedef struct M2vPicUsr_x00191AA0 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00191AA0;
typedef void (*M2vCondFn_x00191AA0)();
typedef struct M2vObj_x00191AA0 {
    int stat;
    M2vErrInf_x00191AA0 err;
    M2vCondFn_x00191AA0 cond[16];
    M2vPicAtr_x00191AA0 picatr;
    char pad216[64];
    M2vUsrSj_x00191AA0 usrsj[4];
    M2vPicUsr_x00191AA0 picusr;
    char pad340[12];
    Mpeg2Ext_x00191AA0 ext;
    char pad1656[8];
} M2vObj_x00191AA0;
extern void M2V_SetErrFunc_x00191AA0(M2vObj_x00191AA0 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x00191AA0 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00191AA0;
typedef struct sceMpeg_x00191AA0 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00191AA0 *sys;
} sceMpeg_x00191AA0;
typedef enum {
    sceMpegCbError_x00191AA0,
    sceMpegCbNodata_x00191AA0,
    sceMpegCbStopDMA_x00191AA0,
    sceMpegCbRestartDMA_x00191AA0,
    sceMpegCbBackground_x00191AA0,
    sceMpegCbTimeStamp_x00191AA0,
    sceMpegCbStr_x00191AA0,
    sceMpegCbNum_x00191AA0
} sceMpegCbType_x00191AA0;
typedef struct {
    sceMpegCbType_x00191AA0 type;
    char *errMessage;
} sceMpegCbDataError_x00191AA0;
typedef struct {
    sceMpegCbType_x00191AA0 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00191AA0;
typedef struct {
    sceMpegCbType_x00191AA0 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00191AA0;
typedef union {
    sceMpegCbType_x00191AA0 type;
    sceMpegCbDataError_x00191AA0 error;
    sceMpegCbDataTimeStamp_x00191AA0 ts;
    sceMpegCbDataStr_x00191AA0 str;
} sceMpegCbData_x00191AA0;
typedef int (*sceMpegCallback_x00191AA0)(sceMpeg_x00191AA0 *mp, sceMpegCbData_x00191AA0 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00191AA0 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x00191AA0;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x00191AA0;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x00191AA0;
typedef struct {
    _sceMpegPicture_x00191AA0 *ref_image;
    _sceMpegPicture_x00191AA0 *prev_image;
    _sceMpegPicture_x00191AA0 *decode;
    _sceMpegPicture_x00191AA0 *image;
} _sceMpegPictureSlot_x00191AA0;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00191AA0;
typedef void (*_sceMpegMcKernel_x00191AA0)(_sceMpegMcFetch_x00191AA0 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x00191AA0 luma_kernel[4];
    _sceMpegMcKernel_x00191AA0 chroma_kernel[4];
    _sceMpegMcFetch_x00191AA0 luma[4];
    _sceMpegMcFetch_x00191AA0 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00191AA0;
typedef struct _sceMpegDecoder_x00191AA0 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x00191AA0 callbacks[sceMpegCbNum_x00191AA0];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x00191AA0 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x00191AA0 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00191AA0 slots[3];
    _sceMpegPicture_x00191AA0 pictures[9];
    _sceMpegSprBuffer_x00191AA0 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00191AA0 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x00191AA0;
typedef struct SfdPlanes_x00191AA0 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x00191AA0;
typedef struct SfdUserData_x00191AA0 {
    char data[512];
    int size;
} SfdUserData_x00191AA0;
typedef struct SfdRecVideo_x00191AA0 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x00191AA0 stamp;
    SfdUserData_x00191AA0 user;
} SfdRecVideo_x00191AA0;
typedef struct SfdSlot_x00191AA0 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00191AA0 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00191AA0 *blob;
    M2vPicAtr_x00191AA0 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00191AA0;
typedef struct SfdBufPool_x00191AA0 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00191AA0 slot[18];
} SfdBufPool_x00191AA0;
typedef struct SfdMpvCond_x00191AA0 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00191AA0;
typedef struct SfdMpvWorkBufs_x00191AA0 {
    int w[2];
} SfdMpvWorkBufs_x00191AA0;
typedef struct SfdMpvFrameBufs_x00191AA0 {
    int w[16];
} SfdMpvFrameBufs_x00191AA0;
typedef struct SfdIpuEntry_x00191AA0 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00191AA0;
typedef struct SfdDmaTag_x00191AA0 {
    long long tag;
    long long pad;
} SfdDmaTag_x00191AA0;
typedef struct SfdIpuStream_x00191AA0 {
    void *base;
    SfdDmaTag_x00191AA0 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00191AA0 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00191AA0;
typedef struct SfdIpuCtl_x00191AA0 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x00191AA0 mpeg;
    SfdIpuStream_x00191AA0 stream;
    sceMpegCbDataError_x00191AA0 error;
} SfdIpuCtl_x00191AA0;
typedef struct SfdPtsComp_x00191AA0 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x00191AA0 ptsent;
} SfdPtsComp_x00191AA0;
typedef struct SfdMpv_x00191AA0 {
    void *handle;
    SfdMpvCond_x00191AA0 cond;
    SfdMpvWorkBufs_x00191AA0 work;
    SfdMpvFrameBufs_x00191AA0 bufs;
    SfdSlot_x00191AA0 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x00191AA0 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x00191AA0 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x00191AA0 planes[2];
    SfdSlot_x00191AA0 *first;
    SfdSlot_x00191AA0 *second;
    SfdSlot_x00191AA0 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x00191AA0 slots[16];
    SfdBufPool_x00191AA0 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x00191AA0 ipu;
} SfdMpv_x00191AA0;
typedef enum SfdPicType_x00191AA0 {
    SFD_PICTYPE_I_x00191AA0 = 1,
    SFD_PICTYPE_P_x00191AA0 = 2,
    SFD_PICTYPE_B_x00191AA0 = 3
} SfdPicType_x00191AA0;
typedef enum SfdFrmInfF60_x00191AA0 {
    SFD_FRMINF_F60_0_x00191AA0 = 0
} SfdFrmInfF60_x00191AA0;
typedef struct SfdFrameDetail_x00191AA0 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x00191AA0;
typedef struct SfdFrameInfo_x00191AA0 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x00191AA0 picType;
    int time;
    int unit;
    SfdBufFmt_x00191AA0 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00191AA0 *picUsr;
    SfdFrmInfF60_x00191AA0 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x00191AA0 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x00191AA0;
typedef struct SfdVfrm_x00191AA0 {
    int used;
    int f4;
    SfdFrameInfo_x00191AA0 inf;
} SfdVfrm_x00191AA0;
typedef struct SfdPly_x00191AA0 SfdPly_x00191AA0;
typedef struct SfdRec_x00191AA0 SfdRec_x00191AA0;
typedef struct SfdRecSub_x00191AA0 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x00191AA0;
typedef struct SfdRecSlot_x00191AA0 {
    SfdRec_x00191AA0 *rec;
    SfdRecSub_x00191AA0 sub;
} SfdRecSlot_x00191AA0;
typedef struct SfdSysHd_x00191AA0 {
    char data[2][176];
    int len[2];
} SfdSysHd_x00191AA0;
typedef struct SfdRecSys_x00191AA0 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x00191AA0 syshd;
} SfdRecSys_x00191AA0;
typedef struct SfdRecAudio_x00191AA0 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x00191AA0;
struct SfdRec_x00191AA0 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x00191AA0 hdrInf;
    SfdRecSys_x00191AA0 sys;
    char pad2616[152];
    SfdRecVideo_x00191AA0 video;
    SfdRecAudio_x00191AA0 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x00191AA0 {
    SfdCrePrm_x00191AA0 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x00191AA0 hdr;
    SfdMvInf_x00191AA0 mvInf;
    char pad2380[4];
    SfdPlyInf_x00191AA0 plyInf;
    SfdErrInf_x00191AA0 err;
    int cond[SFD_COND_NUM_x00191AA0];
    int cond2[SFD_COND_NUM_x00191AA0];
    char pad3364[4];
    SfdTim_x00191AA0 tim;
    SfdBufEnt_x00191AA0 buf[8];
    SfdVfrm_x00191AA0 vfrm[16];
    SfdTrnSlot_x00191AA0 trn[9];
    char pad8588[4];
    SfdMpsPrm_x00191AA0 mps;
    char pad8944[176];
    SfdMpv_x00191AA0 mpv;
    SfdAdxCtx_x00191AA0 adxt;
    char pad13680[100];
    SfdAoap_x00191AA0 aoap;
    char pad13804[4];
    SfainfList_x00191AA0 uo;
    char pad13860[4];
    SfdRecSlot_x00191AA0 see;
    SfdTmrInf_x00191AA0 tmr;
};
extern void mpvhook_SetErrFunc_x00191AA0(M2vObj_x00191AA0 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern int MPV_EntryErrFunc_x00191AA0(void *handle, void (*callback)(SfdPly_x00191AA0 *, int), SfdPly_x00191AA0 *player) __asm__("MPV_EntryErrFunc");
int sfmpv_DetectTcErr_x00191AA0(SfdPly_x00191AA0 *player, M2vPicAtr_x00191AA0 *pic) __asm__("func_00191B80");
void sfmpv_DoReformTc_x00191AA0(SfdPly_x00191AA0 *player, M2vPicAtr_x00191AA0 *pic, long long id, int flag) __asm__("func_00191C40");
int sfmpv_DetectTcErr_x00191AA0(SfdPly_x00191AA0 *player, M2vPicAtr_x00191AA0 *pic) __asm__("func_00191B80");
void sfmpv_DoReformTc_x00191AA0(SfdPly_x00191AA0 *player, M2vPicAtr_x00191AA0 *pic, long long id, int flag) __asm__("func_00191C40");
void func_00191AA0_x00191AA0(SfdPly_x00191AA0 *player, M2vPicAtr_x00191AA0 *pic, long long a, int b) __asm__("func_00191AA0");
/* sfmpv_ReformTc: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00191AA0_x00191AA0(SfdPly_x00191AA0 *player, M2vPicAtr_x00191AA0 *pic, long long a, int b) {
    int enabled = SFSET_GetCond_x00191AA0(player, 52);
    if (enabled == 0) {
        if (a >= 0 || pic->gsc_count == 0 || pic->repeat_first_field != 0
            || (b != 0 && sfmpv_DetectTcErr_x00191AA0(player, pic) != 0)) {
            enabled = 1;
            SFSET_SetCond_x00191AA0(player, 52, 1);
        }
    }
    if (enabled == 1) {
        sfmpv_DoReformTc_x00191AA0(player, pic, a, b);
    }
}
typedef struct { s32 w[8]; } B32_x00191B80;
void func_0019AE10_x00191B80(void *, s32 *, s32 *) __asm__("func_0019AE10");
s32 func_001999E0_x00191B80(void *, s32) __asm__("func_001999E0");
s32 func_00191B80_x00191B80(u8 *a0) __asm__("func_00191B80");
s32 func_00191B80_x00191B80(u8 *a0)
{
    B32_x00191B80 b;
    s32 x20;
    s32 x24;
    s32 x28;
    s32 p;

    if (*(s32 *)(a0 + 0xD28) == 0) {
        return 0;
    }
    b = *(B32_x00191B80 *)(a0 + 0xCDC);
    func_0019AE10_x00191B80(&b, &x20, &x24);
    func_0019AE10_x00191B80(a0 + 0xD2C, &x28, &x24);
    p = func_001999E0_x00191B80(a0, 0x35) * x24;
    if (x20 <= x28) {
        return 1;
    }
    if (x20 < x28 + p) {
        return 0;
    }
    return 1;
}
void func_00191D38_x00191C40(s32, s32, s32, s32, void *) __asm__("func_00191D38");
void func_00191F48_x00191C40(void *, void *) __asm__("func_00191F48");
void func_00191C40_x00191C40(u8 *a0, unsigned int a1, s32 a2, s32 a3) __asm__("func_00191C40");
void func_00191C40_x00191C40(u8 *a0, unsigned int a1, s32 a2, s32 a3)
{
  s32 *s;
  s32 i;
  s32 x;
  u16 v;
  u16 *p;
  s32 *new_var;
  s = (s32 *) (a0 + 0xCC0);
 do { i = ((s32 *) a1)[5]; x = ((s32 *) a1)[7]; a1 = ((s32 *) a1)[4]; } while (0);
  if ((a3 != 0) && (a2 >= 0))
  {
    func_00191D38_x00191C40(a2, a1, x, i, a0 + 0xCDC);
    return;
  }
  if (s[0x68 / 4] == 0)
  {
    if ((*((s32 *) (a0 + 0x31E8))) != 0)
    {
      return;
    }
    s[7] = a1;
    s[8] = 0;
    s[9] = 0;
    s[10] = 0;
    s[11] = 0;
    s[12] = 0;
    return;
  }
  if (a3 != 0)
  {
    func_00191F48_x00191C40(s + 27, s + 7);
    v = *((u16 *) (((u8 *) s) + 0x3A));
    *((u16 *) (((u8 *) s) + 0x4A2)) = v;
    *((u16 *) (((u8 *) (s + i)) + 0x4A2)) = v;
  }
  else
  {
    new_var = s;
    s[7] = s[27];
    s[8] = s[28];
    s[9] = s[29];
    s[10] = new_var[30];
    s[11] = s[31];
    s[12] = s[32];
  }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191D38);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00191F48);
typedef struct { s32 w[8]; } B32_x00192040;
void func_0019AE10_x00192040(void *, s32 *, s32 *) __asm__("func_0019AE10");
void func_00192040_x00192040(u8 *a0) __asm__("func_00192040");
void func_00192040_x00192040(u8 *a0)
{
    s32 *p;
    B32_x00192040 b;
    s32 x20;
    s32 x24;

    p = (s32 *)(a0 + 0xCFC);
    if (p[0] != 0) {
        return;
    }
    b = *(B32_x00192040 *)(a0 + 0xCDC);
    b.w[6] = 0;
    func_0019AE10_x00192040(&b, &x20, &x24);
    *(B32_x00192040 *)(a0 + 0xD00) = b;
    p[9] = x20;
    p[10] = x24;
    p[0] = 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192120);
void func_00192268_x00192268(u8 *arg0, u8 *arg1) __asm__("func_00192268");
void func_00192268_x00192268(u8 *arg0, u8 *arg1)
{
  u8 new_var;
  *((s32 *) (((u8 *) arg1) + 0)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x10)));
  *((s32 *) (((u8 *) arg1) + 4)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x1C)));
  *((s32 *) (((u8 *) arg1) + 8)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x20)));
  *((s32 *) (((u8 *) arg1) + 0xC)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x24)));
  *((s32 *) (((u8 *) arg1) + 0x10)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x28)));
  *((s32 *) (((u8 *) arg1) + 0x14)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x2C)));
  *((s32 *) (((u8 *) arg1) + 0x18)) = (s32) (*((s32 *) (((u8 *) arg0) + 0x14)));
  new_var = *((u8 *) (((u8 *) arg0) + 0x54));
  *((s16 *) (((u8 *) arg1) + 0x1E)) = 0;
  *((s16 *) (((u8 *) arg1) + 0x1C)) = (s16) ((s8) new_var);
}
s32 func_0017C698_x001922B8(s32, s32 *) __asm__("func_0017C698");
s32 func_0018D650_x001922B8(void *, s32) __asm__("func_0018D650");
void func_0017C6F8_x001922B8(s32, s32 *, s32 *, s32 *) __asm__("func_0017C6F8");
s32 func_001999E0_x001922B8(void *, s32) __asm__("func_001999E0");
s32 func_0018AF78_x001922B8(void *, s32) __asm__("func_0018AF78");
void func_001923E8_x001922B8(void *, s32, s32) __asm__("func_001923E8");
void func_00192508_x001922B8(void *, s32, s32, s32) __asm__("func_00192508");
s32 func_00192540_x001922B8(void *, void *) __asm__("func_00192540");
s32 func_001922B8_x001922B8(u8 *a0, s32 a1, s32 a2, s32 a3) __asm__("func_001922B8");
s32 func_001922B8_x001922B8(u8 *a0, s32 a1, s32 a2, s32 a3)
{
    u8 *s;
    u8 *t;
    s32 b[4];
    s32 m;
    s32 v;

    s = a0 + 0x90C;
    t = *(u8 **)(a0 + 0x1C70);
    if (*(s32 *)(s + 0x10) != 0) {
        return 0;
    }
    if (func_0017C698_x001922B8(a1, b)) {
        return func_0018D650_x001922B8(a0, 0xFF000F16);
    }
    func_0017C6F8_x001922B8(a1, &b[1], &b[2], &b[3]);
    if (func_001999E0_x001922B8(a0, 0x3C) == 0) {
        *(s32 *)(t + 0x114) = 0;
    } else {
        m = func_0018AF78_x001922B8(a0, 1);
        v = b[3];
        if (v == -1) {
            v = b[1];
            b[3] = v;
        }
        if (v >= m) {
            v = m;
        }
        *(s32 *)(t + 0x114) = v;
    }
    func_001923E8_x001922B8(a0, b[0], a3);
    func_00192508_x001922B8(s, b[0], a2, b[1]);
    return func_00192540_x001922B8(a0, s);
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3c001922B8_0;
extern int b3c001922B8_1;
extern int b3cse_pad32_001922B8_0_xxxx;
extern int b3cse_pad32_001922B8_1_xxxx;
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001923E8);
void func_00192508_x00192508(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3) __asm__("func_00192508");
void func_00192508_x00192508(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3)
{
  s32 *new_var2;
  s32 new_var;
  u8 *new_var3;
  new_var = *((s32 *) (((u8 *) arg2) + 0x10));
  *((s32 *) (((u8 *) arg0) + 0)) = (s32) (*((s32 *) (((u8 *) arg2) + 0)));
  new_var2 = (s32 *) (((u8 *) arg0) + 0x20);
  *((s32 *) (((u8 *) arg0) + 4)) = (s32) (*((s32 *) (((u8 *) arg2) + 4)));
  *((s32 *) (((u8 *) arg0) + 8)) = (s32) (*((s32 *) (((u8 *) arg2) + 8)));
  *((s32 *) (((u8 *) arg0) + 0xC)) = (s32) (*((s32 *) (((u8 *) arg2) + 0xC)));
  *((s32 *) (((u8 *) arg0) + 0x14)) = (s32) new_var;
  new_var3 = ((u8 *) arg0) + 0x10;
  *((s32 *) new_var3) = arg1;
  *new_var2 = arg3;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192540);
u32 func_001926F8(u8 *arg0) {
    return (u32) ~*(s32 *)((u8 *)arg0 + 0xE18) >> 0x1F;
}
s32 func_00192800_x00192708() __asm__("func_00192800");
s32 func_00192860_x00192708() __asm__("func_00192860");
s32 func_00192968_x00192708() __asm__("func_00192968");
s32 func_001929B8_x00192708() __asm__("func_001929B8");
s32 func_00192A08_x00192708() __asm__("func_00192A08");
s32 func_00192AE8_x00192708() __asm__("func_00192AE8");
s32 func_001999E0_x00192708() __asm__("func_001999E0");
s32 func_00192708_x00192708(u8 *arg0, s32 arg1) __asm__("func_00192708");
s32 func_00192708_x00192708(u8 *arg0, s32 arg1)
{
  s32 temp_s1_2;
  s32 var_s3;
  s32 new_var;
  s32 var_v0;
  u8 *temp_s1;
  u8 *temp_s2;
  temp_s1 = *((u8 **) (((u8 *) arg0) + 0x1C70));
  var_v0 = func_001999E0_x00192708(arg0, (u8 *) 0x2F);
  temp_s2 = temp_s1 + 0x8C;
  if (var_v0 == 1)
  {
    goto block_14;
  }
  if (func_001999E0_x00192708(arg0, 0x27) == 1)
  {
    goto block_3;
  }
  goto block_5;
  block_3:
  return 0;

  block_5:
  if ((*((s8 *) (((u8 *) temp_s2) + 0x58))) == 0)
  {
    goto block_7;
  }

  return *((s32 *) (((u8 *) temp_s1) + 0x164));
  block_7:
  temp_s1_2 = *((s32 *) (((u8 *) temp_s2) + 0x18));

  new_var = func_00192968_x00192708(arg0);
  var_s3 = 1;
  if (new_var != 0)
  {
    goto block_12;
  }
  if (func_001929B8_x00192708(arg0, temp_s1_2) != 0)
  {
    goto block_13;
  }
  if (func_00192A08_x00192708(arg0, temp_s1_2, arg1) != 0)
  {
    goto block_13;
  }
  if (func_00192800_x00192708(arg0, temp_s1_2) != 0)
  {
    goto block_12;
  }
  var_s3 = func_00192AE8_x00192708(arg0, temp_s1_2) != 0;
  block_12:
  block_13:
  func_00192860_x00192708(arg0, temp_s2, var_s3);


  var_v0 = var_s3;
  block_14:
  return var_v0;

}
s32 func_00192800_x00192800(u8 *a0, s32 x) __asm__("func_00192800");
s32 func_00192800_x00192800(u8 *a0, s32 x)
{
    s32 m = *(s32 *)(*(u8 **)(a0 + 0x1C70) + 0x74);
    s32 r = 0;

    switch ((u32)m) {
    case 4:
        break;
    case 2:
        if (x == 2 || x == 3) {
            r = 1;
        }
        break;
    case 3:
        r = (x == m);
        break;
    }
    return r;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192860);
s32 func_00172A40_x00192968(s32, s32, s32, s32) __asm__("func_00172A40");
s32 func_00192968_x00192968(u8 *p) __asm__("func_00192968");
s32 func_00192968_x00192968(u8 *p)
{
    s32 *a = (s32 *)(p + 0x31EC);
    u8 *t = p + 0xD80;
    s32 *f = (s32 *)(p + 0xDD8);
    if (a[1] < 0) {
        return 0;
    }
    if (*f != 0) {
        return 0;
    }
    return func_00172A40_x00192968(a[1], a[2], *(s32 *)(t + 0x24), *(s32 *)(t + 0x28)) == 0;
}
s32 func_001929B8_x001929B8(u8 *a0, s32 a1) __asm__("func_001929B8");
s32 func_001929B8_x001929B8(u8 *a0, s32 a1)
{
    s32 *p = (s32 *)(a0 + 0x9A0);
    s32 v;

    switch ((u32)a1) {
    case 1:
        v = p[2];
        break;
    case 2:
        v = p[3];
        break;
    case 3:
        v = p[4];
        break;
    default:
        return 1;
    }
    return v == 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192A08);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192AE8);
void func_00192C60_x00192C60(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) __asm__("func_00192C60");
void func_00192C60_x00192C60(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    u8 *temp_a0;

    temp_a0 = arg0 + 0x9A0;
    *arg3 = *(s32 *)((u8 *)temp_a0 + 0xAC);
    *arg2 = *(s32 *)((u8 *)temp_a0 + 0xA8);
}
void func_00192D68_x00192C78(void *) __asm__("func_00192D68");
s32 func_0016E858_x00192C78(s32, s32, s32) __asm__("func_0016E858");
s32 func_0017C4D8_x00192C78(s32, s32) __asm__("func_0017C4D8");
s32 func_00191260_x00192C78(void *, s32, s32, s32) __asm__("func_00191260");
void func_001911E0_x00192C78(void *, s32) __asm__("func_001911E0");
void func_00197BE8_x00192C78(void *, s32, s32) __asm__("func_00197BE8");
s32 func_00192C78_x00192C78(u8 *a0, s32 a1) __asm__("func_00192C78");
s32 func_00192C78_x00192C78(u8 *a0, s32 a1)
{
    u8 *s;
    s32 h;
    u8 *q;
    s32 t;
    s32 v;
    s32 n;
    s32 r;

    s = *(u8 **)(a0 + 0x1C70);
    h = *(s32 *)s;
    q = s + 0x8C;
    func_00192D68_x00192C78(a0);
    t = func_0016E858_x00192C78(a1, 0, 1);
    v = func_0017C4D8_x00192C78(h, a1);
    n = func_0016E858_x00192C78(a1, 0, 1);
    n -= t;
    r = func_00191260_x00192C78(a0, v, n, 0xFF000F07);
    func_001911E0_x00192C78(a0, n);
    if (r) {
        return r;
    }
    if (*(s8 *)(q + 0x58) == 0) {
        *(s32 *)(s + 0x164) = 1;
    }
    func_00197BE8_x00192C78(a0, 1, *(s32 *)(q + 0x18));
    return 0;
}
typedef struct { s32 w[11]; } Sfd2C_x00192D68_x00192D68;
void func_00192D68_x00192D68(s32 a0) __asm__("func_00192D68");
void func_00192D68_x00192D68(s32 a0)
{
    Sfd2C_x00192D68_x00192D68 *s = (Sfd2C_x00192D68_x00192D68 *)(a0 + 0xD80);
    Sfd2C_x00192D68_x00192D68 *d = (Sfd2C_x00192D68_x00192D68 *)(a0 + 0xDAC);

    if (s->w[9] < *(s32 *)(a0 + 0xDFC)) {
        *d = *s;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00192DE0);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193060);
typedef struct { s32 w[8]; } B32_x00193360;
s32 func_00192800_x00193360(void *, s32) __asm__("func_00192800");
s32 func_001929B8_x00193360(void *, s32) __asm__("func_001929B8");
void func_0019AE10_x00193360(void *, s32 *, s32 *) __asm__("func_0019AE10");
void func_00193360_x00193360(u8 *a0) __asm__("func_00193360");
void func_00193360_x00193360(u8 *a0)
{
    s32 *p;
    s32 *q;
    B32_x00193360 b;
    s32 x20;
    s32 x24;

    p = (s32 *)(a0 + 0xDD8);
    q = (s32 *)(a0 + 0xCFC);
    if (p[0] != 0) {
        return;
    }
    b = *(B32_x00193360 *)(a0 + 0xD84);
    if (func_00192800_x00193360(a0, 3) == 0) {
        if (func_001929B8_x00193360(a0, 3) == 0) {
            b.w[6] = 0;
        }
    }
    func_0019AE10_x00193360(&b, &x20, &x24);
    *(B32_x00193360 *)(a0 + 0xDDC) = b;
    p[9] = x20 - q[9];
    p[10] = x24;
    p[0] = 1;
}
typedef struct { s32 w[11]; } Sfd2C_x00193478_x00193478;
s32 func_001957B8_x00193478(s32) __asm__("func_001957B8");
s32 func_001960E0_x00193478(s32) __asm__("func_001960E0");
void func_00193520_x00193478(s32, s32) __asm__("func_00193520");
void func_00193478_x00193478(s32 a0, s32 a1) __asm__("func_00193478");
void func_00193478_x00193478(s32 a0, s32 a1)
{
    *(Sfd2C_x00193478_x00193478 *)(a1 + 0xC) = *(Sfd2C_x00193478_x00193478 *)(a0 + 0xD80);
    if (func_001957B8_x00193478(a0) != 0) {
        *(s32 *)(a1 + 0xD8) = func_001960E0_x00193478(a0);
    }
    func_00193520_x00193478(a0, a1);
}
s32 func_0017EE78_x00193520() __asm__("func_0017EE78");
s32 func_001957B8_x00193520() __asm__("func_001957B8");
extern s32 D_00467730_x00193520 __asm__("D_00467730");
void func_00193520_x00193520(u8 *arg0, u8 *arg1) __asm__("func_00193520");
void func_00193520_x00193520(u8 *arg0, u8 *arg1)
{
  s32 temp_a2;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 new_var;
  u8 *temp_a1;
  u8 *temp_s1;
  temp_s1 = arg0 + 0xCC0;
  temp_a1 = arg1 + 0xC;
  do
  {
    *((s32 *) (((u8 *) arg1) + 0x3C)) = (s32) (*((s32 *) (((u8 *) temp_a1) + 0x28)));
    temp_a2 = *((s32 *) (((u8 *) arg0) + 0xDFC));
    new_var = (s32) (((*((s32 *) (((u8 *) temp_a1) + 0x24))) - temp_a2) + (*((s32 *) (((u8 *) temp_s1) + 0x158))));
    *((s32 *) (((u8 *) arg1) + 0x38)) = new_var;
    ;
    *((s32 *) (((u8 *) arg1) + 0x4C)) = *((s32 *) (((u8 *) temp_a1) + 0x24));
  }
  while (0);
  *((s32 *) (((u8 *) arg1) + 0x50)) = (s32) ((*((s32 *) (((u8 *) temp_a1) + 0x24))) + (*((s32 *) (((u8 *) temp_s1) + 0x158))));
  if (func_001957B8_x00193520(arg0, temp_a1, temp_a2) != 0)
  {
    temp_v0 = func_0017EE78_x00193520(*((s32 *) (((u8 *) arg1) + 0x3C)), ((*((s32 *) (((u8 *) arg1) + 0xD8))) - (*((s32 *) (((u8 *) temp_s1) + 0x154)))) * 0x3E8, *((s32 *) (((u8 *) &D_00467730_x00193520) + ((*((s32 *) (((u8 *) arg1) + 0x68))) * 4))));
    *((s32 *) (((u8 *) arg1) + 0x4C)) = temp_v0;
    *((s32 *) (((u8 *) arg1) + 0x50)) = (temp_v0_2 = temp_v0 + (*((s32 *) (((u8 *) temp_s1) + 0x158))));
    *((s32 *) (((u8 *) arg1) + 0x38)) = temp_v0_2;
  }
  temp_v1_2 = *((s32 *) (((u8 *) arg1) + 0x38));
  if ((*((s32 *) (((u8 *) temp_s1) + 0x278))) < temp_v1_2)
  {
    *((s32 *) (((u8 *) temp_s1) + 0x278)) = temp_v1_2;
    *((s32 *) (((u8 *) temp_s1) + 0x27C)) = (s32) (*((s32 *) (((u8 *) arg1) + 0x3C)));
  }
}
typedef struct { s32 *dst; s32 n; } SfdBuf_x00193608_x00193608;
typedef struct { u8 pad[0x54]; SfdBuf_x00193608_x00193608 *buf; u8 pad2[0x18]; s32 f70; } SfdEnt_x00193608_x00193608;
void func_00193828_x00193608(void *, void *) __asm__("func_00193828");
void func_001936B0_x00193608(s32, s32 *, s32 *, s32 *) __asm__("func_001936B0");
void func_00193608_x00193608(s32 a0, SfdEnt_x00193608_x00193608 *a1, s32 a2) __asm__("func_00193608");
void func_00193608_x00193608(s32 a0, SfdEnt_x00193608_x00193608 *a1, s32 a2)
{
    u8 *t = *(u8 **)(a0 + 0x1C70);
    s32 ty, p, n;

    if ((u32)(a1->f70 - 1) < 2) {
        func_00193828_x00193608(t + 0xF40, a1->buf);
    }
    func_001936B0_x00193608(a2, &ty, &p, &n);
    if (ty == 3) {
        memcpy(a1->buf->dst, p, n);
        a1->buf->n = n;
    } else {
        func_00193828_x00193608(a1->buf, t + 0xF40);
    }
}
typedef struct SfdSj_x001936B0 SfdSj_x001936B0;
typedef struct SfdSjChunk_x001936B0 {
    char *data;
    int len;
} SfdSjChunk_x001936B0;
typedef struct SfdSjVtbl_x001936B0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001936B0 *sj);
    int (*getUuid)(SfdSj_x001936B0 *sj);
    void (*reset)(SfdSj_x001936B0 *sj);
    void (*getChunk)(SfdSj_x001936B0 *sj, int id, int n, SfdSjChunk_x001936B0 *ck);
    void (*ungetChunk)(SfdSj_x001936B0 *sj, int id, SfdSjChunk_x001936B0 *ck);
    void (*putChunk)(SfdSj_x001936B0 *sj, int id, SfdSjChunk_x001936B0 *ck);
    int (*getNumData)(SfdSj_x001936B0 *sj, int id);
} SfdSjVtbl_x001936B0;
struct SfdSj_x001936B0 {
    SfdSjVtbl_x001936B0 *vtbl;
};
struct SfdSj_x001936B0;
struct SfdSj_x001936B0;
int MPV_CheckDelim_x001936B0(const unsigned char *p) __asm__("func_0017B420");
char *MPV_SearchDelim_x001936B0(char *buf, int len, int mask) __asm__("func_0017B5B8");
extern int DAT_004beb0c_x001936B0 __asm__("D_00426B14");
extern int DAT_004f4e70_x001936B0[] __asm__("D_00467540");
void func_001936B0_x001936B0(SfdSj_x001936B0 *source, int *kind, char **data, int *size) __asm__("func_001936B0");
/* FUN_002a7278: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001936B0_x001936B0(SfdSj_x001936B0 *source, int *kind, char **data, int *size) {
    SfdSjChunk_x001936B0 chunk;
    char *seq;
    char *pic;
    char *ext;
    int rest;
    *kind = 0;
    *data = 0;
    *size = 0;
    source->vtbl->getChunk(source, 1, 0x7FFFFFFF, &chunk);
    seq = MPV_SearchDelim_x001936B0(chunk.data, chunk.len, 204);
    if (seq == 0) {
        DAT_004beb0c_x001936B0++;
    } else {
        if ((MPV_CheckDelim_x001936B0(seq) & 4) != 0) {
            if (chunk.len < seq - chunk.data + 6) {
                DAT_004beb0c_x001936B0++;
            } else {
                *kind = DAT_004f4e70_x001936B0[(seq[5] >> 3) & 7];
                if (*kind == 3) {
                    rest = chunk.data - seq + chunk.len;
                    pic = MPV_SearchDelim_x001936B0(seq, rest, 34);
                    if (pic != 0 && (MPV_CheckDelim_x001936B0(pic) & 0x20) != 0) {
                        ext = MPV_SearchDelim_x001936B0(seq, rest, 2);
                        if (ext == 0) {
                            DAT_004beb0c_x001936B0++;
                        } else {
                            *data = pic;
                            *size = ext - pic;
                        }
                    }
                }
            }
        }
    }
    source->vtbl->ungetChunk(source, 1, &chunk);
}
void func_00193828(u8 *arg0, u8 *arg1) {
    memcpy(*(s32 *)((u8 *)arg0 + 0), *(s32 *)((u8 *)arg1 + 0), *(s32 *)((u8 *)arg1 + 4));
    *(s32 *)((u8 *)arg0 + 4) = (s32) *(s32 *)((u8 *)arg1 + 4);
}
s32 func_0018AA80_x00193870(void *, s32, u32 *) __asm__("func_0018AA80");
u32 func_001908A8_x00193870(u32 *, s32, s32 *) __asm__("func_001908A8");
void func_00193960_x00193870(void *, s32) __asm__("func_00193960");
s32 func_00193870_x00193870(u8 *a0, s32 a1, s32 a2) __asm__("func_00193870");
s32 func_00193870_x00193870(u8 *a0, s32 a1, s32 a2)
{
    u32 b[8];
    s32 c[4];
    u32 x;
    s32 n;

    if (func_0018AA80_x00193870(a0, *(s32 *)(a0 + 0x1C78), b)) {
        return 0;
    }
    if (b[1] == 0) {
        return 0;
    }
    x = func_001908A8_x00193870(b, a2, c);
    if (x == 0) {
        n = b[1] + b[3] - 3;
        if (n < 0) {
            n = 0;
        }
    } else if (x >= b[0] && x < b[0] + b[1]) {
        n = x - b[0];
    } else if (x >= b[2] && x < b[2] + b[3]) {
        n = x - b[2] + b[1];
    } else {
        n = 0;
    }
    func_00193960_x00193870(a0, n);
    return n;
}
s32 func_0018AB58_x00193960() __asm__("func_0018AB58");
void func_00193960_x00193960(u8 *arg0, s32 arg1) __asm__("func_00193960");
void func_00193960_x00193960(u8 *arg0, s32 arg1) {
    func_0018AB58_x00193960(arg0, *(s32 *)((u8 *)arg0 + 0x1C78), arg1);
    __asm__ __volatile__("");
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193980);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00193B18);
struct SfdMpvCond_x00193D18;
typedef struct SfdMpvCond_x00193D18 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00193D18;
typedef struct SfdMpvWorkBufs_x00193D18 {
    int w[2];
} SfdMpvWorkBufs_x00193D18;
typedef struct SfdMpvFrameBufs_x00193D18 {
    int w[16];
} SfdMpvFrameBufs_x00193D18;
extern SfdMpvCond_x00193D18 sfmpv_para_x00193D18 __asm__("D_00492988");
extern SfdMpvWorkBufs_x00193D18 sfmpv_rfb_adr_tbl_x00193D18 __asm__("D_004929B0");
extern SfdMpvFrameBufs_x00193D18 sfmpv_ta_adr_tbl_x00193D18 __asm__("D_004929B8");
int func_00193D18_x00193D18(void) __asm__("func_00193D18");
/* sfmpv_CheckMpvPara: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00193D18_x00193D18(void) {
    int i;
    if ((unsigned)(sfmpv_para_x00193D18.count - 1) >= 16) {
fail:
        return -1;
    }
    if (sfmpv_para_x00193D18.rfb_adr == 0 || sfmpv_para_x00193D18.ta_adr == 0) {
        for (i = 0; i < 2; i++) {
            if (sfmpv_rfb_adr_tbl_x00193D18.w[i] == 0) goto fail;
        }
        for (i = 0; i < sfmpv_para_x00193D18.count; i++) {
            if (sfmpv_ta_adr_tbl_x00193D18.w[i] == 0) goto fail;
        }
    }
    return 0;
}
typedef struct { s32 a; s32 b; s32 c; u8 tm[0x2C]; s32 f38; s32 f3C; s32 f40; s32 f44; s32 f48; s32 f4C; s32 f50; s32 pad54; u8 q[0x80]; s32 fD8; } SfdEnt_x00193DE0_x00193DE0;
void func_0019A010_x00193DE0(void *, s32) __asm__("func_0019A010");
void func_00193E80_x00193DE0(void *) __asm__("func_00193E80");
void func_00193DE0_x00193DE0(SfdEnt_x00193DE0_x00193DE0 *e, s32 *src, s32 n) __asm__("func_00193DE0");
void func_00193DE0_x00193DE0(SfdEnt_x00193DE0_x00193DE0 *e, s32 *src, s32 n)
{
    s32 i;

    for (i = 0; i < n; i++, e++) {
        e->a = 0;
        e->b = 0;
        func_0019A010_x00193DE0(e->tm, 0);
        e->c = src[i];
        e->f38 = 0;
        e->f3C = 1;
        e->f40 = 0;
        e->f44 = 0;
        e->f48 = 0;
        e->f4C = 0;
        e->f50 = 0;
        func_00193E80_x00193DE0(e->q);
        e->fD8 = 0;
    }
}
s32 func_00179018_x00193E80() __asm__("func_00179018");
void func_00193E80_x00193E80(s32 arg0) __asm__("func_00193E80");
void func_00193E80_x00193E80(s32 arg0) {
    func_00179018_x00193E80(arg0, -1, 0x20);
}
typedef struct SfdSjChunk_x00193EA0 {
    char *data;
    int len;
} SfdSjChunk_x00193EA0;
typedef struct SfdBufPool_x00193EA0 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00193EA0 slot[18];
} SfdBufPool_x00193EA0;
void func_00193EA0_x00193EA0(SfdBufPool_x00193EA0 *pool) __asm__("func_00193EA0");
/* sfmpv_InitPicUsr: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00193EA0_x00193EA0(SfdBufPool_x00193EA0 *pool) {
    int i;
    pool->base = 0;
    pool->count = 0;
    pool->size = 0;
    pool->slot[0].data = 0;
    pool->slot[0].len = 0;
    pool->slot[1].data = 0;
    pool->slot[1].len = 0;
    for (i = 0; i < 16; i++) {
        pool->slot[i + 2].data = 0;
        pool->slot[i + 2].len = 0;
    }
}
s32 func_0018D650_x00193EF8() __asm__("func_0018D650");
void func_00193EF8_x00193EF8(s32 arg0, u32 arg1) __asm__("func_00193EF8");
void func_00193EF8_x00193EF8(s32 arg0, u32 arg1) {
    if (arg1 == 0) {
        goto block_5;
    }
    if (arg1 >= 0xFFFFFFFFU) {
        goto block_3;
    }
    if (arg1 >= 0xFFFFFFFDU) {
        goto block_6;
    }
block_3:
    func_0018D650_x00193EF8(arg0, arg1);
    return;
block_5:
block_6:
    return;
}
typedef struct { s32 w[9]; } W9_x00193F38;
typedef struct { s32 w[2]; } W2_x00193F38;
typedef struct { s32 w[16]; } W16_x00193F38;
extern W9_x00193F38 D_00492988_x00193F38 __asm__("D_00492988");
extern W2_x00193F38 D_004929B0_x00193F38 __asm__("D_004929B0");
extern W16_x00193F38 D_004929B8_x00193F38 __asm__("D_004929B8");
void func_00195C78_x00193F38(void *) __asm__("func_00195C78");
s32 func_001940A8_x00193F38(s32) __asm__("func_001940A8");
s32 func_0018D650_x00193F38(void *, s32) __asm__("func_0018D650");
s32 func_00193F38_x00193F38(u8 *a0) __asm__("func_00193F38");
s32 func_00193F38_x00193F38(u8 *a0)
{
    s32 *s;
    s32 h;

    s = *(s32 **)(a0 + 0x1C70);
    h = s[0];
    if (h == 0) {
        return 0;
    }
    D_00492988_x00193F38 = *(W9_x00193F38 *)(s + 1);
    D_004929B0_x00193F38 = *(W2_x00193F38 *)(s + 10);
    D_004929B8_x00193F38 = *(W16_x00193F38 *)(s + 12);
    func_00195C78_x00193F38(a0);
    if (func_001940A8_x00193F38(h)) {
        return func_0018D650_x00193F38(a0, 0xFF000F0C);
    }
    s[0] = 0;
    return 0;
}
void func_001940A8(void) {
    func_0017E968();
}
s32 func_001940C0(void) {
    return 0;
}
s32 func_001940C8(void) {
    return 0;
}
s32 func_001940D0(void) {
    return 0;
}
s32 func_001940D8(void) {
    return 0;
}
s32 func_0018D650_x001940E0() __asm__("func_0018D650");
void func_001940E0_x001940E0(s32 arg0) __asm__("func_001940E0");
void func_001940E0_x001940E0(s32 arg0) {
    func_0018D650_x001940E0(arg0, 0xFF000F0D);
}
s32 func_0018D650_x00194100() __asm__("func_0018D650");
void func_00194100_x00194100(s32 arg0) __asm__("func_00194100");
void func_00194100_x00194100(s32 arg0) {
    func_0018D650_x00194100(arg0, 0xFF000F0D);
}
s32 func_001941C0_x00194120(s32, s32, void **) __asm__("func_001941C0");
s32 func_00194798_x00194120() __asm__("func_00194798");
s32 func_00194968_x00194120(s32, void *) __asm__("func_00194968");
s32 func_00194120_x00194120(s32 arg0, u8 **arg1) __asm__("func_00194120");
s32 func_00194120_x00194120(s32 arg0, u8 **arg1) {
    u8 sp[8];
    s32 temp_v0;
    u8 *temp_s2;
    u8 *temp_v1;

    temp_s2 = arg0 + 0xCC0;
    if (func_00194798_x00194120(arg0) == -1) {
        *arg1 = NULL;
        return 0;
    }
    temp_v0 = func_00194968_x00194120(arg0, sp);
    if (temp_v0 == 0) {
        *arg1 = NULL;
        return temp_v0;
    }
    func_001941C0_x00194120(arg0, temp_v0, arg1);
    temp_v1 = *arg1;
    *(s32 *)((u8 *)temp_s2 + 0x270) = (s32) *(s32 *)((u8 *)temp_v1 + 0x14);
    *(s32 *)((u8 *)temp_s2 + 0x274) = (s32) *(s32 *)((u8 *)temp_v1 + 0x18);
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001941C0);
s32 func_0018D908_x001942D0(void *) __asm__("func_0018D908");
s32 func_0018D920_x001942D0(void *) __asm__("func_0018D920");
s32 func_00194320_x001942D0(s32, s32) __asm__("func_00194320");
s32 func_001942D0_x001942D0(s32 arg0, s32 arg1) __asm__("func_001942D0");
s32 func_001942D0_x001942D0(s32 arg0, s32 arg1) {
    u8 sp[8];
    s32 temp_s0;

    func_0018D908_x001942D0(sp);
    temp_s0 = func_00194320_x001942D0(arg0, arg1);
    func_0018D920_x001942D0(sp);
    return temp_s0;
}
typedef struct { u8 pad[0x70]; s32 f70; } SfdT_x00194320_x00194320;
s32 *func_001943F0_x00194320(s32) __asm__("func_001943F0");
s32 func_001946D8_x00194320(s32, s32) __asm__("func_001946D8");
void func_00194918_x00194320(s32) __asm__("func_00194918");
s32 func_00194320_x00194320(s32 a0, s32 a1) __asm__("func_00194320");
s32 func_00194320_x00194320(s32 a0, s32 a1)
{
    SfdT_x00194320_x00194320 *t = *(SfdT_x00194320_x00194320 **)(a0 + 0x1C70);
    s32 *e;
    s32 r, v;

    e = func_001943F0_x00194320(a0);
    if (*e != 1) {
        return ((s32 (*)(s32, s32))func_0018D650)(a0, 0xFF000F0E);
    }
    r = func_001946D8_x00194320(a0, a1);
    v = t->f70;
    if (v != r) {
        return ((s32 (*)(s32, s32))func_0018D650)(a0, 0xFF000F0F);
    }
    *e = 0;
    func_00194918_x00194320(v);
    return 0;
}
s32 func_001943F0_x001943F0(s32 a0, s32 a1) __asm__("func_001943F0");
s32 func_001943F0_x001943F0(s32 a0, s32 a1) {
    return a1 - 4;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_001943F8);
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194468);
s32 func_00194560_x00194560(u8 *p) __asm__("func_00194560");
s32 func_00194560_x00194560(u8 *p)
{
    s32 v = *(s32 *)(p + 0x31E8);
    u8 *q = *(u8 **)(p + 0x1C70);
    if (v == 0) {
        return 0;
    }
    if (*(s32 *)(q + 0x88) > 0) {
        return 0;
    }
    return v + 0xAC4;
}
s32 func_0018D650_x00194590(void *, s32) __asm__("func_0018D650");
s32 func_0018D870_x00194590() __asm__("func_0018D870");
void *func_001946D8_x00194590(void *, s32) __asm__("func_001946D8");
void func_00194590_x00194590(u8 *arg0, s32 arg1) __asm__("func_00194590");
void func_00194590_x00194590(u8 *arg0, s32 arg1) {
    u8 *temp_v0;

    if (func_0018D870_x00194590() != 0) {
        func_0018D650_x00194590(NULL, 0xFF000188);
        return;
    }
    temp_v0 = func_001946D8_x00194590(arg0, arg1);
    if (temp_v0 == NULL) {
        func_0018D650_x00194590(arg0, 0xFF000F30);
    } else {
        *(s32 *)((u8 *)temp_v0 + 4) = (s32) (*(s32 *)((u8 *)temp_v0 + 4) + 1);
    }
    *(s32 *)((u8 *)arg0 + 0x978) = (s32) (*(s32 *)((u8 *)arg0 + 0x978) + 1);
}
typedef struct { s32 a; s32 n; } SfdEnt_x00194630_x00194630;
SfdEnt_x00194630_x00194630 *func_001946D8_x00194630(s32, s32) __asm__("func_001946D8");
void func_00194630_x00194630(s32 a0, s32 a1) __asm__("func_00194630");
void func_00194630_x00194630(s32 a0, s32 a1)
{
    SfdEnt_x00194630_x00194630 *e;
    s32 v;

    if (func_0018D870(a0) != 0) {
        ((s32 (*)(s32, s32))func_0018D650)(0, 0xFF000189);
        return;
    }
    e = func_001946D8_x00194630(a0, a1);
    if (e == 0) {
        ((s32 (*)(s32, s32))func_0018D650)(a0, 0xFF000F31);
    } else {
        v = e->n - 1;
        if (v < 0) {
            v = 0;
        }
        e->n = v;
    }
    *(s32 *)(a0 + 0x978) -= 1;
}
typedef struct { s32 pad; u8 body[0x58]; } E5C_x001946D8;
typedef struct { u8 b[0xDC]; } EDC_x001946D8;
u8 *func_001946D8_x001946D8(u8 *a0, u8 *a1) __asm__("func_001946D8");
u8 *func_001946D8_x001946D8(u8 *a0, u8 *a1)
{
    E5C_x001946D8 *e = (E5C_x001946D8 *)(a0 + 0x1620);
    EDC_x001946D8 *t = (EDC_x001946D8 *)(*(u8 **)(a0 + 0x1C70) + 0x16C);
    s32 i;

    for (i = 0; i < 16; i++, e++, t++) {
        if (e->body == a1) {
            return t->b;
        }
    }
    return 0;
}
u8 *func_00194720_x00194720(u8 *arg0, s32 arg1) __asm__("func_00194720");
u8 *func_00194720_x00194720(u8 *arg0, s32 arg1)
{
  s32 temp_a2;
  s32 var_a3;
  u8 *temp_v0;
  u8 *var_a0;
  u8 *var_v0;
  u8 *var_v1;
  temp_v0 = *((u8 **) (((u8 *) arg0) + 0x1C70));
  var_a3 = 0;
  temp_a2 = *((s32 *) (((u8 *) temp_v0) + 0x168));
  var_v1 = temp_v0 + 0x16C;
  if (temp_a2 > 0)
  {
    var_a0 = arg0 + 0x1620;
    loop_2:
    var_v0 = var_a0;

    var_a0 += 0x5C;
    if (var_v1 != arg1)
    {
      var_a3 += 1;
      var_v1 += 0xDC;
      if (var_a3 >= temp_a2)
      {
        goto block_4;
      }
      goto loop_2;
    }
  }
  else
  {
    block_4:
    var_v0 = (void *) 0;

  }
  var_a0 = var_v0;
  return var_a0;
}
void func_00194768(u8 *arg0) {
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0x7C) = 1;
}
s32 func_00194778(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0x7C);
}
void func_00194788(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C70)) + 0x80) = arg1;
}
typedef struct { s32 st; u8 pad[0xD8]; } SfdEnt_x00194798_x00194798;
typedef struct { u8 pad[0x7C]; s32 mode; u8 pad2[0xE8]; s32 n; SfdEnt_x00194798_x00194798 e[1]; } SfdTab_x00194798_x00194798;
void func_0018D908_x00194798(s32 *) __asm__("func_0018D908");
void func_0018D920_x00194798(s32 *) __asm__("func_0018D920");
s32 func_00194798_x00194798(s32 a0) __asm__("func_00194798");
s32 func_00194798_x00194798(s32 a0)
{
    s32 buf[4];
    SfdTab_x00194798_x00194798 *t;
    SfdEnt_x00194798_x00194798 *e;
    s32 i, n;

    func_0018D908_x00194798(buf);
    t = *(SfdTab_x00194798_x00194798 **)(a0 + 0x1C70);
    n = 0;
    e = t->e;
    for (i = 0; i < t->n; i++, e++) {
        if (e->st == 2 || e->st == 4) {
            n++;
        }
    }
    if (t->mode == 1 && n == 0) {
        n = -1;
    }
    func_0018D920_x00194798(buf);
    return n;
}
typedef struct { s32 a; s32 b; u8 pad[0xD4]; } SfdEnt_x00194838_x00194838;
typedef struct { u8 pad[0x168]; s32 n; SfdEnt_x00194838_x00194838 e[1]; } SfdTab_x00194838_x00194838;
void func_0018D908_x00194838(s32 *) __asm__("func_0018D908");
void func_0018D920_x00194838(s32 *) __asm__("func_0018D920");
SfdEnt_x00194838_x00194838 *func_00194838_x00194838(s32 a0) __asm__("func_00194838");
SfdEnt_x00194838_x00194838 *func_00194838_x00194838(s32 a0)
{
    s32 buf[4];
    SfdTab_x00194838_x00194838 *t;
    SfdEnt_x00194838_x00194838 *e;
    s32 i, n;

    func_0018D908_x00194838(buf);
    t = *(SfdTab_x00194838_x00194838 **)(a0 + 0x1C70);
    n = t->n;
    e = t->e;
    for (i = 0; i < n; i++, e++) {
        if (e->a == 0 && e->b == 0) {
            e->a = 1;
            break;
        }
    }
    if (i == n) {
        e = 0;
    }
    func_0018D920_x00194838(buf);
    return e;
}
void func_001948D8(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 0;
    }
}
void func_001948E8(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 2;
    }
}
void func_00194900(s32 *arg0) {
    if (arg0 != NULL) {
        *arg0 = 4;
    }
}
typedef struct SfdSjChunk_x00194918 {
    char *data;
    int len;
} SfdSjChunk_x00194918;
typedef struct SfdTimeCode_x00194918 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00194918;
typedef struct SfdTimeRec_x00194918 {
    int valid;
    SfdTimeCode_x00194918 tc;
    int time;
    int unit;
} SfdTimeRec_x00194918;
typedef enum M2vFrameRate_x00194918 {
    M2V_FRAME_RATE_FORBIDDEN_x00194918 = 0
} M2vFrameRate_x00194918;
typedef enum M2vPicType_x00194918 {
    M2V_PICTYPE_I_x00194918 = 1,
    M2V_PICTYPE_P_x00194918 = 2,
    M2V_PICTYPE_B_x00194918 = 3,
    M2V_PICTYPE_D_x00194918 = 4
} M2vPicType_x00194918;
typedef enum M2vPicStruct_x00194918 {
    M2V_PICSTRUCT_TOP_FIELD_x00194918 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00194918 = 2,
    M2V_PICSTRUCT_FRAME_x00194918 = 3
} M2vPicStruct_x00194918;
typedef enum M2vPicAtrF64_x00194918 {
    M2V_PICATR_F64_0_x00194918 = 0
} M2vPicAtrF64_x00194918;
typedef struct M2vPicAtr_x00194918 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00194918 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00194918 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00194918 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00194918 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00194918;
typedef struct SfdSlot_x00194918 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00194918 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00194918 *blob;
    M2vPicAtr_x00194918 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00194918;
void func_00194918_x00194918(SfdSlot_x00194918 *slot) __asm__("func_00194918");
/* SFMPVF_EndDrawFrm: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00194918_x00194918(SfdSlot_x00194918 *slot) {
    if (slot != 0) {
        if (slot->state == 4) {
            slot->state = 3;
        } else {
            slot->state = 0;
        }
    }
}
typedef struct SfdSjChunk_x00194940 {
    char *data;
    int len;
} SfdSjChunk_x00194940;
typedef struct SfdTimeCode_x00194940 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00194940;
typedef struct SfdTimeRec_x00194940 {
    int valid;
    SfdTimeCode_x00194940 tc;
    int time;
    int unit;
} SfdTimeRec_x00194940;
typedef enum M2vFrameRate_x00194940 {
    M2V_FRAME_RATE_FORBIDDEN_x00194940 = 0
} M2vFrameRate_x00194940;
typedef enum M2vPicType_x00194940 {
    M2V_PICTYPE_I_x00194940 = 1,
    M2V_PICTYPE_P_x00194940 = 2,
    M2V_PICTYPE_B_x00194940 = 3,
    M2V_PICTYPE_D_x00194940 = 4
} M2vPicType_x00194940;
typedef enum M2vPicStruct_x00194940 {
    M2V_PICSTRUCT_TOP_FIELD_x00194940 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00194940 = 2,
    M2V_PICSTRUCT_FRAME_x00194940 = 3
} M2vPicStruct_x00194940;
typedef enum M2vPicAtrF64_x00194940 {
    M2V_PICATR_F64_0_x00194940 = 0
} M2vPicAtrF64_x00194940;
typedef struct M2vPicAtr_x00194940 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00194940 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00194940 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00194940 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00194940 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00194940;
typedef struct SfdSlot_x00194940 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00194940 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00194940 *blob;
    M2vPicAtr_x00194940 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00194940;
void func_00194940_x00194940(SfdSlot_x00194940 *slot) __asm__("func_00194940");
/* SFMPVF_EndRefFrm: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00194940_x00194940(SfdSlot_x00194940 *slot) {
    if (slot != 0) {
        if (slot->state == 4) {
            slot->state = 2;
        } else {
            slot->state = 0;
        }
    }
}
s32 func_0018D908_x00194968(void *) __asm__("func_0018D908");
s32 func_0018D920_x00194968(void *) __asm__("func_0018D920");
s32 func_00194C08_x00194968(s32 *, s32 *) __asm__("func_00194C08");
s32 * func_00194968_x00194968(u8 *arg0, s32 *arg1) __asm__("func_00194968");
s32 * func_00194968_x00194968(u8 *arg0, s32 *arg1) {
    u8 sp[8];
    u8 *var_s0;
    s32 *var_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s4;
    u8 *temp_s3;

    var_s2 = NULL;
    var_s4 = 0;
    func_0018D908_x00194968(sp);
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1C70);
    temp_v0 = *(s32 *)((u8 *)temp_s3 + 0x168);
    var_s0 = temp_s3 + 0x16C;
    *arg1 = 0;
    if (temp_v0 > 0) {
        var_s1 = temp_v0;
        do {
            temp_v0_2 = *(s32 *)var_s0;
            if (temp_v0_2 != 2) {
                if (temp_v0_2 == 4) {
                    goto block_5;
                }
            } else {
block_5:
                var_s4 += 1;
                var_s2 = (func_00194C08_x00194968(var_s2, (s32 *)var_s0) != 0) ? (s32 *)var_s0 : var_s2;
            }
            var_s1 -= 1;
            var_s0 += 0xDC;
        } while (var_s1 != 0);
    }
    if ((var_s4 == 1) && (*(s32 *)((u8 *)temp_s3 + 0x7C) != 0)) {
        *arg1 = var_s4;
    }
    func_0018D920_x00194968(sp);
    return var_s2;
}
typedef struct SfdSj_x00194A50 SfdSj_x00194A50;
typedef struct SfdSjChunk_x00194A50 {
    char *data;
    int len;
} SfdSjChunk_x00194A50;
typedef struct SfdSjVtbl_x00194A50 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00194A50 *sj);
    int (*getUuid)(SfdSj_x00194A50 *sj);
    void (*reset)(SfdSj_x00194A50 *sj);
    void (*getChunk)(SfdSj_x00194A50 *sj, int id, int n, SfdSjChunk_x00194A50 *ck);
    void (*ungetChunk)(SfdSj_x00194A50 *sj, int id, SfdSjChunk_x00194A50 *ck);
    void (*putChunk)(SfdSj_x00194A50 *sj, int id, SfdSjChunk_x00194A50 *ck);
    int (*getNumData)(SfdSj_x00194A50 *sj, int id);
} SfdSjVtbl_x00194A50;
struct SfdSj_x00194A50 {
    SfdSjVtbl_x00194A50 *vtbl;
};
struct SfdSj_x00194A50;
struct SfdRecSlot_x00194A50;
struct SfdRec_x00194A50;
struct SfdMpvCond_x00194A50;
struct SfdPlanes_x00194A50;
struct SfdFrameInfo_x00194A50;
struct SfdPly_x00194A50;
typedef int (*SfdTimeFn_x00194A50)(void *sfd, int *time, int *unit);
typedef struct SfdTimeCode_x00194A50 {
    int rate;
    int drop;
    int hour;
    int minute;
    int second;
    int frame;
    int add;
    short repeat;
    short field;
} SfdTimeCode_x00194A50;
typedef struct SfdTimeRec_x00194A50 {
    int valid;
    SfdTimeCode_x00194A50 tc;
    int time;
    int unit;
} SfdTimeRec_x00194A50;
typedef struct SfdTst_x00194A50 {
    int f0;
    unsigned int pastat;
    unsigned int adjmode;
    int paused;
    int count;
    int pos;
    int values[60];
    long long master_time;
    long long f272;
    long long help_time;
    long long help_unit;
    long long out_time;
    long long f304;
    long long f312;
    long long f320;
    long long f328;
    long long f336;
    long long f344;
    long long f352;
    long long f360;
    long long f368;
    long long f376;
    long long f384;
    long long mt_max;
    int adj_limit;
    int adj_front;
    int adj_rear;
    int resethist;
    int excesserr;
    int movave_1st;
    int movave_2nd;
    int diff_l_max;
    int diff_l_min;
    int diff_a_max;
    int diff_a_min;
    int pad444;
} SfdTst_x00194A50;
typedef struct SfdSyncTally_x00194A50 {
    int total;
    int count;
    int history[32];
} SfdSyncTally_x00194A50;
typedef struct SfdSyncQueue_x00194A50 {
    int last;
    int f4;
    int wr;
    int rd;
    int items[32];
} SfdSyncQueue_x00194A50;
typedef struct SfdFieldEntry_x00194A50 {
    short repeat;
    unsigned short total;
} SfdFieldEntry_x00194A50;
typedef struct SfdPtsm_x00194A50 {
    int f0;
    int f4;
    int f8;
} SfdPtsm_x00194A50;
typedef struct SfdHdrAudio_x00194A50 {
    int codec;
    int nch;
    int bps;
    int sfreq;
} SfdHdrAudio_x00194A50;
typedef struct SfdHdrMux_x00194A50 {
    int kind[4];
    int numFrm;
    int totalTime;
    int timeUnit;
} SfdHdrMux_x00194A50;
typedef struct SfdHdrVideo_x00194A50 {
    int codec;
    int bitRate;
    int width;
    int height;
    int frameRate;
    int avail;
    int picType;
    int profile;
    int flag0;
    int flag4;
    int chroma;
    int zFirst;
    int zSecond;
} SfdHdrVideo_x00194A50;
typedef struct SfdHdrInf_x00194A50 {
    int valid;
    int verMajor;
    int verMinor;
    int muxRate;
    int bitRate;
    int sysType;
    int numStm;
    int totalSize;
    SfdHdrMux_x00194A50 mux;
    int adxStm;
    int prv2Stm;
    int audioStm;
    int videoStm;
    SfdHdrAudio_x00194A50 audio;
    SfdHdrVideo_x00194A50 video;
    int size;
    char data[2048];
} SfdHdrInf_x00194A50;
typedef struct SfdMvInf_x00194A50 {
    int width;
    int height;
    int mbWidth;
    int mbHeight;
    int bitRate;
    int frameRate;
    int muxRate;
    int fixedFlag;
    int vbvSize;
    int audioBound;
    int videoBound;
    int privateBound;
    int f48[4];
} SfdMvInf_x00194A50;
typedef struct SfdPlyInf_x00194A50 {
    int numTotalDec;
    int numSkip;
    int f8;
    int f12;
    int numSkipEmptyB;
    int numSkipEmptyP;
    int frmOut;
    int bpaActive;
    int noSupply;
    int vidShort;
    int noFreeFrm;
    int lockCnt;
    long long sysFlow;
    long long sysByte;
    long long sysSkip;
    long long vidFlow;
    long long vidByte;
    long long vidSkip;
    long long audInWr;
    long long audInRd;
    long long audByte;
    long long audSjWr;
    long long audSjRd;
    long long f136;
    int f144[4];
} SfdPlyInf_x00194A50;
typedef void (*SfdErrFn_x00194A50)(void *obj, int code);
typedef struct SfdErrInf_x00194A50 {
    SfdErrFn_x00194A50 func;
    void *obj;
    int code;
    int f12;
    int f16;
} SfdErrInf_x00194A50;
typedef int (*SfdExtClockFn_x00194A50)(int ctx, int *time, int *unit);
typedef int (*SfdIsSkipFn_x00194A50)(void *sfd, int type, int time, int unit);
typedef struct SfdTim_x00194A50 {
    SfdTimeFn_x00194A50 timefn[6];
    SfdIsSkipFn_x00194A50 isSkipFn;
    SfdTimeCode_x00194A50 tc;
    SfdTimeRec_x00194A50 state;
    SfdTimeRec_x00194A50 best;
    SfdTimeRec_x00194A50 tot;
    SfdTimeRec_x00194A50 cur;
    SfdTimeRec_x00194A50 latest;
    SfdTimeRec_x00194A50 vofst;
    int astart_smpl;
    int astart_sfreq;
    int pad332;
    long long baseTime;
    long long ofsTime;
    int concat_frmcnt;
    SfdSyncTally_x00194A50 tally;
    SfdSyncQueue_x00194A50 queue;
    int base;
    int base_frames;
    int dec_time;
    int dec_unit;
    int cached_pos;
    int cached_rate;
    int last;
    int estimate;
    int largest;
    int smallest;
    int usr_frm_sync;
    int stream_pos;
    int speed;
    int disp_sync_cnt;
    int disp_sync_time;
    int disp_sync_unit;
    int sync_count;
    float sync_pending;
    int sync_last;
    float sync_time;
    int count;
    int chg_base;
    SfdExtClockFn_x00194A50 clock_get;
    int clock_last;
    int decoded_pos;
    int rate;
    int clock_wrap;
    int clock_ctx;
    int pad748;
    SfdTst_x00194A50 tst;
    SfdFieldEntry_x00194A50 fields[64];
    SfdPtsm_x00194A50 ptsm;
    char pad1468[36];
} SfdTim_x00194A50;
enum {
    SFD_COND_VIDEO_x00194A50 = 5,
    SFD_COND_AUDIO_x00194A50 = 6,
    SFD_COND_KEEPSUP_x00194A50 = 8,
    SFD_COND_SYNCMODE_x00194A50 = 15,
    SFD_COND_ETIME_x00194A50 = 20,
    SFD_COND_ETUNIT_x00194A50 = 21,
    SFD_COND_LNKSTM_x00194A50 = 49,
    SFD_COND_SUPPLY_END_x00194A50 = 56,
    SFD_COND_DECODE_END_x00194A50 = 57,
    SFD_COND_DEMUX_SPLIT_x00194A50 = 59,
    SFD_COND_VIDEO_AUTO_OFF_x00194A50 = 79,
    SFD_COND_AUDIO_AUTO_OFF_x00194A50 = 80,
    SFD_COND_SYSHD_FN_x00194A50 = 85,
    SFD_COND_SYSHD_FN_OBJ_x00194A50 = 86,
    SFD_COND_NUM_x00194A50 = 100
};
typedef enum SfdBufFmt_x00194A50 {
    SFD_BUFFMT_0_x00194A50 = 0
} SfdBufFmt_x00194A50;
typedef enum SfdBufId_x00194A50 {
    SFD_BUF_NONE_x00194A50 = 8
} SfdBufId_x00194A50;
typedef struct SfdCrePrm_x00194A50 {
    struct SfdTrnConfig_x00194A50 *trnConfig;
    char *bufWork;
    int bufSize[8];
    int unit;
    int f44;
    int f48;
    int f52;
    SfdBufFmt_x00194A50 bufFmt;
    char *work;
    unsigned int workSize;
} SfdCrePrm_x00194A50;
typedef struct SfdItem_x00194A50 {
    long long pos;
    unsigned int addr;
    unsigned int size;
} SfdItem_x00194A50;
typedef struct SfdRing_x00194A50 {
    SfdItem_x00194A50 *items;
    int size;
    int count;
    int wr;
    int rd;
} SfdRing_x00194A50;
typedef struct SfdBufInf_x00194A50 {
    char *data;
    struct SfdSj_x00194A50 *sj;
    char *buf;
    int size;
    int xsize;
    char *p0;
} SfdBufInf_x00194A50;
typedef struct SfdBufCur_x00194A50 {
    char *pos;
    int len;
} SfdBufCur_x00194A50;
typedef struct SfdBufDlm_x00194A50 {
    char *pos;
    char *end;
} SfdBufDlm_x00194A50;
typedef struct SfdBufRing_x00194A50 {
    SfdBufInf_x00194A50 sup;
    SfdBufDlm_x00194A50 dlm;
    int wtot;
    int rtot;
    SfdRing_x00194A50 ptsque;
} SfdBufRing_x00194A50;
typedef struct SfdBufAring_x00194A50 {
    SfdBufInf_x00194A50 sup;
    SfdBufCur_x00194A50 ch1;
    int wpos;
    int rpos;
    int wtot;
    int rtot;
} SfdBufAring_x00194A50;
typedef struct SfdUoch_x00194A50 {
    struct SfdSj_x00194A50 *sj;
    void (*begin)(void *hn, int id);
    void (*end)(void *arg, int id);
    void *arg;
} SfdUoch_x00194A50;
typedef struct SfdBufEnt_x00194A50 {
    int mode;
    int used;
    int prepFlg;
    int termFlg;
    union {
        SfdBufRing_x00194A50 ring;
        SfdBufAring_x00194A50 aring;
        SfdBufInf_x00194A50 vfrm;
        SfdUoch_x00194A50 uoch[3];
    } u;
    int inTr;
    int outTr;
    char pad84[32];
} SfdBufEnt_x00194A50;
typedef int (*SfdTrnFn_x00194A50)();
typedef struct SfdTrnConfig_x00194A50 {
    SfdTrnFn_x00194A50 *fns[9];
} SfdTrnConfig_x00194A50;
typedef struct SfdMpsPrm_x00194A50 {
    void *mps;
    int videoBound;
    int audioBound;
    int pad12;
    long long startPts;
    long long firstPts;
    int nPics;
    int f36;
    int f40;
    int f44;
    int f48;
    int videoCh;
    int audioCh;
    int f60;
    struct SfdSj_x00194A50 *object[68];
    int (*stmCb)(void *obj, int arg);
    void *stmCbObj;
    int f344;
} SfdMpsPrm_x00194A50;
typedef struct SfdAdxCfg_x00194A50 {
    int bsize;
    int xsize;
    char *buf;
    int maxnch;
    int f16;
    int worksize;
    char *work;
} SfdAdxCfg_x00194A50;
typedef void (*SfdAdxStep_x00194A50)(struct SfdPly_x00194A50 *h, char *buf, int size, int *used);
typedef struct SfdAdxCtx_x00194A50 {
    void *adxt;
    void *sj;
    SfdAdxCfg_x00194A50 cfg;
    int time;
    int unit;
    int f44;
    int carry;
    int started;
    int pos;
    SfdAdxStep_x00194A50 step;
    int f64;
    int opt27;
    int total;
    int f76;
} SfdAdxCtx_x00194A50;
typedef struct SfdAoap_x00194A50 {
    int rna;
    void (*setOutPan)(struct SfdPly_x00194A50 *h, int ch, int pan);
    int (*getOutPan)(struct SfdPly_x00194A50 *h, int ch);
    void (*setOutVol)(struct SfdPly_x00194A50 *h, int vol);
    int (*getOutVol)(struct SfdPly_x00194A50 *h);
    void (*setSpeed)(struct SfdPly_x00194A50 *h, int speed);
} SfdAoap_x00194A50;
typedef struct SfainfOut_x00194A50 {
    int kind;
    void *sj;
    void *buf;
    int size;
} SfainfOut_x00194A50;
typedef struct SfainfList_x00194A50 {
    int nout;
    SfainfOut_x00194A50 out[3];
} SfainfList_x00194A50;
typedef struct SfdTrnSlot_x00194A50 {
    int prepFlg;
    int termFlg;
    union {
        void *obj;
        SfdMpsPrm_x00194A50 *mps;
        struct SfdMpv_x00194A50 *mpv;
        SfdAdxCtx_x00194A50 *adxt;
        SfdAoap_x00194A50 *aoap;
        SfainfList_x00194A50 *uo;
    } hn;
    SfdTrnFn_x00194A50 *fns;
    SfdBufId_x00194A50 bufIn;
    int bufOut[3];
    int readTot;
    char pad36[32];
} SfdTrnSlot_x00194A50;
typedef struct SfdTsum_x00194A50 {
    long long sum;
    long long min;
    long long max;
    int count;
    int pad28;
} SfdTsum_x00194A50;
typedef struct SfdTmrInf_x00194A50 {
    SfdTsum_x00194A50 tsum[6];
} SfdTmrInf_x00194A50;
struct SfdSj_x00194A50;
typedef struct M2vErrInf_x00194A50 {
    int (*func)(void *obj);
    void *obj;
    int code;
    int reserved[2];
} M2vErrInf_x00194A50;
typedef struct Mpeg2Ext_x00194A50 {
    int sequence_header_code;
    int horizontal_size_value;
    int vertical_size_value;
    int aspect_ratio_information;
    int frame_rate_code;
    int bit_rate_value;
    int marker_bit;
    int vbv_buffer_size_value;
    int constrained_parameters_flag;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int sec_start_code;
    int udsc_start_code;
    int start_code;
    int number_of_frame_centre_offsets;
    char pad3[4];
    int extension_id;
    int profile_and_level_indication;
    int progressive_sequence;
    int chroma_format;
    int horizontal_size_extension;
    int vertical_size_extension;
    int bit_rate_extension;
    int vbv_buffer_size_extension;
    int low_delay;
    int frame_rate_extension_n;
    int frame_rate_extension_d;
    int video_format;
    int colour_description;
    int colour_primaries;
    int transfer_characteristics;
    int matrix_coefficients;
    int display_horizontal_size;
    int display_vertical_size;
    int scalable_mode;
    int layer_id;
    int lower_layer_prediction_horizontal_size;
    int lower_layer_prediction_vertical_size;
    int horizontal_subsampling_factor_m;
    int horizontal_subsampling_factor_n;
    int vertical_subsampling_factor_m;
    int vertical_subsampling_factor_n;
    int picture_mux_enable;
    int mux_to_progressive_sequence;
    int picture_mux_order;
    int picture_mux_factor;
    int group_start_code;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int closed_gop;
    int broken_link;
    int picture_start_code;
    int temporal_reference;
    int picture_coding_type;
    int vbv_delay;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int extra_bit_picture;
    int extra_information_picture;
    char pad4b[4];
    int f_code00;
    int f_code01;
    int f_code10;
    int f_code11;
    int intra_dc_precision;
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int q_scale_type;
    int intra_vlc_format;
    int alternate_scan;
    int repeat_first_field;
    int chroma_420_type;
    int progressive_frame;
    int composite_display_flag;
    int v_axis;
    int field_sequence;
    int sub_carrier;
    int burst_amplitude;
    int sub_carrier_phase;
    int load_chroma_intra_quantiser_matrix;
    int load_chroma_non_intra_quantiser_matrix;
    int frame_centre_horizontal_offset[3];
    int frame_centre_vertical_offset[3];
    int reference_select_code;
    int forward_temporal_reference;
    int backward_temporal_reference;
    int lower_layer_temporal_reference;
    int lower_layer_horizontal_offset;
    int lower_layer_vertical_offset;
    int spatial_temporal_weight_code_table_index;
    int lower_layer_progressive_frame;
    int lower_layer_deinterlaced_field_select;
    int copyright_flag;
    int copyright_identifier;
    int original_or_copy;
    int copyright_reserved;
    int copyright_number_1;
    int copyright_number_2;
    int copyright_number_3;
    char pad5[268];
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    char pad6[44];
    int ext_state;
    int expected_ext_id;
    int scalable_seen;
    int spatial_scalable_seen;
    int blocks_per_macroblock;
    char pad796[4];
    int dc_dct_pred_reset;
    char pad804[12];
    int intra_dc_mult;
    char pad820[128];
    int padded_width;
    int padded_height;
    int half_width;
    int half_height;
    int field_964;
    int field_968;
    char pad8[164];
    int f1136[5];
    int header_level;
    int f1160;
    int f1164;
    int shc_count;
    int sec_count;
    int udsc_count;
    int call_count;
    int gsc_count;
    int psc_count;
    int picture_count[4];
    char pad10[64];
    int error_count;
    int warning_count;
    char pad1280[12];
    int field_1292;
    char pad1296[8];
} Mpeg2Ext_x00194A50;
typedef enum M2vFrameRate_x00194A50 {
    M2V_FRAME_RATE_FORBIDDEN_x00194A50 = 0
} M2vFrameRate_x00194A50;
typedef enum M2vPicType_x00194A50 {
    M2V_PICTYPE_I_x00194A50 = 1,
    M2V_PICTYPE_P_x00194A50 = 2,
    M2V_PICTYPE_B_x00194A50 = 3,
    M2V_PICTYPE_D_x00194A50 = 4
} M2vPicType_x00194A50;
typedef enum M2vPicStruct_x00194A50 {
    M2V_PICSTRUCT_TOP_FIELD_x00194A50 = 1,
    M2V_PICSTRUCT_BOTTOM_FIELD_x00194A50 = 2,
    M2V_PICSTRUCT_FRAME_x00194A50 = 3
} M2vPicStruct_x00194A50;
typedef enum M2vPicAtrF64_x00194A50 {
    M2V_PICATR_F64_0_x00194A50 = 0
} M2vPicAtrF64_x00194A50;
typedef struct M2vPicAtr_x00194A50 {
    int horizontal_size;
    int vertical_size;
    int mb_width;
    int mb_height;
    M2vFrameRate_x00194A50 frame_rate_code;
    int temporal_reference;
    M2vPicType_x00194A50 picture_coding_type;
    int drop_frame_flag;
    int time_code_hours;
    int time_code_minutes;
    int time_code_seconds;
    int time_code_pictures;
    int gsc_count;
    int shc_count;
    M2vPicStruct_x00194A50 picture_structure;
    int chroma_format;
    M2vPicAtrF64_x00194A50 f64;
    int f68;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char field_count;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    signed char repeat_first_field;
    signed char field_964;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad101[27];
} M2vPicAtr_x00194A50;
typedef void (*M2vUsrDatFn_x00194A50)(void *obj, int level);
typedef struct M2vUsrSj_x00194A50 {
    struct SfdSj_x00194A50 *sj;
    M2vUsrDatFn_x00194A50 fn;
    void *obj;
} M2vUsrSj_x00194A50;
typedef struct M2vPicUsr_x00194A50 {
    char *buf;
    int size;
    int len;
} M2vPicUsr_x00194A50;
typedef void (*M2vCondFn_x00194A50)();
typedef struct M2vObj_x00194A50 {
    int stat;
    M2vErrInf_x00194A50 err;
    M2vCondFn_x00194A50 cond[16];
    M2vPicAtr_x00194A50 picatr;
    char pad216[64];
    M2vUsrSj_x00194A50 usrsj[4];
    M2vPicUsr_x00194A50 picusr;
    char pad340[12];
    Mpeg2Ext_x00194A50 ext;
    char pad1656[8];
} M2vObj_x00194A50;
extern void M2V_SetErrFunc_x00194A50(M2vObj_x00194A50 *hn, int (*func)(void *obj), void *obj) __asm__("M2V_SetErrFunc");
typedef struct sceIpuDmaEnv_x00194A50 {
    unsigned int d4madr;
    unsigned int d4tadr;
    unsigned int d4qwc;
    unsigned int d4chcr;
    unsigned int d3madr;
    unsigned int d3qwc;
    unsigned int d3chcr;
    unsigned int ipubp;
    unsigned int ipuctrl;
} sceIpuDmaEnv_x00194A50;
typedef struct sceMpeg_x00194A50 {
    int width;
    int height;
    int frameCount;
    long pts;
    long dts;
    unsigned long flags;
    long pts2nd;
    long dts2nd;
    unsigned long flags2nd;
    struct _sceMpegDecoder_x00194A50 *sys;
} sceMpeg_x00194A50;
typedef enum {
    sceMpegCbError_x00194A50,
    sceMpegCbNodata_x00194A50,
    sceMpegCbStopDMA_x00194A50,
    sceMpegCbRestartDMA_x00194A50,
    sceMpegCbBackground_x00194A50,
    sceMpegCbTimeStamp_x00194A50,
    sceMpegCbStr_x00194A50,
    sceMpegCbNum_x00194A50
} sceMpegCbType_x00194A50;
typedef struct {
    sceMpegCbType_x00194A50 type;
    char *errMessage;
} sceMpegCbDataError_x00194A50;
typedef struct {
    sceMpegCbType_x00194A50 type;
    long pts;
    long dts;
} sceMpegCbDataTimeStamp_x00194A50;
typedef struct {
    sceMpegCbType_x00194A50 type;
    unsigned char *header;
    unsigned char *data;
    unsigned int len;
    long pts;
    long dts;
} sceMpegCbDataStr_x00194A50;
typedef union {
    sceMpegCbType_x00194A50 type;
    sceMpegCbDataError_x00194A50 error;
    sceMpegCbDataTimeStamp_x00194A50 ts;
    sceMpegCbDataStr_x00194A50 str;
} sceMpegCbData_x00194A50;
typedef int (*sceMpegCallback_x00194A50)(sceMpeg_x00194A50 *mp, sceMpegCbData_x00194A50 *cbdata, void *anyData);
typedef struct {
    sceMpegCallback_x00194A50 func;
    void *data;
    void *gp;
} _sceMpegCallbackSlot_x00194A50;
typedef struct {
    char *start;
    int size;
    char *cur;
    char *dynamic;
} _sceMpegAlalc_x00194A50;
typedef struct {
    char *base;
    int width;
    int height;
    int mb_width;
    int mb_height;
    int pad_20;
    long pts;
    long dts;
    int decoded;
    int picture_coding_type;
    int picture_structure;
    int progressive_sequence;
    int progressive_frame;
    int top_field_first;
    int repeat_first_field;
    int center_offsets[6];
    int disp_width;
    int disp_height;
} _sceMpegPicture_x00194A50;
typedef struct {
    _sceMpegPicture_x00194A50 *ref_image;
    _sceMpegPicture_x00194A50 *prev_image;
    _sceMpegPicture_x00194A50 *decode;
    _sceMpegPicture_x00194A50 *image;
} _sceMpegPictureSlot_x00194A50;
typedef struct {
    short *dst;
    int column;
    int rows;
    int rows_below;
    int pitch;
    unsigned char *left;
    unsigned char *right;
} _sceMpegMcFetch_x00194A50;
typedef void (*_sceMpegMcKernel_x00194A50)(_sceMpegMcFetch_x00194A50 *fetch);
typedef struct {
    unsigned int src;
    unsigned int dst;
    unsigned char *block[4];
    unsigned char *block_right[4];
    _sceMpegMcKernel_x00194A50 luma_kernel[4];
    _sceMpegMcKernel_x00194A50 chroma_kernel[4];
    _sceMpegMcFetch_x00194A50 luma[4];
    _sceMpegMcFetch_x00194A50 chroma[4];
    char *dest;
    int pred_count;
    int intra;
    int skipped;
    int predicted;
    int empty;
} _sceMpegSprBuffer_x00194A50;
typedef struct _sceMpegDecoder_x00194A50 {
    int is_end;
    int ref_count;
    int seq_state;
    _sceMpegCallbackSlot_x00194A50 callbacks[sceMpegCbNum_x00194A50];
    char *spare_buffer;
    int spare;
    sceIpuDmaEnv_x00194A50 ipu_dma_env;
    int has_pts_gap;
    long pts_gap;
    int last_pts;
    int pad_156;
    long field_count;
    int half_field;
    int ni;
    int np;
    int nb;
    int count_i;
    int count_p;
    int count_b;
    int first_frame_no;
    int rgb32;
    int center_offsets[6];
    int disp_width;
    int disp_height;
    int first_picture_structure;
    unsigned int image_buff;
    int image_width;
    int image_height;
    int image_size;
    int set_broken_link;
    int pad_260;
    long ptm;
    int ptm_state;
    char *frame_buffers[3];
    _sceMpegAlalc_x00194A50 alalc;
    int frame_no;
    int error;
    int second_field;
    int h_size;
    int v_size;
    int mb_width;
    int mb_height;
    int bit_rate;
    int vbv_buffer_size;
    int progressive_sequence;
    int chroma_format;
    int matrix_coefficients;
    int display_h_size;
    int display_v_size;
    int picture_coding_type;
    int full_pel_forward_vector;
    int forward_f_code;
    int full_pel_backward_vector;
    int backward_f_code;
    int f_code[2][2];
    int picture_structure;
    int top_field_first;
    int frame_pred_frame_dct;
    int concealment_motion_vectors;
    int repeat_first_field;
    int progressive_frame;
    int frame_center_horizontal_offset[3];
    int frame_center_vertical_offset[3];
    int closed_gop;
    int broken_link;
    int temporal_order;
    int dc_reset;
    int quantiser_scale_code;
    _sceMpegPictureSlot_x00194A50 slots[3];
    _sceMpegPicture_x00194A50 pictures[9];
    _sceMpegSprBuffer_x00194A50 spr[2];
    int mb_buffer;
    int mb_count;
    int ipu_cmd_pending;
    unsigned int mc_work;
    int stopped;
    int pad_2108;
    long pts;
    long dts;
    unsigned int bits;
    int bit_count;
    int load_intra_quantiser_matrix;
    int load_non_intra_quantiser_matrix;
    int mpeg2;
    int temporal_base;
    int temporal_max;
    int gop_started;
    sceMpeg_x00194A50 *mp;
    char pad_2164[12];
    unsigned long long ipu_tags[260];
    int abort;
    char pad_4260[28];
} _sceMpegDecoder_x00194A50;
typedef struct SfdPlanes_x00194A50 {
    char *luma;
    char *chroma;
    char *base;
    short chromaStride;
    short lumaStride;
} SfdPlanes_x00194A50;
typedef struct SfdUserData_x00194A50 {
    char data[512];
    int size;
} SfdUserData_x00194A50;
typedef struct SfdRecVideo_x00194A50 {
    int valid;
    int time;
    int unit;
    SfdTimeRec_x00194A50 stamp;
    SfdUserData_x00194A50 user;
} SfdRecVideo_x00194A50;
typedef struct SfdSlot_x00194A50 {
    int state;
    int refs;
    void *buf;
    SfdTimeRec_x00194A50 stamp;
    int ftime;
    int tunit;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00194A50 *blob;
    M2vPicAtr_x00194A50 info;
    long long pts;
    int frmcnt;
    int pad228;
} SfdSlot_x00194A50;
typedef struct SfdBufPool_x00194A50 {
    char *base;
    int count;
    int size;
    SfdSjChunk_x00194A50 slot[18];
} SfdBufPool_x00194A50;
typedef struct SfdMpvCond_x00194A50 {
    int rfb_width;
    int rfb_height;
    int max_width;
    int max_height;
    int rfb_adr;
    int frm_width;
    int frm_height;
    int count;
    int ta_adr;
} SfdMpvCond_x00194A50;
typedef struct SfdMpvWorkBufs_x00194A50 {
    int w[2];
} SfdMpvWorkBufs_x00194A50;
typedef struct SfdMpvFrameBufs_x00194A50 {
    int w[16];
} SfdMpvFrameBufs_x00194A50;
typedef struct SfdIpuEntry_x00194A50 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00194A50;
typedef struct SfdDmaTag_x00194A50 {
    long long tag;
    long long pad;
} SfdDmaTag_x00194A50;
typedef struct SfdIpuStream_x00194A50 {
    void *base;
    SfdDmaTag_x00194A50 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00194A50 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00194A50;
typedef struct SfdIpuCtl_x00194A50 {
    int enabled;
    int pscNext;
    int pscFound;
    int pscCount;
    char tail0;
    char tail1;
    char tail2;
    char f19;
    int endRequest;
    int endSent;
    int stopped;
    int value;
    int pad36;
    sceMpeg_x00194A50 mpeg;
    SfdIpuStream_x00194A50 stream;
    sceMpegCbDataError_x00194A50 error;
} SfdIpuCtl_x00194A50;
typedef struct SfdPtsComp_x00194A50 {
    int tmpref;
    int ofst;
    int max;
    int pad12;
    SfdItem_x00194A50 ptsent;
} SfdPtsComp_x00194A50;
typedef struct SfdMpv_x00194A50 {
    void *handle;
    SfdMpvCond_x00194A50 cond;
    SfdMpvWorkBufs_x00194A50 work;
    SfdMpvFrameBufs_x00194A50 bufs;
    SfdSlot_x00194A50 *current;
    unsigned int picstat;
    int dlmmask;
    int termflg;
    int gopstat;
    int nskip;
    int nconcat;
    M2vPicAtr_x00194A50 pic;
    int last_ngop;
    int newgop;
    int limit;
    SfdPtsComp_x00194A50 ptscomp;
    int refidx_fwd;
    int refidx_bwd;
    SfdPlanes_x00194A50 planes[2];
    SfdSlot_x00194A50 *first;
    SfdSlot_x00194A50 *second;
    SfdSlot_x00194A50 *pendfrm;
    int skipret;
    int dlmwait;
    int tmpref_adj;
    int slotCount;
    int pad380;
    SfdSlot_x00194A50 slots[16];
    SfdBufPool_x00194A50 pool;
    int pad4252;
    long long pts;
    SfdIpuCtl_x00194A50 ipu;
} SfdMpv_x00194A50;
typedef enum SfdPicType_x00194A50 {
    SFD_PICTYPE_I_x00194A50 = 1,
    SFD_PICTYPE_P_x00194A50 = 2,
    SFD_PICTYPE_B_x00194A50 = 3
} SfdPicType_x00194A50;
typedef enum SfdFrmInfF60_x00194A50 {
    SFD_FRMINF_F60_0_x00194A50 = 0
} SfdFrmInfF60_x00194A50;
typedef struct SfdFrameDetail_x00194A50 {
    int f72;
    char pad76[4];
    long long pts;
    int picture_structure;
    int chroma_format;
    int bit_rate;
    int vbv_buffer_size;
    unsigned short display_horizontal_size;
    unsigned short display_vertical_size;
    unsigned char progressive_frame;
    unsigned char top_field_first;
    unsigned char repeat_first_field;
    unsigned char aspect_ratio_information;
    unsigned char constrained_parameters_flag;
    unsigned char frame_rate_extension_n;
    unsigned char frame_rate_extension_d;
    unsigned char profile_and_level_indication;
    unsigned char progressive_sequence;
    unsigned char low_delay;
    unsigned char video_format;
    unsigned char colour_description;
    unsigned char colour_primaries;
    unsigned char transfer_characteristics;
    unsigned char matrix_coefficients;
    char pad123[5];
} SfdFrameDetail_x00194A50;
typedef struct SfdFrameInfo_x00194A50 {
    int width;
    int height;
    int x_mb;
    int y_mb;
    SfdPicType_x00194A50 picType;
    int time;
    int unit;
    SfdBufFmt_x00194A50 bufFmt;
    void *buf;
    int errcnt;
    int rcvcnt;
    int concat_cnt;
    int time_per_file;
    int cat_time;
    SfdSjChunk_x00194A50 *picUsr;
    SfdFrmInfF60_x00194A50 f60;
    int f64;
    char pad68[4];
    union {
        SfdFrameDetail_x00194A50 detail;
        long long words[7];
    } tail;
} SfdFrameInfo_x00194A50;
typedef struct SfdVfrm_x00194A50 {
    int used;
    int f4;
    SfdFrameInfo_x00194A50 inf;
} SfdVfrm_x00194A50;
typedef struct SfdPly_x00194A50 SfdPly_x00194A50;
typedef struct SfdRec_x00194A50 SfdRec_x00194A50;
typedef struct SfdRecSub_x00194A50 {
    int f0;
    int time;
    int unit;
} SfdRecSub_x00194A50;
typedef struct SfdRecSlot_x00194A50 {
    SfdRec_x00194A50 *rec;
    SfdRecSub_x00194A50 sub;
} SfdRecSlot_x00194A50;
typedef struct SfdSysHd_x00194A50 {
    char data[2][176];
    int len[2];
} SfdSysHd_x00194A50;
typedef struct SfdRecSys_x00194A50 {
    int valid;
    int time;
    int unit;
    int nvid;
    int naud;
    int f20;
    long long scrBase;
    long long ptsMin;
    int stmidVid;
    int stmidAud;
    SfdSysHd_x00194A50 syshd;
} SfdRecSys_x00194A50;
typedef struct SfdRecAudio_x00194A50 {
    int valid;
    int time;
    int unit;
    int nch;
    int sfreq;
    int nsmpl;
} SfdRecAudio_x00194A50;
struct SfdRec_x00194A50 {
    int state;
    int time;
    int unit;
    SfdHdrInf_x00194A50 hdrInf;
    SfdRecSys_x00194A50 sys;
    char pad2616[152];
    SfdRecVideo_x00194A50 video;
    SfdRecAudio_x00194A50 audio;
    char pad3364[132];
    int derived;
    int default_value;
    int default_divisor;
    int default_scale;
    int id3512;
    int id3516;
    int delegate;
    int fsize;
    int tottime;
    int tunit;
    int byterate;
    int seekpos;
};
struct SfdPly_x00194A50 {
    SfdCrePrm_x00194A50 cre;
    int pending;
    int stat;
    int reqStat;
    int pause;
    int pauseCnt;
    char pad88[32];
    SfdHdrInf_x00194A50 hdr;
    SfdMvInf_x00194A50 mvInf;
    char pad2380[4];
    SfdPlyInf_x00194A50 plyInf;
    SfdErrInf_x00194A50 err;
    int cond[SFD_COND_NUM_x00194A50];
    int cond2[SFD_COND_NUM_x00194A50];
    char pad3364[4];
    SfdTim_x00194A50 tim;
    SfdBufEnt_x00194A50 buf[8];
    SfdVfrm_x00194A50 vfrm[16];
    SfdTrnSlot_x00194A50 trn[9];
    char pad8588[4];
    SfdMpsPrm_x00194A50 mps;
    char pad8944[176];
    SfdMpv_x00194A50 mpv;
    SfdAdxCtx_x00194A50 adxt;
    char pad13680[100];
    SfdAoap_x00194A50 aoap;
    char pad13804[4];
    SfainfList_x00194A50 uo;
    char pad13860[4];
    SfdRecSlot_x00194A50 see;
    SfdTmrInf_x00194A50 tmr;
};
extern void mpvhook_SetErrFunc_x00194A50(M2vObj_x00194A50 *lower, int (*func)(void *obj), void *obj) __asm__("mpvhook_SetErrFunc");
extern int MPV_EntryErrFunc_x00194A50(void *handle, void (*callback)(SfdPly_x00194A50 *, int), SfdPly_x00194A50 *player) __asm__("MPV_EntryErrFunc");
SfdSlot_x00194A50 *sfmpvf_ReferNextFrmReady_x00194A50(SfdPly_x00194A50 *player) __asm__("func_00194AD0");
SfdSlot_x00194A50 *sfmpvf_ReferNextFrmReady_x00194A50(SfdPly_x00194A50 *player) __asm__("func_00194AD0");
void func_00194A50_x00194A50(void *sfd, char **data, int *size) __asm__("func_00194A50");
/* SFD_GetNextPicUsr: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpv.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00194A50_x00194A50(void *sfd, char **data, int *size) {
    SfdPly_x00194A50 *player = sfd;
    SfdSlot_x00194A50 *slot = sfmpvf_ReferNextFrmReady_x00194A50(player);
    SfdSjChunk_x00194A50 *chunk;
    if (slot == 0) {
        *data = 0;
        *size = 0;
        return;
    }
    chunk = slot->blob;
    if (chunk == 0) {
        *data = 0;
        *size = 0;
        return;
    }
    *data = chunk->data;
    *size = chunk->len;
}
s32 func_00194AB0(void) {
    return func_00194AD0() != 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/sfd", func_00194AD0);
s32 func_00194C08_x00194C08(u8 *arg0, u8 *arg1) __asm__("func_00194C08");
s32 func_00194C08_x00194C08(u8 *arg0, u8 *arg1)
{
  s32 new_var;
  s32 var_v0;
  var_v0 = 1;
  if (arg0 != ((void *) 0))
  {
    new_var = *((s32 *) (((u8 *) arg0) + 0x38));
    var_v0 = (*((s32 *) (((u8 *) arg1) + 0x38))) < new_var;
  }
  return var_v0;
}
typedef struct SfdIpuEntry_x00194C28 {
    long long f0;
    long long f8;
    int f16;
    int f20;
} SfdIpuEntry_x00194C28;
typedef struct SfdDmaTag_x00194C28 {
    long long tag;
    long long pad;
} SfdDmaTag_x00194C28;
typedef struct SfdIpuStream_x00194C28 {
    void *base;
    SfdDmaTag_x00194C28 *uncached;
    int sectors;
    int headSct;
    int queuedSct;
    int restBytes;
    int bytes;
    unsigned int r28;
    unsigned int r32;
    unsigned int r36;
    unsigned int r40;
    unsigned int r44;
    unsigned int r48;
    unsigned int r52;
    unsigned int r56;
    unsigned int r60;
    int sema;
    int active;
    long long totalBytes;
    SfdIpuEntry_x00194C28 *entries;
    int entryCount;
    int f88;
    int f92;
} SfdIpuStream_x00194C28;
int func_00194C28_x00194C28(SfdIpuStream_x00194C28 *stream, int position) __asm__("func_00194C28");
/* getFIFOindex: from https://github.com/crashbashash/DW4_Decomp (src/cri/sfmpvps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00194C28_x00194C28(SfdIpuStream_x00194C28 *stream, int position) {
    if (position == ((stream->sectors * 16 + (unsigned int)stream->uncached + 16) & 0x0FFFFFFF)) {
        return 0;
    }
    return (position - (int)stream->base) / 2048;
}
