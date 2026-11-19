#include "common.h"

s32 func_00151160(s32);                         /* extern */

s32 ADXB_SetAhxInSj(s32);                       /* extern */
s32 func_0014ECA0(s32);                         /* extern */

s32 ADXB_SetAhxDecSmpl(s32);                    /* extern */
s32 func_0014EC80(s32, s32);                    /* extern */

s32 ADXB_AhxTermSupply(s32);                    /* extern */
s32 func_0014EC50(s32, s32);                    /* extern */

s32 func_001507E8(s32);                         /* extern */

s32 func_001505E8();                            /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_0040D5F0;

extern s32 D_0040D5E0;

s32 PS2RNA_SetStmHdInfo();                      /* extern */

s32 func_0016D030();                            /* extern */

s32 func_0016D000();                            /* extern */

s32 PS2RNA_DiscardData();                       /* extern */

s32 func_0016D860();                            /* extern */

s32 func_0016D830();                            /* extern */

s32 func_0016D7F8();                            /* extern */

s32 func_0016D7C8();                            /* extern */

s32 func_0016D798();                            /* extern */

s32 PS2RNA_SetBitPerSmpl();                     /* extern */

s32 func_0016D670();                            /* extern */

s32 func_0016D5E0();                            /* extern */

s32 func_0016D508();                            /* extern */

s32 func_0016D4D8();                            /* extern */

s32 PS2RNA_SetStartSmpl();                      /* extern */

s32 func_0016D1C8();                            /* extern */

s32 func_0016D160();                            /* extern */

s32 func_0016D128();                            /* extern */

s32 func_0016CFD0();                            /* extern */

s32 func_0016CF38();                            /* extern */

s32 func_0016CED8();                            /* extern */

s32 PS2RNA_Start();                             /* extern */

s32 func_0016CA28();                            /* extern */

s32 func_0016C968();                            /* extern */

s32 func_0016C460();                            /* extern */

s32 func_0016C910(s32);                         /* extern */

s32 func_0016C8A8();                            /* extern */

s32 func_0016C838();                            /* extern */

s32 func_0016C730();                            /* extern */

s32 PS2RNA_SetupVoice();                        /* extern */

extern s32 D_0047E978;

s32 func_001705E0(s32);                     /* extern */

s32 func_001704C8(s32, s32, s32, s32);  /* extern */

s32 func_001578F8();                            /* extern */

s32 func_00156048();                            /* extern */
s32 func_0015F5F0();                            /* extern */
extern s32 D_00405DB8;

s32 func_00158008();                            /* extern */
s32 func_00158110();                            /* extern */
s32 func_00158600();                            /* extern */

s32 func_00157EB0();                            /* extern */

extern s32 D_00405CE0;

s32 func_0016FF58();                            /* extern */

s32 func_0016FF40();                            /* extern */

s32 func_00170620();                            /* extern */

extern s32 D_00405CA4;

s32 func_001708A8();                            /* extern */

s32 func_00170890();                            /* extern */

s32 func_00170878();                            /* extern */

s32 func_00170860();                            /* extern */

s32 func_00170830();                            /* extern */

s32 func_00170818();                            /* extern */

extern s32 D_00405CA8;

s32 SleepThread();                              /* extern */

extern s64 D_00405D00;

s32 func_00169D98(s32);                             /* extern */
extern s32 D_00460D50;

s32 func_0016A130(s32);                         /* extern */
extern s32 D_00460CF0;

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 func_00152508();                            /* extern */
s32 func_00152520();                            /* extern */
s32 func_0015E408(void *, s32);                 /* extern */
s32 func_0015E650();                            /* extern */
s32 func_0015FB70(void *, s32);             /* extern */
s32 func_00169BD8(s32);                         /* extern */
s32 func_0016A020(s32, s32);                    /* extern */
extern s32 D_00460CC0;

typedef struct SfdSj_x001563B0 SfdSj_x001563B0;
typedef struct SfdSjChunk_x001563B0 {
    char *data;
    int len;
} SfdSjChunk_x001563B0;
typedef struct SfdSjVtbl_x001563B0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001563B0 *sj);
    int (*getUuid)(SfdSj_x001563B0 *sj);
    void (*reset)(SfdSj_x001563B0 *sj);
    void (*getChunk)(SfdSj_x001563B0 *sj, int id, int n, SfdSjChunk_x001563B0 *ck);
    void (*ungetChunk)(SfdSj_x001563B0 *sj, int id, SfdSjChunk_x001563B0 *ck);
    void (*putChunk)(SfdSj_x001563B0 *sj, int id, SfdSjChunk_x001563B0 *ck);
    int (*getNumData)(SfdSj_x001563B0 *sj, int id);
} SfdSjVtbl_x001563B0;
struct SfdSj_x001563B0 {
    SfdSjVtbl_x001563B0 *vtbl;
};
void SJMEM_Finish_x001563B0(void) __asm__("func_0016DB90");
void SJRBF_Finish_x001563B0(void) __asm__("func_0016E0D0");
void SJUNI_Finish_x001563B0(void) __asm__("func_0016E8E0");
void LSC_Finish_x001563B0(void) __asm__("func_0016A2E0");
typedef struct AdxPdObj_x001563B0 {
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
} AdxPdObj_x001563B0;
typedef struct AdxDecPara_x001563B0 {
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
} AdxDecPara_x001563B0;
struct Pl2Enc_x001563B0;
typedef struct AdxbObj_x001563B0 AdxbObj_x001563B0;
typedef short *(*AdxbGetWrFunc_x001563B0)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x001563B0)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x001563B0 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x001563B0 *xpd;
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
    AdxDecPara_x001563B0 dp;
    AdxbGetWrFunc_x001563B0 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x001563B0 addwrfunc;
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
    struct Pl2Enc_x001563B0 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x001563B0(AdxbObj_x001563B0 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x001563B0 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x001563B0 *adxb;
    SfdSj_x001563B0 *sji;
    SfdSj_x001563B0 *sjo[2];
    SfdSjChunk_x001563B0 cki;
    SfdSjChunk_x001563B0 cko[2];
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
} AdxSjdObj_x001563B0;
void ADXSJD_Finish_x001563B0(void) __asm__("func_00158B50");
extern void ADXSJD_EntryFltFunc_x001563B0(AdxSjdObj_x001563B0 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x001563B0(AdxSjdObj_x001563B0 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x001563B0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x001563B0)(CvFsErrFn_x001563B0 func, void *obj);
typedef int (*CvFsPathFn_x001563B0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x001563B0)(void);
typedef int (*CvFsOpenFn_x001563B0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x001563B0)(int fd);
typedef int (*CvFsFdIntFn_x001563B0)(int fd);
typedef int (*CvFsSeekFn_x001563B0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x001563B0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x001563B0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x001563B0)(void);
typedef int (*CvFsLoadDirInfoFn_x001563B0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x001563B0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x001563B0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x001563B0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x001563B0 entry_err_func;
    CvFsPathFn_x001563B0 get_file_size;
    CvFsGetFreeSizeFn_x001563B0 get_free_size;
    CvFsOpenFn_x001563B0 open;
    CvFsFdFn_x001563B0 close;
    CvFsSeekFn_x001563B0 seek;
    CvFsFdIntFn_x001563B0 tell;
    CvFsXferFn_x001563B0 req_rd;
    CvFsXferFn_x001563B0 req_wr;
    CvFsFdFn_x001563B0 stop_tr;
    CvFsFdIntFn_x001563B0 get_stat;
    CvFsFdIntFn_x001563B0 get_sct_len;
    CvFsSetSctLenFn_x001563B0 set_sct_len;
    CvFsFdIntFn_x001563B0 get_num_tr;
    CvFsPathFn_x001563B0 change_dir;
    CvFsPathFn_x001563B0 is_exist_file;
    CvFsGetNumFilesFn_x001563B0 get_num_files;
    CvFsLoadDirInfoFn_x001563B0 load_dir_info;
    CvFsFdIntFn_x001563B0 get_max_byte_rate;
    CvFsPathFn_x001563B0 make_dir;
    CvFsPathFn_x001563B0 remove_dir;
    CvFsPathFn_x001563B0 delete_file;
    CvFsGetFileSizeExFn_x001563B0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x001563B0 opt_fn2;
} CvFsVtbl_x001563B0;
typedef struct CvFsHandle_x001563B0 {
    CvFsVtbl_x001563B0 *vtbl;
    int fd;
} CvFsHandle_x001563B0;
extern CvFsVtbl_x001563B0 *addDevice_x001563B0(char *devname, CvFsVtbl_x001563B0 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x001563B0 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x001563B0 *sj;
    CvFsHandle_x001563B0 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x001563B0 rdck;
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
} AdxStmObj_x001563B0;
void ADXSTM_Finish_x001563B0(void) __asm__("func_0015C838");
extern void ADXSTM_EntryEosFunc_x001563B0(AdxStmObj_x001563B0 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
void ADXT_DestroyAll_x001563B0(void) __asm__("func_0015E390");
void SVM_DelCbSvr_x001563B0(int svtype, unsigned int id) __asm__("func_00170450");
void SVM_Finish_x001563B0(void) __asm__("func_001709A8");
void ADXERR_Finish_x001563B0(void) __asm__("func_001540C0");
void ADXRNA_Finish_x001563B0(void) __asm__("func_001587E0");
void ADXCRS_Lock_x001563B0(void) __asm__("func_00152508");
void ADXCRS_Unlock_x001563B0(void) __asm__("func_00152520");
void ADXF_Finish_x001563B0(void) __asm__("func_00154460");
extern int dtx_send_sw_x001563B0 __asm__("D_00411E2C");
extern int adxt_init_cnt_x001563B0 __asm__("lbl_801A6734");
extern int adxt_svr_id_x001563B0 __asm__("D_00404C08");
extern int adxt_fssvr_id_x001563B0 __asm__("D_00404C10");
void func_001563B0_x001563B0(void) __asm__("func_001563B0");
/* ADXT_Finish: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxtinit.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001563B0_x001563B0(void) {
    if (--adxt_init_cnt_x001563B0 == 0) {
        dtx_send_sw_x001563B0 = 0;
        ADXT_DestroyAll_x001563B0();
        ADXRNA_Finish_x001563B0();
        ADXF_Finish_x001563B0();
        ADXSTM_Finish_x001563B0();
        LSC_Finish_x001563B0();
        ADXCRS_Lock_x001563B0();
        SVM_DelCbSvr_x001563B0(2, 1);
        SVM_DelCbSvr_x001563B0(4, adxt_fssvr_id_x001563B0);
        SVM_DelCbSvr_x001563B0(5, adxt_svr_id_x001563B0);
        SVM_Finish_x001563B0();
        ADXSJD_Finish_x001563B0();
        ADXERR_Finish_x001563B0();
        SJMEM_Finish_x001563B0();
        SJRBF_Finish_x001563B0();
        SJUNI_Finish_x001563B0();
        ADXCRS_Unlock_x001563B0();
        dtx_send_sw_x001563B0 = 1;
    }
}
typedef unsigned char Uint8_x00156488;
typedef signed int Sint32_x00156488;
typedef char Char8_x00156488;
typedef struct SJ_OBJ_x00156488 *SJ_x00156488;
typedef struct {
        Uint8_x00156488 *data;
        Sint32_x00156488 len;
} SJCK_x00156488;
typedef struct {
        Uint8_x00156488 data[16];
} SJUUID_x00156488;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00156488 sj);
        const SJUUID_x00156488 *(*GetUuid)(SJ_x00156488 sj);
        void (*Reset)(SJ_x00156488 sj);
        void (*GetChunk)(SJ_x00156488 sj, Sint32_x00156488 id, Sint32_x00156488 nbyte, SJCK_x00156488 *ck);
        void (*UngetChunk)(SJ_x00156488 sj, Sint32_x00156488 id, SJCK_x00156488 *ck);
        void (*PutChunk)(SJ_x00156488 sj, Sint32_x00156488 id, SJCK_x00156488 *ck);
        Sint32_x00156488 (*GetNumData)(SJ_x00156488 sj, Sint32_x00156488 id);
        Sint32_x00156488 (*IsGetChunk)(SJ_x00156488 sj, Sint32_x00156488 id, Sint32_x00156488 nbyte, Sint32_x00156488 *rbyte);
        void (*EntryErrFunc)(SJ_x00156488 sj, void (*func)(void *obj, Char8_x00156488 *msg), void *obj);
} SJ_IF_x00156488;
struct SJ_OBJ_x00156488 {
        SJ_IF_x00156488 *vtbl;
};
SJ_x00156488 SJRBF_Create_x00156488(void *buf, Sint32_x00156488 bsize, Sint32_x00156488 xsize) __asm__("func_0016E120");
extern SJ_x00156488 func_004ed600_x00156488(void *buf, Sint32_x00156488 bsize) __asm__("func_0016DBE0");
typedef struct {
        Uint8_x00156488 pad[0x14];
        SJ_x00156488 sji;
} ADXT_OBJ_x00156488;
extern void ADXSJE_Init_x00156488(void) __asm__("func_0015BE08");
extern void ADXSJE_Finish_x00156488(void) __asm__("func_0015BE38");
extern void *ADXSJE_Create_x00156488(Sint32_x00156488 nsj, SJ_x00156488 *sjs, SJ_x00156488 sjo) __asm__("func_0015BE68");
extern void ADXSJE_Destroy_x00156488(void *sje) __asm__("func_0015C038");
extern void ADXSJE_SetConfigSfa_x00156488(void *sje, Sint32_x00156488 a, Sint32_x00156488 b, Sint32_x00156488 c) __asm__("func_0015C418");
extern void ADXSJE_Start_x00156488(void *sje) __asm__("func_0015C0A8");
extern void ADXSJE_Stop_x00156488(void *sje) __asm__("func_0015C1D0");
extern void ADXSJE_ExecServer_x00156488(void) __asm__("func_0015C770");
extern Uint8_x00156488 adxt_dmybuf_x00156488[0x40] __asm__("D_00405C58");
extern Uint8_x00156488 adxt_hdbuf_x00156488[0x400] __asm__("D_00405858");
void func_00156488_x00156488(ADXT_OBJ_x00156488 *adxt, Sint32_x00156488 a, Sint32_x00156488 b, Sint32_x00156488 c) __asm__("func_00156488");
/* ADXT_InsertHdrSfa: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/adx_insh.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_00156488_x00156488(ADXT_OBJ_x00156488 *adxt, Sint32_x00156488 a, Sint32_x00156488 b, Sint32_x00156488 c)
{
        SJ_x00156488 sjs[2];
        SJCK_x00156488 ck;
        SJCK_x00156488 ck2;
        SJ_x00156488 sjo;
        SJ_x00156488 sji;
        void *sje;
        ADXSJE_Init_x00156488();
        sjo = SJRBF_Create_x00156488(adxt_hdbuf_x00156488, 0x400, 0);
        sjs[0] = func_004ed600_x00156488(adxt_dmybuf_x00156488, 0x20);
        sjs[1] = func_004ed600_x00156488(adxt_dmybuf_x00156488 + 0x20, 0x20);
        sji = adxt->sji;
        sje = ADXSJE_Create_x00156488(2, sjs, sjo);
        ADXSJE_SetConfigSfa_x00156488(sje, a, b, c);
        ADXSJE_Start_x00156488(sje);
        ADXSJE_ExecServer_x00156488();
        (*(sjo)->vtbl->GetChunk)(sjo, 1, 0x400, &ck);
        if (ck.len == 0) {
                for (;;) {
                }
        }
        (*(sji)->vtbl->GetChunk)(sji, 0, ck.len, &ck2);
        if (ck2.len < ck.len) {
                for (;;) {
                }
        }
        memcpy(ck2.data, ck.data, ck.len);
        (*(sjo)->vtbl->PutChunk)(sjo, 0, &ck);
        (*(sji)->vtbl->PutChunk)(sji, 1, &ck2);
        ADXSJE_Stop_x00156488(sje);
        ADXSJE_Destroy_x00156488(sje);
        (*(sjo)->vtbl->Destroy)(sjo);
        (*(sjs[1])->vtbl->Destroy)(sjs[1]);
        (*(sjs[0])->vtbl->Destroy)(sjs[0]);
        ADXSJE_Finish_x00156488();
}
typedef int s32_x00156688;
typedef s32_x00156688 ptrdiff_t_x00156688;
typedef unsigned char Uint8_x00156688;
typedef char Sint8_x00156688;
typedef unsigned short Uint16_x00156688;
typedef signed short Sint16_x00156688;
typedef unsigned int Uint32_x00156688;
typedef signed int Sint32_x00156688;
typedef Sint32_x00156688 Bool_x00156688;
typedef char Char8_x00156688;
typedef struct _UUID_x00156688 {
    Uint32_x00156688 Data1;
    Uint16_x00156688 Data2;
    Uint16_x00156688 Data3;
    Uint8_x00156688 Data4[8];
} UUID_x00156688;
typedef struct {
        Sint8_x00156688 *data;
        Sint32_x00156688 len;
} SJCK_x00156688;
typedef struct {
        struct _sj_vtbl_x00156688 *vtbl;
} SJ_OBJ_x00156688;
typedef SJ_OBJ_x00156688 *SJ_x00156688;
typedef struct _sj_vtbl_x00156688 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00156688 sj);
        UUID_x00156688 *(*GetUuid)(SJ_x00156688 sj);
        void (*Reset)(SJ_x00156688 sj);
        void (*GetChunk)(SJ_x00156688 sj, Sint32_x00156688 id, Sint32_x00156688 nbyte, SJCK_x00156688 *ck);
        void (*UngetChunk)(SJ_x00156688 sj, Sint32_x00156688 id, SJCK_x00156688 *ck);
        void (*PutChunk)(SJ_x00156688 sj, Sint32_x00156688 id, SJCK_x00156688 *ck);
        Sint32_x00156688 (*GetNumData)(SJ_x00156688 sj, Sint32_x00156688 id);
        Sint32_x00156688 (*IsGetChunk)(SJ_x00156688 sj, Sint32_x00156688 id, Sint32_x00156688 nbyte, Sint32_x00156688 *rbyte);
        void (*EntryErrFunc)(SJ_x00156688 sj,
                                        void (*func)(void *obj, Sint32_x00156688 ecode), void *obj);
} SJ_IF_x00156688;
extern int* sceCdCallback_x00156688(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x00156688(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00156688;
typedef struct {
               Sint16_x00156688 unk0;
               Sint16_x00156688 unk2;
               Sint16_x00156688 unk4;
               Sint16_x00156688 unk6;
} ADXPD_OBJ_SUB_x00156688;
typedef struct {
               Sint32_x00156688 used;
               Sint32_x00156688 unk4;
               Sint32_x00156688 mode;
               Sint32_x00156688 stat;
               Sint32_x00156688 num_blk;
               Sint32_x00156688 unk14;
               Sint32_x00156688 unk18;
               Sint32_x00156688 unk1C;
               Sint32_x00156688 unk20;
               Sint32_x00156688 unk24;
               ADXPD_OBJ_SUB_x00156688 unk28;
               Sint16_x00156688 unk30;
               Sint16_x00156688 unk32;
               Sint16_x00156688 unk34;
               Sint16_x00156688 unk36;
               Sint16_x00156688 unk38;
               Sint16_x00156688 unk3A;
} ADXPD_OBJ_x00156688;
typedef ADXPD_OBJ_x00156688* ADXPD_x00156688;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00156688;
typedef struct {
               Sint32_x00156688 unk0;
               Sint32_x00156688 unk4;
               Sint32_x00156688 unk8;
               Sint32_x00156688 unkC;
               Sint32_x00156688 unk10;
               void* unk14;
               Sint32_x00156688 unk18;
               Sint32_x00156688 unk1C;
               Sint32_x00156688 unk20;
               Sint32_x00156688 unk24;
               Sint32_x00156688 unk28;
} ADXB_UNK_x00156688;
typedef struct {
               Sint16_x00156688 unk0;
               Sint16_x00156688 unk2;
               Sint32_x00156688 stat;
               ADXPD_x00156688 adxpd;
               Sint8_x00156688 encoding_type;
               Sint8_x00156688 sample_bitdepth;
               Sint8_x00156688 channel_count;
               Sint8_x00156688 block_size;
               Sint32_x00156688 samples_per_block;
               Sint32_x00156688 sample_rate;
               Sint32_x00156688 total_samples;
               Sint16_x00156688 unk1C;
               char pad1E[2];
               Sint32_x00156688 unk20;
               Sint16_x00156688 unk24;
               Sint16_x00156688 unk26;
               Sint32_x00156688 unk28;
               Sint32_x00156688 unk2C;
               Sint32_x00156688 unk30;
               Sint32_x00156688 unk34;
               Sint32_x00156688 unk38;
               void* unk3C;
               Sint32_x00156688 unk40;
               Sint32_x00156688 unk44;
               ADXB_UNK_x00156688 unk48;
               Sint32_x00156688 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00156688*, Sint32_x00156688*, Sint32_x00156688*);
               void* object;
               void (*add_wr)(void*, Sint32_x00156688, Sint32_x00156688);
               Sint32_x00156688 unk84;
               Sint32_x00156688 unk88;
               Sint32_x00156688 unk8C;
               Sint32_x00156688 dec_num_sample;
               Sint32_x00156688 dec_data_len;
               Sint16_x00156688 format;
               Sint16_x00156688 unk9A;
               Sint16_x00156688 unk9C;
               Sint16_x00156688 unk9E;
               Sint16_x00156688 unkA0;
               char padA2[0xE];
               Sint32_x00156688 unkB0;
               Sint32_x00156688 ahx_dec_samples;
               Sint32_x00156688 ahx_dec_frames;
               Sint32_x00156688 unkBC;
               Sint32_x00156688 ac3_dec_samples;
               Sint32_x00156688 ac3_dec_frames;
               Sint32_x00156688 unkC8;
               ADX_UNK_x00156688 unkCC;
               Sint16_x00156688 unkDC;
               Sint16_x00156688 unkDE[2];
               char padE2[2];
               Sint32_x00156688 unkE4;
               char padE8[8];
} ADXB_OBJ_x00156688;
typedef ADXB_OBJ_x00156688* ADXB_x00156688;
typedef struct {
    Sint8_x00156688 used;
    Sint8_x00156688 state;
    Sint8_x00156688 maxnch;
    Sint8_x00156688 unk3;
    ADXB_x00156688 adxb;
    SJ_x00156688 sji;
    SJ_x00156688 sjo[2];
    SJCK_x00156688 unk14;
    SJCK_x00156688 chunks[2];
    Sint32_x00156688 unk2C;
    Sint32_x00156688 unk30;
    Sint32_x00156688 unk34;
    Sint32_x00156688 unk38;
    Sint32_x00156688 trap_num_samples;
    Sint32_x00156688 trap_count;
    Sint32_x00156688 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00156688, Sint8_x00156688*, Sint32_x00156688);
    void* flt_obj;
    Sint8_x00156688 unk58[0x40];
    Sint32_x00156688 unk98;
    Sint32_x00156688 lnkflg;
} ADXSJD_OBJ_x00156688;
typedef ADXSJD_OBJ_x00156688* ADXSJD_x00156688;
typedef struct {
    Sint32_x00156688 unk0;
    SJ_x00156688 sj;
} SJX_UNK_0_x00156688;
typedef struct {
    Sint8_x00156688 used;
    Sint8_x00156688 unk1;
    Sint16_x00156688 unk2;
    SJ_x00156688 sj;
    void* unk8;
    Sint32_x00156688 unkC;
    SJX_UNK_0_x00156688* unk10;
} SJX_OBJ_x00156688;
typedef SJX_OBJ_x00156688* SJX_x00156688;
typedef struct {
    Sint8_x00156688 used;
    char pad1[3];
    void* unk4;
    SJ_x00156688 unk8;
    SJX_x00156688 unkC;
    SJCK_x00156688 chunk;
} PS2PSJ_OBJ_x00156688;
typedef PS2PSJ_OBJ_x00156688* PS2PSJ_x00156688;
typedef struct {
               Sint8_x00156688 unk0;
               Sint8_x00156688 unk1;
               Sint8_x00156688 unk2;
               SJ_x00156688 unk4;
               SJ_x00156688 unk8;
               SJCK_x00156688 unkC;
               SJCK_x00156688 unk14;
               sceSifDmaData_x00156688 dma_data;
               Sint32_x00156688 unk2C;
               Sint32_x00156688 unk30;
               Sint32_x00156688 unk34;
               Sint32_x00156688 unk38;
               Sint32_x00156688 unk3C;
} DTR_OBJ_x00156688;
typedef DTR_OBJ_x00156688* DTR_x00156688;
typedef struct {
    Sint8_x00156688 used;
    Sint32_x00156688 maxnch;
    PS2PSJ_x00156688 psj[2];
    DTR_x00156688 dtr[2];
    SJ_x00156688 sjo[2];
    void* unk20;
    Sint32_x00156688 unk24;
    Sint32_x00156688 unk28;
    Sint32_x00156688 unk2C;
    Sint8_x00156688 unk30;
    Sint8_x00156688 unk31;
    Sint8_x00156688 num_chan;
    Sint8_x00156688 unk33;
    Sint32_x00156688 sfreq;
    Sint32_x00156688 unk38;
    Sint32_x00156688 out_vol;
    Sint32_x00156688 unk40;
    Sint32_x00156688 pan[2];
    Sint32_x00156688 unk4C[2];
    Sint32_x00156688 unk54;
    Sint32_x00156688 unk58;
    Sint8_x00156688 unk5C;
    Sint8_x00156688 unk5D;
    Sint8_x00156688 unk5E;
    Sint8_x00156688 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x00156688;
typedef ADXRNA_OBJ_x00156688* ADXRNA_x00156688;
typedef struct {
    Sint8_x00156688 unk0;
    Sint8_x00156688 stat;
    Sint8_x00156688 read_flg;
    Sint8_x00156688 unk3;
    SJ_x00156688 sj;
    void* cvfs;
    Sint32_x00156688 unkC;
    Sint32_x00156688 file_len;
    Sint32_x00156688 file_sct;
    Sint32_x00156688 unk18;
    Sint32_x00156688 unk1C;
    Sint32_x00156688 unk20;
    SJCK_x00156688 unk24;
    Sint32_x00156688 req_rd_size;
    Sint32_x00156688 eos;
    Uint32_x00156688 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00156688 unk40;
    Sint8_x00156688 pause;
    Sint8_x00156688 unk45;
    Sint8_x00156688 unk46;
    Sint8_x00156688 unk47;
    Sint8_x00156688 unk48;
    Sint8_x00156688 unk49;
    char pad4A[6];
    const Char8_x00156688* fname;
    void* dir;
    Sint32_x00156688 cur_ofst;
    Uint32_x00156688 unk5C;
} ADXSTM_OBJ_x00156688;
typedef ADXSTM_OBJ_x00156688* ADXSTM_x00156688;
typedef struct {
    Sint32_x00156688 id;
    const Char8_x00156688* fname;
    Sint32_x00156688 unk8;
    void* dir;
    Sint32_x00156688 unk10;
    Sint32_x00156688 unk14;
    Sint32_x00156688 stat;
    Sint32_x00156688 rd_sct;
} LSC_STM_x00156688;
typedef struct {
    Sint8_x00156688 used;
    Sint8_x00156688 stat;
    Sint8_x00156688 unk2;
    Sint8_x00156688 lp_flg;
    Sint8_x00156688 unk4;
    SJ_x00156688 sj;
    Sint32_x00156688 unkC;
    Sint32_x00156688 unk10;
    Sint32_x00156688 flow_limit;
    Sint32_x00156688 unk18;
    Sint32_x00156688 last_stm_index;
    Sint32_x00156688 unk20;
    Sint32_x00156688 num_stm;
    ADXSTM_x00156688 stm_hndl;
    Sint32_x00156688 unk2C;
    char pad30[4];
    Sint32_x00156688 unk34;
    LSC_STM_x00156688 stm[16];
} LSC_OBJ_x00156688;
typedef LSC_OBJ_x00156688* LSC_x00156688;
void ADXERR_CallErrFunc1_x00156688(Sint8_x00156688*) __asm__("ADXERR_CallErrFunc1");
void ADXERR_CallErrFunc2_x00156688(Sint8_x00156688*, Sint8_x00156688*) __asm__("func_00154178");
Sint32_x00156688 LSC_EntryFname_x00156688(LSC_x00156688 lsc) __asm__("func_001699D8");
typedef struct _adx_talk_x00156688 {
                   Sint8_x00156688 used;
                   Sint8_x00156688 stat;
                   Sint8_x00156688 pmode;
                   Sint8_x00156688 maxnch;
                   ADXSJD_x00156688 sjd;
                   ADXSTM_x00156688 stm;
                   ADXRNA_x00156688 rna;
                   SJ_x00156688 sjf;
                   SJ_x00156688 sji;
                   SJ_x00156688 sjo[(2)];
                   Sint8_x00156688 *ibuf;
                   Sint32_x00156688 ibuflen;
                   Sint32_x00156688 ibufxlen;
                   Sint16_x00156688 *obuf;
                   Sint32_x00156688 obufsize;
                   Sint32_x00156688 obufdist;
                   Sint32_x00156688 svrfreq;
                   Sint16_x00156688 maxsct;
                   Sint16_x00156688 minsct;
                   Sint16_x00156688 outvol;
                   Sint16_x00156688 outpan[(2)];
                   Sint16_x00156688 unk46;
                   Sint32_x00156688 maxdecsmpl;
                   Sint32_x00156688 lpcnt;
                   Sint32_x00156688 lp_skiplen;
                   Sint32_x00156688 trp;
                   Sint32_x00156688 wpos;
                   Sint32_x00156688 mofst;
                   Sint16_x00156688 ercode;
                   Sint32_x00156688 edecpos;
                   Sint16_x00156688 edeccnt;
                   Sint16_x00156688 eshrtcnt;
                   Sint8_x00156688 lpflg;
                   Sint8_x00156688 autorcvr;
                   Sint8_x00156688 fltmode;
                   Sint8_x00156688 execflag;
                   Sint8_x00156688 pstwait_flag;
                   Sint8_x00156688 pstready_flag;
                   Sint8_x00156688 pause_flag;
                   void *amp;
                   SJ_x00156688 ampsji[(2)];
                   SJ_x00156688 ampsjo[(2)];
                   Sint32_x00156688 time_ofst;
                   Sint32_x00156688 lesct;
                   Sint32_x00156688 trpnsmpl;
                   void *lsc;
                   Sint8_x00156688 lnkflg;
                   Sint8_x00156688 rsv;
                   Sint16_x00156688 rsv2;
                   Uint32_x00156688 tvofst;
                   Uint32_x00156688 svcnt;
                   Uint32_x00156688 decofst;
                   Sint32_x00156688 flush_nsmpl;
                   Sint8_x00156688 unkAC;
                   Sint8_x00156688 padAD[1];
               Char8_x00156688* unkB0;
               Sint32_x00156688 padB4;
               Sint32_x00156688 padB8;
               Sint32_x00156688 padBC;
               Sint32_x00156688 padC0;
} ADX_TALK_x00156688;
typedef ADX_TALK_x00156688 *ADXT_x00156688;
extern void ADXT_EntryErrFunc_x00156688(void (*func)(void *obj, Sint8_x00156688 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x00156688(ADXT_x00156688 adxt,
                void (*f)(void *obj, Sint32_x00156688 ch, void *data, Sint32_x00156688 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x00156688(Bool_x00156688 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x00156688(Bool_x00156688 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x00156688(void (*fn)(void *obj, Char8_x00156688 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x00156688(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern char ext_str0_x00156688[] __asm__("D_00460C48");
extern char ext_str1_x00156688[] __asm__("D_00460C18");
void ADXT_EntryFname_x00156688(ADXT_x00156688 adxt, Char8_x00156688* fname) __asm__("ADXT_EntryFname");
/* ADXT_EntryFname_x00156688: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_EntryFname_x00156688(ADXT_x00156688 adxt, Char8_x00156688* fname) {
    void* lsc = adxt->lsc;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x00156688(ext_str1_x00156688);
        return;
    }
    if (LSC_EntryFname_x00156688(lsc) < 0) {
        ADXERR_CallErrFunc2_x00156688(ext_str0_x00156688, fname);
    }
}
typedef int s32_x001566E8;
typedef s32_x001566E8 ptrdiff_t_x001566E8;
typedef unsigned char Uint8_x001566E8;
typedef char Sint8_x001566E8;
typedef unsigned short Uint16_x001566E8;
typedef signed short Sint16_x001566E8;
typedef unsigned int Uint32_x001566E8;
typedef signed int Sint32_x001566E8;
typedef Sint32_x001566E8 Bool_x001566E8;
typedef char Char8_x001566E8;
typedef struct _UUID_x001566E8 {
    Uint32_x001566E8 Data1;
    Uint16_x001566E8 Data2;
    Uint16_x001566E8 Data3;
    Uint8_x001566E8 Data4[8];
} UUID_x001566E8;
typedef struct {
        Sint8_x001566E8 *data;
        Sint32_x001566E8 len;
} SJCK_x001566E8;
typedef struct {
        struct _sj_vtbl_x001566E8 *vtbl;
} SJ_OBJ_x001566E8;
typedef SJ_OBJ_x001566E8 *SJ_x001566E8;
typedef struct _sj_vtbl_x001566E8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x001566E8 sj);
        UUID_x001566E8 *(*GetUuid)(SJ_x001566E8 sj);
        void (*Reset)(SJ_x001566E8 sj);
        void (*GetChunk)(SJ_x001566E8 sj, Sint32_x001566E8 id, Sint32_x001566E8 nbyte, SJCK_x001566E8 *ck);
        void (*UngetChunk)(SJ_x001566E8 sj, Sint32_x001566E8 id, SJCK_x001566E8 *ck);
        void (*PutChunk)(SJ_x001566E8 sj, Sint32_x001566E8 id, SJCK_x001566E8 *ck);
        Sint32_x001566E8 (*GetNumData)(SJ_x001566E8 sj, Sint32_x001566E8 id);
        Sint32_x001566E8 (*IsGetChunk)(SJ_x001566E8 sj, Sint32_x001566E8 id, Sint32_x001566E8 nbyte, Sint32_x001566E8 *rbyte);
        void (*EntryErrFunc)(SJ_x001566E8 sj,
                                        void (*func)(void *obj, Sint32_x001566E8 ecode), void *obj);
} SJ_IF_x001566E8;
extern int* sceCdCallback_x001566E8(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x001566E8(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x001566E8;
typedef struct {
               Sint16_x001566E8 unk0;
               Sint16_x001566E8 unk2;
               Sint16_x001566E8 unk4;
               Sint16_x001566E8 unk6;
} ADXPD_OBJ_SUB_x001566E8;
typedef struct {
               Sint32_x001566E8 used;
               Sint32_x001566E8 unk4;
               Sint32_x001566E8 mode;
               Sint32_x001566E8 stat;
               Sint32_x001566E8 num_blk;
               Sint32_x001566E8 unk14;
               Sint32_x001566E8 unk18;
               Sint32_x001566E8 unk1C;
               Sint32_x001566E8 unk20;
               Sint32_x001566E8 unk24;
               ADXPD_OBJ_SUB_x001566E8 unk28;
               Sint16_x001566E8 unk30;
               Sint16_x001566E8 unk32;
               Sint16_x001566E8 unk34;
               Sint16_x001566E8 unk36;
               Sint16_x001566E8 unk38;
               Sint16_x001566E8 unk3A;
} ADXPD_OBJ_x001566E8;
typedef ADXPD_OBJ_x001566E8* ADXPD_x001566E8;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x001566E8;
typedef struct {
               Sint32_x001566E8 unk0;
               Sint32_x001566E8 unk4;
               Sint32_x001566E8 unk8;
               Sint32_x001566E8 unkC;
               Sint32_x001566E8 unk10;
               void* unk14;
               Sint32_x001566E8 unk18;
               Sint32_x001566E8 unk1C;
               Sint32_x001566E8 unk20;
               Sint32_x001566E8 unk24;
               Sint32_x001566E8 unk28;
} ADXB_UNK_x001566E8;
typedef struct {
               Sint16_x001566E8 unk0;
               Sint16_x001566E8 unk2;
               Sint32_x001566E8 stat;
               ADXPD_x001566E8 adxpd;
               Sint8_x001566E8 encoding_type;
               Sint8_x001566E8 sample_bitdepth;
               Sint8_x001566E8 channel_count;
               Sint8_x001566E8 block_size;
               Sint32_x001566E8 samples_per_block;
               Sint32_x001566E8 sample_rate;
               Sint32_x001566E8 total_samples;
               Sint16_x001566E8 unk1C;
               char pad1E[2];
               Sint32_x001566E8 unk20;
               Sint16_x001566E8 unk24;
               Sint16_x001566E8 unk26;
               Sint32_x001566E8 unk28;
               Sint32_x001566E8 unk2C;
               Sint32_x001566E8 unk30;
               Sint32_x001566E8 unk34;
               Sint32_x001566E8 unk38;
               void* unk3C;
               Sint32_x001566E8 unk40;
               Sint32_x001566E8 unk44;
               ADXB_UNK_x001566E8 unk48;
               Sint32_x001566E8 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x001566E8*, Sint32_x001566E8*, Sint32_x001566E8*);
               void* object;
               void (*add_wr)(void*, Sint32_x001566E8, Sint32_x001566E8);
               Sint32_x001566E8 unk84;
               Sint32_x001566E8 unk88;
               Sint32_x001566E8 unk8C;
               Sint32_x001566E8 dec_num_sample;
               Sint32_x001566E8 dec_data_len;
               Sint16_x001566E8 format;
               Sint16_x001566E8 unk9A;
               Sint16_x001566E8 unk9C;
               Sint16_x001566E8 unk9E;
               Sint16_x001566E8 unkA0;
               char padA2[0xE];
               Sint32_x001566E8 unkB0;
               Sint32_x001566E8 ahx_dec_samples;
               Sint32_x001566E8 ahx_dec_frames;
               Sint32_x001566E8 unkBC;
               Sint32_x001566E8 ac3_dec_samples;
               Sint32_x001566E8 ac3_dec_frames;
               Sint32_x001566E8 unkC8;
               ADX_UNK_x001566E8 unkCC;
               Sint16_x001566E8 unkDC;
               Sint16_x001566E8 unkDE[2];
               char padE2[2];
               Sint32_x001566E8 unkE4;
               char padE8[8];
} ADXB_OBJ_x001566E8;
typedef ADXB_OBJ_x001566E8* ADXB_x001566E8;
typedef struct {
    Sint8_x001566E8 used;
    Sint8_x001566E8 state;
    Sint8_x001566E8 maxnch;
    Sint8_x001566E8 unk3;
    ADXB_x001566E8 adxb;
    SJ_x001566E8 sji;
    SJ_x001566E8 sjo[2];
    SJCK_x001566E8 unk14;
    SJCK_x001566E8 chunks[2];
    Sint32_x001566E8 unk2C;
    Sint32_x001566E8 unk30;
    Sint32_x001566E8 unk34;
    Sint32_x001566E8 unk38;
    Sint32_x001566E8 trap_num_samples;
    Sint32_x001566E8 trap_count;
    Sint32_x001566E8 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x001566E8, Sint8_x001566E8*, Sint32_x001566E8);
    void* flt_obj;
    Sint8_x001566E8 unk58[0x40];
    Sint32_x001566E8 unk98;
    Sint32_x001566E8 lnkflg;
} ADXSJD_OBJ_x001566E8;
typedef ADXSJD_OBJ_x001566E8* ADXSJD_x001566E8;
typedef struct {
    Sint32_x001566E8 unk0;
    SJ_x001566E8 sj;
} SJX_UNK_0_x001566E8;
typedef struct {
    Sint8_x001566E8 used;
    Sint8_x001566E8 unk1;
    Sint16_x001566E8 unk2;
    SJ_x001566E8 sj;
    void* unk8;
    Sint32_x001566E8 unkC;
    SJX_UNK_0_x001566E8* unk10;
} SJX_OBJ_x001566E8;
typedef SJX_OBJ_x001566E8* SJX_x001566E8;
typedef struct {
    Sint8_x001566E8 used;
    char pad1[3];
    void* unk4;
    SJ_x001566E8 unk8;
    SJX_x001566E8 unkC;
    SJCK_x001566E8 chunk;
} PS2PSJ_OBJ_x001566E8;
typedef PS2PSJ_OBJ_x001566E8* PS2PSJ_x001566E8;
typedef struct {
               Sint8_x001566E8 unk0;
               Sint8_x001566E8 unk1;
               Sint8_x001566E8 unk2;
               SJ_x001566E8 unk4;
               SJ_x001566E8 unk8;
               SJCK_x001566E8 unkC;
               SJCK_x001566E8 unk14;
               sceSifDmaData_x001566E8 dma_data;
               Sint32_x001566E8 unk2C;
               Sint32_x001566E8 unk30;
               Sint32_x001566E8 unk34;
               Sint32_x001566E8 unk38;
               Sint32_x001566E8 unk3C;
} DTR_OBJ_x001566E8;
typedef DTR_OBJ_x001566E8* DTR_x001566E8;
typedef struct {
    Sint8_x001566E8 used;
    Sint32_x001566E8 maxnch;
    PS2PSJ_x001566E8 psj[2];
    DTR_x001566E8 dtr[2];
    SJ_x001566E8 sjo[2];
    void* unk20;
    Sint32_x001566E8 unk24;
    Sint32_x001566E8 unk28;
    Sint32_x001566E8 unk2C;
    Sint8_x001566E8 unk30;
    Sint8_x001566E8 unk31;
    Sint8_x001566E8 num_chan;
    Sint8_x001566E8 unk33;
    Sint32_x001566E8 sfreq;
    Sint32_x001566E8 unk38;
    Sint32_x001566E8 out_vol;
    Sint32_x001566E8 unk40;
    Sint32_x001566E8 pan[2];
    Sint32_x001566E8 unk4C[2];
    Sint32_x001566E8 unk54;
    Sint32_x001566E8 unk58;
    Sint8_x001566E8 unk5C;
    Sint8_x001566E8 unk5D;
    Sint8_x001566E8 unk5E;
    Sint8_x001566E8 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x001566E8;
typedef ADXRNA_OBJ_x001566E8* ADXRNA_x001566E8;
typedef struct {
    Sint8_x001566E8 unk0;
    Sint8_x001566E8 stat;
    Sint8_x001566E8 read_flg;
    Sint8_x001566E8 unk3;
    SJ_x001566E8 sj;
    void* cvfs;
    Sint32_x001566E8 unkC;
    Sint32_x001566E8 file_len;
    Sint32_x001566E8 file_sct;
    Sint32_x001566E8 unk18;
    Sint32_x001566E8 unk1C;
    Sint32_x001566E8 unk20;
    SJCK_x001566E8 unk24;
    Sint32_x001566E8 req_rd_size;
    Sint32_x001566E8 eos;
    Uint32_x001566E8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x001566E8 unk40;
    Sint8_x001566E8 pause;
    Sint8_x001566E8 unk45;
    Sint8_x001566E8 unk46;
    Sint8_x001566E8 unk47;
    Sint8_x001566E8 unk48;
    Sint8_x001566E8 unk49;
    char pad4A[6];
    const Char8_x001566E8* fname;
    void* dir;
    Sint32_x001566E8 cur_ofst;
    Uint32_x001566E8 unk5C;
} ADXSTM_OBJ_x001566E8;
typedef ADXSTM_OBJ_x001566E8* ADXSTM_x001566E8;
typedef struct {
    Sint32_x001566E8 id;
    const Char8_x001566E8* fname;
    Sint32_x001566E8 unk8;
    void* dir;
    Sint32_x001566E8 unk10;
    Sint32_x001566E8 unk14;
    Sint32_x001566E8 stat;
    Sint32_x001566E8 rd_sct;
} LSC_STM_x001566E8;
typedef struct {
    Sint8_x001566E8 used;
    Sint8_x001566E8 stat;
    Sint8_x001566E8 unk2;
    Sint8_x001566E8 lp_flg;
    Sint8_x001566E8 unk4;
    SJ_x001566E8 sj;
    Sint32_x001566E8 unkC;
    Sint32_x001566E8 unk10;
    Sint32_x001566E8 flow_limit;
    Sint32_x001566E8 unk18;
    Sint32_x001566E8 last_stm_index;
    Sint32_x001566E8 unk20;
    Sint32_x001566E8 num_stm;
    ADXSTM_x001566E8 stm_hndl;
    Sint32_x001566E8 unk2C;
    char pad30[4];
    Sint32_x001566E8 unk34;
    LSC_STM_x001566E8 stm[16];
} LSC_OBJ_x001566E8;
typedef LSC_OBJ_x001566E8* LSC_x001566E8;
void ADXERR_CallErrFunc1_x001566E8(Sint8_x001566E8*) __asm__("ADXERR_CallErrFunc1");
void ADXERR_CallErrFunc2_x001566E8(Sint8_x001566E8*, Sint8_x001566E8*) __asm__("func_00154178");
void ADXERR_ItoA2_x001566E8(Sint32_x001566E8, Sint32_x001566E8, Sint8_x001566E8*, Sint32_x001566E8) __asm__("func_001542F0");
Sint32_x001566E8 ADXF_GetFnameRangeEx_x001566E8(Sint32_x001566E8 ptid, Sint32_x001566E8 flid, Char8_x001566E8 *fname, void **dir, Sint32_x001566E8 *ofst, Sint32_x001566E8 *fnsct) __asm__("func_00155E40");
Char8_x001566E8* ADXF_GetFnameFromPt_x001566E8(Sint32_x001566E8) __asm__("func_00155F98");
Sint32_x001566E8 LSC_EntryFileRange_x001566E8(LSC_x001566E8 lsc, const Char8_x001566E8* fname, void* dir, Sint32_x001566E8 ofst, Sint32_x001566E8 fnsct) __asm__("func_00169A00");
typedef struct _adx_talk_x001566E8 {
                   Sint8_x001566E8 used;
                   Sint8_x001566E8 stat;
                   Sint8_x001566E8 pmode;
                   Sint8_x001566E8 maxnch;
                   ADXSJD_x001566E8 sjd;
                   ADXSTM_x001566E8 stm;
                   ADXRNA_x001566E8 rna;
                   SJ_x001566E8 sjf;
                   SJ_x001566E8 sji;
                   SJ_x001566E8 sjo[(2)];
                   Sint8_x001566E8 *ibuf;
                   Sint32_x001566E8 ibuflen;
                   Sint32_x001566E8 ibufxlen;
                   Sint16_x001566E8 *obuf;
                   Sint32_x001566E8 obufsize;
                   Sint32_x001566E8 obufdist;
                   Sint32_x001566E8 svrfreq;
                   Sint16_x001566E8 maxsct;
                   Sint16_x001566E8 minsct;
                   Sint16_x001566E8 outvol;
                   Sint16_x001566E8 outpan[(2)];
                   Sint16_x001566E8 unk46;
                   Sint32_x001566E8 maxdecsmpl;
                   Sint32_x001566E8 lpcnt;
                   Sint32_x001566E8 lp_skiplen;
                   Sint32_x001566E8 trp;
                   Sint32_x001566E8 wpos;
                   Sint32_x001566E8 mofst;
                   Sint16_x001566E8 ercode;
                   Sint32_x001566E8 edecpos;
                   Sint16_x001566E8 edeccnt;
                   Sint16_x001566E8 eshrtcnt;
                   Sint8_x001566E8 lpflg;
                   Sint8_x001566E8 autorcvr;
                   Sint8_x001566E8 fltmode;
                   Sint8_x001566E8 execflag;
                   Sint8_x001566E8 pstwait_flag;
                   Sint8_x001566E8 pstready_flag;
                   Sint8_x001566E8 pause_flag;
                   void *amp;
                   SJ_x001566E8 ampsji[(2)];
                   SJ_x001566E8 ampsjo[(2)];
                   Sint32_x001566E8 time_ofst;
                   Sint32_x001566E8 lesct;
                   Sint32_x001566E8 trpnsmpl;
                   void *lsc;
                   Sint8_x001566E8 lnkflg;
                   Sint8_x001566E8 rsv;
                   Sint16_x001566E8 rsv2;
                   Uint32_x001566E8 tvofst;
                   Uint32_x001566E8 svcnt;
                   Uint32_x001566E8 decofst;
                   Sint32_x001566E8 flush_nsmpl;
                   Sint8_x001566E8 unkAC;
                   Sint8_x001566E8 padAD[1];
               Char8_x001566E8* unkB0;
               Sint32_x001566E8 padB4;
               Sint32_x001566E8 padB8;
               Sint32_x001566E8 padBC;
               Sint32_x001566E8 padC0;
} ADX_TALK_x001566E8;
typedef ADX_TALK_x001566E8 *ADXT_x001566E8;
extern void ADXT_EntryErrFunc_x001566E8(void (*func)(void *obj, Sint8_x001566E8 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x001566E8(ADXT_x001566E8 adxt,
                void (*f)(void *obj, Sint32_x001566E8 ch, void *data, Sint32_x001566E8 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x001566E8(Bool_x001566E8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x001566E8(Bool_x001566E8 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x001566E8(void (*fn)(void *obj, Char8_x001566E8 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x001566E8(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern char ext_str0_x001566E8[] __asm__("D_00460C98");
extern char ext_str1_x001566E8[] __asm__("D_00460C68");
void ADXT_EntryAfs_x001566E8(ADXT_x001566E8 adxt, Sint32_x001566E8 patid, Sint32_x001566E8 fid) __asm__("ADXT_EntryAfs");
/* ADXT_EntryAfs_x001566E8: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_EntryAfs_x001566E8(ADXT_x001566E8 adxt, Sint32_x001566E8 patid, Sint32_x001566E8 fid) {
    Char8_x001566E8 error[16];
    void* dir;
    Sint32_x001566E8 ofst;
    Sint32_x001566E8 fnsct;
    void* lsc = adxt->lsc;
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x001566E8(ext_str1_x001566E8);
        return;
    }
    if (ADXF_GetFnameRangeEx_x001566E8(patid, fid, adxt->unkB0, &dir, &ofst, &fnsct) == 0) {
        LSC_EntryFileRange_x001566E8(lsc, ADXF_GetFnameFromPt_x001566E8(patid), dir, ofst, fnsct);
        return;
    }
    ADXERR_ItoA2_x001566E8(patid, fid, error, 16);
    ADXERR_CallErrFunc2_x001566E8(ext_str0_x001566E8, error);
}
void ADXT_StartSeamless(u8 *arg0) {
    s32 temp_s1;
    u8 **temp_a0;

    temp_s1 = *(s32 *)((u8 *)arg0 + 0x94);
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460CC0);
        return;
    }
    func_0015E650();
    func_00152508();
    func_0015E408(arg0, *(s32 *)((u8 *)arg0 + 0x10));
    temp_a0 = *(u8 ***)((u8 *)arg0 + 0x14);
    (*(s32 (**)(u8 **))((u8 *)(*temp_a0) + 0x14))(temp_a0);
    *(s8 *)((u8 *)arg0 + 2) = 4;
    func_0016A020(temp_s1, *(s16 *)((u8 *)arg0 + 0x3E) << 0xB);
    func_00152520();
    func_00169BD8(temp_s1);
    func_0015FB70(arg0, 1);
}
void ADXT_SetSeamlessLp(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460CF0);
        return;
    }
    func_0016A130(*(s32 *)((u8 *)arg0 + 0x94));
}
typedef int s32_x00156890;
typedef s32_x00156890 ptrdiff_t_x00156890;
typedef unsigned char Uint8_x00156890;
typedef char Sint8_x00156890;
typedef unsigned short Uint16_x00156890;
typedef signed short Sint16_x00156890;
typedef unsigned int Uint32_x00156890;
typedef signed int Sint32_x00156890;
typedef Sint32_x00156890 Bool_x00156890;
typedef char Char8_x00156890;
typedef struct _UUID_x00156890 {
    Uint32_x00156890 Data1;
    Uint16_x00156890 Data2;
    Uint16_x00156890 Data3;
    Uint8_x00156890 Data4[8];
} UUID_x00156890;
typedef struct {
        Sint8_x00156890 *data;
        Sint32_x00156890 len;
} SJCK_x00156890;
typedef struct {
        struct _sj_vtbl_x00156890 *vtbl;
} SJ_OBJ_x00156890;
typedef SJ_OBJ_x00156890 *SJ_x00156890;
typedef struct _sj_vtbl_x00156890 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00156890 sj);
        UUID_x00156890 *(*GetUuid)(SJ_x00156890 sj);
        void (*Reset)(SJ_x00156890 sj);
        void (*GetChunk)(SJ_x00156890 sj, Sint32_x00156890 id, Sint32_x00156890 nbyte, SJCK_x00156890 *ck);
        void (*UngetChunk)(SJ_x00156890 sj, Sint32_x00156890 id, SJCK_x00156890 *ck);
        void (*PutChunk)(SJ_x00156890 sj, Sint32_x00156890 id, SJCK_x00156890 *ck);
        Sint32_x00156890 (*GetNumData)(SJ_x00156890 sj, Sint32_x00156890 id);
        Sint32_x00156890 (*IsGetChunk)(SJ_x00156890 sj, Sint32_x00156890 id, Sint32_x00156890 nbyte, Sint32_x00156890 *rbyte);
        void (*EntryErrFunc)(SJ_x00156890 sj,
                                        void (*func)(void *obj, Sint32_x00156890 ecode), void *obj);
} SJ_IF_x00156890;
extern int* sceCdCallback_x00156890(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x00156890(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00156890;
typedef struct {
               Sint16_x00156890 unk0;
               Sint16_x00156890 unk2;
               Sint16_x00156890 unk4;
               Sint16_x00156890 unk6;
} ADXPD_OBJ_SUB_x00156890;
typedef struct {
               Sint32_x00156890 used;
               Sint32_x00156890 unk4;
               Sint32_x00156890 mode;
               Sint32_x00156890 stat;
               Sint32_x00156890 num_blk;
               Sint32_x00156890 unk14;
               Sint32_x00156890 unk18;
               Sint32_x00156890 unk1C;
               Sint32_x00156890 unk20;
               Sint32_x00156890 unk24;
               ADXPD_OBJ_SUB_x00156890 unk28;
               Sint16_x00156890 unk30;
               Sint16_x00156890 unk32;
               Sint16_x00156890 unk34;
               Sint16_x00156890 unk36;
               Sint16_x00156890 unk38;
               Sint16_x00156890 unk3A;
} ADXPD_OBJ_x00156890;
typedef ADXPD_OBJ_x00156890* ADXPD_x00156890;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00156890;
typedef struct {
               Sint32_x00156890 unk0;
               Sint32_x00156890 unk4;
               Sint32_x00156890 unk8;
               Sint32_x00156890 unkC;
               Sint32_x00156890 unk10;
               void* unk14;
               Sint32_x00156890 unk18;
               Sint32_x00156890 unk1C;
               Sint32_x00156890 unk20;
               Sint32_x00156890 unk24;
               Sint32_x00156890 unk28;
} ADXB_UNK_x00156890;
typedef struct {
               Sint16_x00156890 unk0;
               Sint16_x00156890 unk2;
               Sint32_x00156890 stat;
               ADXPD_x00156890 adxpd;
               Sint8_x00156890 encoding_type;
               Sint8_x00156890 sample_bitdepth;
               Sint8_x00156890 channel_count;
               Sint8_x00156890 block_size;
               Sint32_x00156890 samples_per_block;
               Sint32_x00156890 sample_rate;
               Sint32_x00156890 total_samples;
               Sint16_x00156890 unk1C;
               char pad1E[2];
               Sint32_x00156890 unk20;
               Sint16_x00156890 unk24;
               Sint16_x00156890 unk26;
               Sint32_x00156890 unk28;
               Sint32_x00156890 unk2C;
               Sint32_x00156890 unk30;
               Sint32_x00156890 unk34;
               Sint32_x00156890 unk38;
               void* unk3C;
               Sint32_x00156890 unk40;
               Sint32_x00156890 unk44;
               ADXB_UNK_x00156890 unk48;
               Sint32_x00156890 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00156890*, Sint32_x00156890*, Sint32_x00156890*);
               void* object;
               void (*add_wr)(void*, Sint32_x00156890, Sint32_x00156890);
               Sint32_x00156890 unk84;
               Sint32_x00156890 unk88;
               Sint32_x00156890 unk8C;
               Sint32_x00156890 dec_num_sample;
               Sint32_x00156890 dec_data_len;
               Sint16_x00156890 format;
               Sint16_x00156890 unk9A;
               Sint16_x00156890 unk9C;
               Sint16_x00156890 unk9E;
               Sint16_x00156890 unkA0;
               char padA2[0xE];
               Sint32_x00156890 unkB0;
               Sint32_x00156890 ahx_dec_samples;
               Sint32_x00156890 ahx_dec_frames;
               Sint32_x00156890 unkBC;
               Sint32_x00156890 ac3_dec_samples;
               Sint32_x00156890 ac3_dec_frames;
               Sint32_x00156890 unkC8;
               ADX_UNK_x00156890 unkCC;
               Sint16_x00156890 unkDC;
               Sint16_x00156890 unkDE[2];
               char padE2[2];
               Sint32_x00156890 unkE4;
               char padE8[8];
} ADXB_OBJ_x00156890;
typedef ADXB_OBJ_x00156890* ADXB_x00156890;
typedef struct {
    Sint8_x00156890 used;
    Sint8_x00156890 state;
    Sint8_x00156890 maxnch;
    Sint8_x00156890 unk3;
    ADXB_x00156890 adxb;
    SJ_x00156890 sji;
    SJ_x00156890 sjo[2];
    SJCK_x00156890 unk14;
    SJCK_x00156890 chunks[2];
    Sint32_x00156890 unk2C;
    Sint32_x00156890 unk30;
    Sint32_x00156890 unk34;
    Sint32_x00156890 unk38;
    Sint32_x00156890 trap_num_samples;
    Sint32_x00156890 trap_count;
    Sint32_x00156890 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00156890, Sint8_x00156890*, Sint32_x00156890);
    void* flt_obj;
    Sint8_x00156890 unk58[0x40];
    Sint32_x00156890 unk98;
    Sint32_x00156890 lnkflg;
} ADXSJD_OBJ_x00156890;
typedef ADXSJD_OBJ_x00156890* ADXSJD_x00156890;
typedef struct {
    Sint32_x00156890 unk0;
    SJ_x00156890 sj;
} SJX_UNK_0_x00156890;
typedef struct {
    Sint8_x00156890 used;
    Sint8_x00156890 unk1;
    Sint16_x00156890 unk2;
    SJ_x00156890 sj;
    void* unk8;
    Sint32_x00156890 unkC;
    SJX_UNK_0_x00156890* unk10;
} SJX_OBJ_x00156890;
typedef SJX_OBJ_x00156890* SJX_x00156890;
typedef struct {
    Sint8_x00156890 used;
    char pad1[3];
    void* unk4;
    SJ_x00156890 unk8;
    SJX_x00156890 unkC;
    SJCK_x00156890 chunk;
} PS2PSJ_OBJ_x00156890;
typedef PS2PSJ_OBJ_x00156890* PS2PSJ_x00156890;
typedef struct {
               Sint8_x00156890 unk0;
               Sint8_x00156890 unk1;
               Sint8_x00156890 unk2;
               SJ_x00156890 unk4;
               SJ_x00156890 unk8;
               SJCK_x00156890 unkC;
               SJCK_x00156890 unk14;
               sceSifDmaData_x00156890 dma_data;
               Sint32_x00156890 unk2C;
               Sint32_x00156890 unk30;
               Sint32_x00156890 unk34;
               Sint32_x00156890 unk38;
               Sint32_x00156890 unk3C;
} DTR_OBJ_x00156890;
typedef DTR_OBJ_x00156890* DTR_x00156890;
typedef struct {
    Sint8_x00156890 used;
    Sint32_x00156890 maxnch;
    PS2PSJ_x00156890 psj[2];
    DTR_x00156890 dtr[2];
    SJ_x00156890 sjo[2];
    void* unk20;
    Sint32_x00156890 unk24;
    Sint32_x00156890 unk28;
    Sint32_x00156890 unk2C;
    Sint8_x00156890 unk30;
    Sint8_x00156890 unk31;
    Sint8_x00156890 num_chan;
    Sint8_x00156890 unk33;
    Sint32_x00156890 sfreq;
    Sint32_x00156890 unk38;
    Sint32_x00156890 out_vol;
    Sint32_x00156890 unk40;
    Sint32_x00156890 pan[2];
    Sint32_x00156890 unk4C[2];
    Sint32_x00156890 unk54;
    Sint32_x00156890 unk58;
    Sint8_x00156890 unk5C;
    Sint8_x00156890 unk5D;
    Sint8_x00156890 unk5E;
    Sint8_x00156890 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x00156890;
typedef ADXRNA_OBJ_x00156890* ADXRNA_x00156890;
typedef struct {
    Sint8_x00156890 unk0;
    Sint8_x00156890 stat;
    Sint8_x00156890 read_flg;
    Sint8_x00156890 unk3;
    SJ_x00156890 sj;
    void* cvfs;
    Sint32_x00156890 unkC;
    Sint32_x00156890 file_len;
    Sint32_x00156890 file_sct;
    Sint32_x00156890 unk18;
    Sint32_x00156890 unk1C;
    Sint32_x00156890 unk20;
    SJCK_x00156890 unk24;
    Sint32_x00156890 req_rd_size;
    Sint32_x00156890 eos;
    Uint32_x00156890 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00156890 unk40;
    Sint8_x00156890 pause;
    Sint8_x00156890 unk45;
    Sint8_x00156890 unk46;
    Sint8_x00156890 unk47;
    Sint8_x00156890 unk48;
    Sint8_x00156890 unk49;
    char pad4A[6];
    const Char8_x00156890* fname;
    void* dir;
    Sint32_x00156890 cur_ofst;
    Uint32_x00156890 unk5C;
} ADXSTM_OBJ_x00156890;
typedef ADXSTM_OBJ_x00156890* ADXSTM_x00156890;
typedef struct {
    Sint32_x00156890 id;
    const Char8_x00156890* fname;
    Sint32_x00156890 unk8;
    void* dir;
    Sint32_x00156890 unk10;
    Sint32_x00156890 unk14;
    Sint32_x00156890 stat;
    Sint32_x00156890 rd_sct;
} LSC_STM_x00156890;
typedef struct {
    Sint8_x00156890 used;
    Sint8_x00156890 stat;
    Sint8_x00156890 unk2;
    Sint8_x00156890 lp_flg;
    Sint8_x00156890 unk4;
    SJ_x00156890 sj;
    Sint32_x00156890 unkC;
    Sint32_x00156890 unk10;
    Sint32_x00156890 flow_limit;
    Sint32_x00156890 unk18;
    Sint32_x00156890 last_stm_index;
    Sint32_x00156890 unk20;
    Sint32_x00156890 num_stm;
    ADXSTM_x00156890 stm_hndl;
    Sint32_x00156890 unk2C;
    char pad30[4];
    Sint32_x00156890 unk34;
    LSC_STM_x00156890 stm[16];
} LSC_OBJ_x00156890;
typedef LSC_OBJ_x00156890* LSC_x00156890;
void ADXERR_CallErrFunc1_x00156890(Sint8_x00156890*) __asm__("ADXERR_CallErrFunc1");
void LSC_Stop_x00156890(LSC_x00156890 lsc) __asm__("func_00169C40");
typedef struct _adx_talk_x00156890 {
                   Sint8_x00156890 used;
                   Sint8_x00156890 stat;
                   Sint8_x00156890 pmode;
                   Sint8_x00156890 maxnch;
                   ADXSJD_x00156890 sjd;
                   ADXSTM_x00156890 stm;
                   ADXRNA_x00156890 rna;
                   SJ_x00156890 sjf;
                   SJ_x00156890 sji;
                   SJ_x00156890 sjo[(2)];
                   Sint8_x00156890 *ibuf;
                   Sint32_x00156890 ibuflen;
                   Sint32_x00156890 ibufxlen;
                   Sint16_x00156890 *obuf;
                   Sint32_x00156890 obufsize;
                   Sint32_x00156890 obufdist;
                   Sint32_x00156890 svrfreq;
                   Sint16_x00156890 maxsct;
                   Sint16_x00156890 minsct;
                   Sint16_x00156890 outvol;
                   Sint16_x00156890 outpan[(2)];
                   Sint16_x00156890 unk46;
                   Sint32_x00156890 maxdecsmpl;
                   Sint32_x00156890 lpcnt;
                   Sint32_x00156890 lp_skiplen;
                   Sint32_x00156890 trp;
                   Sint32_x00156890 wpos;
                   Sint32_x00156890 mofst;
                   Sint16_x00156890 ercode;
                   Sint32_x00156890 edecpos;
                   Sint16_x00156890 edeccnt;
                   Sint16_x00156890 eshrtcnt;
                   Sint8_x00156890 lpflg;
                   Sint8_x00156890 autorcvr;
                   Sint8_x00156890 fltmode;
                   Sint8_x00156890 execflag;
                   Sint8_x00156890 pstwait_flag;
                   Sint8_x00156890 pstready_flag;
                   Sint8_x00156890 pause_flag;
                   void *amp;
                   SJ_x00156890 ampsji[(2)];
                   SJ_x00156890 ampsjo[(2)];
                   Sint32_x00156890 time_ofst;
                   Sint32_x00156890 lesct;
                   Sint32_x00156890 trpnsmpl;
                   void *lsc;
                   Sint8_x00156890 lnkflg;
                   Sint8_x00156890 rsv;
                   Sint16_x00156890 rsv2;
                   Uint32_x00156890 tvofst;
                   Uint32_x00156890 svcnt;
                   Uint32_x00156890 decofst;
                   Sint32_x00156890 flush_nsmpl;
                   Sint8_x00156890 unkAC;
                   Sint8_x00156890 padAD[1];
               Char8_x00156890* unkB0;
               Sint32_x00156890 padB4;
               Sint32_x00156890 padB8;
               Sint32_x00156890 padBC;
               Sint32_x00156890 padC0;
} ADX_TALK_x00156890;
typedef ADX_TALK_x00156890 *ADXT_x00156890;
extern void ADXT_EntryErrFunc_x00156890(void (*func)(void *obj, Sint8_x00156890 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x00156890(ADXT_x00156890 adxt,
                void (*f)(void *obj, Sint32_x00156890 ch, void *data, Sint32_x00156890 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
void ADXT_EntryFname_x00156890(ADXT_x00156890 adxt, Char8_x00156890 *fname) __asm__("ADXT_EntryFname");
void ADXT_StartSeamless_x00156890(ADXT_x00156890 adxt) __asm__("ADXT_StartSeamless");
extern void ADXM_SetCbUsrVsync_x00156890(Bool_x00156890 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x00156890(Bool_x00156890 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x00156890(void (*fn)(void *obj, Char8_x00156890 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x00156890(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void LSC_SetLpFlg_x00156890(void*, Sint32_x00156890) __asm__("func_0016A130");
void ADXT_EntryFname_x00156890(ADXT_x00156890 adxt, Char8_x00156890* fname) __asm__("ADXT_EntryFname");
void ADXT_StartSeamless_x00156890(ADXT_x00156890 adxt) __asm__("ADXT_StartSeamless");
extern char ext_str0_x00156890[] __asm__("D_00460D20");
void ADXT_StartFnameLp_x00156890(ADX_TALK_x00156890* adxt, Char8_x00156890* fname) __asm__("ADXT_StartFnameLp");
/* ADXT_StartFnameLp_x00156890: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_StartFnameLp_x00156890(ADX_TALK_x00156890* adxt, Char8_x00156890* fname) {
    void* lsc;
    if (adxt == 0 || fname == 0) {
        ADXERR_CallErrFunc1_x00156890(ext_str0_x00156890);
        return;
    }
    lsc = adxt->lsc;
    LSC_Stop_x00156890(lsc);
    ADXT_EntryFname_x00156890(adxt, fname);
    LSC_SetLpFlg_x00156890(lsc, 1);
    ADXT_StartSeamless_x00156890(adxt);
}
void func_00156918(void) {

}
s32 ADXT_GetNumFiles(u8 *arg0) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460D50);
        return -1;
    }
    return func_00169D98(*(s32 *)((u8 *)arg0 + 0x94));
}
typedef int s32_x00156958;
typedef s32_x00156958 ptrdiff_t_x00156958;
typedef unsigned char Uint8_x00156958;
typedef char Sint8_x00156958;
typedef unsigned short Uint16_x00156958;
typedef signed short Sint16_x00156958;
typedef unsigned int Uint32_x00156958;
typedef signed int Sint32_x00156958;
typedef Sint32_x00156958 Bool_x00156958;
typedef char Char8_x00156958;
typedef struct _UUID_x00156958 {
    Uint32_x00156958 Data1;
    Uint16_x00156958 Data2;
    Uint16_x00156958 Data3;
    Uint8_x00156958 Data4[8];
} UUID_x00156958;
typedef struct {
        Sint8_x00156958 *data;
        Sint32_x00156958 len;
} SJCK_x00156958;
typedef struct {
        struct _sj_vtbl_x00156958 *vtbl;
} SJ_OBJ_x00156958;
typedef SJ_OBJ_x00156958 *SJ_x00156958;
typedef struct _sj_vtbl_x00156958 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00156958 sj);
        UUID_x00156958 *(*GetUuid)(SJ_x00156958 sj);
        void (*Reset)(SJ_x00156958 sj);
        void (*GetChunk)(SJ_x00156958 sj, Sint32_x00156958 id, Sint32_x00156958 nbyte, SJCK_x00156958 *ck);
        void (*UngetChunk)(SJ_x00156958 sj, Sint32_x00156958 id, SJCK_x00156958 *ck);
        void (*PutChunk)(SJ_x00156958 sj, Sint32_x00156958 id, SJCK_x00156958 *ck);
        Sint32_x00156958 (*GetNumData)(SJ_x00156958 sj, Sint32_x00156958 id);
        Sint32_x00156958 (*IsGetChunk)(SJ_x00156958 sj, Sint32_x00156958 id, Sint32_x00156958 nbyte, Sint32_x00156958 *rbyte);
        void (*EntryErrFunc)(SJ_x00156958 sj,
                                        void (*func)(void *obj, Sint32_x00156958 ecode), void *obj);
} SJ_IF_x00156958;
extern int* sceCdCallback_x00156958(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x00156958(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x00156958;
typedef struct {
               Sint16_x00156958 unk0;
               Sint16_x00156958 unk2;
               Sint16_x00156958 unk4;
               Sint16_x00156958 unk6;
} ADXPD_OBJ_SUB_x00156958;
typedef struct {
               Sint32_x00156958 used;
               Sint32_x00156958 unk4;
               Sint32_x00156958 mode;
               Sint32_x00156958 stat;
               Sint32_x00156958 num_blk;
               Sint32_x00156958 unk14;
               Sint32_x00156958 unk18;
               Sint32_x00156958 unk1C;
               Sint32_x00156958 unk20;
               Sint32_x00156958 unk24;
               ADXPD_OBJ_SUB_x00156958 unk28;
               Sint16_x00156958 unk30;
               Sint16_x00156958 unk32;
               Sint16_x00156958 unk34;
               Sint16_x00156958 unk36;
               Sint16_x00156958 unk38;
               Sint16_x00156958 unk3A;
} ADXPD_OBJ_x00156958;
typedef ADXPD_OBJ_x00156958* ADXPD_x00156958;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00156958;
typedef struct {
               Sint32_x00156958 unk0;
               Sint32_x00156958 unk4;
               Sint32_x00156958 unk8;
               Sint32_x00156958 unkC;
               Sint32_x00156958 unk10;
               void* unk14;
               Sint32_x00156958 unk18;
               Sint32_x00156958 unk1C;
               Sint32_x00156958 unk20;
               Sint32_x00156958 unk24;
               Sint32_x00156958 unk28;
} ADXB_UNK_x00156958;
typedef struct {
               Sint16_x00156958 unk0;
               Sint16_x00156958 unk2;
               Sint32_x00156958 stat;
               ADXPD_x00156958 adxpd;
               Sint8_x00156958 encoding_type;
               Sint8_x00156958 sample_bitdepth;
               Sint8_x00156958 channel_count;
               Sint8_x00156958 block_size;
               Sint32_x00156958 samples_per_block;
               Sint32_x00156958 sample_rate;
               Sint32_x00156958 total_samples;
               Sint16_x00156958 unk1C;
               char pad1E[2];
               Sint32_x00156958 unk20;
               Sint16_x00156958 unk24;
               Sint16_x00156958 unk26;
               Sint32_x00156958 unk28;
               Sint32_x00156958 unk2C;
               Sint32_x00156958 unk30;
               Sint32_x00156958 unk34;
               Sint32_x00156958 unk38;
               void* unk3C;
               Sint32_x00156958 unk40;
               Sint32_x00156958 unk44;
               ADXB_UNK_x00156958 unk48;
               Sint32_x00156958 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00156958*, Sint32_x00156958*, Sint32_x00156958*);
               void* object;
               void (*add_wr)(void*, Sint32_x00156958, Sint32_x00156958);
               Sint32_x00156958 unk84;
               Sint32_x00156958 unk88;
               Sint32_x00156958 unk8C;
               Sint32_x00156958 dec_num_sample;
               Sint32_x00156958 dec_data_len;
               Sint16_x00156958 format;
               Sint16_x00156958 unk9A;
               Sint16_x00156958 unk9C;
               Sint16_x00156958 unk9E;
               Sint16_x00156958 unkA0;
               char padA2[0xE];
               Sint32_x00156958 unkB0;
               Sint32_x00156958 ahx_dec_samples;
               Sint32_x00156958 ahx_dec_frames;
               Sint32_x00156958 unkBC;
               Sint32_x00156958 ac3_dec_samples;
               Sint32_x00156958 ac3_dec_frames;
               Sint32_x00156958 unkC8;
               ADX_UNK_x00156958 unkCC;
               Sint16_x00156958 unkDC;
               Sint16_x00156958 unkDE[2];
               char padE2[2];
               Sint32_x00156958 unkE4;
               char padE8[8];
} ADXB_OBJ_x00156958;
typedef ADXB_OBJ_x00156958* ADXB_x00156958;
typedef struct {
    Sint8_x00156958 used;
    Sint8_x00156958 state;
    Sint8_x00156958 maxnch;
    Sint8_x00156958 unk3;
    ADXB_x00156958 adxb;
    SJ_x00156958 sji;
    SJ_x00156958 sjo[2];
    SJCK_x00156958 unk14;
    SJCK_x00156958 chunks[2];
    Sint32_x00156958 unk2C;
    Sint32_x00156958 unk30;
    Sint32_x00156958 unk34;
    Sint32_x00156958 unk38;
    Sint32_x00156958 trap_num_samples;
    Sint32_x00156958 trap_count;
    Sint32_x00156958 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00156958, Sint8_x00156958*, Sint32_x00156958);
    void* flt_obj;
    Sint8_x00156958 unk58[0x40];
    Sint32_x00156958 unk98;
    Sint32_x00156958 lnkflg;
} ADXSJD_OBJ_x00156958;
typedef ADXSJD_OBJ_x00156958* ADXSJD_x00156958;
typedef struct {
    Sint32_x00156958 unk0;
    SJ_x00156958 sj;
} SJX_UNK_0_x00156958;
typedef struct {
    Sint8_x00156958 used;
    Sint8_x00156958 unk1;
    Sint16_x00156958 unk2;
    SJ_x00156958 sj;
    void* unk8;
    Sint32_x00156958 unkC;
    SJX_UNK_0_x00156958* unk10;
} SJX_OBJ_x00156958;
typedef SJX_OBJ_x00156958* SJX_x00156958;
typedef struct {
    Sint8_x00156958 used;
    char pad1[3];
    void* unk4;
    SJ_x00156958 unk8;
    SJX_x00156958 unkC;
    SJCK_x00156958 chunk;
} PS2PSJ_OBJ_x00156958;
typedef PS2PSJ_OBJ_x00156958* PS2PSJ_x00156958;
typedef struct {
               Sint8_x00156958 unk0;
               Sint8_x00156958 unk1;
               Sint8_x00156958 unk2;
               SJ_x00156958 unk4;
               SJ_x00156958 unk8;
               SJCK_x00156958 unkC;
               SJCK_x00156958 unk14;
               sceSifDmaData_x00156958 dma_data;
               Sint32_x00156958 unk2C;
               Sint32_x00156958 unk30;
               Sint32_x00156958 unk34;
               Sint32_x00156958 unk38;
               Sint32_x00156958 unk3C;
} DTR_OBJ_x00156958;
typedef DTR_OBJ_x00156958* DTR_x00156958;
typedef struct {
    Sint8_x00156958 used;
    Sint32_x00156958 maxnch;
    PS2PSJ_x00156958 psj[2];
    DTR_x00156958 dtr[2];
    SJ_x00156958 sjo[2];
    void* unk20;
    Sint32_x00156958 unk24;
    Sint32_x00156958 unk28;
    Sint32_x00156958 unk2C;
    Sint8_x00156958 unk30;
    Sint8_x00156958 unk31;
    Sint8_x00156958 num_chan;
    Sint8_x00156958 unk33;
    Sint32_x00156958 sfreq;
    Sint32_x00156958 unk38;
    Sint32_x00156958 out_vol;
    Sint32_x00156958 unk40;
    Sint32_x00156958 pan[2];
    Sint32_x00156958 unk4C[2];
    Sint32_x00156958 unk54;
    Sint32_x00156958 unk58;
    Sint8_x00156958 unk5C;
    Sint8_x00156958 unk5D;
    Sint8_x00156958 unk5E;
    Sint8_x00156958 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x00156958;
typedef ADXRNA_OBJ_x00156958* ADXRNA_x00156958;
typedef struct {
    Sint8_x00156958 unk0;
    Sint8_x00156958 stat;
    Sint8_x00156958 read_flg;
    Sint8_x00156958 unk3;
    SJ_x00156958 sj;
    void* cvfs;
    Sint32_x00156958 unkC;
    Sint32_x00156958 file_len;
    Sint32_x00156958 file_sct;
    Sint32_x00156958 unk18;
    Sint32_x00156958 unk1C;
    Sint32_x00156958 unk20;
    SJCK_x00156958 unk24;
    Sint32_x00156958 req_rd_size;
    Sint32_x00156958 eos;
    Uint32_x00156958 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00156958 unk40;
    Sint8_x00156958 pause;
    Sint8_x00156958 unk45;
    Sint8_x00156958 unk46;
    Sint8_x00156958 unk47;
    Sint8_x00156958 unk48;
    Sint8_x00156958 unk49;
    char pad4A[6];
    const Char8_x00156958* fname;
    void* dir;
    Sint32_x00156958 cur_ofst;
    Uint32_x00156958 unk5C;
} ADXSTM_OBJ_x00156958;
typedef ADXSTM_OBJ_x00156958* ADXSTM_x00156958;
void ADXERR_CallErrFunc1_x00156958(Sint8_x00156958*) __asm__("ADXERR_CallErrFunc1");
typedef struct _adx_talk_x00156958 {
                   Sint8_x00156958 used;
                   Sint8_x00156958 stat;
                   Sint8_x00156958 pmode;
                   Sint8_x00156958 maxnch;
                   ADXSJD_x00156958 sjd;
                   ADXSTM_x00156958 stm;
                   ADXRNA_x00156958 rna;
                   SJ_x00156958 sjf;
                   SJ_x00156958 sji;
                   SJ_x00156958 sjo[(2)];
                   Sint8_x00156958 *ibuf;
                   Sint32_x00156958 ibuflen;
                   Sint32_x00156958 ibufxlen;
                   Sint16_x00156958 *obuf;
                   Sint32_x00156958 obufsize;
                   Sint32_x00156958 obufdist;
                   Sint32_x00156958 svrfreq;
                   Sint16_x00156958 maxsct;
                   Sint16_x00156958 minsct;
                   Sint16_x00156958 outvol;
                   Sint16_x00156958 outpan[(2)];
                   Sint16_x00156958 unk46;
                   Sint32_x00156958 maxdecsmpl;
                   Sint32_x00156958 lpcnt;
                   Sint32_x00156958 lp_skiplen;
                   Sint32_x00156958 trp;
                   Sint32_x00156958 wpos;
                   Sint32_x00156958 mofst;
                   Sint16_x00156958 ercode;
                   Sint32_x00156958 edecpos;
                   Sint16_x00156958 edeccnt;
                   Sint16_x00156958 eshrtcnt;
                   Sint8_x00156958 lpflg;
                   Sint8_x00156958 autorcvr;
                   Sint8_x00156958 fltmode;
                   Sint8_x00156958 execflag;
                   Sint8_x00156958 pstwait_flag;
                   Sint8_x00156958 pstready_flag;
                   Sint8_x00156958 pause_flag;
                   void *amp;
                   SJ_x00156958 ampsji[(2)];
                   SJ_x00156958 ampsjo[(2)];
                   Sint32_x00156958 time_ofst;
                   Sint32_x00156958 lesct;
                   Sint32_x00156958 trpnsmpl;
                   void *lsc;
                   Sint8_x00156958 lnkflg;
                   Sint8_x00156958 rsv;
                   Sint16_x00156958 rsv2;
                   Uint32_x00156958 tvofst;
                   Uint32_x00156958 svcnt;
                   Uint32_x00156958 decofst;
                   Sint32_x00156958 flush_nsmpl;
                   Sint8_x00156958 unkAC;
                   Sint8_x00156958 padAD[1];
               Char8_x00156958* unkB0;
               Sint32_x00156958 padB4;
               Sint32_x00156958 padB8;
               Sint32_x00156958 padBC;
               Sint32_x00156958 padC0;
} ADX_TALK_x00156958;
typedef ADX_TALK_x00156958 *ADXT_x00156958;
extern void ADXT_EntryErrFunc_x00156958(void (*func)(void *obj, Sint8_x00156958 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x00156958(ADXT_x00156958 adxt,
                void (*f)(void *obj, Sint32_x00156958 ch, void *data, Sint32_x00156958 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x00156958(Bool_x00156958 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x00156958(Bool_x00156958 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x00156958(void (*fn)(void *obj, Char8_x00156958 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x00156958(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
void LSC_ResetEntry_x00156958(void*) __asm__("func_00169B98");
extern char ext_str0_x00156958[] __asm__("D_00460D80");
void ADXT_ResetEntry_x00156958(ADXT_x00156958 adxt) __asm__("ADXT_ResetEntry");
/* ADXT_ResetEntry_x00156958: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_lsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void ADXT_ResetEntry_x00156958(ADXT_x00156958 adxt) {
    if (adxt == 0) {
        ADXERR_CallErrFunc1_x00156958(ext_str0_x00156958);
        return;
    }
    if (adxt->stat != (0)) {
        return;
    }
    LSC_ResetEntry_x00156958(adxt->lsc);
}
typedef signed int Sint32_x00156998;
extern Sint32_x00156998 SVM_SetCbSvr_x00156998(Sint32_x00156998, Sint32_x00156998 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00156998(Sint32_x00156998, Sint32_x00156998, Sint32_x00156998 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
int ChangeThreadPriority_x00156998(int, int) __asm__("ChangeThreadPriority");
int GetThreadId_x00156998(void) __asm__("GetThreadId");
extern int AddIntcHandler_x00156998(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00156998(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00156998 adxm_save_tprm_x00156998[12] __asm__("D_00405CB0");
extern Sint32_x00156998 adxm_lock_level_x00156998 __asm__("D_00405CE0");
extern Sint32_x00156998 volatile adxm_id_safe_x00156998 __asm__("D_00405D38");
extern Sint32_x00156998 adxm_cur_prio_x00156998 __asm__("D_0040D5D0");
extern Sint32_x00156998 adxm_cur_tid_x00156998 __asm__("D_0040D5D4");
Sint32_x00156998 adxm_ResumeThread_x00156998(Sint32_x00156998 tid) __asm__("func_00157170");
Sint32_x00156998 adxm_ResumeThread_x00156998(Sint32_x00156998 tid) __asm__("func_00157170");
void func_00156998_x00156998() __asm__("func_00156998");
/* _adxm_lock: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00156998_x00156998() {
    if (adxm_lock_level_x00156998 == 0) {
        Sint32_x00156998 tid = GetThreadId_x00156998();
        adxm_cur_prio_x00156998 = ChangeThreadPriority_x00156998(tid, adxm_save_tprm_x00156998[0]);
        adxm_cur_tid_x00156998 = tid;
        adxm_ResumeThread_x00156998(adxm_id_safe_x00156998);
        adxm_id_safe_x00156998;
        adxm_lock_level_x00156998 += 1;
        adxm_lock_level_x00156998 -= 1;
    }
    adxm_lock_level_x00156998 += 1;
}
typedef signed int Sint32_x00156A20;
extern Sint32_x00156A20 SVM_SetCbSvr_x00156A20(Sint32_x00156A20, Sint32_x00156A20 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00156A20(Sint32_x00156A20, Sint32_x00156A20, Sint32_x00156A20 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
int ChangeThreadPriority_x00156A20(int, int) __asm__("ChangeThreadPriority");
int GetThreadId_x00156A20(void) __asm__("GetThreadId");
extern int AddIntcHandler_x00156A20(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00156A20(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00156A20 adxm_lock_level_x00156A20 __asm__("D_00405CE0");
extern Sint32_x00156A20 volatile adxm_id_safe_x00156A20 __asm__("D_00405D38");
extern Sint32_x00156A20 adxm_cur_prio_x00156A20 __asm__("D_0040D5D0");
Sint32_x00156A20 adxm_SuspendThread_x00156A20(Sint32_x00156A20 tid) __asm__("func_001571D8");
Sint32_x00156A20 adxm_SuspendThread_x00156A20(Sint32_x00156A20 tid) __asm__("func_001571D8");
void func_00156A20_x00156A20() __asm__("func_00156A20");
/* _adxm_unlock: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00156A20_x00156A20() {
    if (--adxm_lock_level_x00156A20 == 0) {
        adxm_SuspendThread_x00156A20(adxm_id_safe_x00156A20);
        adxm_id_safe_x00156A20;
        ChangeThreadPriority_x00156A20(GetThreadId_x00156A20(), adxm_cur_prio_x00156A20);
    }
    if (adxm_lock_level_x00156A20 < 0) {
        adxm_lock_level_x00156A20 = 0;
    }
}
typedef signed int Sint32_x00156A90;
typedef char Char8_x00156A90;
extern Sint32_x00156A90 SVM_SetCbSvr_x00156A90(Sint32_x00156A90, Sint32_x00156A90 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00156A90(Sint32_x00156A90, Sint32_x00156A90, Sint32_x00156A90 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
void SVM_CallErr1_x00156A90(const Char8_x00156A90* msg) __asm__("func_00170118");
int ChangeThreadPriority_x00156A90(int, int) __asm__("ChangeThreadPriority");
extern int AddIntcHandler_x00156A90(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00156A90(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00156A90 adxm_save_tprm_x00156A90[12] __asm__("D_00405CB0");
extern Sint32_x00156A90 volatile adxm_goto_border_flag_x00156A90 __asm__("D_00405CE4");
Sint32_x00156A90 adxm_ResumeThread_x00156A90(Sint32_x00156A90 tid) __asm__("func_00157170");
Sint32_x00156A90 adxm_SuspendThread_x00156A90(Sint32_x00156A90 tid) __asm__("func_001571D8");
void adxm_WakeupThread_x00156A90(Sint32_x00156A90 tid) __asm__("func_00157108");
void adxm_WakeupThread_x00156A90(Sint32_x00156A90 tid) __asm__("func_00157108");
Sint32_x00156A90 adxm_ResumeThread_x00156A90(Sint32_x00156A90 tid) __asm__("func_00157170");
Sint32_x00156A90 adxm_SuspendThread_x00156A90(Sint32_x00156A90 tid) __asm__("func_001571D8");
extern char ext_str0_x00156A90[] __asm__("D_00460DE0");
void func_00156A90_x00156A90(Sint32_x00156A90 tid, Sint32_x00156A90 priority) __asm__("func_00156A90");
/* adxm_goto_svr_border: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00156A90_x00156A90(Sint32_x00156A90 tid, Sint32_x00156A90 priority) {
    Sint32_x00156A90 var_s0;
    if (tid != 0) {
        adxm_goto_border_flag_x00156A90 = 1;
        ChangeThreadPriority_x00156A90(tid, adxm_save_tprm_x00156A90[0]);
        for (var_s0 = 0; var_s0 < 200000000; var_s0++) {
            adxm_WakeupThread_x00156A90(tid);
            adxm_ResumeThread_x00156A90(tid);
            if (adxm_goto_border_flag_x00156A90 == 0) {
                break;
            }
        }
        if (var_s0 == 200000000) {
            SVM_CallErr1_x00156A90(ext_str0_x00156A90);
        }
        ChangeThreadPriority_x00156A90(tid, priority);
        adxm_SuspendThread_x00156A90(tid);
        while (0) {
        }
    }
}
s32 func_00156A90_x00156B68(s32, s32) __asm__("func_00156A90");
extern volatile s32 D_00405D4C_x00156B68 __asm__("D_00405D4C");
extern s32 D_00405CC8_x00156B68 __asm__("D_00405CC8");
s32 func_00156B68_x00156B68(void) __asm__("func_00156B68");
s32 func_00156B68_x00156B68(void)
{
    return func_00156A90_x00156B68(D_00405D4C_x00156B68, D_00405CC8_x00156B68);
}
s32 func_00156A90_x00156B90(s32, s32) __asm__("func_00156A90");
extern volatile s32 D_00405D50_x00156B90 __asm__("D_00405D50");
extern s32 D_00405CCC_x00156B90 __asm__("D_00405CCC");
s32 func_00156B90_x00156B90(void) __asm__("func_00156B90");
s32 func_00156B90_x00156B90(void)
{
    return func_00156A90_x00156B90(D_00405D50_x00156B90, D_00405CCC_x00156B90);
}
void func_00156BB8(void) {
    D_00405D00 += 1;
}
typedef signed int Sint32_x00156BD0;
typedef signed long Sint64_x00156BD0;
extern Sint32_x00156BD0 SVM_SetCbSvr_x00156BD0(Sint32_x00156BD0, Sint32_x00156BD0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00156BD0(Sint32_x00156BD0, Sint32_x00156BD0, Sint32_x00156BD0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
void ExitDeleteThread_x00156BD0(void) __asm__("ExitDeleteThread");
extern int AddIntcHandler_x00156BD0(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00156BD0(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint64_x00156BD0 volatile adxm_safe_loop_x00156BD0 __asm__("D_00405D58");
extern Sint64_x00156BD0 volatile adxm_safe_exit_x00156BD0 __asm__("D_00405D60");
void adxm_safe_trap_x00156BD0() __asm__("func_00156BB8");
void func_00156BD0_x00156BD0() __asm__("func_00156BD0");
/* adxm_safe_proc: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00156BD0_x00156BD0() {
    while (adxm_safe_loop_x00156BD0 == 0) {
        adxm_safe_trap_x00156BD0();
    }
    adxm_safe_exit_x00156BD0 = 1;
    ExitDeleteThread_x00156BD0();
}
void ExitDeleteThread_x00156C28(void) __asm__("ExitDeleteThread");
int SVM_ExecSvrUsrVsync_x00156C28(void) __asm__("func_00170818");
typedef struct SfdSj_x00156C28 SfdSj_x00156C28;
typedef struct SfdSjChunk_x00156C28 {
    char *data;
    int len;
} SfdSjChunk_x00156C28;
typedef struct SfdSjVtbl_x00156C28 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00156C28 *sj);
    int (*getUuid)(SfdSj_x00156C28 *sj);
    void (*reset)(SfdSj_x00156C28 *sj);
    void (*getChunk)(SfdSj_x00156C28 *sj, int id, int n, SfdSjChunk_x00156C28 *ck);
    void (*ungetChunk)(SfdSj_x00156C28 *sj, int id, SfdSjChunk_x00156C28 *ck);
    void (*putChunk)(SfdSj_x00156C28 *sj, int id, SfdSjChunk_x00156C28 *ck);
    int (*getNumData)(SfdSj_x00156C28 *sj, int id);
} SfdSjVtbl_x00156C28;
struct SfdSj_x00156C28 {
    SfdSjVtbl_x00156C28 *vtbl;
};
typedef struct AdxPdObj_x00156C28 {
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
} AdxPdObj_x00156C28;
typedef struct AdxDecPara_x00156C28 {
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
} AdxDecPara_x00156C28;
struct Pl2Enc_x00156C28;
typedef struct AdxbObj_x00156C28 AdxbObj_x00156C28;
typedef short *(*AdxbGetWrFunc_x00156C28)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00156C28)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00156C28 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00156C28 *xpd;
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
    AdxDecPara_x00156C28 dp;
    AdxbGetWrFunc_x00156C28 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00156C28 addwrfunc;
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
    struct Pl2Enc_x00156C28 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00156C28(AdxbObj_x00156C28 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00156C28 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00156C28 *adxb;
    SfdSj_x00156C28 *sji;
    SfdSj_x00156C28 *sjo[2];
    SfdSjChunk_x00156C28 cki;
    SfdSjChunk_x00156C28 cko[2];
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
} AdxSjdObj_x00156C28;
extern void ADXSJD_EntryFltFunc_x00156C28(AdxSjdObj_x00156C28 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00156C28(AdxSjdObj_x00156C28 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00156C28)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00156C28)(CvFsErrFn_x00156C28 func, void *obj);
typedef int (*CvFsPathFn_x00156C28)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00156C28)(void);
typedef int (*CvFsOpenFn_x00156C28)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00156C28)(int fd);
typedef int (*CvFsFdIntFn_x00156C28)(int fd);
typedef int (*CvFsSeekFn_x00156C28)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00156C28)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00156C28)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00156C28)(void);
typedef int (*CvFsLoadDirInfoFn_x00156C28)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00156C28)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00156C28)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00156C28 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00156C28 entry_err_func;
    CvFsPathFn_x00156C28 get_file_size;
    CvFsGetFreeSizeFn_x00156C28 get_free_size;
    CvFsOpenFn_x00156C28 open;
    CvFsFdFn_x00156C28 close;
    CvFsSeekFn_x00156C28 seek;
    CvFsFdIntFn_x00156C28 tell;
    CvFsXferFn_x00156C28 req_rd;
    CvFsXferFn_x00156C28 req_wr;
    CvFsFdFn_x00156C28 stop_tr;
    CvFsFdIntFn_x00156C28 get_stat;
    CvFsFdIntFn_x00156C28 get_sct_len;
    CvFsSetSctLenFn_x00156C28 set_sct_len;
    CvFsFdIntFn_x00156C28 get_num_tr;
    CvFsPathFn_x00156C28 change_dir;
    CvFsPathFn_x00156C28 is_exist_file;
    CvFsGetNumFilesFn_x00156C28 get_num_files;
    CvFsLoadDirInfoFn_x00156C28 load_dir_info;
    CvFsFdIntFn_x00156C28 get_max_byte_rate;
    CvFsPathFn_x00156C28 make_dir;
    CvFsPathFn_x00156C28 remove_dir;
    CvFsPathFn_x00156C28 delete_file;
    CvFsGetFileSizeExFn_x00156C28 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00156C28 opt_fn2;
} CvFsVtbl_x00156C28;
typedef struct CvFsHandle_x00156C28 {
    CvFsVtbl_x00156C28 *vtbl;
    int fd;
} CvFsHandle_x00156C28;
extern CvFsVtbl_x00156C28 *addDevice_x00156C28(char *devname, CvFsVtbl_x00156C28 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00156C28 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00156C28 *sj;
    CvFsHandle_x00156C28 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00156C28 rdck;
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
} AdxStmObj_x00156C28;
extern void ADXSTM_EntryEosFunc_x00156C28(AdxStmObj_x00156C28 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
extern volatile int adxm_usrvsync_busy_x00156C28 __asm__("D_00405CEC");
extern long long adxm_usrvsync_count_x00156C28 __asm__("D_00405D08");
extern volatile long long adxm_usrvsync_exit_request_x00156C28 __asm__("D_00405D68");
extern volatile long long adxm_usrvsync_exited_x00156C28 __asm__("D_00405D70");
void adxm_SleepThread_x00156C28(void) __asm__("func_00157158");
void adxm_SleepThread_x00156C28(void) __asm__("func_00157158");
void func_00156C28_x00156C28(void *arg) __asm__("func_00156C28");
/* adxm_usrvsync_proc: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00156C28_x00156C28(void *arg) {
    while (adxm_usrvsync_exit_request_x00156C28 == 0) {
        adxm_usrvsync_count_x00156C28++;
        do { (adxm_usrvsync_busy_x00156C28) = 1; } while (0);
        SVM_ExecSvrUsrVsync_x00156C28();
        adxm_usrvsync_busy_x00156C28 = 0;
        adxm_SleepThread_x00156C28();
    }
    adxm_usrvsync_exited_x00156C28 = 1;
    ExitDeleteThread_x00156C28();
}
extern volatile long D_003C8178_x00156CC0 __asm__("D_00405D78");
extern volatile long D_003C8180_x00156CC0 __asm__("D_00405D80");
extern volatile long D_003C8110_x00156CC0 __asm__("D_00405D10");
extern volatile long D_003C8118_x00156CC0 __asm__("D_003C8118");
extern volatile long D_003C8120_x00156CC0 __asm__("D_003C8120");
extern volatile int D_003C80E8_x00156CC0 __asm__("D_00405CE8");
extern volatile int D_003C8148_x00156CC0 __asm__("D_003C8148");
extern volatile int D_003C814C_x00156CC0 __asm__("D_00405D4C");
extern volatile int D_003C8150_x00156CC0 __asm__("D_00405D50");
extern volatile int D_003C81C8_x00156CC0 __asm__("D_00405DC8");
extern void SleepThread_3252E0_x00156CC0(void) __asm__("func_00157158");
extern void ExitDeleteThread_x00156CC0(void) __asm__("ExitDeleteThread");
extern int func_00325360_x00156CC0(int thid) __asm__("func_001571D8");
extern void func_00325E78_x00156CC0(void) __asm__("func_00158090");
extern void func_00325FD8_x00156CC0(void) __asm__("func_00158630");
extern int GetD003C80A8_325610_x00156CC0(void) __asm__("func_00157610");
extern void Forward33BC48_33BD48_x00156CC0(void) __asm__("func_00170830");
void func_00325E78_x00156CC0(void) __asm__("func_00158090");
void func_00156CC0_x00156CC0(void) __asm__("func_00156CC0");
/* func_00324F08: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00324eb0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00156CC0_x00156CC0(void)
{
    while (D_003C8178_x00156CC0 == 0) {
        D_003C8110_x00156CC0++;
        func_00325360_x00156CC0(D_003C814C_x00156CC0);
        if (D_003C81C8_x00156CC0 == 0) {
            func_00325FD8_x00156CC0();
        }
        D_003C81C8_x00156CC0 = 0;
        if (GetD003C80A8_325610_x00156CC0() == 1) {
            func_00325360_x00156CC0(D_003C8150_x00156CC0);
        }
        func_00325E78_x00156CC0();
        D_003C80E8_x00156CC0 = 1;
        Forward33BC48_33BD48_x00156CC0();
        D_003C80E8_x00156CC0 = 0;
        SleepThread_3252E0_x00156CC0();
    }
    D_003C8180_x00156CC0 = 1;
    ExitDeleteThread_x00156CC0();
}
typedef unsigned long u_long_x00156DC8;
typedef unsigned short Uint16_x00156DC8;
typedef signed int Sint32_x00156DC8;
typedef signed long Sint64_x00156DC8;
extern Sint32_x00156DC8 SVM_SetCbSvr_x00156DC8(Sint32_x00156DC8, Sint32_x00156DC8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00156DC8(Sint32_x00156DC8, Sint32_x00156DC8, Sint32_x00156DC8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
Sint32_x00156DC8 SVM_ExecSvrFs_x00156DC8() __asm__("func_00170860");
void ExitDeleteThread_x00156DC8(void) __asm__("ExitDeleteThread");
extern int AddIntcHandler_x00156DC8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00156DC8(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00156DC8 volatile adxm_fsproc_exec_flag_x00156DC8 __asm__("D_00405CF0");
extern Sint64_x00156DC8 volatile adxm_fs_cnt_x00156DC8 __asm__("D_00405D18");
extern Sint64_x00156DC8 volatile adxm_fs_loop_x00156DC8 __asm__("D_00405D88");
extern Sint64_x00156DC8 volatile adxm_fs_exit_x00156DC8 __asm__("D_00405D90");
extern Uint16_x00156DC8 adxm_debug_bgcl_x00156DC8 __asm__("D_00405DC4");
void adxm_SleepThread_x00156DC8() __asm__("func_00157158");
void adxm_SleepThread_x00156DC8() __asm__("func_00157158");
void func_00156DC8_x00156DC8() __asm__("func_00156DC8");
/* adxm_fs_proc: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00156DC8_x00156DC8() {
    while (adxm_fs_loop_x00156DC8 == 0) {
        adxm_fs_cnt_x00156DC8 += 1;
        adxm_fsproc_exec_flag_x00156DC8 = 1;
        if (adxm_debug_bgcl_x00156DC8 != 0) {
            *((volatile u_long_x00156DC8*)(0x120000e0)) = adxm_debug_bgcl_x00156DC8;
        }
        SVM_ExecSvrFs_x00156DC8();
        if (adxm_debug_bgcl_x00156DC8 != 0) {
            *((volatile u_long_x00156DC8*)(0x120000e0)) = 0;
        }
        adxm_fsproc_exec_flag_x00156DC8 = 0;
        adxm_SleepThread_x00156DC8();
    }
    adxm_fs_exit_x00156DC8 = 1;
    ExitDeleteThread_x00156DC8();
}
extern volatile long D_003C8198_x00156EA8 __asm__("D_00405D98");
extern volatile long D_003C81A0_x00156EA8 __asm__("D_00405DA0");
extern volatile long D_003C8110_x00156EA8 __asm__("D_003C8110");
extern volatile long D_003C8118_x00156EA8 __asm__("D_003C8118");
extern volatile long D_003C8120_x00156EA8 __asm__("D_00405D20");
extern volatile int D_003C80E4_x00156EA8 __asm__("D_00405CE4");
extern volatile int D_003C80F4_x00156EA8 __asm__("D_00405CF4");
extern volatile int D_003C8148_x00156EA8 __asm__("D_003C8148");
extern volatile int D_003C814C_x00156EA8 __asm__("D_003C814C");
extern volatile int D_003C8150_x00156EA8 __asm__("D_00405D50");
extern volatile int D_003C81C8_x00156EA8 __asm__("D_00405DC8");
extern void SleepThread_3252E0_x00156EA8(void) __asm__("func_00157158");
extern void ExitDeleteThread_x00156EA8(void) __asm__("ExitDeleteThread");
extern void func_00325290_x00156EA8(int thid) __asm__("func_00157108");
extern void func_00325FD8_x00156EA8(void) __asm__("func_00158630");
extern int GetD003C80A8_325610_x00156EA8(void) __asm__("func_00157610");
extern int Forward33BC48_33BDA8_x00156EA8(void) __asm__("func_00170890");
extern int adxm_ResumeThread_x00156EA8(int tid) __asm__("func_00157170");
void func_00156EA8_x00156EA8(void) __asm__("func_00156EA8");
/* func_00325100: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00324eb0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00156EA8_x00156EA8(void)
{
    int busy;
    while (D_003C8198_x00156EA8 == 0) {
        D_003C8120_x00156EA8++;
        D_003C80F4_x00156EA8 = 1;
        busy = Forward33BC48_33BDA8_x00156EA8();
        D_003C80F4_x00156EA8 = 0;
        if (D_003C80E4_x00156EA8 == 1) {
            D_003C80E4_x00156EA8 = 0;
            SleepThread_3252E0_x00156EA8();
        }
        if (busy == 0) {
            if (GetD003C80A8_325610_x00156EA8() == 1) {
                if (adxm_ResumeThread_x00156EA8(D_003C8150_x00156EA8) == D_003C8150_x00156EA8) {
                    func_00325290_x00156EA8(D_003C8150_x00156EA8);
                }
            }
            if (D_003C80E4_x00156EA8 != 1) {
                func_00325FD8_x00156EA8();
                D_003C81C8_x00156EA8 = 1;
            }
            SleepThread_3252E0_x00156EA8();
        }
    }
    D_003C81A0_x00156EA8 = 1;
    ExitDeleteThread_x00156EA8();
}
s32 ExitDeleteThread_x00156FE0() __asm__("ExitDeleteThread");
s32 func_00157158_x00156FE0() __asm__("func_00157158");
s32 func_001708A8_x00156FE0() __asm__("func_001708A8");
extern volatile s32 D_00405CE4_x00156FE0 __asm__("D_00405CE4");
extern volatile s32 D_00405CF8_x00156FE0 __asm__("D_00405CF8");
extern volatile s64 D_00405D28_x00156FE0 __asm__("D_00405D28");
extern volatile s64 D_00405DA8_x00156FE0 __asm__("D_00405DA8");
extern volatile s64 D_00405DB0_x00156FE0 __asm__("D_00405DB0");
void func_00156FE0_x00156FE0(void) __asm__("func_00156FE0");
void func_00156FE0_x00156FE0(void) {
    s32 temp_v0;

    if (D_00405DA8_x00156FE0 == 0) {
        do {
            D_00405D28_x00156FE0 += 1;
            D_00405CF8_x00156FE0 = 1;
            temp_v0 = func_001708A8_x00156FE0();
            D_00405CF8_x00156FE0 = 0;
            if (D_00405CE4_x00156FE0 == 1) {
                D_00405CE4_x00156FE0 = 0;
                func_00157158_x00156FE0();
            }
            if (temp_v0 == 0) {
                func_00157158_x00156FE0();
            }
        } while (D_00405DA8_x00156FE0 == 0);
    }
    D_00405DB0_x00156FE0 = 1;
    ExitDeleteThread_x00156FE0();
}
typedef signed int s32_x001570B8;
s32_x001570B8 iReferThreadStatus_x001570B8(s32_x001570B8 id, s32_x001570B8 *status) __asm__("iReferThreadStatus");
s32_x001570B8 iWakeupThread_x001570B8(s32_x001570B8 id) __asm__("iWakeupThread");
void func_001570B8_x001570B8(s32_x001570B8 a0) __asm__("func_001570B8");
void func_001570B8_x001570B8(s32_x001570B8 a0)
{
    s32_x001570B8 status[12];

    if (a0 == 0) {
        return;
    }
    iReferThreadStatus_x001570B8(a0, status);
    if (status[0] == 4 || status[0] == 12) {
        iWakeupThread_x001570B8(a0);
    }
}
typedef signed int s32_x00157108;
s32_x00157108 ReferThreadStatus_x00157108(s32_x00157108 id, s32_x00157108 *status) __asm__("ReferThreadStatus");
s32_x00157108 WakeupThread_x00157108(s32_x00157108 id) __asm__("WakeupThread");
void func_00157108_x00157108(s32_x00157108 a0) __asm__("func_00157108");
void func_00157108_x00157108(s32_x00157108 a0)
{
    s32_x00157108 status[12];

    if (a0 == 0) {
        return;
    }
    ReferThreadStatus_x00157108(a0, status);
    if (status[0] == 4 || status[0] == 12) {
        WakeupThread_x00157108(a0);
    }
}
void func_00157158(void) {
    SleepThread();
}
typedef unsigned int u_int_x00157170;
typedef signed int Sint32_x00157170;
extern Sint32_x00157170 SVM_SetCbSvr_x00157170(Sint32_x00157170, Sint32_x00157170 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00157170(Sint32_x00157170, Sint32_x00157170, Sint32_x00157170 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
struct ThreadParam_x00157170 {
    int status;
    void (*entry)(void*);
    void* stack;
    int stackSize;
    void* gpReg;
    int initPriority;
    int currentPriority;
    u_int_x00157170 attr;
    u_int_x00157170 option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int ReferThreadStatus_x00157170(int, struct ThreadParam_x00157170*) __asm__("ReferThreadStatus");
int ResumeThread_x00157170(int) __asm__("ResumeThread");
extern int AddIntcHandler_x00157170(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00157170(int, int (*)(int), int) __asm__("AddDmacHandler");
Sint32_x00157170 func_00157170_x00157170(Sint32_x00157170 tid) __asm__("func_00157170");
/* adxm_ResumeThread: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00157170 func_00157170_x00157170(Sint32_x00157170 tid) {
    struct ThreadParam_x00157170 param;
    Sint32_x00157170 ret = 0;
    if (tid != 0) {
        ReferThreadStatus_x00157170(tid, &param);
        if ((param.status == 0x08) || (param.status == 0x0c)) {
            ret = ResumeThread_x00157170(tid);
        } else {
            ret = 0;
        }
    }
    return ret;
}
typedef unsigned int u_int_x001571D8;
typedef signed int Sint32_x001571D8;
extern Sint32_x001571D8 SVM_SetCbSvr_x001571D8(Sint32_x001571D8, Sint32_x001571D8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001571D8(Sint32_x001571D8, Sint32_x001571D8, Sint32_x001571D8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
struct ThreadParam_x001571D8 {
    int status;
    void (*entry)(void*);
    void* stack;
    int stackSize;
    void* gpReg;
    int initPriority;
    int currentPriority;
    u_int_x001571D8 attr;
    u_int_x001571D8 option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int ReferThreadStatus_x001571D8(int, struct ThreadParam_x001571D8*) __asm__("ReferThreadStatus");
int SuspendThread_x001571D8(int) __asm__("SuspendThread");
extern int AddIntcHandler_x001571D8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001571D8(int, int (*)(int), int) __asm__("AddDmacHandler");
Sint32_x001571D8 func_001571D8_x001571D8(Sint32_x001571D8 tid) __asm__("func_001571D8");
/* adxm_SuspendThread: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001571D8 func_001571D8_x001571D8(Sint32_x001571D8 tid) {
    struct ThreadParam_x001571D8 param;
    Sint32_x001571D8 ret = 0;
    if (tid != 0) {
        ReferThreadStatus_x001571D8(tid, &param);
        if ((param.status != 0x08) && (param.status != 0x0c)) {
            ret = SuspendThread_x001571D8(tid);
        }
    }
    return ret;
}
typedef unsigned int u_int_x00157238;
typedef signed int Sint32_x00157238;
extern Sint32_x00157238 SVM_SetCbSvr_x00157238(Sint32_x00157238, Sint32_x00157238 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00157238(Sint32_x00157238, Sint32_x00157238, Sint32_x00157238 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
struct ThreadParam_x00157238 {
    int status;
    void (*entry)(void*);
    void* stack;
    int stackSize;
    void* gpReg;
    int initPriority;
    int currentPriority;
    u_int_x00157238 attr;
    u_int_x00157238 option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int CreateThread_x00157238(struct ThreadParam_x00157238*) __asm__("CreateThread");
int StartThread_x00157238(int, void* arg) __asm__("func_0010B3A0");
int ChangeThreadPriority_x00157238(int, int) __asm__("ChangeThreadPriority");
extern int AddIntcHandler_x00157238(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00157238(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00157238 adxm_save_tprm_x00157238[12] __asm__("D_00405CB0");
extern Sint32_x00157238 volatile adxm_id_safe_x00157238 __asm__("D_00405D38");
extern Sint32_x00157238 adxm_stack_safe_x00157238[0x200] __asm__("D_00405DD0");
extern Sint32_x00157238 adxm_main_prio_def_x00157238 __asm__("D_0040D5D8");
extern void* _gp_x00157238 __asm__("D_00477CF0");
Sint32_x00157238 adxm_SuspendThread_x00157238(Sint32_x00157238 tid) __asm__("func_001571D8");
void adxm_safe_proc_x00157238() __asm__("func_00156BD0");
Sint32_x00157238 adxm_SuspendThread_x00157238(Sint32_x00157238 tid) __asm__("func_001571D8");
void func_00157238_x00157238() __asm__("func_00157238");
/* adxm_SetupSafeThrd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00157238_x00157238() {
    struct ThreadParam_x00157238 param;
    param.entry = adxm_safe_proc_x00157238;
    param.stack = adxm_stack_safe_x00157238;
    param.stackSize = sizeof(adxm_stack_safe_x00157238);
    param.initPriority = adxm_main_prio_def_x00157238;
    param.gpReg = &_gp_x00157238;
    adxm_id_safe_x00157238 = CreateThread_x00157238(&param);
    adxm_id_safe_x00157238;
    StartThread_x00157238(adxm_id_safe_x00157238, 0);
    if (adxm_id_safe_x00157238 != 0) {
        adxm_SuspendThread_x00157238(adxm_id_safe_x00157238);
        adxm_id_safe_x00157238;
    }
    ChangeThreadPriority_x00157238(adxm_id_safe_x00157238, adxm_save_tprm_x00157238[1]);
}
struct ThreadParam_x001572E0 {
    int status;
    void (*entry)(void *);
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    unsigned int attr;
    unsigned int option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int CreateThread_x001572E0(struct ThreadParam_x001572E0 *param) __asm__("CreateThread");
int _StartThread_x001572E0(int thread, void *arg) __asm__("func_0010B3A0");
int ChangeThreadPriority_x001572E0(int thread, int priority) __asm__("ChangeThreadPriority");
extern char _gp_x001572E0[] __asm__("D_00477CF0");
typedef struct AdxmThreadPrmEx_x001572E0 {
    int lockPrio;
    int safePrio;
    int usrVsyncPrio;
    int vsyncPrio;
    int fsPrio;
    int mainPrio;
    int mwIdlePrio;
    int usrIdlePrio;
    void *usrVsyncStack;
    int usrVsyncStackSize;
    void *usrIdleStack;
    int usrIdleStackSize;
} AdxmThreadPrmEx_x001572E0;
typedef struct SfdSj_x001572E0 SfdSj_x001572E0;
typedef struct SfdSjChunk_x001572E0 {
    char *data;
    int len;
} SfdSjChunk_x001572E0;
typedef struct SfdSjVtbl_x001572E0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001572E0 *sj);
    int (*getUuid)(SfdSj_x001572E0 *sj);
    void (*reset)(SfdSj_x001572E0 *sj);
    void (*getChunk)(SfdSj_x001572E0 *sj, int id, int n, SfdSjChunk_x001572E0 *ck);
    void (*ungetChunk)(SfdSj_x001572E0 *sj, int id, SfdSjChunk_x001572E0 *ck);
    void (*putChunk)(SfdSj_x001572E0 *sj, int id, SfdSjChunk_x001572E0 *ck);
    int (*getNumData)(SfdSj_x001572E0 *sj, int id);
} SfdSjVtbl_x001572E0;
struct SfdSj_x001572E0 {
    SfdSjVtbl_x001572E0 *vtbl;
};
typedef struct AdxPdObj_x001572E0 {
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
} AdxPdObj_x001572E0;
typedef struct AdxDecPara_x001572E0 {
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
} AdxDecPara_x001572E0;
struct Pl2Enc_x001572E0;
typedef struct AdxbObj_x001572E0 AdxbObj_x001572E0;
typedef short *(*AdxbGetWrFunc_x001572E0)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x001572E0)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x001572E0 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x001572E0 *xpd;
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
    AdxDecPara_x001572E0 dp;
    AdxbGetWrFunc_x001572E0 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x001572E0 addwrfunc;
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
    struct Pl2Enc_x001572E0 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x001572E0(AdxbObj_x001572E0 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x001572E0 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x001572E0 *adxb;
    SfdSj_x001572E0 *sji;
    SfdSj_x001572E0 *sjo[2];
    SfdSjChunk_x001572E0 cki;
    SfdSjChunk_x001572E0 cko[2];
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
} AdxSjdObj_x001572E0;
extern void ADXSJD_EntryFltFunc_x001572E0(AdxSjdObj_x001572E0 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x001572E0(AdxSjdObj_x001572E0 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x001572E0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x001572E0)(CvFsErrFn_x001572E0 func, void *obj);
typedef int (*CvFsPathFn_x001572E0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x001572E0)(void);
typedef int (*CvFsOpenFn_x001572E0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x001572E0)(int fd);
typedef int (*CvFsFdIntFn_x001572E0)(int fd);
typedef int (*CvFsSeekFn_x001572E0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x001572E0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x001572E0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x001572E0)(void);
typedef int (*CvFsLoadDirInfoFn_x001572E0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x001572E0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x001572E0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x001572E0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x001572E0 entry_err_func;
    CvFsPathFn_x001572E0 get_file_size;
    CvFsGetFreeSizeFn_x001572E0 get_free_size;
    CvFsOpenFn_x001572E0 open;
    CvFsFdFn_x001572E0 close;
    CvFsSeekFn_x001572E0 seek;
    CvFsFdIntFn_x001572E0 tell;
    CvFsXferFn_x001572E0 req_rd;
    CvFsXferFn_x001572E0 req_wr;
    CvFsFdFn_x001572E0 stop_tr;
    CvFsFdIntFn_x001572E0 get_stat;
    CvFsFdIntFn_x001572E0 get_sct_len;
    CvFsSetSctLenFn_x001572E0 set_sct_len;
    CvFsFdIntFn_x001572E0 get_num_tr;
    CvFsPathFn_x001572E0 change_dir;
    CvFsPathFn_x001572E0 is_exist_file;
    CvFsGetNumFilesFn_x001572E0 get_num_files;
    CvFsLoadDirInfoFn_x001572E0 load_dir_info;
    CvFsFdIntFn_x001572E0 get_max_byte_rate;
    CvFsPathFn_x001572E0 make_dir;
    CvFsPathFn_x001572E0 remove_dir;
    CvFsPathFn_x001572E0 delete_file;
    CvFsGetFileSizeExFn_x001572E0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x001572E0 opt_fn2;
} CvFsVtbl_x001572E0;
typedef struct CvFsHandle_x001572E0 {
    CvFsVtbl_x001572E0 *vtbl;
    int fd;
} CvFsHandle_x001572E0;
extern CvFsVtbl_x001572E0 *addDevice_x001572E0(char *devname, CvFsVtbl_x001572E0 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x001572E0 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x001572E0 *sj;
    CvFsHandle_x001572E0 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x001572E0 rdck;
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
} AdxStmObj_x001572E0;
extern void ADXSTM_EntryEosFunc_x001572E0(AdxStmObj_x001572E0 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
void ADXMSG_PrintErr_x001572E0(const char *format, ...) __asm__("scePrintf");
extern AdxmThreadPrmEx_x001572E0 adxm_tprm_x001572E0 __asm__("D_00405CB0");
extern volatile int adxm_usrvsync_thid_x001572E0 __asm__("D_00405D3C");
extern char adxm_usrvsync_stack_x001572E0[] __asm__("D_004065D0");
extern int adxm_main_init_prio_x001572E0 __asm__("D_0040D5D8");
extern char ADXM_UsrVsyncThread_Stack_pointe_x001572E0[] __asm__("D_00460E10");
void adxm_usrvsync_proc_x001572E0(void *arg) __asm__("func_00156C28");
void func_001572E0_x001572E0(void *stack, int stackSize) __asm__("func_001572E0");
/* adxm_create_usrvsync_thrd: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001572E0_x001572E0(void *stack, int stackSize) {
    struct ThreadParam_x001572E0 param;
    param.entry = adxm_usrvsync_proc_x001572E0;
    if (stack == 0) {
        param.stack = adxm_usrvsync_stack_x001572E0;
        param.stackSize = 4096;
    } else {
        param.stack = stack;
        param.stackSize = stackSize;
        ADXMSG_PrintErr_x001572E0(ADXM_UsrVsyncThread_Stack_pointe_x001572E0, stack, stackSize);
    }
    param.initPriority = adxm_main_init_prio_x001572E0;
    param.gpReg = _gp_x001572E0;
    adxm_usrvsync_thid_x001572E0 = CreateThread_x001572E0(&param);
    adxm_usrvsync_thid_x001572E0;
    _StartThread_x001572E0(adxm_usrvsync_thid_x001572E0, 0);
    ChangeThreadPriority_x001572E0(adxm_usrvsync_thid_x001572E0, adxm_tprm_x001572E0.usrVsyncPrio);
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157398);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", func_00157420);
typedef unsigned int u_int_x001574A8;
typedef signed int Sint32_x001574A8;
extern Sint32_x001574A8 SVM_SetCbSvr_x001574A8(Sint32_x001574A8, Sint32_x001574A8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001574A8(Sint32_x001574A8, Sint32_x001574A8, Sint32_x001574A8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
struct ThreadParam_x001574A8 {
    int status;
    void (*entry)(void*);
    void* stack;
    int stackSize;
    void* gpReg;
    int initPriority;
    int currentPriority;
    u_int_x001574A8 attr;
    u_int_x001574A8 option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int CreateThread_x001574A8(struct ThreadParam_x001574A8*) __asm__("CreateThread");
int StartThread_x001574A8(int, void* arg) __asm__("func_0010B3A0");
int ChangeThreadPriority_x001574A8(int, int) __asm__("ChangeThreadPriority");
extern int AddIntcHandler_x001574A8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001574A8(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x001574A8 adxm_save_tprm_x001574A8[12] __asm__("D_00405CB0");
extern Sint32_x001574A8 volatile adxm_id_mwidle_x001574A8 __asm__("D_00405D4C");
extern Sint32_x001574A8 adxm_stack_mwidle_x001574A8[0x800] __asm__("D_004095D0");
extern Sint32_x001574A8 adxm_main_prio_def_x001574A8 __asm__("D_0040D5D8");
extern void* _gp_x001574A8 __asm__("D_00477CF0");
Sint32_x001574A8 adxm_SuspendThread_x001574A8(Sint32_x001574A8 tid) __asm__("func_001571D8");
void adxm_mwidle_proc_x001574A8() __asm__("func_00156EA8");
Sint32_x001574A8 adxm_SuspendThread_x001574A8(Sint32_x001574A8 tid) __asm__("func_001571D8");
void func_001574A8_x001574A8() __asm__("func_001574A8");
/* adxm_SetupMwIdleThrd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001574A8_x001574A8() {
    struct ThreadParam_x001574A8 param;
    param.entry = adxm_mwidle_proc_x001574A8;
    param.stack = adxm_stack_mwidle_x001574A8;
    param.stackSize = sizeof(adxm_stack_mwidle_x001574A8);
    param.initPriority = adxm_main_prio_def_x001574A8;
    param.gpReg = &_gp_x001574A8;
    adxm_id_mwidle_x001574A8 = CreateThread_x001574A8(&param);
    adxm_id_mwidle_x001574A8;
    StartThread_x001574A8(adxm_id_mwidle_x001574A8, 0);
    ChangeThreadPriority_x001574A8(adxm_id_mwidle_x001574A8, adxm_save_tprm_x001574A8[6]);
    adxm_SuspendThread_x001574A8(adxm_id_mwidle_x001574A8);
    adxm_id_mwidle_x001574A8;
}
struct ThreadParam_x00157540 {
    int status;
    void (*entry)(void *);
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    unsigned int attr;
    unsigned int option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int CreateThread_x00157540(struct ThreadParam_x00157540 *param) __asm__("CreateThread");
int _StartThread_x00157540(int thread, void *arg) __asm__("func_0010B3A0");
int ChangeThreadPriority_x00157540(int thread, int priority) __asm__("ChangeThreadPriority");
extern char _gp_x00157540[] __asm__("D_00477CF0");
typedef struct AdxmThreadPrmEx_x00157540 {
    int lockPrio;
    int safePrio;
    int usrVsyncPrio;
    int vsyncPrio;
    int fsPrio;
    int mainPrio;
    int mwIdlePrio;
    int usrIdlePrio;
    void *usrVsyncStack;
    int usrVsyncStackSize;
    void *usrIdleStack;
    int usrIdleStackSize;
} AdxmThreadPrmEx_x00157540;
typedef struct SfdSj_x00157540 SfdSj_x00157540;
typedef struct SfdSjChunk_x00157540 {
    char *data;
    int len;
} SfdSjChunk_x00157540;
typedef struct SfdSjVtbl_x00157540 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00157540 *sj);
    int (*getUuid)(SfdSj_x00157540 *sj);
    void (*reset)(SfdSj_x00157540 *sj);
    void (*getChunk)(SfdSj_x00157540 *sj, int id, int n, SfdSjChunk_x00157540 *ck);
    void (*ungetChunk)(SfdSj_x00157540 *sj, int id, SfdSjChunk_x00157540 *ck);
    void (*putChunk)(SfdSj_x00157540 *sj, int id, SfdSjChunk_x00157540 *ck);
    int (*getNumData)(SfdSj_x00157540 *sj, int id);
} SfdSjVtbl_x00157540;
struct SfdSj_x00157540 {
    SfdSjVtbl_x00157540 *vtbl;
};
typedef struct AdxPdObj_x00157540 {
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
} AdxPdObj_x00157540;
typedef struct AdxDecPara_x00157540 {
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
} AdxDecPara_x00157540;
struct Pl2Enc_x00157540;
typedef struct AdxbObj_x00157540 AdxbObj_x00157540;
typedef short *(*AdxbGetWrFunc_x00157540)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00157540)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00157540 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00157540 *xpd;
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
    AdxDecPara_x00157540 dp;
    AdxbGetWrFunc_x00157540 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00157540 addwrfunc;
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
    struct Pl2Enc_x00157540 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00157540(AdxbObj_x00157540 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00157540 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00157540 *adxb;
    SfdSj_x00157540 *sji;
    SfdSj_x00157540 *sjo[2];
    SfdSjChunk_x00157540 cki;
    SfdSjChunk_x00157540 cko[2];
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
} AdxSjdObj_x00157540;
extern void ADXSJD_EntryFltFunc_x00157540(AdxSjdObj_x00157540 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00157540(AdxSjdObj_x00157540 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00157540)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00157540)(CvFsErrFn_x00157540 func, void *obj);
typedef int (*CvFsPathFn_x00157540)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00157540)(void);
typedef int (*CvFsOpenFn_x00157540)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00157540)(int fd);
typedef int (*CvFsFdIntFn_x00157540)(int fd);
typedef int (*CvFsSeekFn_x00157540)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00157540)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00157540)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00157540)(void);
typedef int (*CvFsLoadDirInfoFn_x00157540)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00157540)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00157540)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00157540 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00157540 entry_err_func;
    CvFsPathFn_x00157540 get_file_size;
    CvFsGetFreeSizeFn_x00157540 get_free_size;
    CvFsOpenFn_x00157540 open;
    CvFsFdFn_x00157540 close;
    CvFsSeekFn_x00157540 seek;
    CvFsFdIntFn_x00157540 tell;
    CvFsXferFn_x00157540 req_rd;
    CvFsXferFn_x00157540 req_wr;
    CvFsFdFn_x00157540 stop_tr;
    CvFsFdIntFn_x00157540 get_stat;
    CvFsFdIntFn_x00157540 get_sct_len;
    CvFsSetSctLenFn_x00157540 set_sct_len;
    CvFsFdIntFn_x00157540 get_num_tr;
    CvFsPathFn_x00157540 change_dir;
    CvFsPathFn_x00157540 is_exist_file;
    CvFsGetNumFilesFn_x00157540 get_num_files;
    CvFsLoadDirInfoFn_x00157540 load_dir_info;
    CvFsFdIntFn_x00157540 get_max_byte_rate;
    CvFsPathFn_x00157540 make_dir;
    CvFsPathFn_x00157540 remove_dir;
    CvFsPathFn_x00157540 delete_file;
    CvFsGetFileSizeExFn_x00157540 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00157540 opt_fn2;
} CvFsVtbl_x00157540;
typedef struct CvFsHandle_x00157540 {
    CvFsVtbl_x00157540 *vtbl;
    int fd;
} CvFsHandle_x00157540;
extern CvFsVtbl_x00157540 *addDevice_x00157540(char *devname, CvFsVtbl_x00157540 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00157540 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00157540 *sj;
    CvFsHandle_x00157540 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00157540 rdck;
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
} AdxStmObj_x00157540;
extern void ADXSTM_EntryEosFunc_x00157540(AdxStmObj_x00157540 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
void ADXMSG_PrintErr_x00157540(const char *format, ...) __asm__("scePrintf");
extern AdxmThreadPrmEx_x00157540 adxm_tprm_x00157540 __asm__("D_00405CB0");
extern volatile int adxm_mwidle_thid_x00157540 __asm__("D_00405D4C");
extern volatile int adxm_usridle_thid_x00157540 __asm__("D_00405D50");
extern char adxm_usridle_stack_x00157540[] __asm__("D_0040B5D0");
extern int adxm_main_init_prio_x00157540 __asm__("D_0040D5D8");
extern char ADXM_UsrIdleThread_Stack_pointer_x00157540[] __asm__("D_00460E50");
int adxm_SuspendThread_x00157540(int threadId) __asm__("func_001571D8");
void adxm_usridle_thrd_x00157540(void *arg) __asm__("func_00156FE0");
int adxm_SuspendThread_x00157540(int threadId) __asm__("func_001571D8");
void func_00157540_x00157540(void *stack, int stackSize) __asm__("func_00157540");
/* adxm_create_usridle_thrd: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00157540_x00157540(void *stack, int stackSize) {
    struct ThreadParam_x00157540 param;
    param.entry = adxm_usridle_thrd_x00157540;
    if (stack == 0) {
        param.stack = adxm_usridle_stack_x00157540;
        param.stackSize = 8192;
    } else {
        param.stack = stack;
        param.stackSize = stackSize;
        ADXMSG_PrintErr_x00157540(ADXM_UsrIdleThread_Stack_pointer_x00157540, stack, stackSize);
    }
    param.initPriority = adxm_main_init_prio_x00157540;
    param.gpReg = _gp_x00157540;
    adxm_usridle_thid_x00157540 = CreateThread_x00157540(&param);
    adxm_usridle_thid_x00157540;
    _StartThread_x00157540(adxm_usridle_thid_x00157540, 0);
    ChangeThreadPriority_x00157540(adxm_usridle_thid_x00157540, adxm_tprm_x00157540.usrIdlePrio);
    adxm_SuspendThread_x00157540(adxm_usridle_thid_x00157540);
    adxm_mwidle_thid_x00157540;
}
s32 func_00157610(void) {
    return D_00405CA8;
}
void func_00157620(void) {
    func_00170818();
}
void func_00157638(void) {
    func_00170830();
}
void func_00157650(void) {
    func_00170860();
}
void func_00157668(void) {
    func_00170878();
}
void func_00157680(void) {
    func_00170890();
}
void func_00157698(void) {
    func_001708A8();
}
s32 func_001576B0(void) {
    func_00170818();
    func_00170830();
    func_00170878();
    func_00170890();
    func_001708A8();
    return 0;
}
s32 func_001576F0(void) {
    return D_00405CA4 != 0;
}
void func_00157700(void) {
    func_00170620();
}
struct ThreadParam_x00157718 {
    int status;
    void (*entry)(void *);
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    unsigned int attr;
    unsigned int option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int GetThreadId_x00157718(void) __asm__("GetThreadId");
int ReferThreadStatus_x00157718(int thread, struct ThreadParam_x00157718 *status) __asm__("ReferThreadStatus");
int ChangeThreadPriority_x00157718(int thread, int priority) __asm__("ChangeThreadPriority");
typedef void (*SvmFunc_x00157718)(void *obj);
void SVM_SetCbBdr_x00157718(int id, SvmFunc_x00157718 func, void *obj) __asm__("func_00170588");
void SVM_SetCbLock_x00157718(SvmFunc_x00157718 func, void *obj) __asm__("func_00170660");
void SVM_SetCbUnlock_x00157718(SvmFunc_x00157718 func, void *obj) __asm__("func_00170678");
void SVM_Init_x00157718(void) __asm__("func_00170968");
typedef struct AdxmThreadPrmEx_x00157718 {
    int lockPrio;
    int safePrio;
    int usrVsyncPrio;
    int vsyncPrio;
    int fsPrio;
    int mainPrio;
    int mwIdlePrio;
    int usrIdlePrio;
    void *usrVsyncStack;
    int usrVsyncStackSize;
    void *usrIdleStack;
    int usrIdleStackSize;
} AdxmThreadPrmEx_x00157718;
typedef struct AdxmThreadPrm_x00157718 {
    int lockPrio;
    int safePrio;
    int vsyncPrio;
    int fsPrio;
    int mainPrio;
    int mwIdlePrio;
} AdxmThreadPrm_x00157718;
typedef struct SfdSj_x00157718 SfdSj_x00157718;
typedef struct SfdSjChunk_x00157718 {
    char *data;
    int len;
} SfdSjChunk_x00157718;
typedef struct SfdSjVtbl_x00157718 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00157718 *sj);
    int (*getUuid)(SfdSj_x00157718 *sj);
    void (*reset)(SfdSj_x00157718 *sj);
    void (*getChunk)(SfdSj_x00157718 *sj, int id, int n, SfdSjChunk_x00157718 *ck);
    void (*ungetChunk)(SfdSj_x00157718 *sj, int id, SfdSjChunk_x00157718 *ck);
    void (*putChunk)(SfdSj_x00157718 *sj, int id, SfdSjChunk_x00157718 *ck);
    int (*getNumData)(SfdSj_x00157718 *sj, int id);
} SfdSjVtbl_x00157718;
struct SfdSj_x00157718 {
    SfdSjVtbl_x00157718 *vtbl;
};
typedef struct AdxPdObj_x00157718 {
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
} AdxPdObj_x00157718;
typedef struct AdxDecPara_x00157718 {
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
} AdxDecPara_x00157718;
struct Pl2Enc_x00157718;
typedef struct AdxbObj_x00157718 AdxbObj_x00157718;
typedef short *(*AdxbGetWrFunc_x00157718)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00157718)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00157718 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00157718 *xpd;
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
    AdxDecPara_x00157718 dp;
    AdxbGetWrFunc_x00157718 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00157718 addwrfunc;
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
    struct Pl2Enc_x00157718 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00157718(AdxbObj_x00157718 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00157718 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00157718 *adxb;
    SfdSj_x00157718 *sji;
    SfdSj_x00157718 *sjo[2];
    SfdSjChunk_x00157718 cki;
    SfdSjChunk_x00157718 cko[2];
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
} AdxSjdObj_x00157718;
extern void ADXSJD_EntryFltFunc_x00157718(AdxSjdObj_x00157718 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00157718(AdxSjdObj_x00157718 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00157718)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00157718)(CvFsErrFn_x00157718 func, void *obj);
typedef int (*CvFsPathFn_x00157718)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00157718)(void);
typedef int (*CvFsOpenFn_x00157718)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00157718)(int fd);
typedef int (*CvFsFdIntFn_x00157718)(int fd);
typedef int (*CvFsSeekFn_x00157718)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00157718)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00157718)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00157718)(void);
typedef int (*CvFsLoadDirInfoFn_x00157718)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00157718)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00157718)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00157718 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00157718 entry_err_func;
    CvFsPathFn_x00157718 get_file_size;
    CvFsGetFreeSizeFn_x00157718 get_free_size;
    CvFsOpenFn_x00157718 open;
    CvFsFdFn_x00157718 close;
    CvFsSeekFn_x00157718 seek;
    CvFsFdIntFn_x00157718 tell;
    CvFsXferFn_x00157718 req_rd;
    CvFsXferFn_x00157718 req_wr;
    CvFsFdFn_x00157718 stop_tr;
    CvFsFdIntFn_x00157718 get_stat;
    CvFsFdIntFn_x00157718 get_sct_len;
    CvFsSetSctLenFn_x00157718 set_sct_len;
    CvFsFdIntFn_x00157718 get_num_tr;
    CvFsPathFn_x00157718 change_dir;
    CvFsPathFn_x00157718 is_exist_file;
    CvFsGetNumFilesFn_x00157718 get_num_files;
    CvFsLoadDirInfoFn_x00157718 load_dir_info;
    CvFsFdIntFn_x00157718 get_max_byte_rate;
    CvFsPathFn_x00157718 make_dir;
    CvFsPathFn_x00157718 remove_dir;
    CvFsPathFn_x00157718 delete_file;
    CvFsGetFileSizeExFn_x00157718 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00157718 opt_fn2;
} CvFsVtbl_x00157718;
typedef struct CvFsHandle_x00157718 {
    CvFsVtbl_x00157718 *vtbl;
    int fd;
} CvFsHandle_x00157718;
extern CvFsVtbl_x00157718 *addDevice_x00157718(char *devname, CvFsVtbl_x00157718 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00157718 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00157718 *sj;
    CvFsHandle_x00157718 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00157718 rdck;
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
} AdxStmObj_x00157718;
extern void ADXSTM_EntryEosFunc_x00157718(AdxStmObj_x00157718 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
typedef struct AdxmCallback_x00157718 {
    void (*func)(void *arg);
    void *arg;
} AdxmCallback_x00157718;
extern int adxm_setup_count_x00157718 __asm__("D_00405CA4");
extern AdxmThreadPrmEx_x00157718 adxm_tprm_x00157718 __asm__("D_00405CB0");
extern volatile int adxm_vsync_waiting_x00157718 __asm__("D_00405CFC");
extern volatile int adxm_main_thid_x00157718 __asm__("D_00405D48");
extern int adxm_main_init_prio_x00157718 __asm__("D_0040D5D8");
extern AdxmCallback_x00157718 adxm_vsync_frame_cb_x00157718 __asm__("D_0047E970");
extern AdxmCallback_x00157718 adxm_mwidle_sleep_cb_x00157718 __asm__("D_0047E978");
extern char *volatile adxps2_build_x00157718 __asm__("D_00405CA0");
void _adxm_lock_x00157718(void *obj) __asm__("func_00156998");
void _adxm_unlock_x00157718(void *obj) __asm__("func_00156A20");
void adxm_goto_mwidle_border_x00157718(void *obj) __asm__("func_00156B68");
void adxm_SetupSafeThrd_x00157718(void) __asm__("func_00157238");
void adxm_SetupVsyncThrd_x00157718(void) __asm__("func_00157398");
void adxm_SetupFsThrd_x00157718(void) __asm__("func_00157420");
void adxm_SetupMwIdleThrd_x00157718(void) __asm__("func_001574A8");
void func_00157718_x00157718(AdxmThreadPrm_x00157718 *tprm) __asm__("func_00157718");
/* ADXM_SetupThrd: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00157718_x00157718(AdxmThreadPrm_x00157718 *tprm) {
    struct ThreadParam_x00157718 param;
    adxps2_build_x00157718;
    adxm_vsync_waiting_x00157718 = 0;
    if (adxm_setup_count_x00157718 == 0) {
        SVM_Init_x00157718();
        SVM_SetCbLock_x00157718(_adxm_lock_x00157718, 0);
        SVM_SetCbUnlock_x00157718(_adxm_unlock_x00157718, 0);
        adxm_vsync_frame_cb_x00157718.func = 0;
        adxm_vsync_frame_cb_x00157718.arg = 0;
        adxm_mwidle_sleep_cb_x00157718.func = 0;
        adxm_mwidle_sleep_cb_x00157718.arg = 0;
        if (tprm == 0) {
            adxm_tprm_x00157718.mainPrio = 24;
            adxm_tprm_x00157718.lockPrio = 1;
            adxm_tprm_x00157718.safePrio = 8;
            adxm_tprm_x00157718.vsyncPrio = 16;
            adxm_tprm_x00157718.fsPrio = 18;
            adxm_tprm_x00157718.mwIdlePrio = 25;
        } else {
            adxm_tprm_x00157718.mainPrio = tprm->mainPrio;
            adxm_tprm_x00157718.lockPrio = tprm->lockPrio;
            adxm_tprm_x00157718.safePrio = tprm->safePrio;
            adxm_tprm_x00157718.vsyncPrio = tprm->vsyncPrio;
            adxm_tprm_x00157718.fsPrio = tprm->fsPrio;
            adxm_tprm_x00157718.mwIdlePrio = tprm->mwIdlePrio;
        }
        adxm_main_thid_x00157718 = GetThreadId_x00157718();
        ReferThreadStatus_x00157718(adxm_main_thid_x00157718, &param);
        adxm_main_init_prio_x00157718 = param.currentPriority;
        adxm_SetupSafeThrd_x00157718();
        adxm_SetupVsyncThrd_x00157718();
        adxm_SetupFsThrd_x00157718();
        adxm_SetupMwIdleThrd_x00157718();
        ChangeThreadPriority_x00157718(adxm_main_thid_x00157718, adxm_tprm_x00157718.mainPrio);
        SVM_SetCbBdr_x00157718(6, adxm_goto_mwidle_border_x00157718, 0);
    }
    adxm_setup_count_x00157718++;
}
typedef signed int Sint32_x001578A8;
typedef signed long Sint64_x001578A8;
extern Sint32_x001578A8 SVM_SetCbSvr_x001578A8(Sint32_x001578A8, Sint32_x001578A8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001578A8(Sint32_x001578A8, Sint32_x001578A8, Sint32_x001578A8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern int AddIntcHandler_x001578A8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001578A8(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint64_x001578A8 volatile adxm_safe_loop_x001578A8 __asm__("D_00405D58");
extern Sint64_x001578A8 volatile adxm_usrvsync_loop_x001578A8 __asm__("D_00405D68");
extern Sint64_x001578A8 volatile adxm_vsync_loop_x001578A8 __asm__("D_00405D78");
extern Sint64_x001578A8 volatile adxm_fs_loop_x001578A8 __asm__("D_00405D88");
extern Sint64_x001578A8 volatile adxm_mwidle_loop_x001578A8 __asm__("D_00405D98");
extern Sint64_x001578A8 volatile adxm_usridle_loop_x001578A8 __asm__("D_00405DA8");
void func_001578A8_x001578A8() __asm__("func_001578A8");
/* adxm_ShutdownPreProcedure: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001578A8_x001578A8() {
    adxm_safe_loop_x001578A8 = 1;
    adxm_usrvsync_loop_x001578A8 = 1;
    adxm_vsync_loop_x001578A8 = 1;
    adxm_fs_loop_x001578A8 = 1;
    adxm_mwidle_loop_x001578A8 = 1;
    adxm_usridle_loop_x001578A8 = 1;
}
typedef signed int Sint32_x001578F8;
typedef char Char8_x001578F8;
extern void SVM_SetCbErr_x001578F8(void (*callback)(void*, Char8_x001578F8*), void* object) __asm__("SVM_SetCbErr");
extern Sint32_x001578F8 SVM_SetCbSvr_x001578F8(Sint32_x001578F8, Sint32_x001578F8 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001578F8(Sint32_x001578F8, Sint32_x001578F8, Sint32_x001578F8 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
extern void SVM_SetCbLock_x001578F8(void (*func)(void*), void* object) __asm__("func_00170660");
extern void SVM_SetCbUnlock_x001578F8(void (*func)(void*), void* object) __asm__("func_00170678");
void SVM_Finish_x001578F8() __asm__("func_001709A8");
int ChangeThreadPriority_x001578F8(int, int) __asm__("ChangeThreadPriority");
extern int AddIntcHandler_x001578F8(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001578F8(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x001578F8 adxm_init_level_x001578F8 __asm__("D_00405CA4");
extern Sint32_x001578F8 volatile adxm_id_main_x001578F8 __asm__("D_00405D48");
extern Sint32_x001578F8 adxm_main_prio_def_x001578F8 __asm__("D_0040D5D8");
void adxm_ShutdownFsThrd_x001578F8() __asm__("func_00157C00");
void adxm_ShutdownMwIdleThrd_x001578F8() __asm__("func_00157A60");
void adxm_ShutdownPreProcedure_x001578F8() __asm__("func_001578A8");
void adxm_ShutdownSafeThrd_x001578F8() __asm__("func_00157DA0");
void adxm_ShutdownVsyncThrd_x001578F8() __asm__("func_00157B30");
void adxm_ShutdownPreProcedure_x001578F8() __asm__("func_001578A8");
void adxm_ShutdownMwIdleThrd_x001578F8() __asm__("func_00157A60");
void adxm_ShutdownVsyncThrd_x001578F8() __asm__("func_00157B30");
void adxm_ShutdownFsThrd_x001578F8() __asm__("func_00157C00");
void adxm_ShutdownSafeThrd_x001578F8() __asm__("func_00157DA0");
void func_001578F8_x001578F8() __asm__("func_001578F8");
/* ADXM_ShutdownThrd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001578F8_x001578F8() {
    if (--adxm_init_level_x001578F8 == 0) {
        adxm_ShutdownPreProcedure_x001578F8();
        adxm_ShutdownMwIdleThrd_x001578F8();
        adxm_ShutdownFsThrd_x001578F8();
        adxm_ShutdownVsyncThrd_x001578F8();
        adxm_ShutdownSafeThrd_x001578F8();
        ChangeThreadPriority_x001578F8(adxm_id_main_x001578F8, adxm_main_prio_def_x001578F8);
        SVM_SetCbLock_x001578F8(0, 0);
        SVM_SetCbUnlock_x001578F8(0, 0);
        SVM_Finish_x001578F8();
    }
}
s32 ChangeThreadPriority_x00157990(s32, s32) __asm__("ChangeThreadPriority");
s32 WakeupThread_x00157990(s32) __asm__("WakeupThread");
s32 func_00157170_x00157990(s32) __asm__("func_00157170");
extern volatile s32 D_00405D50_x00157990 __asm__("D_00405D50");
extern volatile s64 D_00405DA8_x00157990 __asm__("D_00405DA8");
extern volatile s64 D_00405DB0_x00157990 __asm__("D_00405DB0");
void func_00157990_x00157990(void) __asm__("func_00157990");
void func_00157990_x00157990(void) {
    if (D_00405DB0_x00157990 == 0) {
        do {
            D_00405DA8_x00157990 = 1;
            ChangeThreadPriority_x00157990(D_00405D50_x00157990, 1);
            WakeupThread_x00157990(D_00405D50_x00157990);
            func_00157170_x00157990(D_00405D50_x00157990);
        } while (D_00405DB0_x00157990 == 0);
    }
    D_00405DB0_x00157990 = 0;
    D_00405DA8_x00157990 = 0;
    D_00405D50_x00157990 = 0;
}
s32 ChangeThreadPriority_x00157A60(s32, s32) __asm__("ChangeThreadPriority");
s32 WakeupThread_x00157A60(s32) __asm__("WakeupThread");
s32 func_00157170_x00157A60(s32) __asm__("func_00157170");
extern volatile s32 D_00405D4C_x00157A60 __asm__("D_00405D4C");
extern volatile s64 D_00405D98_x00157A60 __asm__("D_00405D98");
extern volatile s64 D_00405DA0_x00157A60 __asm__("D_00405DA0");
void func_00157A60_x00157A60(void) __asm__("func_00157A60");
void func_00157A60_x00157A60(void) {
    if (D_00405DA0_x00157A60 == 0) {
        do {
            D_00405D98_x00157A60 = 1;
            ChangeThreadPriority_x00157A60(D_00405D4C_x00157A60, 1);
            WakeupThread_x00157A60(D_00405D4C_x00157A60);
            func_00157170_x00157A60(D_00405D4C_x00157A60);
        } while (D_00405DA0_x00157A60 == 0);
    }
    D_00405DA0_x00157A60 = 0;
    D_00405D98_x00157A60 = 0;
    D_00405D4C_x00157A60 = 0;
}
s32 ChangeThreadPriority_x00157B30(s32, s32) __asm__("ChangeThreadPriority");
s32 WakeupThread_x00157B30(s32) __asm__("WakeupThread");
s32 func_00157170_x00157B30(s32) __asm__("func_00157170");
extern volatile s32 D_00405D40_x00157B30 __asm__("D_00405D40");
extern volatile s64 D_00405D78_x00157B30 __asm__("D_00405D78");
extern volatile s64 D_00405D80_x00157B30 __asm__("D_00405D80");
void func_00157B30_x00157B30(void) __asm__("func_00157B30");
void func_00157B30_x00157B30(void) {
    if (D_00405D80_x00157B30 == 0) {
        do {
            D_00405D78_x00157B30 = 1;
            ChangeThreadPriority_x00157B30(D_00405D40_x00157B30, 1);
            WakeupThread_x00157B30(D_00405D40_x00157B30);
            func_00157170_x00157B30(D_00405D40_x00157B30);
        } while (D_00405D80_x00157B30 == 0);
    }
    D_00405D80_x00157B30 = 0;
    D_00405D78_x00157B30 = 0;
    D_00405D40_x00157B30 = 0;
}
s32 ChangeThreadPriority_x00157C00(s32, s32) __asm__("ChangeThreadPriority");
s32 WakeupThread_x00157C00(s32) __asm__("WakeupThread");
s32 func_00157170_x00157C00(s32) __asm__("func_00157170");
extern volatile s32 D_00405D44_x00157C00 __asm__("D_00405D44");
extern volatile s64 D_00405D88_x00157C00 __asm__("D_00405D88");
extern volatile s64 D_00405D90_x00157C00 __asm__("D_00405D90");
void func_00157C00_x00157C00(void) __asm__("func_00157C00");
void func_00157C00_x00157C00(void) {
    if (D_00405D90_x00157C00 == 0) {
        do {
            D_00405D88_x00157C00 = 1;
            ChangeThreadPriority_x00157C00(D_00405D44_x00157C00, 1);
            WakeupThread_x00157C00(D_00405D44_x00157C00);
            func_00157170_x00157C00(D_00405D44_x00157C00);
        } while (D_00405D90_x00157C00 == 0);
    }
    D_00405D90_x00157C00 = 0;
    D_00405D88_x00157C00 = 0;
    D_00405D44_x00157C00 = 0;
}
s32 ChangeThreadPriority_x00157CD0(s32, s32) __asm__("ChangeThreadPriority");
s32 WakeupThread_x00157CD0(s32) __asm__("WakeupThread");
s32 func_00157170_x00157CD0(s32) __asm__("func_00157170");
extern volatile s32 D_00405D3C_x00157CD0 __asm__("D_00405D3C");
extern volatile s64 D_00405D68_x00157CD0 __asm__("D_00405D68");
extern volatile s64 D_00405D70_x00157CD0 __asm__("D_00405D70");
void func_00157CD0_x00157CD0(void) __asm__("func_00157CD0");
void func_00157CD0_x00157CD0(void) {
    if (D_00405D70_x00157CD0 == 0) {
        do {
            D_00405D68_x00157CD0 = 1;
            ChangeThreadPriority_x00157CD0(D_00405D3C_x00157CD0, 1);
            WakeupThread_x00157CD0(D_00405D3C_x00157CD0);
            func_00157170_x00157CD0(D_00405D3C_x00157CD0);
        } while (D_00405D70_x00157CD0 == 0);
    }
    D_00405D70_x00157CD0 = 0;
    D_00405D68_x00157CD0 = 0;
    D_00405D3C_x00157CD0 = 0;
}
s32 ChangeThreadPriority_x00157DA0(s32, s32) __asm__("ChangeThreadPriority");
s32 WakeupThread_x00157DA0(s32) __asm__("WakeupThread");
s32 func_00157170_x00157DA0(s32) __asm__("func_00157170");
extern volatile s32 D_00405D38_x00157DA0 __asm__("D_00405D38");
extern volatile s64 D_00405D58_x00157DA0 __asm__("D_00405D58");
extern volatile s64 D_00405D60_x00157DA0 __asm__("D_00405D60");
void func_00157DA0_x00157DA0(void) __asm__("func_00157DA0");
void func_00157DA0_x00157DA0(void) {
    if (D_00405D60_x00157DA0 == 0) {
        do {
            D_00405D58_x00157DA0 = 1;
            ChangeThreadPriority_x00157DA0(D_00405D38_x00157DA0, 1);
            WakeupThread_x00157DA0(D_00405D38_x00157DA0);
            func_00157170_x00157DA0(D_00405D38_x00157DA0);
        } while (D_00405D60_x00157DA0 == 0);
    }
    D_00405D60_x00157DA0 = 0;
    D_00405D58_x00157DA0 = 0;
    D_00405D38_x00157DA0 = 0;
}
void func_00157E70(void) {
    func_0016FF40();
}
void func_00157E88(void) {
    func_0016FF58();
}
s32 func_00157EA0(void) {
    return D_00405CE0;
}
typedef signed int Sint32_x00157EB0;
typedef signed long Sint64_x00157EB0;
extern Sint32_x00157EB0 SVM_SetCbSvr_x00157EB0(Sint32_x00157EB0, Sint32_x00157EB0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00157EB0(Sint32_x00157EB0, Sint32_x00157EB0, Sint32_x00157EB0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
Sint32_x00157EB0 SVM_ExecSvrVint_x00157EB0() __asm__("func_00170800");
extern int AddIntcHandler_x00157EB0(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00157EB0(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00157EB0 adxm_init_level_x00157EB0 __asm__("D_00405CA4");
extern Sint32_x00157EB0 volatile adxm_vsyncproc_exec_flag_x00157EB0 __asm__("D_00405CE8");
extern Sint32_x00157EB0 volatile adxm_usrvsyncproc_exec_flag_x00157EB0 __asm__("D_00405CEC");
extern Sint32_x00157EB0 volatile adxm_fsproc_exec_flag_x00157EB0 __asm__("D_00405CF0");
extern Sint64_x00157EB0 adxm_vint_cnt_x00157EB0 __asm__("D_00405D30");
extern Sint32_x00157EB0 volatile adxm_id_usrvsync_x00157EB0 __asm__("D_00405D3C");
extern Sint32_x00157EB0 volatile adxm_id_vsync_x00157EB0 __asm__("D_00405D40");
extern Sint32_x00157EB0 volatile adxm_id_fs_x00157EB0 __asm__("D_00405D44");
extern Sint32_x00157EB0 volatile adxps2_exec_vint_x00157EB0 __asm__("D_00405DBC");
extern Sint32_x00157EB0 (*adxm_old_cbf_x00157EB0)(Sint32_x00157EB0 arg) __asm__("D_00405DC0");
extern Sint32_x00157EB0 volatile adxt_vsync_cnt_x00157EB0 __asm__("D_00404C14");
Sint32_x00157EB0 adxm_IsSetupThrdEx_x00157EB0() __asm__("func_00157610");
void adxm_iWakeupThread_x00157EB0(Sint32_x00157EB0 tid) __asm__("func_001570B8");
Sint32_x00157EB0 adxm_IsSetupThrdEx_x00157EB0() __asm__("func_00157610");
Sint32_x00157EB0 func_00157EB0_x00157EB0(Sint32_x00157EB0 arg) __asm__("func_00157EB0");
/* ADXPS2_ExecVint: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00157EB0 func_00157EB0_x00157EB0(Sint32_x00157EB0 arg) {
    adxt_vsync_cnt_x00157EB0 += 1;
    if (adxps2_exec_vint_x00157EB0 == 0) {
        adxps2_exec_vint_x00157EB0 = 1;
        if (adxm_init_level_x00157EB0 > 0) {
            if (adxm_vsyncproc_exec_flag_x00157EB0 != 1) {
                adxm_iWakeupThread_x00157EB0(adxm_id_vsync_x00157EB0);
            }
            if (adxm_fsproc_exec_flag_x00157EB0 != 1) {
                adxm_iWakeupThread_x00157EB0(adxm_id_fs_x00157EB0);
            }
            if ((adxm_IsSetupThrdEx_x00157EB0() == 1) && (adxm_usrvsyncproc_exec_flag_x00157EB0 != 1)) {
                adxm_iWakeupThread_x00157EB0(adxm_id_usrvsync_x00157EB0);
            }
            adxm_vint_cnt_x00157EB0 += 1;
        }
        SVM_ExecSvrVint_x00157EB0();
        adxps2_exec_vint_x00157EB0 = 0;
    }
    if (adxm_old_cbf_x00157EB0 != 0) {
        return adxm_old_cbf_x00157EB0(arg);
    }
    return 0;
}
void func_00157FD8(void) {
    func_00157EB0();
}
void func_00157FF0(void) {
    func_00170878();
}
extern volatile int D_003C8148_x00158008 __asm__("D_003C8148");
extern volatile int D_003C814C_x00158008 __asm__("D_00405D4C");
extern volatile int D_003C8150_x00158008 __asm__("D_00405D50");
extern void func_00325290_x00158008(int thid) __asm__("func_00157108");
extern int GetD003C80A8_325610_x00158008(void) __asm__("func_00157610");
extern int adxm_ResumeThread_x00158008(int tid) __asm__("func_00157170");
void func_00158008_x00158008(void) __asm__("func_00158008");
/* func_00325DF0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00324eb0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00158008_x00158008(void)
{
    if (adxm_ResumeThread_x00158008(D_003C814C_x00158008) == D_003C814C_x00158008) {
        func_00325290_x00158008(D_003C814C_x00158008);
    }
    if (GetD003C80A8_325610_x00158008() == 1) {
        if (adxm_ResumeThread_x00158008(D_003C8150_x00158008) == D_003C8150_x00158008) {
            func_00325290_x00158008(D_003C8150_x00158008);
        }
    }
}
typedef unsigned int u_int_x00158090;
typedef signed int Sint32_x00158090;
extern Sint32_x00158090 SVM_SetCbSvr_x00158090(Sint32_x00158090, Sint32_x00158090 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x00158090(Sint32_x00158090, Sint32_x00158090, Sint32_x00158090 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
struct ThreadParam_x00158090 {
    int status;
    void (*entry)(void*);
    void* stack;
    int stackSize;
    void* gpReg;
    int initPriority;
    int currentPriority;
    u_int_x00158090 attr;
    u_int_x00158090 option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int ReferThreadStatus_x00158090(int, struct ThreadParam_x00158090*) __asm__("ReferThreadStatus");
int WakeupThread_x00158090(int) __asm__("WakeupThread");
extern int AddIntcHandler_x00158090(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00158090(int, int (*)(int), int) __asm__("AddDmacHandler");
extern Sint32_x00158090 volatile adxm_waiting_main_th_flag_x00158090 __asm__("D_00405CFC");
extern Sint32_x00158090 volatile adxm_id_main_x00158090 __asm__("D_00405D48");
void func_00158090_x00158090() __asm__("func_00158090");
/* ADXPS2_WakeupMainThrd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00158090_x00158090() {
    struct ThreadParam_x00158090 param;
    if (adxm_waiting_main_th_flag_x00158090 != 1) {
        return;
    }
    ReferThreadStatus_x00158090(adxm_id_main_x00158090, &param);
    if ((param.status != 0x04) && (param.status != 0x0c)) {
        return;
    }
    if (WakeupThread_x00158090(adxm_id_main_x00158090) != adxm_id_main_x00158090) {
        return;
    }
    adxm_waiting_main_th_flag_x00158090 = 0;
}
s32 func_00157158_x00158110() __asm__("func_00157158");
extern volatile s32 D_00405CFC_x00158110 __asm__("D_00405CFC");
void func_00158110_x00158110(void) __asm__("func_00158110");
void func_00158110_x00158110(void) {
    D_00405CFC_x00158110 = 1;
    func_00157158_x00158110();
}
void func_00158138(void) {
    func_00158008();
    func_00158600();
    func_00158110();
}
void func_00158160(void) {
    func_00158138();
}
s32 func_00158178(void) {
    if (D_00405DB8 == 0) {
        D_00405DB8 = 1;
        func_0015F5F0();
        func_00156048();
        D_00405DB8 = 0;
    }
    return 0;
}
typedef signed int Sint32_x001581C0;
extern Sint32_x001581C0 SVM_SetCbSvr_x001581C0(Sint32_x001581C0, Sint32_x001581C0 (*)(void*), void*) __asm__("SVM_SetCbSvr");
extern void SVM_SetCbSvrId_x001581C0(Sint32_x001581C0, Sint32_x001581C0, Sint32_x001581C0 (*)(void*), void*) __asm__("SVM_SetCbSvrId");
typedef struct {
        int prio_lock;
        int prio_safe;
        int prio_vsync;
        int prio_main;
        int prio_mwidle;
} ADXM_TPRM_x001581C0;
typedef struct {
        int prio_lock;
        int prio_safe;
        int prio_usrvsync;
        int prio_vsync;
        int prio_main;
        int prio_mwidle;
        int prio_usridle;
} ADXM_TPRM_EX_x001581C0;
void ADXM_SetupThrd_x001581C0(ADXM_TPRM_x001581C0 *tprm) __asm__("func_00157718");
typedef struct {
    int prio_lock;
    int prio_safe;
    int prio_adx;
    int prio_main;
} ADXPS2_TPRM_x001581C0;
extern int AddIntcHandler_x001581C0(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x001581C0(int, int (*)(int), int) __asm__("AddDmacHandler");
void ADXM_SetupThrd_x001581C0(ADXM_TPRM_x001581C0* tprm) __asm__("func_00157718");
void func_001581C0_x001581C0(ADXPS2_TPRM_x001581C0* tprm) __asm__("func_001581C0");
/* ADXPS2_SetupThrd: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001581C0_x001581C0(ADXPS2_TPRM_x001581C0* tprm) {
    ADXM_TPRM_EX_x001581C0 _tprm;
    ADXM_TPRM_EX_x001581C0* tprm_p;
    if (tprm != 0) {
        _tprm.prio_main = tprm->prio_main;
        _tprm.prio_lock = tprm->prio_lock;
        _tprm.prio_safe = tprm->prio_safe;
        _tprm.prio_vsync = tprm->prio_adx + 1;
        _tprm.prio_mwidle = 25;
        _tprm.prio_usrvsync = tprm->prio_adx;
        tprm_p = &_tprm;
    } else {
        tprm_p = 0;
    }
    ADXM_SetupThrd_x001581C0(tprm_p);
}
void func_00158220(void) {
    func_001578F8();
}
void ADXM_Lock_x00158238(void) __asm__("func_00157E70");
void ADXM_Unlock_x00158238(void) __asm__("func_00157E88");
typedef struct SfdSj_x00158238 SfdSj_x00158238;
typedef struct SfdSjChunk_x00158238 {
    char *data;
    int len;
} SfdSjChunk_x00158238;
typedef struct SfdSjVtbl_x00158238 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00158238 *sj);
    int (*getUuid)(SfdSj_x00158238 *sj);
    void (*reset)(SfdSj_x00158238 *sj);
    void (*getChunk)(SfdSj_x00158238 *sj, int id, int n, SfdSjChunk_x00158238 *ck);
    void (*ungetChunk)(SfdSj_x00158238 *sj, int id, SfdSjChunk_x00158238 *ck);
    void (*putChunk)(SfdSj_x00158238 *sj, int id, SfdSjChunk_x00158238 *ck);
    int (*getNumData)(SfdSj_x00158238 *sj, int id);
} SfdSjVtbl_x00158238;
struct SfdSj_x00158238 {
    SfdSjVtbl_x00158238 *vtbl;
};
typedef struct AdxPdObj_x00158238 {
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
} AdxPdObj_x00158238;
typedef struct AdxDecPara_x00158238 {
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
} AdxDecPara_x00158238;
struct Pl2Enc_x00158238;
typedef struct AdxbObj_x00158238 AdxbObj_x00158238;
typedef short *(*AdxbGetWrFunc_x00158238)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00158238)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00158238 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00158238 *xpd;
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
    AdxDecPara_x00158238 dp;
    AdxbGetWrFunc_x00158238 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00158238 addwrfunc;
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
    struct Pl2Enc_x00158238 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00158238(AdxbObj_x00158238 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00158238 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00158238 *adxb;
    SfdSj_x00158238 *sji;
    SfdSj_x00158238 *sjo[2];
    SfdSjChunk_x00158238 cki;
    SfdSjChunk_x00158238 cko[2];
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
} AdxSjdObj_x00158238;
extern void ADXSJD_EntryFltFunc_x00158238(AdxSjdObj_x00158238 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00158238(AdxSjdObj_x00158238 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00158238)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00158238)(CvFsErrFn_x00158238 func, void *obj);
typedef int (*CvFsPathFn_x00158238)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00158238)(void);
typedef int (*CvFsOpenFn_x00158238)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00158238)(int fd);
typedef int (*CvFsFdIntFn_x00158238)(int fd);
typedef int (*CvFsSeekFn_x00158238)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00158238)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00158238)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00158238)(void);
typedef int (*CvFsLoadDirInfoFn_x00158238)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00158238)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00158238)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00158238 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00158238 entry_err_func;
    CvFsPathFn_x00158238 get_file_size;
    CvFsGetFreeSizeFn_x00158238 get_free_size;
    CvFsOpenFn_x00158238 open;
    CvFsFdFn_x00158238 close;
    CvFsSeekFn_x00158238 seek;
    CvFsFdIntFn_x00158238 tell;
    CvFsXferFn_x00158238 req_rd;
    CvFsXferFn_x00158238 req_wr;
    CvFsFdFn_x00158238 stop_tr;
    CvFsFdIntFn_x00158238 get_stat;
    CvFsFdIntFn_x00158238 get_sct_len;
    CvFsSetSctLenFn_x00158238 set_sct_len;
    CvFsFdIntFn_x00158238 get_num_tr;
    CvFsPathFn_x00158238 change_dir;
    CvFsPathFn_x00158238 is_exist_file;
    CvFsGetNumFilesFn_x00158238 get_num_files;
    CvFsLoadDirInfoFn_x00158238 load_dir_info;
    CvFsFdIntFn_x00158238 get_max_byte_rate;
    CvFsPathFn_x00158238 make_dir;
    CvFsPathFn_x00158238 remove_dir;
    CvFsPathFn_x00158238 delete_file;
    CvFsGetFileSizeExFn_x00158238 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00158238 opt_fn2;
} CvFsVtbl_x00158238;
typedef struct CvFsHandle_x00158238 {
    CvFsVtbl_x00158238 *vtbl;
    int fd;
} CvFsHandle_x00158238;
extern CvFsVtbl_x00158238 *addDevice_x00158238(char *devname, CvFsVtbl_x00158238 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00158238 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00158238 *sj;
    CvFsHandle_x00158238 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00158238 rdck;
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
} AdxStmObj_x00158238;
extern void ADXSTM_EntryEosFunc_x00158238(AdxStmObj_x00158238 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
void ADXT_ExecServer_x00158238(void) __asm__("func_0015F5F0");
void ADXT_ExecFsSvr_x00158238(void) __asm__("func_00156048");
extern int adxps2_server_busy_x00158238 __asm__("D_00405DB8");
void ADXM_Lock_x00158238(void) __asm__("func_00157E70");
void ADXM_Unlock_x00158238(void) __asm__("func_00157E88");
void func_00158238_x00158238(void) __asm__("func_00158238");
/* ADXPS2_ExecServerLocked: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00158238_x00158238(void) {
    ADXM_Lock_x00158238();
    if (adxps2_server_busy_x00158238 == 0) {
        adxps2_server_busy_x00158238 = 1;
        ADXM_Unlock_x00158238();
        ADXT_ExecServer_x00158238();
        ADXT_ExecFsSvr_x00158238();
        adxps2_server_busy_x00158238 = 0;
    } else {
        ADXM_Unlock_x00158238();
    }
}
void func_001582A0(void) {
    func_0016FF40();
}
void func_001582B8(void) {
    func_0016FF58();
}
struct ThreadParam_x001582D0 {
    int status;
    void (*entry)(void *);
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    unsigned int attr;
    unsigned int option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int GetThreadId_x001582D0(void) __asm__("GetThreadId");
int ReferThreadStatus_x001582D0(int thread, struct ThreadParam_x001582D0 *status) __asm__("ReferThreadStatus");
int ChangeThreadPriority_x001582D0(int thread, int priority) __asm__("ChangeThreadPriority");
typedef void (*SvmFunc_x001582D0)(void *obj);
void SVM_SetCbBdr_x001582D0(int id, SvmFunc_x001582D0 func, void *obj) __asm__("func_00170588");
void SVM_SetCbLock_x001582D0(SvmFunc_x001582D0 func, void *obj) __asm__("func_00170660");
void SVM_SetCbUnlock_x001582D0(SvmFunc_x001582D0 func, void *obj) __asm__("func_00170678");
void SVM_Init_x001582D0(void) __asm__("func_00170968");
typedef struct AdxmThreadPrmEx_x001582D0 {
    int lockPrio;
    int safePrio;
    int usrVsyncPrio;
    int vsyncPrio;
    int fsPrio;
    int mainPrio;
    int mwIdlePrio;
    int usrIdlePrio;
    void *usrVsyncStack;
    int usrVsyncStackSize;
    void *usrIdleStack;
    int usrIdleStackSize;
} AdxmThreadPrmEx_x001582D0;
typedef struct SfdSj_x001582D0 SfdSj_x001582D0;
typedef struct SfdSjChunk_x001582D0 {
    char *data;
    int len;
} SfdSjChunk_x001582D0;
typedef struct SfdSjVtbl_x001582D0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001582D0 *sj);
    int (*getUuid)(SfdSj_x001582D0 *sj);
    void (*reset)(SfdSj_x001582D0 *sj);
    void (*getChunk)(SfdSj_x001582D0 *sj, int id, int n, SfdSjChunk_x001582D0 *ck);
    void (*ungetChunk)(SfdSj_x001582D0 *sj, int id, SfdSjChunk_x001582D0 *ck);
    void (*putChunk)(SfdSj_x001582D0 *sj, int id, SfdSjChunk_x001582D0 *ck);
    int (*getNumData)(SfdSj_x001582D0 *sj, int id);
} SfdSjVtbl_x001582D0;
struct SfdSj_x001582D0 {
    SfdSjVtbl_x001582D0 *vtbl;
};
typedef struct AdxPdObj_x001582D0 {
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
} AdxPdObj_x001582D0;
typedef struct AdxDecPara_x001582D0 {
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
} AdxDecPara_x001582D0;
struct Pl2Enc_x001582D0;
typedef struct AdxbObj_x001582D0 AdxbObj_x001582D0;
typedef short *(*AdxbGetWrFunc_x001582D0)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x001582D0)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x001582D0 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x001582D0 *xpd;
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
    AdxDecPara_x001582D0 dp;
    AdxbGetWrFunc_x001582D0 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x001582D0 addwrfunc;
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
    struct Pl2Enc_x001582D0 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x001582D0(AdxbObj_x001582D0 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x001582D0 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x001582D0 *adxb;
    SfdSj_x001582D0 *sji;
    SfdSj_x001582D0 *sjo[2];
    SfdSjChunk_x001582D0 cki;
    SfdSjChunk_x001582D0 cko[2];
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
} AdxSjdObj_x001582D0;
extern void ADXSJD_EntryFltFunc_x001582D0(AdxSjdObj_x001582D0 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x001582D0(AdxSjdObj_x001582D0 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x001582D0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x001582D0)(CvFsErrFn_x001582D0 func, void *obj);
typedef int (*CvFsPathFn_x001582D0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x001582D0)(void);
typedef int (*CvFsOpenFn_x001582D0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x001582D0)(int fd);
typedef int (*CvFsFdIntFn_x001582D0)(int fd);
typedef int (*CvFsSeekFn_x001582D0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x001582D0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x001582D0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x001582D0)(void);
typedef int (*CvFsLoadDirInfoFn_x001582D0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x001582D0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x001582D0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x001582D0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x001582D0 entry_err_func;
    CvFsPathFn_x001582D0 get_file_size;
    CvFsGetFreeSizeFn_x001582D0 get_free_size;
    CvFsOpenFn_x001582D0 open;
    CvFsFdFn_x001582D0 close;
    CvFsSeekFn_x001582D0 seek;
    CvFsFdIntFn_x001582D0 tell;
    CvFsXferFn_x001582D0 req_rd;
    CvFsXferFn_x001582D0 req_wr;
    CvFsFdFn_x001582D0 stop_tr;
    CvFsFdIntFn_x001582D0 get_stat;
    CvFsFdIntFn_x001582D0 get_sct_len;
    CvFsSetSctLenFn_x001582D0 set_sct_len;
    CvFsFdIntFn_x001582D0 get_num_tr;
    CvFsPathFn_x001582D0 change_dir;
    CvFsPathFn_x001582D0 is_exist_file;
    CvFsGetNumFilesFn_x001582D0 get_num_files;
    CvFsLoadDirInfoFn_x001582D0 load_dir_info;
    CvFsFdIntFn_x001582D0 get_max_byte_rate;
    CvFsPathFn_x001582D0 make_dir;
    CvFsPathFn_x001582D0 remove_dir;
    CvFsPathFn_x001582D0 delete_file;
    CvFsGetFileSizeExFn_x001582D0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x001582D0 opt_fn2;
} CvFsVtbl_x001582D0;
typedef struct CvFsHandle_x001582D0 {
    CvFsVtbl_x001582D0 *vtbl;
    int fd;
} CvFsHandle_x001582D0;
extern CvFsVtbl_x001582D0 *addDevice_x001582D0(char *devname, CvFsVtbl_x001582D0 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x001582D0 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x001582D0 *sj;
    CvFsHandle_x001582D0 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x001582D0 rdck;
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
} AdxStmObj_x001582D0;
extern void ADXSTM_EntryEosFunc_x001582D0(AdxStmObj_x001582D0 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
extern int adxm_usridle_mode_x001582D0 __asm__("D_00405CA8");
extern int adxm_setup_count_x001582D0 __asm__("D_00405CA4");
extern AdxmThreadPrmEx_x001582D0 adxm_tprm_x001582D0 __asm__("D_00405CB0");
extern volatile int adxm_main_thid_x001582D0 __asm__("D_00405D48");
extern int adxm_main_init_prio_x001582D0 __asm__("D_0040D5D8");
extern char *volatile adxps2_build_x001582D0 __asm__("D_00405CA0");
void _adxm_lock_x001582D0(void *obj) __asm__("func_00156998");
void _adxm_unlock_x001582D0(void *obj) __asm__("func_00156A20");
void adxm_goto_mwidle_border_x001582D0(void *obj) __asm__("func_00156B68");
void adxm_goto_usridle_border_x001582D0(void *obj) __asm__("func_00156B90");
void adxm_SetupSafeThrd_x001582D0(void) __asm__("func_00157238");
void adxm_create_usrvsync_thrd_x001582D0(void *stack, int stackSize) __asm__("func_001572E0");
void adxm_SetupVsyncThrd_x001582D0(void) __asm__("func_00157398");
void adxm_SetupFsThrd_x001582D0(void) __asm__("func_00157420");
void adxm_SetupMwIdleThrd_x001582D0(void) __asm__("func_001574A8");
void adxm_create_usridle_thrd_x001582D0(void *stack, int stackSize) __asm__("func_00157540");
void func_001582D0_x001582D0(AdxmThreadPrmEx_x001582D0 *tprm) __asm__("func_001582D0");
/* ADXM_SetupThrdEx: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001582D0_x001582D0(AdxmThreadPrmEx_x001582D0 *tprm) {
    struct ThreadParam_x001582D0 param;
    adxps2_build_x001582D0;
    if (adxm_setup_count_x001582D0 == 0) {
        SVM_Init_x001582D0();
        SVM_SetCbLock_x001582D0(_adxm_lock_x001582D0, 0);
        SVM_SetCbUnlock_x001582D0(_adxm_unlock_x001582D0, 0);
        if (tprm == 0) {
            adxm_tprm_x001582D0.mainPrio = 24;
            adxm_tprm_x001582D0.lockPrio = 1;
            adxm_tprm_x001582D0.safePrio = 8;
            adxm_tprm_x001582D0.usrVsyncPrio = 15;
            adxm_tprm_x001582D0.vsyncPrio = 16;
            adxm_tprm_x001582D0.fsPrio = 18;
            adxm_tprm_x001582D0.mwIdlePrio = 25;
            adxm_tprm_x001582D0.usrIdlePrio = 26;
            adxm_tprm_x001582D0.usrVsyncStack = 0;
            adxm_tprm_x001582D0.usrVsyncStackSize = 0;
            adxm_tprm_x001582D0.usrIdleStack = 0;
            adxm_tprm_x001582D0.usrIdleStackSize = 0;
        } else {
            adxm_tprm_x001582D0.mainPrio = tprm->mainPrio;
            adxm_tprm_x001582D0.lockPrio = tprm->lockPrio;
            adxm_tprm_x001582D0.safePrio = tprm->safePrio;
            adxm_tprm_x001582D0.usrVsyncPrio = tprm->usrVsyncPrio;
            adxm_tprm_x001582D0.vsyncPrio = tprm->vsyncPrio;
            adxm_tprm_x001582D0.fsPrio = tprm->fsPrio;
            adxm_tprm_x001582D0.mwIdlePrio = tprm->mwIdlePrio;
            adxm_tprm_x001582D0.usrIdlePrio = tprm->usrIdlePrio;
            adxm_tprm_x001582D0.usrVsyncStack = tprm->usrVsyncStack;
            adxm_tprm_x001582D0.usrVsyncStackSize = tprm->usrVsyncStackSize;
            adxm_tprm_x001582D0.usrIdleStack = tprm->usrIdleStack;
            adxm_tprm_x001582D0.usrIdleStackSize = tprm->usrIdleStackSize;
        }
        adxm_main_thid_x001582D0 = GetThreadId_x001582D0();
        ReferThreadStatus_x001582D0(adxm_main_thid_x001582D0, &param);
        adxm_main_init_prio_x001582D0 = param.currentPriority;
        adxm_SetupSafeThrd_x001582D0();
        adxm_create_usrvsync_thrd_x001582D0(adxm_tprm_x001582D0.usrVsyncStack, adxm_tprm_x001582D0.usrVsyncStackSize);
        adxm_SetupVsyncThrd_x001582D0();
        adxm_SetupFsThrd_x001582D0();
        adxm_SetupMwIdleThrd_x001582D0();
        adxm_create_usridle_thrd_x001582D0(adxm_tprm_x001582D0.usrIdleStack, adxm_tprm_x001582D0.usrIdleStackSize);
        ChangeThreadPriority_x001582D0(adxm_main_thid_x001582D0, adxm_tprm_x001582D0.mainPrio);
        SVM_SetCbBdr_x001582D0(6, adxm_goto_mwidle_border_x001582D0, 0);
        SVM_SetCbBdr_x001582D0(7, adxm_goto_usridle_border_x001582D0, 0);
        adxm_usridle_mode_x001582D0 = 1;
    }
    adxm_setup_count_x001582D0++;
}
int ChangeThreadPriority_x001584C0(int thread, int priority) __asm__("ChangeThreadPriority");
typedef void (*SvmFunc_x001584C0)(void *obj);
void SVM_SetCbLock_x001584C0(SvmFunc_x001584C0 func, void *obj) __asm__("func_00170660");
void SVM_SetCbUnlock_x001584C0(SvmFunc_x001584C0 func, void *obj) __asm__("func_00170678");
void SVM_Finish_x001584C0(void) __asm__("func_001709A8");
typedef struct SfdSj_x001584C0 SfdSj_x001584C0;
typedef struct SfdSjChunk_x001584C0 {
    char *data;
    int len;
} SfdSjChunk_x001584C0;
typedef struct SfdSjVtbl_x001584C0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001584C0 *sj);
    int (*getUuid)(SfdSj_x001584C0 *sj);
    void (*reset)(SfdSj_x001584C0 *sj);
    void (*getChunk)(SfdSj_x001584C0 *sj, int id, int n, SfdSjChunk_x001584C0 *ck);
    void (*ungetChunk)(SfdSj_x001584C0 *sj, int id, SfdSjChunk_x001584C0 *ck);
    void (*putChunk)(SfdSj_x001584C0 *sj, int id, SfdSjChunk_x001584C0 *ck);
    int (*getNumData)(SfdSj_x001584C0 *sj, int id);
} SfdSjVtbl_x001584C0;
struct SfdSj_x001584C0 {
    SfdSjVtbl_x001584C0 *vtbl;
};
typedef struct AdxPdObj_x001584C0 {
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
} AdxPdObj_x001584C0;
typedef struct AdxDecPara_x001584C0 {
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
} AdxDecPara_x001584C0;
struct Pl2Enc_x001584C0;
typedef struct AdxbObj_x001584C0 AdxbObj_x001584C0;
typedef short *(*AdxbGetWrFunc_x001584C0)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x001584C0)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x001584C0 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x001584C0 *xpd;
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
    AdxDecPara_x001584C0 dp;
    AdxbGetWrFunc_x001584C0 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x001584C0 addwrfunc;
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
    struct Pl2Enc_x001584C0 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x001584C0(AdxbObj_x001584C0 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x001584C0 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x001584C0 *adxb;
    SfdSj_x001584C0 *sji;
    SfdSj_x001584C0 *sjo[2];
    SfdSjChunk_x001584C0 cki;
    SfdSjChunk_x001584C0 cko[2];
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
} AdxSjdObj_x001584C0;
extern void ADXSJD_EntryFltFunc_x001584C0(AdxSjdObj_x001584C0 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x001584C0(AdxSjdObj_x001584C0 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x001584C0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x001584C0)(CvFsErrFn_x001584C0 func, void *obj);
typedef int (*CvFsPathFn_x001584C0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x001584C0)(void);
typedef int (*CvFsOpenFn_x001584C0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x001584C0)(int fd);
typedef int (*CvFsFdIntFn_x001584C0)(int fd);
typedef int (*CvFsSeekFn_x001584C0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x001584C0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x001584C0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x001584C0)(void);
typedef int (*CvFsLoadDirInfoFn_x001584C0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x001584C0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x001584C0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x001584C0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x001584C0 entry_err_func;
    CvFsPathFn_x001584C0 get_file_size;
    CvFsGetFreeSizeFn_x001584C0 get_free_size;
    CvFsOpenFn_x001584C0 open;
    CvFsFdFn_x001584C0 close;
    CvFsSeekFn_x001584C0 seek;
    CvFsFdIntFn_x001584C0 tell;
    CvFsXferFn_x001584C0 req_rd;
    CvFsXferFn_x001584C0 req_wr;
    CvFsFdFn_x001584C0 stop_tr;
    CvFsFdIntFn_x001584C0 get_stat;
    CvFsFdIntFn_x001584C0 get_sct_len;
    CvFsSetSctLenFn_x001584C0 set_sct_len;
    CvFsFdIntFn_x001584C0 get_num_tr;
    CvFsPathFn_x001584C0 change_dir;
    CvFsPathFn_x001584C0 is_exist_file;
    CvFsGetNumFilesFn_x001584C0 get_num_files;
    CvFsLoadDirInfoFn_x001584C0 load_dir_info;
    CvFsFdIntFn_x001584C0 get_max_byte_rate;
    CvFsPathFn_x001584C0 make_dir;
    CvFsPathFn_x001584C0 remove_dir;
    CvFsPathFn_x001584C0 delete_file;
    CvFsGetFileSizeExFn_x001584C0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x001584C0 opt_fn2;
} CvFsVtbl_x001584C0;
typedef struct CvFsHandle_x001584C0 {
    CvFsVtbl_x001584C0 *vtbl;
    int fd;
} CvFsHandle_x001584C0;
extern CvFsVtbl_x001584C0 *addDevice_x001584C0(char *devname, CvFsVtbl_x001584C0 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x001584C0 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x001584C0 *sj;
    CvFsHandle_x001584C0 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x001584C0 rdck;
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
} AdxStmObj_x001584C0;
extern void ADXSTM_EntryEosFunc_x001584C0(AdxStmObj_x001584C0 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
extern int adxm_usridle_mode_x001584C0 __asm__("D_00405CA8");
extern int adxm_setup_count_x001584C0 __asm__("D_00405CA4");
extern volatile int adxm_main_thid_x001584C0 __asm__("D_00405D48");
extern int adxm_main_init_prio_x001584C0 __asm__("D_0040D5D8");
void adxm_ShutdownMwIdleThrd_x001584C0(void) __asm__("func_00157A60");
void adxm_ShutdownVsyncThrd_x001584C0(void) __asm__("func_00157B30");
void adxm_ShutdownFsThrd_x001584C0(void) __asm__("func_00157C00");
void adxm_ShutdownSafeThrd_x001584C0(void) __asm__("func_00157DA0");
void adxm_ShutdownPreProcedure_x001584C0(void) __asm__("func_001578A8");
void adxm_delete_usridle_thrd_x001584C0(void) __asm__("func_00157990");
void adxm_ShutdownMwIdleThrd_x001584C0(void) __asm__("func_00157A60");
void adxm_ShutdownVsyncThrd_x001584C0(void) __asm__("func_00157B30");
void adxm_ShutdownFsThrd_x001584C0(void) __asm__("func_00157C00");
void adxm_delete_usrvsync_thrd_x001584C0(void) __asm__("func_00157CD0");
void adxm_ShutdownSafeThrd_x001584C0(void) __asm__("func_00157DA0");
void func_001584C0_x001584C0(void) __asm__("func_001584C0");
/* ADXM_ShutdownThrdEx: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxps2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001584C0_x001584C0(void) {
    if (--adxm_setup_count_x001584C0 == 0) {
        adxm_ShutdownPreProcedure_x001584C0();
        adxm_delete_usridle_thrd_x001584C0();
        adxm_ShutdownMwIdleThrd_x001584C0();
        adxm_ShutdownFsThrd_x001584C0();
        adxm_ShutdownVsyncThrd_x001584C0();
        adxm_delete_usrvsync_thrd_x001584C0();
        adxm_ShutdownSafeThrd_x001584C0();
        ChangeThreadPriority_x001584C0(adxm_main_thid_x001584C0, adxm_main_init_prio_x001584C0);
        SVM_SetCbLock_x001584C0(0, 0);
        SVM_SetCbUnlock_x001584C0(0, 0);
        adxm_usridle_mode_x001584C0 = 0;
        SVM_Finish_x001584C0();
    }
}
void func_00158570(s32 arg0, s32 arg1) {
    func_001704C8(1, 0, arg0, arg1);
}
void func_00158598(s32 arg0, s32 arg1) {
    func_001704C8(7, 0, arg0, arg1);
}
void func_001585C0(void) {
    func_001705E0(7);
}
extern s32 D_0047E970_x001585D8 __asm__("D_0047E970");
extern s32 D_0047E978_x001585D8 __asm__("D_0047E978");
void func_001585D8_x001585D8(s32 arg0, int arg1, s32 arg2, int arg3) __asm__("func_001585D8");
void func_001585D8_x001585D8(s32 arg0, int arg1, s32 arg2, int arg3)
{
  u8 *new_var;
  *((s32 *) (((u8 *) (&D_0047E970_x001585D8)) + 0)) = arg0;
  *((s32 *) (((u8 *) (&D_0047E970_x001585D8)) + 4)) = arg1;
  new_var = (u8 *) (&D_0047E978_x001585D8);
  *((s32 *) (new_var + 4)) = arg3;
 if (1) { do {
    }
    while (0);
  }
  *((s32 *) (((u8 *) (&D_0047E978_x001585D8)) + 0)) = arg2;
}
extern s32 D_0047E970_x00158600 __asm__("D_0047E970");
void func_00158600_x00158600(void) __asm__("func_00158600");
void func_00158600_x00158600(void) {
    if (*(s32 (**)(s32))((u8 *)(&D_0047E970_x00158600) + 0) != NULL) {
        (*(s32 (**)(s32))((u8 *)(&D_0047E970_x00158600) + 0))(*(s32 *)((u8 *)(&D_0047E970_x00158600) + 4));
    }
}
void func_00158630(void) {
    if (*(s32 (**)(s32))((u8 *)(&D_0047E978) + 0) != NULL) {
        (*(s32 (**)(s32))((u8 *)(&D_0047E978) + 0))(*(s32 *)((u8 *)(&D_0047E978) + 4));
    }
}
void func_00158660(void) {
    PS2RNA_SetupVoice();
}
u32 func_00158678_x00158678(u8 *arg0, s32 arg1) __asm__("func_00158678");
u32 func_00158678_x00158678(u8 *arg0, s32 arg1)
{
  u8 **temp_a0;
  u8 *temp_a2;
  int new_var;
  new_var = (*((s32 *) (((u8 *) arg0) + 0xC))) + (arg1 * 4);
  temp_a0 = *((u8 ***) (((u8 *) (*((u8 **) (((u8 *) new_var) + 8)))) + 8));
  temp_a2 = *temp_a0;
  return (*((u32 (**)(u8 **, s32, u8 *)) (((u8 *) temp_a2) + 0x24)))(temp_a0, 1, temp_a2) >> 1;
}
u32 func_001586B8_x001586B8(u8 *arg0, s32 arg1) __asm__("func_001586B8");
u32 func_001586B8_x001586B8(u8 *arg0, s32 arg1)
{
  u8 **temp_a0;
  u8 *new_var;
  u8 *temp_a2;
  new_var = (u8 *) ((*((s32 *) (((u8 *) arg0) + 0xC))) + (arg1 * 4));
  temp_a0 = *((u8 ***) (((u8 *) (*((u8 **) (new_var + 8)))) + 8));
  temp_a2 = *temp_a0;
  return (*((u32 (**)(u8 **, s32, u8 *)) (((u8 *) temp_a2) + 0x24)))(temp_a0, 0, temp_a2) >> 1;
}
u32 func_0016F640_x001586F8(s32, s32) __asm__("func_0016F640");
u32 func_001586F8_x001586F8(u8 *arg0, s32 arg1) __asm__("func_001586F8");
u32 func_001586F8_x001586F8(u8 *arg0, s32 arg1)
{
  int new_var;
  new_var = 1;
  return func_0016F640_x001586F8(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) ((*((s32 *) (((u8 *) arg0) + 0xC))) + (arg1 * 4))) - -8)))) + 4)), 1) >> new_var;
}
u32 func_0016F640_x00158730(s32, s32) __asm__("func_0016F640");
u32 func_00158730_x00158730(u8 *arg0, s32 arg1) __asm__("func_00158730");
u32 func_00158730_x00158730(u8 *arg0, s32 arg1)
{
  int new_var;
  new_var = (*((s32 *) (((u8 *) arg0) + 0xC))) + (arg1 * 4);
  return func_0016F640_x00158730(*((s32 *) (((u8 *) (*((u8 **) (((u8 *) new_var) + 8)))) + 4)), 0) >> 1;
}
void func_00158768(void) {
    func_0016C730();
}
void func_00158780(void) {
    func_0016C838();
}
void func_00158798(void) {
    func_0016C8A8();
}
void func_001587B0(u8 *arg0) {
    func_0016C910(*(s32 *)((u8 *)arg0 + 0xC));
}
void func_001587C8(void) {
    func_0016C460();
}
void func_001587E0(void) {
    func_0016C968();
}
void func_001587F8(void) {

}
void func_00158800(void) {
    func_0016CA28();
}
typedef unsigned int u32_x00158818;
extern u32_x00158818 fn_8005B0C4_x00158818(u32_x00158818, u32_x00158818) __asm__("func_0016CFD0");
extern u32_x00158818 fn_8005B264_x00158818(u32_x00158818, u32_x00158818) __asm__("func_0016CF38");
extern u32_x00158818 fn_8005B464_x00158818(u32_x00158818) __asm__("func_0016CDA8");
void func_00158818_x00158818(u32_x00158818 arg0) __asm__("func_00158818");
/* fn_8004EEE4: from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_8004EEE4.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_00158818_x00158818(u32_x00158818 arg0) {
    fn_8005B0C4_x00158818(arg0, 0);
    fn_8005B264_x00158818(arg0, 0);
    fn_8005B464_x00158818(arg0);
}
void func_00158850(void) {
    PS2RNA_Start();
}
void func_00158868(void) {
    func_0016CED8();
}
void func_00158880(void) {
    func_0016CF38();
}
void func_00158898(void) {
    func_0016CFD0();
}
void func_001588B0(void) {
    func_0016D128();
}
void func_001588C8(void) {
    func_0016D160();
}
void func_001588E0(void) {
    func_0016D1C8();
}
typedef struct SfdSj_x001588F8 SfdSj_x001588F8;
typedef struct SfdSjChunk_x001588F8 {
    char *data;
    int len;
} SfdSjChunk_x001588F8;
typedef struct SfdSjVtbl_x001588F8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001588F8 *sj);
    int (*getUuid)(SfdSj_x001588F8 *sj);
    void (*reset)(SfdSj_x001588F8 *sj);
    void (*getChunk)(SfdSj_x001588F8 *sj, int id, int n, SfdSjChunk_x001588F8 *ck);
    void (*ungetChunk)(SfdSj_x001588F8 *sj, int id, SfdSjChunk_x001588F8 *ck);
    void (*putChunk)(SfdSj_x001588F8 *sj, int id, SfdSjChunk_x001588F8 *ck);
    int (*getNumData)(SfdSj_x001588F8 *sj, int id);
} SfdSjVtbl_x001588F8;
struct SfdSj_x001588F8 {
    SfdSjVtbl_x001588F8 *vtbl;
};
typedef struct AdxPdObj_x001588F8 {
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
} AdxPdObj_x001588F8;
typedef struct AdxDecPara_x001588F8 {
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
} AdxDecPara_x001588F8;
struct Pl2Enc_x001588F8;
typedef struct AdxbObj_x001588F8 AdxbObj_x001588F8;
typedef short *(*AdxbGetWrFunc_x001588F8)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x001588F8)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x001588F8 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x001588F8 *xpd;
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
    AdxDecPara_x001588F8 dp;
    AdxbGetWrFunc_x001588F8 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x001588F8 addwrfunc;
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
    struct Pl2Enc_x001588F8 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x001588F8(AdxbObj_x001588F8 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x001588F8 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x001588F8 *adxb;
    SfdSj_x001588F8 *sji;
    SfdSj_x001588F8 *sjo[2];
    SfdSjChunk_x001588F8 cki;
    SfdSjChunk_x001588F8 cko[2];
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
} AdxSjdObj_x001588F8;
extern void ADXSJD_EntryFltFunc_x001588F8(AdxSjdObj_x001588F8 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x001588F8(AdxSjdObj_x001588F8 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x001588F8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x001588F8)(CvFsErrFn_x001588F8 func, void *obj);
typedef int (*CvFsPathFn_x001588F8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x001588F8)(void);
typedef int (*CvFsOpenFn_x001588F8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x001588F8)(int fd);
typedef int (*CvFsFdIntFn_x001588F8)(int fd);
typedef int (*CvFsSeekFn_x001588F8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x001588F8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x001588F8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x001588F8)(void);
typedef int (*CvFsLoadDirInfoFn_x001588F8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x001588F8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x001588F8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x001588F8 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x001588F8 entry_err_func;
    CvFsPathFn_x001588F8 get_file_size;
    CvFsGetFreeSizeFn_x001588F8 get_free_size;
    CvFsOpenFn_x001588F8 open;
    CvFsFdFn_x001588F8 close;
    CvFsSeekFn_x001588F8 seek;
    CvFsFdIntFn_x001588F8 tell;
    CvFsXferFn_x001588F8 req_rd;
    CvFsXferFn_x001588F8 req_wr;
    CvFsFdFn_x001588F8 stop_tr;
    CvFsFdIntFn_x001588F8 get_stat;
    CvFsFdIntFn_x001588F8 get_sct_len;
    CvFsSetSctLenFn_x001588F8 set_sct_len;
    CvFsFdIntFn_x001588F8 get_num_tr;
    CvFsPathFn_x001588F8 change_dir;
    CvFsPathFn_x001588F8 is_exist_file;
    CvFsGetNumFilesFn_x001588F8 get_num_files;
    CvFsLoadDirInfoFn_x001588F8 load_dir_info;
    CvFsFdIntFn_x001588F8 get_max_byte_rate;
    CvFsPathFn_x001588F8 make_dir;
    CvFsPathFn_x001588F8 remove_dir;
    CvFsPathFn_x001588F8 delete_file;
    CvFsGetFileSizeExFn_x001588F8 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x001588F8 opt_fn2;
} CvFsVtbl_x001588F8;
typedef struct CvFsHandle_x001588F8 {
    CvFsVtbl_x001588F8 *vtbl;
    int fd;
} CvFsHandle_x001588F8;
extern CvFsVtbl_x001588F8 *addDevice_x001588F8(char *devname, CvFsVtbl_x001588F8 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x001588F8 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x001588F8 *sj;
    CvFsHandle_x001588F8 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x001588F8 rdck;
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
} AdxStmObj_x001588F8;
extern void ADXSTM_EntryEosFunc_x001588F8(AdxStmObj_x001588F8 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
void ADXMSG_PrintErr_x001588F8(const char *format, ...) __asm__("scePrintf");
extern char ext_str0_x001588F8[] __asm__("D_004616C8");
void ADXRNA_GetStat_x001588F8(void) __asm__("ADXRNA_GetStat");
/* ADXRNA_GetStat_x001588F8: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxrna.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void ADXRNA_GetStat_x001588F8(void) {
    ADXMSG_PrintErr_x001588F8(ext_str0_x001588F8);
    for (;;) {
    }
}
void func_0016D3E8_x00158930(void) __asm__("func_0016D3E8");
void func_00158930_x00158930(void) __asm__("func_00158930");
void func_00158930_x00158930(void)
{
    func_0016D3E8_x00158930();
}
void func_00158948(void) {
    PS2RNA_SetStartSmpl();
}
void func_00158960(void) {
    func_0016D4D8();
}
void func_00158978(void) {
    func_0016D508();
}
void func_00158990(void) {
    func_0016D5E0();
}
s32 func_0016D620_x001589A8() __asm__("func_0016D620");
void fn_8004EDC4_x001589A8(void) __asm__("fn_8004EDC4");
void fn_8004EDC4_x001589A8(void) {
    func_0016D620_x001589A8();
}
void func_001589C0(void) {
    func_0016D670();
}
void func_001589D8(void) {
    PS2RNA_SetBitPerSmpl();
}
void func_001589F0(void) {
    func_0016D798();
}
void func_00158A08(void) {
    func_0016D7C8();
}
void func_00158A20(void) {
    func_0016D7F8();
}
void func_00158A38(void) {
    func_0016D830();
}
void func_00158A50(void) {
    func_0016D860();
}
void func_00158A68(void) {
    PS2RNA_DiscardData();
}
void func_00158A80(void) {

}
void func_00158A88(void) {

}
void func_00158A90(void) {
    func_0016D000();
}
void func_00158AA8(void) {
    func_0016D030();
}
void func_00158AC0(void) {

}
void func_00158AC8(void) {

}
s32 func_00158AD0(void) {
    PS2RNA_SetStmHdInfo();
    return 0;
}
void func_00158AF0(void) {
    D_0040D5E0 += 1;
}
void func_00158B08(void) {
    D_0040D5E0 -= 1;
}
void func_00158B20(void) {
    func_001505E8();
    memset(&D_0040D5F0, 0, 0xA80);
}
void func_00158B50(void) {
    memset(&D_0040D5F0, 0, 0xA80);
}
typedef unsigned char Uint8_x00158B78;
typedef signed char Sint8_x00158B78;
typedef signed short Sint16_x00158B78;
typedef signed int Sint32_x00158B78;
typedef char Char8_x00158B78;
typedef struct SJ_OBJ_x00158B78 *SJ_x00158B78;
typedef struct {
        Uint8_x00158B78 *data;
        Sint32_x00158B78 len;
} SJCK_x00158B78;
typedef struct {
        Uint8_x00158B78 data[16];
} SJUUID_x00158B78;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00158B78 sj);
        const SJUUID_x00158B78 *(*GetUuid)(SJ_x00158B78 sj);
        void (*Reset)(SJ_x00158B78 sj);
        void (*GetChunk)(SJ_x00158B78 sj, Sint32_x00158B78 id, Sint32_x00158B78 nbyte, SJCK_x00158B78 *ck);
        void (*UngetChunk)(SJ_x00158B78 sj, Sint32_x00158B78 id, SJCK_x00158B78 *ck);
        void (*PutChunk)(SJ_x00158B78 sj, Sint32_x00158B78 id, SJCK_x00158B78 *ck);
        Sint32_x00158B78 (*GetNumData)(SJ_x00158B78 sj, Sint32_x00158B78 id);
        Sint32_x00158B78 (*IsGetChunk)(SJ_x00158B78 sj, Sint32_x00158B78 id, Sint32_x00158B78 nbyte, Sint32_x00158B78 *rbyte);
        void (*EntryErrFunc)(SJ_x00158B78 sj, void (*func)(void *obj, Char8_x00158B78 *msg), void *obj);
} SJ_IF_x00158B78;
struct SJ_OBJ_x00158B78 {
        SJ_IF_x00158B78 *vtbl;
};
typedef struct ADXPD_OBJ *ADXPD_x00158B78;
typedef struct {
        Sint16_x00158B78 used;
        Sint16_x00158B78 x02;
        Sint32_x00158B78 stat;
        ADXPD_x00158B78 pd;
        Sint8_x00158B78 x0c;
        Sint8_x00158B78 bps;
        Sint8_x00158B78 nch;
        Sint8_x00158B78 x0f;
        Sint32_x00158B78 fmt;
        Sint32_x00158B78 sfreq;
        Sint32_x00158B78 total_nsmpl;
        Sint16_x00158B78 x1c;
        Uint8_x00158B78 pad1e[2];
        Sint32_x00158B78 x20;
        Sint16_x00158B78 x24;
        Sint16_x00158B78 x26;
        Sint32_x00158B78 x28;
        Sint32_x00158B78 x2c;
        Sint32_x00158B78 x30;
        Sint32_x00158B78 x34;
        Sint32_x00158B78 x38;
        Sint32_x00158B78 x3c;
        Sint32_x00158B78 x40;
        Sint32_x00158B78 x44;
        Sint16_x00158B78 *inbuf;
        Sint32_x00158B78 inbuf_nsmpl;
        Sint32_x00158B78 out_nch;
        Sint32_x00158B78 x54;
        Sint32_x00158B78 out_fmt;
        Sint16_x00158B78 *pcmbuf;
        Sint32_x00158B78 pcmbuf_nsmpl;
        Sint32_x00158B78 pcmbuf_chofst;
        Sint32_x00158B78 wr_pos;
        Sint32_x00158B78 wr_nsmpl;
        Sint32_x00158B78 wr_x70;
        Sint32_x00158B78 x74;
        void (*getwr_func)(void *obj, Sint32_x00158B78 *pos, Sint32_x00158B78 *nsmpl, Sint32_x00158B78 *x70);
        void *getwr_obj;
        void (*addwr_func)(void *obj, Sint32_x00158B78 nbyte, Sint32_x00158B78 nsmpl);
        void *addwr_obj;
        Sint32_x00158B78 x88;
        Sint32_x00158B78 x8c;
        Sint32_x00158B78 dec_nsmpl;
        Sint32_x00158B78 dec_nbyte;
        Sint16_x00158B78 x98;
        Sint16_x00158B78 x9a;
        Sint16_x00158B78 x9c;
        Uint8_x00158B78 pad9e[2];
        Sint16_x00158B78 key[3];
        Sint16_x00158B78 extprm[3];
        Sint16_x00158B78 dly[2][2];
        void *ahx;
        Sint32_x00158B78 nsmpl;
        Sint32_x00158B78 nsmpl96;
        Uint8_x00158B78 padc0[0xCC - 0xC0];
        Sint32_x00158B78 ainf_len;
        Uint8_x00158B78 ainf[16];
        Sint16_x00158B78 def_outvol;
        Sint16_x00158B78 def_pan[2];
        Uint8_x00158B78 padda[2];
        void *xdc;
        Uint8_x00158B78 pade0[8];
        Sint32_x00158B78 cb_nbyte;
        Sint32_x00158B78 xec;
        void (*cb_func)(void *obj, Sint32_x00158B78 nbyte, Sint32_x00158B78 nsmpl);
        void *cb_obj;
} ADXB_OBJ_x00158B78;
typedef ADXB_OBJ_x00158B78 *ADXB_x00158B78;
typedef struct {
        Sint8_x00158B78 used;
        Sint8_x00158B78 stat;
        Sint8_x00158B78 nch;
        Sint8_x00158B78 spsd;
        ADXB_x00158B78 adxb;
        SJ_x00158B78 sji;
        SJ_x00158B78 sjo[2];
        SJCK_x00158B78 inck;
        SJCK_x00158B78 outck[2];
        Sint32_x00158B78 dec_nsmpl;
        Sint32_x00158B78 dec_nbyte;
        Sint32_x00158B78 decpos;
        Sint32_x00158B78 maxdecsmpl;
        Sint32_x00158B78 trap_nsmpl;
        Sint32_x00158B78 trap_cnt;
        Sint32_x00158B78 trap_dtlen;
        void (*trapfn)(void *obj);
        void *trapobj;
        void (*outfn)(void *obj, Sint32_x00158B78 ch, Uint8_x00158B78 *data, Sint32_x00158B78 len);
        void *outobj;
        Uint8_x00158B78 spsdinf[0x40];
        Sint32_x00158B78 hdrlen;
        Sint32_x00158B78 lnksw;
        Sint32_x00158B78 pad_nsmpl;
        Sint32_x00158B78 skip_nsmpl;
} ADXSJD_OBJ_x00158B78;
typedef ADXSJD_OBJ_x00158B78 *ADXSJD_x00158B78;
extern void (*pl2setsfreqfunc_x00158B78)(ADXB_x00158B78 adxb, Sint32_x00158B78 sfreq) __asm__("pl2setsfreqfunc");
void func_00158B78_x00158B78(ADXSJD_x00158B78 sjd) __asm__("func_00158B78");
/* adxsjd_reset: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/adx_sjd.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_00158B78_x00158B78(ADXSJD_x00158B78 sjd)
{
        sjd->hdrlen = 0;
        sjd->dec_nsmpl = 0;
        sjd->dec_nbyte = 0;
        sjd->decpos = 0;
        sjd->maxdecsmpl = 0x7FFFFFFF;
        sjd->trap_nsmpl = -1;
        sjd->trap_cnt = 0;
        sjd->trap_dtlen = 0;
        sjd->spsd = 0;
        sjd->pad_nsmpl = 0;
        sjd->skip_nsmpl = 0;
}
typedef unsigned char Uint8_x00158BB8;
typedef signed char Sint8_x00158BB8;
typedef signed short Sint16_x00158BB8;
typedef signed int Sint32_x00158BB8;
typedef char Char8_x00158BB8;
typedef struct SJ_OBJ_x00158BB8 *SJ_x00158BB8;
typedef struct {
        Uint8_x00158BB8 *data;
        Sint32_x00158BB8 len;
} SJCK_x00158BB8;
typedef struct {
        Uint8_x00158BB8 data[16];
} SJUUID_x00158BB8;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x00158BB8 sj);
        const SJUUID_x00158BB8 *(*GetUuid)(SJ_x00158BB8 sj);
        void (*Reset)(SJ_x00158BB8 sj);
        void (*GetChunk)(SJ_x00158BB8 sj, Sint32_x00158BB8 id, Sint32_x00158BB8 nbyte, SJCK_x00158BB8 *ck);
        void (*UngetChunk)(SJ_x00158BB8 sj, Sint32_x00158BB8 id, SJCK_x00158BB8 *ck);
        void (*PutChunk)(SJ_x00158BB8 sj, Sint32_x00158BB8 id, SJCK_x00158BB8 *ck);
        Sint32_x00158BB8 (*GetNumData)(SJ_x00158BB8 sj, Sint32_x00158BB8 id);
        Sint32_x00158BB8 (*IsGetChunk)(SJ_x00158BB8 sj, Sint32_x00158BB8 id, Sint32_x00158BB8 nbyte, Sint32_x00158BB8 *rbyte);
        void (*EntryErrFunc)(SJ_x00158BB8 sj, void (*func)(void *obj, Char8_x00158BB8 *msg), void *obj);
} SJ_IF_x00158BB8;
struct SJ_OBJ_x00158BB8 {
        SJ_IF_x00158BB8 *vtbl;
};
typedef struct ADXPD_OBJ *ADXPD_x00158BB8;
typedef struct {
        Sint16_x00158BB8 used;
        Sint16_x00158BB8 x02;
        Sint32_x00158BB8 stat;
        ADXPD_x00158BB8 pd;
        Sint8_x00158BB8 x0c;
        Sint8_x00158BB8 bps;
        Sint8_x00158BB8 nch;
        Sint8_x00158BB8 x0f;
        Sint32_x00158BB8 fmt;
        Sint32_x00158BB8 sfreq;
        Sint32_x00158BB8 total_nsmpl;
        Sint16_x00158BB8 x1c;
        Uint8_x00158BB8 pad1e[2];
        Sint32_x00158BB8 x20;
        Sint16_x00158BB8 x24;
        Sint16_x00158BB8 x26;
        Sint32_x00158BB8 x28;
        Sint32_x00158BB8 x2c;
        Sint32_x00158BB8 x30;
        Sint32_x00158BB8 x34;
        Sint32_x00158BB8 x38;
        Sint32_x00158BB8 x3c;
        Sint32_x00158BB8 x40;
        Sint32_x00158BB8 x44;
        Sint16_x00158BB8 *inbuf;
        Sint32_x00158BB8 inbuf_nsmpl;
        Sint32_x00158BB8 out_nch;
        Sint32_x00158BB8 x54;
        Sint32_x00158BB8 out_fmt;
        Sint16_x00158BB8 *pcmbuf;
        Sint32_x00158BB8 pcmbuf_nsmpl;
        Sint32_x00158BB8 pcmbuf_chofst;
        Sint32_x00158BB8 wr_pos;
        Sint32_x00158BB8 wr_nsmpl;
        Sint32_x00158BB8 wr_x70;
        Sint32_x00158BB8 x74;
        void (*getwr_func)(void *obj, Sint32_x00158BB8 *pos, Sint32_x00158BB8 *nsmpl, Sint32_x00158BB8 *x70);
        void *getwr_obj;
        void (*addwr_func)(void *obj, Sint32_x00158BB8 nbyte, Sint32_x00158BB8 nsmpl);
        void *addwr_obj;
        Sint32_x00158BB8 x88;
        Sint32_x00158BB8 x8c;
        Sint32_x00158BB8 dec_nsmpl;
        Sint32_x00158BB8 dec_nbyte;
        Sint16_x00158BB8 x98;
        Sint16_x00158BB8 x9a;
        Sint16_x00158BB8 x9c;
        Uint8_x00158BB8 pad9e[2];
        Sint16_x00158BB8 key[3];
        Sint16_x00158BB8 extprm[3];
        Sint16_x00158BB8 dly[2][2];
        void *ahx;
        Sint32_x00158BB8 nsmpl;
        Sint32_x00158BB8 nsmpl96;
        Uint8_x00158BB8 padc0[0xCC - 0xC0];
        Sint32_x00158BB8 ainf_len;
        Uint8_x00158BB8 ainf[16];
        Sint16_x00158BB8 def_outvol;
        Sint16_x00158BB8 def_pan[2];
        Uint8_x00158BB8 padda[2];
        void *xdc;
        Uint8_x00158BB8 pade0[8];
        Sint32_x00158BB8 cb_nbyte;
        Sint32_x00158BB8 xec;
        void (*cb_func)(void *obj, Sint32_x00158BB8 nbyte, Sint32_x00158BB8 nsmpl);
        void *cb_obj;
} ADXB_OBJ_x00158BB8;
typedef ADXB_OBJ_x00158BB8 *ADXB_x00158BB8;
typedef struct {
        Sint8_x00158BB8 used;
        Sint8_x00158BB8 stat;
        Sint8_x00158BB8 nch;
        Sint8_x00158BB8 spsd;
        ADXB_x00158BB8 adxb;
        SJ_x00158BB8 sji;
        SJ_x00158BB8 sjo[2];
        SJCK_x00158BB8 inck;
        SJCK_x00158BB8 outck[2];
        Sint32_x00158BB8 dec_nsmpl;
        Sint32_x00158BB8 dec_nbyte;
        Sint32_x00158BB8 decpos;
        Sint32_x00158BB8 maxdecsmpl;
        Sint32_x00158BB8 trap_nsmpl;
        Sint32_x00158BB8 trap_cnt;
        Sint32_x00158BB8 trap_dtlen;
        void (*trapfn)(void *obj);
        void *trapobj;
        void (*outfn)(void *obj, Sint32_x00158BB8 ch, Uint8_x00158BB8 *data, Sint32_x00158BB8 len);
        void *outobj;
        Uint8_x00158BB8 spsdinf[0x40];
        Sint32_x00158BB8 hdrlen;
        Sint32_x00158BB8 lnksw;
        Sint32_x00158BB8 pad_nsmpl;
        Sint32_x00158BB8 skip_nsmpl;
} ADXSJD_OBJ_x00158BB8;
typedef ADXSJD_OBJ_x00158BB8 *ADXSJD_x00158BB8;
extern ADXB_x00158BB8 ADXB_Create_x00158BB8(Sint32_x00158BB8 nch, void *buf, Sint32_x00158BB8 bsize, Sint32_x00158BB8 xsize) __asm__("func_001506A8");
extern void ADXB_EntryGetWrFunc_x00158BB8(ADXB_x00158BB8 adxb, void *(*fn)(void *, Sint32_x00158BB8 *, Sint32_x00158BB8 *, Sint32_x00158BB8 *), void *obj) __asm__("func_00150D30");
extern Sint32_x00158BB8 SJRBF_GetBufSize_x00158BB8(SJ_x00158BB8 sj) __asm__("func_0016E830");
extern Sint32_x00158BB8 SJRBF_GetXtrSize_x00158BB8(SJ_x00158BB8 sj) __asm__("func_0016E838");
extern void *SJRBF_GetBufPtr_x00158BB8(SJ_x00158BB8 sj) __asm__("func_0016E828");
extern void (*pl2setsfreqfunc_x00158BB8)(ADXB_x00158BB8 adxb, Sint32_x00158BB8 sfreq) __asm__("pl2setsfreqfunc");
extern ADXSJD_OBJ_x00158BB8 adxsjd_obj_x00158BB8[16] __asm__("D_0040D5F0");
void *adxsjd_get_wr_x00158BB8(void *obj, Sint32_x00158BB8 *pos, Sint32_x00158BB8 *nsmpl, Sint32_x00158BB8 *trap) __asm__("func_00159158");
void *adxsjd_get_wr_x00158BB8(void *obj, Sint32_x00158BB8 *pos, Sint32_x00158BB8 *nsmpl, Sint32_x00158BB8 *trap) __asm__("func_00159158");
void adxsjd_reset_x00158BB8(ADXSJD_x00158BB8 sjd) __asm__("func_00158B78");
ADXSJD_x00158BB8 func_00158BB8_x00158BB8(SJ_x00158BB8 sji, Sint32_x00158BB8 nch, SJ_x00158BB8 *sjo) __asm__("func_00158BB8");
/* ADXSJD_Create: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/adx_sjd.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
ADXSJD_x00158BB8 func_00158BB8_x00158BB8(SJ_x00158BB8 sji, Sint32_x00158BB8 nch, SJ_x00158BB8 *sjo)
{
        ADXSJD_x00158BB8 sjd;
        Sint32_x00158BB8 i, j;
        void *buf;
        SJ_x00158BB8 sjo0;
        Sint32_x00158BB8 bsize;
        Sint32_x00158BB8 xsize;
        sjo0 = sjo[0];
        for (i = 0; i < 16; i++) {
                if (adxsjd_obj_x00158BB8[i].used == 0) {
                        break;
                }
        }
        if (i == 16) {
                return 0;
        }
        sjd = &adxsjd_obj_x00158BB8[i];
        buf = SJRBF_GetBufPtr_x00158BB8(sjo0);
        bsize = SJRBF_GetBufSize_x00158BB8(sjo0) / 2;
        xsize = SJRBF_GetXtrSize_x00158BB8(sjo0) / 2;
        sjd->adxb = ADXB_Create_x00158BB8(nch, buf, bsize, bsize + xsize);
        if (sjd->adxb == 0) {
                return 0;
        }
        ADXB_EntryGetWrFunc_x00158BB8(sjd->adxb, adxsjd_get_wr_x00158BB8, sjd);
        sjd->sji = sji;
        sjd->nch = nch;
        for (j = 0; j < nch; j++) {
                sjd->sjo[j] = sjo[j];
        }
        sjd->stat = 0;
        adxsjd_reset_x00158BB8(sjd);
        sjd->trapfn = 0;
        sjd->trapobj = 0;
        sjd->outfn = 0;
        sjd->outobj = 0;
        sjd->used = 1;
        return sjd;
}
void func_00158D38(u8 *arg0) {
    s32 temp_v0;

    if (arg0 != NULL) {
        temp_v0 = *(s32 *)((u8 *)arg0 + 4);
        if (temp_v0 != 0) {
            *(s32 *)((u8 *)arg0 + 4) = 0;
            func_001507E8(temp_v0);
        }
        func_00152508();
        memset(arg0, 0, 0xA8);
        func_00152520();
    }
}
s8 func_00158D98(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 1);
}
void func_00158DA0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 8) = arg1;
    ADXB_AhxTermSupply(*(s32 *)((u8 *)arg0 + 4));
    func_0014EC50(*(s32 *)((u8 *)arg0 + 4), arg1);
}
void func_00158DE0_x00158DE0(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00158DE0");
void func_00158DE0_x00158DE0(s32 arg0, s32 arg1, s32 arg2)
{
  s32 *new_var;
  new_var = (s32 *) (((u8 *) (arg0 + (arg1 * 4))) + 0xC);
  *new_var = arg2;
}
void func_00158DF0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)arg0 + 0x38) = arg1;
    ADXB_SetAhxDecSmpl(*(s32 *)((u8 *)arg0 + 4));
    func_0014EC80(*(s32 *)((u8 *)arg0 + 4), arg1);
}
void func_00158E30(u8 *arg0) {
    ADXB_SetAhxInSj(*(s32 *)((u8 *)arg0 + 4));
    func_0014ECA0(*(s32 *)((u8 *)arg0 + 4));
}
typedef int s32_x00158E60;
typedef s32_x00158E60 ptrdiff_t_x00158E60;
typedef unsigned char Uint8_x00158E60;
typedef char Sint8_x00158E60;
typedef unsigned short Uint16_x00158E60;
typedef signed short Sint16_x00158E60;
typedef unsigned int Uint32_x00158E60;
typedef signed int Sint32_x00158E60;
typedef struct _UUID_x00158E60 {
    Uint32_x00158E60 Data1;
    Uint16_x00158E60 Data2;
    Uint16_x00158E60 Data3;
    Uint8_x00158E60 Data4[8];
} UUID_x00158E60;
typedef struct {
        Sint8_x00158E60 *data;
        Sint32_x00158E60 len;
} SJCK_x00158E60;
typedef struct {
        struct _sj_vtbl_x00158E60 *vtbl;
} SJ_OBJ_x00158E60;
typedef SJ_OBJ_x00158E60 *SJ_x00158E60;
typedef struct _sj_vtbl_x00158E60 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00158E60 sj);
        UUID_x00158E60 *(*GetUuid)(SJ_x00158E60 sj);
        void (*Reset)(SJ_x00158E60 sj);
        void (*GetChunk)(SJ_x00158E60 sj, Sint32_x00158E60 id, Sint32_x00158E60 nbyte, SJCK_x00158E60 *ck);
        void (*UngetChunk)(SJ_x00158E60 sj, Sint32_x00158E60 id, SJCK_x00158E60 *ck);
        void (*PutChunk)(SJ_x00158E60 sj, Sint32_x00158E60 id, SJCK_x00158E60 *ck);
        Sint32_x00158E60 (*GetNumData)(SJ_x00158E60 sj, Sint32_x00158E60 id);
        Sint32_x00158E60 (*IsGetChunk)(SJ_x00158E60 sj, Sint32_x00158E60 id, Sint32_x00158E60 nbyte, Sint32_x00158E60 *rbyte);
        void (*EntryErrFunc)(SJ_x00158E60 sj,
                                        void (*func)(void *obj, Sint32_x00158E60 ecode), void *obj);
} SJ_IF_x00158E60;
extern int* sceCdCallback_x00158E60(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x00158E60 unk0;
               Sint16_x00158E60 unk2;
               Sint16_x00158E60 unk4;
               Sint16_x00158E60 unk6;
} ADXPD_OBJ_SUB_x00158E60;
typedef struct {
               Sint32_x00158E60 used;
               Sint32_x00158E60 unk4;
               Sint32_x00158E60 mode;
               Sint32_x00158E60 stat;
               Sint32_x00158E60 num_blk;
               Sint32_x00158E60 unk14;
               Sint32_x00158E60 unk18;
               Sint32_x00158E60 unk1C;
               Sint32_x00158E60 unk20;
               Sint32_x00158E60 unk24;
               ADXPD_OBJ_SUB_x00158E60 unk28;
               Sint16_x00158E60 unk30;
               Sint16_x00158E60 unk32;
               Sint16_x00158E60 unk34;
               Sint16_x00158E60 unk36;
               Sint16_x00158E60 unk38;
               Sint16_x00158E60 unk3A;
} ADXPD_OBJ_x00158E60;
typedef ADXPD_OBJ_x00158E60* ADXPD_x00158E60;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00158E60;
typedef struct {
               Sint32_x00158E60 unk0;
               Sint32_x00158E60 unk4;
               Sint32_x00158E60 unk8;
               Sint32_x00158E60 unkC;
               Sint32_x00158E60 unk10;
               void* unk14;
               Sint32_x00158E60 unk18;
               Sint32_x00158E60 unk1C;
               Sint32_x00158E60 unk20;
               Sint32_x00158E60 unk24;
               Sint32_x00158E60 unk28;
} ADXB_UNK_x00158E60;
typedef struct {
               Sint16_x00158E60 unk0;
               Sint16_x00158E60 unk2;
               Sint32_x00158E60 stat;
               ADXPD_x00158E60 adxpd;
               Sint8_x00158E60 encoding_type;
               Sint8_x00158E60 sample_bitdepth;
               Sint8_x00158E60 channel_count;
               Sint8_x00158E60 block_size;
               Sint32_x00158E60 samples_per_block;
               Sint32_x00158E60 sample_rate;
               Sint32_x00158E60 total_samples;
               Sint16_x00158E60 unk1C;
               char pad1E[2];
               Sint32_x00158E60 unk20;
               Sint16_x00158E60 unk24;
               Sint16_x00158E60 unk26;
               Sint32_x00158E60 unk28;
               Sint32_x00158E60 unk2C;
               Sint32_x00158E60 unk30;
               Sint32_x00158E60 unk34;
               Sint32_x00158E60 unk38;
               void* unk3C;
               Sint32_x00158E60 unk40;
               Sint32_x00158E60 unk44;
               ADXB_UNK_x00158E60 unk48;
               Sint32_x00158E60 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00158E60*, Sint32_x00158E60*, Sint32_x00158E60*);
               void* object;
               void (*add_wr)(void*, Sint32_x00158E60, Sint32_x00158E60);
               Sint32_x00158E60 unk84;
               Sint32_x00158E60 unk88;
               Sint32_x00158E60 unk8C;
               Sint32_x00158E60 dec_num_sample;
               Sint32_x00158E60 dec_data_len;
               Sint16_x00158E60 format;
               Sint16_x00158E60 unk9A;
               Sint16_x00158E60 unk9C;
               Sint16_x00158E60 unk9E;
               Sint16_x00158E60 unkA0;
               char padA2[0xE];
               Sint32_x00158E60 unkB0;
               Sint32_x00158E60 ahx_dec_samples;
               Sint32_x00158E60 ahx_dec_frames;
               Sint32_x00158E60 unkBC;
               Sint32_x00158E60 ac3_dec_samples;
               Sint32_x00158E60 ac3_dec_frames;
               Sint32_x00158E60 unkC8;
               ADX_UNK_x00158E60 unkCC;
               Sint16_x00158E60 unkDC;
               Sint16_x00158E60 unkDE[2];
               char padE2[2];
               Sint32_x00158E60 unkE4;
               char padE8[8];
} ADXB_OBJ_x00158E60;
typedef ADXB_OBJ_x00158E60* ADXB_x00158E60;
typedef struct {
    Sint8_x00158E60 used;
    Sint8_x00158E60 state;
    Sint8_x00158E60 maxnch;
    Sint8_x00158E60 unk3;
    ADXB_x00158E60 adxb;
    SJ_x00158E60 sji;
    SJ_x00158E60 sjo[2];
    SJCK_x00158E60 unk14;
    SJCK_x00158E60 chunks[2];
    Sint32_x00158E60 unk2C;
    Sint32_x00158E60 unk30;
    Sint32_x00158E60 unk34;
    Sint32_x00158E60 unk38;
    Sint32_x00158E60 trap_num_samples;
    Sint32_x00158E60 trap_count;
    Sint32_x00158E60 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x00158E60, Sint8_x00158E60*, Sint32_x00158E60);
    void* flt_obj;
    Sint8_x00158E60 unk58[0x40];
    Sint32_x00158E60 unk98;
    Sint32_x00158E60 lnkflg;
} ADXSJD_OBJ_x00158E60;
typedef ADXSJD_OBJ_x00158E60* ADXSJD_x00158E60;
extern void ADXB_EntryGetWrFunc_x00158E60(ADXB_x00158E60 adxb, void* (*get_wr)(void*, ptrdiff_t_x00158E60*, Sint32_x00158E60*, Sint32_x00158E60*), void* object) __asm__("ADXB_EntryGetWrFunc");
extern void ADXSJD_EntryTrapFunc_x00158E60(ADXSJD_x00158E60 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
extern void (*pl2setsfreqfunc_x00158E60)(ADXB_x00158E60, Sint32_x00158E60) __asm__("pl2setsfreqfunc");
void adxsjd_clear_x00158E60(ADXSJD_x00158E60 sjd) __asm__("func_00158B78");
void ADXSJD_EntryTrapFunc_x00158E60(ADXSJD_x00158E60 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
void func_00158E60_x00158E60(ADXSJD_x00158E60 sjd) __asm__("func_00158E60");
/* ADXSJD_Start: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_sjd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00158E60_x00158E60(ADXSJD_x00158E60 sjd) {
    adxsjd_clear_x00158E60(sjd);
    sjd->state = 1;
}
void func_00158E90(u8 *arg0) {
    func_00151160(*(s32 *)((u8 *)arg0 + 4));
    *(s8 *)((u8 *)arg0 + 1) = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_001563B0", ADXB_DecodeHeader);
