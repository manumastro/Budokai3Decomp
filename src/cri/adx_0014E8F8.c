#include "common.h"

extern s8 D_00400B60;

s32 func_0014E900();                            /* extern */

void func_0014E8F8(u8 *arg0) {
    *(s8 *)((u8 *)arg0 + 1) = 0;
}
typedef struct SfdSj_x0014E900 SfdSj_x0014E900;
typedef struct SfdSjChunk_x0014E900 { char *data; int len; } SfdSjChunk_x0014E900;
typedef struct SfdSjVtbl_x0014E900 { void *queryInterface; void *addRef; void *release; void (*destroy)(SfdSj_x0014E900 *sj); int (*getUuid)(SfdSj_x0014E900 *sj); void (*reset)(SfdSj_x0014E900 *sj); void (*getChunk)(SfdSj_x0014E900 *sj, int id, int n, SfdSjChunk_x0014E900 *ck); void (*ungetChunk)(SfdSj_x0014E900 *sj, int id, SfdSjChunk_x0014E900 *ck); void (*putChunk)(SfdSj_x0014E900 *sj, int id, SfdSjChunk_x0014E900 *ck); int (*getNumData)(SfdSj_x0014E900 *sj, int id); } SfdSjVtbl_x0014E900;
struct SfdSj_x0014E900 { SfdSjVtbl_x0014E900 *vtbl; };
typedef struct AdxPdObj_x0014E900 { int used; int id; int mode; int stat; int nblk_decoded; int channels; unsigned char *ibuf; int nblk; short *obufl; short *obufr; short dly[2][2]; short k0; short k1; short seed; short mul; short add; } AdxPdObj_x0014E900;
typedef struct AdxDecPara_x0014E900 { char *ibuf; int niblk; int nch; int blksize; int blknsmpl; short *pcmbuf; int pcmbsize; int pcmbdist; int wpos; int nroom; int lp_nsmpl; int ndecsmpl; } AdxDecPara_x0014E900;
struct Pl2Enc_x0014E900;
typedef struct AdxbObj_x0014E900 AdxbObj_x0014E900;
typedef short *(*AdxbGetWrFunc_x0014E900)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0014E900)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0014E900 { short used; short hdcdflag; int stat; AdxPdObj_x0014E900 *xpd; signed char code; signed char bps; signed char nch; signed char blklen; int blknsmpl; int sfreq; int total_nsmpl; short cof; short rsv1; int lp_ins_nsmpl; short nloop; short lp_type; int lp_spos; int lp_sofst; int lp_epos; int lp_eofst; int maxnch; short *pcmbuf; int pcmbsize; int pcmbdist; AdxDecPara_x0014E900 dp; AdxbGetWrFunc_x0014E900 getwrfunc; void *getwrobj; AdxbAddWrFunc_x0014E900 addwrfunc; void *addwrobj; int total_ndecsmpl; int curwpos; int ndecsmpl; int ndeclen; short fmttype; unsigned short def_fmttype; short cdctype; short f158; short k0; short km; short ka; unsigned short xp_key; unsigned short xp_km; unsigned short xp_ka; unsigned short dly1[2]; unsigned short dly2[2]; void *ahx; int ahx_dec_nsmpl; int ahx_dec_nfrm; void *ac3; int ac3_dec_nsmpl; int ac3_dec_nfrm; int ainf_len; char dataid[16]; short def_outvol; short def_pan[2]; char pad230[2]; struct Pl2Enc_x0014E900 *pl2; int pl2_x; int pl2_y; int cb_ndeclen; int f248; void (*decfunc)(void *context, int count, int bytes); void *decobj; };
extern void ADXB_EntryDecFunc_x0014E900(AdxbObj_x0014E900 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0014E900 { signed char used; signed char stat; signed char maxnch; signed char empty_end; AdxbObj_x0014E900 *adxb; SfdSj_x0014E900 *sji; SfdSj_x0014E900 *sjo[2]; SfdSjChunk_x0014E900 cki; SfdSjChunk_x0014E900 cko[2]; int total_decsmpl; int total_decdtlen; int decpos; int maxdecsmpl; int dtrpsmpl; int dtrpcnt; int dtrpdtlen; void (*dtrpfunc)(void *context); void *dtrpobj; void (*dfltfunc)(void *context, int ch, char *data, int len); void *dfltobj; char hdr[64]; int hdrlen; int lnksw; int fill; int skip; } AdxSjdObj_x0014E900;
extern void ADXSJD_EntryFltFunc_x0014E900(AdxSjdObj_x0014E900 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0014E900(AdxSjdObj_x0014E900 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0014E900)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0014E900)(CvFsErrFn_x0014E900 func, void *obj);
typedef int (*CvFsPathFn_x0014E900)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0014E900)(void);
typedef int (*CvFsOpenFn_x0014E900)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0014E900)(int fd);
typedef int (*CvFsFdIntFn_x0014E900)(int fd);
typedef int (*CvFsSeekFn_x0014E900)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0014E900)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0014E900)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0014E900)(void);
typedef int (*CvFsLoadDirInfoFn_x0014E900)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0014E900)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0014E900)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0014E900 { void (*exec_server)(void); CvFsEntryErrFuncFn_x0014E900 entry_err_func; CvFsPathFn_x0014E900 get_file_size; CvFsGetFreeSizeFn_x0014E900 get_free_size; CvFsOpenFn_x0014E900 open; CvFsFdFn_x0014E900 close; CvFsSeekFn_x0014E900 seek; CvFsFdIntFn_x0014E900 tell; CvFsXferFn_x0014E900 req_rd; CvFsXferFn_x0014E900 req_wr; CvFsFdFn_x0014E900 stop_tr; CvFsFdIntFn_x0014E900 get_stat; CvFsFdIntFn_x0014E900 get_sct_len; CvFsSetSctLenFn_x0014E900 set_sct_len; CvFsFdIntFn_x0014E900 get_num_tr; CvFsPathFn_x0014E900 change_dir; CvFsPathFn_x0014E900 is_exist_file; CvFsGetNumFilesFn_x0014E900 get_num_files; CvFsLoadDirInfoFn_x0014E900 load_dir_info; CvFsFdIntFn_x0014E900 get_max_byte_rate; CvFsPathFn_x0014E900 make_dir; CvFsPathFn_x0014E900 remove_dir; CvFsPathFn_x0014E900 delete_file; CvFsGetFileSizeExFn_x0014E900 get_file_size_ex; int (*opt_fn1)(); CvFsOptFn2_x0014E900 opt_fn2; } CvFsVtbl_x0014E900;
typedef struct CvFsHandle_x0014E900 { CvFsVtbl_x0014E900 *vtbl; int fd; } CvFsHandle_x0014E900;
extern CvFsVtbl_x0014E900 *addDevice_x0014E900(char *devname, CvFsVtbl_x0014E900 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0014E900 { signed char used; signed char stat; signed char rdflg; signed char rtrycnt; SfdSj_x0014E900 *sj; CvFsHandle_x0014E900 *fd; int fofst; int fsize; int fsctsz; int maxrdsz; int minrdsz; int rdsct; SfdSjChunk_x0014E900 rdck; int reqrdsct; int eos; int rdbyte; void (*eosfunc)(void *obj); void *eosobj; int buflen; signed char pause; signed char open_req; signed char close_req; signed char start_req; signed char stop_req; signed char opened; signed char nrmlflg; char f75[5]; const char *fname; void *dir; int curpos; int maxsct; } AdxStmObj_x0014E900;
extern void ADXSTM_EntryEosFunc_x0014E900(AdxStmObj_x0014E900 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
typedef struct AdxAmpObj_x0014E900 AdxAmpObj_x0014E900;
typedef struct AdxAmpObj_x0014E900 { signed char used; signed char stat; signed char maxnch; char rsrv; SfdSj_x0014E900 *sji[2]; SfdSj_x0014E900 *sjo[2]; int nsmpl[2]; int nch; int sfreq; float frmlen; float frmprd; int nfrm; } AdxAmpObj_x0014E900;
void func_0014E900_x0014E900(AdxAmpObj_x0014E900 *amp) __asm__("func_0014E900");
void func_0014E900_x0014E900(AdxAmpObj_x0014E900 *amp)
{
    SfdSjChunk_x0014E900 ck;
    SfdSjChunk_x0014E900 rec;
    short *sample;
    int *out;
    int ch;
    int frm;
    int navail;
    int nroom;
    int n;
    int got;
    int count;
    int peak;
    int value;
    int i;
    int k;
    frm = (int)(amp->sfreq * amp->frmlen);
    for (ch = 0; ch < amp->nch; ch++) {
        navail = amp->sji[ch]->vtbl->getNumData(amp->sji[ch], 1) / 2 / frm;
        nroom = amp->sjo[ch]->vtbl->getNumData(amp->sjo[ch], 0) / 16;
        n = navail < nroom ? navail : nroom;
        for (i = 0; i < n; i++) {
            peak = 0;
            for (got = 0; got < frm; got += count) {
                amp->sji[ch]->vtbl->getChunk(amp->sji[ch], 1, (frm - got) * 2, &ck);
                count = ck.len / 2;
                for (sample = (short *)ck.data, k = 0; k < count; k++, sample++) {
                    value = *sample;
                    if (value < 0) {
                        value = -value;
                    }
                    if (peak < value) {
                        peak = value;
                    }
                }
                amp->sji[ch]->vtbl->putChunk(amp->sji[ch], 0, &ck);
            }
            amp->sjo[ch]->vtbl->getChunk(amp->sjo[ch], 0, 16, &rec);
            if (rec.len == 0) {
                for (;;) {
                }
            }
            out = (int *)rec.data;
            out[0] = peak;
            out[1] = amp->nsmpl[ch];
            out[2] = amp->sfreq;
            out[3] = frm;
            amp->sjo[ch]->vtbl->putChunk(amp->sjo[ch], 1, &rec);
            amp->nsmpl[ch] += frm;
            amp->nfrm++;
        }
    }
}
__asm__("# noswap func_0014E900");
void func_0014EB90(u8 *arg0) {
    if (*(s8 *)((u8 *)arg0 + 1) == 2) {
        func_0014E900();
    }
}
void func_0014EBB8(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = &D_00400B60;
    var_s1 = 0xF;
    do {
        if (*var_s0 == 1) {
            func_0014EB90(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x30;
    } while (var_s1 >= 0);
}
s32 func_0014EC18(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14);
}
void func_0014EC20(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x20) = arg1;
}
s32 func_0014EC28(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x20);
}
void func_0014EC30(u8 *arg0, f32 fparg0) {
    *(f32 *)((u8 *)arg0 + 0x24) = fparg0;
}
f32 func_0014EC38(u8 *arg0) {
    return *(f32 *)((u8 *)arg0 + 0x24);
}
void func_0014EC40(u8 *arg0, f32 fparg0) {
    *(f32 *)((u8 *)arg0 + 0x28) = fparg0;
}
f32 func_0014EC48(u8 *arg0) {
    return *(f32 *)((u8 *)arg0 + 0x28);
}
extern void (*D_00400E60_x0014EC50)(int) __asm__("D_00400E60");
void func_0014EC50_x0014EC50(int *a0) __asm__("func_0014EC50");
void func_0014EC50_x0014EC50(int *a0) {
    if (a0[0x30]) {
        D_00400E60_x0014EC50(a0[0x30]);
    }
}
void func_0014EC80(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0xC4) = arg1;
    *(s32 *)((u8 *)arg0 + 0xC8) = (s32) (arg1 / 1536);
}
extern void (*D_00400E64_x0014ECA0)(int) __asm__("D_00400E64");
void func_0014ECA0_x0014ECA0(int *a0) __asm__("func_0014ECA0");
void func_0014ECA0_x0014ECA0(int *a0) {
    if (a0[0x30]) {
        D_00400E64_x0014ECA0(a0[0x30]);
    }
}
extern void (*D_003E9D20_x0014ECD0)(void) __asm__("D_00400E68");
void func_0014ECD0_x0014ECD0(int *a0) __asm__("func_0014ECD0");
/* func_0033C2C0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0031f4e0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_0014ECD0_x0014ECD0(int *a0) {
    if (a0[0x30]) {
        D_003E9D20_x0014ECD0();
    }
}
typedef struct AdxPdObj_x0014ED00 {
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
} AdxPdObj_x0014ED00;
typedef struct AdxDecPara_x0014ED00 {
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
} AdxDecPara_x0014ED00;
enum {
    ADXB_FORMAT_ADX_x0014ED00 = 0,
    ADXB_FORMAT_WAV_x0014ED00 = 1,
    ADXB_FORMAT_SPSD_x0014ED00 = 2,
    ADXB_FORMAT_AIFF_x0014ED00 = 3,
    ADXB_FORMAT_AU_x0014ED00 = 4,
    ADXB_FORMAT_AHX_x0014ED00 = 10,
    ADXB_FORMAT_AC3_x0014ED00 = 15
};
struct Pl2Enc_x0014ED00;
typedef struct AdxbObj_x0014ED00 AdxbObj_x0014ED00;
typedef short *(*AdxbGetWrFunc_x0014ED00)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0014ED00)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0014ED00 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x0014ED00 *xpd;
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
    AdxDecPara_x0014ED00 dp;
    AdxbGetWrFunc_x0014ED00 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0014ED00 addwrfunc;
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
    struct Pl2Enc_x0014ED00 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0014ED00(AdxbObj_x0014ED00 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
extern void (*adxb_ac3_termsupplyfn_x0014ED00)(void *ac3) __asm__("adxb_ac3_termsupplyfn");
extern void (*adxb_ac3_execfn_x0014ED00)(AdxbObj_x0014ED00 *adxb) __asm__("adxb_ac3_execfn");
int func_0014ED00_x0014ED00(AdxbObj_x0014ED00 *adxb, unsigned char *hdr, int size) __asm__("func_0014ED00");
/* ADXB_DecodeHeaderAc3: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxac3.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0014ED00_x0014ED00(AdxbObj_x0014ED00 *adxb, unsigned char *hdr, int size)
{
    if (adxb->ac3 == 0) {
        return 0;
    }
    adxb->hdcdflag = 1;
    adxb->sfreq = 48000;
    adxb->nch = 1;
    adxb->bps = 16;
    adxb->total_nsmpl = 0x7FFFFFFF;
    adxb->blklen = 127;
    adxb->blknsmpl = 1536;
    adxb->fmttype = ADXB_FORMAT_AC3_x0014ED00;
    adxb->dp.nch = 1;
    adxb->dp.blksize = 127;
    adxb->dp.blknsmpl = 1536;
    adxb->dp.pcmbuf = adxb->pcmbuf;
    adxb->dp.pcmbsize = adxb->pcmbsize;
    adxb->dp.pcmbdist = adxb->pcmbdist;
    adxb->curwpos = 0;
    adxb->cof = 0;
    adxb->nloop = 0;
    adxb->lp_type = 0;
    adxb->lp_ins_nsmpl = 0;
    adxb->lp_spos = 0;
    adxb->lp_sofst = 0;
    adxb->lp_epos = 0;
    adxb->lp_eofst = 0;
    adxb->total_ndecsmpl = 0;
    return 1;
}
int func_0014EDB0_x0014EDB0(unsigned char *hdr) __asm__("func_0014EDB0");
/* ADXB_CheckAc3: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxac3.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_0014EDB0_x0014EDB0(unsigned char *hdr)
{
    if (hdr[0] == 0x0b && hdr[1] == 0x77) {
        return 1;
    }
    if (hdr[0] == 0x77 && hdr[1] == 0x0b) {
        return 1;
    }
    if (hdr[16] == 0x0b && hdr[17] == 0x77) {
        return 1;
    }
    if (hdr[16] == 0x77 && hdr[17] == 0x0b) {
        return 1;
    }
    return 0;
}
