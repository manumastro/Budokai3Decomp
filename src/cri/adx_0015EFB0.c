#include "common.h"

s32 func_00159C80(s32, s32);                    /* extern */
s32 func_00159D58(s32, s32 *, void *);      /* extern */
s32 func_00159D68(s32, s32);                    /* extern */
s32 func_00159D78(s32, s32);                /* extern */
s32 func_00159D88(s32, s32);                    /* extern */
s32 func_00159E88(s32);                             /* extern */
s32 func_00159EA0(s32);                             /* extern */
s32 func_00159ED0(s32);                             /* extern */
s32 func_0015A058(s32);                         /* extern */
extern s32 adxt_trap_entry;

s32 func_00159CD0(s32);                         /* extern */

s32 func_00159CB8();                            /* extern */

s32 func_00159CA0(s32);                         /* extern */
extern s32 D_00461F68;

s32 func_00153028();                            /* extern */

s32 func_00159C78(s32);                             /* extern */
extern s32 D_00461F38;

s32 func_00159D48(s32);                         /* extern */

s32 func_00159C90(s32);                         /* extern */

s32 func_00159CE8(s32);                         /* extern */

s32 func_001540F8();                            /* extern */

s32 func_00158E30(s32);                         /* extern */

s32 func_00158AA8();                            /* extern */

s32 func_00158A90();                            /* extern */

extern s32 D_00461F08;

extern s32 D_00461EA8;

extern s32 D_00461E40;

extern s32 D_00461DE0;

extern s32 D_00461D80;

s32 func_0015F5F0();                            /* extern */

extern s32 D_00461D50;

extern s32 D_00461CB8;

extern s32 D_00461BC8;

extern s32 D_00411164;
extern s32 D_00411168;

s32 func_00159FD8(s32);                         /* extern */

extern s32 D_00461B98;

extern s32 D_00461B38;

s32 func_001589C0(s32);                         /* extern */
s16 func_00158A38(s32);                             /* extern */
extern s32 D_00461B08;

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
extern s32 D_00461AD8;

s16 ADXT_GetOutPan(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        ADXERR_CallErrFunc1(&D_00461AD8);
        return 0;
    }
    return *(s16 *)((u8 *)((arg1 * 2) + arg0) + 0x42);
}
void ADXT_SetOutBalance(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461B08);
        return;
    }
    func_001589C0(*(s32 *)((u8 *)arg0 + 0xC));
    *(s16 *)((u8 *)arg0 + 0x46) = func_00158A38(*(s32 *)((u8 *)arg0 + 0xC));
}
s16 ADXT_GetOutBalance(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461B38);
        return 0;
    }
    return *(s16 *)((u8 *)arg0 + 0x46);
}
s32 ADXERR_CallErrFunc1_x0015F078(s32 *) __asm__("ADXERR_CallErrFunc1");
s32 func_00158990_x0015F078(s32, s32) __asm__("func_00158990");
s32 func_00159F18_x0015F078(s32) __asm__("func_00159F18");
extern s32 D_00461B68_x0015F078 __asm__("D_00461B68");
void ADXT_SetOutVol_x0015F078(u8 *arg0, int arg1) __asm__("ADXT_SetOutVol");
void ADXT_SetOutVol_x0015F078(u8 *arg0, int arg1)
{
  s32 temp_s0;
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1_x0015F078(&D_00461B68_x0015F078);
    return;
  }
  *((s16 *) (((u8 *) arg0) + 0x40)) = arg1;
  temp_s0 = *((s32 *) (((u8 *) arg0) + 0xC));
  func_00158990_x0015F078(temp_s0, (*((s16 *) (((u8 *) arg0) + 0x40))) + func_00159F18_x0015F078(*((s32 *) (((u8 *) arg0) + 4))));
}
s16 ADXT_GetOutVol(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461B98);
        return 0;
    }
    return *(s16 *)((u8 *)arg0 + 0x40);
}
s32 func_00159F18_x0015F110(s32) __asm__("func_00159F18");
void func_0015F110_x0015F110(u8 *arg0) __asm__("func_0015F110");
void func_0015F110_x0015F110(u8 *arg0)
{
 do { func_00159F18_x0015F110(*((s32 *) (((u8 *) arg0) + 4))); } while (0);
}
s32 fn_80041460_x0015F130(s32) __asm__("fn_80041460");
void func_0015F130_x0015F130(u8 *arg0) __asm__("func_0015F130");
void func_0015F130_x0015F130(u8 *arg0)
{
 do { fn_80041460_x0015F130(*((s32 *) (((u8 *) arg0) + 4))); } while (0);
}
void func_0015F150(u8 *arg0) {
    func_00159FD8(*(s32 *)((u8 *)arg0 + 4));
}
int ADX_DecodeInfoAinf_x0015F168(unsigned char *hdr, int size, int *ainfsiz, char *ainf, short *volume, short *pan) __asm__("func_00152D50");
extern char adxt_hdr_dataid_x0015F168[] __asm__("D_0047E980");
char *func_0015F168_x0015F168(unsigned char *hdr) __asm__("func_0015F168");
/* ADXT_GetHdrDataId: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxt.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
char *func_0015F168_x0015F168(unsigned char *hdr)
{
    short pan[8];
    struct {
        short volume;
        int ainfsiz;
    } ainf;
    ADX_DecodeInfoAinf_x0015F168(hdr, 2048, &ainf.ainfsiz, adxt_hdr_dataid_x0015F168, &ainf.volume, pan);
    return (ainf.ainfsiz != 0) ? adxt_hdr_dataid_x0015F168 : 0;
}
void func_0015F1B0(s32 arg0) {
    D_00411164 = arg0;
    D_00411168 = arg0;
}
void ADXT_SetSvrFreq(u8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461BC8);
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x38) = arg1;
    D_00411168 = arg1;
}
typedef struct SfdSj_x0015F200 SfdSj_x0015F200;
typedef struct SfdSjChunk_x0015F200 {
    char *data;
    int len;
} SfdSjChunk_x0015F200;
typedef struct SfdSjVtbl_x0015F200 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0015F200 *sj);
    int (*getUuid)(SfdSj_x0015F200 *sj);
    void (*reset)(SfdSj_x0015F200 *sj);
    void (*getChunk)(SfdSj_x0015F200 *sj, int id, int n, SfdSjChunk_x0015F200 *ck);
    void (*ungetChunk)(SfdSj_x0015F200 *sj, int id, SfdSjChunk_x0015F200 *ck);
    void (*putChunk)(SfdSj_x0015F200 *sj, int id, SfdSjChunk_x0015F200 *ck);
    int (*getNumData)(SfdSj_x0015F200 *sj, int id);
} SfdSjVtbl_x0015F200;
struct SfdSj_x0015F200 {
    SfdSjVtbl_x0015F200 *vtbl;
};
typedef struct SjxObj_x0015F200 SjxObj_x0015F200;
typedef struct LscStm_x0015F200 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat_x0015F200;
    int rdsct;
} LscStm_x0015F200;
typedef struct LscObj_x0015F200 {
    signed char used;
    signed char stat_x0015F200;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x0015F200 *sj;
    SfdSjChunk_x0015F200 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x0015F200 stms[16];
} LscObj_x0015F200;
typedef struct AdxPdObj_x0015F200 {
    int used;
    int id;
    int mode;
    int stat_x0015F200;
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
} AdxPdObj_x0015F200;
typedef struct AdxDecPara_x0015F200 {
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
} AdxDecPara_x0015F200;
struct Pl2Enc_x0015F200;
typedef struct AdxbObj_x0015F200 AdxbObj_x0015F200;
typedef short *(*AdxbGetWrFunc_x0015F200)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0015F200)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0015F200 {
    short used;
    short hdcdflag;
    int stat_x0015F200;
    AdxPdObj_x0015F200 *xpd;
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
    AdxDecPara_x0015F200 dp;
    AdxbGetWrFunc_x0015F200 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0015F200 addwrfunc;
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
    struct Pl2Enc_x0015F200 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0015F200(AdxbObj_x0015F200 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0015F200 {
    signed char used;
    signed char stat_x0015F200;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0015F200 *adxb;
    SfdSj_x0015F200 *sji;
    SfdSj_x0015F200 *sjo[2];
    SfdSjChunk_x0015F200 cki;
    SfdSjChunk_x0015F200 cko[2];
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
} AdxSjdObj_x0015F200;
extern void ADXSJD_EntryFltFunc_x0015F200(AdxSjdObj_x0015F200 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0015F200(AdxSjdObj_x0015F200 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0015F200)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0015F200)(CvFsErrFn_x0015F200 func, void *obj);
typedef int (*CvFsPathFn_x0015F200)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0015F200)(void);
typedef int (*CvFsOpenFn_x0015F200)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0015F200)(int fd);
typedef int (*CvFsFdIntFn_x0015F200)(int fd);
typedef int (*CvFsSeekFn_x0015F200)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0015F200)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0015F200)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0015F200)(void);
typedef int (*CvFsLoadDirInfoFn_x0015F200)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0015F200)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0015F200)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0015F200 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0015F200 entry_err_func;
    CvFsPathFn_x0015F200 get_file_size;
    CvFsGetFreeSizeFn_x0015F200 get_free_size;
    CvFsOpenFn_x0015F200 open;
    CvFsFdFn_x0015F200 close_x0015F200;
    CvFsSeekFn_x0015F200 seek;
    CvFsFdIntFn_x0015F200 tell;
    CvFsXferFn_x0015F200 req_rd;
    CvFsXferFn_x0015F200 req_wr;
    CvFsFdFn_x0015F200 stop_tr;
    CvFsFdIntFn_x0015F200 get_stat;
    CvFsFdIntFn_x0015F200 get_sct_len;
    CvFsSetSctLenFn_x0015F200 set_sct_len;
    CvFsFdIntFn_x0015F200 get_num_tr;
    CvFsPathFn_x0015F200 change_dir;
    CvFsPathFn_x0015F200 is_exist_file;
    CvFsGetNumFilesFn_x0015F200 get_num_files;
    CvFsLoadDirInfoFn_x0015F200 load_dir_info;
    CvFsFdIntFn_x0015F200 get_max_byte_rate;
    CvFsPathFn_x0015F200 make_dir;
    CvFsPathFn_x0015F200 remove_dir;
    CvFsPathFn_x0015F200 delete_file;
    CvFsGetFileSizeExFn_x0015F200 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0015F200 opt_fn2;
} CvFsVtbl_x0015F200;
typedef struct CvFsHandle_x0015F200 {
    CvFsVtbl_x0015F200 *vtbl;
    int fd;
} CvFsHandle_x0015F200;
extern CvFsVtbl_x0015F200 *addDevice_x0015F200(char *devname, CvFsVtbl_x0015F200 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0015F200 {
    signed char used;
    signed char stat_x0015F200;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0015F200 *sj;
    CvFsHandle_x0015F200 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0015F200 rdck;
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
} AdxStmObj_x0015F200;
extern void ADXSTM_EntryEosFunc_x0015F200(AdxStmObj_x0015F200 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
int ADXSTM_SetBufSize_x0015F200(AdxStmObj_x0015F200 *stm, int min, int max) __asm__("func_0015D4A8");
typedef struct AdxAmpObj_x0015F200 AdxAmpObj_x0015F200;
typedef struct DtrObj_x0015F200 DtrObj_x0015F200;
typedef struct Ps2RnaPsj_x0015F200 {
    char used;
    void *sjrmt;
    SfdSj_x0015F200 *sjuni;
    SjxObj_x0015F200 *sjx;
    SfdSjChunk_x0015F200 ck;
} Ps2RnaPsj_x0015F200;
typedef struct Ps2Rna_x0015F200 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x0015F200 *psj[2];
    DtrObj_x0015F200 *dtr[2];
    SfdSj_x0015F200 *sjo[2];
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
} Ps2Rna_x0015F200;
typedef struct AdxtObj_x0015F200 {
    signed char used;
    signed char stat_x0015F200;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x0015F200 *sjd;
    AdxStmObj_x0015F200 *stm;
    Ps2Rna_x0015F200 *rna;
    SfdSj_x0015F200 *sjf;
    SfdSj_x0015F200 *sji;
    SfdSj_x0015F200 *sjo[2];
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
    AdxAmpObj_x0015F200 *amp;
    SfdSj_x0015F200 *ampsji[2];
    SfdSj_x0015F200 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x0015F200 *lsc;
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
} AdxtObj_x0015F200;
struct stat_x0015F200;
int close_x0015F200(int fd) __asm__("close");
void ADXERR_CallErrFunc1_x0015F200(const char *msg) __asm__("ADXERR_CallErrFunc1");
extern char E02080838_ADXT_SetReloadTime_parameter_error_x0015F200[] __asm__("D_00461BF8");
void ADXT_SetReloadTime_x0015F200(AdxtObj_x0015F200 *adxt, float time, int nch, int sfreq) __asm__("ADXT_SetReloadTime");
/* ADXT_SetReloadTime_x0015F200: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxt.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void ADXT_SetReloadTime_x0015F200(AdxtObj_x0015F200 *adxt, float time, int nch, int sfreq)
{
    int nsct;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x0015F200(E02080838_ADXT_SetReloadTime_parameter_error_x0015F200);
        return;
    }
    nsct = (int)(time * (float)sfreq) / 32 * nch * 18 / 2048;
    adxt->minsct = nsct < adxt->maxsct ? nsct : adxt->maxsct;
    if (adxt->stm != 0) {
        ADXSTM_SetBufSize_x0015F200(adxt->stm, adxt->minsct << 11, adxt->maxsct << 11);
    }
}
typedef struct SfdSj_x0015F2B0 SfdSj_x0015F2B0;
typedef struct SfdSjChunk_x0015F2B0 {
    char *data;
    int len;
} SfdSjChunk_x0015F2B0;
typedef struct SfdSjVtbl_x0015F2B0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0015F2B0 *sj);
    int (*getUuid)(SfdSj_x0015F2B0 *sj);
    void (*reset)(SfdSj_x0015F2B0 *sj);
    void (*getChunk)(SfdSj_x0015F2B0 *sj, int id, int n, SfdSjChunk_x0015F2B0 *ck);
    void (*ungetChunk)(SfdSj_x0015F2B0 *sj, int id, SfdSjChunk_x0015F2B0 *ck);
    void (*putChunk)(SfdSj_x0015F2B0 *sj, int id, SfdSjChunk_x0015F2B0 *ck);
    int (*getNumData)(SfdSj_x0015F2B0 *sj, int id);
} SfdSjVtbl_x0015F2B0;
struct SfdSj_x0015F2B0 {
    SfdSjVtbl_x0015F2B0 *vtbl;
};
typedef struct SjxObj_x0015F2B0 SjxObj_x0015F2B0;
typedef struct LscStm_x0015F2B0 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat_x0015F2B0;
    int rdsct;
} LscStm_x0015F2B0;
typedef struct LscObj_x0015F2B0 {
    signed char used;
    signed char stat_x0015F2B0;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x0015F2B0 *sj;
    SfdSjChunk_x0015F2B0 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x0015F2B0 stms[16];
} LscObj_x0015F2B0;
typedef struct AdxPdObj_x0015F2B0 {
    int used;
    int id;
    int mode;
    int stat_x0015F2B0;
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
} AdxPdObj_x0015F2B0;
typedef struct AdxDecPara_x0015F2B0 {
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
} AdxDecPara_x0015F2B0;
struct Pl2Enc_x0015F2B0;
typedef struct AdxbObj_x0015F2B0 AdxbObj_x0015F2B0;
typedef short *(*AdxbGetWrFunc_x0015F2B0)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0015F2B0)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0015F2B0 {
    short used;
    short hdcdflag;
    int stat_x0015F2B0;
    AdxPdObj_x0015F2B0 *xpd;
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
    AdxDecPara_x0015F2B0 dp;
    AdxbGetWrFunc_x0015F2B0 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0015F2B0 addwrfunc;
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
    struct Pl2Enc_x0015F2B0 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0015F2B0(AdxbObj_x0015F2B0 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0015F2B0 {
    signed char used;
    signed char stat_x0015F2B0;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0015F2B0 *adxb;
    SfdSj_x0015F2B0 *sji;
    SfdSj_x0015F2B0 *sjo[2];
    SfdSjChunk_x0015F2B0 cki;
    SfdSjChunk_x0015F2B0 cko[2];
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
} AdxSjdObj_x0015F2B0;
extern void ADXSJD_EntryFltFunc_x0015F2B0(AdxSjdObj_x0015F2B0 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0015F2B0(AdxSjdObj_x0015F2B0 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0015F2B0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0015F2B0)(CvFsErrFn_x0015F2B0 func, void *obj);
typedef int (*CvFsPathFn_x0015F2B0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0015F2B0)(void);
typedef int (*CvFsOpenFn_x0015F2B0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0015F2B0)(int fd);
typedef int (*CvFsFdIntFn_x0015F2B0)(int fd);
typedef int (*CvFsSeekFn_x0015F2B0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0015F2B0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0015F2B0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0015F2B0)(void);
typedef int (*CvFsLoadDirInfoFn_x0015F2B0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0015F2B0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0015F2B0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0015F2B0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0015F2B0 entry_err_func;
    CvFsPathFn_x0015F2B0 get_file_size;
    CvFsGetFreeSizeFn_x0015F2B0 get_free_size;
    CvFsOpenFn_x0015F2B0 open;
    CvFsFdFn_x0015F2B0 close_x0015F2B0;
    CvFsSeekFn_x0015F2B0 seek;
    CvFsFdIntFn_x0015F2B0 tell;
    CvFsXferFn_x0015F2B0 req_rd;
    CvFsXferFn_x0015F2B0 req_wr;
    CvFsFdFn_x0015F2B0 stop_tr;
    CvFsFdIntFn_x0015F2B0 get_stat;
    CvFsFdIntFn_x0015F2B0 get_sct_len;
    CvFsSetSctLenFn_x0015F2B0 set_sct_len;
    CvFsFdIntFn_x0015F2B0 get_num_tr;
    CvFsPathFn_x0015F2B0 change_dir;
    CvFsPathFn_x0015F2B0 is_exist_file;
    CvFsGetNumFilesFn_x0015F2B0 get_num_files;
    CvFsLoadDirInfoFn_x0015F2B0 load_dir_info;
    CvFsFdIntFn_x0015F2B0 get_max_byte_rate;
    CvFsPathFn_x0015F2B0 make_dir;
    CvFsPathFn_x0015F2B0 remove_dir;
    CvFsPathFn_x0015F2B0 delete_file;
    CvFsGetFileSizeExFn_x0015F2B0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0015F2B0 opt_fn2;
} CvFsVtbl_x0015F2B0;
typedef struct CvFsHandle_x0015F2B0 {
    CvFsVtbl_x0015F2B0 *vtbl;
    int fd;
} CvFsHandle_x0015F2B0;
extern CvFsVtbl_x0015F2B0 *addDevice_x0015F2B0(char *devname, CvFsVtbl_x0015F2B0 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0015F2B0 {
    signed char used;
    signed char stat_x0015F2B0;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0015F2B0 *sj;
    CvFsHandle_x0015F2B0 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0015F2B0 rdck;
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
} AdxStmObj_x0015F2B0;
extern void ADXSTM_EntryEosFunc_x0015F2B0(AdxStmObj_x0015F2B0 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
int ADXSTM_SetBufSize_x0015F2B0(AdxStmObj_x0015F2B0 *stm, int min, int max) __asm__("func_0015D4A8");
typedef struct AdxAmpObj_x0015F2B0 AdxAmpObj_x0015F2B0;
typedef struct DtrObj_x0015F2B0 DtrObj_x0015F2B0;
typedef struct Ps2RnaPsj_x0015F2B0 {
    char used;
    void *sjrmt;
    SfdSj_x0015F2B0 *sjuni;
    SjxObj_x0015F2B0 *sjx;
    SfdSjChunk_x0015F2B0 ck;
} Ps2RnaPsj_x0015F2B0;
typedef struct Ps2Rna_x0015F2B0 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x0015F2B0 *psj[2];
    DtrObj_x0015F2B0 *dtr[2];
    SfdSj_x0015F2B0 *sjo[2];
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
} Ps2Rna_x0015F2B0;
typedef struct AdxtObj_x0015F2B0 {
    signed char used;
    signed char stat_x0015F2B0;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x0015F2B0 *sjd;
    AdxStmObj_x0015F2B0 *stm;
    Ps2Rna_x0015F2B0 *rna;
    SfdSj_x0015F2B0 *sjf;
    SfdSj_x0015F2B0 *sji;
    SfdSj_x0015F2B0 *sjo[2];
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
    AdxAmpObj_x0015F2B0 *amp;
    SfdSj_x0015F2B0 *ampsji[2];
    SfdSj_x0015F2B0 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x0015F2B0 *lsc;
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
} AdxtObj_x0015F2B0;
struct stat_x0015F2B0;
int close_x0015F2B0(int fd) __asm__("close");
void ADXERR_CallErrFunc1_x0015F2B0(const char *msg) __asm__("ADXERR_CallErrFunc1");
extern char E03111501_ADXT_ResetReloadTime_parameter_error_x0015F2B0[] __asm__("D_00461C28");
void ADXT_ResetReloadTime_x0015F2B0(AdxtObj_x0015F2B0 *adxt) __asm__("ADXT_ResetReloadTime");
/* ADXT_ResetReloadTime_x0015F2B0: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxt.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void ADXT_ResetReloadTime_x0015F2B0(AdxtObj_x0015F2B0 *adxt)
{
    short maxsct;
    AdxStmObj_x0015F2B0 *stm;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x0015F2B0(E03111501_ADXT_ResetReloadTime_parameter_error_x0015F2B0);
        return;
    }
    maxsct = adxt->maxsct;
    stm = adxt->stm;
    adxt->minsct = maxsct * (1.0f - 0.15f);
    if (stm != 0) {
        ADXSTM_SetBufSize_x0015F2B0(stm, adxt->minsct << 11, maxsct << 11);
    }
}
s32 ADXERR_CallErrFunc1_x0015F330(s32 *) __asm__("ADXERR_CallErrFunc1");
s32 func_0015D4A8_x0015F330(s32, s32, s32) __asm__("func_0015D4A8");
extern s32 D_00461C58_x0015F330 __asm__("D_00461C58");
void ADXT_SetReloadSct_x0015F330(u8 *arg0, int arg1) __asm__("ADXT_SetReloadSct");
void ADXT_SetReloadSct_x0015F330(u8 *arg0, int arg1)
{
  s32 temp_v0;
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1_x0015F330(&D_00461C58_x0015F330);
    return;
  }
  temp_v0 = *((s32 *) (8 + ((u8 *) arg0)));
  *((s16 *) (((u8 *) arg0) + 0x3E)) = arg1;
  if (temp_v0 != 0)
  {
    func_0015D4A8_x0015F330(*((s32 *) (((u8 *) arg0) + 8)), ((s32) (arg1 << 0x10)) >> 5, (*((s16 *) (((u8 *) arg0) + 0x3C))) << 0xB);
  }
}
s16 func_0015F388(u8 *arg0) {
    return *(s16 *)((u8 *)arg0 + 0x3E);
}
s32 ADXERR_CallErrFunc1_x0015F390(s32 *) __asm__("ADXERR_CallErrFunc1");
extern s32 D_00461C88_x0015F390 __asm__("D_00461C88");
s32 ADXT_GetNumSctIbuf_x0015F390(u8 *arg0) __asm__("ADXT_GetNumSctIbuf");
s32 ADXT_GetNumSctIbuf_x0015F390(u8 *arg0)
{
  s32 new_var;
  s32 temp_v0;
  u8 **temp_v1;
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1_x0015F390(&D_00461C88_x0015F390);
    return -1;
  }
  temp_v1 = *((u8 ***) (((u8 *) arg0) + 0x14));
  if (temp_v1 != ((void *) 0))
  {
    temp_v0 = (*((s32 (**)(u8 **, s32)) (((u8 *) (*temp_v1)) + 0x24)))(temp_v1, 1);
    new_var = (s32) ((temp_v0 < 0) ? (temp_v0 + 0x7FF) : (temp_v0));
    return new_var >> 0xB;
  }
  return 0;
}
s32 ADXT_GetNumSmplObuf(s32 arg0, s32 arg1) {
    u32 temp_v0;
    u8 **temp_v0_2;

    if ((arg0 == 0) || (arg1 < 0)) {
        ADXERR_CallErrFunc1(&D_00461CB8);
        return -1;
    }
    temp_v0_2 = *(u8 ***)((u8 *)((arg1 * 4) + arg0) + 0x18);
    if (temp_v0_2 != NULL) {
        temp_v0 = (*(u32 (**)(u8 **, s32))((u8 *)(*temp_v0_2) + 0x24))(temp_v0_2, 1);
        return (s32) ((temp_v0 >> 0x1F) + temp_v0) >> 1;
    }
    return 0;
}
typedef struct SfdSj_x0015F458 SfdSj_x0015F458;
typedef struct SfdSjChunk_x0015F458 {
    char *data;
    int len;
} SfdSjChunk_x0015F458;
typedef struct SfdSjVtbl_x0015F458 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0015F458 *sj);
    int (*getUuid)(SfdSj_x0015F458 *sj);
    void (*reset)(SfdSj_x0015F458 *sj);
    void (*getChunk)(SfdSj_x0015F458 *sj, int id, int n, SfdSjChunk_x0015F458 *ck);
    void (*ungetChunk)(SfdSj_x0015F458 *sj, int id, SfdSjChunk_x0015F458 *ck);
    void (*putChunk)(SfdSj_x0015F458 *sj, int id, SfdSjChunk_x0015F458 *ck);
    int (*getNumData)(SfdSj_x0015F458 *sj, int id);
} SfdSjVtbl_x0015F458;
struct SfdSj_x0015F458 {
    SfdSjVtbl_x0015F458 *vtbl;
};
enum SjLine_x0015F458 {
    SJ_LIN_FREE_x0015F458 = 0,
    SJ_LIN_DATA_x0015F458 = 1
};
typedef struct SjxObj_x0015F458 SjxObj_x0015F458;
typedef struct LscStm_x0015F458 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat_x0015F458;
    int rdsct;
} LscStm_x0015F458;
typedef struct LscObj_x0015F458 {
    signed char used;
    signed char stat_x0015F458;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x0015F458 *sj;
    SfdSjChunk_x0015F458 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x0015F458 stms[16];
} LscObj_x0015F458;
typedef struct AdxPdObj_x0015F458 {
    int used;
    int id;
    int mode;
    int stat_x0015F458;
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
} AdxPdObj_x0015F458;
typedef struct AdxDecPara_x0015F458 {
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
} AdxDecPara_x0015F458;
struct Pl2Enc_x0015F458;
typedef struct AdxbObj_x0015F458 AdxbObj_x0015F458;
typedef short *(*AdxbGetWrFunc_x0015F458)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0015F458)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0015F458 {
    short used;
    short hdcdflag;
    int stat_x0015F458;
    AdxPdObj_x0015F458 *xpd;
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
    AdxDecPara_x0015F458 dp;
    AdxbGetWrFunc_x0015F458 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0015F458 addwrfunc;
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
    struct Pl2Enc_x0015F458 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0015F458(AdxbObj_x0015F458 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0015F458 {
    signed char used;
    signed char stat_x0015F458;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0015F458 *adxb;
    SfdSj_x0015F458 *sji;
    SfdSj_x0015F458 *sjo[2];
    SfdSjChunk_x0015F458 cki;
    SfdSjChunk_x0015F458 cko[2];
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
} AdxSjdObj_x0015F458;
extern void ADXSJD_EntryFltFunc_x0015F458(AdxSjdObj_x0015F458 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0015F458(AdxSjdObj_x0015F458 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0015F458)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0015F458)(CvFsErrFn_x0015F458 func, void *obj);
typedef int (*CvFsPathFn_x0015F458)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0015F458)(void);
typedef int (*CvFsOpenFn_x0015F458)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0015F458)(int fd);
typedef int (*CvFsFdIntFn_x0015F458)(int fd);
typedef int (*CvFsSeekFn_x0015F458)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0015F458)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0015F458)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0015F458)(void);
typedef int (*CvFsLoadDirInfoFn_x0015F458)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0015F458)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0015F458)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0015F458 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0015F458 entry_err_func;
    CvFsPathFn_x0015F458 get_file_size;
    CvFsGetFreeSizeFn_x0015F458 get_free_size;
    CvFsOpenFn_x0015F458 open;
    CvFsFdFn_x0015F458 close_x0015F458;
    CvFsSeekFn_x0015F458 seek;
    CvFsFdIntFn_x0015F458 tell;
    CvFsXferFn_x0015F458 req_rd;
    CvFsXferFn_x0015F458 req_wr;
    CvFsFdFn_x0015F458 stop_tr;
    CvFsFdIntFn_x0015F458 get_stat;
    CvFsFdIntFn_x0015F458 get_sct_len;
    CvFsSetSctLenFn_x0015F458 set_sct_len;
    CvFsFdIntFn_x0015F458 get_num_tr;
    CvFsPathFn_x0015F458 change_dir;
    CvFsPathFn_x0015F458 is_exist_file;
    CvFsGetNumFilesFn_x0015F458 get_num_files;
    CvFsLoadDirInfoFn_x0015F458 load_dir_info;
    CvFsFdIntFn_x0015F458 get_max_byte_rate;
    CvFsPathFn_x0015F458 make_dir;
    CvFsPathFn_x0015F458 remove_dir;
    CvFsPathFn_x0015F458 delete_file;
    CvFsGetFileSizeExFn_x0015F458 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0015F458 opt_fn2;
} CvFsVtbl_x0015F458;
typedef struct CvFsHandle_x0015F458 {
    CvFsVtbl_x0015F458 *vtbl;
    int fd;
} CvFsHandle_x0015F458;
extern CvFsVtbl_x0015F458 *addDevice_x0015F458(char *devname, CvFsVtbl_x0015F458 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0015F458 {
    signed char used;
    signed char stat_x0015F458;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0015F458 *sj;
    CvFsHandle_x0015F458 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0015F458 rdck;
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
} AdxStmObj_x0015F458;
extern void ADXSTM_EntryEosFunc_x0015F458(AdxStmObj_x0015F458 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
typedef struct AdxAmpObj_x0015F458 AdxAmpObj_x0015F458;
typedef struct DtrObj_x0015F458 DtrObj_x0015F458;
typedef struct Ps2RnaPsj_x0015F458 {
    char used;
    void *sjrmt;
    SfdSj_x0015F458 *sjuni;
    SjxObj_x0015F458 *sjx;
    SfdSjChunk_x0015F458 ck;
} Ps2RnaPsj_x0015F458;
typedef struct Ps2Rna_x0015F458 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x0015F458 *psj[2];
    DtrObj_x0015F458 *dtr[2];
    SfdSj_x0015F458 *sjo[2];
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
} Ps2Rna_x0015F458;
enum AdxtStat_x0015F458 {
    ADXT_STAT_STOP_x0015F458 = 0,
    ADXT_STAT_DECINFO_x0015F458 = 1,
    ADXT_STAT_PREP_x0015F458 = 2,
    ADXT_STAT_PLAYING_x0015F458 = 3,
    ADXT_STAT_DECEND_x0015F458 = 4,
    ADXT_STAT_PLAYEND_x0015F458 = 5,
    ADXT_STAT_ERROR_x0015F458 = 6
};
typedef struct AdxtObj_x0015F458 {
    signed char used;
    signed char stat_x0015F458;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x0015F458 *sjd;
    AdxStmObj_x0015F458 *stm;
    Ps2Rna_x0015F458 *rna;
    SfdSj_x0015F458 *sjf;
    SfdSj_x0015F458 *sji;
    SfdSj_x0015F458 *sjo[2];
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
    AdxAmpObj_x0015F458 *amp;
    SfdSj_x0015F458 *ampsji[2];
    SfdSj_x0015F458 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x0015F458 *lsc;
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
} AdxtObj_x0015F458;
int ADXT_GetStat_x0015F458(AdxtObj_x0015F458 *adxt) __asm__("ADXT_GetStat");
int ADXT_GetSfreq_x0015F458(AdxtObj_x0015F458 *adxt) __asm__("ADXT_GetSfreq");
int ADXT_GetNumChan_x0015F458(AdxtObj_x0015F458 *adxt) __asm__("ADXT_GetNumChan");
struct stat_x0015F458;
int close_x0015F458(int fd) __asm__("close");
void ADXERR_CallErrFunc1_x0015F458(const char *msg) __asm__("ADXERR_CallErrFunc1");
extern char E02080835_ADXT_GetIbufRemainTime_parameter_error_x0015F458[] __asm__("D_00461CE8");
int ADXT_GetStat_x0015F458(AdxtObj_x0015F458 *adxt) __asm__("ADXT_GetStat");
int ADXT_GetSfreq_x0015F458(AdxtObj_x0015F458 *adxt) __asm__("ADXT_GetSfreq");
int ADXT_GetNumChan_x0015F458(AdxtObj_x0015F458 *adxt) __asm__("ADXT_GetNumChan");
float ADXT_GetIbufRemainTime_x0015F458(AdxtObj_x0015F458 *adxt) __asm__("ADXT_GetIbufRemainTime");
/* ADXT_GetIbufRemainTime_x0015F458: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxt.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
float ADXT_GetIbufRemainTime_x0015F458(AdxtObj_x0015F458 *adxt)
{
    float time;
    int nbyte;
    int nch;
    time = 0.0f;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x0015F458(E02080835_ADXT_GetIbufRemainTime_parameter_error_x0015F458);
        return -1.0f;
    }
    if (ADXT_GetStat_x0015F458(adxt) >= ADXT_STAT_PREP_x0015F458 && adxt->sji != 0) {
        nbyte = adxt->sji->vtbl->getNumData(adxt->sji, SJ_LIN_DATA_x0015F458);
        nch = ADXT_GetNumChan_x0015F458(adxt);
        time = (float)(nbyte / (nch * 18) * 32) / (float)ADXT_GetSfreq_x0015F458(adxt);
    }
    return time;
}
s32 ADXERR_CallErrFunc1_x0015F540(s32 *) __asm__("ADXERR_CallErrFunc1");
extern s32 D_00461D20_x0015F540 __asm__("D_00461D20");
s32 ADXT_IsIbufSafety_x0015F540(u8 *arg0) __asm__("ADXT_IsIbufSafety");
s32 ADXT_IsIbufSafety_x0015F540(u8 *arg0)
{
  u8 **temp_v1;
  int new_var;
  new_var = 0;
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1_x0015F540(&D_00461D20_x0015F540);
    return -1;
  }
  temp_v1 = *((u8 ***) (((u8 *) arg0) + 0x14));
  if (temp_v1 != ((void *) 0))
  {
    return ((float) ((*((s32 (**)(u8 **, s32)) (((u8 *) (*temp_v1)) + 0x24)))(temp_v1, (float) 1) < ((*((s16 *) (((u8 *) arg0) + 0x3E))) << 0xB))) == new_var;
  }
  return 0;
}
void func_0015F5B0(u8 *arg0, s8 arg1) {
    *(s8 *)((u8 *)arg0 + 0x6D) = arg1;
}
s32 ADXT_IsCompleted(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461D50);
        return -1;
    }
    return *(s8 *)((u8 *)arg0 + 1) == 5;
}
typedef struct SfdSj_x0015F5F0 SfdSj_x0015F5F0;
typedef struct SfdSjChunk_x0015F5F0 {
    char *data;
    int len;
} SfdSjChunk_x0015F5F0;
typedef struct SfdSjVtbl_x0015F5F0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0015F5F0 *sj);
    int (*getUuid)(SfdSj_x0015F5F0 *sj);
    void (*reset)(SfdSj_x0015F5F0 *sj);
    void (*getChunk)(SfdSj_x0015F5F0 *sj, int id, int n, SfdSjChunk_x0015F5F0 *ck);
    void (*ungetChunk)(SfdSj_x0015F5F0 *sj, int id, SfdSjChunk_x0015F5F0 *ck);
    void (*putChunk)(SfdSj_x0015F5F0 *sj, int id, SfdSjChunk_x0015F5F0 *ck);
    int (*getNumData)(SfdSj_x0015F5F0 *sj, int id);
} SfdSjVtbl_x0015F5F0;
struct SfdSj_x0015F5F0 {
    SfdSjVtbl_x0015F5F0 *vtbl;
};
typedef struct SjxObj_x0015F5F0 SjxObj_x0015F5F0;
typedef struct LscStm_x0015F5F0 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat_x0015F5F0;
    int rdsct;
} LscStm_x0015F5F0;
typedef struct LscObj_x0015F5F0 {
    signed char used;
    signed char stat_x0015F5F0;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x0015F5F0 *sj;
    SfdSjChunk_x0015F5F0 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x0015F5F0 stms[16];
} LscObj_x0015F5F0;
typedef struct AdxPdObj_x0015F5F0 {
    int used;
    int id;
    int mode;
    int stat_x0015F5F0;
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
} AdxPdObj_x0015F5F0;
typedef struct AdxDecPara_x0015F5F0 {
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
} AdxDecPara_x0015F5F0;
struct Pl2Enc_x0015F5F0;
typedef struct AdxbObj_x0015F5F0 AdxbObj_x0015F5F0;
typedef short *(*AdxbGetWrFunc_x0015F5F0)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0015F5F0)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0015F5F0 {
    short used;
    short hdcdflag;
    int stat_x0015F5F0;
    AdxPdObj_x0015F5F0 *xpd;
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
    AdxDecPara_x0015F5F0 dp;
    AdxbGetWrFunc_x0015F5F0 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0015F5F0 addwrfunc;
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
    struct Pl2Enc_x0015F5F0 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x0015F5F0(AdxbObj_x0015F5F0 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0015F5F0 {
    signed char used;
    signed char stat_x0015F5F0;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0015F5F0 *adxb;
    SfdSj_x0015F5F0 *sji;
    SfdSj_x0015F5F0 *sjo[2];
    SfdSjChunk_x0015F5F0 cki;
    SfdSjChunk_x0015F5F0 cko[2];
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
} AdxSjdObj_x0015F5F0;
void ADXSJD_ExecServer_x0015F5F0(void) __asm__("func_00159C10");
extern void ADXSJD_EntryFltFunc_x0015F5F0(AdxSjdObj_x0015F5F0 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0015F5F0(AdxSjdObj_x0015F5F0 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0015F5F0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0015F5F0)(CvFsErrFn_x0015F5F0 func, void *obj);
typedef int (*CvFsPathFn_x0015F5F0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0015F5F0)(void);
typedef int (*CvFsOpenFn_x0015F5F0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0015F5F0)(int fd);
typedef int (*CvFsFdIntFn_x0015F5F0)(int fd);
typedef int (*CvFsSeekFn_x0015F5F0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0015F5F0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0015F5F0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0015F5F0)(void);
typedef int (*CvFsLoadDirInfoFn_x0015F5F0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0015F5F0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0015F5F0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0015F5F0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0015F5F0 entry_err_func;
    CvFsPathFn_x0015F5F0 get_file_size;
    CvFsGetFreeSizeFn_x0015F5F0 get_free_size;
    CvFsOpenFn_x0015F5F0 open;
    CvFsFdFn_x0015F5F0 close_x0015F5F0;
    CvFsSeekFn_x0015F5F0 seek;
    CvFsFdIntFn_x0015F5F0 tell;
    CvFsXferFn_x0015F5F0 req_rd;
    CvFsXferFn_x0015F5F0 req_wr;
    CvFsFdFn_x0015F5F0 stop_tr;
    CvFsFdIntFn_x0015F5F0 get_stat;
    CvFsFdIntFn_x0015F5F0 get_sct_len;
    CvFsSetSctLenFn_x0015F5F0 set_sct_len;
    CvFsFdIntFn_x0015F5F0 get_num_tr;
    CvFsPathFn_x0015F5F0 change_dir;
    CvFsPathFn_x0015F5F0 is_exist_file;
    CvFsGetNumFilesFn_x0015F5F0 get_num_files;
    CvFsLoadDirInfoFn_x0015F5F0 load_dir_info;
    CvFsFdIntFn_x0015F5F0 get_max_byte_rate;
    CvFsPathFn_x0015F5F0 make_dir;
    CvFsPathFn_x0015F5F0 remove_dir;
    CvFsPathFn_x0015F5F0 delete_file;
    CvFsGetFileSizeExFn_x0015F5F0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0015F5F0 opt_fn2;
} CvFsVtbl_x0015F5F0;
typedef struct CvFsHandle_x0015F5F0 {
    CvFsVtbl_x0015F5F0 *vtbl;
    int fd;
} CvFsHandle_x0015F5F0;
extern CvFsVtbl_x0015F5F0 *addDevice_x0015F5F0(char *devname, CvFsVtbl_x0015F5F0 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0015F5F0 {
    signed char used;
    signed char stat_x0015F5F0;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0015F5F0 *sj;
    CvFsHandle_x0015F5F0 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0015F5F0 rdck;
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
} AdxStmObj_x0015F5F0;
extern void ADXSTM_EntryEosFunc_x0015F5F0(AdxStmObj_x0015F5F0 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
typedef struct AdxAmpObj_x0015F5F0 AdxAmpObj_x0015F5F0;
typedef struct DtrObj_x0015F5F0 DtrObj_x0015F5F0;
typedef struct Ps2RnaPsj_x0015F5F0 {
    char used;
    void *sjrmt;
    SfdSj_x0015F5F0 *sjuni;
    SjxObj_x0015F5F0 *sjx;
    SfdSjChunk_x0015F5F0 ck;
} Ps2RnaPsj_x0015F5F0;
typedef struct Ps2Rna_x0015F5F0 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x0015F5F0 *psj[2];
    DtrObj_x0015F5F0 *dtr[2];
    SfdSj_x0015F5F0 *sjo[2];
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
} Ps2Rna_x0015F5F0;
typedef struct AdxtObj_x0015F5F0 {
    signed char used;
    signed char stat_x0015F5F0;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x0015F5F0 *sjd;
    AdxStmObj_x0015F5F0 *stm;
    Ps2Rna_x0015F5F0 *rna;
    SfdSj_x0015F5F0 *sjf;
    SfdSj_x0015F5F0 *sji;
    SfdSj_x0015F5F0 *sjo[2];
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
    AdxAmpObj_x0015F5F0 *amp;
    SfdSj_x0015F5F0 *ampsji[2];
    SfdSj_x0015F5F0 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x0015F5F0 *lsc;
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
} AdxtObj_x0015F5F0;
extern AdxtObj_x0015F5F0 adxt_obj_x0015F5F0[16] __asm__("D_00404C18");
void ADXT_ExecHndl_x0015F5F0(AdxtObj_x0015F5F0 *adxt) __asm__("ADXT_ExecHndl");
struct stat_x0015F5F0;
int close_x0015F5F0(int fd) __asm__("close");
void ADXRNA_ExecServer_x0015F5F0(void) __asm__("func_00158930");
void ADXCRS_Lock_x0015F5F0(void) __asm__("func_00152508");
void ADXCRS_Unlock_x0015F5F0(void) __asm__("func_00152520");
extern volatile int adxt_svr_phase_x0015F5F0 __asm__("D_00411160");
extern int adxt_svrfreq_x0015F5F0 __asm__("D_00411168");
void func_0015F5F0_x0015F5F0(void) __asm__("func_0015F5F0");
/* ADXT_ExecServer: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxt.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0015F5F0_x0015F5F0(void)
{
    int i;
    ADXCRS_Lock_x0015F5F0();
    if (adxt_svr_phase_x0015F5F0 != 0) {
        ADXCRS_Unlock_x0015F5F0();
        return;
    }
    adxt_svr_phase_x0015F5F0 = 1;
    ADXCRS_Unlock_x0015F5F0();
    ADXCRS_Lock_x0015F5F0();
    ADXSJD_ExecServer_x0015F5F0();
    adxt_svr_phase_x0015F5F0 = 2;
    for (i = 0; i < 16; i++) {
        if (adxt_obj_x0015F5F0[i].used == 1) {
            ADXT_ExecHndl_x0015F5F0(&adxt_obj_x0015F5F0[i]);
        }
    }
    adxt_svr_phase_x0015F5F0 = 3;
    ADXRNA_ExecServer_x0015F5F0();
    if (adxt_svrfreq_x0015F5F0 < 51) {
        ADXRNA_ExecServer_x0015F5F0();
    }
    adxt_svr_phase_x0015F5F0 = 0;
    ADXCRS_Unlock_x0015F5F0();
}
void func_0015F6E0(void) {
    func_0015F5F0();
}
s16 ADXT_GetErrCode(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461D80);
        return -1;
    }
    return *(s16 *)((u8 *)arg0 + 0x60);
}
s32 ADXERR_CallErrFunc1_x0015F728(s32 *) __asm__("ADXERR_CallErrFunc1");
extern s32 D_00461DB0_x0015F728 __asm__("D_00461DB0");
void ADXT_ClearErrCode_x0015F728(u8 *arg0) __asm__("ADXT_ClearErrCode");
void ADXT_ClearErrCode_x0015F728(u8 *arg0)
{
  u8 *new_var2;
  s32 *new_var;
  new_var2 = arg0;
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1_x0015F728(&D_00461DB0_x0015F728);
    return;
  }
  *((s16 *) (((u8 *) arg0) + 0x60)) = 0;
  *(new_var = (s32 *) (((u8 *) new_var2) + 0x64)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x68)) = 0;
  *((s16 *) (((u8 *) arg0) + 0x6A)) = 0;
}
s32 ADXT_GetLpCnt(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461DE0);
        return -1;
    }
    return *(s32 *)((u8 *)arg0 + 0x4C);
}
s32 ADXERR_CallErrFunc1_x0015F798(s32 *) __asm__("ADXERR_CallErrFunc1");
extern s32 D_00461E10_x0015F798 __asm__("D_00461E10");
void ADXT_SetLpFlg_x0015F798(u8 *arg0, unsigned int arg1) __asm__("ADXT_SetLpFlg");
void ADXT_SetLpFlg_x0015F798(u8 *arg0, unsigned int arg1)
{
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1_x0015F798(&D_00461E10_x0015F798);
    return;
  }
  *((s8 *) (((u8 *) arg0) + 0x6C)) = arg1;
}
s32 ADXT_GetInputSj(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461E40);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x14);
}
s32 ADXERR_CallErrFunc1_x0015F7F8(s32 *) __asm__("ADXERR_CallErrFunc1");
extern s32 D_00461E70_x0015F7F8 __asm__("D_00461E70");
void ADXT_SetWaitPlayStart_x0015F7F8(u8 *arg0, unsigned int arg1) __asm__("ADXT_SetWaitPlayStart");
void ADXT_SetWaitPlayStart_x0015F7F8(u8 *arg0, unsigned int arg1)
{
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1_x0015F7F8(&D_00461E70_x0015F7F8);
    return;
  }
  *((s8 *) (((u8 *) arg0) + 0x70)) = arg1;
}
s8 ADXT_IsReadyPlayStart(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461EA8);
        return -1;
    }
    return *(s8 *)((u8 *)arg0 + 0x71);
}
typedef int s32_x0015F858;
typedef s32_x0015F858 ptrdiff_t_x0015F858;
typedef unsigned char Uint8_x0015F858;
typedef char Sint8_x0015F858;
typedef unsigned short Uint16_x0015F858;
typedef signed short Sint16_x0015F858;
typedef unsigned int Uint32_x0015F858;
typedef signed int Sint32_x0015F858;
typedef float Float32_x0015F858;
typedef Sint32_x0015F858 Bool_x0015F858;
typedef char Char8_x0015F858;
typedef struct _UUID_x0015F858 {
    Uint32_x0015F858 Data1;
    Uint16_x0015F858 Data2;
    Uint16_x0015F858 Data3;
    Uint8_x0015F858 Data4[8];
} UUID_x0015F858;
typedef struct {
        Sint8_x0015F858 *data;
        Sint32_x0015F858 len;
} SJCK_x0015F858;
typedef struct {
        struct _sj_vtbl_x0015F858 *vtbl;
} SJ_OBJ_x0015F858;
typedef SJ_OBJ_x0015F858 *SJ_x0015F858;
typedef struct _sj_vtbl_x0015F858 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015F858 sj);
        UUID_x0015F858 *(*GetUuid)(SJ_x0015F858 sj);
        void (*Reset)(SJ_x0015F858 sj);
        void (*GetChunk)(SJ_x0015F858 sj, Sint32_x0015F858 id, Sint32_x0015F858 nbyte, SJCK_x0015F858 *ck);
        void (*UngetChunk)(SJ_x0015F858 sj, Sint32_x0015F858 id, SJCK_x0015F858 *ck);
        void (*PutChunk)(SJ_x0015F858 sj, Sint32_x0015F858 id, SJCK_x0015F858 *ck);
        Sint32_x0015F858 (*GetNumData)(SJ_x0015F858 sj, Sint32_x0015F858 id);
        Sint32_x0015F858 (*IsGetChunk)(SJ_x0015F858 sj, Sint32_x0015F858 id, Sint32_x0015F858 nbyte, Sint32_x0015F858 *rbyte);
        void (*EntryErrFunc)(SJ_x0015F858 sj,
                                        void (*func)(void *obj, Sint32_x0015F858 ecode), void *obj);
} SJ_IF_x0015F858;
extern int* sceCdCallback_x0015F858(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x0015F858(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x0015F858;
typedef struct {
               Sint16_x0015F858 unk0;
               Sint16_x0015F858 unk2;
               Sint16_x0015F858 unk4;
               Sint16_x0015F858 unk6;
} ADXPD_OBJ_SUB_x0015F858;
typedef struct {
               Sint32_x0015F858 used;
               Sint32_x0015F858 unk4;
               Sint32_x0015F858 mode;
               Sint32_x0015F858 stat;
               Sint32_x0015F858 num_blk;
               Sint32_x0015F858 unk14;
               Sint32_x0015F858 unk18;
               Sint32_x0015F858 unk1C;
               Sint32_x0015F858 unk20;
               Sint32_x0015F858 unk24;
               ADXPD_OBJ_SUB_x0015F858 unk28;
               Sint16_x0015F858 unk30;
               Sint16_x0015F858 unk32;
               Sint16_x0015F858 unk34;
               Sint16_x0015F858 unk36;
               Sint16_x0015F858 unk38;
               Sint16_x0015F858 unk3A;
} ADXPD_OBJ_x0015F858;
typedef ADXPD_OBJ_x0015F858* ADXPD_x0015F858;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x0015F858;
typedef struct {
               Sint32_x0015F858 unk0;
               Sint32_x0015F858 unk4;
               Sint32_x0015F858 unk8;
               Sint32_x0015F858 unkC;
               Sint32_x0015F858 unk10;
               void* unk14;
               Sint32_x0015F858 unk18;
               Sint32_x0015F858 unk1C;
               Sint32_x0015F858 unk20;
               Sint32_x0015F858 unk24;
               Sint32_x0015F858 unk28;
} ADXB_UNK_x0015F858;
typedef struct {
               Sint16_x0015F858 unk0;
               Sint16_x0015F858 unk2;
               Sint32_x0015F858 stat;
               ADXPD_x0015F858 adxpd;
               Sint8_x0015F858 encoding_type;
               Sint8_x0015F858 sample_bitdepth;
               Sint8_x0015F858 channel_count;
               Sint8_x0015F858 block_size;
               Sint32_x0015F858 samples_per_block;
               Sint32_x0015F858 sample_rate;
               Sint32_x0015F858 total_samples;
               Sint16_x0015F858 unk1C;
               char pad1E[2];
               Sint32_x0015F858 unk20;
               Sint16_x0015F858 unk24;
               Sint16_x0015F858 unk26;
               Sint32_x0015F858 unk28;
               Sint32_x0015F858 unk2C;
               Sint32_x0015F858 unk30;
               Sint32_x0015F858 unk34;
               Sint32_x0015F858 unk38;
               void* unk3C;
               Sint32_x0015F858 unk40;
               Sint32_x0015F858 unk44;
               ADXB_UNK_x0015F858 unk48;
               Sint32_x0015F858 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x0015F858*, Sint32_x0015F858*, Sint32_x0015F858*);
               void* object;
               void (*add_wr)(void*, Sint32_x0015F858, Sint32_x0015F858);
               Sint32_x0015F858 unk84;
               Sint32_x0015F858 unk88;
               Sint32_x0015F858 unk8C;
               Sint32_x0015F858 dec_num_sample;
               Sint32_x0015F858 dec_data_len;
               Sint16_x0015F858 format;
               Sint16_x0015F858 unk9A;
               Sint16_x0015F858 unk9C;
               Sint16_x0015F858 unk9E;
               Sint16_x0015F858 unkA0;
               char padA2[0xE];
               Sint32_x0015F858 unkB0;
               Sint32_x0015F858 ahx_dec_samples;
               Sint32_x0015F858 ahx_dec_frames;
               Sint32_x0015F858 unkBC;
               Sint32_x0015F858 ac3_dec_samples;
               Sint32_x0015F858 ac3_dec_frames;
               Sint32_x0015F858 unkC8;
               ADX_UNK_x0015F858 unkCC;
               Sint16_x0015F858 unkDC;
               Sint16_x0015F858 unkDE[2];
               char padE2[2];
               Sint32_x0015F858 unkE4;
               char padE8[8];
} ADXB_OBJ_x0015F858;
typedef ADXB_OBJ_x0015F858* ADXB_x0015F858;
typedef struct {
    Sint8_x0015F858 used;
    Sint8_x0015F858 state;
    Sint8_x0015F858 maxnch;
    Sint8_x0015F858 unk3;
    ADXB_x0015F858 adxb;
    SJ_x0015F858 sji;
    SJ_x0015F858 sjo[2];
    SJCK_x0015F858 unk14;
    SJCK_x0015F858 chunks[2];
    Sint32_x0015F858 unk2C;
    Sint32_x0015F858 unk30;
    Sint32_x0015F858 unk34;
    Sint32_x0015F858 unk38;
    Sint32_x0015F858 trap_num_samples;
    Sint32_x0015F858 trap_count;
    Sint32_x0015F858 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x0015F858, Sint8_x0015F858*, Sint32_x0015F858);
    void* flt_obj;
    Sint8_x0015F858 unk58[0x40];
    Sint32_x0015F858 unk98;
    Sint32_x0015F858 lnkflg;
} ADXSJD_OBJ_x0015F858;
typedef ADXSJD_OBJ_x0015F858* ADXSJD_x0015F858;
typedef struct {
    Sint32_x0015F858 unk0;
    SJ_x0015F858 sj;
} SJX_UNK_0_x0015F858;
typedef struct {
    Sint8_x0015F858 used;
    Sint8_x0015F858 unk1;
    Sint16_x0015F858 unk2;
    SJ_x0015F858 sj;
    void* unk8;
    Sint32_x0015F858 unkC;
    SJX_UNK_0_x0015F858* unk10;
} SJX_OBJ_x0015F858;
typedef SJX_OBJ_x0015F858* SJX_x0015F858;
typedef struct {
    Sint8_x0015F858 used;
    char pad1[3];
    void* unk4;
    SJ_x0015F858 unk8;
    SJX_x0015F858 unkC;
    SJCK_x0015F858 chunk;
} PS2PSJ_OBJ_x0015F858;
typedef PS2PSJ_OBJ_x0015F858* PS2PSJ_x0015F858;
typedef struct {
               Sint8_x0015F858 unk0;
               Sint8_x0015F858 unk1;
               Sint8_x0015F858 unk2;
               SJ_x0015F858 unk4;
               SJ_x0015F858 unk8;
               SJCK_x0015F858 unkC;
               SJCK_x0015F858 unk14;
               sceSifDmaData_x0015F858 dma_data;
               Sint32_x0015F858 unk2C;
               Sint32_x0015F858 unk30;
               Sint32_x0015F858 unk34;
               Sint32_x0015F858 unk38;
               Sint32_x0015F858 unk3C;
} DTR_OBJ_x0015F858;
typedef DTR_OBJ_x0015F858* DTR_x0015F858;
typedef struct {
    Sint8_x0015F858 used;
    Sint32_x0015F858 maxnch;
    PS2PSJ_x0015F858 psj[2];
    DTR_x0015F858 dtr[2];
    SJ_x0015F858 sjo[2];
    void* unk20;
    Sint32_x0015F858 unk24;
    Sint32_x0015F858 unk28;
    Sint32_x0015F858 unk2C;
    Sint8_x0015F858 unk30;
    Sint8_x0015F858 unk31;
    Sint8_x0015F858 num_chan;
    Sint8_x0015F858 unk33;
    Sint32_x0015F858 sfreq;
    Sint32_x0015F858 unk38;
    Sint32_x0015F858 out_vol;
    Sint32_x0015F858 unk40;
    Sint32_x0015F858 pan[2];
    Sint32_x0015F858 unk4C[2];
    Sint32_x0015F858 unk54;
    Sint32_x0015F858 unk58;
    Sint8_x0015F858 unk5C;
    Sint8_x0015F858 unk5D;
    Sint8_x0015F858 unk5E;
    Sint8_x0015F858 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x0015F858;
typedef ADXRNA_OBJ_x0015F858* ADXRNA_x0015F858;
typedef struct {
    Sint8_x0015F858 unk0;
    Sint8_x0015F858 stat;
    Sint8_x0015F858 read_flg;
    Sint8_x0015F858 unk3;
    SJ_x0015F858 sj;
    void* cvfs;
    Sint32_x0015F858 unkC;
    Sint32_x0015F858 file_len;
    Sint32_x0015F858 file_sct;
    Sint32_x0015F858 unk18;
    Sint32_x0015F858 unk1C;
    Sint32_x0015F858 unk20;
    SJCK_x0015F858 unk24;
    Sint32_x0015F858 req_rd_size;
    Sint32_x0015F858 eos;
    Uint32_x0015F858 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x0015F858 unk40;
    Sint8_x0015F858 pause;
    Sint8_x0015F858 unk45;
    Sint8_x0015F858 unk46;
    Sint8_x0015F858 unk47;
    Sint8_x0015F858 unk48;
    Sint8_x0015F858 unk49;
    char pad4A[6];
    const Char8_x0015F858* fname;
    void* dir;
    Sint32_x0015F858 cur_ofst;
    Uint32_x0015F858 unk5C;
} ADXSTM_OBJ_x0015F858;
typedef ADXSTM_OBJ_x0015F858* ADXSTM_x0015F858;
void ADXCRS_Lock_x0015F858() __asm__("func_00152508");
void ADXCRS_Unlock_x0015F858() __asm__("func_00152520");
void ADXERR_CallErrFunc1_x0015F858(Sint8_x0015F858*) __asm__("ADXERR_CallErrFunc1");
typedef struct _adx_talk_x0015F858 {
                   Sint8_x0015F858 used;
                   Sint8_x0015F858 stat;
                   Sint8_x0015F858 pmode;
                   Sint8_x0015F858 maxnch;
                   ADXSJD_x0015F858 sjd;
                   ADXSTM_x0015F858 stm;
                   ADXRNA_x0015F858 rna;
                   SJ_x0015F858 sjf;
                   SJ_x0015F858 sji;
                   SJ_x0015F858 sjo[(2)];
                   Sint8_x0015F858 *ibuf;
                   Sint32_x0015F858 ibuflen;
                   Sint32_x0015F858 ibufxlen;
                   Sint16_x0015F858 *obuf;
                   Sint32_x0015F858 obufsize;
                   Sint32_x0015F858 obufdist;
                   Sint32_x0015F858 svrfreq;
                   Sint16_x0015F858 maxsct;
                   Sint16_x0015F858 minsct;
                   Sint16_x0015F858 outvol;
                   Sint16_x0015F858 outpan[(2)];
                   Sint16_x0015F858 unk46;
                   Sint32_x0015F858 maxdecsmpl;
                   Sint32_x0015F858 lpcnt;
                   Sint32_x0015F858 lp_skiplen;
                   Sint32_x0015F858 trp;
                   Sint32_x0015F858 wpos;
                   Sint32_x0015F858 mofst;
                   Sint16_x0015F858 ercode;
                   Sint32_x0015F858 edecpos;
                   Sint16_x0015F858 edeccnt;
                   Sint16_x0015F858 eshrtcnt;
                   Sint8_x0015F858 lpflg;
                   Sint8_x0015F858 autorcvr;
                   Sint8_x0015F858 fltmode;
                   Sint8_x0015F858 execflag;
                   Sint8_x0015F858 pstwait_flag;
                   Sint8_x0015F858 pstready_flag;
                   Sint8_x0015F858 pause_flag;
                   void *amp;
                   SJ_x0015F858 ampsji[(2)];
                   SJ_x0015F858 ampsjo[(2)];
                   Sint32_x0015F858 time_ofst;
                   Sint32_x0015F858 lesct;
                   Sint32_x0015F858 trpnsmpl;
                   void *lsc;
                   Sint8_x0015F858 lnkflg;
                   Sint8_x0015F858 rsv;
                   Sint16_x0015F858 rsv2;
                   Uint32_x0015F858 tvofst;
                   Uint32_x0015F858 svcnt;
                   Uint32_x0015F858 decofst;
                   Sint32_x0015F858 flush_nsmpl;
                   Sint8_x0015F858 unkAC;
                   Sint8_x0015F858 padAD[1];
               Char8_x0015F858* unkB0;
               Sint32_x0015F858 padB4;
               Sint32_x0015F858 padB8;
               Sint32_x0015F858 padBC;
               Sint32_x0015F858 padC0;
} ADX_TALK_x0015F858;
typedef ADX_TALK_x0015F858 *ADXT_x0015F858;
void ADXT_GetTime_x0015F858(ADXT_x0015F858 adxt, Sint32_x0015F858 *ncount, Sint32_x0015F858 *tscale) __asm__("ADXT_GetTime");
extern void ADXT_EntryErrFunc_x0015F858(void (*func)(void *obj, Sint8_x0015F858 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015F858(ADXT_x0015F858 adxt,
                void (*f)(void *obj, Sint32_x0015F858 ch, void *data, Sint32_x0015F858 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x0015F858(Bool_x0015F858 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015F858(Bool_x0015F858 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015F858(void (*fn)(void *obj, Char8_x0015F858 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015F858(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern Sint32_x0015F858 adxt_vsync_cnt_x0015F858 __asm__("D_00404C14");
extern void ADXRNA_EntryErrFunc_x0015F858(void (*)(void*, Char8_x0015F858*), void*) __asm__("ADXRNA_EntryErrFunc");
void ADXRNA_SetPlaySw_x0015F858(ADXRNA_x0015F858, Sint32_x0015F858) __asm__("func_00158898");
extern void ADXSJD_EntryTrapFunc_x0015F858(ADXSJD_x0015F858 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
extern Sint32_x0015F858 adxt_time_mode_x0015F858 __asm__("D_0041115C");
extern void (*ahxdetachfunc_x0015F858)(ADXT_x0015F858) __asm__("ahxdetachfunc");
extern void (*ac3detachfunc_x0015F858)(ADXT_x0015F858) __asm__("ac3detachfunc");
extern void (*ac3stopfunc_x0015F858)(ADXT_x0015F858) __asm__("ac3stopfunc");
extern void (*pl2detachfunc_x0015F858)(ADXT_x0015F858) __asm__("pl2detachfunc");
extern Sint32_x0015F858 adxt_time_unit_x0015F858 __asm__("D_004111A8");
void ADXT_GetTime_x0015F858(ADX_TALK_x0015F858* adxt, Sint32_x0015F858* ncount, Sint32_x0015F858* tscale) __asm__("ADXT_GetTime");
extern char ext_str0_x0015F858[] __asm__("D_00461EE0");
void ADXT_Pause_x0015F858(ADXT_x0015F858 adxt, Sint32_x0015F858 sw) __asm__("ADXT_Pause");
/* ADXT_Pause_x0015F858: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_Pause_x0015F858(ADXT_x0015F858 adxt, Sint32_x0015F858 sw) {
    Sint32_x0015F858 ncount;
    Sint32_x0015F858 tscale;
    Sint32_x0015F858 time_mode_temp;
    Sint8_x0015F858 stat;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x0015F858(ext_str0_x0015F858);
        return;
    }
    stat = adxt->stat;
    if (sw == adxt->pause_flag) {
        return;
    }
    ADXCRS_Lock_x0015F858();
    adxt->pause_flag = sw;
    if ((Uint8_x0015F858)(stat - 3) < 2) {
        if (sw == 1) {
            ADXRNA_SetPlaySw_x0015F858(adxt->rna, 0);
        } else {
            ADXRNA_SetPlaySw_x0015F858(adxt->rna, 1);
            adxt->svcnt = adxt_vsync_cnt_x0015F858;
        }
        time_mode_temp = adxt_time_mode_x0015F858;
        adxt_time_mode_x0015F858 = 0;
        ADXT_GetTime_x0015F858(adxt, &ncount, &tscale);
        adxt_time_mode_x0015F858 = time_mode_temp;
        adxt->tvofst = (Float32_x0015F858)ncount / tscale * adxt_time_unit_x0015F858;
    }
    ADXCRS_Unlock_x0015F858();
}
s8 ADXT_GetStatPause(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461F08);
        return 0;
    }
    return *(s8 *)((u8 *)arg0 + 0x72);
}
void func_0015F9B8(void) {
    func_00158A90();
}
void func_0015F9D0(void) {
    func_00158AA8();
}
void func_0015F9E8(void) {

}
void func_0015F9F0(void) {

}
s32 func_0015F9F8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 8);
}
void func_0015FA00(u8 *arg0) {
    func_00158E30(*(s32 *)((u8 *)arg0 + 4));
}
void func_0015FA18(void) {

}
s32 func_0015FA20(void) {
    return 0;
}
void func_0015FA28(void) {

}
void func_0015FA30(void) {

}
void func_0015FA38(void) {

}
void func_0015FA40(void) {

}
void func_0015FA48(void) {
    func_001540F8();
}
typedef unsigned char Uint8_x0015FA60;
typedef signed char Sint8_x0015FA60;
typedef signed short Sint16_x0015FA60;
typedef unsigned int Uint32_x0015FA60;
typedef signed int Sint32_x0015FA60;
typedef float Float32_x0015FA60;
typedef char Char8_x0015FA60;
typedef struct SJ_OBJ_x0015FA60 *SJ_x0015FA60;
typedef struct {
        Uint8_x0015FA60 *data;
        Sint32_x0015FA60 len;
} SJCK_x0015FA60;
typedef struct {
        Uint8_x0015FA60 data[16];
} SJUUID_x0015FA60;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x0015FA60 sj);
        const SJUUID_x0015FA60 *(*GetUuid)(SJ_x0015FA60 sj);
        void (*Reset)(SJ_x0015FA60 sj);
        void (*GetChunk)(SJ_x0015FA60 sj, Sint32_x0015FA60 id, Sint32_x0015FA60 nbyte, SJCK_x0015FA60 *ck);
        void (*UngetChunk)(SJ_x0015FA60 sj, Sint32_x0015FA60 id, SJCK_x0015FA60 *ck);
        void (*PutChunk)(SJ_x0015FA60 sj, Sint32_x0015FA60 id, SJCK_x0015FA60 *ck);
        Sint32_x0015FA60 (*GetNumData)(SJ_x0015FA60 sj, Sint32_x0015FA60 id);
        Sint32_x0015FA60 (*IsGetChunk)(SJ_x0015FA60 sj, Sint32_x0015FA60 id, Sint32_x0015FA60 nbyte, Sint32_x0015FA60 *rbyte);
        void (*EntryErrFunc)(SJ_x0015FA60 sj, void (*func)(void *obj, Char8_x0015FA60 *msg), void *obj);
} SJ_IF_x0015FA60;
struct SJ_OBJ_x0015FA60 {
        SJ_IF_x0015FA60 *vtbl;
};
typedef struct {
        Sint8_x0015FA60 used;
        Sint8_x0015FA60 stat;
        Sint8_x0015FA60 mode;
        Sint8_x0015FA60 maxnch;
        void *sjd;
        void *stm;
        void *rna;
        SJ_x0015FA60 sjf;
        SJ_x0015FA60 sji;
        SJ_x0015FA60 sjo[2];
        Uint8_x0015FA60 *ibuf;
        Sint32_x0015FA60 ibufsize;
        Sint32_x0015FA60 ibufxsize;
        Uint8_x0015FA60 *obuf;
        Sint32_x0015FA60 obufsize;
        Sint32_x0015FA60 obufstride;
        Sint32_x0015FA60 svrfreq;
        Sint16_x0015FA60 ibuf_nsct;
        Sint16_x0015FA60 reload_nsct;
        Sint16_x0015FA60 outvol;
        Sint16_x0015FA60 outpan[2];
        Sint16_x0015FA60 outbal;
        Sint32_x0015FA60 maxdecsmpl;
        Sint32_x0015FA60 lpcnt;
        Sint32_x0015FA60 lpendmod;
        Sint32_x0015FA60 x54;
        Sint32_x0015FA60 x58;
        Sint32_x0015FA60 x5c;
        Sint16_x0015FA60 errcode;
        Sint16_x0015FA60 x62;
        Sint32_x0015FA60 x64;
        Sint16_x0015FA60 x68;
        Sint16_x0015FA60 x6a;
        Sint8_x0015FA60 lpsw;
        Sint8_x0015FA60 autorcvr;
        Sint8_x0015FA60 x6e;
        Sint8_x0015FA60 x6f;
        Sint8_x0015FA60 pausesw;
        Sint8_x0015FA60 x71;
        Sint8_x0015FA60 x72;
        Sint8_x0015FA60 x73;
        void *amp;
        SJ_x0015FA60 sjx[2];
        SJ_x0015FA60 sjy[2];
        Sint32_x0015FA60 timeofst;
        Sint32_x0015FA60 lpendsct;
        Sint32_x0015FA60 trapnsmpl;
        void *lsc;
        Sint8_x0015FA60 lnksw;
        Uint8_x0015FA60 pad99[0x9C - 0x99];
        Uint32_x0015FA60 x9c;
        Sint32_x0015FA60 startvsync;
        Sint32_x0015FA60 decsmpl;
        Sint32_x0015FA60 flush_nsmpl;
        Sint8_x0015FA60 stmstart;
        Sint8_x0015FA60 ainf_sw;
        Sint16_x0015FA60 rsv4;
        Uint8_x0015FA60 *wkend;
        void *stm_fname;
        void *stm_dir;
        Sint32_x0015FA60 stm_ofst;
        Sint32_x0015FA60 stm_nsct;
        Uint8_x0015FA60 padC4[0xC8 - 0xC4];
} ADXT_OBJ_x0015FA60;
typedef ADXT_OBJ_x0015FA60 *ADXT_x0015FA60;
extern Sint32_x0015FA60 adxt_vsync_cnt_x0015FA60 __asm__("D_00404C14");
extern Sint32_x0015FA60 func_004cd8f0_x0015FA60(void *rna, Sint32_x0015FA60 nsmpl) __asm__("func_00158A68");
extern void func_004d5b30_x0015FA60(void) __asm__("func_0015F5F0");
extern void adxt_GetTime_x0015FA60(ADXT_x0015FA60 adxt, Sint32_x0015FA60 *ncount, Sint32_x0015FA60 *tscale) __asm__("ADXT_GetTime");
extern Sint32_x0015FA60 adxt_time_mode_x0015FA60 __asm__("D_0041115C");
extern Sint32_x0015FA60 adxt_time_unit_x0015FA60 __asm__("D_004111A8");
Sint32_x0015FA60 func_0015FA60_x0015FA60(ADXT_x0015FA60 adxt, Sint32_x0015FA60 nsmpl) __asm__("func_0015FA60");
/* func_004d63e8: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/adx_tlk_6388.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0015FA60 func_0015FA60_x0015FA60(ADXT_x0015FA60 adxt, Sint32_x0015FA60 nsmpl)
{
        Sint32_x0015FA60 n;
        Sint32_x0015FA60 mode;
        Sint32_x0015FA60 ncount;
        Sint32_x0015FA60 tscale;
        if (adxt->x72 == 0) {
                return 0;
        }
        n = func_004cd8f0_x0015FA60(adxt->rna, nsmpl);
        func_004d5b30_x0015FA60();
        mode = adxt_time_mode_x0015FA60;
        adxt_time_mode_x0015FA60 = 0;
        adxt_GetTime_x0015FA60(adxt, &ncount, &tscale);
        adxt_time_mode_x0015FA60 = mode;
        adxt->x9c = (Uint32_x0015FA60)(((Float32_x0015FA60)ncount / (Float32_x0015FA60)tscale) * (Float32_x0015FA60)adxt_time_unit_x0015FA60);
        adxt->startvsync = adxt_vsync_cnt_x0015FA60;
        return n;
}
s32 func_0015FB48(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x88);
}
void func_0015FB50(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x88) = arg1;
}
void func_0015FB58(u8 *arg0) {
    func_00159CE8(*(s32 *)((u8 *)arg0 + 4));
}
void func_0015FB70(u8 *arg0, s8 arg1) {
    s32 temp_v0;

    *(s8 *)((u8 *)arg0 + 0x98) = arg1;
    temp_v0 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_v0 != 0) {
        func_00159C90(temp_v0);
    }
}
s8 func_0015FBA8(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 0x98);
}
void func_0015FBB0(u8 *arg0) {
    func_00159D48(*(s32 *)((u8 *)arg0 + 4));
}
s32 ADXT_GetDecNumSmpl(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461F38);
        return -1;
    }
    return func_00159C78(*(s32 *)((u8 *)arg0 + 4));
}
typedef unsigned char Uint8_x0015FC00;
typedef signed char Sint8_x0015FC00;
typedef unsigned short Uint16_x0015FC00;
typedef signed short Sint16_x0015FC00;
typedef signed int Sint32_x0015FC00;
typedef Sint32_x0015FC00 Bool_x0015FC00;
extern Sint32_x0015FC00 ADX_DecodeInfo_x0015FC00(Uint8_x0015FC00 *data, Sint32_x0015FC00 len, Sint16_x0015FC00 *hdrlen, Sint8_x0015FC00 *fmt, Sint8_x0015FC00 *bps, Sint8_x0015FC00 *blksiz, Sint8_x0015FC00 *nch, Sint32_x0015FC00 *sfreq, Sint32_x0015FC00 *nsmpl, Sint32_x0015FC00 *blksmpl) __asm__("func_001527C0");
Bool_x0015FC00 func_0015FC00_x0015FC00(Uint8_x0015FC00 *data, Sint32_x0015FC00 size, Sint32_x0015FC00 *hdrsiz) __asm__("func_0015FC00");
/* ADXT_IsHeader: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/adx_tlk.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Bool_x0015FC00 func_0015FC00_x0015FC00(Uint8_x0015FC00 *data, Sint32_x0015FC00 size, Sint32_x0015FC00 *hdrsiz)
{
        Sint16_x0015FC00 hdrlen;
        Sint8_x0015FC00 fmt;
        Sint8_x0015FC00 bps;
        Sint8_x0015FC00 blksiz;
        Sint8_x0015FC00 nch;
        Sint32_x0015FC00 sfreq;
        Sint32_x0015FC00 nsmpl;
        Sint32_x0015FC00 blksmpl;
        if (size < 2) {
                return 0;
        }
        if (((Uint16_x0015FC00)(((*(Uint16_x0015FC00 *)(data)) >> 8) | ((*(Uint16_x0015FC00 *)(data)) << 8))) != 0x8000) {
                return 0;
        }
        if (ADX_DecodeInfo_x0015FC00(data, size, &hdrlen, &fmt, &bps, &blksiz, &nch, &sfreq, &nsmpl, &blksmpl) < 0) {
                return 0;
        }
        *hdrsiz = hdrlen;
        return 1;
}
typedef unsigned short Uint16_x0015FC98;
typedef signed char Sint8_x0015FC98;
typedef signed int Sint32_x0015FC98;
Sint32_x0015FC98 func_0015FC98_x0015FC98(Sint8_x0015FC98 *adr, Sint32_x0015FC98 siz, Sint32_x0015FC98 *endsiz) __asm__("func_0015FC98");
/* ADXT_IsEndcode: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0032b7.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x0015FC98 func_0015FC98_x0015FC98(Sint8_x0015FC98 *adr, Sint32_x0015FC98 siz, Sint32_x0015FC98 *endsiz) {
    if (siz <= 1) {
        return 0;
    }
    if ((Uint16_x0015FC98)((*(Uint16_x0015FC98*)adr >> 8) | (*(Uint16_x0015FC98*)adr << 8)) != 0x8001) {
        return 0;
    }
    *endsiz = siz;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0015EFB0", func_0015FCD8);
void func_0015FE80(void) {
    func_00153028();
}
void ADXT_SetKeyString(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461F68);
        return;
    }
    func_00159CA0(*(s32 *)((u8 *)arg0 + 4));
}
void func_0015FEC8(void) {
    func_00159CB8();
}
s32 func_0015FEE0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0xC);
}
void func_0015FEE8(u8 *arg0) {
    func_00159CD0(*(s32 *)((u8 *)arg0 + 4));
}
typedef unsigned char Uint8_x0015FF00;
typedef char Sint8_x0015FF00;
typedef unsigned short Uint16_x0015FF00;
typedef signed short Sint16_x0015FF00;
typedef unsigned int Uint32_x0015FF00;
typedef signed int Sint32_x0015FF00;
typedef Sint32_x0015FF00 Bool_x0015FF00;
typedef char Char8_x0015FF00;
void ADXERR_CallErrFunc1_x0015FF00(Sint8_x0015FF00*) __asm__("ADXERR_CallErrFunc1");
void ADXERR_CallErrFunc2_x0015FF00(Sint8_x0015FF00*, Sint8_x0015FF00*) __asm__("func_00154178");
void ADXERR_ItoA2_x0015FF00(Sint32_x0015FF00, Sint32_x0015FF00, Sint8_x0015FF00*, Sint32_x0015FF00) __asm__("func_001542F0");
typedef struct _UUID_x0015FF00 {
    Uint32_x0015FF00 Data1;
    Uint16_x0015FF00 Data2;
    Uint16_x0015FF00 Data3;
    Uint8_x0015FF00 Data4[8];
} UUID_x0015FF00;
typedef struct {
        Sint8_x0015FF00 *data;
        Sint32_x0015FF00 len;
} SJCK_x0015FF00;
typedef struct {
        struct _sj_vtbl_x0015FF00 *vtbl;
} SJ_OBJ_x0015FF00;
typedef SJ_OBJ_x0015FF00 *SJ_x0015FF00;
typedef struct _sj_vtbl_x0015FF00 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015FF00 sj);
        UUID_x0015FF00 *(*GetUuid)(SJ_x0015FF00 sj);
        void (*Reset)(SJ_x0015FF00 sj);
        void (*GetChunk)(SJ_x0015FF00 sj, Sint32_x0015FF00 id, Sint32_x0015FF00 nbyte, SJCK_x0015FF00 *ck);
        void (*UngetChunk)(SJ_x0015FF00 sj, Sint32_x0015FF00 id, SJCK_x0015FF00 *ck);
        void (*PutChunk)(SJ_x0015FF00 sj, Sint32_x0015FF00 id, SJCK_x0015FF00 *ck);
        Sint32_x0015FF00 (*GetNumData)(SJ_x0015FF00 sj, Sint32_x0015FF00 id);
        Sint32_x0015FF00 (*IsGetChunk)(SJ_x0015FF00 sj, Sint32_x0015FF00 id, Sint32_x0015FF00 nbyte, Sint32_x0015FF00 *rbyte);
        void (*EntryErrFunc)(SJ_x0015FF00 sj,
                                        void (*func)(void *obj, Sint32_x0015FF00 ecode), void *obj);
} SJ_IF_x0015FF00;
typedef void *ADXSTM_x0015FF00;
typedef void *ADXSJD_x0015FF00;
typedef void *ADXRNA_x0015FF00;
typedef struct _adx_talk_x0015FF00 {
                   Sint8_x0015FF00 used;
                   Sint8_x0015FF00 stat;
                   Sint8_x0015FF00 pmode;
                   Sint8_x0015FF00 maxnch;
                   ADXSJD_x0015FF00 sjd;
                   ADXSTM_x0015FF00 stm;
                   ADXRNA_x0015FF00 rna;
                   SJ_x0015FF00 sjf;
                   SJ_x0015FF00 sji;
                   SJ_x0015FF00 sjo[(2)];
                   Sint8_x0015FF00 *ibuf;
                   Sint32_x0015FF00 ibuflen;
                   Sint32_x0015FF00 ibufxlen;
                   Sint16_x0015FF00 *obuf;
                   Sint32_x0015FF00 obufsize;
                   Sint32_x0015FF00 obufdist;
                   Sint32_x0015FF00 svrfreq;
                   Sint16_x0015FF00 maxsct;
                   Sint16_x0015FF00 minsct;
                   Sint16_x0015FF00 outvol;
                   Sint16_x0015FF00 outpan[(2)];
                   Sint16_x0015FF00 unk46;
                   Sint32_x0015FF00 maxdecsmpl;
                   Sint32_x0015FF00 lpcnt;
                   Sint32_x0015FF00 lp_skiplen;
                   Sint32_x0015FF00 trp;
                   Sint32_x0015FF00 wpos;
                   Sint32_x0015FF00 mofst;
                   Sint16_x0015FF00 ercode;
                   Sint32_x0015FF00 edecpos;
                   Sint16_x0015FF00 edeccnt;
                   Sint16_x0015FF00 eshrtcnt;
                   Sint8_x0015FF00 lpflg;
                   Sint8_x0015FF00 autorcvr;
                   Sint8_x0015FF00 fltmode;
                   Sint8_x0015FF00 execflag;
                   Sint8_x0015FF00 pstwait_flag;
                   Sint8_x0015FF00 pstready_flag;
                   Sint8_x0015FF00 pause_flag;
                   void *amp;
                   SJ_x0015FF00 ampsji[(2)];
                   SJ_x0015FF00 ampsjo[(2)];
                   Sint32_x0015FF00 time_ofst;
                   Sint32_x0015FF00 lesct;
                   Sint32_x0015FF00 trpnsmpl;
                   void *lsc;
                   Sint8_x0015FF00 lnkflg;
                   Sint8_x0015FF00 rsv;
                   Sint16_x0015FF00 rsv2;
                   Uint32_x0015FF00 tvofst;
                   Uint32_x0015FF00 svcnt;
                   Uint32_x0015FF00 decofst;
                   Sint32_x0015FF00 flush_nsmpl;
                   Sint8_x0015FF00 unkAC;
                   Sint8_x0015FF00 padAD[1];
               Char8_x0015FF00* unkB0;
               Sint32_x0015FF00 padB4;
               Sint32_x0015FF00 padB8;
               Sint32_x0015FF00 padBC;
               Sint32_x0015FF00 padC0;
} ADX_TALK_x0015FF00;
typedef ADX_TALK_x0015FF00 *ADXT_x0015FF00;
void ADXT_Stop_x0015FF00(ADXT_x0015FF00 adxt) __asm__("ADXT_Stop");
extern void ADXT_EntryErrFunc_x0015FF00(void (*func)(void *obj, Sint8_x0015FF00 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015FF00(ADXT_x0015FF00 adxt,
                void (*f)(void *obj, Sint32_x0015FF00 ch, void *data, Sint32_x0015FF00 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
void ADXT_SetLnkSw_x0015FF00(ADXT_x0015FF00 adxt, Sint32_x0015FF00 sw) __asm__("func_0015FB70");
extern void ADXM_SetCbUsrVsync_x0015FF00(Bool_x0015FF00 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015FF00(Bool_x0015FF00 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015FF00(void (*fn)(void *obj, Char8_x0015FF00 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015FF00(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
Sint32_x0015FF00 ADXF_GetFnameRangeEx_x0015FF00(Sint32_x0015FF00 ptid, Sint32_x0015FF00 flid, Char8_x0015FF00 *fname, void **dir, Sint32_x0015FF00 *ofst, Sint32_x0015FF00 *fnsct) __asm__("func_00155E40");
extern char ext_str0_x0015FF00[] __asm__("D_00461FC8");
extern char ext_str1_x0015FF00[] __asm__("D_00461F98");
void ADXT_StartAfs_x0015FF00(ADXT_x0015FF00 adxt, Sint32_x0015FF00 patid, Sint32_x0015FF00 fid) __asm__("ADXT_StartAfs");
/* ADXT_StartAfs_x0015FF00: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_StartAfs_x0015FF00(ADXT_x0015FF00 adxt, Sint32_x0015FF00 patid, Sint32_x0015FF00 fid) {
    Char8_x0015FF00 error[16];
    void* dir;
    Sint32_x0015FF00 ofst;
    Sint32_x0015FF00 fnsct;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x0015FF00(ext_str1_x0015FF00);
        return;
    }
    ADXT_Stop_x0015FF00(adxt);
    if (ADXF_GetFnameRangeEx_x0015FF00(patid, fid, adxt->unkB0, &dir, &ofst, &fnsct) != 0) {
        return;
    }
    if (adxt->stm == 0) {
        ADXERR_ItoA2_x0015FF00(patid, fid, &error, 16);
        ADXERR_CallErrFunc2_x0015FF00(ext_str0_x0015FF00, error);
        adxt->ercode = (-1);
        adxt->stat = (6);
        return;
    }
    adxt->stat = (1);
    adxt->padB4 = adxt->unkB0;
    adxt->padB8 = dir;
    adxt->padBC = ofst;
    adxt->padC0 = fnsct;
    adxt->unkAC = 1;
    adxt->pmode = (1);
    ADXT_SetLnkSw_x0015FF00(adxt, 0);
}
typedef unsigned char Uint8_x0015FFF8;
typedef char Sint8_x0015FFF8;
typedef unsigned short Uint16_x0015FFF8;
typedef signed short Sint16_x0015FFF8;
typedef unsigned int Uint32_x0015FFF8;
typedef signed int Sint32_x0015FFF8;
typedef Sint32_x0015FFF8 Bool_x0015FFF8;
typedef char Char8_x0015FFF8;
void ADXERR_CallErrFunc1_x0015FFF8(Sint8_x0015FFF8*) __asm__("ADXERR_CallErrFunc1");
typedef struct _UUID_x0015FFF8 {
    Uint32_x0015FFF8 Data1;
    Uint16_x0015FFF8 Data2;
    Uint16_x0015FFF8 Data3;
    Uint8_x0015FFF8 Data4[8];
} UUID_x0015FFF8;
typedef struct {
        Sint8_x0015FFF8 *data;
        Sint32_x0015FFF8 len;
} SJCK_x0015FFF8;
typedef struct {
        struct _sj_vtbl_x0015FFF8 *vtbl;
} SJ_OBJ_x0015FFF8;
typedef SJ_OBJ_x0015FFF8 *SJ_x0015FFF8;
typedef struct _sj_vtbl_x0015FFF8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x0015FFF8 sj);
        UUID_x0015FFF8 *(*GetUuid)(SJ_x0015FFF8 sj);
        void (*Reset)(SJ_x0015FFF8 sj);
        void (*GetChunk)(SJ_x0015FFF8 sj, Sint32_x0015FFF8 id, Sint32_x0015FFF8 nbyte, SJCK_x0015FFF8 *ck);
        void (*UngetChunk)(SJ_x0015FFF8 sj, Sint32_x0015FFF8 id, SJCK_x0015FFF8 *ck);
        void (*PutChunk)(SJ_x0015FFF8 sj, Sint32_x0015FFF8 id, SJCK_x0015FFF8 *ck);
        Sint32_x0015FFF8 (*GetNumData)(SJ_x0015FFF8 sj, Sint32_x0015FFF8 id);
        Sint32_x0015FFF8 (*IsGetChunk)(SJ_x0015FFF8 sj, Sint32_x0015FFF8 id, Sint32_x0015FFF8 nbyte, Sint32_x0015FFF8 *rbyte);
        void (*EntryErrFunc)(SJ_x0015FFF8 sj,
                                        void (*func)(void *obj, Sint32_x0015FFF8 ecode), void *obj);
} SJ_IF_x0015FFF8;
typedef void *ADXSTM_x0015FFF8;
typedef void *ADXSJD_x0015FFF8;
typedef void *ADXRNA_x0015FFF8;
typedef struct _adx_talk_x0015FFF8 {
                   Sint8_x0015FFF8 used;
                   Sint8_x0015FFF8 stat;
                   Sint8_x0015FFF8 pmode;
                   Sint8_x0015FFF8 maxnch;
                   ADXSJD_x0015FFF8 sjd;
                   ADXSTM_x0015FFF8 stm;
                   ADXRNA_x0015FFF8 rna;
                   SJ_x0015FFF8 sjf;
                   SJ_x0015FFF8 sji;
                   SJ_x0015FFF8 sjo[(2)];
                   Sint8_x0015FFF8 *ibuf;
                   Sint32_x0015FFF8 ibuflen;
                   Sint32_x0015FFF8 ibufxlen;
                   Sint16_x0015FFF8 *obuf;
                   Sint32_x0015FFF8 obufsize;
                   Sint32_x0015FFF8 obufdist;
                   Sint32_x0015FFF8 svrfreq;
                   Sint16_x0015FFF8 maxsct;
                   Sint16_x0015FFF8 minsct;
                   Sint16_x0015FFF8 outvol;
                   Sint16_x0015FFF8 outpan[(2)];
                   Sint16_x0015FFF8 unk46;
                   Sint32_x0015FFF8 maxdecsmpl;
                   Sint32_x0015FFF8 lpcnt;
                   Sint32_x0015FFF8 lp_skiplen;
                   Sint32_x0015FFF8 trp;
                   Sint32_x0015FFF8 wpos;
                   Sint32_x0015FFF8 mofst;
                   Sint16_x0015FFF8 ercode;
                   Sint32_x0015FFF8 edecpos;
                   Sint16_x0015FFF8 edeccnt;
                   Sint16_x0015FFF8 eshrtcnt;
                   Sint8_x0015FFF8 lpflg;
                   Sint8_x0015FFF8 autorcvr;
                   Sint8_x0015FFF8 fltmode;
                   Sint8_x0015FFF8 execflag;
                   Sint8_x0015FFF8 pstwait_flag;
                   Sint8_x0015FFF8 pstready_flag;
                   Sint8_x0015FFF8 pause_flag;
                   void *amp;
                   SJ_x0015FFF8 ampsji[(2)];
                   SJ_x0015FFF8 ampsjo[(2)];
                   Sint32_x0015FFF8 time_ofst;
                   Sint32_x0015FFF8 lesct;
                   Sint32_x0015FFF8 trpnsmpl;
                   void *lsc;
                   Sint8_x0015FFF8 lnkflg;
                   Sint8_x0015FFF8 rsv;
                   Sint16_x0015FFF8 rsv2;
                   Uint32_x0015FFF8 tvofst;
                   Uint32_x0015FFF8 svcnt;
                   Uint32_x0015FFF8 decofst;
                   Sint32_x0015FFF8 flush_nsmpl;
                   Sint8_x0015FFF8 unkAC;
                   Sint8_x0015FFF8 padAD[1];
               Char8_x0015FFF8* unkB0;
               Sint32_x0015FFF8 padB4;
               Sint32_x0015FFF8 padB8;
               Sint32_x0015FFF8 padBC;
               Sint32_x0015FFF8 padC0;
} ADX_TALK_x0015FFF8;
typedef ADX_TALK_x0015FFF8 *ADXT_x0015FFF8;
void ADXT_Stop_x0015FFF8(ADXT_x0015FFF8 adxt) __asm__("ADXT_Stop");
extern void ADXT_EntryErrFunc_x0015FFF8(void (*func)(void *obj, Sint8_x0015FFF8 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x0015FFF8(ADXT_x0015FFF8 adxt,
                void (*f)(void *obj, Sint32_x0015FFF8 ch, void *data, Sint32_x0015FFF8 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
void ADXT_SetLnkSw_x0015FFF8(ADXT_x0015FFF8 adxt, Sint32_x0015FFF8 sw) __asm__("func_0015FB70");
extern void ADXM_SetCbUsrVsync_x0015FFF8(Bool_x0015FFF8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x0015FFF8(Bool_x0015FFF8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x0015FFF8(void (*fn)(void *obj, Char8_x0015FFF8 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x0015FFF8(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
char* strcpy_x0015FFF8(char* dest, const char* src) __asm__("func_00127A88");
extern char ext_str0_x0015FFF8[] __asm__("D_00461FF0");
void ADXT_StartFname_x0015FFF8(ADXT_x0015FFF8 adxt, Char8_x0015FFF8* fname) __asm__("ADXT_StartFname");
/* ADXT_StartFname_x0015FFF8: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_StartFname_x0015FFF8(ADXT_x0015FFF8 adxt, Char8_x0015FFF8* fname) {
    if ((adxt == 0) || (fname == 0)) {
        ADXERR_CallErrFunc1_x0015FFF8(ext_str0_x0015FFF8);
        return;
    }
    ADXT_Stop_x0015FFF8(adxt);
    strcpy_x0015FFF8(adxt->unkB0, fname);
    adxt->padB4 = adxt->unkB0;
    adxt->padC0 = 0xFFFFF;
    adxt->padB8 = 0;
    adxt->padBC = 0;
    adxt->stat = (1);
    adxt->unkAC = 1;
    adxt->pmode = (0);
    ADXT_SetLnkSw_x0015FFF8(adxt, 0);
}
typedef unsigned char Uint8_x00160098;
typedef char Sint8_x00160098;
typedef unsigned short Uint16_x00160098;
typedef signed short Sint16_x00160098;
typedef unsigned int Uint32_x00160098;
typedef signed int Sint32_x00160098;
typedef Sint32_x00160098 Bool_x00160098;
typedef char Char8_x00160098;
typedef struct _UUID_x00160098 {
    Uint32_x00160098 Data1;
    Uint16_x00160098 Data2;
    Uint16_x00160098 Data3;
    Uint8_x00160098 Data4[8];
} UUID_x00160098;
typedef struct {
        Sint8_x00160098 *data;
        Sint32_x00160098 len;
} SJCK_x00160098;
typedef struct {
        struct _sj_vtbl_x00160098 *vtbl;
} SJ_OBJ_x00160098;
typedef SJ_OBJ_x00160098 *SJ_x00160098;
typedef struct _sj_vtbl_x00160098 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00160098 sj);
        UUID_x00160098 *(*GetUuid)(SJ_x00160098 sj);
        void (*Reset)(SJ_x00160098 sj);
        void (*GetChunk)(SJ_x00160098 sj, Sint32_x00160098 id, Sint32_x00160098 nbyte, SJCK_x00160098 *ck);
        void (*UngetChunk)(SJ_x00160098 sj, Sint32_x00160098 id, SJCK_x00160098 *ck);
        void (*PutChunk)(SJ_x00160098 sj, Sint32_x00160098 id, SJCK_x00160098 *ck);
        Sint32_x00160098 (*GetNumData)(SJ_x00160098 sj, Sint32_x00160098 id);
        Sint32_x00160098 (*IsGetChunk)(SJ_x00160098 sj, Sint32_x00160098 id, Sint32_x00160098 nbyte, Sint32_x00160098 *rbyte);
        void (*EntryErrFunc)(SJ_x00160098 sj,
                                        void (*func)(void *obj, Sint32_x00160098 ecode), void *obj);
} SJ_IF_x00160098;
typedef void *ADXSTM_x00160098;
typedef void *ADXSJD_x00160098;
typedef void *ADXRNA_x00160098;
typedef struct _adx_talk_x00160098 {
                   Sint8_x00160098 used;
                   Sint8_x00160098 stat;
                   Sint8_x00160098 pmode;
                   Sint8_x00160098 maxnch;
                   ADXSJD_x00160098 sjd;
                   ADXSTM_x00160098 stm;
                   ADXRNA_x00160098 rna;
                   SJ_x00160098 sjf;
                   SJ_x00160098 sji;
                   SJ_x00160098 sjo[(2)];
                   Sint8_x00160098 *ibuf;
                   Sint32_x00160098 ibuflen;
                   Sint32_x00160098 ibufxlen;
                   Sint16_x00160098 *obuf;
                   Sint32_x00160098 obufsize;
                   Sint32_x00160098 obufdist;
                   Sint32_x00160098 svrfreq;
                   Sint16_x00160098 maxsct;
                   Sint16_x00160098 minsct;
                   Sint16_x00160098 outvol;
                   Sint16_x00160098 outpan[(2)];
                   Sint16_x00160098 unk46;
                   Sint32_x00160098 maxdecsmpl;
                   Sint32_x00160098 lpcnt;
                   Sint32_x00160098 lp_skiplen;
                   Sint32_x00160098 trp;
                   Sint32_x00160098 wpos;
                   Sint32_x00160098 mofst;
                   Sint16_x00160098 ercode;
                   Sint32_x00160098 edecpos;
                   Sint16_x00160098 edeccnt;
                   Sint16_x00160098 eshrtcnt;
                   Sint8_x00160098 lpflg;
                   Sint8_x00160098 autorcvr;
                   Sint8_x00160098 fltmode;
                   Sint8_x00160098 execflag;
                   Sint8_x00160098 pstwait_flag;
                   Sint8_x00160098 pstready_flag;
                   Sint8_x00160098 pause_flag;
                   void *amp;
                   SJ_x00160098 ampsji[(2)];
                   SJ_x00160098 ampsjo[(2)];
                   Sint32_x00160098 time_ofst;
                   Sint32_x00160098 lesct;
                   Sint32_x00160098 trpnsmpl;
                   void *lsc;
                   Sint8_x00160098 lnkflg;
                   Sint8_x00160098 rsv;
                   Sint16_x00160098 rsv2;
                   Uint32_x00160098 tvofst;
                   Uint32_x00160098 svcnt;
                   Uint32_x00160098 decofst;
                   Sint32_x00160098 flush_nsmpl;
                   Sint8_x00160098 unkAC;
                   Sint8_x00160098 padAD[1];
               Char8_x00160098* unkB0;
               Sint32_x00160098 padB4;
               Sint32_x00160098 padB8;
               Sint32_x00160098 padBC;
               Sint32_x00160098 padC0;
} ADX_TALK_x00160098;
typedef ADX_TALK_x00160098 *ADXT_x00160098;
void ADXT_StartMem2_x00160098(ADXT_x00160098 adxt, void *adxdat, Sint32_x00160098 datlen) __asm__("func_001600B0");
extern void ADXT_EntryErrFunc_x00160098(void (*func)(void *obj, Sint8_x00160098 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x00160098(ADXT_x00160098 adxt,
                void (*f)(void *obj, Sint32_x00160098 ch, void *data, Sint32_x00160098 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x00160098(Bool_x00160098 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x00160098(Bool_x00160098 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x00160098(void (*fn)(void *obj, Char8_x00160098 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x00160098(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void ADXT_StartMem2_x00160098(ADXT_x00160098 adxt, void* adxdat, Sint32_x00160098 datlen) __asm__("func_001600B0");
void func_00160098_x00160098(ADXT_x00160098 adxt, void* adxdat) __asm__("func_00160098");
/* ADXT_StartMem: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tlk2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00160098_x00160098(ADXT_x00160098 adxt, void* adxdat) {
    ADXT_StartMem2_x00160098(adxt, adxdat, 0x40000000);
}
extern char D_003C90D8_x001600B0[] __asm__("D_00462020");
extern char D_003C9108_x001600B0[] __asm__("D_00462050");
void func_00159E88_x001600B0() __asm__("func_00152508");
void func_00159EA0_x001600B0() __asm__("func_00152520");
typedef unsigned char Uint8_x001600B0;
typedef char Sint8_x001600B0;
typedef unsigned short Uint16_x001600B0;
typedef signed short Sint16_x001600B0;
typedef unsigned int Uint32_x001600B0;
typedef signed int Sint32_x001600B0;
typedef Sint32_x001600B0 Bool_x001600B0;
typedef char Char8_x001600B0;
void func_0015B478_x001600B0(Sint8_x001600B0*) __asm__("ADXERR_CallErrFunc1");
typedef struct _UUID_x001600B0 {
    Uint32_x001600B0 Data1;
    Uint16_x001600B0 Data2;
    Uint16_x001600B0 Data3;
    Uint8_x001600B0 Data4[8];
} UUID_x001600B0;
typedef struct {
        Sint8_x001600B0 *data;
        Sint32_x001600B0 len;
} SJCK_x001600B0;
typedef struct {
        struct _sj_vtbl_x001600B0 *vtbl;
} SJ_OBJ_x001600B0;
typedef SJ_OBJ_x001600B0 *SJ_x001600B0;
typedef struct _sj_vtbl_x001600B0 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x001600B0 sj);
        UUID_x001600B0 *(*GetUuid)(SJ_x001600B0 sj);
        void (*Reset)(SJ_x001600B0 sj);
        void (*GetChunk)(SJ_x001600B0 sj, Sint32_x001600B0 id, Sint32_x001600B0 nbyte, SJCK_x001600B0 *ck);
        void (*UngetChunk)(SJ_x001600B0 sj, Sint32_x001600B0 id, SJCK_x001600B0 *ck);
        void (*PutChunk)(SJ_x001600B0 sj, Sint32_x001600B0 id, SJCK_x001600B0 *ck);
        Sint32_x001600B0 (*GetNumData)(SJ_x001600B0 sj, Sint32_x001600B0 id);
        Sint32_x001600B0 (*IsGetChunk)(SJ_x001600B0 sj, Sint32_x001600B0 id, Sint32_x001600B0 nbyte, Sint32_x001600B0 *rbyte);
        void (*EntryErrFunc)(SJ_x001600B0 sj,
                                        void (*func)(void *obj, Sint32_x001600B0 ecode), void *obj);
} SJ_IF_x001600B0;
SJ_x001600B0 func_001765A8_x001600B0(Sint8_x001600B0 *data, Sint32_x001600B0 bsize) __asm__("func_0016DBE0");
typedef void *ADXSTM_x001600B0;
typedef void *ADXSJD_x001600B0;
typedef void *ADXRNA_x001600B0;
typedef struct _adx_talk_x001600B0 {
                   Sint8_x001600B0 used;
                   Sint8_x001600B0 stat;
                   Sint8_x001600B0 pmode;
                   Sint8_x001600B0 maxnch;
                   ADXSJD_x001600B0 sjd;
                   ADXSTM_x001600B0 stm;
                   ADXRNA_x001600B0 rna;
                   SJ_x001600B0 sjf;
                   SJ_x001600B0 sji;
                   SJ_x001600B0 sjo[(2)];
                   Sint8_x001600B0 *ibuf;
                   Sint32_x001600B0 ibuflen;
                   Sint32_x001600B0 ibufxlen;
                   Sint16_x001600B0 *obuf;
                   Sint32_x001600B0 obufsize;
                   Sint32_x001600B0 obufdist;
                   Sint32_x001600B0 svrfreq;
                   Sint16_x001600B0 maxsct;
                   Sint16_x001600B0 minsct;
                   Sint16_x001600B0 outvol;
                   Sint16_x001600B0 outpan[(2)];
                   Sint16_x001600B0 unk46;
                   Sint32_x001600B0 maxdecsmpl;
                   Sint32_x001600B0 lpcnt;
                   Sint32_x001600B0 lp_skiplen;
                   Sint32_x001600B0 trp;
                   Sint32_x001600B0 wpos;
                   Sint32_x001600B0 mofst;
                   Sint16_x001600B0 ercode;
                   Sint32_x001600B0 edecpos;
                   Sint16_x001600B0 edeccnt;
                   Sint16_x001600B0 eshrtcnt;
                   Sint8_x001600B0 lpflg;
                   Sint8_x001600B0 autorcvr;
                   Sint8_x001600B0 fltmode;
                   Sint8_x001600B0 execflag;
                   Sint8_x001600B0 pstwait_flag;
                   Sint8_x001600B0 pstready_flag;
                   Sint8_x001600B0 pause_flag;
                   void *amp;
                   SJ_x001600B0 ampsji[(2)];
                   SJ_x001600B0 ampsjo[(2)];
                   Sint32_x001600B0 time_ofst;
                   Sint32_x001600B0 lesct;
                   Sint32_x001600B0 trpnsmpl;
                   void *lsc;
                   Sint8_x001600B0 lnkflg;
                   Sint8_x001600B0 rsv;
                   Sint16_x001600B0 rsv2;
                   Uint32_x001600B0 tvofst;
                   Uint32_x001600B0 svcnt;
                   Uint32_x001600B0 decofst;
                   Sint32_x001600B0 flush_nsmpl;
                   Sint8_x001600B0 unkAC;
                   Sint8_x001600B0 padAD[1];
               Char8_x001600B0* unkB0;
               Sint32_x001600B0 padB4;
               Sint32_x001600B0 padB8;
               Sint32_x001600B0 padBC;
               Sint32_x001600B0 padC0;
} ADX_TALK_x001600B0;
typedef ADX_TALK_x001600B0 *ADXT_x001600B0;
void func_00165968_x001600B0(ADXT_x001600B0 adxt) __asm__("ADXT_Stop");
extern void ADXT_EntryErrFunc_x001600B0(void (*func)(void *obj, Sint8_x001600B0 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x001600B0(ADXT_x001600B0 adxt,
                void (*f)(void *obj, Sint32_x001600B0 ch, void *data, Sint32_x001600B0 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
void func_00167C18_x001600B0(ADXT_x001600B0 adxt, Sint32_x001600B0 sw) __asm__("func_0015FB70");
extern void ADXM_SetCbUsrVsync_x001600B0(Bool_x001600B0 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x001600B0(Bool_x001600B0 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x001600B0(void (*fn)(void *obj, Char8_x001600B0 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x001600B0(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void func_00165608_x001600B0(ADXT_x001600B0 adxt, SJ_x001600B0 sj) __asm__("func_0015E408");
void func_001600B0_x001600B0(ADXT_x001600B0 adxt, void* adxdat, Sint32_x001600B0 datlen) __asm__("func_001600B0");
/* ADXT_StartMem2: from https://github.com/Subarasheese/pes6decomp (src/middleware/cri/adx_tlk/ADXT_StartMem2.c, no licence stated for its own code); ee-gcc 2.96 -O2 -G0 */
void func_001600B0_x001600B0(ADXT_x001600B0 adxt, void* adxdat, Sint32_x001600B0 datlen) {
    SJ_x001600B0 sj;
    if ((adxt == 0) || (adxdat == 0) || (datlen < 0)) {
        func_0015B478_x001600B0(D_003C90D8_x001600B0);
        return;
    }
    func_00165968_x001600B0(adxt);
    func_00159E88_x001600B0();
    sj = func_001765A8_x001600B0((Sint8_x001600B0*)adxdat, datlen);
    if (sj == 0) {
        func_00159EA0_x001600B0();
        func_0015B478_x001600B0(D_003C9108_x001600B0);
        return;
    }
    func_00165608_x001600B0(adxt, sj);
    adxt->pmode = (2);
    func_00167C18_x001600B0(adxt, 0);
    func_00159EA0_x001600B0();
}
typedef struct SfdSj_x00160190 SfdSj_x00160190;
typedef struct SfdSjChunk_x00160190 {
    char *data;
    int len;
} SfdSjChunk_x00160190;
typedef struct SfdSjVtbl_x00160190 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00160190 *sj);
    int (*getUuid)(SfdSj_x00160190 *sj);
    void (*reset)(SfdSj_x00160190 *sj);
    void (*getChunk)(SfdSj_x00160190 *sj, int id, int n, SfdSjChunk_x00160190 *ck);
    void (*ungetChunk)(SfdSj_x00160190 *sj, int id, SfdSjChunk_x00160190 *ck);
    void (*putChunk)(SfdSj_x00160190 *sj, int id, SfdSjChunk_x00160190 *ck);
    int (*getNumData)(SfdSj_x00160190 *sj, int id);
} SfdSjVtbl_x00160190;
struct SfdSj_x00160190 {
    SfdSjVtbl_x00160190 *vtbl;
};
typedef struct SjxObj_x00160190 SjxObj_x00160190;
SfdSj_x00160190 *SJMEM_Create_x00160190(char *buf, int bsize) __asm__("func_0016DBE0");
typedef struct LscStm_x00160190 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat_x00160190;
    int rdsct;
} LscStm_x00160190;
typedef struct LscObj_x00160190 {
    signed char used;
    signed char stat_x00160190;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x00160190 *sj;
    SfdSjChunk_x00160190 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x00160190 stms[16];
} LscObj_x00160190;
typedef struct AdxPdObj_x00160190 {
    int used;
    int id;
    int mode;
    int stat_x00160190;
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
} AdxPdObj_x00160190;
typedef struct AdxDecPara_x00160190 {
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
} AdxDecPara_x00160190;
struct Pl2Enc_x00160190;
typedef struct AdxbObj_x00160190 AdxbObj_x00160190;
typedef short *(*AdxbGetWrFunc_x00160190)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00160190)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00160190 {
    short used;
    short hdcdflag;
    int stat_x00160190;
    AdxPdObj_x00160190 *xpd;
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
    AdxDecPara_x00160190 dp;
    AdxbGetWrFunc_x00160190 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00160190 addwrfunc;
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
    struct Pl2Enc_x00160190 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00160190(AdxbObj_x00160190 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00160190 {
    signed char used;
    signed char stat_x00160190;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00160190 *adxb;
    SfdSj_x00160190 *sji;
    SfdSj_x00160190 *sjo[2];
    SfdSjChunk_x00160190 cki;
    SfdSjChunk_x00160190 cko[2];
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
} AdxSjdObj_x00160190;
extern void ADXSJD_EntryFltFunc_x00160190(AdxSjdObj_x00160190 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00160190(AdxSjdObj_x00160190 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00160190)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00160190)(CvFsErrFn_x00160190 func, void *obj);
typedef int (*CvFsPathFn_x00160190)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00160190)(void);
typedef int (*CvFsOpenFn_x00160190)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00160190)(int fd);
typedef int (*CvFsFdIntFn_x00160190)(int fd);
typedef int (*CvFsSeekFn_x00160190)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00160190)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00160190)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00160190)(void);
typedef int (*CvFsLoadDirInfoFn_x00160190)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00160190)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00160190)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00160190 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00160190 entry_err_func;
    CvFsPathFn_x00160190 get_file_size;
    CvFsGetFreeSizeFn_x00160190 get_free_size;
    CvFsOpenFn_x00160190 open;
    CvFsFdFn_x00160190 close_x00160190;
    CvFsSeekFn_x00160190 seek;
    CvFsFdIntFn_x00160190 tell;
    CvFsXferFn_x00160190 req_rd;
    CvFsXferFn_x00160190 req_wr;
    CvFsFdFn_x00160190 stop_tr;
    CvFsFdIntFn_x00160190 get_stat;
    CvFsFdIntFn_x00160190 get_sct_len;
    CvFsSetSctLenFn_x00160190 set_sct_len;
    CvFsFdIntFn_x00160190 get_num_tr;
    CvFsPathFn_x00160190 change_dir;
    CvFsPathFn_x00160190 is_exist_file;
    CvFsGetNumFilesFn_x00160190 get_num_files;
    CvFsLoadDirInfoFn_x00160190 load_dir_info;
    CvFsFdIntFn_x00160190 get_max_byte_rate;
    CvFsPathFn_x00160190 make_dir;
    CvFsPathFn_x00160190 remove_dir;
    CvFsPathFn_x00160190 delete_file;
    CvFsGetFileSizeExFn_x00160190 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00160190 opt_fn2;
} CvFsVtbl_x00160190;
typedef struct CvFsHandle_x00160190 {
    CvFsVtbl_x00160190 *vtbl;
    int fd;
} CvFsHandle_x00160190;
extern CvFsVtbl_x00160190 *addDevice_x00160190(char *devname, CvFsVtbl_x00160190 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00160190 {
    signed char used;
    signed char stat_x00160190;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00160190 *sj;
    CvFsHandle_x00160190 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00160190 rdck;
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
} AdxStmObj_x00160190;
extern void ADXSTM_EntryEosFunc_x00160190(AdxStmObj_x00160190 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
typedef struct AdxAmpObj_x00160190 AdxAmpObj_x00160190;
typedef struct DtrObj_x00160190 DtrObj_x00160190;
typedef struct Ps2RnaPsj_x00160190 {
    char used;
    void *sjrmt;
    SfdSj_x00160190 *sjuni;
    SjxObj_x00160190 *sjx;
    SfdSjChunk_x00160190 ck;
} Ps2RnaPsj_x00160190;
typedef struct Ps2Rna_x00160190 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x00160190 *psj[2];
    DtrObj_x00160190 *dtr[2];
    SfdSj_x00160190 *sjo[2];
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
} Ps2Rna_x00160190;
enum AdxtPmode_x00160190 {
    ADXT_PMODE_FNAME_x00160190 = 0,
    ADXT_PMODE_AFS_x00160190 = 1,
    ADXT_PMODE_MEM_x00160190 = 2,
    ADXT_PMODE_SJ_x00160190 = 3,
    ADXT_PMODE_SLFILE_x00160190 = 4
};
typedef struct AdxtObj_x00160190 {
    signed char used;
    signed char stat_x00160190;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x00160190 *sjd;
    AdxStmObj_x00160190 *stm;
    Ps2Rna_x00160190 *rna;
    SfdSj_x00160190 *sjf;
    SfdSj_x00160190 *sji;
    SfdSj_x00160190 *sjo[2];
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
    AdxAmpObj_x00160190 *amp;
    SfdSj_x00160190 *ampsji[2];
    SfdSj_x00160190 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x00160190 *lsc;
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
} AdxtObj_x00160190;
typedef struct AcxEntry_x00160190 {
    int ofst;
    int len;
} AcxEntry_x00160190;
typedef struct AcxHeader_x00160190 {
    int id;
    int count;
    AcxEntry_x00160190 ent[1];
} AcxHeader_x00160190;
void adxt_start_sj_x00160190(AdxtObj_x00160190 *adxt, SfdSj_x00160190 *sji) __asm__("func_0015E408");
void ADXT_Stop_x00160190(AdxtObj_x00160190 *adxt) __asm__("ADXT_Stop");
void ADXT_SetLnkSw_x00160190(AdxtObj_x00160190 *adxt, int sw) __asm__("func_0015FB70");
struct stat_x00160190;
int close_x00160190(int fd) __asm__("close");
void ADXERR_CallErrFunc1_x00160190(const char *msg) __asm__("ADXERR_CallErrFunc1");
void ADXCRS_Lock_x00160190(void) __asm__("func_00152508");
void ADXCRS_Unlock_x00160190(void) __asm__("func_00152520");
extern char E02080810_ADXT_StartMemIdx_parameter_error_x00160190[] __asm__("D_00462080");
extern char E8101207_can_t_create_sj_ADXT_StartMemIdx_x00160190[] __asm__("D_004620B0");
void adxt_start_sj_x00160190(AdxtObj_x00160190 *adxt, SfdSj_x00160190 *sji) __asm__("func_0015E408");
void ADXT_Stop_x00160190(AdxtObj_x00160190 *adxt) __asm__("ADXT_Stop");
void ADXT_SetLnkSw_x00160190(AdxtObj_x00160190 *adxt, int sw) __asm__("func_0015FB70");
void ADXT_StartMemIdx_x00160190(AdxtObj_x00160190 *adxt, AcxHeader_x00160190 *acx, int no) __asm__("ADXT_StartMemIdx");
/* ADXT_StartMemIdx_x00160190: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxt.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void ADXT_StartMemIdx_x00160190(AdxtObj_x00160190 *adxt, AcxHeader_x00160190 *acx, int no)
{
    SfdSj_x00160190 *sj;
    if (adxt == 0 || acx == 0 || no < 0) {
        ADXERR_CallErrFunc1_x00160190(E02080810_ADXT_StartMemIdx_parameter_error_x00160190);
        return;
    }
    ADXT_Stop_x00160190(adxt);
    if (no >= ((((acx->count) >> 24) & 0xff) | (((acx->count) >> 8) & 0xff00) | (((acx->count) << 8) & 0xff0000) | ((acx->count) << 24)) || no < 0) {
        return;
    }
    ADXCRS_Lock_x00160190();
    sj = SJMEM_Create_x00160190((char *)acx + (((((acx->ent + no)->ofst) >> 24) & 0xff) | ((((acx->ent + no)->ofst) >> 8) & 0xff00) | ((((acx->ent + no)->ofst) << 8) & 0xff0000) | (((acx->ent + no)->ofst) << 24)), 0x40000000);
    if (sj == 0) {
        ADXCRS_Unlock_x00160190();
        ADXERR_CallErrFunc1_x00160190(E8101207_can_t_create_sj_ADXT_StartMemIdx_x00160190);
        return;
    }
    adxt_start_sj_x00160190(adxt, sj);
    adxt->pmode = ADXT_PMODE_MEM_x00160190;
    ADXT_SetLnkSw_x00160190(adxt, 0);
    ADXCRS_Unlock_x00160190();
}
void func_00160300(u8 *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s4;

    temp_s1 = *(s32 *)((u8 *)arg0 + 4);
    temp_s3 = func_00159E88(temp_s1);
    temp_s4 = func_00159EA0(temp_s1);
    temp_s0 = func_00159ED0(temp_s1);
    func_0015A058(temp_s1);
    temp_s0_2 = temp_s0 - temp_s3;
    func_00159D78(temp_s1, 0);
    *(s32 *)((u8 *)arg0 + 0x90) = temp_s0_2;
    func_00159D68(temp_s1, temp_s0_2);
    func_00159D88(temp_s1, temp_s4);
    func_00159C80(temp_s1, temp_s3);
    func_00159D58(temp_s1, &adxt_trap_entry, arg0);
}
typedef signed char Sint8_x001603B8;
typedef int Sint32_x001603B8;
typedef struct SjChunk_x001603B8 {
    Sint8_x001603B8 *data;
    Sint32_x001603B8 len;
} SjChunk_x001603B8;
typedef struct SjObj_x001603B8 SjObj_x001603B8;
typedef struct SjIf_x001603B8 {
    void *obj;
    void (*addRef)(SjObj_x001603B8 *sj);
    void (*release)(SjObj_x001603B8 *sj);
    void (*destroy)(SjObj_x001603B8 *sj);
    void *(*getUuid)(SjObj_x001603B8 *sj);
    void (*reset)(SjObj_x001603B8 *sj);
    void (*getChunk)(SjObj_x001603B8 *sj, int id, int len, SjChunk_x001603B8 *ck);
    void (*ungetChunk)(SjObj_x001603B8 *sj, int id, SjChunk_x001603B8 *ck);
    void (*putChunk)(SjObj_x001603B8 *sj, int id, SjChunk_x001603B8 *ck);
    int (*getNumData)(SjObj_x001603B8 *sj, int id);
} SjIf_x001603B8;
struct SjObj_x001603B8 {
    SjIf_x001603B8 *vt;
};
extern int GetVia4_Obj33C8_GetField_28_7818_327818_x001603B8(void *sj) __asm__("func_00159E88");
extern int func_00327830_x001603B8(void *sj) __asm__("func_00159EA0");
extern int GetVia4_Obj33C8_GetField_30_7860_327860_x001603B8(void *sj) __asm__("func_00159ED0");
extern void Forward33CFF8_327988_x001603B8(void *sj) __asm__("func_0015A070");
extern void Obj3270_SetField_34_x001603B8(void *sj, int v) __asm__("func_00159C80");
extern void Obj3270_SetField_3C_x001603B8(void *sj, int v) __asm__("func_00159D68");
extern void Obj3270_SetField_40_x001603B8(void *sj, int v) __asm__("func_00159D78");
extern void Obj3270_SetField_44_x001603B8(void *sj, int v) __asm__("func_00159D88");
extern void func_0033F130_x001603B8(const char *msg) __asm__("ADXERR_CallErrFunc1");
extern char D_00452890_x001603B8[] __asm__("D_004620E0");
void adxt_trap_entry_x001603B8(char *self) __asm__("adxt_trap_entry");
/* func_0032C048: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0032bf90.c, MIT); ee-gcc 2.96 -O2 -G0 */
void adxt_trap_entry_x001603B8(char *self)
{
    void *sj = *(void **)(self + 4);
    SjObj_x001603B8 *in = *(SjObj_x001603B8 **)(self + 0x14);
    int top = GetVia4_Obj33C8_GetField_28_7818_327818_x001603B8(sj);
    int size = func_00327830_x001603B8(sj);
    int end = GetVia4_Obj33C8_GetField_30_7860_327860_x001603B8(sj);
    int len;
    SjChunk_x001603B8 ck;
    if ((*(signed char *)(self + 2) == 2 || *(signed char *)(self + 2) == 3) &&
        *(signed char *)(self + 0x6C) == 0) {
        Obj3270_SetField_3C_x001603B8(*(void **)(self + 4), -1);
        return;
    }
    in->vt->getChunk(in, 1, *(int *)(self + 0x50), &ck);
    if (ck.len < *(int *)(self + 0x50)) {
        func_0033F130_x001603B8(D_00452890_x001603B8);
    }
    in->vt->putChunk(in, 0, &ck);
    Obj3270_SetField_40_x001603B8(sj, 0);
    len = end - top;
    *(int *)(self + 0x90) = len;
    Obj3270_SetField_3C_x001603B8(sj, len);
    Obj3270_SetField_44_x001603B8(sj, size);
    Obj3270_SetField_34_x001603B8(sj, top);
    if (*(signed char *)(self + 2) == 2) {
        in->vt->reset(in);
        in->vt->getChunk(in, 1, size, &ck);
        in->vt->putChunk(in, 0, &ck);
    }
    Forward33CFF8_327988_x001603B8(sj);
    *(int *)(self + 0x4C) += 1;
}
