#include "common.h"

s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 memset(s32, s32, s32);              /* extern */

typedef struct SfdSj_x0014E5D0 SfdSj_x0014E5D0;
typedef struct SfdSjChunk_x0014E5D0 { char *data; int len; } SfdSjChunk_x0014E5D0;
typedef struct SfdSjVtbl_x0014E5D0 { void *queryInterface; void *addRef; void *release; void (*destroy)(SfdSj_x0014E5D0 *sj); int (*getUuid)(SfdSj_x0014E5D0 *sj); void (*reset)(SfdSj_x0014E5D0 *sj); void (*getChunk)(SfdSj_x0014E5D0 *sj, int id, int n, SfdSjChunk_x0014E5D0 *ck); void (*ungetChunk)(SfdSj_x0014E5D0 *sj, int id, SfdSjChunk_x0014E5D0 *ck); void (*putChunk)(SfdSj_x0014E5D0 *sj, int id, SfdSjChunk_x0014E5D0 *ck); int (*getNumData)(SfdSj_x0014E5D0 *sj, int id); } SfdSjVtbl_x0014E5D0;
struct SfdSj_x0014E5D0 { SfdSjVtbl_x0014E5D0 *vtbl; };
typedef struct AdxPdObj_x0014E5D0 { int used; int id; int mode; int stat; int nblk_decoded; int channels; unsigned char *ibuf; int nblk; short *obufl; short *obufr; short dly[2][2]; short k0; short k1; short seed; short mul; short add; } AdxPdObj_x0014E5D0;
typedef struct AdxDecPara_x0014E5D0 { char *ibuf; int niblk; int nch; int blksize; int blknsmpl; short *pcmbuf; int pcmbsize; int pcmbdist; int wpos; int nroom; int lp_nsmpl; int ndecsmpl; } AdxDecPara_x0014E5D0;
struct Pl2Enc_x0014E5D0;
typedef struct AdxbObj_x0014E5D0 AdxbObj_x0014E5D0;
typedef short *(*AdxbGetWrFunc_x0014E5D0)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0014E5D0)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0014E5D0 { short used; short hdcdflag; int stat; AdxPdObj_x0014E5D0 *xpd; signed char code; signed char bps; signed char nch; signed char blklen; int blknsmpl; int sfreq; int total_nsmpl; short cof; short rsv1; int lp_ins_nsmpl; short nloop; short lp_type; int lp_spos; int lp_sofst; int lp_epos; int lp_eofst; int maxnch; short *pcmbuf; int pcmbsize; int pcmbdist; AdxDecPara_x0014E5D0 dp; AdxbGetWrFunc_x0014E5D0 getwrfunc; void *getwrobj; AdxbAddWrFunc_x0014E5D0 addwrfunc; void *addwrobj; int total_ndecsmpl; int curwpos; int ndecsmpl; int ndeclen; short fmttype; unsigned short def_fmttype; short cdctype; short f158; short k0; short km; short ka; unsigned short xp_key; unsigned short xp_km; unsigned short xp_ka; unsigned short dly1[2]; unsigned short dly2[2]; void *ahx; int ahx_dec_nsmpl; int ahx_dec_nfrm; void *ac3; int ac3_dec_nsmpl; int ac3_dec_nfrm; int ainf_len; char dataid[16]; short def_outvol; short def_pan[2]; char pad230[2]; struct Pl2Enc_x0014E5D0 *pl2; int pl2_x; int pl2_y; int cb_ndeclen; int f248; void (*decfunc)(void *context, int count, int bytes); void *decobj; };
extern void ADXB_EntryDecFunc_x0014E5D0(AdxbObj_x0014E5D0 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x0014E5D0 { signed char used; signed char stat; signed char maxnch; signed char empty_end; AdxbObj_x0014E5D0 *adxb; SfdSj_x0014E5D0 *sji; SfdSj_x0014E5D0 *sjo[2]; SfdSjChunk_x0014E5D0 cki; SfdSjChunk_x0014E5D0 cko[2]; int total_decsmpl; int total_decdtlen; int decpos; int maxdecsmpl; int dtrpsmpl; int dtrpcnt; int dtrpdtlen; void (*dtrpfunc)(void *context); void *dtrpobj; void (*dfltfunc)(void *context, int ch, char *data, int len); void *dfltobj; char hdr[64]; int hdrlen; int lnksw; int fill; int skip; } AdxSjdObj_x0014E5D0;
extern void ADXSJD_EntryFltFunc_x0014E5D0(AdxSjdObj_x0014E5D0 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0014E5D0(AdxSjdObj_x0014E5D0 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0014E5D0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0014E5D0)(CvFsErrFn_x0014E5D0 func, void *obj);
typedef int (*CvFsPathFn_x0014E5D0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0014E5D0)(void);
typedef int (*CvFsOpenFn_x0014E5D0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0014E5D0)(int fd);
typedef int (*CvFsFdIntFn_x0014E5D0)(int fd);
typedef int (*CvFsSeekFn_x0014E5D0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0014E5D0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0014E5D0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0014E5D0)(void);
typedef int (*CvFsLoadDirInfoFn_x0014E5D0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0014E5D0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0014E5D0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0014E5D0 { void (*exec_server)(void); CvFsEntryErrFuncFn_x0014E5D0 entry_err_func; CvFsPathFn_x0014E5D0 get_file_size; CvFsGetFreeSizeFn_x0014E5D0 get_free_size; CvFsOpenFn_x0014E5D0 open; CvFsFdFn_x0014E5D0 close; CvFsSeekFn_x0014E5D0 seek; CvFsFdIntFn_x0014E5D0 tell; CvFsXferFn_x0014E5D0 req_rd; CvFsXferFn_x0014E5D0 req_wr; CvFsFdFn_x0014E5D0 stop_tr; CvFsFdIntFn_x0014E5D0 get_stat; CvFsFdIntFn_x0014E5D0 get_sct_len; CvFsSetSctLenFn_x0014E5D0 set_sct_len; CvFsFdIntFn_x0014E5D0 get_num_tr; CvFsPathFn_x0014E5D0 change_dir; CvFsPathFn_x0014E5D0 is_exist_file; CvFsGetNumFilesFn_x0014E5D0 get_num_files; CvFsLoadDirInfoFn_x0014E5D0 load_dir_info; CvFsFdIntFn_x0014E5D0 get_max_byte_rate; CvFsPathFn_x0014E5D0 make_dir; CvFsPathFn_x0014E5D0 remove_dir; CvFsPathFn_x0014E5D0 delete_file; CvFsGetFileSizeExFn_x0014E5D0 get_file_size_ex; int (*opt_fn1)(); CvFsOptFn2_x0014E5D0 opt_fn2; } CvFsVtbl_x0014E5D0;
typedef struct CvFsHandle_x0014E5D0 { CvFsVtbl_x0014E5D0 *vtbl; int fd; } CvFsHandle_x0014E5D0;
extern CvFsVtbl_x0014E5D0 *addDevice_x0014E5D0(char *devname, CvFsVtbl_x0014E5D0 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0014E5D0 { signed char used; signed char stat; signed char rdflg; signed char rtrycnt; SfdSj_x0014E5D0 *sj; CvFsHandle_x0014E5D0 *fd; int fofst; int fsize; int fsctsz; int maxrdsz; int minrdsz; int rdsct; SfdSjChunk_x0014E5D0 rdck; int reqrdsct; int eos; int rdbyte; void (*eosfunc)(void *obj); void *eosobj; int buflen; signed char pause; signed char open_req; signed char close_req; signed char start_req; signed char stop_req; signed char opened; signed char nrmlflg; char f75[5]; const char *fname; void *dir; int curpos; int maxsct; } AdxStmObj_x0014E5D0;
extern void ADXSTM_EntryEosFunc_x0014E5D0(AdxStmObj_x0014E5D0 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
typedef struct AdxAmpObj_x0014E5D0 AdxAmpObj_x0014E5D0;
void func_00152508_x0014E5D0(void) __asm__("func_00152508");
void func_00152520_x0014E5D0(void) __asm__("func_00152520");
enum AdxAmpStat_x0014E5D0 { ADXAMP_STAT_STOP_x0014E5D0 = 0, ADXAMP_STAT_EXEC_x0014E5D0 = 2 };
typedef struct AdxAmpObj_x0014E5D0 { signed char used; signed char stat; signed char maxnch; char rsrv; SfdSj_x0014E5D0 *sji[2]; SfdSj_x0014E5D0 *sjo[2]; int nsmpl[2]; int nch; int sfreq; float frmlen; float frmprd; int nfrm; } AdxAmpObj_x0014E5D0;
extern AdxAmpObj_x0014E5D0 D_00400B60_x0014E5D0[16] __asm__("D_00400B60");
AdxAmpObj_x0014E5D0 *func_0014E5D0_x0014E5D0(int maxnch, SfdSj_x0014E5D0 **sji, SfdSj_x0014E5D0 **sjo) __asm__("func_0014E5D0");
AdxAmpObj_x0014E5D0 *func_0014E5D0_x0014E5D0(int maxnch, SfdSj_x0014E5D0 **sji, SfdSj_x0014E5D0 **sjo)
{
    AdxAmpObj_x0014E5D0 *amp;
    int i;
    int ch;
    for (i = 0; i < 16; i++) {
        if (D_00400B60_x0014E5D0[i].used == 0) {
            break;
        }
    }
    if (i == 16) {
        return 0;
    }
    func_00152508_x0014E5D0();
    amp = &D_00400B60_x0014E5D0[i];
    amp->maxnch = maxnch;
    for (ch = 0; ch < maxnch; ch++) {
        amp->nsmpl[ch] = 0;
        amp->sji[ch] = sji[ch];
        amp->sjo[ch] = sjo[ch];
    }
    amp->sfreq = 44100;
    amp->stat = ADXAMP_STAT_STOP_x0014E5D0;
    amp->nfrm = 0;
    amp->frmlen = 0.1f;
    amp->nch = maxnch;
    amp->frmprd = 0.1f;
    amp->used = 1;
    func_00152520_x0014E5D0();
    return amp;
}
__asm__("# noswap func_0014E5D0");
void func_0014E700(s32 arg0) {
    if (arg0 != 0) {
        func_00152508();
        memset(arg0, 0, 0x30);
        func_00152520();
    }
}
s8 func_0014E750(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 1);
}
