#include "common.h"

s32 ADXT_Stop();                                /* extern */
s32 func_00157E70();                            /* extern */
s32 func_00157E88();                            /* extern */

s32 func_0016B860(s32, s32);                    /* extern */

s32 func_0016B770(s32, s32, s32);               /* extern */

s32 func_0016B580(s32, s32, s32, s32);          /* extern */

s32 func_0016B3B0(s32, s16, s32, s32);          /* extern */

s32 func_0016B310(s32);                         /* extern */

s32 func_0016B2C0(s32);                         /* extern */

s32 func_0016B190(s32, s32);                        /* extern */

s32 func_0016B130(s32);                         /* extern */

s32 func_0016B0C0(s32);                         /* extern */

s32 func_0016B048(s32, s32);                    /* extern */

s32 func_0016FF58();                            /* extern */

s32 func_0016FF40();                            /* extern */

extern s8 D_004186F8;

extern s32 D_00418684;
extern s32 D_00418688;

typedef void (*CvFsErrFn_x0016A7F8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0016A7F8)(CvFsErrFn_x0016A7F8 func, void *obj);
typedef int (*CvFsPathFn_x0016A7F8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0016A7F8)(void);
typedef int (*CvFsOpenFn_x0016A7F8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0016A7F8)(int fd);
typedef int (*CvFsFdIntFn_x0016A7F8)(int fd);
typedef int (*CvFsSeekFn_x0016A7F8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0016A7F8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0016A7F8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0016A7F8)(void);
typedef int (*CvFsLoadDirInfoFn_x0016A7F8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0016A7F8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0016A7F8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0016A7F8 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0016A7F8 entry_err_func;
    CvFsPathFn_x0016A7F8 get_file_size;
    CvFsGetFreeSizeFn_x0016A7F8 get_free_size;
    CvFsOpenFn_x0016A7F8 open;
    CvFsFdFn_x0016A7F8 close;
    CvFsSeekFn_x0016A7F8 seek;
    CvFsFdIntFn_x0016A7F8 tell;
    CvFsXferFn_x0016A7F8 req_rd;
    CvFsXferFn_x0016A7F8 req_wr;
    CvFsFdFn_x0016A7F8 stop_tr;
    CvFsFdIntFn_x0016A7F8 get_stat;
    CvFsFdIntFn_x0016A7F8 get_sct_len;
    CvFsSetSctLenFn_x0016A7F8 set_sct_len;
    CvFsFdIntFn_x0016A7F8 get_num_tr;
    CvFsPathFn_x0016A7F8 change_dir;
    CvFsPathFn_x0016A7F8 is_exist_file;
    CvFsGetNumFilesFn_x0016A7F8 get_num_files;
    CvFsLoadDirInfoFn_x0016A7F8 load_dir_info;
    CvFsFdIntFn_x0016A7F8 get_max_byte_rate;
    CvFsPathFn_x0016A7F8 make_dir;
    CvFsPathFn_x0016A7F8 remove_dir;
    CvFsPathFn_x0016A7F8 delete_file;
    CvFsGetFileSizeExFn_x0016A7F8 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0016A7F8 opt_fn2;
} CvFsVtbl_x0016A7F8;
extern CvFsVtbl_x0016A7F8 *addDevice_x0016A7F8(char *devname, CvFsVtbl_x0016A7F8 *(*get_if)(void)) __asm__("addDevice");
typedef unsigned int size_t_x0016A7F8;
int sprintf_x0016A7F8(char *, const char *, ...) __asm__("func_00127488");
extern void qsort_x0016A7F8(void *, size_t_x0016A7F8, size_t_x0016A7F8, int (*)(const void *, const void *)) __asm__("qsort");
size_t_x0016A7F8 strlen_x0016A7F8(const char *) __asm__("func_00127BA0");
extern void mfCiEntryErrFunc_x0016A7F8(void (*func)(void *context, const char *message, void *detail), void *context) __asm__("mfCiEntryErrFunc");
extern void (*mfci_err_func_x0016A7F8)(void *context, const char *message, void *detail) __asm__("mfci_err_func");
extern char mfci_msg_x0016A7F8[304] __asm__("D_00418FB8");
void mfci_call_errfn_x0016A7F8(void *detail, const char *message) __asm__("func_0016A7B0");
unsigned long mfci_strtoul_x0016A7F8(const char *s, char **end, int base) __asm__("func_0016A7E0");
void mfCiEntryErrFunc_x0016A7F8(void (*func)(void *context, const char *message, void *detail), void *context) __asm__("mfCiEntryErrFunc");
extern char ext_str0_x0016A7F8[] __asm__("D_00463F88");
extern char ext_str1_x0016A7F8[] __asm__("D_00463F48");
void mfci_call_errfn_x0016A7F8(void *detail, const char *message) __attribute__((weak, section(".b3stub")));
void mfci_call_errfn_x0016A7F8(void *detail, const char *message) {}
unsigned long mfci_strtoul_x0016A7F8(const char *s, char **end, int base) __attribute__((weak, section(".b3stub")));
unsigned long mfci_strtoul_x0016A7F8(const char *s, char **end, int base) {}
char *mfci_get_adr_size_x0016A7F8(char *name, int *size) __asm__("mfci_get_adr_size");
/* mfci_get_adr_size_x0016A7F8: from https://github.com/crashbashash/DW4_Decomp (src/cri/mfci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
char *mfci_get_adr_size_x0016A7F8(char *name, int *size)
{
    char *p;
    char *data;
    if (strlen_x0016A7F8(name) != 17) {
        sprintf_x0016A7F8(mfci_msg_x0016A7F8, ext_str1_x0016A7F8, name);
        mfci_call_errfn_x0016A7F8(0, mfci_msg_x0016A7F8);
    }
    if (name[8] != '.') {
        sprintf_x0016A7F8(mfci_msg_x0016A7F8, ext_str0_x0016A7F8, name);
        mfci_call_errfn_x0016A7F8(0, mfci_msg_x0016A7F8);
    }
    p = name;
    data = (char *)mfci_strtoul_x0016A7F8(p, &p, 16);
    if (*p != 0) {
        p++;
    }
    if (size != 0) {
        *size = mfci_strtoul_x0016A7F8(p, &p, 16);
    }
    return data;
}
void func_0016A8F0(void) {

}
s32 func_0016A8F0_x0016A8F8(s8 *) __asm__("func_0016A8F0");
extern s8 D_004186F8_x0016A8F8 __asm__("D_004186F8");
void func_0016A8F8_x0016A8F8(void) __asm__("func_0016A8F8");
void func_0016A8F8_x0016A8F8(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = &D_004186F8_x0016A8F8;
    var_s1 = 0x27;
    do {
        if (*var_s0 != 0) {
            func_0016A8F0_x0016A8F8(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0x38;
    } while (var_s1 >= 0);
}
void func_0016A950(s32 arg0, s32 arg1) {
    D_00418684 = arg0;
    D_00418688 = arg1;
}
typedef unsigned char Uint8_x0016A968;
typedef signed char Sint8_x0016A968;
typedef signed short Sint16_x0016A968;
typedef unsigned int Uint32_x0016A968;
typedef signed int Sint32_x0016A968;
typedef signed long long Sint64_x0016A968;
typedef char Char8_x0016A968;
typedef struct SJ_OBJ_x0016A968 *SJ_x0016A968;
typedef struct {
        Uint8_x0016A968 *data;
        Sint32_x0016A968 len;
} SJCK_x0016A968;
typedef struct {
        Uint8_x0016A968 data[16];
} SJUUID_x0016A968;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x0016A968 sj);
        const SJUUID_x0016A968 *(*GetUuid)(SJ_x0016A968 sj);
        void (*Reset)(SJ_x0016A968 sj);
        void (*GetChunk)(SJ_x0016A968 sj, Sint32_x0016A968 id, Sint32_x0016A968 nbyte, SJCK_x0016A968 *ck);
        void (*UngetChunk)(SJ_x0016A968 sj, Sint32_x0016A968 id, SJCK_x0016A968 *ck);
        void (*PutChunk)(SJ_x0016A968 sj, Sint32_x0016A968 id, SJCK_x0016A968 *ck);
        Sint32_x0016A968 (*GetNumData)(SJ_x0016A968 sj, Sint32_x0016A968 id);
        Sint32_x0016A968 (*IsGetChunk)(SJ_x0016A968 sj, Sint32_x0016A968 id, Sint32_x0016A968 nbyte, Sint32_x0016A968 *rbyte);
        void (*EntryErrFunc)(SJ_x0016A968 sj, void (*func)(void *obj, Char8_x0016A968 *msg), void *obj);
} SJ_IF_x0016A968;
struct SJ_OBJ_x0016A968 {
        SJ_IF_x0016A968 *vtbl;
};
typedef struct SFD_OBJ_x0016A968 *SFD_x0016A968;
typedef struct {
        void *sj;
        void *prm;
        Sint32_x0016A968 rsv1;
        Sint32_x0016A968 rsv2;
} SFUO_CH_x0016A968;
typedef struct {
        Sint32_x0016A968 nch;
        SFUO_CH_x0016A968 ch[3];
} SFUO_x0016A968;
typedef struct {
        Sint32_x0016A968 x00;
        Sint32_x0016A968 (*SetOutPan)(SFD_x0016A968 sfd, Sint32_x0016A968 ch, Sint32_x0016A968 pan);
        Sint32_x0016A968 (*GetOutPan)(SFD_x0016A968 sfd, Sint32_x0016A968 ch);
        Sint32_x0016A968 (*SetOutVol)(SFD_x0016A968 sfd, Sint32_x0016A968 vol);
        Sint32_x0016A968 (*GetOutVol)(SFD_x0016A968 sfd);
        void (*SetSpeed)(SFD_x0016A968 sfd, Sint32_x0016A968 speed);
        Sint32_x0016A968 x18;
} SFAOAP_x0016A968;
typedef struct {
        Uint8_x0016A968 pad0[0xB8];
        Sint32_x0016A968 tottime;
        Sint32_x0016A968 tunit;
        Uint8_x0016A968 padc0[0x150 - 0xC0];
        Sint64_x0016A968 scr_base;
        Sint64_x0016A968 scr_ofst;
        Sint32_x0016A968 pad160;
        Sint32_x0016A968 ctime;
        Sint32_x0016A968 ctime_idx;
        Sint32_x0016A968 ctime_que[32];
        Sint32_x0016A968 tot_last;
        Sint32_x0016A968 pad1F0;
        Sint32_x0016A968 que_wr;
        Sint32_x0016A968 que_rd;
        Sint32_x0016A968 tot_que[32];
} SFCON_x0016A968;
typedef struct {
        Sint32_x0016A968 type;
        Sint32_x0016A968 drop;
        Sint32_x0016A968 hour;
        Sint32_x0016A968 min;
        Sint32_x0016A968 sec;
        Sint32_x0016A968 frm;
        Sint32_x0016A968 frm2;
        Sint16_x0016A968 x1c;
        Sint16_x0016A968 field;
} SFTIM_TC_x0016A968;
typedef struct {
        Sint32_x0016A968 valid;
        SFTIM_TC_x0016A968 tc;
        Sint32_x0016A968 val;
        Sint32_x0016A968 unit;
} SFTIM_TTU_x0016A968;
typedef struct {
        Sint64_x0016A968 pts;
        Uint32_x0016A968 pos;
        Uint32_x0016A968 len;
} SFPTS_ENT_x0016A968;
typedef struct {
        SFPTS_ENT_x0016A968 *ent;
        Sint32_x0016A968 num;
        Sint32_x0016A968 cnt;
        Sint32_x0016A968 wr;
        Sint32_x0016A968 rd;
} SFPTS_QUE_x0016A968;
typedef struct {
        Sint32_x0016A968 raw[0x20];
} SFD_VFRM_INF_x0016A968;
typedef struct {
        void *frm;
        Sint32_x0016A968 x04;
        SFD_VFRM_INF_x0016A968 inf;
} SFD_VFRM_x0016A968;
typedef struct {
        Sint32_x0016A968 kind;
        SJ_x0016A968 sj;
        Uint32_x0016A968 ofst;
        Sint32_x0016A968 size;
        Sint32_x0016A968 xsize;
        Sint32_x0016A968 x14;
} SFBUF_SUP_x0016A968;
typedef struct {
        SFBUF_SUP_x0016A968 sup;
        Uint8_x0016A968 *dlm_pos;
        Sint32_x0016A968 dlm_len;
        Sint32_x0016A968 wtot;
        Sint32_x0016A968 rtot;
        SFPTS_QUE_x0016A968 ptsque;
} SFBUF_RING_x0016A968;
typedef struct {
        Sint32_x0016A968 mode;
        Sint32_x0016A968 used;
        Sint32_x0016A968 prepflg;
        Sint32_x0016A968 termflg;
        union {
                SFBUF_RING_x0016A968 ring;
                struct {
                        Uint32_x0016A968 adr;
                        Sint32_x0016A968 size;
                        Sint32_x0016A968 x18;
                        Sint32_x0016A968 x1c;
                        SFD_VFRM_x0016A968 *vfrm;
                } vfrm;
                struct {
                        Uint32_x0016A968 adr;
                        Sint32_x0016A968 size;
                        Sint32_x0016A968 rsv[7];
                        Sint32_x0016A968 rsv2[3];
                } aout;
                SFUO_CH_x0016A968 uoch[3];
        } u;
        Sint32_x0016A968 in_tr;
        Sint32_x0016A968 out_tr;
        Sint32_x0016A968 rsv[8];
} SFBUF_WORK_x0016A968;
typedef Sint32_x0016A968 (*SFD_TR_FUNC_x0016A968)();
typedef struct {
        Sint32_x0016A968 prepflg;
        Sint32_x0016A968 termflg;
        void *hn;
        SFD_TR_FUNC_x0016A968 *trif;
        Sint32_x0016A968 bufin;
        Sint32_x0016A968 bufout;
        Sint32_x0016A968 bufout2;
        Sint32_x0016A968 bufout3;
        Sint32_x0016A968 x20;
        Uint8_x0016A968 pad24[0x44 - 0x24];
} SFD_TR_x0016A968;
typedef struct {
        void *cb;
        void *cr;
        void *y;
        Sint16_x0016A968 cwidth;
        Sint16_x0016A968 ywidth;
} SFMPV_PLANE_x0016A968;
typedef struct {
        void *buf;
        Sint32_x0016A968 len;
} SFMPV_PICUSR_x0016A968;
typedef struct {
        Sint32_x0016A968 stat;
        Sint32_x0016A968 lock;
        void *buf;
        SFTIM_TTU_x0016A968 ttu;
        Sint32_x0016A968 ftime;
        Sint32_x0016A968 tunit;
        Sint32_x0016A968 ndct;
        Sint32_x0016A968 nbyte;
        Sint32_x0016A968 gopno;
        Sint32_x0016A968 x4c;
        Sint32_x0016A968 x50;
        SFMPV_PICUSR_x0016A968 *picusr;
        Sint32_x0016A968 pa_width;
        Sint32_x0016A968 pa_height;
        Sint32_x0016A968 pa_mb_width;
        Sint32_x0016A968 pa_mb_height;
        Sint32_x0016A968 pa_frame_rate;
        Sint32_x0016A968 tmpref;
        Sint32_x0016A968 pa_pic_type;
        Sint32_x0016A968 pa_tc_drop;
        Sint32_x0016A968 pa_tc_hour;
        Sint32_x0016A968 pa_tc_min;
        Sint32_x0016A968 pa_tc_sec;
        Sint32_x0016A968 pa_tc_pic;
        Sint32_x0016A968 x88;
        Sint32_x0016A968 x8c;
        Sint32_x0016A968 pa_x90[3];
        Sint32_x0016A968 pa_x9c[3];
        Sint16_x0016A968 pa_xa8;
        Sint16_x0016A968 pa_xaa;
        Sint8_x0016A968 pa_xac;
        Sint8_x0016A968 pa_xad;
        Sint8_x0016A968 pa_xae;
        Sint8_x0016A968 pa_xaf;
        Sint8_x0016A968 pa_xb0;
        Sint8_x0016A968 pa_xb1;
        Sint8_x0016A968 pa_xb2;
        Sint8_x0016A968 pa_xb3;
        Sint8_x0016A968 pa_xb4;
        Sint8_x0016A968 pa_xb5;
        Sint8_x0016A968 pa_xb6;
        Sint8_x0016A968 pa_xb7;
        Sint8_x0016A968 pa_xb8;
        Sint8_x0016A968 pa_xb9;
        Sint8_x0016A968 pa_xba;
        Sint8_x0016A968 pa_xbb;
        Sint8_x0016A968 pa_xbc;
        Uint8_x0016A968 padbd[0xD8 - 0xBD];
        Sint64_x0016A968 pts;
} SFMPV_FRM_x0016A968;
typedef struct {
        Sint32_x0016A968 cwidth;
        Sint32_x0016A968 cheight;
        Sint32_x0016A968 width;
        Sint32_x0016A968 height;
        Sint32_x0016A968 x10;
        Sint32_x0016A968 max_width;
        Sint32_x0016A968 max_height;
        Sint32_x0016A968 nfrm;
        Sint32_x0016A968 x20;
} SFMPV_PARA_x0016A968;
typedef struct {
        struct MPV_OBJ *mpv;
        SFMPV_PARA_x0016A968 para;
        void *rfb_adr[2];
        void *ta_adr[16];
        SFMPV_FRM_x0016A968 *curfrm;
        Sint32_x0016A968 picstat;
        Sint32_x0016A968 dlmmask;
        Sint32_x0016A968 termflg;
        Sint32_x0016A968 gopstat;
        Sint32_x0016A968 nskip;
        Sint32_x0016A968 nconcat;
        Uint8_x0016A968 picatr[0x80];
        Sint32_x0016A968 last_ngop;
        Sint32_x0016A968 newgop;
        Sint32_x0016A968 vbvsiz;
        Sint32_x0016A968 pts_tmpref;
        Sint32_x0016A968 pts_ofst;
        Sint32_x0016A968 pts_max;
        Sint32_x0016A968 pad124;
        SFPTS_ENT_x0016A968 ptsent;
        Sint32_x0016A968 refidx[2];
        SFMPV_PLANE_x0016A968 rfbuf[2];
        SFMPV_FRM_x0016A968 *ref[2];
        SFMPV_FRM_x0016A968 *pendfrm;
        Sint32_x0016A968 skipret;
        Sint32_x0016A968 dlmwait;
        Sint32_x0016A968 tmpref_adj;
        Sint32_x0016A968 nfrm;
        Sint32_x0016A968 pad17c;
        SFMPV_FRM_x0016A968 frm[16];
        void *picusr_buf;
        Sint32_x0016A968 picusr_num;
        Sint32_x0016A968 picusr_siz;
        Uint8_x0016A968 *picusr_dat;
        Sint32_x0016A968 picusr_len;
        SFMPV_PICUSR_x0016A968 picusr[16];
        Sint32_x0016A968 pad1014;
        Sint64_x0016A968 pts;
} SFMPV_WORK_x0016A968;
typedef struct {
        Sint32_x0016A968 raw[0x2A];
} SFD_PLYINF_x0016A968 __attribute__((aligned(8)));
typedef struct {
        void (*fn)(void *obj, Sint32_x0016A968 code);
        void *obj;
        Sint32_x0016A968 code;
        Sint32_x0016A968 x0c;
        Sint32_x0016A968 x10;
} SFLIB_ERRINF_x0016A968;
typedef struct {
        Sint32_x0016A968 codec;
        Sint32_x0016A968 layer;
        Sint32_x0016A968 chnum;
        Sint32_x0016A968 smphz;
} SFHDS_AUD_x0016A968;
typedef struct {
        Sint32_x0016A968 codec;
        Sint32_x0016A968 bitrate;
        Sint32_x0016A968 picw;
        Sint32_x0016A968 pich;
        Sint32_x0016A968 picrate;
        Sint32_x0016A968 ftr_eff;
        Sint32_x0016A968 ftr_coltype;
        Sint32_x0016A968 ftr_pictype;
        Sint32_x0016A968 ftr_fixflg;
        Sint32_x0016A968 ftr_shcfixflg;
        Sint32_x0016A968 ftr_expand;
        Sint32_x0016A968 ftr_gopn;
        Sint32_x0016A968 ftr_gopm;
} SFHDS_VID_x0016A968;
typedef struct {
        Sint32_x0016A968 valid;
        Sint32_x0016A968 ver_major;
        Sint32_x0016A968 ver_minor;
        Sint32_x0016A968 byterate;
        Sint32_x0016A968 hdrsiz;
        Sint32_x0016A968 packtype;
        Sint32_x0016A968 pketsizlen;
        Sint32_x0016A968 packsiz;
        Sint32_x0016A968 numelem_tot;
        Sint32_x0016A968 numelem_aud;
        Sint32_x0016A968 numelem_vid;
        Sint32_x0016A968 numelem_prv;
        Sint32_x0016A968 maxplylen_aud;
        Sint32_x0016A968 maxplylen_vid;
        Sint32_x0016A968 maxfrmnum;
        Sint32_x0016A968 stmid_prv1;
        Sint32_x0016A968 stmid_prv2;
        Sint32_x0016A968 stmid_aud;
        Sint32_x0016A968 stmid_vid;
        SFHDS_AUD_x0016A968 aud;
        SFHDS_VID_x0016A968 vid;
        Sint32_x0016A968 rawsiz;
        Uint8_x0016A968 raw[0x800];
} SFHDS_FHD_x0016A968;
typedef struct {
        Uint8_x0016A968 data[2][0xB0];
        Sint32_x0016A968 len[2];
} SFSEE_SYSHD_x0016A968;
typedef struct {
        Sint32_x0016A968 analyzed;
        Sint32_x0016A968 ncount;
        Sint32_x0016A968 tscale;
        Sint32_x0016A968 nvid;
        Sint32_x0016A968 naud;
        Sint32_x0016A968 pad14;
        Sint64_x0016A968 scr_base;
        Sint64_x0016A968 pts_min;
        Sint32_x0016A968 stmid_vid;
        Sint32_x0016A968 stmid_aud;
        SFSEE_SYSHD_x0016A968 syshd;
} SFSEE_SHDR_x0016A968;
typedef struct {
        Sint32_x0016A968 analyzed;
        Sint32_x0016A968 ncount;
        Sint32_x0016A968 tscale;
        SFHDS_FHD_x0016A968 fhd;
        SFSEE_SHDR_x0016A968 shdr;
        Uint8_x0016A968 pada38[0xAD0 - 0xA38];
        Sint32_x0016A968 a1hdr;
        Sint32_x0016A968 a1ncount;
        Sint32_x0016A968 a1tscale;
        Uint8_x0016A968 padadc[0xD0C - 0xADC];
        Sint32_x0016A968 a2hdr;
        Sint32_x0016A968 a2ncount;
        Sint32_x0016A968 a2tscale;
        Uint8_x0016A968 padd18[0xDA8 - 0xD18];
        Sint32_x0016A968 rate;
        Sint32_x0016A968 fsize_est;
        Sint32_x0016A968 tot_est;
        Sint32_x0016A968 tunit_est;
        Sint32_x0016A968 av_a;
        Sint32_x0016A968 av_b;
        Sint32_x0016A968 paddc0;
        Sint32_x0016A968 fsize;
        Sint32_x0016A968 tottime;
        Sint32_x0016A968 tunit;
        Sint32_x0016A968 byterate;
        Sint32_x0016A968 seekpos;
} SFSEE_WORK_x0016A968;
typedef struct {
        Sint32_x0016A968 x00;
        Sint32_x0016A968 pos;
        Sint32_x0016A968 x08;
} SFSEE_REQ_x0016A968;
typedef struct {
        Sint32_x0016A968 bsize;
        Sint32_x0016A968 xsize;
        void *buf;
        Sint32_x0016A968 maxnch;
        Sint32_x0016A968 x10;
        Sint32_x0016A968 worksize;
        void *work;
} SFADXT_PARA_x0016A968;
typedef struct {
        void *adxt;
        SJ_x0016A968 sj;
        SFADXT_PARA_x0016A968 para;
        Sint32_x0016A968 tcount;
        Sint32_x0016A968 tunit;
        Sint32_x0016A968 pause;
        Sint32_x0016A968 discard;
        Sint32_x0016A968 seekflg;
        Sint32_x0016A968 smplofst;
        void (*func)(SFD_x0016A968 sfd, Uint8_x0016A968 *data, Sint32_x0016A968 len, Sint32_x0016A968 *nbyte);
        Sint32_x0016A968 x40;
        Sint32_x0016A968 svrfreq;
        Sint32_x0016A968 totbyte;
        Sint32_x0016A968 x4c;
} SFADXT_WORK_x0016A968;
typedef struct {
        SFSEE_WORK_x0016A968 *wk;
        SFSEE_REQ_x0016A968 req;
} SFSEE_HN_x0016A968;
typedef struct {
        Sint32_x0016A968 x00;
        Uint32_x0016A968 adr;
        Sint32_x0016A968 size[7];
        Sint32_x0016A968 x24;
        Sint32_x0016A968 unit;
        Sint32_x0016A968 x2c;
        Sint32_x0016A968 x30;
        Sint32_x0016A968 x34;
        Sint32_x0016A968 x38;
        void *hnwork;
        Sint32_x0016A968 hnwksiz;
} SFD_CREPRM_x0016A968;
typedef struct {
        void *x00;
        Sint32_x0016A968 x04;
        Sint32_x0016A968 x08;
} SFPLY_PTSM_x0016A968;
typedef struct {
        Sint64_x0016A968 sum;
        Sint64_x0016A968 min;
        Sint64_x0016A968 max;
        Sint32_x0016A968 cnt;
} SFTMR_TSUM_x0016A968;
typedef struct {
        struct MPS_OBJ_x0016A968 *mps;
        Sint32_x0016A968 nvid;
        Sint32_x0016A968 naud;
        Sint32_x0016A968 x0c;
        Sint64_x0016A968 pts_min;
        Sint64_x0016A968 pts_min2;
        Sint32_x0016A968 concat_cnt;
        Sint32_x0016A968 last_vid;
        Sint32_x0016A968 last_aud;
        Sint32_x0016A968 first_vid;
        Sint32_x0016A968 first_aud;
        Sint32_x0016A968 cur_vid;
        Sint32_x0016A968 cur_aud;
        Sint32_x0016A968 endcode;
        void *outsj[(0xFF - 0xBC + 1)];
        void (*outfn)(void *obj, Sint32_x0016A968 stmid);
        void *outobj;
        Sint32_x0016A968 skip;
        Sint32_x0016A968 x15c;
        Sint32_x0016A968 x160;
        Sint32_x0016A968 x164;
} SFMPS_WORK_x0016A968;
typedef struct SFD_OBJ_x0016A968 {
        SFD_CREPRM_x0016A968 prm;
        Sint32_x0016A968 chg_flg;
        Sint32_x0016A968 stat;
        Sint32_x0016A968 req;
        Sint32_x0016A968 pause_sw;
        Sint32_x0016A968 pause_cnt;
        Uint8_x0016A968 pad58[0x74 - 0x58];
        Sint32_x0016A968 pad74;
        SFHDS_FHD_x0016A968 fhd;
        Sint32_x0016A968 x90c;
        Sint32_x0016A968 x910;
        Sint32_x0016A968 x914;
        Sint32_x0016A968 x918;
        Sint32_x0016A968 x91c;
        Sint32_x0016A968 picrate;
        Sint32_x0016A968 x924;
        Sint32_x0016A968 x928;
        Sint32_x0016A968 x92c;
        Sint32_x0016A968 numelem_aud;
        Sint32_x0016A968 numelem_vid;
        Sint32_x0016A968 numelem_prv;
        Sint32_x0016A968 x93c;
        Sint32_x0016A968 x940;
        Sint32_x0016A968 x944;
        Sint32_x0016A968 x948;
        Sint32_x0016A968 x94c;
        SFD_PLYINF_x0016A968 plyinf;
        SFLIB_ERRINF_x0016A968 err;
        Sint32_x0016A968 cond[100];
        Sint32_x0016A968 cond_def[100];
        Uint8_x0016A968 padD24[4];
        SFCON_x0016A968 con;
        Uint8_x0016A968 padFA4[(int)(0x1020 - 0xD30 - sizeof(SFCON_x0016A968))];
        Uint8_x0016A968 tst[0x1C0];
        Uint8_x0016A968 pad11D8[0x12D8 - 0x11D8];
        SFPLY_PTSM_x0016A968 ptsm;
        Uint8_x0016A968 pad12E4[0x1308 - 0x12E4];
        SFBUF_WORK_x0016A968 buf[8];
        SFD_VFRM_x0016A968 vfrm[16];
        SFD_TR_x0016A968 tr[9];
        Sint32_x0016A968 pad218c;
        SFMPS_WORK_x0016A968 mps;
        Uint8_x0016A968 pad22F8[0x23A0 - 0x22F8];
        SFMPV_WORK_x0016A968 mpv;
        SFADXT_WORK_x0016A968 adxt;
        Uint8_x0016A968 pad3410[0x3474 - 0x3410];
        SFAOAP_x0016A968 aoap;
        SFUO_x0016A968 uo_tbl;
        Sint32_x0016A968 pad34c4;
        SFSEE_HN_x0016A968 see;
        SFTMR_TSUM_x0016A968 tsum[6];
} SFD_OBJ_x0016A968;
typedef void (*MPS_ERROR_FN_x0016A968)(void *obj, Sint32_x0016A968 code);
typedef struct {
        Sint64_x0016A968 scr;
        Sint32_x0016A968 rsv;
        Sint32_x0016A968 mux_rate;
} MPS_PACKHD_x0016A968;
typedef struct {
        Sint32_x0016A968 raw[8];
} MPS_SYSHD_x0016A968;
typedef struct {
        Sint64_x0016A968 pts;
        Sint64_x0016A968 dts;
        Sint32_x0016A968 raw[6];
} MPS_PKETHD_x0016A968;
typedef struct MPS_OBJ_x0016A968 {
        Sint32_x0016A968 used;
        MPS_ERROR_FN_x0016A968 errfn;
        void *errobj;
        Sint32_x0016A968 errcode;
        Sint32_x0016A968 x10;
        Sint32_x0016A968 x14;
        MPS_PACKHD_x0016A968 packhd;
        MPS_SYSHD_x0016A968 last_syshd;
        MPS_SYSHD_x0016A968 syshd[3];
        MPS_PKETHD_x0016A968 pkethd;
        Sint32_x0016A968 xd0;
        Sint32_x0016A968 (*dechd_func)();
        Sint32_x0016A968 xd8;
        Sint32_x0016A968 xdc;
        Sint32_x0016A968 xe0;
        void *sysfn;
        void *sysobj;
        void *psmapfn;
        void *psmapobj;
        void *pesfn;
        void *pesobj;
        Sint32_x0016A968 xfc;
} MPS_OBJ_x0016A968;
void sfmps_TermIfInTerm_x0016A968(SFD_x0016A968 sfd, Sint32_x0016A968 *term) __asm__("mfci_get_adr_size");
Sint32_x0016A968 func_0016A968_x0016A968(SFD_x0016A968 sfd) __asm__("func_0016A968");
/* sfmps_IsInTerm: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/sfd_mps.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x0016A968 func_0016A968_x0016A968(SFD_x0016A968 sfd)
{
        Sint32_x0016A968 term;
        sfmps_TermIfInTerm_x0016A968(sfd, &term);
        return term;
}
s8 *func_0016A988(void) {
    s32 var_a1;
    s8 *temp_v0;
    s8 *var_a3;

    var_a3 = NULL;
    var_a1 = 0;
    if (D_004186F8 == 0) {
        var_a3 = &D_004186F8;
    } else {
loop_2:
        var_a1 += 1;
        if (var_a1 < 0x28) {
            temp_v0 = (var_a1 * 0x38) + &D_004186F8;
            if (*temp_v0 == 0) {
                var_a3 = temp_v0;
            } else {
                goto loop_2;
            }
        }
    }
    return var_a3;
}
s32 memset_x0016A9E0() __asm__("memset");
void func_0016A9E0_x0016A9E0(s32 arg0) __asm__("func_0016A9E0");
void func_0016A9E0_x0016A9E0(s32 arg0) {
    memset_x0016A9E0(arg0, 0, 0x38);
}
s32 func_0016A968_x0016AA00(s32) __asm__("func_0016A968");
void func_0016AA00_x0016AA00(u8 *arg0) __asm__("func_0016AA00");
void func_0016AA00_x0016AA00(u8 *arg0)
{
  s32 temp_v0;
  s32 temp_v1;
  *((s32 *) (((u8 *) arg0) + 4)) = 0x800;
  temp_v0 = func_0016A968_x0016AA00(arg0 + 0x1C);
  temp_v1 = *((s32 *) (((u8 *) arg0) + 4));
  *((s32 *) (((u8 *) arg0) + 8)) = temp_v0;
  *((s32 *) (((u8 *) arg0) + 0xC)) = (s32) (((s32) ((temp_v0 + temp_v1) - 1)) / temp_v1);
  *((s8 *) (((u8 *) arg0) + 0)) = 1;
  *((s32 *) (((u8 *) arg0) + 0x10)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x18)) = 0;
  *((s32 *) (((u8 *) arg0) + 0x14)) = 0;
  *((s8 *) (((u8 *) arg0) + 1)) = 0;
  *((s8 *) (((u8 *) arg0) + 0)) = 1;
}
typedef void (*CvFsErrFn_x0016AA70)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0016AA70)(CvFsErrFn_x0016AA70 func, void *obj);
typedef int (*CvFsPathFn_x0016AA70)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0016AA70)(void);
typedef int (*CvFsOpenFn_x0016AA70)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0016AA70)(int fd);
typedef int (*CvFsFdIntFn_x0016AA70)(int fd);
typedef int (*CvFsSeekFn_x0016AA70)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0016AA70)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0016AA70)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0016AA70)(void);
typedef int (*CvFsLoadDirInfoFn_x0016AA70)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0016AA70)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0016AA70)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0016AA70 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0016AA70 entry_err_func;
    CvFsPathFn_x0016AA70 get_file_size;
    CvFsGetFreeSizeFn_x0016AA70 get_free_size;
    CvFsOpenFn_x0016AA70 open;
    CvFsFdFn_x0016AA70 close;
    CvFsSeekFn_x0016AA70 seek;
    CvFsFdIntFn_x0016AA70 tell;
    CvFsXferFn_x0016AA70 req_rd;
    CvFsXferFn_x0016AA70 req_wr;
    CvFsFdFn_x0016AA70 stop_tr;
    CvFsFdIntFn_x0016AA70 get_stat;
    CvFsFdIntFn_x0016AA70 get_sct_len;
    CvFsSetSctLenFn_x0016AA70 set_sct_len;
    CvFsFdIntFn_x0016AA70 get_num_tr;
    CvFsPathFn_x0016AA70 change_dir;
    CvFsPathFn_x0016AA70 is_exist_file;
    CvFsGetNumFilesFn_x0016AA70 get_num_files;
    CvFsLoadDirInfoFn_x0016AA70 load_dir_info;
    CvFsFdIntFn_x0016AA70 get_max_byte_rate;
    CvFsPathFn_x0016AA70 make_dir;
    CvFsPathFn_x0016AA70 remove_dir;
    CvFsPathFn_x0016AA70 delete_file;
    CvFsGetFileSizeExFn_x0016AA70 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0016AA70 opt_fn2;
} CvFsVtbl_x0016AA70;
extern CvFsVtbl_x0016AA70 *addDevice_x0016AA70(char *devname, CvFsVtbl_x0016AA70 *(*get_if)(void)) __asm__("addDevice");
typedef unsigned int size_t_x0016AA70;
extern void qsort_x0016AA70(void *, size_t_x0016AA70, size_t_x0016AA70, int (*)(const void *, const void *)) __asm__("qsort");
char *strcpy_x0016AA70(char *, const char *) __asm__("func_00127A88");
typedef struct MfCiFile_x0016AA70 {
    signed char used;
    signed char stat;
    char rsv;
    char rsv2;
    int sctsize;
    int size;
    int nsct;
    int pos;
    int nbyte;
    int reqsct;
    char name[20];
    int ofs;
    int len;
} MfCiFile_x0016AA70;
extern void mfCiEntryErrFunc_x0016AA70(void (*func)(void *context, const char *message, void *detail), void *context) __asm__("mfCiEntryErrFunc");
extern void (*mfci_err_func_x0016AA70)(void *context, const char *message, void *detail) __asm__("mfci_err_func");
void mfci_call_errfn_x0016AA70(void *detail, const char *message) __asm__("func_0016A7B0");
void mfCiEntryErrFunc_x0016AA70(void (*func)(void *context, const char *message, void *detail), void *context) __asm__("mfCiEntryErrFunc");
MfCiFile_x0016AA70 *mfci_alloc_x0016AA70(void) __asm__("func_0016A988");
void mfci_reset_hn_x0016AA70(MfCiFile_x0016AA70 *fh) __asm__("func_0016AA00");
extern char ext_str0_x0016AA70[] __asm__("D_00464018");
extern char ext_str1_x0016AA70[] __asm__("D_00463FF0");
extern char ext_str2_x0016AA70[] __asm__("D_00463FC8");
MfCiFile_x0016AA70 *mfCiOpen_x0016AA70(const char *fname, int reserved, int rw) __asm__("mfCiOpen");
/* mfCiOpen_x0016AA70: from https://github.com/crashbashash/DW4_Decomp (src/cri/mfci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
MfCiFile_x0016AA70 *mfCiOpen_x0016AA70(const char *fname, int reserved, int rw)
{
    MfCiFile_x0016AA70 *fh;
    if (fname == 0) {
        mfci_call_errfn_x0016AA70(0, ext_str2_x0016AA70);
        return 0;
    }
    if (rw != 0) {
        mfci_call_errfn_x0016AA70(0, ext_str1_x0016AA70);
        return 0;
    }
    fh = mfci_alloc_x0016AA70();
    if (fh == 0) {
        mfci_call_errfn_x0016AA70(0, ext_str0_x0016AA70);
        return 0;
    }
    strcpy_x0016AA70(fh->name, fname);
    mfci_reset_hn_x0016AA70(fh);
    return fh;
}
s32 func_0016A9E0_x0016AB10(s8 *) __asm__("func_0016A9E0");
s32 func_0016ADD8_x0016AB10() __asm__("func_0016ADD8");
void func_0016AB10_x0016AB10(s8 *arg0) __asm__("func_0016AB10");
void func_0016AB10_x0016AB10(s8 *arg0) {
    if (arg0 == NULL) {
        goto block_3;
    }
    func_0016ADD8_x0016AB10();
    if (*arg0 != 1) {
        goto block_3;
    }
    *arg0 = 0;
    func_0016A9E0_x0016AB10(arg0);
block_3:
    return;
}
s32 func_0016A768_x0016AB58() __asm__("func_0016A768");
s32 func_0016A780_x0016AB58() __asm__("func_0016A780");
s32 func_0016A7B0_x0016AB58() __asm__("func_0016A7B0");
extern s32 D_00464048_x0016AB58 __asm__("D_00464048");
s32 func_0016AB58_x0016AB58(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0016AB58");
s32 func_0016AB58_x0016AB58(u8 *arg0, s32 arg1, s32 arg2)
{
  s32 temp_a0;
  s32 temp_v0;
  s32 temp_v0_2;
  if (arg0 != ((void *) 0))
  {
    goto block_2;
  }
  func_0016A7B0_x0016AB58(arg0, &D_00464048_x0016AB58);
  return 0;
  block_2:
  func_0016A768_x0016AB58();

  if (arg2 != 0)
  {
    goto block_4;
  }
  *((s32 *) (((u8 *) arg0) + 0x10)) = arg1;
  goto block_8;
  block_4:
  if (arg2 != 2)
  {
    goto block_6;
  }

  *((s32 *) (((u8 *) arg0) + 0x10)) = (s32) ((*((s32 *) (((u8 *) arg0) + 0xC))) + arg1);
  goto block_9;
  block_6:
  if (arg2 != 1)
  {
    goto block_9;
  }

  *((s32 *) (((u8 *) arg0) + 0x10)) = (s32) ((*((s32 *) (((u8 *) arg0) + 0x10))) + arg1);
  goto block_9;
  block_8:
  block_9:
  temp_v0 = *((s32 *) (((u8 *) arg0) + 0x10));


  temp_v0_2 = (temp_v0 >= (*((s32 *) (((u8 *) arg0) + 0xC)))) ? (*((s32 *) (((u8 *) arg0) + 0xC))) : (temp_v0);
  temp_a0 = 0;
  temp_a0 = temp_v0_2 < temp_a0;
  *((s32 *) (((u8 *) arg0) + 0x10)) = (s32) (((float) (temp_a0 != 0)) ? (0) : (temp_v0_2));
  func_0016A780_x0016AB58(temp_a0);
  return *((s32 *) (((u8 *) arg0) + 0x10));
}
s32 func_0016A7B0_x0016AC18() __asm__("func_0016A7B0");
extern s32 D_00464068_x0016AC18 __asm__("D_00464068");
s32 func_0016AC18_x0016AC18(u8 *arg0) __asm__("func_0016AC18");
s32 func_0016AC18_x0016AC18(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A7B0_x0016AC18(arg0, &D_00464068_x0016AC18);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x10);
}
typedef void (*CvFsErrFn_x0016AC50)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0016AC50)(CvFsErrFn_x0016AC50 func, void *obj);
typedef int (*CvFsPathFn_x0016AC50)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0016AC50)(void);
typedef int (*CvFsOpenFn_x0016AC50)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0016AC50)(int fd);
typedef int (*CvFsFdIntFn_x0016AC50)(int fd);
typedef int (*CvFsSeekFn_x0016AC50)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0016AC50)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0016AC50)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0016AC50)(void);
typedef int (*CvFsLoadDirInfoFn_x0016AC50)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0016AC50)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0016AC50)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0016AC50 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0016AC50 entry_err_func;
    CvFsPathFn_x0016AC50 get_file_size;
    CvFsGetFreeSizeFn_x0016AC50 get_free_size;
    CvFsOpenFn_x0016AC50 open;
    CvFsFdFn_x0016AC50 close;
    CvFsSeekFn_x0016AC50 seek;
    CvFsFdIntFn_x0016AC50 tell;
    CvFsXferFn_x0016AC50 req_rd;
    CvFsXferFn_x0016AC50 req_wr;
    CvFsFdFn_x0016AC50 stop_tr;
    CvFsFdIntFn_x0016AC50 get_stat;
    CvFsFdIntFn_x0016AC50 get_sct_len;
    CvFsSetSctLenFn_x0016AC50 set_sct_len;
    CvFsFdIntFn_x0016AC50 get_num_tr;
    CvFsPathFn_x0016AC50 change_dir;
    CvFsPathFn_x0016AC50 is_exist_file;
    CvFsGetNumFilesFn_x0016AC50 get_num_files;
    CvFsLoadDirInfoFn_x0016AC50 load_dir_info;
    CvFsFdIntFn_x0016AC50 get_max_byte_rate;
    CvFsPathFn_x0016AC50 make_dir;
    CvFsPathFn_x0016AC50 remove_dir;
    CvFsPathFn_x0016AC50 delete_file;
    CvFsGetFileSizeExFn_x0016AC50 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0016AC50 opt_fn2;
} CvFsVtbl_x0016AC50;
extern CvFsVtbl_x0016AC50 *addDevice_x0016AC50(char *devname, CvFsVtbl_x0016AC50 *(*get_if)(void)) __asm__("addDevice");
typedef unsigned int size_t_x0016AC50;
extern void qsort_x0016AC50(void *, size_t_x0016AC50, size_t_x0016AC50, int (*)(const void *, const void *)) __asm__("qsort");
void *memcpy_x0016AC50(void *, const void *, size_t_x0016AC50) __asm__("func_00125740");
void *memset_x0016AC50(void *, int, size_t_x0016AC50) __asm__("memset");
typedef struct MfCiFile_x0016AC50 {
    signed char used;
    signed char stat;
    char rsv;
    char rsv2;
    int sctsize;
    int size;
    int nsct;
    int pos;
    int nbyte;
    int reqsct;
    char name[20];
    int ofs;
    int len;
} MfCiFile_x0016AC50;
extern void mfCiEntryErrFunc_x0016AC50(void (*func)(void *context, const char *message, void *detail), void *context) __asm__("mfCiEntryErrFunc");
extern void (*mfci_err_func_x0016AC50)(void *context, const char *message, void *detail) __asm__("mfci_err_func");
void mfCrsLock_x0016AC50(void) __asm__("func_0016A768");
void mfCrsUnlock_x0016AC50(void) __asm__("func_0016A780");
void mfci_call_errfn_x0016AC50(void *detail, const char *message) __asm__("func_0016A7B0");
char *mfci_get_adr_size_x0016AC50(char *name, int *size) __asm__("mfci_get_adr_size");
void mfCiEntryErrFunc_x0016AC50(void (*func)(void *context, const char *message, void *detail), void *context) __asm__("mfCiEntryErrFunc");
extern char ext_str0_x0016AC50[] __asm__("D_004640C8");
extern char ext_str1_x0016AC50[] __asm__("D_004640A8");
extern char ext_str2_x0016AC50[] __asm__("D_00464088");
int mfCiReqRd_x0016AC50(MfCiFile_x0016AC50 *fh, int nsct, char *buf) __asm__("mfCiReqRd");
/* mfCiReqRd_x0016AC50: from https://github.com/crashbashash/DW4_Decomp (src/cri/mfci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int mfCiReqRd_x0016AC50(MfCiFile_x0016AC50 *fh, int nsct, char *buf)
{
    char *data;
    int size;
    int n;
    int ofs;
    int len;
    int avail;
    if (fh == 0) {
        mfci_call_errfn_x0016AC50(fh, ext_str2_x0016AC50);
        return 0;
    }
    if (nsct < 0) {
        mfci_call_errfn_x0016AC50(fh, ext_str1_x0016AC50);
        return 0;
    }
    if (buf == 0) {
        mfci_call_errfn_x0016AC50(fh, ext_str0_x0016AC50);
        return 0;
    }
    if (nsct == 0) {
        fh->stat = 1;
        return 0;
    }
    if (fh->stat == 2) {
        return 0;
    }
    mfCrsLock_x0016AC50();
    fh->nbyte = 0;
    n = fh->nsct - fh->pos;
    if (nsct < n) {
        n = nsct;
    }
    fh->reqsct = n;
    ofs = fh->pos * fh->sctsize;
    len = n * fh->sctsize;
    if (len == 0) {
        fh->stat = 1;
        mfCrsUnlock_x0016AC50();
        return 0;
    }
    fh->ofs = ofs;
    fh->len = len;
    fh->stat = 2;
    data = mfci_get_adr_size_x0016AC50(fh->name, &size);
    avail = (size - fh->ofs < fh->len) ? size - fh->ofs : fh->len;
    mfCrsUnlock_x0016AC50();
    memcpy_x0016AC50(buf, data + fh->ofs, fh->len);
    memset_x0016AC50(buf + avail, 0, fh->len - avail);
    mfCrsLock_x0016AC50();
    fh->stat = 1;
    fh->pos += fh->reqsct;
    fh->nbyte = fh->reqsct * fh->sctsize;
    mfCrsUnlock_x0016AC50();
    return fh->reqsct;
}
s32 func_0016A768_x0016ADD8() __asm__("func_0016A768");
s32 func_0016A780_x0016ADD8() __asm__("func_0016A780");
s32 func_0016A7B0_x0016ADD8() __asm__("func_0016A7B0");
extern s32 D_004640F0_x0016ADD8 __asm__("D_004640F0");
void func_0016ADD8_x0016ADD8(u8 *arg0) __asm__("func_0016ADD8");
void func_0016ADD8_x0016ADD8(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A7B0_x0016ADD8(arg0, &D_004640F0_x0016ADD8);
        return;
    }
    func_0016A768_x0016ADD8();
    *(s8 *)((u8 *)arg0 + 1) = 0;
    func_0016A780_x0016ADD8();
}
s32 func_0016A7B0_x0016AE28() __asm__("func_0016A7B0");
extern s32 D_004640F0_x0016AE28 __asm__("D_004640F0");
s8 func_0016AE28_x0016AE28(u8 *arg0) __asm__("func_0016AE28");
s8 func_0016AE28_x0016AE28(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A7B0_x0016AE28(arg0, &D_004640F0_x0016AE28);
        return 0;
    }
    return *(s8 *)((u8 *)arg0 + 1);
}
s32 func_0016A7B0_x0016AE60() __asm__("func_0016A7B0");
extern s32 D_00464108_x0016AE60 __asm__("D_00464108");
s32 func_0016AE60_x0016AE60(u8 *arg0) __asm__("func_0016AE60");
s32 func_0016AE60_x0016AE60(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A7B0_x0016AE60(arg0, &D_00464108_x0016AE60);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 4);
}
typedef void (*CvFsErrFn_x0016AE98)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0016AE98)(CvFsErrFn_x0016AE98 func, void *obj);
typedef int (*CvFsPathFn_x0016AE98)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0016AE98)(void);
typedef int (*CvFsOpenFn_x0016AE98)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0016AE98)(int fd);
typedef int (*CvFsFdIntFn_x0016AE98)(int fd);
typedef int (*CvFsSeekFn_x0016AE98)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0016AE98)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0016AE98)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0016AE98)(void);
typedef int (*CvFsLoadDirInfoFn_x0016AE98)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0016AE98)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0016AE98)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0016AE98 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0016AE98 entry_err_func;
    CvFsPathFn_x0016AE98 get_file_size;
    CvFsGetFreeSizeFn_x0016AE98 get_free_size;
    CvFsOpenFn_x0016AE98 open;
    CvFsFdFn_x0016AE98 close;
    CvFsSeekFn_x0016AE98 seek;
    CvFsFdIntFn_x0016AE98 tell;
    CvFsXferFn_x0016AE98 req_rd;
    CvFsXferFn_x0016AE98 req_wr;
    CvFsFdFn_x0016AE98 stop_tr;
    CvFsFdIntFn_x0016AE98 get_stat;
    CvFsFdIntFn_x0016AE98 get_sct_len;
    CvFsSetSctLenFn_x0016AE98 set_sct_len;
    CvFsFdIntFn_x0016AE98 get_num_tr;
    CvFsPathFn_x0016AE98 change_dir;
    CvFsPathFn_x0016AE98 is_exist_file;
    CvFsGetNumFilesFn_x0016AE98 get_num_files;
    CvFsLoadDirInfoFn_x0016AE98 load_dir_info;
    CvFsFdIntFn_x0016AE98 get_max_byte_rate;
    CvFsPathFn_x0016AE98 make_dir;
    CvFsPathFn_x0016AE98 remove_dir;
    CvFsPathFn_x0016AE98 delete_file;
    CvFsGetFileSizeExFn_x0016AE98 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0016AE98 opt_fn2;
} CvFsVtbl_x0016AE98;
extern CvFsVtbl_x0016AE98 *addDevice_x0016AE98(char *devname, CvFsVtbl_x0016AE98 *(*get_if)(void)) __asm__("addDevice");
typedef unsigned int size_t_x0016AE98;
extern void qsort_x0016AE98(void *, size_t_x0016AE98, size_t_x0016AE98, int (*)(const void *, const void *)) __asm__("qsort");
typedef struct MfCiFile_x0016AE98 {
    signed char used;
    signed char stat;
    char rsv;
    char rsv2;
    int sctsize;
    int size;
    int nsct;
    int pos;
    int nbyte;
    int reqsct;
    char name[20];
    int ofs;
    int len;
} MfCiFile_x0016AE98;
extern void mfCiEntryErrFunc_x0016AE98(void (*func)(void *context, const char *message, void *detail), void *context) __asm__("mfCiEntryErrFunc");
extern void (*mfci_err_func_x0016AE98)(void *context, const char *message, void *detail) __asm__("mfci_err_func");
void mfci_call_errfn_x0016AE98(void *detail, const char *message) __asm__("func_0016A7B0");
void mfCiEntryErrFunc_x0016AE98(void (*func)(void *context, const char *message, void *detail), void *context) __asm__("mfCiEntryErrFunc");
extern char ext_str0_x0016AE98[] __asm__("D_00464120");
void func_0016AE98_x0016AE98(MfCiFile_x0016AE98 *fh, int sctsize) __asm__("func_0016AE98");
/* mfCiSetSctLen: from https://github.com/crashbashash/DW4_Decomp (src/cri/mfci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0016AE98_x0016AE98(MfCiFile_x0016AE98 *fh, int sctsize)
{
    int old;
    int pos;
    if (fh == 0) {
        mfci_call_errfn_x0016AE98(fh, ext_str0_x0016AE98);
        return;
    }
    pos = fh->pos;
    old = fh->sctsize;
    fh->sctsize = sctsize;
    fh->nsct = (fh->size + sctsize - 1) / sctsize;
    fh->pos = pos * old / sctsize;
    fh->nbyte = fh->reqsct * sctsize;
}
s32 func_0016A7B0_x0016AF18() __asm__("func_0016A7B0");
extern s32 D_004640F0_x0016AF18 __asm__("D_004640F0");
s32 func_0016AF18_x0016AF18(u8 *arg0) __asm__("func_0016AF18");
s32 func_0016AF18_x0016AF18(u8 *arg0) {
    if (arg0 == NULL) {
        func_0016A7B0_x0016AF18(arg0, &D_004640F0_x0016AF18);
        return 0;
    }
    return *(s32 *)((u8 *)arg0 + 0x14);
}
typedef void (*CvFsErrFn_x0016AF50)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0016AF50)(CvFsErrFn_x0016AF50 func, void *obj);
typedef int (*CvFsPathFn_x0016AF50)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0016AF50)(void);
typedef int (*CvFsOpenFn_x0016AF50)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0016AF50)(int fd);
typedef int (*CvFsFdIntFn_x0016AF50)(int fd);
typedef int (*CvFsSeekFn_x0016AF50)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0016AF50)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0016AF50)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0016AF50)(void);
typedef int (*CvFsLoadDirInfoFn_x0016AF50)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0016AF50)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0016AF50)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0016AF50 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0016AF50 entry_err_func;
    CvFsPathFn_x0016AF50 get_file_size;
    CvFsGetFreeSizeFn_x0016AF50 get_free_size;
    CvFsOpenFn_x0016AF50 open;
    CvFsFdFn_x0016AF50 close;
    CvFsSeekFn_x0016AF50 seek;
    CvFsFdIntFn_x0016AF50 tell;
    CvFsXferFn_x0016AF50 req_rd;
    CvFsXferFn_x0016AF50 req_wr;
    CvFsFdFn_x0016AF50 stop_tr;
    CvFsFdIntFn_x0016AF50 get_stat;
    CvFsFdIntFn_x0016AF50 get_sct_len;
    CvFsSetSctLenFn_x0016AF50 set_sct_len;
    CvFsFdIntFn_x0016AF50 get_num_tr;
    CvFsPathFn_x0016AF50 change_dir;
    CvFsPathFn_x0016AF50 is_exist_file;
    CvFsGetNumFilesFn_x0016AF50 get_num_files;
    CvFsLoadDirInfoFn_x0016AF50 load_dir_info;
    CvFsFdIntFn_x0016AF50 get_max_byte_rate;
    CvFsPathFn_x0016AF50 make_dir;
    CvFsPathFn_x0016AF50 remove_dir;
    CvFsPathFn_x0016AF50 delete_file;
    CvFsGetFileSizeExFn_x0016AF50 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0016AF50 opt_fn2;
} CvFsVtbl_x0016AF50;
extern CvFsVtbl_x0016AF50 *addDevice_x0016AF50(char *devname, CvFsVtbl_x0016AF50 *(*get_if)(void)) __asm__("addDevice");
typedef unsigned int size_t_x0016AF50;
extern void qsort_x0016AF50(void *, size_t_x0016AF50, size_t_x0016AF50, int (*)(const void *, const void *)) __asm__("qsort");
typedef struct MfCiFile_x0016AF50 {
    signed char used;
    signed char stat;
    char rsv;
    char rsv2;
    int sctsize;
    int size;
    int nsct;
    int pos;
    int nbyte;
    int reqsct;
    char name[20];
    int ofs;
    int len;
} MfCiFile_x0016AF50;
extern void mfCiEntryErrFunc_x0016AF50(void (*func)(void *context, const char *message, void *detail), void *context) __asm__("mfCiEntryErrFunc");
extern void (*mfci_err_func_x0016AF50)(void *context, const char *message, void *detail) __asm__("mfci_err_func");
void mfci_call_errfn_x0016AF50(void *detail, const char *message) __asm__("func_0016A7B0");
void mfCiEntryErrFunc_x0016AF50(void (*func)(void *context, const char *message, void *detail), void *context) __asm__("mfCiEntryErrFunc");
MfCiFile_x0016AF50 *mfci_alloc_x0016AF50(void) __asm__("func_0016A988");
void mfci_reset_hn_x0016AF50(MfCiFile_x0016AF50 *fh) __asm__("func_0016AA00");
extern char ext_str0_x0016AF50[] __asm__("D_00464190");
extern char ext_str1_x0016AF50[] __asm__("D_00464168");
extern char ext_str2_x0016AF50[] __asm__("D_00464138");
MfCiFile_x0016AF50 *mfCiOpenEntry_x0016AF50(int entry, int reserved, int rw) __asm__("mfCiOpenEntry");
/* mfCiOpenEntry_x0016AF50: from https://github.com/crashbashash/DW4_Decomp (src/cri/mfci.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
MfCiFile_x0016AF50 *mfCiOpenEntry_x0016AF50(int entry, int reserved, int rw)
{
    MfCiFile_x0016AF50 *fh;
    if (entry <= 0) {
        mfci_call_errfn_x0016AF50(0, ext_str2_x0016AF50);
        return 0;
    }
    if (rw != 0) {
        mfci_call_errfn_x0016AF50(0, ext_str1_x0016AF50);
        return 0;
    }
    fh = mfci_alloc_x0016AF50();
    if (fh == 0) {
        mfci_call_errfn_x0016AF50(0, ext_str0_x0016AF50);
        return 0;
    }
    mfci_reset_hn_x0016AF50(fh);
    return fh;
}
void func_0016AFD8(void) {
    func_0016FF40();
}
void func_0016AFF0(void) {
    func_0016FF58();
}
void func_0016B008(s32 arg0, s32 arg1) {
    func_0016AFD8();
    func_0016B048(arg0, arg1);
    func_0016AFF0();
}
extern s32 D_0041911C_x0016B048 __asm__("D_0041911C");
extern s32 D_00419120_x0016B048 __asm__("D_00419120");
void func_0016B048_x0016B048(s32 arg0, s32 arg1) __asm__("func_0016B048");
void func_0016B048_x0016B048(s32 arg0, s32 arg1) {
    D_0041911C_x0016B048 = arg0;
    D_00419120_x0016B048 = arg1;
}
extern s32 (*D_0041911C_x0016B060)(s32, s32) __asm__("D_0041911C");
extern s32 D_00419120_x0016B060 __asm__("D_00419120");
void func_0016B060_x0016B060(s32 arg0) __asm__("func_0016B060");
void func_0016B060_x0016B060(s32 arg0) {
    if (D_0041911C_x0016B060 != NULL) {
        D_0041911C_x0016B060(D_00419120_x0016B060, arg0);
    }
}
void func_0016B090(s32 arg0) {
    func_0016AFD8();
    func_0016B0C0(arg0);
    func_0016AFF0();
}
s32 memcmp_x0016B0C0(s32 *, s32 *, s32) __asm__("memcmp");
extern s32 D_004190E8_x0016B0C0 __asm__("D_004190E8");
extern s32 D_00419118_x0016B0C0 __asm__("D_00419118");
void func_0016B0C0_x0016B0C0(void) __asm__("func_0016B0C0");
void func_0016B0C0_x0016B0C0(void)
{
  s32 *new_var;
  int new_var2;
 new_var2 = 0; do { new_var = &D_004190E8_x0016B0C0; } while (new_var2);
  memcmp_x0016B0C0(new_var, &D_004190E8_x0016B0C0, 0x168);
  D_00419118_x0016B0C0 += 1;
}
void func_0016B100(s32 arg0) {
    func_0016AFD8();
    func_0016B130(arg0);
    func_0016AFF0();
}
extern s32 D_00419118_x0016B130 __asm__("D_00419118");
void func_0016B130_x0016B130(void) __asm__("func_0016B130");
void func_0016B130_x0016B130(void) {
    D_00419118_x0016B130 -= 1;
}
s32 func_0016B148(s32 arg0, s32 arg1) {
    s32 temp_s0;

    func_0016AFD8();
    temp_s0 = func_0016B190(arg0, arg1);
    func_0016AFF0();
    return temp_s0;
}
typedef struct Pl2Enc_x0016B190 {
    void *work;
    int wksize;
    int *dly_l;
    int *dly_r;
    int sfreq;
    int dly_pos;
    int dly_len;
    int gain_l;
    int gain_r;
    int gain_c;
    int gain_s;
} Pl2Enc_x0016B190;
typedef unsigned int size_t_x0016B190;
void *memset_x0016B190(void *, int, size_t_x0016B190) __asm__("memset");
extern volatile char pl2enc_ver_str_x0016B190[45] __asm__("D_004190E8");
extern char E03090101_NULL_pointer_is_specified_x0016B190[] __asm__("D_004645C8");
extern char E03090102_Work_size_is_too_short_x0016B190[] __asm__("D_004645F0");
extern char E03091001_Work_size_is_too_short_x0016B190[] __asm__("D_00464618");
void pl2enc_Reset_x0016B190(Pl2Enc_x0016B190 *pl2) __asm__("func_0016B310");
void pl2enc_CallErr_x0016B190(const char *message) __asm__("func_0016B060");
void pl2enc_CallErr_x0016B190(const char *message) __asm__("func_0016B060");
void pl2enc_Reset_x0016B190(Pl2Enc_x0016B190 *pl2) __asm__("func_0016B310");
void pl2enc_CallErr_x0016B190(const char *message) __attribute__((weak, section(".b3stub")));
void pl2enc_CallErr_x0016B190(const char *message) {}
Pl2Enc_x0016B190 *func_0016B190_x0016B190(void *work, int wksize) __asm__("func_0016B190");
/* pl2enc_Create: from https://github.com/crashbashash/DW4_Decomp (src/cri/pl2enc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
Pl2Enc_x0016B190 *func_0016B190_x0016B190(void *work, int wksize)
{
    Pl2Enc_x0016B190 *pl2;
    unsigned int p;
    pl2enc_ver_str_x0016B190;
    if (work == 0) {
        pl2enc_CallErr_x0016B190(E03090101_NULL_pointer_is_specified_x0016B190);
        return 0;
    }
    if (wksize < 1024) {
        pl2enc_CallErr_x0016B190(E03090102_Work_size_is_too_short_x0016B190);
        return 0;
    }
    p = (unsigned int)work;
    if (p & 3) {
        p = p - (p & 3) + 4;
    }
    pl2 = (Pl2Enc_x0016B190 *)p;
    memset_x0016B190(pl2, 0, sizeof(*pl2));
    pl2->work = work;
    pl2->wksize = wksize;
    p = (unsigned int)(pl2 + 1);
    if (p & 3) {
        p = p - (p & 3) + 4;
    }
    pl2->dly_l = (int *)p;
    pl2->dly_r = (int *)(p + 96 * sizeof(int));
    pl2enc_Reset_x0016B190(pl2);
    if (p + 2 * 96 * sizeof(int) > (unsigned int)work + wksize) {
        pl2enc_CallErr_x0016B190(E03091001_Work_size_is_too_short_x0016B190);
        return 0;
    }
    return pl2;
}
void func_0016B290(s32 arg0) {
    func_0016AFD8();
    func_0016B2C0(arg0);
    func_0016AFF0();
}
s32 memset_x0016B2C0() __asm__("memset");
void func_0016B2C0_x0016B2C0(s32 arg0) __asm__("func_0016B2C0");
void func_0016B2C0_x0016B2C0(s32 arg0) {
    memset_x0016B2C0(arg0, 0, 0x2C);
}
void func_0016B2E0(s32 arg0) {
    func_0016AFD8();
    func_0016B310(arg0);
    func_0016AFF0();
}
struct Table_x0016B310 {
    unsigned char pad0[0x8];
    int *a;
    int *b;
    unsigned char pad10[0x4];
    int used;
    int size;
};
void func_0016B310_x0016B310(struct Table_x0016B310 *t) __asm__("func_0016B310");
/* func_001739F0: from https://github.com/Subarasheese/pes6decomp (src/middleware/cri/pl2enc/func_001739F0.c, no licence stated for its own code); ee-gcc 2.96 -O2 -G0 */
void func_0016B310_x0016B310(struct Table_x0016B310 *t) {
    int i;
    for (i = 0; i < 0x60; i++) {
        t->a[i] = 0;
        t->b[i] = 0;
    }
    t->used = 0;
    t->size = 0x40;
}
void func_0016B350(s32 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_0016AFD8();
    func_0016B3B0(arg0, arg1, arg2, arg3);
    func_0016AFF0();
}
typedef struct Pl2Enc_x0016B3B0 {
    void *work;
    int wksize;
    int *dly_l;
    int *dly_r;
    int sfreq;
    int dly_pos;
    int dly_len;
    int gain_l;
    int gain_r;
    int gain_c;
    int gain_s;
} Pl2Enc_x0016B3B0;
extern int pl2enc_gain_tbl_x0016B3B0[] __asm__("D_004641C8");
void func_0016B3B0_x0016B3B0(Pl2Enc_x0016B3B0 *pl2, short in, short *out_l, short *out_r) __asm__("func_0016B3B0");
/* pl2enc_ExecOneSmpl: from https://github.com/crashbashash/DW4_Decomp (src/cri/pl2enc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0016B3B0_x0016B3B0(Pl2Enc_x0016B3B0 *pl2, short in, short *out_l, short *out_r)
{
    int s, l, r, ls, rs, c, ol, or;
    s = pl2enc_gain_tbl_x0016B3B0[pl2->gain_s];
    l = (in * pl2enc_gain_tbl_x0016B3B0[pl2->gain_l]) >> 12;
    r = (in * pl2enc_gain_tbl_x0016B3B0[pl2->gain_r]) >> 12;
    ls = (l * s) >> 12;
    rs = (r * s) >> 12;
    c = pl2enc_gain_tbl_x0016B3B0[pl2->gain_c];
    ol = ((l * c) >> 12) + pl2->dly_l[pl2->dly_pos];
    or = ((r * c) >> 12) + pl2->dly_r[pl2->dly_pos];
    if (ol > 32767) {
        ol = 32767;
    } else if (ol < -32768) {
        ol = -32768;
    }
    if (or > 32767) {
        or = 32767;
    } else if (or < -32768) {
        or = -32768;
    }
    pl2->dly_l[pl2->dly_pos] = (ls * -3567 + rs * -2006) >> 12;
    *out_l = ol;
    pl2->dly_r[pl2->dly_pos] = (rs * 3567 + ls * 2006) >> 12;
    *out_r = or;
    pl2->dly_pos++;
    if (pl2->dly_pos >= pl2->dly_len) {
        pl2->dly_pos = 0;
    }
}
void func_0016B520(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0016AFD8();
    func_0016B580(arg0, arg1, arg2, arg3);
    func_0016AFF0();
}
typedef struct Pl2Enc_x0016B580 {
    void *work;
    int wksize;
    int *dly_l;
    int *dly_r;
    int sfreq;
    int dly_pos;
    int dly_len;
    int gain_l;
    int gain_r;
    int gain_c;
    int gain_s;
} Pl2Enc_x0016B580;
extern int pl2enc_gain_tbl_x0016B580[] __asm__("D_004641C8");
void func_0016B580_x0016B580(Pl2Enc_x0016B580 *pl2, short *in, short *out_l, short *out_r) __asm__("func_0016B580");
/* pl2enc_ExecOneBlk: from https://github.com/crashbashash/DW4_Decomp (src/cri/pl2enc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0016B580_x0016B580(Pl2Enc_x0016B580 *pl2, short *in, short *out_l, short *out_r)
{
    int i, s, l, r, ls, rs, c, ol, or;
    int *dl;
    int *dr;
    dr = pl2->dly_r;
    dl = pl2->dly_l;
    for (i = 0; i < 32; i++) {
        s = pl2enc_gain_tbl_x0016B580[pl2->gain_s];
        l = (in[i] * pl2enc_gain_tbl_x0016B580[pl2->gain_l]) >> 12;
        r = (in[i] * pl2enc_gain_tbl_x0016B580[pl2->gain_r]) >> 12;
        ls = (l * s) >> 12;
        rs = (r * s) >> 12;
        c = pl2enc_gain_tbl_x0016B580[pl2->gain_c];
        ol = ((l * c) >> 12) + *dl;
        or = ((r * c) >> 12) + *dr;
        if (ol > 32767) {
            ol = 32767;
        } else if (ol < -32768) {
            ol = -32768;
        }
        if (or > 32767) {
            or = 32767;
        } else if (or < -32768) {
            or = -32768;
        }
        *dl = (ls * -3567 + rs * -2006) >> 12;
        out_l[i] = ol;
        dl++;
        *dr = (rs * 3567 + ls * 2006) >> 12;
        dr++;
        out_r[i] = or;
    }
}
void func_0016B720(s32 arg0, s32 arg1, s32 arg2) {
    func_0016AFD8();
    func_0016B770(arg0, arg1, arg2);
    func_0016AFF0();
}
typedef struct Pl2Enc_x0016B770 {
    void *work;
    int wksize;
    int *dly_l;
    int *dly_r;
    int sfreq;
    int dly_pos;
    int dly_len;
    int gain_l;
    int gain_r;
    int gain_c;
    int gain_s;
} Pl2Enc_x0016B770;
extern char E03090306_NULL_pointer_is_specified_x0016B770[] __asm__("D_00464640");
extern char E03090307_Illegal_parameter_is_specified_x0016B770[] __asm__("D_00464668");
void pl2enc_CallErr_x0016B770(const char *message) __asm__("func_0016B060");
void pl2enc_CallErr_x0016B770(const char *message) __asm__("func_0016B060");
void func_0016B770_x0016B770(Pl2Enc_x0016B770 *pl2, int x, int y) __asm__("func_0016B770");
/* pl2enc_SetPos: from https://github.com/crashbashash/DW4_Decomp (src/cri/pl2enc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0016B770_x0016B770(Pl2Enc_x0016B770 *pl2, int x, int y)
{
    if (pl2 == 0) {
        pl2enc_CallErr_x0016B770(E03090306_NULL_pointer_is_specified_x0016B770);
        return;
    }
    if (x < -127 || x > 127 || y < -127 || y > 127) {
        pl2enc_CallErr_x0016B770(E03090307_Illegal_parameter_is_specified_x0016B770);
        return;
    }
    pl2->gain_l = ((x + 127) < 0 ? -(x + 127) : (x + 127));
    pl2->gain_r = ((x - 127) < 0 ? -(x - 127) : (x - 127));
    pl2->gain_c = ((y + 127) < 0 ? -(y + 127) : (y + 127));
    pl2->gain_s = ((y - 127) < 0 ? -(y - 127) : (y - 127));
}
void func_0016B820(s32 arg0, s32 arg1) {
    func_0016AFD8();
    func_0016B860(arg0, arg1);
    func_0016AFF0();
}
typedef struct Pl2Enc_x0016B860 {
    void *work;
    int wksize;
    int *dly_l;
    int *dly_r;
    int sfreq;
    int dly_pos;
    int dly_len;
    int gain_l;
    int gain_r;
    int gain_c;
    int gain_s;
} Pl2Enc_x0016B860;
extern char E03091601_NULL_pointer_is_specified_x0016B860[] __asm__("D_00464698");
extern char E03091602_Illegal_parameter_is_specified_x0016B860[] __asm__("D_004646C0");
void pl2enc_CallErr_x0016B860(const char *message) __asm__("func_0016B060");
void pl2enc_CallErr_x0016B860(const char *message) __asm__("func_0016B060");
void func_0016B860_x0016B860(Pl2Enc_x0016B860 *pl2, int sfreq) __asm__("func_0016B860");
/* pl2enc_SetSfreq: from https://github.com/crashbashash/DW4_Decomp (src/cri/pl2enc.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0016B860_x0016B860(Pl2Enc_x0016B860 *pl2, int sfreq)
{
    int len;
    if (pl2 == 0) {
        pl2enc_CallErr_x0016B860(E03091601_NULL_pointer_is_specified_x0016B860);
        return;
    }
    if (sfreq <= 0) {
        pl2enc_CallErr_x0016B860(E03091602_Illegal_parameter_is_specified_x0016B860);
        return;
    }
    len = sfreq / 750;
    pl2->sfreq = sfreq;
    if (len > 96) {
        len = 96;
    } else if (len < 1) {
        len = 1;
    }
    pl2->dly_len = len;
}
typedef struct AdxPdObj_x0016B8E8 {
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
} AdxPdObj_x0016B8E8;
typedef struct SfdSj_x0016B8E8 SfdSj_x0016B8E8;
typedef struct SfdSjChunk_x0016B8E8 {
    char *data;
    int len;
} SfdSjChunk_x0016B8E8;
typedef struct SfdSjVtbl_x0016B8E8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x0016B8E8 *sj);
    int (*getUuid)(SfdSj_x0016B8E8 *sj);
    void (*reset)(SfdSj_x0016B8E8 *sj);
    void (*getChunk)(SfdSj_x0016B8E8 *sj, int id, int n, SfdSjChunk_x0016B8E8 *ck);
    void (*ungetChunk)(SfdSj_x0016B8E8 *sj, int id, SfdSjChunk_x0016B8E8 *ck);
    void (*putChunk)(SfdSj_x0016B8E8 *sj, int id, SfdSjChunk_x0016B8E8 *ck);
    int (*getNumData)(SfdSj_x0016B8E8 *sj, int id);
} SfdSjVtbl_x0016B8E8;
struct SfdSj_x0016B8E8 {
    SfdSjVtbl_x0016B8E8 *vtbl;
};
typedef struct SjxObj_x0016B8E8 SjxObj_x0016B8E8;
typedef struct AdxDecPara_x0016B8E8 {
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
} AdxDecPara_x0016B8E8;
struct Pl2Enc_x0016B8E8;
typedef struct AdxbObj_x0016B8E8 AdxbObj_x0016B8E8;
typedef short *(*AdxbGetWrFunc_x0016B8E8)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x0016B8E8)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x0016B8E8 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x0016B8E8 *xpd;
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
    AdxDecPara_x0016B8E8 dp;
    AdxbGetWrFunc_x0016B8E8 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x0016B8E8 addwrfunc;
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
    struct Pl2Enc_x0016B8E8 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void (*adxb_pl2_exec_func_x0016B8E8)(AdxbObj_x0016B8E8 *obj, int v, short *src, short *dst) __asm__("D_00401094");
extern void (*adxb_pl2_reset_func_x0016B8E8)(AdxbObj_x0016B8E8 *obj) __asm__("D_00401098");
extern void ADXB_EntryDecFunc_x0016B8E8(AdxbObj_x0016B8E8 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct Pl2Enc_x0016B8E8 {
    void *work;
    int wksize;
    int *dly_l;
    int *dly_r;
    int sfreq;
    int dly_pos;
    int dly_len;
    int gain_l;
    int gain_r;
    int gain_c;
    int gain_s;
} Pl2Enc_x0016B8E8;
typedef void (*Pl2EncErrFunc_x0016B8E8)(void *obj, const char *message);
void PL2ENC_EntryErrFunc_x0016B8E8(Pl2EncErrFunc_x0016B8E8 func, void *obj) __asm__("func_0016B008");
void PL2ENC_Init_x0016B8E8(int reserved) __asm__("func_0016B090");
Pl2Enc_x0016B8E8 *PL2ENC_Create_x0016B8E8(void *work, int wksize) __asm__("func_0016B148");
void PL2ENC_SetPos_x0016B8E8(Pl2Enc_x0016B8E8 *pl2, int x, int y) __asm__("func_0016B720");
void ADXM_Lock_x0016B8E8(void) __asm__("func_00157E70");
void ADXM_Unlock_x0016B8E8(void) __asm__("func_00157E88");
typedef struct LscStm_x0016B8E8 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm_x0016B8E8;
typedef struct LscObj_x0016B8E8 {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x0016B8E8 *sj;
    SfdSjChunk_x0016B8E8 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x0016B8E8 stms[16];
} LscObj_x0016B8E8;
typedef struct AdxSjdObj_x0016B8E8 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x0016B8E8 *adxb;
    SfdSj_x0016B8E8 *sji;
    SfdSj_x0016B8E8 *sjo[2];
    SfdSjChunk_x0016B8E8 cki;
    SfdSjChunk_x0016B8E8 cko[2];
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
} AdxSjdObj_x0016B8E8;
extern void (*adxsjd_header_hook_x0016B8E8)(AdxbObj_x0016B8E8 *adxb, int rate) __asm__("D_0040D5E8");
extern void ADXSJD_EntryFltFunc_x0016B8E8(AdxSjdObj_x0016B8E8 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x0016B8E8(AdxSjdObj_x0016B8E8 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x0016B8E8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x0016B8E8)(CvFsErrFn_x0016B8E8 func, void *obj);
typedef int (*CvFsPathFn_x0016B8E8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x0016B8E8)(void);
typedef int (*CvFsOpenFn_x0016B8E8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x0016B8E8)(int fd);
typedef int (*CvFsFdIntFn_x0016B8E8)(int fd);
typedef int (*CvFsSeekFn_x0016B8E8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x0016B8E8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x0016B8E8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x0016B8E8)(void);
typedef int (*CvFsLoadDirInfoFn_x0016B8E8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x0016B8E8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x0016B8E8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x0016B8E8 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x0016B8E8 entry_err_func;
    CvFsPathFn_x0016B8E8 get_file_size;
    CvFsGetFreeSizeFn_x0016B8E8 get_free_size;
    CvFsOpenFn_x0016B8E8 open;
    CvFsFdFn_x0016B8E8 close;
    CvFsSeekFn_x0016B8E8 seek;
    CvFsFdIntFn_x0016B8E8 tell;
    CvFsXferFn_x0016B8E8 req_rd;
    CvFsXferFn_x0016B8E8 req_wr;
    CvFsFdFn_x0016B8E8 stop_tr;
    CvFsFdIntFn_x0016B8E8 get_stat;
    CvFsFdIntFn_x0016B8E8 get_sct_len;
    CvFsSetSctLenFn_x0016B8E8 set_sct_len;
    CvFsFdIntFn_x0016B8E8 get_num_tr;
    CvFsPathFn_x0016B8E8 change_dir;
    CvFsPathFn_x0016B8E8 is_exist_file;
    CvFsGetNumFilesFn_x0016B8E8 get_num_files;
    CvFsLoadDirInfoFn_x0016B8E8 load_dir_info;
    CvFsFdIntFn_x0016B8E8 get_max_byte_rate;
    CvFsPathFn_x0016B8E8 make_dir;
    CvFsPathFn_x0016B8E8 remove_dir;
    CvFsPathFn_x0016B8E8 delete_file;
    CvFsGetFileSizeExFn_x0016B8E8 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x0016B8E8 opt_fn2;
} CvFsVtbl_x0016B8E8;
typedef struct CvFsHandle_x0016B8E8 {
    CvFsVtbl_x0016B8E8 *vtbl;
    int fd;
} CvFsHandle_x0016B8E8;
extern CvFsVtbl_x0016B8E8 *addDevice_x0016B8E8(char *devname, CvFsVtbl_x0016B8E8 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x0016B8E8 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x0016B8E8 *sj;
    CvFsHandle_x0016B8E8 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x0016B8E8 rdck;
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
} AdxStmObj_x0016B8E8;
extern void ADXSTM_EntryEosFunc_x0016B8E8(AdxStmObj_x0016B8E8 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
typedef struct AdxAmpObj_x0016B8E8 AdxAmpObj_x0016B8E8;
typedef struct DtrObj_x0016B8E8 DtrObj_x0016B8E8;
typedef struct Ps2RnaPsj_x0016B8E8 {
    char used;
    void *sjrmt;
    SfdSj_x0016B8E8 *sjuni;
    SjxObj_x0016B8E8 *sjx;
    SfdSjChunk_x0016B8E8 ck;
} Ps2RnaPsj_x0016B8E8;
typedef struct Ps2Rna_x0016B8E8 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x0016B8E8 *psj[2];
    DtrObj_x0016B8E8 *dtr[2];
    SfdSj_x0016B8E8 *sjo[2];
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
} Ps2Rna_x0016B8E8;
typedef struct AdxtObj_x0016B8E8 {
    signed char used;
    signed char stat;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x0016B8E8 *sjd;
    AdxStmObj_x0016B8E8 *stm;
    Ps2Rna_x0016B8E8 *rna;
    SfdSj_x0016B8E8 *sjf;
    SfdSj_x0016B8E8 *sji;
    SfdSj_x0016B8E8 *sjo[2];
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
    AdxAmpObj_x0016B8E8 *amp;
    SfdSj_x0016B8E8 *ampsji[2];
    SfdSj_x0016B8E8 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x0016B8E8 *lsc;
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
} AdxtObj_x0016B8E8;
typedef void (*AdxtHookFunc_x0016B8E8)(AdxtObj_x0016B8E8 *adxt);
extern AdxtHookFunc_x0016B8E8 adxt_detach_pl2_x0016B8E8 __asm__("D_00411178");
void ADXT_Stop_x0016B8E8(AdxtObj_x0016B8E8 *adxt) __asm__("ADXT_Stop");
void ADXERR_CallErrFunc1_x0016B8E8(const char *msg) __asm__("ADXERR_CallErrFunc1");
void adxt_CallDetachPl2_x0016B8E8(AdxtObj_x0016B8E8 *adxt) __asm__("func_0016BA20");
void adxt_Pl2ErrFunc_x0016B8E8(void *obj, const char *message) __asm__("func_0016BBC8");
void adxt_Pl2Detach_x0016B8E8(AdxtObj_x0016B8E8 *adxt) __asm__("func_0016BAF0");
void adxt_Pl2ExecOneSmpl_x0016B8E8(AdxbObj_x0016B8E8 *adxb, int in, short *out_l, short *out_r) __asm__("func_0016BB78");
void adxt_Pl2Reset_x0016B8E8(AdxbObj_x0016B8E8 *adxb) __asm__("func_0016BB60");
void adxt_Pl2SetSfreq_x0016B8E8(AdxbObj_x0016B8E8 *adxb, int sfreq) __asm__("func_0016BBB0");
void adxt_CallDetachPl2_x0016B8E8(AdxtObj_x0016B8E8 *adxt) __asm__("func_0016BA20");
void adxt_Pl2Detach_x0016B8E8(AdxtObj_x0016B8E8 *adxt) __asm__("func_0016BAF0");
void adxt_Pl2Reset_x0016B8E8(AdxbObj_x0016B8E8 *adxb) __asm__("func_0016BB60");
void adxt_Pl2ExecOneSmpl_x0016B8E8(AdxbObj_x0016B8E8 *adxb, int in, short *out_l, short *out_r) __asm__("func_0016BB78");
void adxt_Pl2SetSfreq_x0016B8E8(AdxbObj_x0016B8E8 *adxb, int sfreq) __asm__("func_0016BBB0");
void adxt_Pl2ErrFunc_x0016B8E8(void *obj, const char *message) __asm__("func_0016BBC8");
extern char ext_str0_x0016B8E8[] __asm__("D_00464730");
extern char ext_str1_x0016B8E8[] __asm__("D_004646F0");
void func_0016B8E8_x0016B8E8(AdxtObj_x0016B8E8 *adxt, void *work, int wksize) __asm__("func_0016B8E8");
/* ADXT_AttachPl2: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxtpl2.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_0016B8E8_x0016B8E8(AdxtObj_x0016B8E8 *adxt, void *work, int wksize)
{
    AdxbObj_x0016B8E8 *adxb;
    Pl2Enc_x0016B8E8 *pl2;
    if (adxt->maxnch < 2) {
        ADXERR_CallErrFunc1_x0016B8E8(ext_str1_x0016B8E8);
        return;
    }
    ADXT_Stop_x0016B8E8(adxt);
    adxt_CallDetachPl2_x0016B8E8(adxt);
    PL2ENC_EntryErrFunc_x0016B8E8(adxt_Pl2ErrFunc_x0016B8E8, 0);
    PL2ENC_Init_x0016B8E8(0);
    adxb = adxt->sjd->adxb;
    ADXM_Lock_x0016B8E8();
    pl2 = PL2ENC_Create_x0016B8E8(work, wksize);
    if (pl2 == 0) {
        ADXERR_CallErrFunc1_x0016B8E8(ext_str0_x0016B8E8);
        return;
    }
    PL2ENC_SetPos_x0016B8E8(pl2, adxb->pl2_x, adxb->pl2_y);
    adxb->pl2 = pl2;
    adxt_detach_pl2_x0016B8E8 = adxt_Pl2Detach_x0016B8E8;
    adxb_pl2_exec_func_x0016B8E8 = adxt_Pl2ExecOneSmpl_x0016B8E8;
    adxb_pl2_reset_func_x0016B8E8 = adxt_Pl2Reset_x0016B8E8;
    adxsjd_header_hook_x0016B8E8 = adxt_Pl2SetSfreq_x0016B8E8;
    ADXM_Unlock_x0016B8E8();
}
extern s32 (*D_00411178_x0016BA20)() __asm__("D_00411178");
void func_0016BA20_x0016BA20(void) __asm__("func_0016BA20");
void func_0016BA20_x0016BA20(void) {
    if (D_00411178_x0016BA20 != NULL) {
        D_00411178_x0016BA20();
    }
}
s32 ADXERR_CallErrFunc1_x0016BA48(s32 *) __asm__("ADXERR_CallErrFunc1");
s32 func_0016B720_x0016BA48(s32) __asm__("func_0016B720");
extern s32 D_00464768_x0016BA48 __asm__("D_00464768");
extern s32 D_00464798_x0016BA48 __asm__("D_00464798");
void func_0016BA48_x0016BA48(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_0016BA48");
void func_0016BA48_x0016BA48(u8 *arg0, s32 arg1, s32 arg2)
{
  s32 temp_a0;
  u8 *temp_s0;
  if (arg0 == ((void *) 0))
  {
    ADXERR_CallErrFunc1_x0016BA48(&D_00464768_x0016BA48);
    return;
  }
  temp_s0 = *((u8 **) (((u8 *) (*((u8 **) (((u8 *) arg0) + 4)))) + 4));
  temp_a0 = *((s32 *) (((u8 *) temp_s0) + 0xE8));
  if (((*((s8 *) (((u8 *) arg0) + 3))) < 2) || (temp_a0 == 0))
  {
    ADXERR_CallErrFunc1_x0016BA48(&D_00464798_x0016BA48);
    return;
  }
  func_0016B720_x0016BA48(temp_a0);
 do { *((s32 *) (((u8 *) temp_s0) + 0xF0)) = arg2; *((s32 *) (((u8 *) temp_s0) + 0xEC)) = arg1; } while (0);
}
void func_0016BAF0(u8 *arg0) {
    s32 temp_s0;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 4)) + 4);
    temp_s0 = *(s32 *)((u8 *)temp_s1 + 0xE8);
    if (temp_s0 == 0) {
        return;
    }
    ADXT_Stop();
    func_00157E70();
    func_0016B290(temp_s0);
    *(s32 *)((u8 *)temp_s1 + 0xE8) = 0;
    func_0016B100(0);
    func_00157E88();
}
void func_0016BB60(u8 *arg0) {
    func_0016B2E0(*(s32 *)((u8 *)arg0 + 0xE8));
}
s32 func_0016B350_x0016BB78(s32, s16) __asm__("func_0016B350");
void func_0016BB78_x0016BB78(u8 *arg0, s16 arg1) __asm__("func_0016BB78");
void func_0016BB78_x0016BB78(u8 *arg0, s16 arg1) {
    func_0016B350_x0016BB78(*(s32 *)((u8 *)arg0 + 0xE8), arg1);
}
s32 func_0016B720_x0016BB98(s32) __asm__("func_0016B720");
void func_0016BB98_x0016BB98(u8 *arg0) __asm__("func_0016BB98");
void func_0016BB98_x0016BB98(u8 *arg0) {
    func_0016B720_x0016BB98(*(s32 *)((u8 *)arg0 + 0xE8));
}
s32 func_0016B820_x0016BBB0(s32) __asm__("func_0016B820");
void func_0016BBB0_x0016BBB0(u8 *arg0) __asm__("func_0016BBB0");
void func_0016BBB0_x0016BBB0(u8 *arg0) {
    func_0016B820_x0016BBB0(*(s32 *)((u8 *)arg0 + 0xE8));
}
s32 ADXERR_CallErrFunc1_x0016BBC8(s32) __asm__("ADXERR_CallErrFunc1");
void func_0016BBC8_x0016BBC8(s32 arg0, s32 arg1) __asm__("func_0016BBC8");
void func_0016BBC8_x0016BBC8(s32 arg0, s32 arg1) {
    ADXERR_CallErrFunc1_x0016BBC8(arg1);
}
