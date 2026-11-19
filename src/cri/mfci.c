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

INCLUDE_ASM("asm/nonmatchings/cri/mfci", mfci_get_adr_size);
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
INCLUDE_ASM("asm/nonmatchings/cri/mfci", mfCiOpen);
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
INCLUDE_ASM("asm/nonmatchings/cri/mfci", mfCiReqRd);
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
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016AE98);
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
INCLUDE_ASM("asm/nonmatchings/cri/mfci", mfCiOpenEntry);
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
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B190);
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
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B310);
void func_0016B350(s32 arg0, s16 arg1, s32 arg2, s32 arg3) {
    func_0016AFD8();
    func_0016B3B0(arg0, arg1, arg2, arg3);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B3B0);
void func_0016B520(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0016AFD8();
    func_0016B580(arg0, arg1, arg2, arg3);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B580);
void func_0016B720(s32 arg0, s32 arg1, s32 arg2) {
    func_0016AFD8();
    func_0016B770(arg0, arg1, arg2);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B770);
void func_0016B820(s32 arg0, s32 arg1) {
    func_0016AFD8();
    func_0016B860(arg0, arg1);
    func_0016AFF0();
}
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B860);
INCLUDE_ASM("asm/nonmatchings/cri/mfci", func_0016B8E8);
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
