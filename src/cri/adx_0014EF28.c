#include "common.h"

extern s8 lbl_80186B68;

s32 ADXF_GetPtStat();                           /* extern */

s32 ADXF_GetStat(s32);                              /* extern */
s32 ADXF_Stop(s32);                             /* extern */

s32 func_001553A0(s32);                         /* extern */
extern s32 D_00402A7C;
extern s32 D_00402A80;
extern s32 D_00402A84;
extern s32 D_00402A8C;

s32 func_00170620();                            /* extern */

extern s32 D_00402000;
extern s32 D_00402004;
extern s32 D_00402008;

extern s32 D_00401FF8;

s32 func_0016FF58();                            /* extern */

s32 func_0016FF40();                            /* extern */

extern s32 D_00401FF0;

s32 func_00161B68(s32);                         /* extern */

s32 func_001619C8(s32, s32, s32);               /* extern */
s32 func_00161A18(s32, s16, s16, s16);          /* extern */

s32 func_001619F0(s32, s32, s32);               /* extern */
s32 func_00161A28(s32, void *, void *, void *); /* extern */

s32 func_00161A48(s32);                         /* extern */

s32 func_001618A8();                            /* extern */

s32 func_00161880();                            /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
extern s32 D_004010A8;

extern s32 D_00401084;

extern s32 D_00401088;
extern s32 D_0040108C;

s32 func_0014F548();                            /* extern */
s32 func_0014F6E0();                            /* extern */

static inline int RD32_x0014EF28___(unsigned char *src)
{
    return src[0] | src[1] << 8 | src[2] << 16 | src[3] << 24;
}
static inline int RD16_x0014EF28___(unsigned char *src)
{
    return src[0] | src[1] << 8;
}
static inline int swap32_x0014EF28___(int x)
{
    int byte0;
    int bytes01;
    int bytes012;
    byte0 = x >> 24 & 0xff;
    bytes01 = byte0 | (x >> 8 & 0xff00);
    bytes012 = bytes01 | (x << 8 & 0xff0000);
    return bytes012 | x << 24;
}
unsigned char *func_0014EF28_x0014EF28___(unsigned char *hdr, int *rate, int *nch, int *bits, int *nframes) __asm__("func_0014EF28");
/* adxb_read_aiff_chunks: from https://github.com/new-coke/rez-decomp (src/cri/adxb_aiff.c, MIT); ee-gcc 2.96 -O2 -G0 */
unsigned char *func_0014EF28_x0014EF28___(unsigned char *hdr, int *rate, int *nch, int *bits, int *nframes)
{
    unsigned char *p;
    unsigned char *end;
    unsigned char *data;
    int id;
    int size;
    int form;
    int comm;
    int ssnd;
    int exp_raw;
    int raw16;
    int raw32;
    unsigned int ssnd_ofs;
    unsigned short mt;
    unsigned short ex;
    p = hdr;
    id = RD32_x0014EF28___(p);
    p += 4;
    size = RD32_x0014EF28___(p);
    p += 4;
    size = swap32_x0014EF28___(size);
    form = RD32_x0014EF28___(p);
    comm = 0;
    ssnd = 0;
    data = 0;
    ssnd_ofs = 0;
    p += 4;
    if (id != 0x4d524f46)
        return 0;
    if (form != 0x46464941)
        return 0;
    end = p + size - 4;
    while (p < end) {
        id = RD32_x0014EF28___(p);
        p += 4;
        size = RD32_x0014EF28___(p);
        p += 4;
        size = swap32_x0014EF28___(size);
        switch (id) {
        case 0x4d4d4f43:
            if (comm)
                continue;
            if (size < 18)
                return 0;
            raw16 = RD16_x0014EF28___(p);
            p += 2;
            comm = 1;
            *nch = (((raw16) >> 8 & 0xff) | ((raw16) << 8 & 0xff00));
            raw32 = RD32_x0014EF28___(p);
            p += 4;
            *nframes = (((raw32) >> 24 & 0xff) | ((raw32) >> 8 & 0xff00) | ((raw32) << 8 & 0xff0000) | (raw32) << 24);
            raw16 = RD16_x0014EF28___(p);
            p += 2;
            *bits = (((raw16) >> 8 & 0xff) | ((raw16) << 8 & 0xff00));
            exp_raw = p[0];
            exp_raw |= p[1] << 8;
            p += 2;
            ex = (((exp_raw) >> 8 & 0xff) | ((exp_raw) << 8 & 0xff00));
            raw16 = RD16_x0014EF28___(p);
            p += 8;
            mt = (((raw16) >> 8 & 0xff) | ((raw16) << 8 & 0xff00));
            *rate = mt >> (16398 - (ex & 0xff));
            if (ssnd)
                return data;
            break;
        case 0x444e5353:
            if (ssnd)
                continue;
            ssnd = 1;
            ssnd_ofs = RD32_x0014EF28___(p);
            p += 4;
            ssnd_ofs = (((ssnd_ofs) >> 24 & 0xff) | ((ssnd_ofs) >> 8 & 0xff00) | ((ssnd_ofs) << 8 & 0xff0000) | (ssnd_ofs) << 24);
            data = p + ssnd_ofs;
            if (comm)
                return data;
            break;
        default:
            p += (size + 1) & ~1;
            break;
        }
    }
    return data;
}
__asm__("# rebind func_0014EF28 0x0014EF28");
s32 memcmp_x0014F2B8(s32 *, s32 *, s32) __asm__("memcmp");
extern s32 D_0045FC00_x0014F2B8 __asm__("D_0045FC00");
extern s32 D_0045FC08_x0014F2B8 __asm__("D_0045FC08");
s32 func_0014F2B8_x0014F2B8(s32 arg0) __asm__("func_0014F2B8");
s32 func_0014F2B8_x0014F2B8(s32 arg0) {
    if ((memcmp_x0014F2B8(arg0, &D_0045FC00_x0014F2B8, (s32 *)4) == 0) && (memcmp_x0014F2B8(arg0 + 8, &D_0045FC08_x0014F2B8, 4) == 0)) {
        return 1;
    }
    return 0;
}
typedef signed char Sint8_x0014F320;
typedef signed short Sint16_x0014F320;
typedef signed int Sint32_x0014F320;
extern Sint8_x0014F320 *func_00340B00_x0014F320(Sint8_x0014F320 *ibuf, Sint32_x0014F320 *sfreq, Sint32_x0014F320 *nch, Sint32_x0014F320 *bps, Sint32_x0014F320 *nsmpl) __asm__("func_0014EF28");
Sint32_x0014F320 func_0014F320_x0014F320(Sint8_x0014F320 *ibuf, Sint32_x0014F320 ibuflen, Sint16_x0014F320 *dlen, Sint8_x0014F320 *code, Sint8_x0014F320 *bps, Sint8_x0014F320 *blksize, Sint8_x0014F320 *nch, Sint32_x0014F320 *sfreq, Sint32_x0014F320 *total_nsmpl, Sint32_x0014F320 *nsmpl_blk) __asm__("func_0014F320");
/* ADX_DecodeInfoAiff: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00340e.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x0014F320 func_0014F320_x0014F320(Sint8_x0014F320 *ibuf, Sint32_x0014F320 ibuflen, Sint16_x0014F320 *dlen, Sint8_x0014F320 *code, Sint8_x0014F320 *bps, Sint8_x0014F320 *blksize, Sint8_x0014F320 *nch, Sint32_x0014F320 *sfreq, Sint32_x0014F320 *total_nsmpl, Sint32_x0014F320 *nsmpl_blk) {
    Sint8_x0014F320 *dt;
    Sint32_x0014F320 lsfreq, lnch, lbps, lnsmpl;
    if (ibuflen < 4096) { *dlen = 0; return -1; }
    dt = func_00340B00_x0014F320(ibuf, &lsfreq, &lnch, &lbps, &lnsmpl);
    if (dt == 0) { return -1; }
    *dlen = dt - ibuf;
    if ((*dlen * 1024) <= 0) { return -1; }
    *sfreq = lsfreq;
    *nch = lnch;
    *bps = lbps;
    *total_nsmpl = lnsmpl;
    *code = -1;
    *blksize = (*nch * *bps) / 8;
    *nsmpl_blk = 1;
    return 0;
}
typedef signed char Sint8_x0014F430;
typedef short Sint16_x0014F430;
typedef int Sint32_x0014F430;
typedef void *ADXPD_x0014F430;
typedef void *AHXSJD_x0014F430;
typedef struct _adx_dec_para_x0014F430 {
    Sint8_x0014F430 *ibuf;
    Sint32_x0014F430 niblk;
    Sint32_x0014F430 nch;
    Sint32_x0014F430 blksize;
    Sint32_x0014F430 blknsmpl;
    Sint8_x0014F430 *pcmbuf;
    Sint32_x0014F430 pcmbsize;
    Sint32_x0014F430 pcmbdist;
    Sint32_x0014F430 wpos;
    Sint32_x0014F430 nroom;
    Sint32_x0014F430 lp_nsmpl;
    Sint32_x0014F430 ndecsmpl;
} AdxDecPara_x0014F430;
typedef struct _adx_intbuf_x0014F430 {
    Sint16_x0014F430 used;
    Sint16_x0014F430 hdcdflag;
    Sint32_x0014F430 stat;
    ADXPD_x0014F430 xpd;
    Sint8_x0014F430 code;
    Sint8_x0014F430 bps;
    Sint8_x0014F430 nch;
    Sint8_x0014F430 blklen;
    Sint32_x0014F430 blknsmpl;
    Sint32_x0014F430 sfreq;
    Sint32_x0014F430 total_nsmpl;
    Sint16_x0014F430 cof;
    Sint16_x0014F430 rsv1;
    Sint32_x0014F430 lp_ins_nsmpl;
    Sint16_x0014F430 nloop;
    Sint16_x0014F430 lp_type;
    Sint32_x0014F430 lp_spos;
    Sint32_x0014F430 lp_sofst;
    Sint32_x0014F430 lp_epos;
    Sint32_x0014F430 lp_eofst;
    Sint32_x0014F430 maxnch;
    Sint16_x0014F430 *pcmbuf;
    Sint32_x0014F430 pcmbsize;
    Sint32_x0014F430 pcmbdist;
    AdxDecPara_x0014F430 dp;
    Sint32_x0014F430 (*getwrfunc)(void *, Sint32_x0014F430 *, Sint32_x0014F430 *, Sint32_x0014F430 *);
    void *getwrobj;
    void (*addwrfunc)(void *, Sint32_x0014F430, Sint32_x0014F430);
    void *addwrobj;
    Sint32_x0014F430 total_ndecsmpl;
    Sint32_x0014F430 curwpos;
    Sint32_x0014F430 ndecsmpl;
    Sint32_x0014F430 ndeclen;
    Sint16_x0014F430 fmttype;
    Sint16_x0014F430 rsv2;
    Sint16_x0014F430 cdctype;
    Sint16_x0014F430 k0;
    Sint16_x0014F430 km;
    Sint16_x0014F430 ka;
    AHXSJD_x0014F430 sjdh;
    Sint32_x0014F430 ahxdecsmpl;
    Sint32_x0014F430 ahxsvrfreq;
} ADX_BASIC_x0014F430, *ADXB_x0014F430;
extern Sint32_x0014F430 ADX_DecodeInfoAiff_x0014F430(Sint8_x0014F430 *ibuf, Sint32_x0014F430 ibuflen, Sint16_x0014F430 *dlen, Sint8_x0014F430 *code, Sint8_x0014F430 *bps, Sint8_x0014F430 *blksize, Sint8_x0014F430 *nch, Sint32_x0014F430 *sfreq, Sint32_x0014F430 *total_nsmpl, Sint32_x0014F430 *nsmpl_blk) __asm__("func_0014F320");
Sint32_x0014F430 func_0014F430_x0014F430(ADXB_x0014F430 adxb, Sint8_x0014F430 *ibuf, Sint32_x0014F430 ibuflen) __asm__("func_0014F430");
/* func_00341008: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00341008.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x0014F430 func_0014F430_x0014F430(ADXB_x0014F430 adxb, Sint8_x0014F430 *ibuf, Sint32_x0014F430 ibuflen)
{
    Sint16_x0014F430 dlen;
    adxb->hdcdflag = 1;
    if (ADX_DecodeInfoAiff_x0014F430(ibuf, ibuflen, &dlen, &adxb->code, &adxb->bps, &adxb->blklen,
                      &adxb->nch, &adxb->sfreq, &adxb->total_nsmpl, &adxb->blknsmpl) < 0) {
        return 0;
    }
    adxb->cof = 0;
    adxb->lp_eofst = 0;
    adxb->lp_epos = 0;
    adxb->lp_sofst = 0;
    adxb->lp_spos = 0;
    adxb->lp_ins_nsmpl = 0;
    adxb->lp_type = 0;
    adxb->nloop = 0;
    adxb->dp.nch = adxb->nch;
    adxb->dp.blksize = adxb->blklen;
    adxb->dp.pcmbuf = (Sint8_x0014F430 *)adxb->pcmbuf;
    adxb->fmttype = 3;
    adxb->dp.blknsmpl = adxb->blknsmpl;
    adxb->dp.pcmbsize = adxb->pcmbsize;
    adxb->dp.pcmbdist = adxb->pcmbdist;
    adxb->curwpos = 0;
    adxb->total_ndecsmpl = 0;
    if (adxb->bps == 8) {
        adxb->cdctype = 1;
    } else {
        adxb->cdctype = 0;
    }
    return dlen;
}
typedef struct { unsigned short *in; int f4; char pad8[0x14 - 8]; short *out; int f18; int f1C; int f20; int f24; } Inf_F548_x0014F548;
typedef struct { int pad0; int stat; void *pd; char padC[0xE - 0xC]; signed char nch; char padF[0x48 - 0xF]; Inf_F548_x0014F548 inf; char pad70[0x68 - 0x70 + 0x8]; int f70; int pad74; int (*cb1)(void *, int *, int *, int *); void *cb1obj; void (*cb2)(void *, int, int); void *cb2obj; char pad88[0x90 - 0x88]; int f90, f94; } Obj_F548_x0014F548;
int func_00161A88_x0014F548(void *) __asm__("func_00161A88");
void func_0014F548_x0014F548(Obj_F548_x0014F548 *o) __asm__("func_0014F548");
void func_0014F548_x0014F548(Obj_F548_x0014F548 *o)
{
    Inf_F548_x0014F548 *inf = &o->inf;
    unsigned short *in = inf->in;
    short *out;
    short *out2;
    unsigned int sample;
    int n;
    int i;

    if (o->stat == 1) {
        if (func_00161A88_x0014F548(o->pd) == 0) {
            o->cb1(o->cb1obj, (int *)((char *)o + 0x68), (int *)((char *)o + 0x6C), &o->f70);
            n = inf->f18 - inf->f20;
            if (inf->f24 < n) {
                n = inf->f24;
            }
            if (inf->f4 < n) {
                n = inf->f4;
            }
            out = inf->out + inf->f20;
            if (o->nch == 2) {
                out2 = inf->out + (inf->f1C + inf->f20);
                for (i = 0; i < n; i++) {
                    sample = in[i * 2];
                    out[i] = (sample >> 8) | (sample << 8);
                    sample = in[i * 2 + 1];
                    out2[i] = (sample >> 8) | (sample << 8);
                }
            } else {
                for (i = 0; i < n; i++) {
                    sample = in[i];
                    out[i] = (sample >> 8) | (sample << 8);
                }
            }
            o->stat = 2;
            o->f90 = n;
            o->f94 = n * o->nch * 2;
        }
    }
    if (o->stat == 2) {
        o->cb2(o->cb2obj, o->f94, o->f90);
        o->stat = 3;
    }
}
typedef struct { unsigned char *in; int f4; char pad8[0x14 - 8]; short *out; int f18; int f1C; int f20; int f24; } Inf_F6E0_x0014F6E0;
typedef struct { int pad0; int stat; void *pd; char padC[0xE - 0xC]; signed char nch; char padF[0x48 - 0xF]; Inf_F6E0_x0014F6E0 inf; char pad70[0x68 - 0x70 + 0x8]; int f70; int pad74; int (*cb1)(void *, int *, int *, int *); void *cb1obj; void (*cb2)(void *, int, int); void *cb2obj; char pad88[0x90 - 0x88]; int f90, f94; } Obj_F6E0_x0014F6E0;
int func_00161A88_x0014F6E0(void *) __asm__("func_00161A88");
void func_0014F6E0_x0014F6E0(Obj_F6E0_x0014F6E0 *o) __asm__("func_0014F6E0");
void func_0014F6E0_x0014F6E0(Obj_F6E0_x0014F6E0 *o)
{
    Inf_F6E0_x0014F6E0 *inf = &o->inf;
    unsigned char *in = inf->in;
    short *out;
    short *out2;
    unsigned char *p;
    int n;
    int i;

    if (o->stat == 1) {
        if (func_00161A88_x0014F6E0(o->pd) == 0) {
            o->cb1(o->cb1obj, (int *)((char *)o + 0x68), (int *)((char *)o + 0x6C), &o->f70);
            n = inf->f18 - inf->f20;
            if (inf->f24 < n) {
                n = inf->f24;
            }
            if (inf->f4 < n) {
                n = inf->f4;
            }
            out = inf->out + inf->f20;
            if (o->nch == 2) {
                out2 = inf->out + (inf->f1C + inf->f20);
                for (i = 0; i < n; i++) {
                    out[i] = in[i * 2] << 8;
                    out2[i] = in[i * 2 + 1] << 8;
                }
            } else {
                for (i = 0; i < n; i++) {
                    out[i] = in[i] << 8;
                }
            }
            o->stat = 2;
            o->f90 = n;
            o->f94 = n * o->nch;
        }
    }
    if (o->stat == 2) {
        o->cb2(o->cb2obj, o->f94, o->f90);
        o->stat = 3;
    }
}
void func_0014F860(u8 *arg0) {
    if (*(s16 *)((u8 *)arg0 + 0x9C) == 1) {
        func_0014F6E0();
        return;
    }
    func_0014F548();
}
enum AdxbAuFmt_x0014F888________________ {
    ADXB_AU_PCM_16_x0014F888________________ = 0,
    ADXB_AU_PCM_8_x0014F888________________ = 1,
    ADXB_AU_ULAW_x0014F888________________ = 2
};
enum AuEncoding_x0014F888________________ {
    AU_ENC_ULAW_8_x0014F888________________ = 1,
    AU_ENC_LINEAR_8_x0014F888________________ = 2,
    AU_ENC_LINEAR_16_x0014F888________________ = 3
};
unsigned char *func_0014F888_x0014F888________________(unsigned char *buf, int len, int *sfreq, int *nch, int *bits, int *nsmpl,
                              int *fmt) __asm__("func_0014F888");
/* AU_GetInfo: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxau.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
unsigned char *func_0014F888_x0014F888________________(unsigned char *buf, int len, int *sfreq, int *nch, int *bits, int *nsmpl,
                              int *fmt)
{
    unsigned char *p;
    unsigned int magic;
    unsigned int ofst;
    unsigned int size;
    unsigned int enc;
    int word;
    int ch;
    p = buf;
    magic = ((p)[0] | ((p)[1] << 8) | ((p)[2] << 16) | ((p)[3] << 24));
    p += 4;
    if (magic != 0x0064732E && magic != 0x646E732E) {
        return 0;
    }
    ofst = ((p)[0] | ((p)[1] << 8) | ((p)[2] << 16) | ((p)[3] << 24));
    ofst = ((((ofst) >> 24) & 0xFF) | (((ofst) >> 8) & 0xFF00) | (((ofst) << 8) & 0xFF0000) | ((ofst) << 24));
    p += 4;
    if (len < (int)ofst) {
        return 0;
    }
    size = ((p)[0] | ((p)[1] << 8) | ((p)[2] << 16) | ((p)[3] << 24));
    size = ((((size) >> 24) & 0xFF) | (((size) >> 8) & 0xFF00) | (((size) << 8) & 0xFF0000) | ((size) << 24));
    p += 4;
    enc = ((p)[0] | ((p)[1] << 8) | ((p)[2] << 16) | ((p)[3] << 24));
    enc = ((((enc) >> 24) & 0xFF) | (((enc) >> 8) & 0xFF00) | (((enc) << 8) & 0xFF0000) | ((enc) << 24));
    p += 4;
    switch (enc) {
    case AU_ENC_ULAW_8_x0014F888________________:
        *fmt = ADXB_AU_ULAW_x0014F888________________;
        *bits = 8;
        break;
    case AU_ENC_LINEAR_8_x0014F888________________:
        *fmt = ADXB_AU_PCM_8_x0014F888________________;
        *bits = 8;
        break;
    case AU_ENC_LINEAR_16_x0014F888________________:
        *fmt = ADXB_AU_PCM_16_x0014F888________________;
        *bits = 16;
        break;
    default:
        return 0;
    }
    *sfreq = ((p)[0] | ((p)[1] << 8) | ((p)[2] << 16) | ((p)[3] << 24));
    p += 4;
    *sfreq = ((((*sfreq) >> 24) & 0xFF) | (((*sfreq) >> 8) & 0xFF00) | (((*sfreq) << 8) & 0xFF0000) | ((*sfreq) << 24));
    word = ((p)[0] | ((p)[1] << 8) | ((p)[2] << 16) | ((p)[3] << 24));
    p += 4;
    ch = ((((word) >> 24) & 0xFF) | (((word) >> 8) & 0xFF00) | (((word) << 8) & 0xFF0000) | ((word) << 24));
    *nch = ch;
    if (*fmt == ADXB_AU_ULAW_x0014F888________________) {
        *nsmpl = (int)size / ch;
    } else if (*fmt == ADXB_AU_PCM_8_x0014F888________________) {
        *nsmpl = (int)size / ch;
    } else if (*fmt == ADXB_AU_PCM_16_x0014F888________________) {
        *nsmpl = (int)size / 2 / ch;
    } else {
        *nsmpl = 0x7FFF0000;
    }
    return buf + ofst;
}
__asm__("# rebind func_0014F888 0x0014F888");
typedef signed char Sint8_x0014FBA0;
typedef signed int Sint32_x0014FBA0;
extern Sint32_x0014FBA0 func_003A50B4_x0014FBA0(const void *a, const void *b, unsigned n) __asm__("func_001256A8");
extern const Sint8_x0014FBA0 D_00457050_x0014FBA0[] __asm__("D_0045FC10");
extern const Sint8_x0014FBA0 D_00457058_x0014FBA0[] __asm__("D_0045FC18");
typedef signed char Sint8_x0014FBA0;
typedef signed int Sint32_x0014FBA0;
Sint32_x0014FBA0 func_0014FBA0_x0014FBA0(Sint8_x0014FBA0 *ibuf) __asm__("func_0014FBA0");
/* ADXB_CheckAu: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003417.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x0014FBA0 func_0014FBA0_x0014FBA0(Sint8_x0014FBA0 *ibuf) {
    if ((func_003A50B4_x0014FBA0(ibuf, D_00457050_x0014FBA0, 4) == 0) || (func_003A50B4_x0014FBA0(ibuf, D_00457058_x0014FBA0, 4) == 0)) {
        return 1;
    }
    return 0;
}
typedef signed char Sint8_x0014FBF8;
typedef signed int Sint32_x0014FBF8;
typedef signed char Sint8_x0014FBF8;
typedef signed short Sint16_x0014FBF8;
typedef signed int Sint32_x0014FBF8;
extern Sint8_x0014FBF8 *func_00341480_x0014FBF8(Sint8_x0014FBF8 *ibuf, Sint32_x0014FBF8 ibuflen, Sint32_x0014FBF8 *sfreq, Sint32_x0014FBF8 *nch, Sint32_x0014FBF8 *bps, Sint32_x0014FBF8 *nsmpl, Sint32_x0014FBF8 *cdc) __asm__("func_0014F888");
Sint32_x0014FBF8 func_0014FBF8_x0014FBF8(Sint8_x0014FBF8 *ibuf, Sint32_x0014FBF8 ibuflen, Sint16_x0014FBF8 *dlen, Sint8_x0014FBF8 *code, Sint8_x0014FBF8 *bps, Sint8_x0014FBF8 *blksize, Sint8_x0014FBF8 *nch, Sint32_x0014FBF8 *sfreq, Sint32_x0014FBF8 *total_nsmpl, Sint32_x0014FBF8 *nsmpl_blk, Sint32_x0014FBF8 *cdc) __asm__("func_0014FBF8");
/* ADX_DecodeInfoAu: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003417.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x0014FBF8 func_0014FBF8_x0014FBF8(Sint8_x0014FBF8 *ibuf, Sint32_x0014FBF8 ibuflen, Sint16_x0014FBF8 *dlen, Sint8_x0014FBF8 *code, Sint8_x0014FBF8 *bps, Sint8_x0014FBF8 *blksize, Sint8_x0014FBF8 *nch, Sint32_x0014FBF8 *sfreq, Sint32_x0014FBF8 *total_nsmpl, Sint32_x0014FBF8 *nsmpl_blk, Sint32_x0014FBF8 *cdc) {
    Sint8_x0014FBF8 *dt;
    Sint32_x0014FBF8 lsfreq, lnch, lbps, lnsmpl;
    if (ibuflen < 8) { *dlen = 0; return -1; }
    dt = func_00341480_x0014FBF8(ibuf, ibuflen, &lsfreq, &lnch, &lbps, &lnsmpl, cdc);
    if (dt == 0) { return -1; }
    *dlen = dt - ibuf;
    if ((*dlen * 1024) <= 0) { return -1; }
    *sfreq = lsfreq;
    *nch = lnch;
    *bps = lbps;
    *total_nsmpl = lnsmpl;
    *code = -1;
    *blksize = (*nch * *bps) / 8;
    *nsmpl_blk = 1;
    return 0;
}
typedef signed char Sint8_x0014FD08;
typedef short Sint16_x0014FD08;
typedef int Sint32_x0014FD08;
typedef void *ADXPD_x0014FD08;
typedef void *AHXSJD_x0014FD08;
typedef struct _adx_dec_para_x0014FD08 {
    Sint8_x0014FD08 *ibuf;
    Sint32_x0014FD08 niblk;
    Sint32_x0014FD08 nch;
    Sint32_x0014FD08 blksize;
    Sint32_x0014FD08 blknsmpl;
    Sint8_x0014FD08 *pcmbuf;
    Sint32_x0014FD08 pcmbsize;
    Sint32_x0014FD08 pcmbdist;
    Sint32_x0014FD08 wpos;
    Sint32_x0014FD08 nroom;
    Sint32_x0014FD08 lp_nsmpl;
    Sint32_x0014FD08 ndecsmpl;
} AdxDecPara_x0014FD08;
typedef struct _adx_intbuf_x0014FD08 {
    Sint16_x0014FD08 used;
    Sint16_x0014FD08 hdcdflag;
    Sint32_x0014FD08 stat;
    ADXPD_x0014FD08 xpd;
    Sint8_x0014FD08 code;
    Sint8_x0014FD08 bps;
    Sint8_x0014FD08 nch;
    Sint8_x0014FD08 blklen;
    Sint32_x0014FD08 blknsmpl;
    Sint32_x0014FD08 sfreq;
    Sint32_x0014FD08 total_nsmpl;
    Sint16_x0014FD08 cof;
    Sint16_x0014FD08 rsv1;
    Sint32_x0014FD08 lp_ins_nsmpl;
    Sint16_x0014FD08 nloop;
    Sint16_x0014FD08 lp_type;
    Sint32_x0014FD08 lp_spos;
    Sint32_x0014FD08 lp_sofst;
    Sint32_x0014FD08 lp_epos;
    Sint32_x0014FD08 lp_eofst;
    Sint32_x0014FD08 maxnch;
    Sint16_x0014FD08 *pcmbuf;
    Sint32_x0014FD08 pcmbsize;
    Sint32_x0014FD08 pcmbdist;
    AdxDecPara_x0014FD08 dp;
    Sint32_x0014FD08 (*getwrfunc)(void *, Sint32_x0014FD08 *, Sint32_x0014FD08 *, Sint32_x0014FD08 *);
    void *getwrobj;
    void (*addwrfunc)(void *, Sint32_x0014FD08, Sint32_x0014FD08);
    void *addwrobj;
    Sint32_x0014FD08 total_ndecsmpl;
    Sint32_x0014FD08 curwpos;
    Sint32_x0014FD08 ndecsmpl;
    Sint32_x0014FD08 ndeclen;
    Sint16_x0014FD08 fmttype;
    Sint16_x0014FD08 rsv2;
    Sint16_x0014FD08 cdctype;
    Sint16_x0014FD08 k0;
    Sint16_x0014FD08 km;
    Sint16_x0014FD08 ka;
    AHXSJD_x0014FD08 sjdh;
    Sint32_x0014FD08 ahxdecsmpl;
    Sint32_x0014FD08 ahxsvrfreq;
} ADX_BASIC_x0014FD08, *ADXB_x0014FD08;
extern Sint32_x0014FD08 ADX_DecodeInfoAu_x0014FD08(Sint8_x0014FD08 *ibuf, Sint32_x0014FD08 ibuflen, Sint16_x0014FD08 *dlen, Sint8_x0014FD08 *code, Sint8_x0014FD08 *bps, Sint8_x0014FD08 *blksize, Sint8_x0014FD08 *nch, Sint32_x0014FD08 *sfreq, Sint32_x0014FD08 *total_nsmpl, Sint32_x0014FD08 *nsmpl_blk, Sint32_x0014FD08 *cdc) __asm__("func_0014FBF8");
Sint32_x0014FD08 func_0014FD08_x0014FD08(ADXB_x0014FD08 adxb, Sint8_x0014FD08 *ibuf, Sint32_x0014FD08 ibuflen) __asm__("func_0014FD08");
/* func_00341900: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00341900.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x0014FD08 func_0014FD08_x0014FD08(ADXB_x0014FD08 adxb, Sint8_x0014FD08 *ibuf, Sint32_x0014FD08 ibuflen)
{
    Sint16_x0014FD08 dlen;
    Sint32_x0014FD08 cdc;
    adxb->hdcdflag = 1;
    if (ADX_DecodeInfoAu_x0014FD08(ibuf, ibuflen, &dlen, &adxb->code, &adxb->bps, &adxb->blklen,
                         &adxb->nch, &adxb->sfreq, &adxb->total_nsmpl, &adxb->blknsmpl,
                         &cdc) < 0) {
        return 0;
    }
    adxb->cof = 0;
    adxb->lp_eofst = 0;
    adxb->lp_epos = 0;
    adxb->lp_sofst = 0;
    adxb->lp_spos = 0;
    adxb->lp_ins_nsmpl = 0;
    adxb->lp_type = 0;
    adxb->nloop = 0;
    adxb->dp.nch = adxb->nch;
    adxb->dp.blksize = adxb->blklen;
    adxb->dp.pcmbuf = (Sint8_x0014FD08 *)adxb->pcmbuf;
    adxb->fmttype = 4;
    adxb->dp.blknsmpl = adxb->blknsmpl;
    adxb->dp.pcmbsize = adxb->pcmbsize;
    adxb->dp.pcmbdist = adxb->pcmbdist;
    adxb->curwpos = 0;
    adxb->total_ndecsmpl = 0;
    adxb->cdctype = cdc;
    return dlen;
}
typedef struct { unsigned short *in; int f4; char pad8[0x14 - 8]; short *out; int f18; int f1C; int f20; int f24; } Inf_FE08_x0014FE08;
typedef struct { int pad0; int stat; void *pd; char padC[0xE - 0xC]; signed char nch; char padF[0x48 - 0xF]; Inf_FE08_x0014FE08 inf; char pad70[0x68 - 0x70 + 0x8]; int f70; int pad74; int (*cb1)(void *, int *, int *, int *); void *cb1obj; void (*cb2)(void *, int, int); void *cb2obj; char pad88[0x90 - 0x88]; int f90, f94; } Obj_FE08_x0014FE08;
int func_00161A88_x0014FE08(void *) __asm__("func_00161A88");
void func_0014FE08_x0014FE08(Obj_FE08_x0014FE08 *o) __asm__("func_0014FE08");
void func_0014FE08_x0014FE08(Obj_FE08_x0014FE08 *o)
{
    Inf_FE08_x0014FE08 *inf = &o->inf;
    unsigned short *in = inf->in;
    short *out;
    short *out2;
    unsigned int sample;
    int n;
    int i;

    if (o->stat == 1) {
        if (func_00161A88_x0014FE08(o->pd) == 0) {
            o->cb1(o->cb1obj, (int *)((char *)o + 0x68), (int *)((char *)o + 0x6C), &o->f70);
            n = inf->f18 - inf->f20;
            if (inf->f24 < n) {
                n = inf->f24;
            }
            if (inf->f4 < n) {
                n = inf->f4;
            }
            out = inf->out + inf->f20;
            if (o->nch == 2) {
                out2 = inf->out + (inf->f1C + inf->f20);
                for (i = 0; i < n; i++) {
                    sample = in[i * 2];
                    out[i] = (sample >> 8) | (sample << 8);
                    sample = in[i * 2 + 1];
                    out2[i] = (sample >> 8) | (sample << 8);
                }
            } else {
                for (i = 0; i < n; i++) {
                    sample = in[i];
                    out[i] = (sample >> 8) | (sample << 8);
                }
            }
            o->stat = 2;
            o->f90 = n;
            o->f94 = n * o->nch * 2;
        }
    }
    if (o->stat == 2) {
        o->cb2(o->cb2obj, o->f94, o->f90);
        o->stat = 3;
    }
}
typedef struct { unsigned char *in; int f4; char pad8[0x14 - 8]; short *out; int f18; int f1C; int f20; int f24; } Inf_FFA0_x0014FFA0;
typedef struct { int pad0; int stat; void *pd; char padC[0xE - 0xC]; signed char nch; char padF[0x48 - 0xF]; Inf_FFA0_x0014FFA0 inf; char pad70[0x68 - 0x70 + 0x8]; int f70; int pad74; int (*cb1)(void *, int *, int *, int *); void *cb1obj; void (*cb2)(void *, int, int); void *cb2obj; char pad88[0x90 - 0x88]; int f90, f94; } Obj_FFA0_x0014FFA0;
int func_00161A88_x0014FFA0(void *) __asm__("func_00161A88");
void func_0014FFA0_x0014FFA0(Obj_FFA0_x0014FFA0 *o) __asm__("func_0014FFA0");
void func_0014FFA0_x0014FFA0(Obj_FFA0_x0014FFA0 *o)
{
    Inf_FFA0_x0014FFA0 *inf = &o->inf;
    unsigned char *in = inf->in;
    short *out;
    short *out2;
    unsigned char *p;
    int n;
    int i;

    if (o->stat == 1) {
        if (func_00161A88_x0014FFA0(o->pd) == 0) {
            o->cb1(o->cb1obj, (int *)((char *)o + 0x68), (int *)((char *)o + 0x6C), &o->f70);
            n = inf->f18 - inf->f20;
            if (inf->f24 < n) {
                n = inf->f24;
            }
            if (inf->f4 < n) {
                n = inf->f4;
            }
            out = inf->out + inf->f20;
            if (o->nch == 2) {
                out2 = inf->out + (inf->f1C + inf->f20);
                for (i = 0; i < n; i++) {
                    out[i] = in[i * 2] << 8;
                    out2[i] = in[i * 2 + 1] << 8;
                }
            } else {
                for (i = 0; i < n; i++) {
                    out[i] = in[i] << 8;
                }
            }
            o->stat = 2;
            o->f90 = n;
            o->f94 = n * o->nch;
        }
    }
    if (o->stat == 2) {
        o->cb2(o->cb2obj, o->f94, o->f90);
        o->stat = 3;
    }
}
typedef signed char Sint8_x00150120;
typedef unsigned char Uint8_x00150120;
typedef short Sint16_x00150120;
typedef unsigned short Uint16_x00150120;
typedef int Sint32_x00150120;
typedef void *ADXPD_x00150120;
typedef void *AHXSJD_x00150120;
typedef struct _adx_dec_para_x00150120 {
    Sint8_x00150120 *ibuf;
    Sint32_x00150120 niblk;
    Sint32_x00150120 nch;
    Sint32_x00150120 blksize;
    Sint32_x00150120 blknsmpl;
    Sint8_x00150120 *pcmbuf;
    Sint32_x00150120 pcmbsize;
    Sint32_x00150120 pcmbdist;
    Sint32_x00150120 wpos;
    Sint32_x00150120 nroom;
    Sint32_x00150120 lp_nsmpl;
    Sint32_x00150120 ndecsmpl;
} AdxDecPara_x00150120;
typedef struct _adx_intbuf_x00150120 {
    Sint16_x00150120 used;
    Sint16_x00150120 hdcdflag;
    Sint32_x00150120 stat;
    ADXPD_x00150120 xpd;
    Sint8_x00150120 code;
    Sint8_x00150120 bps;
    Sint8_x00150120 nch;
    Sint8_x00150120 blklen;
    Sint32_x00150120 blknsmpl;
    Sint32_x00150120 sfreq;
    Sint32_x00150120 total_nsmpl;
    Sint16_x00150120 cof;
    Sint16_x00150120 rsv1;
    Sint32_x00150120 lp_ins_nsmpl;
    Sint16_x00150120 nloop;
    Sint16_x00150120 lp_type;
    Sint32_x00150120 lp_spos;
    Sint32_x00150120 lp_sofst;
    Sint32_x00150120 lp_epos;
    Sint32_x00150120 lp_eofst;
    Sint32_x00150120 maxnch;
    Sint16_x00150120 *pcmbuf;
    Sint32_x00150120 pcmbsize;
    Sint32_x00150120 pcmbdist;
    AdxDecPara_x00150120 dp;
    Sint32_x00150120 (*getwrfunc)(void *, Sint32_x00150120 *, Sint32_x00150120 *, Sint32_x00150120 *);
    void *getwrobj;
    void (*addwrfunc)(void *, Sint32_x00150120, Sint32_x00150120);
    void *addwrobj;
    Sint32_x00150120 total_ndecsmpl;
    Sint32_x00150120 curwpos;
    Sint32_x00150120 ndecsmpl;
    Sint32_x00150120 ndeclen;
    Sint16_x00150120 fmttype;
    Sint16_x00150120 rsv2;
    Sint16_x00150120 cdctype;
    Sint16_x00150120 k0;
    Sint16_x00150120 km;
    Sint16_x00150120 ka;
    AHXSJD_x00150120 sjdh;
    Sint32_x00150120 ahxdecsmpl;
    Sint32_x00150120 ahxsvrfreq;
} ADX_BASIC_x00150120, *ADXB_x00150120;
extern Sint32_x00150120 Obj33F8_GetWord_C_FA68_x00150120(ADXPD_x00150120 xpd) __asm__("func_00161A88");
extern Sint16_x00150120 D_003EC460_x00150120[256] __asm__("D_00400E80");
void func_00150120_x00150120(ADXB_x00150120 adxb) __asm__("func_00150120");
/* func_00341D18: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/00341d18.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00150120_x00150120(ADXB_x00150120 adxb)
{
    AdxDecPara_x00150120 *dp;
    Uint16_x00150120 *pcmbuf_l;
    Uint16_x00150120 *pcmbuf_r;
    Uint8_x00150120 *ibuf;
    Sint32_x00150120 ndata;
    Sint32_x00150120 i;
    dp = &adxb->dp;
    ibuf = (Uint8_x00150120 *)dp->ibuf;
    if (adxb->stat == 1) {
        if (Obj33F8_GetWord_C_FA68_x00150120(adxb->xpd) == 0) {
            adxb->getwrfunc(adxb->getwrobj, &dp->wpos, &dp->nroom, &dp->lp_nsmpl);
            ndata = dp->pcmbsize - dp->wpos;
            if (dp->nroom < ndata) ndata = dp->nroom;
            if (dp->niblk < ndata) ndata = dp->niblk;
            pcmbuf_l = (Uint16_x00150120 *)dp->pcmbuf + dp->wpos;
            if (adxb->nch == 2) {
                pcmbuf_r = (Uint16_x00150120 *)dp->pcmbuf + (dp->pcmbdist + dp->wpos);
                for (i = 0; i < ndata; i++) {
                    pcmbuf_l[i] = D_003EC460_x00150120[ibuf[i * 2]];
                    pcmbuf_r[i] = D_003EC460_x00150120[ibuf[i * 2 + 1]];
                }
            } else {
                for (i = 0; i < ndata; i++) {
                    pcmbuf_l[i] = D_003EC460_x00150120[ibuf[i]];
                }
            }
            adxb->stat = 2;
            adxb->ndecsmpl = ndata;
            adxb->ndeclen = ndata * adxb->nch;
        }
    }
    if (adxb->stat == 2) {
        adxb->addwrfunc(adxb->addwrobj, adxb->ndeclen, adxb->ndecsmpl);
        adxb->stat = 3;
    }
}
typedef struct AdxPdObj_x001502C8___ {
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
} AdxPdObj_x001502C8___;
typedef struct AdxDecPara_x001502C8___ {
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
} AdxDecPara_x001502C8___;
struct Pl2Enc_x001502C8___;
typedef struct AdxbObj_x001502C8___ AdxbObj_x001502C8___;
typedef short *(*AdxbGetWrFunc_x001502C8___)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x001502C8___)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x001502C8___ {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x001502C8___ *xpd;
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
    AdxDecPara_x001502C8___ dp;
    AdxbGetWrFunc_x001502C8___ getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x001502C8___ addwrfunc;
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
    struct Pl2Enc_x001502C8___ *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x001502C8___(AdxbObj_x001502C8___ *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
enum AdxbAuFmt_x001502C8___ {
    ADXB_AU_PCM_16_x001502C8___ = 0,
    ADXB_AU_PCM_8_x001502C8___ = 1,
    ADXB_AU_ULAW_x001502C8___ = 2
};
void ADXB_ExecOneAu16_x001502C8___(AdxbObj_x001502C8___ *adxb) __asm__("func_0014FE08");
void ADXB_ExecOneAu8_x001502C8___(AdxbObj_x001502C8___ *adxb) __asm__("func_0014FFA0");
void ADXB_ExecOneAuUlaw_x001502C8___(AdxbObj_x001502C8___ *adxb) __asm__("func_00150120");
void ADXB_ExecOneAu16_x001502C8___(AdxbObj_x001502C8___ *adxb) __attribute__((weak, section(".b3stub")));
void ADXB_ExecOneAu16_x001502C8___(AdxbObj_x001502C8___ *adxb) {}
void ADXB_ExecOneAu8_x001502C8___(AdxbObj_x001502C8___ *adxb) __attribute__((weak, section(".b3stub")));
void ADXB_ExecOneAu8_x001502C8___(AdxbObj_x001502C8___ *adxb) {}
void ADXB_ExecOneAuUlaw_x001502C8___(AdxbObj_x001502C8___ *adxb) __attribute__((weak, section(".b3stub")));
void ADXB_ExecOneAuUlaw_x001502C8___(AdxbObj_x001502C8___ *adxb) {}
void func_001502C8_x001502C8___(AdxbObj_x001502C8___ *adxb) __asm__("func_001502C8");
/* ADXB_ExecOneAu: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxau.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001502C8_x001502C8___(AdxbObj_x001502C8___ *adxb)
{
    if (adxb->cdctype == ADXB_AU_ULAW_x001502C8___) {
        ADXB_ExecOneAuUlaw_x001502C8___(adxb);
    } else if (adxb->cdctype == ADXB_AU_PCM_8_x001502C8___) {
        ADXB_ExecOneAu8_x001502C8___(adxb);
    } else {
        ADXB_ExecOneAu16_x001502C8___(adxb);
    }
}
s32 func_00150308(void) {
    return 0;
}
s32 func_00150310(s32 arg0, s32 arg1) {
    D_00401088 = arg0;
    D_0040108C = arg1;
    return 0;
}
extern s32 (*D_00401088_x00150328)(s32, s32) __asm__("D_00401088");
extern s32 D_0040108C_x00150328 __asm__("D_0040108C");
s32 func_00150328_x00150328(s32 arg0) __asm__("func_00150328");
s32 func_00150328_x00150328(s32 arg0) {
    if (D_00401088_x00150328 != NULL) {
        D_00401088_x00150328(D_0040108C_x00150328, arg0);
    }
    return 0;
}
s32 func_00150360(void) {
    D_00401084 += 1;
    return 0;
}
s32 func_00150380(void) {
    D_00401084 -= 1;
    return 0;
}
extern int D_00401084_x001503A0 __asm__("D_00401084");
extern short D_0045FC50_x001503A0[] __asm__("D_0045FC50");
void func_00150360_x001503A0(void) __asm__("func_00150360");
int func_001503A0_x001503A0(signed char *key, int len, short *k0, short *k1, short *k2) __asm__("func_001503A0");
int func_001503A0_x001503A0(signed char *key, int len, short *k0, short *k1, short *k2)
{
    int i;
    int a;
    int b;
    int c;

    if (D_00401084_x001503A0 == 0) {
        func_00150360_x001503A0();
    }
    *k0 = 0;
    *k1 = 0;
    *k2 = 0;
    if (key == 0 && len <= 0) {
        return 0;
    }
    a = D_0045FC50_x001503A0[0x100];
    for (i = 0; i < len; i++) {
        a = D_0045FC50_x001503A0[(a * D_0045FC50_x001503A0[key[i] + 0x80]) % 1024];
    }
    b = D_0045FC50_x001503A0[0x200];
    for (i = 0; i < len; i++) {
        b = D_0045FC50_x001503A0[(b * D_0045FC50_x001503A0[key[i] + 0x80]) % 1024];
    }
    c = D_0045FC50_x001503A0[0x300];
    for (i = 0; i < len; i++) {
        c = D_0045FC50_x001503A0[(c * D_0045FC50_x001503A0[key[i] + 0x80]) % 1024];
    }
    *k0 = a;
    *k1 = b;
    *k2 = c;
    return 0;
}
extern s32 D_00401084_x00150558 __asm__("D_00401084");
extern u8 D_00460450_x00150558[] __asm__("D_00460450");
void func_00150360_x00150558(void) __asm__("func_00150360");
void func_001503A0_x00150558(u8 *, s32, s32, s32, s32) __asm__("func_001503A0");
s32 func_00150558_x00150558(s32 a0, s32 a1, s32 a2) __asm__("func_00150558");
s32 func_00150558_x00150558(s32 a0, s32 a1, s32 a2)
{
    if (D_00401084_x00150558 == 0) {
        func_00150360_x00150558();
    }
    func_001503A0_x00150558(D_00460450_x00150558, 6, a0, a1, a2);
    return 0;
}
s32 func_001505C8(u16 *arg0, u16 *arg1, u16 *arg2) {
    *arg0 = *arg2 + (*arg0 * *arg1);
    return 0;
}
void func_001505E8(void) {
    func_00161880();
    func_00150360();
    memset(&D_004010A8, 0, 0xF40);
}
void func_00150620(void) {
    func_001618A8();
    func_00150380();
    memset(&D_004010A8, 0, 0xF40);
}
typedef struct AdxPdObj_x00150658 {
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
} AdxPdObj_x00150658;
typedef struct SfdSj_x00150658 SfdSj_x00150658;
typedef struct SfdSjChunk_x00150658 {
    char *data;
    int len;
} SfdSjChunk_x00150658;
typedef struct SfdSjVtbl_x00150658 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00150658 *sj);
    int (*getUuid)(SfdSj_x00150658 *sj);
    void (*reset)(SfdSj_x00150658 *sj);
    void (*getChunk)(SfdSj_x00150658 *sj, int id, int n, SfdSjChunk_x00150658 *ck);
    void (*ungetChunk)(SfdSj_x00150658 *sj, int id, SfdSjChunk_x00150658 *ck);
    void (*putChunk)(SfdSj_x00150658 *sj, int id, SfdSjChunk_x00150658 *ck);
    int (*getNumData)(SfdSj_x00150658 *sj, int id);
} SfdSjVtbl_x00150658;
struct SfdSj_x00150658 {
    SfdSjVtbl_x00150658 *vtbl;
};
typedef struct AdxDecPara_x00150658 {
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
} AdxDecPara_x00150658;
struct Pl2Enc_x00150658;
typedef struct AdxbObj_x00150658 AdxbObj_x00150658;
typedef short *(*AdxbGetWrFunc_x00150658)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00150658)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00150658 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00150658 *xpd;
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
    AdxDecPara_x00150658 dp;
    AdxbGetWrFunc_x00150658 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00150658 addwrfunc;
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
    struct Pl2Enc_x00150658 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void (*adxb_pl2_reset_func_x00150658)(AdxbObj_x00150658 *obj) __asm__("adxb_pl2_reset_func");
extern void ADXB_EntryDecFunc_x00150658(AdxbObj_x00150658 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00150658 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00150658 *adxb;
    SfdSj_x00150658 *sji;
    SfdSj_x00150658 *sjo[2];
    SfdSjChunk_x00150658 cki;
    SfdSjChunk_x00150658 cko[2];
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
} AdxSjdObj_x00150658;
extern void ADXSJD_EntryFltFunc_x00150658(AdxSjdObj_x00150658 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00150658(AdxSjdObj_x00150658 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00150658)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00150658)(CvFsErrFn_x00150658 func, void *obj);
typedef int (*CvFsPathFn_x00150658)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00150658)(void);
typedef int (*CvFsOpenFn_x00150658)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00150658)(int fd);
typedef int (*CvFsFdIntFn_x00150658)(int fd);
typedef int (*CvFsSeekFn_x00150658)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00150658)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00150658)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00150658)(void);
typedef int (*CvFsLoadDirInfoFn_x00150658)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00150658)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00150658)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00150658 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00150658 entry_err_func;
    CvFsPathFn_x00150658 get_file_size;
    CvFsGetFreeSizeFn_x00150658 get_free_size;
    CvFsOpenFn_x00150658 open;
    CvFsFdFn_x00150658 close;
    CvFsSeekFn_x00150658 seek;
    CvFsFdIntFn_x00150658 tell;
    CvFsXferFn_x00150658 req_rd;
    CvFsXferFn_x00150658 req_wr;
    CvFsFdFn_x00150658 stop_tr;
    CvFsFdIntFn_x00150658 get_stat;
    CvFsFdIntFn_x00150658 get_sct_len;
    CvFsSetSctLenFn_x00150658 set_sct_len;
    CvFsFdIntFn_x00150658 get_num_tr;
    CvFsPathFn_x00150658 change_dir;
    CvFsPathFn_x00150658 is_exist_file;
    CvFsGetNumFilesFn_x00150658 get_num_files;
    CvFsLoadDirInfoFn_x00150658 load_dir_info;
    CvFsFdIntFn_x00150658 get_max_byte_rate;
    CvFsPathFn_x00150658 make_dir;
    CvFsPathFn_x00150658 remove_dir;
    CvFsPathFn_x00150658 delete_file;
    CvFsGetFileSizeExFn_x00150658 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00150658 opt_fn2;
} CvFsVtbl_x00150658;
typedef struct CvFsHandle_x00150658 {
    CvFsVtbl_x00150658 *vtbl;
    int fd;
} CvFsHandle_x00150658;
extern CvFsVtbl_x00150658 *addDevice_x00150658(char *devname, CvFsVtbl_x00150658 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00150658 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00150658 *sj;
    CvFsHandle_x00150658 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00150658 rdck;
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
} AdxStmObj_x00150658;
extern void ADXSTM_EntryEosFunc_x00150658(AdxStmObj_x00150658 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
extern void (*adxb_pl2_reset_func_x00150658)(AdxbObj_x00150658 *obj) __asm__("adxb_pl2_reset_func");
void ADXB_EntryDecFunc_x00150658(AdxbObj_x00150658 *obj, void (*cb)(void *context, int count, int bytes), void *context) __asm__("ADXB_EntryDecFunc");
short *func_00150658_x00150658(void *adxb, int *wpos, int *room, int *rest) __asm__("func_00150658");
/* adxb_DefGetWr: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxb.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
short *func_00150658_x00150658(void *adxb, int *wpos, int *room, int *rest)
{
    AdxbObj_x00150658 *obj = adxb;
    *wpos = obj->curwpos;
    *room = obj->pcmbsize - obj->curwpos;
    *rest = obj->total_nsmpl - obj->total_ndecsmpl;
    return obj->pcmbuf;
}
typedef unsigned char u8_x00150688;
typedef unsigned int u32_x00150688;
struct fn_80045F58_Arg0_x00150688 {
    u8_x00150688 pad_0[0x88];
    u32_x00150688 unk_88;
    u32_x00150688 unk_8C;
};
void func_00150688_x00150688(struct fn_80045F58_Arg0_x00150688 *arg0, u32_x00150688 arg1, u32_x00150688 arg2) __asm__("func_00150688");
/* fn_80045F58: from https://github.com/karamzov123/fzero-gx-decomp (src/dol/fn_80045F58.c, CC0-1.0); ee-gcc 2.96 -O2 -G0 */
void func_00150688_x00150688(struct fn_80045F58_Arg0_x00150688 *arg0, u32_x00150688 arg1, u32_x00150688 arg2) {
    arg0->unk_8C = (arg0->unk_8C + arg2);
    arg0->unk_88 = (arg0->unk_88 + arg2);
}
typedef struct { short used; short pad2; int pad4; void *pd; char padC[0x38 - 0xC]; int a, b, c, d; char pad48[0x78 - 0x48]; void (*cb1)(void); void *cb1obj; void (*cb2)(void); void *cb2obj; char pad88[0xCC - 0x88]; int fCC; char fD0[0x10]; short fE0, fE2, fE4; char padE6[0xF4 - 0xE6]; } Obj_06A8_x001506A8;
extern Obj_06A8_x001506A8 D_004010A8_x001506A8[16] __asm__("D_004010A8");
void *memset_x001506A8(void *, int, unsigned int) __asm__("memset");
void *ADXPD_Create_x001506A8(void) __asm__("ADXPD_Create");
void func_001507E8_x001506A8(Obj_06A8_x001506A8 *) __asm__("func_001507E8");
void func_00150658_x001506A8(void) __asm__("func_00150658");
void func_00150688_x001506A8(void) __asm__("func_00150688");
Obj_06A8_x001506A8 *func_001506A8_x001506A8(int a, int b, int c, int d) __asm__("func_001506A8");
Obj_06A8_x001506A8 *func_001506A8_x001506A8(int a, int b, int c, int d)
{
    Obj_06A8_x001506A8 *o;
    int i;

    for (i = 0; i < 16; i++) {
        if (D_004010A8_x001506A8[i].used == 0) {
            break;
        }
    }
    if (i == 16) {
        return 0;
    }
    o = &D_004010A8_x001506A8[i];
    memset_x001506A8(o, 0, sizeof(Obj_06A8_x001506A8));
    o->used = 1;
    o->pd = ADXPD_Create_x001506A8();
    if (o->pd == 0) {
        func_001507E8_x001506A8(o);
        return 0;
    }
    o->a = a;
    o->b = b;
    o->c = c;
    o->d = d;
    o->cb1 = func_00150658_x001506A8;
    o->cb1obj = o;
    o->cb2 = func_00150688_x001506A8;
    o->cb2obj = o;
    o->fCC = 0;
    o->fE0 = 0;
    o->fE2 = -128;
    o->fE4 = -128;
    memset_x001506A8(o->fD0, 0, 0x10);
    return o;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3c001506A8_0;
void func_001507E8(u8 *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        temp_a0 = *(s32 *)((u8 *)arg0 + 8);
        *(s32 *)((u8 *)arg0 + 8) = 0;
        func_00161A48(temp_a0);
        memset(arg0, 0, 0xF4);
        *(s16 *)((u8 *)arg0 + 0) = 0;
    }
}
typedef struct AdxPdObj_x00150830 {
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
} AdxPdObj_x00150830;
void ADXPD_SetCoef_x00150830(AdxPdObj_x00150830 *pd, int sfreq, int cutoff) __asm__("func_001619A0");
void ADXPD_SetDly_x00150830(AdxPdObj_x00150830 *pd, unsigned short *dly1, unsigned short *dly2) __asm__("func_001619C8");
void ADXPD_SetExtPrm_x00150830(AdxPdObj_x00150830 *pd, short seed, short mul, short add) __asm__("func_00161A18");
typedef struct SfdSj_x00150830 SfdSj_x00150830;
typedef struct SfdSjChunk_x00150830 {
    char *data;
    int len;
} SfdSjChunk_x00150830;
typedef struct SfdSjVtbl_x00150830 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00150830 *sj);
    int (*getUuid)(SfdSj_x00150830 *sj);
    void (*reset)(SfdSj_x00150830 *sj);
    void (*getChunk)(SfdSj_x00150830 *sj, int id, int n, SfdSjChunk_x00150830 *ck);
    void (*ungetChunk)(SfdSj_x00150830 *sj, int id, SfdSjChunk_x00150830 *ck);
    void (*putChunk)(SfdSj_x00150830 *sj, int id, SfdSjChunk_x00150830 *ck);
    int (*getNumData)(SfdSj_x00150830 *sj, int id);
} SfdSjVtbl_x00150830;
struct SfdSj_x00150830 {
    SfdSjVtbl_x00150830 *vtbl;
};
typedef struct AdxDecPara_x00150830 {
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
} AdxDecPara_x00150830;
struct Pl2Enc_x00150830;
typedef struct AdxbObj_x00150830 AdxbObj_x00150830;
typedef short *(*AdxbGetWrFunc_x00150830)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00150830)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00150830 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00150830 *xpd;
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
    AdxDecPara_x00150830 dp;
    AdxbGetWrFunc_x00150830 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00150830 addwrfunc;
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
    struct Pl2Enc_x00150830 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void (*adxb_pl2_reset_func_x00150830)(AdxbObj_x00150830 *obj) __asm__("adxb_pl2_reset_func");
extern void ADXB_EntryDecFunc_x00150830(AdxbObj_x00150830 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x00150830 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00150830 *adxb;
    SfdSj_x00150830 *sji;
    SfdSj_x00150830 *sjo[2];
    SfdSjChunk_x00150830 cki;
    SfdSjChunk_x00150830 cko[2];
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
} AdxSjdObj_x00150830;
extern void ADXSJD_EntryFltFunc_x00150830(AdxSjdObj_x00150830 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00150830(AdxSjdObj_x00150830 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00150830)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00150830)(CvFsErrFn_x00150830 func, void *obj);
typedef int (*CvFsPathFn_x00150830)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00150830)(void);
typedef int (*CvFsOpenFn_x00150830)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00150830)(int fd);
typedef int (*CvFsFdIntFn_x00150830)(int fd);
typedef int (*CvFsSeekFn_x00150830)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00150830)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00150830)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00150830)(void);
typedef int (*CvFsLoadDirInfoFn_x00150830)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00150830)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00150830)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00150830 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00150830 entry_err_func;
    CvFsPathFn_x00150830 get_file_size;
    CvFsGetFreeSizeFn_x00150830 get_free_size;
    CvFsOpenFn_x00150830 open;
    CvFsFdFn_x00150830 close;
    CvFsSeekFn_x00150830 seek;
    CvFsFdIntFn_x00150830 tell;
    CvFsXferFn_x00150830 req_rd;
    CvFsXferFn_x00150830 req_wr;
    CvFsFdFn_x00150830 stop_tr;
    CvFsFdIntFn_x00150830 get_stat;
    CvFsFdIntFn_x00150830 get_sct_len;
    CvFsSetSctLenFn_x00150830 set_sct_len;
    CvFsFdIntFn_x00150830 get_num_tr;
    CvFsPathFn_x00150830 change_dir;
    CvFsPathFn_x00150830 is_exist_file;
    CvFsGetNumFilesFn_x00150830 get_num_files;
    CvFsLoadDirInfoFn_x00150830 load_dir_info;
    CvFsFdIntFn_x00150830 get_max_byte_rate;
    CvFsPathFn_x00150830 make_dir;
    CvFsPathFn_x00150830 remove_dir;
    CvFsPathFn_x00150830 delete_file;
    CvFsGetFileSizeExFn_x00150830 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00150830 opt_fn2;
} CvFsVtbl_x00150830;
typedef struct CvFsHandle_x00150830 {
    CvFsVtbl_x00150830 *vtbl;
    int fd;
} CvFsHandle_x00150830;
extern CvFsVtbl_x00150830 *addDevice_x00150830(char *devname, CvFsVtbl_x00150830 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00150830 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00150830 *sj;
    CvFsHandle_x00150830 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00150830 rdck;
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
} AdxStmObj_x00150830;
extern void ADXSTM_EntryEosFunc_x00150830(AdxStmObj_x00150830 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
int ADX_DecodeInfo_x00150830(unsigned char *hdr, int len, short *ofst, signed char *type, signed char *bsize, signed char *bits, signed char *nch, int *sfreq, int *nsmpl, int *blksmpl) __asm__("func_001527C0");
int ADX_DecodeInfoExADPCM2_x00150830(unsigned char *hdr, int size, short *out) __asm__("func_001528C0");
int ADX_DecodeInfoExVer_x00150830(unsigned char *hdr, int size, unsigned char *ver, unsigned char *flag) __asm__("func_00152940");
int ADX_DecodeInfoExIdly_x00150830(unsigned char *hdr, int size, unsigned short *start, unsigned short *end) __asm__("func_001529B8");
int ADX_DecodeInfoExLoop_x00150830(unsigned char *hdr, int size, int *lptype, short *nloop, short *lpflg, int *lpstart, int *lpstartofst, int *lpend, int *lpendofst) __asm__("func_00152AF0");
int ADX_DecodeInfoAinf_x00150830(unsigned char *hdr, int size, int *ainfsiz, char *ainf, short *volume, short *pan) __asm__("func_00152D50");
void ADXERR_CallErrFunc2_x00150830(const char *code, const char *msg) __asm__("func_00154178");
extern void (*adxb_ahx_setextfunc_x00150830)(void *ahx, unsigned short *keys) __asm__("D_00401090");
extern void (*adxb_pl2_reset_func_x00150830)(AdxbObj_x00150830 *obj) __asm__("adxb_pl2_reset_func");
int adxb_get_key_x00150830(AdxbObj_x00150830 *adx, unsigned char ver, unsigned char type, int name, unsigned short *k0, unsigned short *k1, unsigned short *k2) __asm__("func_00150FB8");
int adxb_get_key_x00150830(AdxbObj_x00150830 *adx, unsigned char ver, unsigned char type, int name,
                 unsigned short *k0, unsigned short *k1, unsigned short *k2) __asm__("func_00150FB8");
void ADXB_EntryDecFunc_x00150830(AdxbObj_x00150830 *obj, void (*cb)(void *context, int count, int bytes), void *context) __asm__("ADXB_EntryDecFunc");
int ADXB_DecodeHeaderAdx_x00150830(AdxbObj_x00150830 *obj, unsigned char *hdr, int size) __asm__("ADXB_DecodeHeaderAdx");
/* ADXB_DecodeHeaderAdx_x00150830: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxb.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int ADXB_DecodeHeaderAdx_x00150830(AdxbObj_x00150830 *obj, unsigned char *hdr, int size)
{
    unsigned short dly1[2];
    unsigned short dly2[2];
    unsigned short keys[4];
    short hdrlen;
    unsigned char ver;
    unsigned char flag;
    short k0;
    short k1;
    short k2;
    obj->hdcdflag = 1;
    if (ADX_DecodeInfo_x00150830(hdr, size, &hdrlen, &obj->code, &obj->bps, &obj->blklen, &obj->nch, &obj->sfreq, &obj->total_nsmpl,
                     &obj->blknsmpl) < 0) {
        return 0;
    }
    if (obj->code >= 5) {
        if (obj->ahx == 0) {
            ADXERR_CallErrFunc2_x00150830("E1060101 ADXB_DecodeHeaderAdx_x00150830: ", "can't play AHX data by this handle");
            return -1;
        }
        obj->bps = 8;
        obj->blklen = obj->nch * 192;
        obj->blknsmpl = 96;
        obj->fmttype = 10;
        obj->cof = 0;
        obj->nloop = 0;
        obj->lp_type = 0;
        obj->lp_ins_nsmpl = 0;
        obj->lp_spos = 0;
        obj->lp_sofst = 0;
        obj->lp_epos = 0;
        obj->lp_eofst = 0;
        obj->total_ndecsmpl = 0;
        if (ADX_DecodeInfoExVer_x00150830(hdr, size, &ver, &flag) < 0) {
            return 0;
        }
        keys[0] = 0;
        if (adxb_get_key_x00150830(obj, ver, flag, obj->total_nsmpl, &keys[1], &keys[2], &keys[3]) < 0) {
            return -1;
        }
        if (adxb_ahx_setextfunc_x00150830 != 0) {
            adxb_ahx_setextfunc_x00150830(obj->ahx, keys);
        }
    } else {
        if (ADX_DecodeInfoExVer_x00150830(hdr, size, &ver, &flag) < 0) {
            return 0;
        }
        if (adxb_get_key_x00150830(obj, ver, flag, obj->total_nsmpl, &k0, &k1, &k2) < 0) {
            return -1;
        }
        ADXPD_SetExtPrm_x00150830(obj->xpd, k0, k1, k2);
        if (ADX_DecodeInfoExADPCM2_x00150830(hdr, size, &obj->cof) < 0) {
            return 0;
        }
        if (ADX_DecodeInfoExIdly_x00150830(hdr, size, dly1, dly2) < 0) {
            return 0;
        }
        ADXPD_SetCoef_x00150830(obj->xpd, obj->sfreq, obj->cof);
        ADXPD_SetDly_x00150830(obj->xpd, dly1, dly2);
        ADX_DecodeInfoExLoop_x00150830(hdr, size, &obj->lp_ins_nsmpl, &obj->nloop, &obj->lp_type, &obj->lp_spos, &obj->lp_sofst, &obj->lp_epos, &obj->lp_eofst);
        ADX_DecodeInfoAinf_x00150830(hdr, size, &obj->ainf_len, obj->dataid, &obj->def_outvol, obj->def_pan);
        obj->fmttype = 0;
    }
    obj->dp.nch = obj->nch;
    obj->dp.blksize = obj->blklen;
    obj->dp.blknsmpl = obj->blknsmpl;
    obj->dp.pcmbuf = obj->pcmbuf;
    obj->dp.pcmbsize = obj->pcmbsize;
    obj->dp.pcmbdist = obj->pcmbdist;
    obj->curwpos = 0;
    return hdrlen;
}
__asm__("# rebind ADXB_DecodeHeaderAdx 0x00150830");
void func_00150B20(u8 *arg0) {
    *(s16 *)((u8 *)arg0 + 0x9A) = 0;
}
typedef unsigned char Uint8_x00150B28;
typedef signed char Sint8_x00150B28;
typedef signed short Sint16_x00150B28;
typedef signed int Sint32_x00150B28;
typedef struct ADXPD_OBJ_x00150B28 *ADXPD_x00150B28;
typedef struct {
        Sint16_x00150B28 used;
        Sint16_x00150B28 x02;
        Sint32_x00150B28 stat;
        ADXPD_x00150B28 pd;
        Sint8_x00150B28 x0c;
        Sint8_x00150B28 bps;
        Sint8_x00150B28 nch;
        Sint8_x00150B28 x0f;
        Sint32_x00150B28 fmt;
        Sint32_x00150B28 sfreq;
        Sint32_x00150B28 total_nsmpl;
        Sint16_x00150B28 x1c;
        Uint8_x00150B28 pad1e[2];
        Sint32_x00150B28 x20;
        Sint16_x00150B28 x24;
        Sint16_x00150B28 x26;
        Sint32_x00150B28 x28;
        Sint32_x00150B28 x2c;
        Sint32_x00150B28 x30;
        Sint32_x00150B28 x34;
        Sint32_x00150B28 x38;
        Sint32_x00150B28 x3c;
        Sint32_x00150B28 x40;
        Sint32_x00150B28 x44;
        Sint16_x00150B28 *inbuf;
        Sint32_x00150B28 inbuf_nsmpl;
        Sint32_x00150B28 out_nch;
        Sint32_x00150B28 x54;
        Sint32_x00150B28 out_fmt;
        Sint16_x00150B28 *pcmbuf;
        Sint32_x00150B28 pcmbuf_nsmpl;
        Sint32_x00150B28 pcmbuf_chofst;
        Sint32_x00150B28 wr_pos;
        Sint32_x00150B28 wr_nsmpl;
        Sint32_x00150B28 wr_x70;
        Sint32_x00150B28 x74;
        void (*getwr_func)(void *obj, Sint32_x00150B28 *pos, Sint32_x00150B28 *nsmpl, Sint32_x00150B28 *x70);
        void *getwr_obj;
        void (*addwr_func)(void *obj, Sint32_x00150B28 nbyte, Sint32_x00150B28 nsmpl);
        void *addwr_obj;
        Sint32_x00150B28 x88;
        Sint32_x00150B28 x8c;
        Sint32_x00150B28 dec_nsmpl;
        Sint32_x00150B28 dec_nbyte;
        Sint16_x00150B28 x98;
        Sint16_x00150B28 x9a;
        Sint16_x00150B28 x9c;
        Uint8_x00150B28 pad9e[2];
        Sint16_x00150B28 key[3];
        Sint16_x00150B28 extprm[3];
        Sint16_x00150B28 dly[2][2];
        void *ahx;
        Sint32_x00150B28 nsmpl;
        Sint32_x00150B28 nsmpl96;
        Uint8_x00150B28 padc0[0xCC - 0xC0];
        Sint32_x00150B28 ainf_len;
        Uint8_x00150B28 ainf[16];
        Sint16_x00150B28 def_outvol;
        Sint16_x00150B28 def_pan[2];
        Uint8_x00150B28 padda[2];
        void *xdc;
        Uint8_x00150B28 pade0[8];
        Sint32_x00150B28 cb_nbyte;
        Sint32_x00150B28 xec;
        void (*cb_func)(void *obj, Sint32_x00150B28 nbyte, Sint32_x00150B28 nsmpl);
        void *cb_obj;
} ADXB_OBJ_x00150B28;
typedef ADXB_OBJ_x00150B28 *ADXB_x00150B28;
typedef struct ADXPD_OBJ_x00150B28 {
        Uint8_x00150B28 pad0[0x10];
        Sint32_x00150B28 nblk;
        Uint8_x00150B28 pad14[0x20 - 0x14];
        Sint16_x00150B28 *out0;
        Sint16_x00150B28 *out1;
} ADXPD_OBJ_x00150B28;
extern void (*ahxsetextfunc_x00150B28)(void *ahx, Sint16_x00150B28 *key) __asm__("ahxsetextfunc");
extern void (*pl2resetfunc_x00150B28)(ADXB_x00150B28 adxb) __asm__("pl2resetfunc");
void func_00150B28_x00150B28(ADXB_x00150B28 adxb) __asm__("func_00150B28");
/* ADXB_SetDefPrm: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/adx_bsc.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_00150B28_x00150B28(ADXB_x00150B28 adxb)
{
        adxb->x02 = 1;
        adxb->sfreq = 48000;
        adxb->nch = 2;
        adxb->bps = 16;
        adxb->total_nsmpl = 0x7FFFFFFF;
        adxb->x0f = 127;
        adxb->fmt = 1024;
        adxb->x98 = adxb->x9a;
        adxb->out_nch = adxb->nch;
        adxb->x54 = adxb->x0f;
        adxb->out_fmt = adxb->fmt;
        adxb->pcmbuf = (Sint16_x00150B28 *)adxb->x3c;
        adxb->pcmbuf_nsmpl = adxb->x40;
        adxb->pcmbuf_chofst = adxb->x44;
        adxb->x8c = 0;
        adxb->x1c = 0;
        adxb->x24 = 0;
        adxb->x26 = 0;
        adxb->x20 = 0;
        adxb->x28 = 0;
        adxb->x2c = 0;
        adxb->x30 = 0;
        adxb->x34 = 0;
        adxb->x88 = 0;
}
typedef int s32_x00150BC8;
typedef s32_x00150BC8 ptrdiff_t_x00150BC8;
typedef char Sint8_x00150BC8;
typedef unsigned short Uint16_x00150BC8;
typedef signed short Sint16_x00150BC8;
typedef unsigned int Uint32_x00150BC8;
typedef signed int Sint32_x00150BC8;
extern int* sceCdCallback_x00150BC8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x00150BC8 unk0;
               Sint16_x00150BC8 unk2;
               Sint16_x00150BC8 unk4;
               Sint16_x00150BC8 unk6;
} ADXPD_OBJ_SUB_x00150BC8;
typedef struct {
               Sint32_x00150BC8 used;
               Sint32_x00150BC8 unk4;
               Sint32_x00150BC8 mode;
               Sint32_x00150BC8 stat;
               Sint32_x00150BC8 num_blk;
               Sint32_x00150BC8 unk14;
               Sint32_x00150BC8 unk18;
               Sint32_x00150BC8 unk1C;
               Sint32_x00150BC8 unk20;
               Sint32_x00150BC8 unk24;
               ADXPD_OBJ_SUB_x00150BC8 unk28;
               Sint16_x00150BC8 unk30;
               Sint16_x00150BC8 unk32;
               Sint16_x00150BC8 unk34;
               Sint16_x00150BC8 unk36;
               Sint16_x00150BC8 unk38;
               Sint16_x00150BC8 unk3A;
} ADXPD_OBJ_x00150BC8;
typedef ADXPD_OBJ_x00150BC8* ADXPD_x00150BC8;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00150BC8;
typedef struct {
               Sint32_x00150BC8 unk0;
               Sint32_x00150BC8 unk4;
               Sint32_x00150BC8 unk8;
               Sint32_x00150BC8 unkC;
               Sint32_x00150BC8 unk10;
               void* unk14;
               Sint32_x00150BC8 unk18;
               Sint32_x00150BC8 unk1C;
               Sint32_x00150BC8 unk20;
               Sint32_x00150BC8 unk24;
               Sint32_x00150BC8 unk28;
} ADXB_UNK_x00150BC8;
typedef struct {
               Sint16_x00150BC8 unk0;
               Sint16_x00150BC8 unk2;
               Sint32_x00150BC8 stat;
               ADXPD_x00150BC8 adxpd;
               Sint8_x00150BC8 encoding_type;
               Sint8_x00150BC8 sample_bitdepth;
               Sint8_x00150BC8 channel_count;
               Sint8_x00150BC8 block_size;
               Sint32_x00150BC8 samples_per_block;
               Sint32_x00150BC8 sample_rate;
               Sint32_x00150BC8 total_samples;
               Sint16_x00150BC8 unk1C;
               char pad1E[2];
               Sint32_x00150BC8 unk20;
               Sint16_x00150BC8 unk24;
               Sint16_x00150BC8 unk26;
               Sint32_x00150BC8 unk28;
               Sint32_x00150BC8 unk2C;
               Sint32_x00150BC8 unk30;
               Sint32_x00150BC8 unk34;
               Sint32_x00150BC8 unk38;
               void* unk3C;
               Sint32_x00150BC8 unk40;
               Sint32_x00150BC8 unk44;
               ADXB_UNK_x00150BC8 unk48;
               Sint32_x00150BC8 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00150BC8*, Sint32_x00150BC8*, Sint32_x00150BC8*);
               void* object;
               void (*add_wr)(void*, Sint32_x00150BC8, Sint32_x00150BC8);
               Sint32_x00150BC8 unk84;
               Sint32_x00150BC8 unk88;
               Sint32_x00150BC8 unk8C;
               Sint32_x00150BC8 dec_num_sample;
               Sint32_x00150BC8 dec_data_len;
               Sint16_x00150BC8 format;
               Sint16_x00150BC8 unk9A;
               Sint16_x00150BC8 unk9C;
               Sint16_x00150BC8 unk9E;
               Sint16_x00150BC8 unkA0;
               char padA2[0xE];
               Sint32_x00150BC8 unkB0;
               Sint32_x00150BC8 ahx_dec_samples;
               Sint32_x00150BC8 ahx_dec_frames;
               Sint32_x00150BC8 unkBC;
               Sint32_x00150BC8 ac3_dec_samples;
               Sint32_x00150BC8 ac3_dec_frames;
               Sint32_x00150BC8 unkC8;
               ADX_UNK_x00150BC8 unkCC;
               Sint16_x00150BC8 unkDC;
               Sint16_x00150BC8 unkDE[2];
               char padE2[2];
               Sint32_x00150BC8 unkE4;
               char padE8[8];
} ADXB_OBJ_x00150BC8;
typedef ADXB_OBJ_x00150BC8* ADXB_x00150BC8;
Sint32_x00150BC8 ADXB_CheckAc3_x00150BC8(void*) __asm__("func_0014EDB0");
Sint32_x00150BC8 ADXB_DecodeHeaderAc3_x00150BC8(ADXB_x00150BC8, void*, Sint32_x00150BC8) __asm__("func_0014ED00");
Sint32_x00150BC8 ADXB_CheckAiff_x00150BC8(void*) __asm__("func_0014F2B8");
Sint32_x00150BC8 ADXB_DecodeHeaderAiff_x00150BC8(ADXB_x00150BC8, void*, Sint32_x00150BC8) __asm__("func_0014F430");
Sint32_x00150BC8 ADXB_CheckAu_x00150BC8(void*) __asm__("func_0014FBA0");
Sint32_x00150BC8 ADXB_DecodeHeaderAu_x00150BC8(ADXB_x00150BC8, void*, Sint32_x00150BC8) __asm__("func_0014FD08");
extern void ADXB_EntryGetWrFunc_x00150BC8(ADXB_x00150BC8 adxb, void* (*get_wr)(void*, ptrdiff_t_x00150BC8*, Sint32_x00150BC8*, Sint32_x00150BC8*), void* object) __asm__("ADXB_EntryGetWrFunc");
Sint32_x00150BC8 ADXB_CheckSpsd_x00150BC8(void*) __asm__("func_00151C30");
Sint32_x00150BC8 ADXB_DecodeHeaderSpsd_x00150BC8(ADXB_x00150BC8, void*, Sint32_x00150BC8) __asm__("func_001519C0");
Sint32_x00150BC8 ADXB_CheckWav_x00150BC8(void*) __asm__("func_00152438");
Sint32_x00150BC8 ADXB_DecodeHeaderWav_x00150BC8(ADXB_x00150BC8, void*, Sint32_x00150BC8) __asm__("func_00151E88");
extern void (*ahxsetextfunc_x00150BC8)(Sint32_x00150BC8, Sint16_x00150BC8*) __asm__("ahxsetextfunc");
Sint32_x00150BC8 ADXB_DecodeHeaderAdx_x00150BC8(ADXB_x00150BC8 adxb, void* header, Sint32_x00150BC8 len) __asm__("ADXB_DecodeHeaderAdx");
void ADXB_EntryGetWrFunc_x00150BC8(ADXB_x00150BC8 adxb, void* (*get_wr)(void*, ptrdiff_t_x00150BC8*, Sint32_x00150BC8*, Sint32_x00150BC8*), void* object) __asm__("ADXB_EntryGetWrFunc");
Sint32_x00150BC8 func_00150BC8_x00150BC8(ADXB_x00150BC8 adxb, void* header, Sint32_x00150BC8 len) __asm__("func_00150BC8");
/* ADXB_DecodeHeader: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_bsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00150BC8 func_00150BC8_x00150BC8(ADXB_x00150BC8 adxb, void* header, Sint32_x00150BC8 len) {
    Uint32_x00150BC8 magic = *(Uint16_x00150BC8*)header;
    if ((Uint16_x00150BC8)((magic >> 8) | (magic << 8)) == 0x8000) {
        return ADXB_DecodeHeaderAdx_x00150BC8(adxb, header, len);
    }
    if (ADXB_CheckSpsd_x00150BC8(header) != 0) {
        return ADXB_DecodeHeaderSpsd_x00150BC8(adxb, header, len);
    }
    if (ADXB_CheckWav_x00150BC8(header) != 0) {
        return ADXB_DecodeHeaderWav_x00150BC8(adxb, header, len);
    }
    if (ADXB_CheckAiff_x00150BC8(header) != 0) {
        return ADXB_DecodeHeaderAiff_x00150BC8(adxb, header, len);
    }
    if (ADXB_CheckAu_x00150BC8(header) != 0) {
        return ADXB_DecodeHeaderAu_x00150BC8(adxb, header, len);
    }
    if (ADXB_CheckAc3_x00150BC8(header) != 0) {
        return ADXB_DecodeHeaderAc3_x00150BC8(adxb, header, len);
    }
    return -1;
}
void func_00150D30_x00150D30(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00150D30");
void func_00150D30_x00150D30(u8 *arg0, s32 arg1, s32 arg2)
{
  *((s32 *) (((u8 *) arg0) + 0x7C)) = arg2;
 do { } while (0);
  *((s32 *) (((u8 *) arg0) + 0x78)) = arg1;
}
void func_00150D40_x00150D40(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00150D40");
void func_00150D40_x00150D40(u8 *arg0, s32 arg1, s32 arg2)
{
  *((s32 *) (arg0 + 0x80)) = arg1;
  *((s32 *) (((u8 *) arg0) + 0x84)) = arg2;
}
s32 fn_800455A4_x00150D50(u8 *arg0) __asm__("fn_800455A4");
s32 fn_800455A4_x00150D50(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x3C);
}
s16 func_00150D58(u8 *arg0) {
    return *(s16 *)((u8 *)arg0 + 0x98);
}
s32 func_00150D60(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x14);
}
typedef unsigned char Uint8_x00150D68;
typedef signed char Sint8_x00150D68;
typedef signed short Sint16_x00150D68;
typedef signed int Sint32_x00150D68;
typedef struct ADXPD_OBJ_x00150D68 *ADXPD_x00150D68;
typedef struct {
        Sint16_x00150D68 used;
        Sint16_x00150D68 x02;
        Sint32_x00150D68 stat;
        ADXPD_x00150D68 pd;
        Sint8_x00150D68 x0c;
        Sint8_x00150D68 bps;
        Sint8_x00150D68 nch;
        Sint8_x00150D68 x0f;
        Sint32_x00150D68 fmt;
        Sint32_x00150D68 sfreq;
        Sint32_x00150D68 total_nsmpl;
        Sint16_x00150D68 x1c;
        Uint8_x00150D68 pad1e[2];
        Sint32_x00150D68 x20;
        Sint16_x00150D68 x24;
        Sint16_x00150D68 x26;
        Sint32_x00150D68 x28;
        Sint32_x00150D68 x2c;
        Sint32_x00150D68 x30;
        Sint32_x00150D68 x34;
        Sint32_x00150D68 x38;
        Sint32_x00150D68 x3c;
        Sint32_x00150D68 x40;
        Sint32_x00150D68 x44;
        Sint16_x00150D68 *inbuf;
        Sint32_x00150D68 inbuf_nsmpl;
        Sint32_x00150D68 out_nch;
        Sint32_x00150D68 x54;
        Sint32_x00150D68 out_fmt;
        Sint16_x00150D68 *pcmbuf;
        Sint32_x00150D68 pcmbuf_nsmpl;
        Sint32_x00150D68 pcmbuf_chofst;
        Sint32_x00150D68 wr_pos;
        Sint32_x00150D68 wr_nsmpl;
        Sint32_x00150D68 wr_x70;
        Sint32_x00150D68 x74;
        void (*getwr_func)(void *obj, Sint32_x00150D68 *pos, Sint32_x00150D68 *nsmpl, Sint32_x00150D68 *x70);
        void *getwr_obj;
        void (*addwr_func)(void *obj, Sint32_x00150D68 nbyte, Sint32_x00150D68 nsmpl);
        void *addwr_obj;
        Sint32_x00150D68 x88;
        Sint32_x00150D68 x8c;
        Sint32_x00150D68 dec_nsmpl;
        Sint32_x00150D68 dec_nbyte;
        Sint16_x00150D68 x98;
        Sint16_x00150D68 x9a;
        Sint16_x00150D68 x9c;
        Uint8_x00150D68 pad9e[2];
        Sint16_x00150D68 key[3];
        Sint16_x00150D68 extprm[3];
        Sint16_x00150D68 dly[2][2];
        void *ahx;
        Sint32_x00150D68 nsmpl;
        Sint32_x00150D68 nsmpl96;
        Uint8_x00150D68 padc0[0xCC - 0xC0];
        Sint32_x00150D68 ainf_len;
        Uint8_x00150D68 ainf[16];
        Sint16_x00150D68 def_outvol;
        Sint16_x00150D68 def_pan[2];
        Uint8_x00150D68 padda[2];
        void *xdc;
        Uint8_x00150D68 pade0[8];
        Sint32_x00150D68 cb_nbyte;
        Sint32_x00150D68 xec;
        void (*cb_func)(void *obj, Sint32_x00150D68 nbyte, Sint32_x00150D68 nsmpl);
        void *cb_obj;
} ADXB_OBJ_x00150D68;
typedef ADXB_OBJ_x00150D68 *ADXB_x00150D68;
typedef struct ADXPD_OBJ_x00150D68 {
        Uint8_x00150D68 pad0[0x10];
        Sint32_x00150D68 nblk;
        Uint8_x00150D68 pad14[0x20 - 0x14];
        Sint16_x00150D68 *out0;
        Sint16_x00150D68 *out1;
} ADXPD_OBJ_x00150D68;
extern void (*ahxsetextfunc_x00150D68)(void *ahx, Sint16_x00150D68 *key) __asm__("ahxsetextfunc");
extern void (*pl2resetfunc_x00150D68)(ADXB_x00150D68 adxb) __asm__("pl2resetfunc");
Sint32_x00150D68 fn_80045588_x00150D68(ADXB_x00150D68 adxb) __asm__("fn_80045588");
/* ADXB_GetNumChan: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/adx_bsc.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00150D68 fn_80045588_x00150D68(ADXB_x00150D68 adxb)
{
        if (adxb->nch == 1 && adxb->xdc != 0) {
                return 2;
        }
        return adxb->nch;
}
s8 func_00150D98(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 0xD);
}
typedef signed char Sint8_x00150DA0;
typedef signed short Sint16_x00150DA0;
typedef signed int Sint32_x00150DA0;
typedef struct {
    Sint8_x00150DA0 pad0[152];
    Sint16_x00150DA0 f152;
    Sint16_x00150DA0 f154;
    Sint16_x00150DA0 f156;
} ADXB_x00150DA0;
typedef signed char Sint8_x00150DA0;
typedef signed short Sint16_x00150DA0;
typedef signed int Sint32_x00150DA0;
Sint32_x00150DA0 func_00150DA0_x00150DA0(ADXB_x00150DA0 *b) __asm__("func_00150DA0");
/* func_0033CEF0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0033cef0.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x00150DA0 func_00150DA0_x00150DA0(ADXB_x00150DA0 *b)
{
    Sint32_x00150DA0 mode;
    Sint32_x00150DA0 x;
    mode = b->f152;
    if (mode == 0) {
        return 16;
    }
    if (mode == 2) {
        x = b->f156;
        if (x == 2) {
            return 4;
        }
        if (x == 1) {
            return 8;
        }
        return 16;
    }
    if (mode == 1) {
        x = b->f156;
        if (x == 2) {
            return 4;
        }
        return 16;
    }
    return 16;
}
s32 func_00150E00(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x10);
}
s8 func_00150E08(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 0xF);
}
s32 func_00150E10(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x18);
}
s16 func_00150E18(u8 *arg0) {
    return *(s16 *)((u8 *)arg0 + 0x1C);
}
s32 func_00150E20(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x20);
}
s16 func_00150E28(u8 *arg0) {
    return *(s16 *)((u8 *)arg0 + 0x24);
}
s32 func_00150E30(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x28);
}
s32 func_00150E38(u8 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = *(s32 *)((u8 *)arg0 + 0x2C);
    }
    return var_v0;
}
s32 func_00150E50(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x30);
}
s32 func_00150E58(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x34);
}
s32 func_00150E60(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0xCC);
}
s16 func_00150E68(u8 *arg0) {
    return *(s16 *)((u8 *)arg0 + 0xE0);
}
s16 func_00150E70(s32 arg0, s32 arg1) {
    return *(s16 *)((u8 *)((arg1 * 2) + arg0) + 0xE2);
}
s32 func_00150E80(s32 arg0) {
    return arg0 + 0xD0;
}
void func_00150E88(u8 *arg0) {
    func_001619F0(*(s32 *)((u8 *)arg0 + 8), arg0 + 0xAC, arg0 + 0xB0);
    func_00161A28(*(s32 *)((u8 *)arg0 + 8), arg0 + 0xA6, arg0 + 0xA8, arg0 + 0xAA);
}
void func_00150EC8(u8 *arg0) {
    func_001619C8(*(s32 *)((u8 *)arg0 + 8), arg0 + 0xAC, arg0 + 0xB0);
    func_00161A18(*(s32 *)((u8 *)arg0 + 8), *(s16 *)((u8 *)arg0 + 0xA6), *(s16 *)((u8 *)arg0 + 0xA8), *(s16 *)((u8 *)arg0 + 0xAA));
}
typedef struct AdxPdObj_x00150F08 {
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
} AdxPdObj_x00150F08;
typedef struct SfdSj_x00150F08 SfdSj_x00150F08;
typedef struct SfdSjChunk_x00150F08 {
    char *data;
    int len;
} SfdSjChunk_x00150F08;
typedef struct SfdSjVtbl_x00150F08 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00150F08 *sj);
    int (*getUuid)(SfdSj_x00150F08 *sj);
    void (*reset)(SfdSj_x00150F08 *sj);
    void (*getChunk)(SfdSj_x00150F08 *sj, int id, int n, SfdSjChunk_x00150F08 *ck);
    void (*ungetChunk)(SfdSj_x00150F08 *sj, int id, SfdSjChunk_x00150F08 *ck);
    void (*putChunk)(SfdSj_x00150F08 *sj, int id, SfdSjChunk_x00150F08 *ck);
    int (*getNumData)(SfdSj_x00150F08 *sj, int id);
} SfdSjVtbl_x00150F08;
struct SfdSj_x00150F08 {
    SfdSjVtbl_x00150F08 *vtbl;
};
typedef struct AdxDecPara_x00150F08 {
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
} AdxDecPara_x00150F08;
struct Pl2Enc_x00150F08;
typedef struct AdxbObj_x00150F08 AdxbObj_x00150F08;
typedef short *(*AdxbGetWrFunc_x00150F08)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00150F08)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00150F08 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00150F08 *xpd;
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
    AdxDecPara_x00150F08 dp;
    AdxbGetWrFunc_x00150F08 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00150F08 addwrfunc;
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
    struct Pl2Enc_x00150F08 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void (*adxb_pl2_reset_func_x00150F08)(AdxbObj_x00150F08 *obj) __asm__("adxb_pl2_reset_func");
extern void ADXB_EntryDecFunc_x00150F08(AdxbObj_x00150F08 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef unsigned int size_t_x00150F08;
size_t_x00150F08 strlen_x00150F08(const char *) __asm__("func_00127BA0");
typedef struct AdxSjdObj_x00150F08 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00150F08 *adxb;
    SfdSj_x00150F08 *sji;
    SfdSj_x00150F08 *sjo[2];
    SfdSjChunk_x00150F08 cki;
    SfdSjChunk_x00150F08 cko[2];
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
} AdxSjdObj_x00150F08;
extern void ADXSJD_EntryFltFunc_x00150F08(AdxSjdObj_x00150F08 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00150F08(AdxSjdObj_x00150F08 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00150F08)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00150F08)(CvFsErrFn_x00150F08 func, void *obj);
typedef int (*CvFsPathFn_x00150F08)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00150F08)(void);
typedef int (*CvFsOpenFn_x00150F08)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00150F08)(int fd);
typedef int (*CvFsFdIntFn_x00150F08)(int fd);
typedef int (*CvFsSeekFn_x00150F08)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00150F08)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00150F08)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00150F08)(void);
typedef int (*CvFsLoadDirInfoFn_x00150F08)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00150F08)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00150F08)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00150F08 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00150F08 entry_err_func;
    CvFsPathFn_x00150F08 get_file_size;
    CvFsGetFreeSizeFn_x00150F08 get_free_size;
    CvFsOpenFn_x00150F08 open;
    CvFsFdFn_x00150F08 close;
    CvFsSeekFn_x00150F08 seek;
    CvFsFdIntFn_x00150F08 tell;
    CvFsXferFn_x00150F08 req_rd;
    CvFsXferFn_x00150F08 req_wr;
    CvFsFdFn_x00150F08 stop_tr;
    CvFsFdIntFn_x00150F08 get_stat;
    CvFsFdIntFn_x00150F08 get_sct_len;
    CvFsSetSctLenFn_x00150F08 set_sct_len;
    CvFsFdIntFn_x00150F08 get_num_tr;
    CvFsPathFn_x00150F08 change_dir;
    CvFsPathFn_x00150F08 is_exist_file;
    CvFsGetNumFilesFn_x00150F08 get_num_files;
    CvFsLoadDirInfoFn_x00150F08 load_dir_info;
    CvFsFdIntFn_x00150F08 get_max_byte_rate;
    CvFsPathFn_x00150F08 make_dir;
    CvFsPathFn_x00150F08 remove_dir;
    CvFsPathFn_x00150F08 delete_file;
    CvFsGetFileSizeExFn_x00150F08 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00150F08 opt_fn2;
} CvFsVtbl_x00150F08;
typedef struct CvFsHandle_x00150F08 {
    CvFsVtbl_x00150F08 *vtbl;
    int fd;
} CvFsHandle_x00150F08;
extern CvFsVtbl_x00150F08 *addDevice_x00150F08(char *devname, CvFsVtbl_x00150F08 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00150F08 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00150F08 *sj;
    CvFsHandle_x00150F08 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00150F08 rdck;
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
} AdxStmObj_x00150F08;
extern void ADXSTM_EntryEosFunc_x00150F08(AdxStmObj_x00150F08 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
int SKG_GenerateKey_x00150F08(const char *str, int len, unsigned short *k0, unsigned short *k1, unsigned short *k2) __asm__("func_001503A0");
extern void (*adxb_pl2_reset_func_x00150F08)(AdxbObj_x00150F08 *obj) __asm__("adxb_pl2_reset_func");
void ADXB_EntryDecFunc_x00150F08(AdxbObj_x00150F08 *obj, void (*cb)(void *context, int count, int bytes), void *context) __asm__("ADXB_EntryDecFunc");
void func_00150F08_x00150F08(AdxbObj_x00150F08 *block, const char *text) __asm__("func_00150F08");
/* ADXB_SetExtString: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxb.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_00150F08_x00150F08(AdxbObj_x00150F08 *block, const char *text)
{
    unsigned short first;
    unsigned short second;
    unsigned short third;
    SKG_GenerateKey_x00150F08(text, strlen_x00150F08(text), &first, &second, &third);
    block->k0 = first;
    block->km = second;
    block->ka = third;
}
typedef unsigned char u8_x00150F70;
typedef signed int s32_x00150F70;
extern u8_x00150F70 D_0037701C_x00150F70[] __asm__("D_0040109C");
extern u8_x00150F70 D_0037701E_x00150F70[] __asm__("D_0040109E");
extern u8_x00150F70 D_00377020_x00150F70[] __asm__("D_004010A0");
s32_x00150F70 func_001C80F0_x00150F70(s32_x00150F70) __asm__("func_00127BA0");
void func_00157B98_x00150F70(s32_x00150F70, s32_x00150F70, void *, void *, void *) __asm__("func_001503A0");
void func_00150F70_x00150F70(s32_x00150F70 a) __asm__("func_00150F70");
/* func_001587B8: from https://github.com/Subarasheese/pes6decomp (src/middleware/cri/adx_bsc/func_001587B8.c, no licence stated for its own code); ee-gcc 2.96 -O2 -G0 */
void func_00150F70_x00150F70(s32_x00150F70 a) { s32_x00150F70 v = func_001C80F0_x00150F70(a); func_00157B98_x00150F70(a, v, D_0037701C_x00150F70, D_0037701E_x00150F70, D_00377020_x00150F70); }
typedef struct AdxPdObj_x00150FB8 {
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
} AdxPdObj_x00150FB8;
typedef struct SfdSj_x00150FB8 SfdSj_x00150FB8;
typedef struct SfdSjChunk_x00150FB8 {
    char *data;
    int len;
} SfdSjChunk_x00150FB8;
typedef struct SfdSjVtbl_x00150FB8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00150FB8 *sj);
    int (*getUuid)(SfdSj_x00150FB8 *sj);
    void (*reset)(SfdSj_x00150FB8 *sj);
    void (*getChunk)(SfdSj_x00150FB8 *sj, int id, int n, SfdSjChunk_x00150FB8 *ck);
    void (*ungetChunk)(SfdSj_x00150FB8 *sj, int id, SfdSjChunk_x00150FB8 *ck);
    void (*putChunk)(SfdSj_x00150FB8 *sj, int id, SfdSjChunk_x00150FB8 *ck);
    int (*getNumData)(SfdSj_x00150FB8 *sj, int id);
} SfdSjVtbl_x00150FB8;
struct SfdSj_x00150FB8 {
    SfdSjVtbl_x00150FB8 *vtbl;
};
typedef struct AdxDecPara_x00150FB8 {
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
} AdxDecPara_x00150FB8;
struct Pl2Enc_x00150FB8;
typedef struct AdxbObj_x00150FB8 AdxbObj_x00150FB8;
typedef short *(*AdxbGetWrFunc_x00150FB8)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00150FB8)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00150FB8 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00150FB8 *xpd;
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
    AdxDecPara_x00150FB8 dp;
    AdxbGetWrFunc_x00150FB8 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00150FB8 addwrfunc;
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
    struct Pl2Enc_x00150FB8 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void (*adxb_pl2_reset_func_x00150FB8)(AdxbObj_x00150FB8 *obj) __asm__("adxb_pl2_reset_func");
extern void ADXB_EntryDecFunc_x00150FB8(AdxbObj_x00150FB8 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
int sprintf_x00150FB8(char *, const char *, ...) __asm__("func_00127488");
typedef struct AdxSjdObj_x00150FB8 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00150FB8 *adxb;
    SfdSj_x00150FB8 *sji;
    SfdSj_x00150FB8 *sjo[2];
    SfdSjChunk_x00150FB8 cki;
    SfdSjChunk_x00150FB8 cko[2];
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
} AdxSjdObj_x00150FB8;
extern void ADXSJD_EntryFltFunc_x00150FB8(AdxSjdObj_x00150FB8 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00150FB8(AdxSjdObj_x00150FB8 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x00150FB8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00150FB8)(CvFsErrFn_x00150FB8 func, void *obj);
typedef int (*CvFsPathFn_x00150FB8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00150FB8)(void);
typedef int (*CvFsOpenFn_x00150FB8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00150FB8)(int fd);
typedef int (*CvFsFdIntFn_x00150FB8)(int fd);
typedef int (*CvFsSeekFn_x00150FB8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00150FB8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00150FB8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00150FB8)(void);
typedef int (*CvFsLoadDirInfoFn_x00150FB8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00150FB8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00150FB8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00150FB8 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00150FB8 entry_err_func;
    CvFsPathFn_x00150FB8 get_file_size;
    CvFsGetFreeSizeFn_x00150FB8 get_free_size;
    CvFsOpenFn_x00150FB8 open;
    CvFsFdFn_x00150FB8 close;
    CvFsSeekFn_x00150FB8 seek;
    CvFsFdIntFn_x00150FB8 tell;
    CvFsXferFn_x00150FB8 req_rd;
    CvFsXferFn_x00150FB8 req_wr;
    CvFsFdFn_x00150FB8 stop_tr;
    CvFsFdIntFn_x00150FB8 get_stat;
    CvFsFdIntFn_x00150FB8 get_sct_len;
    CvFsSetSctLenFn_x00150FB8 set_sct_len;
    CvFsFdIntFn_x00150FB8 get_num_tr;
    CvFsPathFn_x00150FB8 change_dir;
    CvFsPathFn_x00150FB8 is_exist_file;
    CvFsGetNumFilesFn_x00150FB8 get_num_files;
    CvFsLoadDirInfoFn_x00150FB8 load_dir_info;
    CvFsFdIntFn_x00150FB8 get_max_byte_rate;
    CvFsPathFn_x00150FB8 make_dir;
    CvFsPathFn_x00150FB8 remove_dir;
    CvFsPathFn_x00150FB8 delete_file;
    CvFsGetFileSizeExFn_x00150FB8 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00150FB8 opt_fn2;
} CvFsVtbl_x00150FB8;
typedef struct CvFsHandle_x00150FB8 {
    CvFsVtbl_x00150FB8 *vtbl;
    int fd;
} CvFsHandle_x00150FB8;
extern CvFsVtbl_x00150FB8 *addDevice_x00150FB8(char *devname, CvFsVtbl_x00150FB8 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00150FB8 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00150FB8 *sj;
    CvFsHandle_x00150FB8 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00150FB8 rdck;
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
} AdxStmObj_x00150FB8;
extern void ADXSTM_EntryEosFunc_x00150FB8(AdxStmObj_x00150FB8 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
int SKG_GenerateKey_x00150FB8(const char *str, int len, unsigned short *k0, unsigned short *k1, unsigned short *k2) __asm__("func_001503A0");
extern void (*adxb_pl2_reset_func_x00150FB8)(AdxbObj_x00150FB8 *obj) __asm__("adxb_pl2_reset_func");
static unsigned short adxb_key0_x00150FB8 = 0;
static unsigned short adxb_key1_x00150FB8 = 0;
extern unsigned short adxb_key2_x00150FB8 __asm__("D_004010A0");
void ADXB_EntryDecFunc_x00150FB8(AdxbObj_x00150FB8 *obj, void (*cb)(void *context, int count, int bytes), void *context) __asm__("ADXB_EntryDecFunc");
int func_00150FB8_x00150FB8(AdxbObj_x00150FB8 *adx, unsigned char ver, unsigned char type, int name,
                 unsigned short *k0, unsigned short *k1, unsigned short *k2) __asm__("func_00150FB8");
/* adxb_get_key: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxb.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00150FB8_x00150FB8(AdxbObj_x00150FB8 *adx, unsigned char ver, unsigned char type, int name,
                 unsigned short *k0, unsigned short *k1, unsigned short *k2)
{
    char buf[16];
    if (ver < 4) {
        *k0 = 0;
        *k1 = 0;
        *k2 = 0;
    } else if (type >= 16) {
        sprintf_x00150FB8(buf, "%08X", name);
        SKG_GenerateKey_x00150FB8(buf, 8, k0, k1, k2);
    } else if (type >= 8) {
        if (adx->k0 == 0 && adx->km == 0 && adx->ka == 0) {
            adx->k0 = adxb_key0_x00150FB8;
            adx->km = adxb_key1_x00150FB8;
            adx->ka = adxb_key2_x00150FB8;
        }
        *k0 = adx->k0;
        *k1 = adx->km;
        *k2 = adx->ka;
    } else {
        *k0 = 0;
        *k1 = 0;
        *k2 = 0;
    }
    return 0;
}
__asm__("# rebind func_00150FB8 0x00150FB8");
s32 func_001510B8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 4);
}
typedef int s32_x001510C0;
typedef s32_x001510C0 ptrdiff_t_x001510C0;
typedef char Sint8_x001510C0;
typedef signed short Sint16_x001510C0;
typedef signed int Sint32_x001510C0;
extern int* sceCdCallback_x001510C0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x001510C0 unk0;
               Sint16_x001510C0 unk2;
               Sint16_x001510C0 unk4;
               Sint16_x001510C0 unk6;
} ADXPD_OBJ_SUB_x001510C0;
typedef struct {
               Sint32_x001510C0 used;
               Sint32_x001510C0 unk4;
               Sint32_x001510C0 mode;
               Sint32_x001510C0 stat;
               Sint32_x001510C0 num_blk;
               Sint32_x001510C0 unk14;
               Sint32_x001510C0 unk18;
               Sint32_x001510C0 unk1C;
               Sint32_x001510C0 unk20;
               Sint32_x001510C0 unk24;
               ADXPD_OBJ_SUB_x001510C0 unk28;
               Sint16_x001510C0 unk30;
               Sint16_x001510C0 unk32;
               Sint16_x001510C0 unk34;
               Sint16_x001510C0 unk36;
               Sint16_x001510C0 unk38;
               Sint16_x001510C0 unk3A;
} ADXPD_OBJ_x001510C0;
typedef ADXPD_OBJ_x001510C0* ADXPD_x001510C0;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x001510C0;
typedef struct {
               Sint32_x001510C0 unk0;
               Sint32_x001510C0 unk4;
               Sint32_x001510C0 unk8;
               Sint32_x001510C0 unkC;
               Sint32_x001510C0 unk10;
               void* unk14;
               Sint32_x001510C0 unk18;
               Sint32_x001510C0 unk1C;
               Sint32_x001510C0 unk20;
               Sint32_x001510C0 unk24;
               Sint32_x001510C0 unk28;
} ADXB_UNK_x001510C0;
typedef struct {
               Sint16_x001510C0 unk0;
               Sint16_x001510C0 unk2;
               Sint32_x001510C0 stat;
               ADXPD_x001510C0 adxpd;
               Sint8_x001510C0 encoding_type;
               Sint8_x001510C0 sample_bitdepth;
               Sint8_x001510C0 channel_count;
               Sint8_x001510C0 block_size;
               Sint32_x001510C0 samples_per_block;
               Sint32_x001510C0 sample_rate;
               Sint32_x001510C0 total_samples;
               Sint16_x001510C0 unk1C;
               char pad1E[2];
               Sint32_x001510C0 unk20;
               Sint16_x001510C0 unk24;
               Sint16_x001510C0 unk26;
               Sint32_x001510C0 unk28;
               Sint32_x001510C0 unk2C;
               Sint32_x001510C0 unk30;
               Sint32_x001510C0 unk34;
               Sint32_x001510C0 unk38;
               void* unk3C;
               Sint32_x001510C0 unk40;
               Sint32_x001510C0 unk44;
               ADXB_UNK_x001510C0 unk48;
               Sint32_x001510C0 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x001510C0*, Sint32_x001510C0*, Sint32_x001510C0*);
               void* object;
               void (*add_wr)(void*, Sint32_x001510C0, Sint32_x001510C0);
               Sint32_x001510C0 unk84;
               Sint32_x001510C0 unk88;
               Sint32_x001510C0 unk8C;
               Sint32_x001510C0 dec_num_sample;
               Sint32_x001510C0 dec_data_len;
               Sint16_x001510C0 format;
               Sint16_x001510C0 unk9A;
               Sint16_x001510C0 unk9C;
               Sint16_x001510C0 unk9E;
               Sint16_x001510C0 unkA0;
               char padA2[0xE];
               Sint32_x001510C0 unkB0;
               Sint32_x001510C0 ahx_dec_samples;
               Sint32_x001510C0 ahx_dec_frames;
               Sint32_x001510C0 unkBC;
               Sint32_x001510C0 ac3_dec_samples;
               Sint32_x001510C0 ac3_dec_frames;
               Sint32_x001510C0 unkC8;
               ADX_UNK_x001510C0 unkCC;
               Sint16_x001510C0 unkDC;
               Sint16_x001510C0 unkDE[2];
               char padE2[2];
               Sint32_x001510C0 unkE4;
               char padE8[8];
} ADXB_OBJ_x001510C0;
typedef ADXB_OBJ_x001510C0* ADXB_x001510C0;
extern void ADXB_EntryGetWrFunc_x001510C0(ADXB_x001510C0 adxb, void* (*get_wr)(void*, ptrdiff_t_x001510C0*, Sint32_x001510C0*, Sint32_x001510C0*), void* object) __asm__("ADXB_EntryGetWrFunc");
extern void (*ahxsetextfunc_x001510C0)(Sint32_x001510C0, Sint16_x001510C0*) __asm__("ahxsetextfunc");
void ADXB_EntryGetWrFunc_x001510C0(ADXB_x001510C0 adxb, void* (*get_wr)(void*, ptrdiff_t_x001510C0*, Sint32_x001510C0*, Sint32_x001510C0*), void* object) __asm__("ADXB_EntryGetWrFunc");
void func_001510C0_x001510C0(ADXB_x001510C0 adxb, Sint32_x001510C0 arg1, Sint32_x001510C0 arg2) __asm__("func_001510C0");
/* ADXB_EntryData: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_bsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001510C0_x001510C0(ADXB_x001510C0 adxb, Sint32_x001510C0 arg1, Sint32_x001510C0 arg2) {
    if (adxb->format == 0) {
        adxb->unk48.unk0 = arg1;
        adxb->unk48.unk4 = arg2 / adxb->block_size;
        adxb->unk74 = 0;
        adxb->dec_num_sample = 0;
        adxb->dec_data_len = 0;
    } else {
        adxb->unk48.unk0 = arg1;
        adxb->unk48.unk4 = arg2 / ((adxb->sample_bitdepth / 8) * adxb->channel_count);
        adxb->unk74 = 0;
        adxb->dec_num_sample = 0;
        adxb->dec_data_len = 0;
    }
}
void func_00151148(u8 *arg0) {
    if (*(s32 *)((u8 *)arg0 + 4) == 0) {
        *(s32 *)((u8 *)arg0 + 4) = 1;
    }
}
typedef unsigned char Uint8_x00151160;
typedef signed char Sint8_x00151160;
typedef signed short Sint16_x00151160;
typedef signed int Sint32_x00151160;
typedef struct ADXPD_OBJ_x00151160 *ADXPD_x00151160;
typedef struct {
        Sint16_x00151160 used;
        Sint16_x00151160 x02;
        Sint32_x00151160 stat;
        ADXPD_x00151160 pd;
        Sint8_x00151160 x0c;
        Sint8_x00151160 bps;
        Sint8_x00151160 nch;
        Sint8_x00151160 x0f;
        Sint32_x00151160 fmt;
        Sint32_x00151160 sfreq;
        Sint32_x00151160 total_nsmpl;
        Sint16_x00151160 x1c;
        Uint8_x00151160 pad1e[2];
        Sint32_x00151160 x20;
        Sint16_x00151160 x24;
        Sint16_x00151160 x26;
        Sint32_x00151160 x28;
        Sint32_x00151160 x2c;
        Sint32_x00151160 x30;
        Sint32_x00151160 x34;
        Sint32_x00151160 x38;
        Sint32_x00151160 x3c;
        Sint32_x00151160 x40;
        Sint32_x00151160 x44;
        Sint16_x00151160 *inbuf;
        Sint32_x00151160 inbuf_nsmpl;
        Sint32_x00151160 out_nch;
        Sint32_x00151160 x54;
        Sint32_x00151160 out_fmt;
        Sint16_x00151160 *pcmbuf;
        Sint32_x00151160 pcmbuf_nsmpl;
        Sint32_x00151160 pcmbuf_chofst;
        Sint32_x00151160 wr_pos;
        Sint32_x00151160 wr_nsmpl;
        Sint32_x00151160 wr_x70;
        Sint32_x00151160 x74;
        void (*getwr_func)(void *obj, Sint32_x00151160 *pos, Sint32_x00151160 *nsmpl, Sint32_x00151160 *x70);
        void *getwr_obj;
        void (*addwr_func)(void *obj, Sint32_x00151160 nbyte, Sint32_x00151160 nsmpl);
        void *addwr_obj;
        Sint32_x00151160 x88;
        Sint32_x00151160 x8c;
        Sint32_x00151160 dec_nsmpl;
        Sint32_x00151160 dec_nbyte;
        Sint16_x00151160 x98;
        Sint16_x00151160 x9a;
        Sint16_x00151160 x9c;
        Uint8_x00151160 pad9e[2];
        Sint16_x00151160 key[3];
        Sint16_x00151160 extprm[3];
        Sint16_x00151160 dly[2][2];
        void *ahx;
        Sint32_x00151160 nsmpl;
        Sint32_x00151160 nsmpl96;
        Uint8_x00151160 padc0[0xCC - 0xC0];
        Sint32_x00151160 ainf_len;
        Uint8_x00151160 ainf[16];
        Sint16_x00151160 def_outvol;
        Sint16_x00151160 def_pan[2];
        Uint8_x00151160 padda[2];
        void *xdc;
        Uint8_x00151160 pade0[8];
        Sint32_x00151160 cb_nbyte;
        Sint32_x00151160 xec;
        void (*cb_func)(void *obj, Sint32_x00151160 nbyte, Sint32_x00151160 nsmpl);
        void *cb_obj;
} ADXB_OBJ_x00151160;
typedef ADXB_OBJ_x00151160 *ADXB_x00151160;
extern void ADXPD_Stop_x00151160(ADXPD_x00151160 pd) __asm__("func_00161B40");
typedef struct ADXPD_OBJ_x00151160 {
        Uint8_x00151160 pad0[0x10];
        Sint32_x00151160 nblk;
        Uint8_x00151160 pad14[0x20 - 0x14];
        Sint16_x00151160 *out0;
        Sint16_x00151160 *out1;
} ADXPD_OBJ_x00151160;
extern void (*ahxsetextfunc_x00151160)(void *ahx, Sint16_x00151160 *key) __asm__("ahxsetextfunc");
extern void (*pl2resetfunc_x00151160)(ADXB_x00151160 adxb) __asm__("D_00401098");
void func_00151160_x00151160(ADXB_x00151160 adxb) __asm__("func_00151160");
/* ADXB_Stop: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/adx_bsc.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_00151160_x00151160(ADXB_x00151160 adxb)
{
        if (adxb->xdc != 0) {
                pl2resetfunc_x00151160(adxb);
        }
        ADXPD_Stop_x00151160(adxb->pd);
        adxb->stat = 0;
}
void func_001511A8(u8 *arg0) {
    if (*(s32 *)((u8 *)arg0 + 4) == 3) {
        func_00161B68(*(s32 *)((u8 *)arg0 + 8));
        *(s32 *)((u8 *)arg0 + 0x8C) = 0;
        *(s32 *)((u8 *)arg0 + 4) = 0;
    }
}
s32 func_001511E8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x94);
}
s32 func_001511F0(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x90);
}
s32 func_001511F8(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 8);
}
typedef unsigned char u8_x00151200;
typedef signed int s32_x00151200;
void func_0016A078_x00151200(s32_x00151200, s32_x00151200, s32_x00151200, s32_x00151200, s32_x00151200) __asm__("func_00161A90");
void func_0016A108_x00151200(s32_x00151200) __asm__("func_00161B20");
void func_00151200_x00151200(s32_x00151200 *p, s32_x00151200 v) __asm__("func_00151200");
/* func_00158A80: from https://github.com/Subarasheese/pes6decomp (src/middleware/cri/adx_bsc/func_00158A80.c, no licence stated for its own code); ee-gcc 2.96 -O2 -G0 */
void func_00151200_x00151200(s32_x00151200 *p, s32_x00151200 v) { s32_x00151200 *q = (s32_x00151200 *)((u8_x00151200 *)p + 0x48); s32_x00151200 s = *(s32_x00151200 *)((u8_x00151200 *)p + 8); func_0016A078_x00151200(s, q[0], v, q[5] + (q[8] << 1), 0); func_0016A108_x00151200(s); }
typedef int s32_x00151250;
typedef s32_x00151250 ptrdiff_t_x00151250;
typedef char Sint8_x00151250;
typedef signed short Sint16_x00151250;
typedef signed int Sint32_x00151250;
extern int* sceCdCallback_x00151250(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x00151250 unk0;
               Sint16_x00151250 unk2;
               Sint16_x00151250 unk4;
               Sint16_x00151250 unk6;
} ADXPD_OBJ_SUB_x00151250;
typedef struct {
               Sint32_x00151250 used;
               Sint32_x00151250 unk4;
               Sint32_x00151250 mode;
               Sint32_x00151250 stat;
               Sint32_x00151250 num_blk;
               Sint32_x00151250 unk14;
               Sint32_x00151250 unk18;
               Sint32_x00151250 unk1C;
               Sint32_x00151250 unk20;
               Sint32_x00151250 unk24;
               ADXPD_OBJ_SUB_x00151250 unk28;
               Sint16_x00151250 unk30;
               Sint16_x00151250 unk32;
               Sint16_x00151250 unk34;
               Sint16_x00151250 unk36;
               Sint16_x00151250 unk38;
               Sint16_x00151250 unk3A;
} ADXPD_OBJ_x00151250;
typedef ADXPD_OBJ_x00151250* ADXPD_x00151250;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00151250;
typedef struct {
               Sint32_x00151250 unk0;
               Sint32_x00151250 unk4;
               Sint32_x00151250 unk8;
               Sint32_x00151250 unkC;
               Sint32_x00151250 unk10;
               void* unk14;
               Sint32_x00151250 unk18;
               Sint32_x00151250 unk1C;
               Sint32_x00151250 unk20;
               Sint32_x00151250 unk24;
               Sint32_x00151250 unk28;
} ADXB_UNK_x00151250;
typedef struct {
               Sint16_x00151250 unk0;
               Sint16_x00151250 unk2;
               Sint32_x00151250 stat;
               ADXPD_x00151250 adxpd;
               Sint8_x00151250 encoding_type;
               Sint8_x00151250 sample_bitdepth;
               Sint8_x00151250 channel_count;
               Sint8_x00151250 block_size;
               Sint32_x00151250 samples_per_block;
               Sint32_x00151250 sample_rate;
               Sint32_x00151250 total_samples;
               Sint16_x00151250 unk1C;
               char pad1E[2];
               Sint32_x00151250 unk20;
               Sint16_x00151250 unk24;
               Sint16_x00151250 unk26;
               Sint32_x00151250 unk28;
               Sint32_x00151250 unk2C;
               Sint32_x00151250 unk30;
               Sint32_x00151250 unk34;
               Sint32_x00151250 unk38;
               void* unk3C;
               Sint32_x00151250 unk40;
               Sint32_x00151250 unk44;
               ADXB_UNK_x00151250 unk48;
               Sint32_x00151250 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00151250*, Sint32_x00151250*, Sint32_x00151250*);
               void* object;
               void (*add_wr)(void*, Sint32_x00151250, Sint32_x00151250);
               Sint32_x00151250 unk84;
               Sint32_x00151250 unk88;
               Sint32_x00151250 unk8C;
               Sint32_x00151250 dec_num_sample;
               Sint32_x00151250 dec_data_len;
               Sint16_x00151250 format;
               Sint16_x00151250 unk9A;
               Sint16_x00151250 unk9C;
               Sint16_x00151250 unk9E;
               Sint16_x00151250 unkA0;
               char padA2[0xE];
               Sint32_x00151250 unkB0;
               Sint32_x00151250 ahx_dec_samples;
               Sint32_x00151250 ahx_dec_frames;
               Sint32_x00151250 unkBC;
               Sint32_x00151250 ac3_dec_samples;
               Sint32_x00151250 ac3_dec_frames;
               Sint32_x00151250 unkC8;
               ADX_UNK_x00151250 unkCC;
               Sint16_x00151250 unkDC;
               Sint16_x00151250 unkDE[2];
               char padE2[2];
               Sint32_x00151250 unkE4;
               char padE8[8];
} ADXB_OBJ_x00151250;
typedef ADXB_OBJ_x00151250* ADXB_x00151250;
extern void ADXB_EntryGetWrFunc_x00151250(ADXB_x00151250 adxb, void* (*get_wr)(void*, ptrdiff_t_x00151250*, Sint32_x00151250*, Sint32_x00151250*), void* object) __asm__("ADXB_EntryGetWrFunc");
Sint32_x00151250 ADXPD_EntrySte_x00151250(ADXPD_x00151250, Sint32_x00151250, Sint32_x00151250, Sint32_x00151250, Sint32_x00151250) __asm__("func_00161AC0");
void ADXPD_Start_x00151250(ADXPD_x00151250) __asm__("func_00161B20");
extern void (*ahxsetextfunc_x00151250)(Sint32_x00151250, Sint16_x00151250*) __asm__("ahxsetextfunc");
void ADXB_EntryGetWrFunc_x00151250(ADXB_x00151250 adxb, void* (*get_wr)(void*, ptrdiff_t_x00151250*, Sint32_x00151250*, Sint32_x00151250*), void* object) __asm__("ADXB_EntryGetWrFunc");
void func_00151250_x00151250(ADXB_x00151250 adxb, Sint32_x00151250 arg1) __asm__("func_00151250");
/* ADXB_EvokeExpandSte: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_bsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00151250_x00151250(ADXB_x00151250 adxb, Sint32_x00151250 arg1) {
    ADXPD_x00151250 adxpd = adxb->adxpd;
    ADXB_UNK_x00151250* unk = &adxb->unk48;
    Sint32_x00151250 a3;
    Sint32_x00151250 t0;
    a3 = unk->unk14 + (unk->unk20 * 2);
    t0 = a3 + (unk->unk1C * 2);
    ADXPD_EntrySte_x00151250(adxpd, unk->unk0, arg1 * 2, a3, t0);
    ADXPD_Start_x00151250(adxpd);
}
typedef unsigned char u8_x001512A8;
typedef signed int s32_x001512A8;
void func_0016A0D8_x001512A8(s32_x001512A8, s32_x001512A8, s32_x001512A8, s32_x001512A8, s32_x001512A8) __asm__("func_00161AF0");
void func_0016A108_x001512A8(s32_x001512A8) __asm__("func_00161B20");
void func_001512A8_x001512A8(s32_x001512A8 *p, s32_x001512A8 v) __asm__("func_001512A8");
/* func_00158B28: from https://github.com/Subarasheese/pes6decomp (src/middleware/cri/adx_bsc/func_00158B28.c, no licence stated for its own code); ee-gcc 2.96 -O2 -G0 */
void func_001512A8_x001512A8(s32_x001512A8 *p, s32_x001512A8 v) { s32_x001512A8 *q = (s32_x001512A8 *)((u8_x001512A8 *)p + 0x48); s32_x001512A8 s = *(s32_x001512A8 *)((u8_x001512A8 *)p + 8); s32_x001512A8 a3 = q[5] + (q[8] << 1); func_0016A0D8_x001512A8(s, q[0], v, a3, a3 + (q[7] << 1)); func_0016A108_x001512A8(s); }
typedef struct AdxbIn_x00151300 {
    int unk0;
    int nbyte;
    int nch;
    int unkC;
    int blk;
    int unk14;
    int end;
    int unk1C;
    int pos;
    int room;
    int wpos;
} AdxbIn_x00151300;
typedef struct AdxbHn_x00151300 {
    char unk0[0x48];
    AdxbIn_x00151300 in;
    char unk74[0x74];
    int ext;
} AdxbHn_x00151300;
extern void ADXB_EvokeExpandSte_x00151300(AdxbHn_x00151300 *adxb, int nblk) __asm__("func_00151250");
extern int func_0033D378_x00151300(int a0, int a1) __asm__("func_001512A8");
extern int func_0033D2D0_x00151300(int *a0, int a1) __asm__("func_00151200");
void func_00151300_x00151300(AdxbHn_x00151300 *b) __asm__("func_00151300");
/* func_0033D3D0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0033d3d0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00151300_x00151300(AdxbHn_x00151300 *b)
{
    AdxbIn_x00151300 *in = &b->in;
    int nch = in->nch;
    int blk, end, pos, wpos, room;
    int full, len;
    int nin, nout, nend, nroom, tail;
    nin = in->nbyte / nch;
    end = in->end;
    pos = in->pos;
    blk = in->blk;
    wpos = in->wpos;
    nend = (end - pos + blk - 1) / blk;
    nout = (wpos + blk - 1) / blk;
    room = in->room;
    tail = blk - (wpos + blk - 1) % blk - 1;
    full = wpos < room;
    len = nend * blk;
    if (nout < nend)
        nend += pos + len - tail < end;
    room += full * tail;
    nroom = room / blk;
    if (nroom < nin)
        nin = nroom;
    if (nout < nin)
        nin = nout;
    if (nend < nin)
        nin = nend;
    if (nch == 2) {
        ADXB_EvokeExpandSte_x00151300(b, nin);
        return;
    }
    if (b->ext != 0) {
        func_0033D378_x00151300((int)b, nin);
        return;
    }
    func_0033D2D0_x00151300((int *)b, nin);
}
void func_00151408_x00151408(short *dst, short *src, int n) __asm__("func_00151408");
/* adxb_copy_words: from https://github.com/new-coke/rez-decomp (src/cri/adxb.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00151408_x00151408(short *dst, short *src, int n)
{
    while (n > 0) {
        *dst++ = *src++;
        n--;
    }
}
typedef signed int Sint32_x00151438;
extern int* sceCdCallback_x00151438(void (*func)(int)) __asm__("sceCdCallback");
void memcpy2_x00151438(void* dest, const void* src, Sint32_x00151438 count) __asm__("func_00151408");
void func_00151438_x00151438(void* arg0, Sint32_x00151438 arg1, Sint32_x00151438 arg2, Sint32_x00151438 arg3) __asm__("func_00151438");
/* ADXB_CopyExtraBufSte: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_bsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00151438_x00151438(void* arg0, Sint32_x00151438 arg1, Sint32_x00151438 arg2, Sint32_x00151438 arg3) {
    memcpy2_x00151438(arg0, arg0 + (arg1 * 2), arg3);
    memcpy2_x00151438(arg0 + (arg2 * 2), arg0 + ((arg2 + arg1) * 2), arg3);
}
void adxb_copy_words_x001514A8(short *dst, short *src, int n) __asm__("func_00151408");
void func_001514A8_x001514A8(short *buf, int ofs, int len, int n) __asm__("func_001514A8");
/* adxb_move_mono: from https://github.com/new-coke/rez-decomp (src/cri/adxb.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001514A8_x001514A8(short *buf, int ofs, int len, int n)
{
    adxb_copy_words_x001514A8(buf, &buf[ofs], n);
}
typedef struct AdxPdObj_x001514C8 {
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
} AdxPdObj_x001514C8;
int ADXPD_GetNumBlk_x001514C8(AdxPdObj_x001514C8 *pd) __asm__("func_00161B80");
typedef struct SfdSj_x001514C8 SfdSj_x001514C8;
typedef struct SfdSjChunk_x001514C8 {
    char *data;
    int len;
} SfdSjChunk_x001514C8;
typedef struct SfdSjVtbl_x001514C8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001514C8 *sj);
    int (*getUuid)(SfdSj_x001514C8 *sj);
    void (*reset)(SfdSj_x001514C8 *sj);
    void (*getChunk)(SfdSj_x001514C8 *sj, int id, int n, SfdSjChunk_x001514C8 *ck);
    void (*ungetChunk)(SfdSj_x001514C8 *sj, int id, SfdSjChunk_x001514C8 *ck);
    void (*putChunk)(SfdSj_x001514C8 *sj, int id, SfdSjChunk_x001514C8 *ck);
    int (*getNumData)(SfdSj_x001514C8 *sj, int id);
} SfdSjVtbl_x001514C8;
struct SfdSj_x001514C8 {
    SfdSjVtbl_x001514C8 *vtbl;
};
typedef struct AdxDecPara_x001514C8 {
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
} AdxDecPara_x001514C8;
struct Pl2Enc_x001514C8;
typedef struct AdxbObj_x001514C8 AdxbObj_x001514C8;
typedef short *(*AdxbGetWrFunc_x001514C8)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x001514C8)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x001514C8 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x001514C8 *xpd;
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
    AdxDecPara_x001514C8 dp;
    AdxbGetWrFunc_x001514C8 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x001514C8 addwrfunc;
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
    struct Pl2Enc_x001514C8 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void (*adxb_pl2_exec_func_x001514C8)(AdxbObj_x001514C8 *obj, int v, short *src, short *dst) __asm__("adxb_pl2_exec_func");
extern void (*adxb_pl2_reset_func_x001514C8)(AdxbObj_x001514C8 *obj) __asm__("adxb_pl2_reset_func");
extern void ADXB_EntryDecFunc_x001514C8(AdxbObj_x001514C8 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
typedef struct AdxSjdObj_x001514C8 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x001514C8 *adxb;
    SfdSj_x001514C8 *sji;
    SfdSj_x001514C8 *sjo[2];
    SfdSjChunk_x001514C8 cki;
    SfdSjChunk_x001514C8 cko[2];
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
} AdxSjdObj_x001514C8;
extern void ADXSJD_EntryFltFunc_x001514C8(AdxSjdObj_x001514C8 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x001514C8(AdxSjdObj_x001514C8 *sjd, void (*func)(void *obj), void *obj) __asm__("ADXSJD_EntryTrapFunc");
typedef void (*CvFsErrFn_x001514C8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x001514C8)(CvFsErrFn_x001514C8 func, void *obj);
typedef int (*CvFsPathFn_x001514C8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x001514C8)(void);
typedef int (*CvFsOpenFn_x001514C8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x001514C8)(int fd);
typedef int (*CvFsFdIntFn_x001514C8)(int fd);
typedef int (*CvFsSeekFn_x001514C8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x001514C8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x001514C8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x001514C8)(void);
typedef int (*CvFsLoadDirInfoFn_x001514C8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x001514C8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x001514C8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x001514C8 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x001514C8 entry_err_func;
    CvFsPathFn_x001514C8 get_file_size;
    CvFsGetFreeSizeFn_x001514C8 get_free_size;
    CvFsOpenFn_x001514C8 open;
    CvFsFdFn_x001514C8 close;
    CvFsSeekFn_x001514C8 seek;
    CvFsFdIntFn_x001514C8 tell;
    CvFsXferFn_x001514C8 req_rd;
    CvFsXferFn_x001514C8 req_wr;
    CvFsFdFn_x001514C8 stop_tr;
    CvFsFdIntFn_x001514C8 get_stat;
    CvFsFdIntFn_x001514C8 get_sct_len;
    CvFsSetSctLenFn_x001514C8 set_sct_len;
    CvFsFdIntFn_x001514C8 get_num_tr;
    CvFsPathFn_x001514C8 change_dir;
    CvFsPathFn_x001514C8 is_exist_file;
    CvFsGetNumFilesFn_x001514C8 get_num_files;
    CvFsLoadDirInfoFn_x001514C8 load_dir_info;
    CvFsFdIntFn_x001514C8 get_max_byte_rate;
    CvFsPathFn_x001514C8 make_dir;
    CvFsPathFn_x001514C8 remove_dir;
    CvFsPathFn_x001514C8 delete_file;
    CvFsGetFileSizeExFn_x001514C8 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x001514C8 opt_fn2;
} CvFsVtbl_x001514C8;
typedef struct CvFsHandle_x001514C8 {
    CvFsVtbl_x001514C8 *vtbl;
    int fd;
} CvFsHandle_x001514C8;
extern CvFsVtbl_x001514C8 *addDevice_x001514C8(char *devname, CvFsVtbl_x001514C8 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x001514C8 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x001514C8 *sj;
    CvFsHandle_x001514C8 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x001514C8 rdck;
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
} AdxStmObj_x001514C8;
extern void ADXSTM_EntryEosFunc_x001514C8(AdxStmObj_x001514C8 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
extern void (*adxb_pl2_exec_func_x001514C8)(AdxbObj_x001514C8 *obj, int v, short *src, short *dst) __asm__("adxb_pl2_exec_func");
extern void (*adxb_pl2_reset_func_x001514C8)(AdxbObj_x001514C8 *obj) __asm__("adxb_pl2_reset_func");
void ADXB_EntryDecFunc_x001514C8(AdxbObj_x001514C8 *obj, void (*cb)(void *context, int count, int bytes), void *context) __asm__("ADXB_EntryDecFunc");
void ADXB_CopyExtraBufSte_x001514C8(short *buffer, int offset, int second, int count) __asm__("func_00151438");
void ADXB_CopyExtraBufMono_x001514C8(short *buffer, int offset, int unused, int count) __asm__("func_001514A8");
void ADXB_CopyExtraBufSte_x001514C8(short *buffer, int offset, int second, int count) __attribute__((weak, section(".b3stub")));
void ADXB_CopyExtraBufSte_x001514C8(short *buffer, int offset, int second, int count) {}
void ADXB_CopyExtraBufMono_x001514C8(short *buffer, int offset, int unused, int count) __attribute__((weak, section(".b3stub")));
void ADXB_CopyExtraBufMono_x001514C8(short *buffer, int offset, int unused, int count) {}
void func_001514C8_x001514C8(AdxbObj_x001514C8 *d) __asm__("func_001514C8");
/* ADXB_EndDecode: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxb.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001514C8_x001514C8(AdxbObj_x001514C8 *d)
{
    AdxDecPara_x001514C8 *b = &d->dp;
    int blk;
    int nch;
    int t;
    int r;
    int q;
    int done;
    int n;
    int pos;
    int size;
    int a;
    int blklen;
    short *dst;
    blk = b->blknsmpl;
    t = b->lp_nsmpl + blk - 1;
    size = d->pcmbsize;
    dst = b->pcmbuf;
    a = d->pcmbdist;
    blklen = b->blksize;
    q = t / blk;
    r = blk - t % blk - 1;
    pos = b->wpos;
    done = ADXPD_GetNumBlk_x001514C8(d->xpd);
    nch = b->nch;
    n = done * blk / nch;
    n = (done < q * nch) ? n : n - r;
    pos += n;
    d->ndeclen = done * blklen;
    d->ndecsmpl = n;
    if (pos >= size) {
        pos -= size;
        if (b->nch == 2 || d->pl2 != 0) {
            ADXB_CopyExtraBufSte_x001514C8(dst, size, a, pos);
        } else {
            ADXB_CopyExtraBufMono_x001514C8(dst, size, a, pos);
        }
    }
}
typedef struct { char pad[0x10]; int nblk; char pad14[0x20 - 0x14]; short *in; short *out; } Pd_1650_x00151650_;
typedef struct { int pad0; int stat; Pd_1650_x00151650_ *pd; char padC[0x68 - 0xC]; int f68, f6C, f70; int pad74; int (*cb1)(void *, int *, int *, int *); void *cb1obj; void (*cb2)(void *, int, int); void *cb2obj; char pad88[0x90 - 0x88]; int f90, f94; char pad98[0xE8 - 0x98]; int fE8; } Obj_1650_x00151650_;
extern void (*D_00401094_x00151650_)(Obj_1650_x00151650_ *, int, short *, short *) __asm__("D_00401094");
int func_00161A88_x00151650_(Pd_1650_x00151650_ *) __asm__("func_00161A88");
void func_00161B98_x00151650_(Pd_1650_x00151650_ *) __asm__("func_00161B98");
void func_00161B68_x00151650_(Pd_1650_x00151650_ *) __asm__("func_00161B68");
void func_00151300_x00151650_(Obj_1650_x00151650_ *) __asm__("func_00151300");
void func_001514C8_x00151650_(Obj_1650_x00151650_ *) __asm__("func_001514C8");
void func_00151650_x00151650_(Obj_1650_x00151650_ *o) __asm__("func_00151650");
void func_00151650_x00151650_(Obj_1650_x00151650_ *o)
{
    Pd_1650_x00151650_ *pd;
    int i;

    if (o->stat == 1) {
        if (func_00161A88_x00151650_(o->pd) == 0) {
            o->cb1(o->cb1obj, &o->f68, &o->f6C, &o->f70);
            func_00151300_x00151650_(o);
            o->stat = 2;
        }
    }
    if (o->stat == 2) {
        func_00161B98_x00151650_(o->pd);
        if (func_00161A88_x00151650_(o->pd) == 3) {
            if (o->fE8 != 0) {
                pd = o->pd;
                for (i = 0; i < pd->nblk * 32; i++) {
                    D_00401094_x00151650_(o, pd->in[i], &pd->in[i], &pd->out[i]);
                }
            }
            func_001514C8_x00151650_(o);
            func_00161B68_x00151650_(o->pd);
            o->cb2(o->cb2obj, o->f94, o->f90);
            o->stat = 3;
        }
    }
}
typedef int s32_x00151790;
typedef s32_x00151790 ptrdiff_t_x00151790;
typedef char Sint8_x00151790;
typedef signed short Sint16_x00151790;
typedef signed int Sint32_x00151790;
extern int* sceCdCallback_x00151790(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
               Sint16_x00151790 unk0;
               Sint16_x00151790 unk2;
               Sint16_x00151790 unk4;
               Sint16_x00151790 unk6;
} ADXPD_OBJ_SUB_x00151790;
typedef struct {
               Sint32_x00151790 used;
               Sint32_x00151790 unk4;
               Sint32_x00151790 mode;
               Sint32_x00151790 stat;
               Sint32_x00151790 num_blk;
               Sint32_x00151790 unk14;
               Sint32_x00151790 unk18;
               Sint32_x00151790 unk1C;
               Sint32_x00151790 unk20;
               Sint32_x00151790 unk24;
               ADXPD_OBJ_SUB_x00151790 unk28;
               Sint16_x00151790 unk30;
               Sint16_x00151790 unk32;
               Sint16_x00151790 unk34;
               Sint16_x00151790 unk36;
               Sint16_x00151790 unk38;
               Sint16_x00151790 unk3A;
} ADXPD_OBJ_x00151790;
typedef ADXPD_OBJ_x00151790* ADXPD_x00151790;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x00151790;
typedef struct {
               Sint32_x00151790 unk0;
               Sint32_x00151790 unk4;
               Sint32_x00151790 unk8;
               Sint32_x00151790 unkC;
               Sint32_x00151790 unk10;
               void* unk14;
               Sint32_x00151790 unk18;
               Sint32_x00151790 unk1C;
               Sint32_x00151790 unk20;
               Sint32_x00151790 unk24;
               Sint32_x00151790 unk28;
} ADXB_UNK_x00151790;
typedef struct {
               Sint16_x00151790 unk0;
               Sint16_x00151790 unk2;
               Sint32_x00151790 stat;
               ADXPD_x00151790 adxpd;
               Sint8_x00151790 encoding_type;
               Sint8_x00151790 sample_bitdepth;
               Sint8_x00151790 channel_count;
               Sint8_x00151790 block_size;
               Sint32_x00151790 samples_per_block;
               Sint32_x00151790 sample_rate;
               Sint32_x00151790 total_samples;
               Sint16_x00151790 unk1C;
               char pad1E[2];
               Sint32_x00151790 unk20;
               Sint16_x00151790 unk24;
               Sint16_x00151790 unk26;
               Sint32_x00151790 unk28;
               Sint32_x00151790 unk2C;
               Sint32_x00151790 unk30;
               Sint32_x00151790 unk34;
               Sint32_x00151790 unk38;
               void* unk3C;
               Sint32_x00151790 unk40;
               Sint32_x00151790 unk44;
               ADXB_UNK_x00151790 unk48;
               Sint32_x00151790 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x00151790*, Sint32_x00151790*, Sint32_x00151790*);
               void* object;
               void (*add_wr)(void*, Sint32_x00151790, Sint32_x00151790);
               Sint32_x00151790 unk84;
               Sint32_x00151790 unk88;
               Sint32_x00151790 unk8C;
               Sint32_x00151790 dec_num_sample;
               Sint32_x00151790 dec_data_len;
               Sint16_x00151790 format;
               Sint16_x00151790 unk9A;
               Sint16_x00151790 unk9C;
               Sint16_x00151790 unk9E;
               Sint16_x00151790 unkA0;
               char padA2[0xE];
               Sint32_x00151790 unkB0;
               Sint32_x00151790 ahx_dec_samples;
               Sint32_x00151790 ahx_dec_frames;
               Sint32_x00151790 unkBC;
               Sint32_x00151790 ac3_dec_samples;
               Sint32_x00151790 ac3_dec_frames;
               Sint32_x00151790 unkC8;
               ADX_UNK_x00151790 unkCC;
               Sint16_x00151790 unkDC;
               Sint16_x00151790 unkDE[2];
               char padE2[2];
               Sint32_x00151790 unkE4;
               char padE8[8];
} ADXB_OBJ_x00151790;
typedef ADXB_OBJ_x00151790* ADXB_x00151790;
void ADXB_ExecOneAc3_x00151790(ADXB_x00151790 adxb) __asm__("func_0014ECD0");
void ADXB_ExecOneAhx_x00151790(ADXB_x00151790 adxb) __asm__("func_0014EED0");
void ADXB_ExecOneAiff_x00151790(ADXB_x00151790 adxb) __asm__("func_0014F860");
void ADXB_ExecOneAu_x00151790(ADXB_x00151790 adxb) __asm__("func_001502C8");
extern void ADXB_EntryGetWrFunc_x00151790(ADXB_x00151790 adxb, void* (*get_wr)(void*, ptrdiff_t_x00151790*, Sint32_x00151790*, Sint32_x00151790*), void* object) __asm__("ADXB_EntryGetWrFunc");
void ADXB_ExecOneSpsd_x00151790(ADXB_x00151790 adxb) __asm__("func_00151AB8");
void ADXB_ExecOneWav_x00151790(ADXB_x00151790 adxb) __asm__("func_001524A0");
extern void (*ahxsetextfunc_x00151790)(Sint32_x00151790, Sint16_x00151790*) __asm__("ahxsetextfunc");
void ADXB_EntryGetWrFunc_x00151790(ADXB_x00151790 adxb, void* (*get_wr)(void*, ptrdiff_t_x00151790*, Sint32_x00151790*, Sint32_x00151790*), void* object) __asm__("ADXB_EntryGetWrFunc");
void ADXB_ExecOneAdx_x00151790(ADXB_x00151790 adxb) __asm__("func_00151650");
void func_00151790_x00151790(ADXB_x00151790 adxb) __asm__("func_00151790");
/* ADXB_ExecHndl: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_bsc.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00151790_x00151790(ADXB_x00151790 adxb) {
    if (adxb->format == 0) {
        ADXB_ExecOneAdx_x00151790(adxb);
    } else if (adxb->format == 10) {
        ADXB_ExecOneAhx_x00151790(adxb);
    } else if (adxb->format == 2) {
        ADXB_ExecOneSpsd_x00151790(adxb);
    } else if (adxb->format == 3) {
        ADXB_ExecOneAiff_x00151790(adxb);
    } else if (adxb->format == 4) {
        ADXB_ExecOneAu_x00151790(adxb);
    } else if (adxb->format == 1) {
        ADXB_ExecOneWav_x00151790(adxb);
    } else if (adxb->format == 15) {
        ADXB_ExecOneAc3_x00151790(adxb);
    }
}
s32 func_00151790_x00151840(s16 *) __asm__("func_00151790");
extern s16 D_004010A8_x00151840 __asm__("D_004010A8");
void func_00151840_x00151840(void) __asm__("func_00151840");
void func_00151840_x00151840(void) {
    s16 *var_s0;
    s32 var_s1;

    var_s0 = &D_004010A8_x00151840;
    var_s1 = 0xF;
    do {
        if (*var_s0 == 1) {
            func_00151790_x00151840(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 122;
    } while (var_s1 >= 0);
}
typedef struct AdxbSpsdHeader_x001518A0 {
    char pad0[7];
    unsigned char hdr_units;
    unsigned char codec;
    unsigned char chmask;
    char pad10[2];
    int data_size;
    char pad16[26];
    unsigned short sfreq;
} AdxbSpsdHeader_x001518A0;
int func_001518A0_x001518A0(AdxbSpsdHeader_x001518A0 *hdr, int size, short *hdrlen, signed char *type, signed char *bits,
                     signed char *blklen, signed char *nch, int *sfreq, int *nsmpl, int *blksmpl,
                     short *pcm_fmt) __asm__("func_001518A0");
/* ADX_DecodeInfoSpsd: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxspsd.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001518A0_x001518A0(AdxbSpsdHeader_x001518A0 *hdr, int size, short *hdrlen, signed char *type, signed char *bits,
                     signed char *blklen, signed char *nch, int *sfreq, int *nsmpl, int *blksmpl,
                     short *pcm_fmt)
{
    *hdrlen = hdr->hdr_units << 4;
    *nch = (hdr->chmask & 3) + 1;
    *sfreq = hdr->sfreq;
    switch (hdr->codec) {
    case 0:
        *bits = 16;
        *blklen = *nch * 2;
        *blksmpl = 1;
        *pcm_fmt = 0;
        *nsmpl = hdr->data_size / 2;
        break;
    case 1:
        *bits = 8;
        {
            int ch = *nch;
            *blklen = ch;
        }
        *blksmpl = 1;
        *pcm_fmt = 1;
        *nsmpl = hdr->data_size;
        break;
    case 2:
    case 3:
        *bits = 4;
        {
            int ch = *nch;
            *blklen = ch;
        }
        *blksmpl = 2;
        *pcm_fmt = 2;
        *nsmpl = hdr->data_size * 2;
        break;
    }
    *blklen = 2;
    *blksmpl = 1;
    *nsmpl = hdr->data_size / 2;
    *bits = 16;
    *type = -1;
    return 0;
}
__asm__("# rebind func_001518A0 0x001518A0");

typedef unsigned char Uint8_x001519C0;
typedef signed char Sint8_x001519C0;
typedef signed short Sint16_x001519C0;
typedef signed int Sint32_x001519C0;
typedef struct ADXPD_OBJ *ADXPD_x001519C0;
typedef struct {
        Sint16_x001519C0 used;
        Sint16_x001519C0 x02;
        Sint32_x001519C0 stat;
        ADXPD_x001519C0 pd;
        Sint8_x001519C0 x0c;
        Sint8_x001519C0 bps;
        Sint8_x001519C0 nch;
        Sint8_x001519C0 x0f;
        Sint32_x001519C0 fmt;
        Sint32_x001519C0 sfreq;
        Sint32_x001519C0 total_nsmpl;
        Sint16_x001519C0 x1c;
        Uint8_x001519C0 pad1e[2];
        Sint32_x001519C0 x20;
        Sint16_x001519C0 x24;
        Sint16_x001519C0 x26;
        Sint32_x001519C0 x28;
        Sint32_x001519C0 x2c;
        Sint32_x001519C0 x30;
        Sint32_x001519C0 x34;
        Sint32_x001519C0 x38;
        Sint32_x001519C0 x3c;
        Sint32_x001519C0 x40;
        Sint32_x001519C0 x44;
        Sint16_x001519C0 *inbuf;
        Sint32_x001519C0 inbuf_nsmpl;
        Sint32_x001519C0 out_nch;
        Sint32_x001519C0 x54;
        Sint32_x001519C0 out_fmt;
        Sint16_x001519C0 *pcmbuf;
        Sint32_x001519C0 pcmbuf_nsmpl;
        Sint32_x001519C0 pcmbuf_chofst;
        Sint32_x001519C0 wr_pos;
        Sint32_x001519C0 wr_nsmpl;
        Sint32_x001519C0 wr_x70;
        Sint32_x001519C0 x74;
        void (*getwr_func)(void *obj, Sint32_x001519C0 *pos, Sint32_x001519C0 *nsmpl, Sint32_x001519C0 *x70);
        void *getwr_obj;
        void (*addwr_func)(void *obj, Sint32_x001519C0 nbyte, Sint32_x001519C0 nsmpl);
        void *addwr_obj;
        Sint32_x001519C0 x88;
        Sint32_x001519C0 x8c;
        Sint32_x001519C0 dec_nsmpl;
        Sint32_x001519C0 dec_nbyte;
        Sint16_x001519C0 x98;
        Sint16_x001519C0 x9a;
        Sint16_x001519C0 x9c;
        Uint8_x001519C0 pad9e[2];
        Sint16_x001519C0 key[3];
        Sint16_x001519C0 extprm[3];
        Sint16_x001519C0 dly[2][2];
        void *ahx;
        Sint32_x001519C0 nsmpl;
        Sint32_x001519C0 nsmpl96;
        Uint8_x001519C0 padc0[0xCC - 0xC0];
        Sint32_x001519C0 ainf_len;
        Uint8_x001519C0 ainf[16];
        Sint16_x001519C0 def_outvol;
        Sint16_x001519C0 def_pan[2];
        Uint8_x001519C0 padda[2];
        void *xdc;
        Uint8_x001519C0 pade0[8];
        Sint32_x001519C0 cb_nbyte;
        Sint32_x001519C0 xec;
        void (*cb_func)(void *obj, Sint32_x001519C0 nbyte, Sint32_x001519C0 nsmpl);
        void *cb_obj;
} ADXB_OBJ_x001519C0;
typedef ADXB_OBJ_x001519C0 *ADXB_x001519C0;
Sint32_x001519C0 ADX_DecodeInfoSpsd_x001519C0(Uint8_x001519C0 *buf, Sint32_x001519C0 bsize, Sint16_x001519C0 *hdrlen, Sint8_x001519C0 *x0c, Sint8_x001519C0 *bps, Sint8_x001519C0 *x0f, Sint8_x001519C0 *nch, Sint32_x001519C0 *sfreq, Sint32_x001519C0 *nsmpl, Sint32_x001519C0 *fmt, Sint16_x001519C0 *x9c) __asm__("func_001518A0");
Sint32_x001519C0 ADX_DecodeInfoSpsd_x001519C0(Uint8_x001519C0 *buf, Sint32_x001519C0 bsize, Sint16_x001519C0 *hdrlen, Sint8_x001519C0 *x0c, Sint8_x001519C0 *bps, Sint8_x001519C0 *x0f,
                          Sint8_x001519C0 *nch, Sint32_x001519C0 *sfreq, Sint32_x001519C0 *nsmpl, Sint32_x001519C0 *fmt, Sint16_x001519C0 *x9c) __asm__("func_001518A0");
Sint32_x001519C0 func_001519C0_x001519C0(ADXB_x001519C0 adxb, void *buf, Sint32_x001519C0 bsize) __asm__("func_001519C0");
/* ADXB_DecodeHeaderSpsd: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/adx_bsps.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x001519C0 func_001519C0_x001519C0(ADXB_x001519C0 adxb, void *buf, Sint32_x001519C0 bsize)
{
        Sint16_x001519C0 hdrlen;
        adxb->x02 = 1;
        if (ADX_DecodeInfoSpsd_x001519C0(buf, bsize, &hdrlen, &adxb->x0c, &adxb->bps, &adxb->x0f, &adxb->nch,
                               &adxb->sfreq, &adxb->total_nsmpl, &adxb->fmt, &adxb->x9c) < 0) {
                return 0;
        }
        adxb->x1c = 0;
        adxb->x26 = 0;
        adxb->x24 = 0;
        adxb->x34 = 0;
        adxb->x30 = 0;
        adxb->x2c = 0;
        adxb->x28 = 0;
        adxb->x20 = 0;
        adxb->out_nch = adxb->nch;
        adxb->x54 = adxb->x0f;
        adxb->out_fmt = adxb->fmt;
        adxb->pcmbuf = (Sint16_x001519C0 *)adxb->x3c;
        adxb->pcmbuf_nsmpl = adxb->x40;
        adxb->pcmbuf_chofst = adxb->x44;
        adxb->x8c = 0;
        adxb->x88 = 0;
        adxb->x98 = 2;
        return hdrlen;
}
typedef struct { short *in; int f4; char pad8[0x14 - 8]; short *out; int f18; int f1C; int f20; int f24; } Inf_1AB8_x00151AB8;
typedef struct { int pad0; int stat; void *pd; char padC[0xE - 0xC]; signed char nch; char padF[0x48 - 0xF]; Inf_1AB8_x00151AB8 inf; char pad70[0x68 - 0x70 + 0x8]; int f70; int pad74; int (*cb1)(void *, int *, int *, int *); void *cb1obj; void (*cb2)(void *, int, int); void *cb2obj; char pad88[0x90 - 0x88]; int f90, f94; } Obj_1AB8_x00151AB8;
int func_00161A88_x00151AB8(void *) __asm__("func_00161A88");
void func_00151AB8_x00151AB8(Obj_1AB8_x00151AB8 *o) __asm__("func_00151AB8");
void func_00151AB8_x00151AB8(Obj_1AB8_x00151AB8 *o)
{
    Inf_1AB8_x00151AB8 *inf = &o->inf;
    short *in = inf->in;
    short *out;
    short *out2;
    short *p;
    int n;
    int i;

    if (o->stat == 1) {
        if (func_00161A88_x00151AB8(o->pd) == 0) {
            o->cb1(o->cb1obj, (int *)((char *)o + 0x68), (int *)((char *)o + 0x6C), &o->f70);
            n = inf->f18 - inf->f20;
            if (inf->f24 < n) {
                n = inf->f24;
            }
            if (inf->f4 < n) {
                n = inf->f4;
            }
            out = inf->out + inf->f20;
            if (o->nch == 2) {
                out2 = inf->out + (inf->f1C + inf->f20);
                for (i = 0; i < n; i++) {
                    out[i] = in[i * 2];
                    out2[i] = in[i * 2 + 1];
                }
            } else {
                for (i = 0; i < n; i++) {
                    out[i] = in[i];
                }
            }
            o->stat = 2;
            o->f90 = n;
            o->f94 = n * o->nch * 2;
        }
    }
    if (o->stat == 2) {
        o->cb2(o->cb2obj, o->f94, o->f90);
        o->stat = 3;
    }
}
s32 memcmp_x00151C30() __asm__("memcmp");
extern s32 D_004604A8_x00151C30 __asm__("D_004604A8");
s32 func_00151C30_x00151C30(s32 arg0) __asm__("func_00151C30");
s32 func_00151C30_x00151C30(s32 arg0) {
    return memcmp_x00151C30(arg0, &D_004604A8_x00151C30, 4) == 0;
}
typedef unsigned int size_t_x00151C58;
int memcmp_x00151C58(const void *, const void *, size_t_x00151C58) __asm__("func_001256A8");
enum AdxbPcmFmt_x00151C58 {
    ADXB_PCM_16_x00151C58 = 0,
    ADXB_PCM_8_x00151C58 = 1,
    ADXB_PCM_4_x00151C58 = 2
};
extern char *wav_fmt_chunk_x00151C58 __asm__("D_00401FE8");
extern char *wav_data_chunk_x00151C58 __asm__("D_00401FEC");
typedef struct tWAVEFORMATEX_x00151C58 {
    short wFormatTag;
    short nChannels;
    int nSamplesPerSec;
    int nAvgBytesPerSec;
    short nBlockAlign;
    short wBitsPerSample;
    short cbSize;
} WAVEFORMATEX_x00151C58;
int func_00151C58_x00151C58(unsigned char *buf, int len, short *hdrlen, signed char *hdrtype, signed char *fmtbps,
                    signed char *blklen, signed char *nch, int *sfreq, int *nsmpl, int *blksmpl, short *pcmfmt) __asm__("func_00151C58");
/* ADX_DecodeInfoWav: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxwav.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00151C58_x00151C58(unsigned char *buf, int len, short *hdrlen, signed char *hdrtype, signed char *fmtbps,
                    signed char *blklen, signed char *nch, int *sfreq, int *nsmpl, int *blksmpl, short *pcmfmt)
{
    int i;
    WAVEFORMATEX_x00151C58 *fmt;
    int size;
    for (i = 0; i < len; i++) {
        if (memcmp_x00151C58(buf + i, wav_fmt_chunk_x00151C58, 4) == 0) {
            break;
        }
    }
    if (i == len) {
        return -1;
    }
    if (i & 3) {
        return -1;
    }
    fmt = (WAVEFORMATEX_x00151C58 *)(buf + i + 8);
    if (fmt->wFormatTag >= 2) {
        return -1;
    }
    for (i = 0; i < len; i++) {
        if (memcmp_x00151C58(buf + i, wav_data_chunk_x00151C58, 4) == 0) {
            break;
        }
    }
    if (i == len) {
        return -1;
    }
    *hdrlen = i + 8;
    size = *(int *)(buf + i + 4);
    *hdrtype = -1;
    *sfreq = fmt->nSamplesPerSec;
    *nch = fmt->nChannels;
    *fmtbps = fmt->wBitsPerSample;
    *blklen = fmt->nBlockAlign;
    *nsmpl = size / *blklen;
    *blksmpl = 1;
    if (*fmtbps == 16) {
        *pcmfmt = ADXB_PCM_16_x00151C58;
    } else if (*fmtbps == 8) {
        *pcmfmt = ADXB_PCM_8_x00151C58;
    } else if (*fmtbps == 4) {
        *blklen = *nch * 2;
        *blksmpl = 4;
        *nsmpl = size / 2 / *nch;
        *fmtbps = 16;
        *pcmfmt = ADXB_PCM_4_x00151C58;
    }
    if (*fmtbps == 0) {
        return -1;
    }
    if (*blklen == 0) {
        return -1;
    }
    if (*nch != 1 && *nch != 2) {
        return -1;
    }
    if (*sfreq == 0) {
        return -1;
    }
    return 0;
}
typedef unsigned char Uint8_x00151E88;
typedef signed char Sint8_x00151E88;
typedef signed short Sint16_x00151E88;
typedef signed int Sint32_x00151E88;
typedef struct ADXPD_OBJ *ADXPD_x00151E88;
typedef struct {
        Sint16_x00151E88 used;
        Sint16_x00151E88 x02;
        Sint32_x00151E88 stat;
        ADXPD_x00151E88 pd;
        Sint8_x00151E88 x0c;
        Sint8_x00151E88 bps;
        Sint8_x00151E88 nch;
        Sint8_x00151E88 x0f;
        Sint32_x00151E88 fmt;
        Sint32_x00151E88 sfreq;
        Sint32_x00151E88 total_nsmpl;
        Sint16_x00151E88 x1c;
        Uint8_x00151E88 pad1e[2];
        Sint32_x00151E88 x20;
        Sint16_x00151E88 x24;
        Sint16_x00151E88 x26;
        Sint32_x00151E88 x28;
        Sint32_x00151E88 x2c;
        Sint32_x00151E88 x30;
        Sint32_x00151E88 x34;
        Sint32_x00151E88 x38;
        Sint32_x00151E88 x3c;
        Sint32_x00151E88 x40;
        Sint32_x00151E88 x44;
        Sint16_x00151E88 *inbuf;
        Sint32_x00151E88 inbuf_nsmpl;
        Sint32_x00151E88 out_nch;
        Sint32_x00151E88 x54;
        Sint32_x00151E88 out_fmt;
        Sint16_x00151E88 *pcmbuf;
        Sint32_x00151E88 pcmbuf_nsmpl;
        Sint32_x00151E88 pcmbuf_chofst;
        Sint32_x00151E88 wr_pos;
        Sint32_x00151E88 wr_nsmpl;
        Sint32_x00151E88 wr_x70;
        Sint32_x00151E88 x74;
        void (*getwr_func)(void *obj, Sint32_x00151E88 *pos, Sint32_x00151E88 *nsmpl, Sint32_x00151E88 *x70);
        void *getwr_obj;
        void (*addwr_func)(void *obj, Sint32_x00151E88 nbyte, Sint32_x00151E88 nsmpl);
        void *addwr_obj;
        Sint32_x00151E88 x88;
        Sint32_x00151E88 x8c;
        Sint32_x00151E88 dec_nsmpl;
        Sint32_x00151E88 dec_nbyte;
        Sint16_x00151E88 x98;
        Sint16_x00151E88 x9a;
        Sint16_x00151E88 x9c;
        Uint8_x00151E88 pad9e[2];
        Sint16_x00151E88 key[3];
        Sint16_x00151E88 extprm[3];
        Sint16_x00151E88 dly[2][2];
        void *ahx;
        Sint32_x00151E88 nsmpl;
        Sint32_x00151E88 nsmpl96;
        Uint8_x00151E88 padc0[0xCC - 0xC0];
        Sint32_x00151E88 ainf_len;
        Uint8_x00151E88 ainf[16];
        Sint16_x00151E88 def_outvol;
        Sint16_x00151E88 def_pan[2];
        Uint8_x00151E88 padda[2];
        void *xdc;
        Uint8_x00151E88 pade0[8];
        Sint32_x00151E88 cb_nbyte;
        Sint32_x00151E88 xec;
        void (*cb_func)(void *obj, Sint32_x00151E88 nbyte, Sint32_x00151E88 nsmpl);
        void *cb_obj;
} ADXB_OBJ_x00151E88;
typedef ADXB_OBJ_x00151E88 *ADXB_x00151E88;
Sint32_x00151E88 ADX_DecodeInfoWav_x00151E88(Uint8_x00151E88 *buf, Sint32_x00151E88 bsize, Sint16_x00151E88 *hdrlen, Sint8_x00151E88 *x0c, Sint8_x00151E88 *bps, Sint8_x00151E88 *x0f, Sint8_x00151E88 *nch, Sint32_x00151E88 *sfreq, Sint32_x00151E88 *nsmpl, Sint32_x00151E88 *fmt, Sint16_x00151E88 *x9c) __asm__("func_00151C58");
Sint32_x00151E88 ADX_DecodeInfoWav_x00151E88(Uint8_x00151E88 *buf, Sint32_x00151E88 bsize, Sint16_x00151E88 *hdrlen, Sint8_x00151E88 *x0c, Sint8_x00151E88 *bps, Sint8_x00151E88 *x0f,
                         Sint8_x00151E88 *nch, Sint32_x00151E88 *sfreq, Sint32_x00151E88 *nsmpl, Sint32_x00151E88 *fmt, Sint16_x00151E88 *x9c) __asm__("func_00151C58");
Sint32_x00151E88 func_00151E88_x00151E88(ADXB_x00151E88 adxb, void *buf, Sint32_x00151E88 bsize) __asm__("func_00151E88");
/* ADXB_DecodeHeaderWav: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/adx_bwav.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
Sint32_x00151E88 func_00151E88_x00151E88(ADXB_x00151E88 adxb, void *buf, Sint32_x00151E88 bsize)
{
        Sint16_x00151E88 hdrlen;
        adxb->x02 = 1;
        if (ADX_DecodeInfoWav_x00151E88(buf, bsize, &hdrlen, &adxb->x0c, &adxb->bps, &adxb->x0f, &adxb->nch,
                              &adxb->sfreq, &adxb->total_nsmpl, &adxb->fmt, &adxb->x9c) < 0) {
                return 0;
        }
        adxb->x1c = 0;
        adxb->x26 = 0;
        adxb->x24 = 0;
        adxb->x34 = 0;
        adxb->x30 = 0;
        adxb->x2c = 0;
        adxb->x28 = 0;
        adxb->x20 = 0;
        adxb->out_nch = adxb->nch;
        adxb->x54 = adxb->x0f;
        adxb->out_fmt = adxb->fmt;
        adxb->pcmbuf = (Sint16_x00151E88 *)adxb->x3c;
        adxb->pcmbuf_nsmpl = adxb->x40;
        adxb->pcmbuf_chofst = adxb->x44;
        adxb->x8c = 0;
        adxb->x88 = 0;
        adxb->x98 = 1;
        return hdrlen;
}
typedef struct { short *in; int f4; char pad8[0x14 - 8]; short *out; int f18; int f1C; int f20; int f24; } Inf_1F88_x00151F88;
typedef struct { int pad0; int stat; void *pd; char padC[0xE - 0xC]; signed char nch; char padF[0x48 - 0xF]; Inf_1F88_x00151F88 inf; char pad70[0x68 - 0x70 + 0x8]; int f70; int pad74; int (*cb1)(void *, int *, int *, int *); void *cb1obj; void (*cb2)(void *, int, int); void *cb2obj; char pad88[0x90 - 0x88]; int f90, f94; } Obj_1F88_x00151F88;
int func_00161A88_x00151F88(void *) __asm__("func_00161A88");
void func_00151F88_x00151F88(Obj_1F88_x00151F88 *o) __asm__("func_00151F88");
void func_00151F88_x00151F88(Obj_1F88_x00151F88 *o)
{
    Inf_1F88_x00151F88 *inf = &o->inf;
    short *in = inf->in;
    short *out;
    short *out2;
    short *p;
    int n;
    int i;

    if (o->stat == 1) {
        if (func_00161A88_x00151F88(o->pd) == 0) {
            o->cb1(o->cb1obj, (int *)((char *)o + 0x68), (int *)((char *)o + 0x6C), &o->f70);
            n = inf->f18 - inf->f20;
            if (inf->f24 < n) {
                n = inf->f24;
            }
            if (inf->f4 < n) {
                n = inf->f4;
            }
            out = inf->out + inf->f20;
            if (o->nch == 2) {
                out2 = inf->out + (inf->f1C + inf->f20);
                for (i = 0; i < n; i++) {
                    out[i] = in[i * 2];
                    out2[i] = in[i * 2 + 1];
                }
            } else {
                for (i = 0; i < n; i++) {
                    out[i] = in[i];
                }
            }
            o->stat = 2;
            o->f90 = n;
            o->f94 = n * o->nch * 2;
        }
    }
    if (o->stat == 2) {
        o->cb2(o->cb2obj, o->f94, o->f90);
        o->stat = 3;
    }
}
typedef signed char Sint8_x00152100;
typedef unsigned char Uint8_x00152100;
typedef short Sint16_x00152100;
typedef int Sint32_x00152100;
typedef void *ADXPD_x00152100;
typedef void *AHXSJD_x00152100;
typedef struct _adx_dec_para_x00152100 {
    Sint8_x00152100 *ibuf;
    Sint32_x00152100 niblk;
    Sint32_x00152100 nch;
    Sint32_x00152100 blksize;
    Sint32_x00152100 blknsmpl;
    Sint8_x00152100 *pcmbuf;
    Sint32_x00152100 pcmbsize;
    Sint32_x00152100 pcmbdist;
    Sint32_x00152100 wpos;
    Sint32_x00152100 nroom;
    Sint32_x00152100 lp_nsmpl;
    Sint32_x00152100 ndecsmpl;
} AdxDecPara_x00152100;
typedef struct _adx_intbuf_x00152100 {
    Sint16_x00152100 used;
    Sint16_x00152100 hdcdflag;
    Sint32_x00152100 stat;
    ADXPD_x00152100 xpd;
    Sint8_x00152100 code;
    Sint8_x00152100 bps;
    Sint8_x00152100 nch;
    Sint8_x00152100 blklen;
    Sint32_x00152100 blknsmpl;
    Sint32_x00152100 sfreq;
    Sint32_x00152100 total_nsmpl;
    Sint16_x00152100 cof;
    Sint16_x00152100 rsv1;
    Sint32_x00152100 lp_ins_nsmpl;
    Sint16_x00152100 nloop;
    Sint16_x00152100 lp_type;
    Sint32_x00152100 lp_spos;
    Sint32_x00152100 lp_sofst;
    Sint32_x00152100 lp_epos;
    Sint32_x00152100 lp_eofst;
    Sint32_x00152100 maxnch;
    Sint16_x00152100 *pcmbuf;
    Sint32_x00152100 pcmbsize;
    Sint32_x00152100 pcmbdist;
    AdxDecPara_x00152100 dp;
    Sint32_x00152100 (*getwrfunc)(void *, Sint32_x00152100 *, Sint32_x00152100 *, Sint32_x00152100 *);
    void *getwrobj;
    void (*addwrfunc)(void *, Sint32_x00152100, Sint32_x00152100);
    void *addwrobj;
    Sint32_x00152100 total_ndecsmpl;
    Sint32_x00152100 curwpos;
    Sint32_x00152100 ndecsmpl;
    Sint32_x00152100 ndeclen;
    Sint16_x00152100 fmttype;
    Sint16_x00152100 cdctype;
    Sint16_x00152100 k0;
    Sint16_x00152100 km;
    Sint16_x00152100 ka;
    AHXSJD_x00152100 sjdh;
    Sint32_x00152100 ahxdecsmpl;
    Sint32_x00152100 ahxsvrfreq;
} ADX_BASIC_x00152100, *ADXB_x00152100;
extern Sint32_x00152100 Obj33F8_GetWord_C_FA68_x00152100(ADXPD_x00152100 xpd) __asm__("func_00161A88");
void func_00152100_x00152100(ADXB_x00152100 adxb) __asm__("func_00152100");
/* func_0033E220: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0033e220.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00152100_x00152100(ADXB_x00152100 adxb)
{
    AdxDecPara_x00152100 *dp;
    Sint16_x00152100 *pcmbuf_l;
    Sint16_x00152100 *pcmbuf_r;
    Uint8_x00152100 *ibuf;
    Sint32_x00152100 ndata;
    Sint32_x00152100 i;
    dp = &adxb->dp;
    ibuf = (Uint8_x00152100 *)dp->ibuf;
    if (adxb->stat == 1) {
        if (Obj33F8_GetWord_C_FA68_x00152100(adxb->xpd) == 0) {
            adxb->getwrfunc(adxb->getwrobj, &dp->wpos, &dp->nroom, &dp->lp_nsmpl);
            ndata = dp->pcmbsize - dp->wpos;
            if (dp->nroom < ndata) ndata = dp->nroom;
            if (dp->niblk < ndata) ndata = dp->niblk;
            pcmbuf_l = (Sint16_x00152100 *)dp->pcmbuf + dp->wpos;
            if (adxb->nch == 2) {
                pcmbuf_r = (Sint16_x00152100 *)dp->pcmbuf + (dp->pcmbdist + dp->wpos);
                for (i = 0; i < ndata; i++) {
                    pcmbuf_l[i] = (ibuf[i * 2] + 0xff80) << 8;
                    pcmbuf_r[i] = (ibuf[i * 2 + 1] + 0xff80) << 8;
                }
            } else {
                for (i = 0; i < ndata; i++) {
                    pcmbuf_l[i] = (ibuf[i] + 0xff80) << 8;
                }
            }
            adxb->stat = 2;
            adxb->ndecsmpl = ndata;
            adxb->ndeclen = ndata * adxb->nch;
        }
    }
    if (adxb->stat == 2) {
        adxb->addwrfunc(adxb->addwrobj, adxb->ndeclen, adxb->ndecsmpl);
        adxb->stat = 3;
    }
}
typedef signed char Sint8_x00152298;
typedef unsigned char Uint8_x00152298;
typedef short Sint16_x00152298;
typedef int Sint32_x00152298;
typedef void *ADXPD_x00152298;
typedef void *AHXSJD_x00152298;
typedef struct _adx_dec_para_x00152298 {
    Sint8_x00152298 *ibuf;
    Sint32_x00152298 niblk;
    Sint32_x00152298 nch;
    Sint32_x00152298 blksize;
    Sint32_x00152298 blknsmpl;
    Sint8_x00152298 *pcmbuf;
    Sint32_x00152298 pcmbsize;
    Sint32_x00152298 pcmbdist;
    Sint32_x00152298 wpos;
    Sint32_x00152298 nroom;
    Sint32_x00152298 lp_nsmpl;
    Sint32_x00152298 ndecsmpl;
} AdxDecPara_x00152298;
typedef struct _adx_intbuf_x00152298 {
    Sint16_x00152298 used;
    Sint16_x00152298 hdcdflag;
    Sint32_x00152298 stat;
    ADXPD_x00152298 xpd;
    Sint8_x00152298 code;
    Sint8_x00152298 bps;
    Sint8_x00152298 nch;
    Sint8_x00152298 blklen;
    Sint32_x00152298 blknsmpl;
    Sint32_x00152298 sfreq;
    Sint32_x00152298 total_nsmpl;
    Sint16_x00152298 cof;
    Sint16_x00152298 rsv1;
    Sint32_x00152298 lp_ins_nsmpl;
    Sint16_x00152298 nloop;
    Sint16_x00152298 lp_type;
    Sint32_x00152298 lp_spos;
    Sint32_x00152298 lp_sofst;
    Sint32_x00152298 lp_epos;
    Sint32_x00152298 lp_eofst;
    Sint32_x00152298 maxnch;
    Sint16_x00152298 *pcmbuf;
    Sint32_x00152298 pcmbsize;
    Sint32_x00152298 pcmbdist;
    AdxDecPara_x00152298 dp;
    Sint32_x00152298 (*getwrfunc)(void *, Sint32_x00152298 *, Sint32_x00152298 *, Sint32_x00152298 *);
    void *getwrobj;
    void (*addwrfunc)(void *, Sint32_x00152298, Sint32_x00152298);
    void *addwrobj;
    Sint32_x00152298 total_ndecsmpl;
    Sint32_x00152298 curwpos;
    Sint32_x00152298 ndecsmpl;
    Sint32_x00152298 ndeclen;
    Sint16_x00152298 fmttype;
    Sint16_x00152298 cdctype;
    Sint16_x00152298 k0;
    Sint16_x00152298 km;
    Sint16_x00152298 ka;
    AHXSJD_x00152298 sjdh;
    Sint32_x00152298 ahxdecsmpl;
    Sint32_x00152298 ahxsvrfreq;
} ADX_BASIC_x00152298, *ADXB_x00152298;
extern Sint32_x00152298 Obj33F8_GetWord_C_FA68_x00152298(ADXPD_x00152298 xpd) __asm__("func_00161A88");
void func_00152298_x00152298(ADXB_x00152298 adxb) __asm__("func_00152298");
/* func_0033E3B8: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0033e3b8.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00152298_x00152298(ADXB_x00152298 adxb)
{
    AdxDecPara_x00152298 *dp;
    Sint16_x00152298 *pcmbuf_l;
    Sint16_x00152298 *pcmbuf_r;
    Uint8_x00152298 *ibuf;
    Sint32_x00152298 ndata;
    Sint32_x00152298 i;
    dp = &adxb->dp;
    ibuf = (Uint8_x00152298 *)dp->ibuf;
    if (adxb->stat == 1) {
        if (Obj33F8_GetWord_C_FA68_x00152298(adxb->xpd) == 0) {
            adxb->getwrfunc(adxb->getwrobj, &dp->wpos, &dp->nroom, &dp->lp_nsmpl);
            ndata = dp->pcmbsize - dp->wpos;
            if (dp->nroom < ndata) ndata = dp->nroom;
            if (dp->niblk < ndata) ndata = dp->niblk;
            pcmbuf_l = (Sint16_x00152298 *)dp->pcmbuf + dp->wpos;
            if (adxb->nch == 2) {
                pcmbuf_r = (Sint16_x00152298 *)dp->pcmbuf + (dp->pcmbdist + dp->wpos);
                for (i = 0; i < ndata; i++) {
                    pcmbuf_l[i] = ibuf[i * 4] | (ibuf[i * 4 + 2] << 8);
                    pcmbuf_r[i] = ibuf[i * 4 + 1] | (ibuf[i * 4 + 3] << 8);
                }
            } else {
                for (i = 0; i < ndata; i++) {
                    pcmbuf_l[i] = ibuf[i * 2] | (ibuf[i * 2 + 1] << 8);
                }
            }
            adxb->stat = 2;
            adxb->ndecsmpl = ndata;
            adxb->ndeclen = ndata * adxb->nch * 2;
        }
    }
    if (adxb->stat == 2) {
        adxb->addwrfunc(adxb->addwrobj, adxb->ndeclen, adxb->ndecsmpl);
        adxb->stat = 3;
    }
}
s32 memcmp_x00152438(s32 *, s32 *, s32) __asm__("memcmp");
extern s32 D_004604C0_x00152438 __asm__("D_004604C0");
extern s32 D_004604C8_x00152438 __asm__("D_004604C8");
s32 func_00152438_x00152438(s32 arg0) __asm__("func_00152438");
s32 func_00152438_x00152438(s32 arg0) {
    if ((memcmp_x00152438(arg0, &D_004604C0_x00152438, (s32 *)4) == 0) && (memcmp_x00152438(arg0 + 8, &D_004604C8_x00152438, 4) == 0)) {
        return 1;
    }
    return 0;
}
typedef struct AdxPdObj_x001524A0 {
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
} AdxPdObj_x001524A0;
typedef struct AdxDecPara_x001524A0 {
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
} AdxDecPara_x001524A0;
struct Pl2Enc_x001524A0;
typedef struct AdxbObj_x001524A0 AdxbObj_x001524A0;
typedef short *(*AdxbGetWrFunc_x001524A0)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x001524A0)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x001524A0 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x001524A0 *xpd;
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
    AdxDecPara_x001524A0 dp;
    AdxbGetWrFunc_x001524A0 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x001524A0 addwrfunc;
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
    struct Pl2Enc_x001524A0 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x001524A0(AdxbObj_x001524A0 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
enum AdxbPcmFmt_x001524A0 {
    ADXB_PCM_16_x001524A0 = 0,
    ADXB_PCM_8_x001524A0 = 1,
    ADXB_PCM_4_x001524A0 = 2
};
void ADXB_ExecOneWav16_x001524A0(AdxbObj_x001524A0 *obj) __asm__("func_00151F88");
void ADXB_ExecOneWav8_x001524A0(AdxbObj_x001524A0 *obj) __asm__("func_00152100");
void ADXB_ExecOneWav4_x001524A0(AdxbObj_x001524A0 *obj) __asm__("func_00152298");
void ADXB_ExecOneWav16_x001524A0(AdxbObj_x001524A0 *obj) __attribute__((weak, section(".b3stub")));
void ADXB_ExecOneWav16_x001524A0(AdxbObj_x001524A0 *obj) {}
void ADXB_ExecOneWav8_x001524A0(AdxbObj_x001524A0 *obj) __attribute__((weak, section(".b3stub")));
void ADXB_ExecOneWav8_x001524A0(AdxbObj_x001524A0 *obj) {}
void ADXB_ExecOneWav4_x001524A0(AdxbObj_x001524A0 *obj) __attribute__((weak, section(".b3stub")));
void ADXB_ExecOneWav4_x001524A0(AdxbObj_x001524A0 *obj) {}
void func_001524A0_x001524A0(AdxbObj_x001524A0 *obj) __asm__("func_001524A0");
/* ADXB_ExecOneWav: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxwav.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void func_001524A0_x001524A0(AdxbObj_x001524A0 *obj)
{
    if (obj->cdctype == ADXB_PCM_4_x001524A0) {
        ADXB_ExecOneWav4_x001524A0(obj);
    } else if (obj->cdctype == ADXB_PCM_8_x001524A0) {
        ADXB_ExecOneWav8_x001524A0(obj);
    } else if (obj->cdctype == ADXB_PCM_16_x001524A0) {
        ADXB_ExecOneWav16_x001524A0(obj);
    }
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3c001524A0_0;
extern int b3c001524A0_1;
void func_001524F8(void) {
    D_00401FF0 = 0;
}
void func_00152508(void) {
    func_0016FF40();
}
void func_00152520(void) {
    func_0016FF58();
}
extern float sqrtf(float); /* func_0011F6C8: config/port_syms.ld */
float func_0011F220_x00152538(float) __asm__("func_0011F220");
void fn_80046D94_x00152538(int highpass_frequency, int sample_rate, short *coef1_ptr, short *coef2_ptr) __asm__("fn_80046D94");
void fn_80046D94_x00152538(int highpass_frequency, int sample_rate, short *coef1_ptr, short *coef2_ptr) {
    float a, b, r, s, c;
    s = __builtin_sqrtf(2.0f);
    c = func_0011F220_x00152538(((float) highpass_frequency * 6.2831851f) / (float) sample_rate);
    a = s - c;
    b = __builtin_sqrtf(2.0f) - 1.0f;
    r = (a - __builtin_sqrtf((a + b) * (a - b))) / b;
    *coef1_ptr = (short) (int) (2.0f * r * 4096.0f);
    *coef2_ptr = (short) (int) (-r * r * 4096.0f);
}
int func_00152698_x00152698(short *src, int len, short *out) __asm__("func_00152698");
/* adxb_find_word80: from https://github.com/new-coke/rez-decomp (src/cri/adx_decode.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00152698_x00152698(short *src, int len, short *out)
{
    int n;
    int i;
    int k;
    n = 0x7fffffff;
    k = 0x80;
    for (i = 0; i < len - 1; i += 2) {
        if (*(short *)((char *)src + i) == k) {
            if (i < n)
                n = i;
            break;
        }
    }
    if (n != 0x7fffffff) {
        *out = n;
        return 0;
    }
    *out = 0;
    return -1;
}
typedef unsigned int size_t_x00152718;
int memcmp_x00152718(const void *, const void *, size_t_x00152718) __asm__("func_001256A8");
extern char ext_str0_x00152718[] __asm__("D_004604D0");
int func_00152718_x00152718(unsigned char *hdr, int size, short *ofst) __asm__("func_00152718");
/* ADX_IsAdxFmt: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxdcd.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00152718_x00152718(unsigned char *hdr, int size, short *ofst)
{
    int hdrlen;
    int copyright;
    if (size < 16) {
        return 0;
    }
    if ((hdr[1] | (hdr[0] << 8)) != 0x8000) {
        return 0;
    }
    hdrlen = ((hdr[2] << 8) | hdr[3]) + 4;
    copyright = hdrlen - 6;
    if (size < 0x8000) {
        return 0;
    }
    if (memcmp_x00152718(hdr + copyright, ext_str0_x00152718, 6) != 0) {
        return 0;
    }
    if (ofst != 0) {
        *ofst = hdrlen;
    }
    return 1;
}
typedef unsigned char Uint8_x001527C0;
typedef char Sint8_x001527C0;
typedef unsigned short Uint16_x001527C0;
typedef signed short Sint16_x001527C0;
typedef signed int Sint32_x001527C0;
extern int* sceCdCallback_x001527C0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    union {
        Uint16_x001527C0 magic;
        struct {
            Uint8_x001527C0 magic_0;
            Uint8_x001527C0 magic_1;
        };
    };
    union {
        Sint16_x001527C0 copyright_offset;
        struct {
            Uint8_x001527C0 copyright_offset_0;
            Uint8_x001527C0 copyright_offset_1;
        };
    };
    Uint8_x001527C0 encoding_type;
    Uint8_x001527C0 block_size;
    Uint8_x001527C0 sample_bitdepth;
    Uint8_x001527C0 channel_count;
    Uint8_x001527C0 sample_rate_0;
    Uint8_x001527C0 sample_rate_1;
    Uint8_x001527C0 sample_rate_2;
    Uint8_x001527C0 sample_rate_3;
    Uint8_x001527C0 total_samples_0;
    Uint8_x001527C0 total_samples_1;
    Uint8_x001527C0 total_samples_2;
    Uint8_x001527C0 total_samples_3;
    union {
        Uint16_x001527C0 high_pass_frequency;
        struct {
            Uint8_x001527C0 high_pass_frequency_0;
            Uint8_x001527C0 high_pass_frequency_1;
        };
    };
    Uint8_x001527C0 version;
    Uint8_x001527C0 flags;
    char pad14[4];
    Uint16_x001527C0 unk18;
    Uint16_x001527C0 unk1A;
    Uint16_x001527C0 unk1C;
    Uint16_x001527C0 unk1E;
} ADXHeader_x001527C0;
Sint32_x001527C0 func_001527C0_x001527C0(ADXHeader_x001527C0* hdr, Sint32_x001527C0 arg1, Sint16_x001527C0* audio_offset, Sint8_x001527C0* encoding_type, Sint8_x001527C0* sample_bitdepth,
                      Sint8_x001527C0* block_size, Sint8_x001527C0* channel_count, Sint32_x001527C0* sample_rate, Sint32_x001527C0* total_samples,
                      Sint32_x001527C0* samples_per_block) __asm__("func_001527C0");
/* ADX_DecodeInfo: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_dcd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001527C0 func_001527C0_x001527C0(ADXHeader_x001527C0* hdr, Sint32_x001527C0 arg1, Sint16_x001527C0* audio_offset, Sint8_x001527C0* encoding_type, Sint8_x001527C0* sample_bitdepth,
                      Sint8_x001527C0* block_size, Sint8_x001527C0* channel_count, Sint32_x001527C0* sample_rate, Sint32_x001527C0* total_samples,
                      Sint32_x001527C0* samples_per_block) {
    if (arg1 < 16) {
        return -1;
    }
    if ((hdr->magic_1 | (hdr->magic_0 << 8)) != 0x8000) {
        return -2;
    }
    *audio_offset = ((hdr->copyright_offset_0 << 8) | hdr->copyright_offset_1) + 4;
    *encoding_type = hdr->encoding_type;
    *block_size = hdr->block_size;
    *sample_bitdepth = hdr->sample_bitdepth;
    *channel_count = hdr->channel_count;
    *sample_rate =
        (hdr->sample_rate_0 << 24) | (hdr->sample_rate_1 << 16) | (hdr->sample_rate_2 << 8) | hdr->sample_rate_3;
    *total_samples = (hdr->total_samples_0 << 24) | (hdr->total_samples_1 << 16) | (hdr->total_samples_2 << 8) |
                     hdr->total_samples_3;
    if (*sample_bitdepth == 0) {
        *samples_per_block = 0;
    } else {
        *samples_per_block = (*block_size - 2) * 8 / *sample_bitdepth;
    }
    return 0;
}
typedef unsigned char Uint8_x001528C0;
typedef unsigned short Uint16_x001528C0;
typedef signed short Sint16_x001528C0;
typedef unsigned int Uint32_x001528C0;
typedef signed int Sint32_x001528C0;
extern int* sceCdCallback_x001528C0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    union {
        Uint16_x001528C0 magic;
        struct {
            Uint8_x001528C0 magic_0;
            Uint8_x001528C0 magic_1;
        };
    };
    union {
        Sint16_x001528C0 copyright_offset;
        struct {
            Uint8_x001528C0 copyright_offset_0;
            Uint8_x001528C0 copyright_offset_1;
        };
    };
    Uint8_x001528C0 encoding_type;
    Uint8_x001528C0 block_size;
    Uint8_x001528C0 sample_bitdepth;
    Uint8_x001528C0 channel_count;
    Uint8_x001528C0 sample_rate_0;
    Uint8_x001528C0 sample_rate_1;
    Uint8_x001528C0 sample_rate_2;
    Uint8_x001528C0 sample_rate_3;
    Uint8_x001528C0 total_samples_0;
    Uint8_x001528C0 total_samples_1;
    Uint8_x001528C0 total_samples_2;
    Uint8_x001528C0 total_samples_3;
    union {
        Uint16_x001528C0 high_pass_frequency;
        struct {
            Uint8_x001528C0 high_pass_frequency_0;
            Uint8_x001528C0 high_pass_frequency_1;
        };
    };
    Uint8_x001528C0 version;
    Uint8_x001528C0 flags;
    char pad14[4];
    Uint16_x001528C0 unk18;
    Uint16_x001528C0 unk1A;
    Uint16_x001528C0 unk1C;
    Uint16_x001528C0 unk1E;
} ADXHeader_x001528C0;
Sint32_x001528C0 func_001528C0_x001528C0(ADXHeader_x001528C0* hdr, Sint32_x001528C0 arg1, Sint16_x001528C0* high_pass_frequency) __asm__("func_001528C0");
/* ADX_DecodeInfoExADPCM2: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_dcd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001528C0 func_001528C0_x001528C0(ADXHeader_x001528C0* hdr, Sint32_x001528C0 arg1, Sint16_x001528C0* high_pass_frequency) {
    Uint32_x001528C0 magic;
    if (arg1 < 0x12) {
        return -1;
    }
    if (((Uint16_x001528C0)((((hdr->magic & 0xFF00) >> 8)) | ((hdr->magic << 8) & 0xFF00))) != 0x8000) {
        return -2;
    }
    if (((Sint16_x001528C0)((((hdr->copyright_offset & 0xFF00) >> 8)) | ((hdr->copyright_offset << 8) & 0xFF00))) < 0xE) {
        return -1;
    }
    *high_pass_frequency = ((Sint16_x001528C0)((((hdr->high_pass_frequency & 0xFF00) >> 8)) | ((hdr->high_pass_frequency << 8) & 0xFF00)));
    return 0;
}
typedef unsigned char Uint8_x00152940;
typedef char Sint8_x00152940;
typedef unsigned short Uint16_x00152940;
typedef signed short Sint16_x00152940;
typedef signed int Sint32_x00152940;
extern int* sceCdCallback_x00152940(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    union {
        Uint16_x00152940 magic;
        struct {
            Uint8_x00152940 magic_0;
            Uint8_x00152940 magic_1;
        };
    };
    union {
        Sint16_x00152940 copyright_offset;
        struct {
            Uint8_x00152940 copyright_offset_0;
            Uint8_x00152940 copyright_offset_1;
        };
    };
    Uint8_x00152940 encoding_type;
    Uint8_x00152940 block_size;
    Uint8_x00152940 sample_bitdepth;
    Uint8_x00152940 channel_count;
    Uint8_x00152940 sample_rate_0;
    Uint8_x00152940 sample_rate_1;
    Uint8_x00152940 sample_rate_2;
    Uint8_x00152940 sample_rate_3;
    Uint8_x00152940 total_samples_0;
    Uint8_x00152940 total_samples_1;
    Uint8_x00152940 total_samples_2;
    Uint8_x00152940 total_samples_3;
    union {
        Uint16_x00152940 high_pass_frequency;
        struct {
            Uint8_x00152940 high_pass_frequency_0;
            Uint8_x00152940 high_pass_frequency_1;
        };
    };
    Uint8_x00152940 version;
    Uint8_x00152940 flags;
    char pad14[4];
    Uint16_x00152940 unk18;
    Uint16_x00152940 unk1A;
    Uint16_x00152940 unk1C;
    Uint16_x00152940 unk1E;
} ADXHeader_x00152940;
Sint32_x00152940 func_00152940_x00152940(ADXHeader_x00152940* hdr, Sint32_x00152940 arg1, Sint8_x00152940* version, Sint8_x00152940* flags) __asm__("func_00152940");
/* ADX_DecodeInfoExVer: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_dcd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00152940 func_00152940_x00152940(ADXHeader_x00152940* hdr, Sint32_x00152940 arg1, Sint8_x00152940* version, Sint8_x00152940* flags) {
    if (arg1 < 0x14) {
        return -1;
    }
    if (((Uint16_x00152940)((((hdr->magic & 0xFF00) >> 8)) | ((hdr->magic << 8) & 0xFF00))) != 0x8000) {
        return -2;
    }
    if (((Sint16_x00152940)((((hdr->copyright_offset & 0xFF00) >> 8)) | ((hdr->copyright_offset << 8) & 0xFF00))) < 0x10) {
        return -1;
    }
    *version = hdr->version;
    *flags = hdr->flags;
    return 0;
}
typedef unsigned char Uint8_x001529B8;
typedef char Sint8_x001529B8;
typedef unsigned short Uint16_x001529B8;
typedef signed short Sint16_x001529B8;
typedef unsigned int Uint32_x001529B8;
typedef signed int Sint32_x001529B8;
extern int* sceCdCallback_x001529B8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    union {
        Uint16_x001529B8 magic;
        struct {
            Uint8_x001529B8 magic_0;
            Uint8_x001529B8 magic_1;
        };
    };
    union {
        Sint16_x001529B8 copyright_offset;
        struct {
            Uint8_x001529B8 copyright_offset_0;
            Uint8_x001529B8 copyright_offset_1;
        };
    };
    Uint8_x001529B8 encoding_type;
    Uint8_x001529B8 block_size;
    Uint8_x001529B8 sample_bitdepth;
    Uint8_x001529B8 channel_count;
    Uint8_x001529B8 sample_rate_0;
    Uint8_x001529B8 sample_rate_1;
    Uint8_x001529B8 sample_rate_2;
    Uint8_x001529B8 sample_rate_3;
    Uint8_x001529B8 total_samples_0;
    Uint8_x001529B8 total_samples_1;
    Uint8_x001529B8 total_samples_2;
    Uint8_x001529B8 total_samples_3;
    union {
        Uint16_x001529B8 high_pass_frequency;
        struct {
            Uint8_x001529B8 high_pass_frequency_0;
            Uint8_x001529B8 high_pass_frequency_1;
        };
    };
    Uint8_x001529B8 version;
    Uint8_x001529B8 flags;
    char pad14[4];
    Uint16_x001529B8 unk18;
    Uint16_x001529B8 unk1A;
    Uint16_x001529B8 unk1C;
    Uint16_x001529B8 unk1E;
} ADXHeader_x001529B8;
Sint32_x001529B8 ADX_DecodeInfoExVer_x001529B8(ADXHeader_x001529B8* hdr, Sint32_x001529B8 arg1, Sint8_x001529B8* version, Sint8_x001529B8* flags) __asm__("func_00152940");
Sint32_x001529B8 ADX_DecodeInfoExVer_x001529B8(ADXHeader_x001529B8* hdr, Sint32_x001529B8 arg1, Sint8_x001529B8* version, Sint8_x001529B8* flags) __asm__("func_00152940");
Sint32_x001529B8 func_001529B8_x001529B8(ADXHeader_x001529B8* hdr, Sint32_x001529B8 arg1, Sint16_x001529B8* arg2, Sint16_x001529B8* arg3) __asm__("func_001529B8");
/* ADX_DecodeInfoExIdly: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_dcd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001529B8 func_001529B8_x001529B8(ADXHeader_x001529B8* hdr, Sint32_x001529B8 arg1, Sint16_x001529B8* arg2, Sint16_x001529B8* arg3) {
    Uint8_x001529B8 version;
    Sint8_x001529B8 flags;
    Uint32_x001529B8 magic;
    if (ADX_DecodeInfoExVer_x001529B8(hdr, arg1, &version, &flags) != 0) {
        return -1;
    }
    if (version >= 4) {
        if (arg1 < 0x20) {
            return -1;
        }
        if (((Uint16_x001529B8)((((hdr->magic & 0xFF00) >> 8)) | ((hdr->magic << 8) & 0xFF00))) != 0x8000) {
            return -2;
        }
        if (((Sint16_x001529B8)((((hdr->copyright_offset & 0xFF00) >> 8)) | ((hdr->copyright_offset << 8) & 0xFF00))) < 0x1C) {
            return -1;
        }
        arg2[0] = ((Sint16_x001529B8)((((hdr->unk18 & 0xFF00) >> 8)) | ((hdr->unk18 << 8) & 0xFF00)));
        arg3[0] = ((Sint16_x001529B8)((((hdr->unk1A & 0xFF00) >> 8)) | ((hdr->unk1A << 8) & 0xFF00)));
        arg2[1] = ((Sint16_x001529B8)((((hdr->unk1C & 0xFF00) >> 8)) | ((hdr->unk1C << 8) & 0xFF00)));
        arg3[1] = ((Sint16_x001529B8)((((hdr->unk1E & 0xFF00) >> 8)) | ((hdr->unk1E << 8) & 0xFF00)));
    } else {
        arg3[1] = 0;
        arg2[1] = 0;
        arg3[0] = 0;
        arg2[0] = 0;
    }
    return 0;
}
typedef unsigned char Uint8_x00152AF0;
typedef char Sint8_x00152AF0;
typedef unsigned short Uint16_x00152AF0;
typedef signed short Sint16_x00152AF0;
typedef unsigned int Uint32_x00152AF0;
typedef signed int Sint32_x00152AF0;
extern int* sceCdCallback_x00152AF0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    union {
        Uint16_x00152AF0 magic;
        struct {
            Uint8_x00152AF0 magic_0;
            Uint8_x00152AF0 magic_1;
        };
    };
    union {
        Sint16_x00152AF0 copyright_offset;
        struct {
            Uint8_x00152AF0 copyright_offset_0;
            Uint8_x00152AF0 copyright_offset_1;
        };
    };
    Uint8_x00152AF0 encoding_type;
    Uint8_x00152AF0 block_size;
    Uint8_x00152AF0 sample_bitdepth;
    Uint8_x00152AF0 channel_count;
    Uint8_x00152AF0 sample_rate_0;
    Uint8_x00152AF0 sample_rate_1;
    Uint8_x00152AF0 sample_rate_2;
    Uint8_x00152AF0 sample_rate_3;
    Uint8_x00152AF0 total_samples_0;
    Uint8_x00152AF0 total_samples_1;
    Uint8_x00152AF0 total_samples_2;
    Uint8_x00152AF0 total_samples_3;
    union {
        Uint16_x00152AF0 high_pass_frequency;
        struct {
            Uint8_x00152AF0 high_pass_frequency_0;
            Uint8_x00152AF0 high_pass_frequency_1;
        };
    };
    Uint8_x00152AF0 version;
    Uint8_x00152AF0 flags;
    char pad14[4];
    Uint16_x00152AF0 unk18;
    Uint16_x00152AF0 unk1A;
    Uint16_x00152AF0 unk1C;
    Uint16_x00152AF0 unk1E;
} ADXHeader_x00152AF0;
Sint32_x00152AF0 ADX_DecodeInfoExVer_x00152AF0(ADXHeader_x00152AF0* hdr, Sint32_x00152AF0 arg1, Sint8_x00152AF0* version, Sint8_x00152AF0* flags) __asm__("func_00152940");
Sint32_x00152AF0 ADX_DecodeInfoExVer_x00152AF0(ADXHeader_x00152AF0* hdr, Sint32_x00152AF0 arg1, Sint8_x00152AF0* version, Sint8_x00152AF0* flags) __asm__("func_00152940");
Sint32_x00152AF0 func_00152AF0_x00152AF0(Uint8_x00152AF0* hdr, Sint32_x00152AF0 arg1, Sint32_x00152AF0* arg2, Sint16_x00152AF0* arg3, Sint16_x00152AF0* arg4, Sint32_x00152AF0* arg5,
                            Sint32_x00152AF0* arg6, Sint32_x00152AF0* arg7, Sint32_x00152AF0* arg8) __asm__("func_00152AF0");
/* ADX_DecodeInfoExLoop: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_dcd.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00152AF0 func_00152AF0_x00152AF0(Uint8_x00152AF0* hdr, Sint32_x00152AF0 arg1, Sint32_x00152AF0* arg2, Sint16_x00152AF0* arg3, Sint16_x00152AF0* arg4, Sint32_x00152AF0* arg5,
                            Sint32_x00152AF0* arg6, Sint32_x00152AF0* arg7, Sint32_x00152AF0* arg8) {
    Uint8_x00152AF0 version;
    Sint8_x00152AF0 flags;
    Sint32_x00152AF0 err;
    Uint32_x00152AF0 magic;
    Uint16_x00152AF0* p;
    Sint32_x00152AF0 temp_t5;
    Sint32_x00152AF0 temp_a2;
    *arg3 = 0;
    err = ADX_DecodeInfoExVer_x00152AF0(hdr, arg1, &version, &flags);
    if (err != 0) {
        return err;
    }
    temp_a2 = 0x30;
    if (version == 4) {
        temp_a2 = 0x3C;
    }
    if (arg1 < temp_a2) {
        return -1;
    }
    if (((Uint16_x00152AF0)((((((Uint16_x00152AF0*)hdr)[0] & 0xFF00) >> 8)) | ((((Uint16_x00152AF0*)hdr)[0] << 8) & 0xFF00))) != 0x8000) {
        return -2;
    }
    if (((Sint16_x00152AF0)((((((Sint16_x00152AF0*)hdr)[1] & 0xFF00) >> 8)) | ((((Sint16_x00152AF0*)hdr)[1] << 8) & 0xFF00))) < (temp_a2 - 4)) {
        return -1;
    }
    temp_t5 = (version != 4) ? 0x14 : 0x20;
    *arg2 = ((Sint16_x00152AF0)((((((Sint16_x00152AF0*)(hdr + temp_t5))[0] & 0xFF00) >> 8)) | ((((Sint16_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF00)));
    temp_t5 += 2;
    *arg3 = ((Sint16_x00152AF0)((((((Sint16_x00152AF0*)(hdr + temp_t5))[0] & 0xFF00) >> 8)) | ((((Sint16_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF00)));
    temp_t5 += 2;
    if (*arg3 != 1) {
        return -2;
    }
    temp_t5 += 2;
    *arg4 = ((Sint16_x00152AF0)((((((Sint16_x00152AF0*)(hdr + temp_t5))[0] & 0xFF00) >> 8)) | ((((Sint16_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF00)));
    temp_t5 += 2;
    *arg5 = ((Sint32_x00152AF0)(((((Sint32_x00152AF0*)(hdr + temp_t5))[0] & 0xFF000000) >> 24) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 24) & 0xFF000000) | (((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF0000) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] >> 8) & 0xFF00))));
    temp_t5 += 4;
    *arg6 = ((Sint32_x00152AF0)(((((Sint32_x00152AF0*)(hdr + temp_t5))[0] & 0xFF000000) >> 24) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 24) & 0xFF000000) | (((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF0000) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] >> 8) & 0xFF00))));
    temp_t5 += 4;
    *arg7 = ((Sint32_x00152AF0)(((((Sint32_x00152AF0*)(hdr + temp_t5))[0] & 0xFF000000) >> 24) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 24) & 0xFF000000) | (((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF0000) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] >> 8) & 0xFF00))));
    temp_t5 += 4;
    *arg8 = ((Sint32_x00152AF0)(((((Sint32_x00152AF0*)(hdr + temp_t5))[0] & 0xFF000000) >> 24) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 24) & 0xFF000000) | (((((Sint32_x00152AF0*)(hdr + temp_t5))[0] << 8) & 0xFF0000) | ((((Sint32_x00152AF0*)(hdr + temp_t5))[0] >> 8) & 0xFF00))));
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", func_00152D50);
int func_00152F70_x00152F70(unsigned char *hdr, int size, short *ofst) __asm__("func_00152F70");
/* ADX_DecodeFooter: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxdcd.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00152F70_x00152F70(unsigned char *hdr, int size, short *ofst)
{
    const unsigned short *words = (const unsigned short *)hdr;
    if (size < 16) {
        return -1;
    }
    if ((unsigned short)(((words[0]) >> 8) | (((words[0]) << 8) & 0xFF00)) != 0x8001) {
        return -2;
    }
    *ofst = ((words[1] << 8) & 0xFF00 | hdr[3]) + 4;
    return 0;
}
int func_00152FD0_x00152FD0(int type, int len, int ofst, unsigned int blk) __asm__("func_00152FD0");
/* ADX_CalcHdrInfoLen: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxdcd.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00152FD0_x00152FD0(int type, int len, int ofst, unsigned int blk)
{
    if (type == 0) {
        return ((len + (ofst + blk) + 33) / blk) * blk - ofst;
    }
    return ((len + (ofst + blk) + 57) / blk) * blk - ofst;
}
void func_00153028(s32 arg0) {
    D_00401FF8 = arg0;
}
extern const float D_00460EC8_x00153038[256] __asm__("D_00460EC8");
extern const float D_004612C8_x00153038[256] __asm__("D_004612C8");
int func_00153038_x00153038(signed char *ibuf, int nblk, short *obuf_l, short *dly_l, short k0, short k1) __asm__("func_00153038");
int func_00153038_x00153038(signed char *ibuf, int nblk, short *obuf_l, short *dly_l, short k0, short k1)
{
    int qsig;
    int dt16;
    float gain;
    float kf0;
    float kf1;
    float d0_l;
    float d1_l;
    float qsigf;
    int sno;
    int blkno2;
    unsigned char *ibufdt;
    short code;
    float dt_l;

    ibufdt = (unsigned char *)ibuf;

    d0_l = dly_l[0] * 65536;
    d1_l = dly_l[1] * 65536;

    kf0 = (k0 * 16) / 65536.0f;
    kf1 = (k1 * 16) / 65536.0f;

    for (blkno2 = 0; blkno2 < nblk; blkno2++)
    {
        code = (unsigned short)(((*(unsigned short *)ibufdt << 8) & 0xFF00) | ibufdt[1]);

        if ((code & 0x8000))
        {
            return blkno2;
        }

        gain = (code & 0x1FFF) + 1;

        ibufdt += 2;

        for (sno = 0; sno < 32; sno += 2)
        {
            qsig = *ibufdt++;

            qsigf = D_00460EC8_x00153038[qsig];

            dt_l = (kf0 * d0_l) + (kf1 * d1_l) + (qsigf * gain);

            d1_l = d0_l;
            d0_l = dt_l;

            dt16 = d0_l;

            *obuf_l++ = dt16 >> 16;

            qsigf = D_004612C8_x00153038[qsig];

            dt_l = (kf0 * d0_l) + (kf1 * d1_l) + (qsigf * gain);

            d1_l = d0_l;
            d0_l = dt_l;

            dt16 = d0_l;

            *obuf_l++ = dt16 >> 16;
        }
    }

    dly_l[0] = (int)d0_l >> 16;
    dly_l[1] = (int)d1_l >> 16;

    return nblk;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3p8_054c0e_0_x __asm__("p54c0e0");
extern const float D_00460EC8_x001531A8[256] __asm__("D_00460EC8");
extern const float D_004612C8_x001531A8[256] __asm__("D_004612C8");
int func_001531A8_x001531A8(signed char *ibuf, int nblk, short *obuf_l, short *dly_l, short *obuf_r, short *dly_r, short k0, short k1) __asm__("func_001531A8");
int func_001531A8_x001531A8(signed char *ibuf, int nblk, short *obuf_l, short *dly_l, short *obuf_r, short *dly_r, short k0, short k1) 
{
	int qsigz;
	int qsig_rz;
	int dt16z;
	float gainz;
	float gain_rz;
	float kf0z;
	float kf1z;
	float d0_lz;
	float d1_lz;
	float d0_rz;
	float d1_rz;
	float qsigfz;
	float qsigf_rz;
	int snoz;
	int blkno2z;
	unsigned char *ibufdtz;
	unsigned char *ibufdt_rz;
	short codez;
    float dt_lz;
    float dt_rz;

    d0_lz = dly_l[0] * 65536;
    d1_lz = dly_l[1] * 65536;
    
    d0_rz = dly_r[0] * 65536;
    d1_rz = dly_r[1] * 65536;
    
    kf0z = (k0 * 16) / 65536.0f;
    kf1z = (k1 * 16) / 65536.0f;
    
    ibufdt_rz = (unsigned char*)ibuf;
    
    for (blkno2z = 0; blkno2z < (nblk / 2); blkno2z++) 
    {
        ibufdtz = ibufdt_rz;
        
        ibufdt_rz += 18;
        
        codez = (unsigned short)(((*(unsigned short *)ibufdtz << 8) & 0xFF00) | ibufdtz[1]);
        
        if ((codez & 0x8000)) 
        {
            return blkno2z * 2;
        }
        
        gainz = (codez & 0x1FFF) + 1;
        
        codez = (unsigned short)(((*(unsigned short *)ibufdt_rz << 8) & 0xFF00) | ibufdt_rz[1]);
        
        if ((codez & 0x8000))
        {
            return blkno2z * 2;
        }

        gain_rz = (codez & 0x1FFF) + 1;
        
        ibufdtz += 2;
        ibufdt_rz += 2;
        
        for (snoz = 0; snoz < 32; snoz += 2)
        {
            qsigz = *ibufdtz++;
            qsigfz = D_00460EC8_x001531A8[qsigz];
            
            qsig_rz = *ibufdt_rz++;
            qsigf_rz = D_00460EC8_x001531A8[qsig_rz];

            dt_lz = (kf0z * d0_lz) + (kf1z * d1_lz) + (qsigfz * gainz);
            
            d1_lz = d0_lz;
            d0_lz = dt_lz;
            
            dt_rz = (kf0z * d0_rz) + (kf1z * d1_rz) + (qsigf_rz * gain_rz);
            
            d1_rz = d0_rz;
            d0_rz = dt_rz;
            
            dt16z = d0_lz;
            
            *obuf_l++ = dt16z >> 16;
            
            dt16z = d0_rz;
            
            *obuf_r++ = dt16z >> 16;

            qsigfz = D_004612C8_x001531A8[qsigz];
            qsigf_rz = D_004612C8_x001531A8[qsig_rz];
            
            dt_lz = (kf0z * d0_lz) + (kf1z * d1_lz) + (qsigfz * gainz);
            
            d1_lz = d0_lz;
            d0_lz = dt_lz;
            
            dt_rz = (kf0z * d0_rz) + (kf1z * d1_rz) + (qsigf_rz * gain_rz);
            
            d1_rz = d0_rz;
            d0_rz = dt_rz;
            
            dt16z = d0_lz;
            
            *obuf_l++ = dt16z >> 16;
            
            dt16z = d0_rz;
            
            *obuf_r++ = dt16z >> 16;
        }
    }
    
    dly_l[0] = (int)d0_lz >> 16;
    dly_l[1] = (int)d1_lz >> 16;
    
    dly_r[0] = (int)d0_rz >> 16;
    dly_r[1] = (int)d1_rz >> 16;
    
    return nblk;
}
/* padding for ee-gcc's CSE (scripts/func_insert.py, cse_pad) */
extern int b3p16_054c6a_0_x __asm__("b3a054c6a_0");
extern int b3p16_054c6a_1_x __asm__("b3a054c6a_1");
extern const float D_00460EC8_x00153440[256] __asm__("D_00460EC8");
extern const float D_004612C8_x00153440[256] __asm__("D_004612C8");
int func_00153440_x00153440(signed char *ibuf, int nblk, short *obuf_l, short *dly_l, short *obuf_r, short *dly_r, short k0, short k1) __asm__("func_00153440");
int func_00153440_x00153440(signed char *ibuf, int nblk, short *obuf_l, short *dly_l, short *obuf_r, short *dly_r, short k0, short k1) 
{
	int qsigzzzzzzzz;
	int qsig_rzzzzzzzz;
	int dt16zzzzzzzz;
	float gainzzzzzzzz;
	float gain_rzzzzzzzz;
	float kf0zzzzzzzz;
	float kf1zzzzzzzz;
	float d0_lzzzzzzzz;
	float d1_lzzzzzzzz;
	float d0_rzzzzzzzz;
	float d1_rzzzzzzzz;
	float qsigfzzzzzzzz;
	float qsigf_rzzzzzzzz;
	int snozzzzzzzz;
	int blkno2zzzzzzzz;
	unsigned char *ibufdtzzzzzzzz;
	unsigned char *ibufdt_rzzzzzzzz;
	short codezzzzzzzz;
    float dt_lzzzzzzzz;
    float dt_rzzzzzzzz;

    d0_lzzzzzzzz = dly_l[0] * 65536;
    d1_lzzzzzzzz = dly_l[1] * 65536;
    
    d0_rzzzzzzzz = dly_r[0] * 65536;
    d1_rzzzzzzzz = dly_r[1] * 65536;
    
    kf0zzzzzzzz = (k0 * 16) / 65536.0f;
    kf1zzzzzzzz = (k1 * 16) / 65536.0f;
    
    ibufdt_rzzzzzzzz = (unsigned char*)ibuf;
    
    for (blkno2zzzzzzzz = 0; blkno2zzzzzzzz < (nblk / 2); blkno2zzzzzzzz++) 
    {
        ibufdtzzzzzzzz = ibufdt_rzzzzzzzz;
        
        ibufdt_rzzzzzzzz += 18;
        
        codezzzzzzzz = (unsigned short)(((*(unsigned short *)ibufdtzzzzzzzz << 8) & 0xFF00) | ibufdtzzzzzzzz[1]);
        
        if ((codezzzzzzzz & 0x8000)) 
        {
            return blkno2zzzzzzzz * 2;
        }
        
        gainzzzzzzzz = (codezzzzzzzz & 0x1FFF) + 1;
        
        codezzzzzzzz = (unsigned short)(((*(unsigned short *)ibufdt_rzzzzzzzz << 8) & 0xFF00) | ibufdt_rzzzzzzzz[1]);
        
        if ((codezzzzzzzz & 0x8000))
        {
            return blkno2zzzzzzzz * 2;
        }

        gain_rzzzzzzzz = (codezzzzzzzz & 0x1FFF) + 1;
        
        ibufdtzzzzzzzz += 2;
        ibufdt_rzzzzzzzz += 2;
        
        for (snozzzzzzzz = 0; snozzzzzzzz < 32; snozzzzzzzz += 2)
        {
            qsigzzzzzzzz = *ibufdtzzzzzzzz++;
            qsigfzzzzzzzz = D_00460EC8_x00153440[qsigzzzzzzzz];
            
            qsig_rzzzzzzzz = *ibufdt_rzzzzzzzz++;
            qsigf_rzzzzzzzz = D_00460EC8_x00153440[qsig_rzzzzzzzz];

            dt_lzzzzzzzz = (kf0zzzzzzzz * d0_lzzzzzzzz) + (kf1zzzzzzzz * d1_lzzzzzzzz) + (qsigfzzzzzzzz * gainzzzzzzzz);
            
            d1_lzzzzzzzz = d0_lzzzzzzzz;
            d0_lzzzzzzzz = dt_lzzzzzzzz;
            
            dt_rzzzzzzzz = (kf0zzzzzzzz * d0_rzzzzzzzz) + (kf1zzzzzzzz * d1_rzzzzzzzz) + (qsigf_rzzzzzzzz * gain_rzzzzzzzz);
            
            d1_rzzzzzzzz = d0_rzzzzzzzz;
            d0_rzzzzzzzz = dt_rzzzzzzzz;
            
            dt16zzzzzzzz = (int)((d0_lzzzzzzzz + d0_rzzzzzzzz) * 0.7f) >> 16;
            
            *obuf_l++ = *obuf_r++ = dt16zzzzzzzz;
            
            qsigfzzzzzzzz = D_004612C8_x00153440[qsigzzzzzzzz];
            qsigf_rzzzzzzzz = D_004612C8_x00153440[qsig_rzzzzzzzz];
            
            dt_lzzzzzzzz = (kf0zzzzzzzz * d0_lzzzzzzzz) + (kf1zzzzzzzz * d1_lzzzzzzzz) + (qsigfzzzzzzzz * gainzzzzzzzz);
            
            d1_lzzzzzzzz = d0_lzzzzzzzz;
            d0_lzzzzzzzz = dt_lzzzzzzzz;
            
            dt_rzzzzzzzz = (kf0zzzzzzzz * d0_rzzzzzzzz) + (kf1zzzzzzzz * d1_rzzzzzzzz) + (qsigf_rzzzzzzzz * gain_rzzzzzzzz);
            
            d1_rzzzzzzzz = d0_rzzzzzzzz;
            d0_rzzzzzzzz = dt_rzzzzzzzz;
            
            dt16zzzzzzzz = (int)((d0_lzzzzzzzz + d0_rzzzzzzzz) * 0.7f) >> 16;
            
            *obuf_l++ = *obuf_r++ = dt16zzzzzzzz;
        }
    }
    
    dly_l[0] = (int)d0_lzzzzzzzz >> 16;
    dly_l[1] = (int)d1_lzzzzzzzz >> 16;
    
    dly_r[0] = (int)d0_rzzzzzzzz >> 16;
    dly_r[1] = (int)d1_rzzzzzzzz >> 16;
    
    return nblk;
}
extern int adxd_mono_flag_x001536E0 __asm__("D_00401FF8");
int adxd_decode_stereo_pair_x001536E0(unsigned char *src, int n, short *dstl, short *histl, short *dstr, short *histr,
                 int coef1_q12, int coef2_q12) __asm__("func_001531A8");
int adxd_decode_stereo_mix_x001536E0(unsigned char *src, int n, short *dstl, short *histl, short *dstr, short *histr,
                 int coef1_q12, int coef2_q12) __asm__("func_00153440");
int func_001536E0_x001536E0(unsigned char *src, int n, short *dstl, short *histl, short *dstr, short *histr,
                 short coef1_q12, short coef2_q12) __asm__("func_001536E0");
/* adxd_decode_stereo: from https://github.com/new-coke/rez-decomp (src/cri/adx_decode.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_001536E0_x001536E0(unsigned char *src, int n, short *dstl, short *histl, short *dstr, short *histr,
                 short coef1_q12, short coef2_q12)
{
    if (adxd_mono_flag_x001536E0 == 0)
        return adxd_decode_stereo_pair_x001536E0(src, n, dstl, histl, dstr, histr, coef1_q12, coef2_q12);
    return adxd_decode_stereo_mix_x001536E0(src, n, dstl, histl, dstr, histr, coef1_q12, coef2_q12);
}
extern const int adx_nibble_tbl_x00153728[16] __asm__("D_004604D8");
int func_00153728_x00153728(unsigned char *ibuf, int nblk, short *obuf, short *dly, short k0, short k1,
                    unsigned short *seed, short mul, short add) __asm__("func_00153728");
/* ADX_DecodeMono4: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxdcd.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00153728_x00153728(unsigned char *ibuf, int nblk, short *obuf, short *dly, short k0, short k1,
                    unsigned short *seed, short mul, short add)
{
    unsigned char *p;
    int i;
    int j;
    int hdr;
    int scale;
    int key;
    int b;
    int nib;
    int v;
    int d1;
    int d2;
    p = ibuf;
    d1 = dly[0];
    d2 = dly[1];
    for (i = 0; i < nblk; i++) {
        hdr = (short)(((*(short *)p & 0xFF00) >> 8) | ((*(short *)p << 8) & 0xFF00));
        if (hdr & 0x8000) {
            return i;
        }
        scale = ((hdr ^ *seed) & 0x1FFF) + 1;
        key = *seed * mul + add;
        *seed = key & 0x7FFF;
        p += 2;
        for (j = 0; j < 32; j += 2) {
            b = (signed char)*p;
            nib = b >> 4;
            p++;
            v = ((k0 * d1 + k1 * d2) >> 12) + nib * scale;
            if ((v) > 32767 || (v) < -32768) { if ((v) < -32768) { (v) = -32768; } else if ((v) > 32767) { (v) = 32767; } };
            d2 = d1;
            d1 = v;
            *obuf++ = d1;
            b = adx_nibble_tbl_x00153728[b & 0xF];
            v = ((k0 * d1 + k1 * d2) >> 12) + b * scale;
            if ((v) > 32767 || (v) < -32768) { if ((v) < -32768) { (v) = -32768; } else if ((v) > 32767) { (v) = 32767; } };
            d2 = d1;
            d1 = v;
            *obuf++ = d1;
        }
    }
    dly[0] = d1;
    dly[1] = d2;
    return nblk;
}
extern const int adx_nibble_tbl_x00153908[16] __asm__("D_004604D8");
int func_00153908_x00153908(unsigned char *ibuf, int nblk, short *obufl, short *dlyl, short *obufr, short *dlyr,
                 short k0, short k1, unsigned short *seed, short mul, short add) __asm__("func_00153908");
/* ADX_DecodeSte4AsMono: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxdcd.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00153908_x00153908(unsigned char *ibuf, int nblk, short *obufl, short *dlyl, short *obufr, short *dlyr,
                 short k0, short k1, unsigned short *seed, short mul, short add)
{
    unsigned char *p;
    int i;
    int j;
    int n;
    int hdr;
    int scale_l;
    int scale_r;
    int key;
    int bl;
    int br;
    int nibl;
    int nibr;
    int v;
    int l1;
    int l2;
    int r1;
    int r2;
    p = ibuf;
    l1 = dlyl[0];
    l2 = dlyl[1];
    r1 = dlyr[0];
    r2 = dlyr[1];
    n = nblk / 2;
    for (i = 0; i < n; i++) {
        hdr = (short)(((*(short *)p & 0xFF00) >> 8) | ((*(short *)p << 8) & 0xFF00));
        if (hdr & 0x8000) {
            return i * 2;
        }
        scale_l = ((hdr ^ *seed) & 0x1FFF) + 1;
        key = (*seed * mul + add) & 0x7FFF;
        *seed = key;
        hdr = (short)(((*(short *)(p + 18) & 0xFF00) >> 8) | ((*(short *)(p + 18) << 8) & 0xFF00));
        if (hdr & 0x8000) {
            return i * 2;
        }
        scale_r = ((hdr ^ key) & 0x1FFF) + 1;
        *seed = (mul * key + add) & 0x7FFF;
        p += 2;
        for (j = 0; j < 32; j += 2) {
            bl = (signed char)p[0];
            nibl = bl >> 4;
            br = (signed char)p[18];
            nibr = br >> 4;
            p++;
            v = ((k0 * l1 + k1 * l2) >> 12) + nibl * scale_l;
            if ((v) > 32767 || (v) < -32768) { if ((v) < -32768) { (v) = -32768; } else if ((v) > 32767) { (v) = 32767; } };
            l2 = l1;
            l1 = v;
            v = ((k0 * r1 + k1 * r2) >> 12) + nibr * scale_r;
            if ((v) > 32767 || (v) < -32768) { if ((v) < -32768) { (v) = -32768; } else if ((v) > 32767) { (v) = 32767; } };
            r2 = r1;
            r1 = v;
            v = (l1 + r1) * 7 / 10;
            if ((v) > 32767 || (v) < -32768) { if ((v) < -32768) { (v) = -32768; } else if ((v) > 32767) { (v) = 32767; } };
            *obufl++ = *obufr++ = v;
            bl = adx_nibble_tbl_x00153908[bl & 0xF];
            br = adx_nibble_tbl_x00153908[br & 0xF];
            v = ((k0 * l1 + k1 * l2) >> 12) + bl * scale_l;
            if ((v) > 32767 || (v) < -32768) { if ((v) < -32768) { (v) = -32768; } else if ((v) > 32767) { (v) = 32767; } };
            l2 = l1;
            l1 = v;
            v = ((k0 * r1 + k1 * r2) >> 12) + br * scale_r;
            if ((v) > 32767 || (v) < -32768) { if ((v) < -32768) { (v) = -32768; } else if ((v) > 32767) { (v) = 32767; } };
            r2 = r1;
            r1 = v;
            v = (l1 + r1) * 7 / 10;
            if ((v) > 32767 || (v) < -32768) { if ((v) < -32768) { (v) = -32768; } else if ((v) > 32767) { (v) = 32767; } };
            *obufl++ = *obufr++ = v;
        }
        p += 18;
    }
    dlyl[0] = l1;
    dlyl[1] = l2;
    dlyr[0] = r1;
    dlyr[1] = r2;
    return nblk;
}
extern const int adx_nibble_tbl_x00153CD0[16] __asm__("D_004604D8");
int func_00153CD0_x00153CD0(unsigned char *ibuf, int nblk, short *obufl, short *dlyl, short *obufr, short *dlyr,
                 short k0, short k1, unsigned short *seed, short mul, short add) __asm__("func_00153CD0");
/* ADX_DecodeSte4AsSte: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxdcd.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00153CD0_x00153CD0(unsigned char *ibuf, int nblk, short *obufl, short *dlyl, short *obufr, short *dlyr,
                 short k0, short k1, unsigned short *seed, short mul, short add)
{
    unsigned char *p;
    int i;
    int j;
    int n;
    int hdr;
    int scale_l;
    int scale_r;
    int key;
    int bl;
    int br;
    int nibl;
    int nibr;
    int v;
    int l1;
    int l2;
    int r1;
    int r2;
    p = ibuf;
    l1 = dlyl[0];
    l2 = dlyl[1];
    r1 = dlyr[0];
    r2 = dlyr[1];
    n = nblk / 2;
    for (i = 0; i < n; i++) {
        hdr = (short)(((*(short *)p & 0xFF00) >> 8) | ((*(short *)p << 8) & 0xFF00));
        if (hdr & 0x8000) {
            return i * 2;
        }
        scale_l = ((hdr ^ *seed) & 0x1FFF) + 1;
        key = (*seed * mul + add) & 0x7FFF;
        *seed = key;
        hdr = (short)(((*(short *)(p + 18) & 0xFF00) >> 8) | ((*(short *)(p + 18) << 8) & 0xFF00));
        if (hdr & 0x8000) {
            return i * 2;
        }
        scale_r = ((hdr ^ key) & 0x1FFF) + 1;
        *seed = (mul * key + add) & 0x7FFF;
        p += 2;
        for (j = 0; j < 32; j += 2) {
            bl = (signed char)p[0];
            nibl = bl >> 4;
            br = (signed char)p[18];
            nibr = br >> 4;
            p++;
            v = ((k0 * l1 + k1 * l2) >> 12) + nibl * scale_l;
            if ((v) > 32767 || (v) < -32768) { if ((v) < -32768) { (v) = -32768; } else if ((v) > 32767) { (v) = 32767; } };
            l2 = l1;
            l1 = v;
            v = ((k0 * r1 + k1 * r2) >> 12) + nibr * scale_r;
            if ((v) > 32767 || (v) < -32768) { if ((v) < -32768) { (v) = -32768; } else if ((v) > 32767) { (v) = 32767; } };
            r2 = r1;
            r1 = v;
            *obufl++ = l1;
            *obufr++ = r1;
            bl = adx_nibble_tbl_x00153CD0[bl & 0xF];
            br = adx_nibble_tbl_x00153CD0[br & 0xF];
            v = ((k0 * l1 + k1 * l2) >> 12) + bl * scale_l;
            if ((v) > 32767 || (v) < -32768) { if ((v) < -32768) { (v) = -32768; } else if ((v) > 32767) { (v) = 32767; } };
            l2 = l1;
            l1 = v;
            v = ((k0 * r1 + k1 * r2) >> 12) + br * scale_r;
            if ((v) > 32767 || (v) < -32768) { if ((v) < -32768) { (v) = -32768; } else if ((v) > 32767) { (v) = 32767; } };
            r2 = r1;
            r1 = v;
            *obufl++ = l1;
            *obufr++ = r1;
        }
        p += 18;
    }
    dlyl[0] = l1;
    dlyl[1] = l2;
    dlyr[0] = r1;
    dlyr[1] = r2;
    return nblk;
}
extern int D_003EC660_x00154018 __asm__("D_00401FF8");
extern void ADX_DecodeSte4AsSte_x00154018(int a0, int a1, int a2, int a3, int a4, int a5, short k0, short k1, int a8, short d0, short d1) __asm__("func_00153CD0");
extern void func_003420E0_x00154018(int a0, int a1, int a2, int a3, int a4, int a5, short k0, short k1, int a8, short d0, short d1) __asm__("func_00153908");
void func_00154018_x00154018(int a0, int a1, int a2, int a3, int a4, int a5,
                   short k0, short k1, int a8, short d0, short d1) __asm__("func_00154018");
/* func_003427F0: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003427f0.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_00154018_x00154018(int a0, int a1, int a2, int a3, int a4, int a5,
                   short k0, short k1, int a8, short d0, short d1)
{
    if (D_003EC660_x00154018 == 0) {
        ADX_DecodeSte4AsSte_x00154018(a0, a1, a2, a3, a4, a5, k0, k1, a8, d0, d1);
        return;
    }
    func_003420E0_x00154018(a0, a1, a2, a3, a4, a5, k0, k1, a8, d0, d1);
}
void func_00154088(void) {
    memset(&D_00402008, 0, 0x100);
    D_00402000 = 0;
    D_00402004 = 0;
}
void func_001540C0(void) {
    memset(&D_00402008, 0, 0x100);
    D_00402000 = 0;
    D_00402004 = 0;
}
void func_001540F8(s32 arg0, s32 arg1) {
    D_00402000 = arg0;
    D_00402004 = arg1;
    func_00170620();
}
s32 func_00128040_x00154120(s32 *, s32, s32) __asm__("func_00128040");
s32 func_00170070_x00154120(s32 *) __asm__("func_00170070");
extern s32 (*D_00402000_x00154120)(s32, s32 *) __asm__("D_00402000");
extern s32 D_00402004_x00154120 __asm__("D_00402004");
extern s32 D_00402008_x00154120 __asm__("D_00402008");
void ADXERR_CallErrFunc1_x00154120(s32 arg0) __asm__("ADXERR_CallErrFunc1");
void ADXERR_CallErrFunc1_x00154120(s32 arg0) {
    func_00128040_x00154120(&D_00402008_x00154120, arg0, 0xFF);
    if (D_00402000_x00154120 != NULL) {
        D_00402000_x00154120(D_00402004_x00154120, &D_00402008_x00154120);
    }
    func_00170070_x00154120(&D_00402008_x00154120);
}
s32 func_00127CD8_x00154178(s32 *, s32, s32) __asm__("func_00127CD8");
s32 func_00128040_x00154178(s32 *, s32, s32) __asm__("func_00128040");
s32 func_00170070_x00154178(s32 *) __asm__("func_00170070");
extern s32 (*D_00402000_x00154178)(s32, s32 *) __asm__("D_00402000");
extern s32 D_00402004_x00154178 __asm__("D_00402004");
extern s32 D_00402008_x00154178 __asm__("D_00402008");
void func_00154178_x00154178(s32 arg0, s32 arg1) __asm__("func_00154178");
void func_00154178_x00154178(s32 arg0, s32 arg1) {
    func_00128040_x00154178(&D_00402008_x00154178, arg0, 0xFF);
    func_00127CD8_x00154178(&D_00402008_x00154178, arg1, 0xFF);
    if (D_00402000_x00154178 != NULL) {
        D_00402000_x00154178(D_00402004_x00154178, &D_00402008_x00154178);
    }
    func_00170070_x00154178(&D_00402008_x00154178);
}
typedef signed char Sint8_x001541E8;
typedef int Sint32_x001541E8;
extern Sint32_x001541E8 strlen_x001541E8(const Sint8_x001541E8 *s) __asm__("func_00127BA0");
extern Sint8_x001541E8 D_007588D0_x001541E8[32] __asm__("D_0047E950");
void func_001541E8_x001541E8(Sint32_x001541E8 val, Sint8_x001541E8 *str, Sint32_x001541E8 len) __asm__("func_001541E8");
/* ADXERR_ItoA: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0033f240.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001541E8_x001541E8(Sint32_x001541E8 val, Sint8_x001541E8 *str, Sint32_x001541E8 len)
{
    Sint32_x001541E8 ncol;
    Sint32_x001541E8 i;
    i = 0;
    while (i < 0x20) {
        str[i] = val % 10;
        val = val / 10;
        if (val == 0) {
            str[i] = 0;
            break;
        }
        i++;
    }
    ncol = strlen_x001541E8(D_007588D0_x001541E8);
    if (ncol >= len - 1) {
        ncol = len - 1;
    }
    for (i = 0; i < ncol; i++) {
        str[i] = D_007588D0_x001541E8[ncol - 1 - i];
    }
    str[i] = 0;
}
typedef signed char Sint8_x001542F0;
typedef signed int Sint32_x001542F0;
extern unsigned int strlen_x001542F0(const char *) __asm__("func_00127BA0");
extern char *strncat_x001542F0(char *, const char *, unsigned int) __asm__("func_00127CD8");
extern void ADXERR_ItoA_x001542F0(Sint32_x001542F0 val, Sint8_x001542F0 *str, Sint32_x001542F0 len) __asm__("func_001541E8");
extern const Sint8_x001542F0 D_00456938_x001542F0[] __asm__("D_00460518");
void func_001542F0_x001542F0(Sint32_x001542F0 val, Sint32_x001542F0 val2, Sint8_x001542F0 *str, Sint32_x001542F0 len) __asm__("func_001542F0");
/* ADXERR_ItoA2: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/0033f3.c, MIT); ee-gcc 2.96 -O2 -G0 */
void func_001542F0_x001542F0(Sint32_x001542F0 val, Sint32_x001542F0 val2, Sint8_x001542F0 *str, Sint32_x001542F0 len) {
    ADXERR_ItoA_x001542F0(val, str, len);
    strncat_x001542F0((char *)str, (const char *)D_00456938_x001542F0, (len - strlen_x001542F0((const char *)str)) - 1);
    ADXERR_ItoA_x001542F0(val2, &str[strlen_x001542F0((const char *)str)], 4 - strlen_x001542F0((const char *)str));
}
typedef char Sint8_x00154378;
typedef signed int Sint32_x00154378;
void InvalidDCache_x00154378(void*, void*) __asm__("func_0010AC98");
extern int AddIntcHandler_x00154378(int, int (*)(int), int) __asm__("AddIntcHandler");
extern int AddDmacHandler_x00154378(int, int (*)(int), int) __asm__("AddDmacHandler");
void func_00154378_x00154378(Sint8_x00154378* buf, Sint32_x00154378 bsize) __asm__("func_00154378");
/* ADXF_Ocbi: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fcch.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00154378_x00154378(Sint8_x00154378* buf, Sint32_x00154378 bsize) {
    InvalidDCache_x00154378(buf, buf + bsize - 1);
}
typedef unsigned int size_t_x00154398;
typedef int s32_x00154398;
typedef s32_x00154398 intptr_t_x00154398;
typedef unsigned char Uint8_x00154398;
typedef char Sint8_x00154398;
typedef unsigned short Uint16_x00154398;
typedef signed short Sint16_x00154398;
typedef unsigned int Uint32_x00154398;
typedef signed int Sint32_x00154398;
typedef char Char8_x00154398;
typedef struct _UUID_x00154398 {
    Uint32_x00154398 Data1;
    Uint16_x00154398 Data2;
    Uint16_x00154398 Data3;
    Uint8_x00154398 Data4[8];
} UUID_x00154398;
typedef struct {
        Sint8_x00154398 *data;
        Sint32_x00154398 len;
} SJCK_x00154398;
typedef struct {
        struct _sj_vtbl_x00154398 *vtbl;
} SJ_OBJ_x00154398;
typedef SJ_OBJ_x00154398 *SJ_x00154398;
typedef struct _sj_vtbl_x00154398 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00154398 sj);
        UUID_x00154398 *(*GetUuid)(SJ_x00154398 sj);
        void (*Reset)(SJ_x00154398 sj);
        void (*GetChunk)(SJ_x00154398 sj, Sint32_x00154398 id, Sint32_x00154398 nbyte, SJCK_x00154398 *ck);
        void (*UngetChunk)(SJ_x00154398 sj, Sint32_x00154398 id, SJCK_x00154398 *ck);
        void (*PutChunk)(SJ_x00154398 sj, Sint32_x00154398 id, SJCK_x00154398 *ck);
        Sint32_x00154398 (*GetNumData)(SJ_x00154398 sj, Sint32_x00154398 id);
        Sint32_x00154398 (*IsGetChunk)(SJ_x00154398 sj, Sint32_x00154398 id, Sint32_x00154398 nbyte, Sint32_x00154398 *rbyte);
        void (*EntryErrFunc)(SJ_x00154398 sj,
                                        void (*func)(void *obj, Sint32_x00154398 ecode), void *obj);
} SJ_IF_x00154398;
typedef void *ADXSTM_x00154398;
typedef struct _adx_fs_x00154398 {
    Sint8_x00154398 used;
    Sint8_x00154398 stat;
    Sint8_x00154398 sjflag;
    Sint8_x00154398 stopnw_flg;
    ADXSTM_x00154398 stm;
    SJ_x00154398 sj;
    Sint32_x00154398 fnsct;
    Sint32_x00154398 fsize;
    Sint32_x00154398 skpos;
    Sint32_x00154398 rdstpos;
    Sint32_x00154398 rqsct;
    Sint32_x00154398 rdsct;
    Sint8_x00154398 *buf;
    Sint32_x00154398 bsize;
    Sint32_x00154398 rqrdsct;
    Sint32_x00154398 ofst;
    void *dir;
    const Char8_x00154398 *unk38;
    Sint32_x00154398 unk3C;
    Sint32_x00154398 unk40;
} ADX_FS_x00154398;
typedef ADX_FS_x00154398 *ADXF_x00154398;
typedef struct _adxf_ptinfo_x00154398 {
    struct _adxf_ptinfo_x00154398 *next;
    Sint32_x00154398 size;
    Sint32_x00154398 nfile;
    Uint16_x00154398 nentry;
    Sint8_x00154398 type;
    Sint8_x00154398 rev;
    Sint8_x00154398 fname[(256)];
    void *curdir;
    Sint32_x00154398 ofst;
    Sint32_x00154398 top;
    Sint32_x00154398 file_sizes[0];
} ADXF_PTINFO_x00154398;
typedef struct _adxf_cmd_hstry_x00154398 {
    Uint8_x00154398 cmdid;
    Uint8_x00154398 fg;
    Uint16_x00154398 ncall;
    intptr_t_x00154398 prm[3];
} ADXF_CMD_HSTRY_x00154398;
extern ADX_FS_x00154398 adxf_obj_x00154398[(16)] __asm__("lbl_80186B68");
extern ADXF_PTINFO_x00154398* adxf_ptinfo_x00154398[(256)] __asm__("D_00402550");
extern Sint32_x00154398 adxf_ocbi_fg_x00154398 __asm__("D_00402950");
extern ADXF_CMD_HSTRY_x00154398 adxf_cmd_hstry_x00154398[(16)] __asm__("D_00402958");
extern Sint16_x00154398 adxf_cmd_ncall_x00154398[(16)] __asm__("D_00402A58");
extern Sint32_x00154398 adxf_hstry_no_x00154398 __asm__("D_00402A78");
extern ADXF_x00154398 adxf_ldptnw_hn_x00154398 __asm__("D_00402A80");
extern Sint32_x00154398 adxf_ldptnw_ptid_x00154398 __asm__("D_00402A84");
extern Sint32_x00154398 adxf_flno_x00154398 __asm__("D_00402A7C");
void* memset_x00154398(void* s, int c, size_t_x00154398 n) __asm__("memset");
extern Char8_x00154398* volatile adxf_build_x00154398 __asm__("D_00402108");
extern Sint32_x00154398 adxf_init_cnt_x00154398 __asm__("D_0040210C");
extern ADX_FS_x00154398 adxf_obj_x00154398[(16)] __asm__("lbl_80186B68");
extern ADXF_PTINFO_x00154398* adxf_ptinfo_x00154398[(256)] __asm__("D_00402550");
extern Sint32_x00154398 adxf_ocbi_fg_x00154398 __asm__("D_00402950");
extern ADXF_CMD_HSTRY_x00154398 adxf_cmd_hstry_x00154398[(16)] __asm__("D_00402958");
extern Sint16_x00154398 adxf_cmd_ncall_x00154398[(16)] __asm__("D_00402A58");
extern Sint32_x00154398 adxf_hstry_no_x00154398 __asm__("D_00402A78");
extern Sint32_x00154398 adxf_flno_x00154398 __asm__("D_00402A7C");
extern ADXF_x00154398 adxf_ldptnw_hn_x00154398 __asm__("D_00402A80");
extern Sint32_x00154398 adxf_ldptnw_ptid_x00154398 __asm__("D_00402A84");
void func_00154398_x00154398() __asm__("func_00154398");
/* ADXF_Init: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fini.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00154398_x00154398() {
    adxf_build_x00154398;
    if (adxf_init_cnt_x00154398 == 0) {
        memset_x00154398(adxf_obj_x00154398, 0, sizeof(adxf_obj_x00154398));
        memset_x00154398(adxf_ptinfo_x00154398, 0, sizeof(adxf_ptinfo_x00154398));
        memset_x00154398(adxf_cmd_hstry_x00154398, 0xFF, sizeof(adxf_cmd_hstry_x00154398));
        memset_x00154398(adxf_cmd_ncall_x00154398, 0, sizeof(adxf_cmd_ncall_x00154398));
        adxf_hstry_no_x00154398 = 0;
        adxf_ocbi_fg_x00154398 = 0;
        adxf_flno_x00154398 = 0;
        adxf_ldptnw_hn_x00154398 = 0;
        adxf_ldptnw_ptid_x00154398 = -1;
    }
    adxf_init_cnt_x00154398 += 1;
}
typedef unsigned int size_t_x00154460;
typedef int s32_x00154460;
typedef s32_x00154460 intptr_t_x00154460;
typedef unsigned char Uint8_x00154460;
typedef char Sint8_x00154460;
typedef unsigned short Uint16_x00154460;
typedef signed short Sint16_x00154460;
typedef unsigned int Uint32_x00154460;
typedef signed int Sint32_x00154460;
typedef char Char8_x00154460;
typedef struct _UUID_x00154460 {
    Uint32_x00154460 Data1;
    Uint16_x00154460 Data2;
    Uint16_x00154460 Data3;
    Uint8_x00154460 Data4[8];
} UUID_x00154460;
typedef struct {
        Sint8_x00154460 *data;
        Sint32_x00154460 len;
} SJCK_x00154460;
typedef struct {
        struct _sj_vtbl_x00154460 *vtbl;
} SJ_OBJ_x00154460;
typedef SJ_OBJ_x00154460 *SJ_x00154460;
typedef struct _sj_vtbl_x00154460 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00154460 sj);
        UUID_x00154460 *(*GetUuid)(SJ_x00154460 sj);
        void (*Reset)(SJ_x00154460 sj);
        void (*GetChunk)(SJ_x00154460 sj, Sint32_x00154460 id, Sint32_x00154460 nbyte, SJCK_x00154460 *ck);
        void (*UngetChunk)(SJ_x00154460 sj, Sint32_x00154460 id, SJCK_x00154460 *ck);
        void (*PutChunk)(SJ_x00154460 sj, Sint32_x00154460 id, SJCK_x00154460 *ck);
        Sint32_x00154460 (*GetNumData)(SJ_x00154460 sj, Sint32_x00154460 id);
        Sint32_x00154460 (*IsGetChunk)(SJ_x00154460 sj, Sint32_x00154460 id, Sint32_x00154460 nbyte, Sint32_x00154460 *rbyte);
        void (*EntryErrFunc)(SJ_x00154460 sj,
                                        void (*func)(void *obj, Sint32_x00154460 ecode), void *obj);
} SJ_IF_x00154460;
typedef void *ADXSTM_x00154460;
typedef struct _adx_fs_x00154460 {
    Sint8_x00154460 used;
    Sint8_x00154460 stat;
    Sint8_x00154460 sjflag;
    Sint8_x00154460 stopnw_flg;
    ADXSTM_x00154460 stm;
    SJ_x00154460 sj;
    Sint32_x00154460 fnsct;
    Sint32_x00154460 fsize;
    Sint32_x00154460 skpos;
    Sint32_x00154460 rdstpos;
    Sint32_x00154460 rqsct;
    Sint32_x00154460 rdsct;
    Sint8_x00154460 *buf;
    Sint32_x00154460 bsize;
    Sint32_x00154460 rqrdsct;
    Sint32_x00154460 ofst;
    void *dir;
    const Char8_x00154460 *unk38;
    Sint32_x00154460 unk3C;
    Sint32_x00154460 unk40;
} ADX_FS_x00154460;
typedef ADX_FS_x00154460 *ADXF_x00154460;
typedef struct _adxf_ptinfo_x00154460 {
    struct _adxf_ptinfo_x00154460 *next;
    Sint32_x00154460 size;
    Sint32_x00154460 nfile;
    Uint16_x00154460 nentry;
    Sint8_x00154460 type;
    Sint8_x00154460 rev;
    Sint8_x00154460 fname[(256)];
    void *curdir;
    Sint32_x00154460 ofst;
    Sint32_x00154460 top;
    Sint32_x00154460 file_sizes[0];
} ADXF_PTINFO_x00154460;
typedef struct _adxf_cmd_hstry_x00154460 {
    Uint8_x00154460 cmdid;
    Uint8_x00154460 fg;
    Uint16_x00154460 ncall;
    intptr_t_x00154460 prm[3];
} ADXF_CMD_HSTRY_x00154460;
void ADXF_CloseAll_x00154460(void) __asm__("func_00155458");
extern ADX_FS_x00154460 adxf_obj_x00154460[(16)] __asm__("lbl_80186B68");
extern ADXF_PTINFO_x00154460* adxf_ptinfo_x00154460[(256)] __asm__("D_00402550");
extern Sint32_x00154460 adxf_ocbi_fg_x00154460 __asm__("D_00402950");
extern ADXF_CMD_HSTRY_x00154460 adxf_cmd_hstry_x00154460[(16)] __asm__("D_00402958");
extern Sint16_x00154460 adxf_cmd_ncall_x00154460[(16)] __asm__("D_00402A58");
extern Sint32_x00154460 adxf_hstry_no_x00154460 __asm__("D_00402A78");
extern ADXF_x00154460 adxf_ldptnw_hn_x00154460 __asm__("D_00402A80");
extern Sint32_x00154460 adxf_ldptnw_ptid_x00154460 __asm__("D_00402A84");
extern Sint32_x00154460 adxf_flno_x00154460 __asm__("D_00402A7C");
void* memset_x00154460(void* s, int c, size_t_x00154460 n) __asm__("memset");
extern Sint32_x00154460 adxf_init_cnt_x00154460 __asm__("D_0040210C");
extern ADX_FS_x00154460 adxf_obj_x00154460[(16)] __asm__("lbl_80186B68");
extern ADXF_PTINFO_x00154460* adxf_ptinfo_x00154460[(256)] __asm__("D_00402550");
extern Sint32_x00154460 adxf_ocbi_fg_x00154460 __asm__("D_00402950");
extern ADXF_CMD_HSTRY_x00154460 adxf_cmd_hstry_x00154460[(16)] __asm__("D_00402958");
extern Sint16_x00154460 adxf_cmd_ncall_x00154460[(16)] __asm__("D_00402A58");
extern Sint32_x00154460 adxf_hstry_no_x00154460 __asm__("D_00402A78");
extern Sint32_x00154460 adxf_flno_x00154460 __asm__("D_00402A7C");
extern ADXF_x00154460 adxf_ldptnw_hn_x00154460 __asm__("D_00402A80");
extern Sint32_x00154460 adxf_ldptnw_ptid_x00154460 __asm__("D_00402A84");
void func_00154460_x00154460() __asm__("func_00154460");
/* ADXF_Finish: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fini.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00154460_x00154460() {
    if (--adxf_init_cnt_x00154460 == 0) {
        ADXF_CloseAll_x00154460();
        adxf_ldptnw_ptid_x00154460 = -1;
        adxf_ldptnw_hn_x00154460 = 0;
        adxf_flno_x00154460 = 0;
        adxf_ocbi_fg_x00154460 = 0;
        adxf_hstry_no_x00154460 = 0;
        memset_x00154460(adxf_cmd_ncall_x00154460, 0, sizeof(adxf_cmd_ncall_x00154460));
        memset_x00154460(adxf_cmd_hstry_x00154460, 0xFF, sizeof(adxf_cmd_hstry_x00154460));
        memset_x00154460(adxf_ptinfo_x00154460, 0, sizeof(adxf_ptinfo_x00154460));
        memset_x00154460(adxf_obj_x00154460, 0, sizeof(adxf_obj_x00154460));
    }
}
typedef signed int Sint32_x00154520;
extern int* sceCdCallback_x00154520(void (*func)(int)) __asm__("sceCdCallback");
Sint32_x00154520 func_00154520_x00154520(Sint32_x00154520 bytes) __asm__("func_00154520");
/* ADXF_CALC_BYTE2SCT: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x00154520 func_00154520_x00154520(Sint32_x00154520 bytes) {
    Sint32_x00154520 result = bytes / 2048;
    if (bytes % 2048 > 0) {
        result += 1;
    }
    return result;
}
typedef int s32_x00154548;
typedef s32_x00154548 intptr_t_x00154548;
typedef unsigned char Uint8_x00154548;
typedef unsigned short Uint16_x00154548;
typedef signed short Sint16_x00154548;
typedef signed int Sint32_x00154548;
extern int* sceCdCallback_x00154548(void (*func)(int)) __asm__("sceCdCallback");
typedef struct _adxf_cmd_hstry_x00154548 {
    Uint8_x00154548 cmdid;
    Uint8_x00154548 fg;
    Uint16_x00154548 ncall;
    intptr_t_x00154548 prm[3];
} ADXF_CMD_HSTRY_x00154548;
extern ADXF_CMD_HSTRY_x00154548 adxf_cmd_hstry_x00154548[(16)] __asm__("D_00402958");
extern Sint16_x00154548 adxf_cmd_ncall_x00154548[(16)] __asm__("D_00402A58");
extern Sint32_x00154548 adxf_hstry_no_x00154548 __asm__("D_00402A78");
void func_00154548_x00154548(Sint32_x00154548 cmdid, Sint32_x00154548 fg, intptr_t_x00154548 prm_0, intptr_t_x00154548 prm_1, intptr_t_x00154548 prm_2) __asm__("func_00154548");
/* adxf_SetCmdHstry: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00154548_x00154548(Sint32_x00154548 cmdid, Sint32_x00154548 fg, intptr_t_x00154548 prm_0, intptr_t_x00154548 prm_1, intptr_t_x00154548 prm_2) {
    ADXF_CMD_HSTRY_x00154548* cmd_hstry;
    adxf_hstry_no_x00154548 %= (16);
    cmd_hstry = &adxf_cmd_hstry_x00154548[adxf_hstry_no_x00154548];
    if (fg == 0) {
        adxf_cmd_ncall_x00154548[cmdid] += 1;
    }
    adxf_hstry_no_x00154548 += 1;
    cmd_hstry->cmdid = cmdid;
    cmd_hstry->fg = fg;
    cmd_hstry->ncall = adxf_cmd_ncall_x00154548[cmdid];
    cmd_hstry->prm[0] = prm_0;
    cmd_hstry->prm[1] = prm_1;
    cmd_hstry->prm[2] = prm_2;
}
typedef signed int Sint32_x001545F8;
extern int* sceCdCallback_x001545F8(void (*func)(int)) __asm__("sceCdCallback");
void func_001545F8_x001545F8() __asm__("func_001545F8");
/* adxf_wait_1ms: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001545F8_x001545F8() {
    Sint32_x001545F8 i;
    for (i = 0; i < 50000; i++) {
    }
}
typedef signed char Sint8_x00154628;
typedef signed int Sint32_x00154628;
typedef unsigned int Uint32_x00154628;
extern void func_0033F130_x00154628(const Sint8_x00154628 *msg) __asm__("ADXERR_CallErrFunc1");
extern const Sint8_x00154628 D_00451390_x00154628[] __asm__("D_00460558");
extern const Sint8_x00154628 D_004513C8_x00154628[] __asm__("D_00460590");
Sint32_x00154628 adxf_ChkPrmPt_x00154628(Sint32_x00154628 ptid, void *ptinfo) __asm__("adxf_ChkPrmPt");
/* adxf_ChkPrmPt_x00154628: from https://github.com/LucasPicoli/god-hand-decomp (src/cod/003229.c, MIT); ee-gcc 2.96 -O2 -G0 */
Sint32_x00154628 adxf_ChkPrmPt_x00154628(Sint32_x00154628 ptid, void *ptinfo) {
    if ((Uint32_x00154628)ptid >= 0x100) {
        func_0033F130_x00154628(D_00451390_x00154628);
        return -3;
    }
    if (ptinfo == 0) {
        func_0033F130_x00154628(D_004513C8_x00154628);
        return -3;
    }
    return 0;
}
s32 func_00154690_x00154670() __asm__("func_00154690");
void func_00154670_x00154670(s32 arg0, s32 arg1, s32 arg2) __asm__("func_00154670");
void func_00154670_x00154670(s32 arg0, s32 arg1, s32 arg2) {
    func_00154690_x00154670(arg0, arg1, 0, arg2);
}
typedef struct SfdSj_x00154690 SfdSj_x00154690;
typedef struct SfdSjChunk_x00154690 {
    char *data;
    int len;
} SfdSjChunk_x00154690;
typedef struct SfdSjVtbl_x00154690 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00154690 *sj);
    int (*getUuid)(SfdSj_x00154690 *sj);
    void (*reset)(SfdSj_x00154690 *sj);
    void (*getChunk)(SfdSj_x00154690 *sj, int id, int n, SfdSjChunk_x00154690 *ck);
    void (*ungetChunk)(SfdSj_x00154690 *sj, int id, SfdSjChunk_x00154690 *ck);
    void (*putChunk)(SfdSj_x00154690 *sj, int id, SfdSjChunk_x00154690 *ck);
    int (*getNumData)(SfdSj_x00154690 *sj, int id);
} SfdSjVtbl_x00154690;
struct SfdSj_x00154690 {
    SfdSjVtbl_x00154690 *vtbl;
};
typedef struct AdxfPtInfo_x00154690 AdxfPtInfo_x00154690;
int ADXF_LoadPartitionNw_x00154690(int ptid, const char *fname, void *dir, AdxfPtInfo_x00154690 *ptinfo) __asm__("func_00154710");
int ADXF_GetPtStatEx_x00154690(int ptid) __asm__("func_00154B68");
typedef void (*CvFsErrFn_x00154690)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00154690)(CvFsErrFn_x00154690 func, void *obj);
typedef int (*CvFsPathFn_x00154690)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00154690)(void);
typedef int (*CvFsOpenFn_x00154690)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00154690)(int fd);
typedef int (*CvFsFdIntFn_x00154690)(int fd);
typedef int (*CvFsSeekFn_x00154690)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00154690)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00154690)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00154690)(void);
typedef int (*CvFsLoadDirInfoFn_x00154690)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00154690)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00154690)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00154690 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00154690 entry_err_func;
    CvFsPathFn_x00154690 get_file_size;
    CvFsGetFreeSizeFn_x00154690 get_free_size;
    CvFsOpenFn_x00154690 open;
    CvFsFdFn_x00154690 close_x00154690;
    CvFsSeekFn_x00154690 seek;
    CvFsFdIntFn_x00154690 tell;
    CvFsXferFn_x00154690 req_rd;
    CvFsXferFn_x00154690 req_wr;
    CvFsFdFn_x00154690 stop_tr;
    CvFsFdIntFn_x00154690 get_stat;
    CvFsFdIntFn_x00154690 get_sct_len;
    CvFsSetSctLenFn_x00154690 set_sct_len;
    CvFsFdIntFn_x00154690 get_num_tr;
    CvFsPathFn_x00154690 change_dir;
    CvFsPathFn_x00154690 is_exist_file;
    CvFsGetNumFilesFn_x00154690 get_num_files;
    CvFsLoadDirInfoFn_x00154690 load_dir_info;
    CvFsFdIntFn_x00154690 get_max_byte_rate;
    CvFsPathFn_x00154690 make_dir;
    CvFsPathFn_x00154690 remove_dir;
    CvFsPathFn_x00154690 delete_file;
    CvFsGetFileSizeExFn_x00154690 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00154690 opt_fn2;
} CvFsVtbl_x00154690;
typedef struct CvFsHandle_x00154690 {
    CvFsVtbl_x00154690 *vtbl;
    int fd;
} CvFsHandle_x00154690;
extern CvFsVtbl_x00154690 *addDevice_x00154690(char *devname, CvFsVtbl_x00154690 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00154690 {
    signed char used;
    signed char stat_x00154690;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00154690 *sj;
    CvFsHandle_x00154690 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00154690 rdck;
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
} AdxStmObj_x00154690;
extern void ADXSTM_EntryEosFunc_x00154690(AdxStmObj_x00154690 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
void ADXM_ExecMain_x00154690(void) __asm__("func_00157FF0");
struct stat_x00154690;
int close_x00154690(int fd) __asm__("close");
struct AdxfPtInfo_x00154690 {
    AdxfPtInfo_x00154690 *next;
    int size;
    int nfile;
    unsigned short nfile16;
    signed char f14;
    signed char type;
    char fname[256];
    void *dir;
    int base;
    unsigned int top;
};
void adxf_wait_1ms_x00154690(void) __asm__("func_001545F8");
int ADXF_LoadPartitionNw_x00154690(int ptid, const char *fname, void *dir, AdxfPtInfo_x00154690 *ptinfo) __asm__("func_00154710");
int ADXF_GetPtStatEx_x00154690(int ptid) __asm__("func_00154B68");
int func_00154690_x00154690(int ptid, const char *fname, void *dir, AdxfPtInfo_x00154690 *ptinfo) __asm__("func_00154690");
/* ADXF_LoadPartitionEx: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00154690_x00154690(int ptid, const char *fname, void *dir, AdxfPtInfo_x00154690 *ptinfo) {
    int result = ADXF_LoadPartitionNw_x00154690(ptid, fname, dir, ptinfo);
    int status;
    if (result < 0) {
        return result;
    }
    for (;;) {
        status = ADXF_GetPtStatEx_x00154690(ptid);
        if (status == 3) {
            result = 0;
            break;
        }
        if (status == 4) {
            result = -1;
            break;
        }
        ADXM_ExecMain_x00154690();
        adxf_wait_1ms_x00154690();
    }
    return result;
}
s32 func_001547B0_x00154710(s32, s32, s32, s32, s32, s32) __asm__("func_001547B0");
extern u8 D_00402B20_x00154710[] __asm__("D_00402B20");
s32 func_00154710_x00154710(s32 a0, s32 a1, s32 a2, s32 a3) __asm__("func_00154710");
s32 func_00154710_x00154710(s32 a0, s32 a1, s32 a2, s32 a3)
{
    return func_001547B0_x00154710(a0, a1, a2, a3, (s32)D_00402B20_x00154710 & ~0x3F, 0x800);
}
s32 func_001547F8_x00154738(s32, s32, s32, s32, s32, s32) __asm__("func_001547F8");
extern u8 D_00402B20_x00154738[] __asm__("D_00402B20");
s32 func_00154738_x00154738(s32 a0, s32 a1, s32 a2, s32 a3) __asm__("func_00154738");
s32 func_00154738_x00154738(s32 a0, s32 a1, s32 a2, s32 a3)
{
    return func_001547F8_x00154738(a0, a1, a2, a3, (s32)D_00402B20_x00154738 & ~0x3F, 0x800);
}
s32 func_00154830_x00154760(s32, s32, s32, s32, s32, s32) __asm__("func_00154830");
extern u8 D_00402B20_x00154760[] __asm__("D_00402B20");
s32 func_00154760_x00154760(s32 a0, s32 a1, s32 a2, s32 a3) __asm__("func_00154760");
s32 func_00154760_x00154760(s32 a0, s32 a1, s32 a2, s32 a3) {
    return func_00154830_x00154760(a0, a1, a2, a3, (s32)D_00402B20_x00154760 & ~0x3F, 0x800);
}
s32 func_00154878_x00154788(s32, s32, s32, s32, s32, s32) __asm__("func_00154878");
extern u8 D_00402B20_x00154788[] __asm__("D_00402B20");
s32 func_00154788_x00154788(s32 a0, s32 a1, s32 a2, s32 a3) __asm__("func_00154788");
s32 func_00154788_x00154788(s32 a0, s32 a1, s32 a2, s32 a3) {
    return func_00154878_x00154788(a0, a1, a2, a3, (s32)D_00402B20_x00154788 & ~0x3F, 0x800);
}
typedef char Sint8_x001547B0;
typedef unsigned short Uint16_x001547B0;
typedef signed int Sint32_x001547B0;
typedef char Char8_x001547B0;
extern int* sceCdCallback_x001547B0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct _adxf_ptinfo_x001547B0 {
    struct _adxf_ptinfo_x001547B0 *next;
    Sint32_x001547B0 size;
    Sint32_x001547B0 nfile;
    Uint16_x001547B0 nentry;
    Sint8_x001547B0 type;
    Sint8_x001547B0 rev;
    Sint8_x001547B0 fname[(256)];
    void *curdir;
    Sint32_x001547B0 ofst;
    Sint32_x001547B0 top;
    Sint32_x001547B0 file_sizes[0];
} ADXF_PTINFO_x001547B0;
Sint32_x001547B0 adxf_LoadPtBothNw_x001547B0(Sint32_x001547B0 ptid, Sint32_x001547B0 arg1, Sint32_x001547B0 arg2, Char8_x001547B0* fname, void* dir, ADXF_PTINFO_x001547B0* ptinfo, void* tmpbuf, Sint32_x001547B0 tbsize, Sint32_x001547B0 rev) __asm__("func_001548B0");
Sint32_x001547B0 adxf_LoadPtBothNw_x001547B0(Sint32_x001547B0 ptid, Sint32_x001547B0 arg1, Sint32_x001547B0 arg2, Char8_x001547B0* fname, void* dir, ADXF_PTINFO_x001547B0* ptinfo,
                         void* tmpbuf, Sint32_x001547B0 tbsize, Sint32_x001547B0 rev) __asm__("func_001548B0");
Sint32_x001547B0 func_001547B0_x001547B0(Sint32_x001547B0 ptid, Char8_x001547B0* fname, void* dir, void* ptinfo, void* tmpbuf, Sint32_x001547B0 tbsize) __asm__("func_001547B0");
/* ADXF_LoadPtNwEx: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001547B0 func_001547B0_x001547B0(Sint32_x001547B0 ptid, Char8_x001547B0* fname, void* dir, void* ptinfo, void* tmpbuf, Sint32_x001547B0 tbsize) {
    return adxf_LoadPtBothNw_x001547B0(ptid, 0, 0, fname, dir, (ADXF_PTINFO_x001547B0*)ptinfo, tmpbuf, tbsize, 0);
}
typedef struct SfdSj_x001547F8 SfdSj_x001547F8;
typedef struct SfdSjChunk_x001547F8 {
    char *data;
    int len;
} SfdSjChunk_x001547F8;
typedef struct SfdSjVtbl_x001547F8 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x001547F8 *sj);
    int (*getUuid)(SfdSj_x001547F8 *sj);
    void (*reset)(SfdSj_x001547F8 *sj);
    void (*getChunk)(SfdSj_x001547F8 *sj, int id, int n, SfdSjChunk_x001547F8 *ck);
    void (*ungetChunk)(SfdSj_x001547F8 *sj, int id, SfdSjChunk_x001547F8 *ck);
    void (*putChunk)(SfdSj_x001547F8 *sj, int id, SfdSjChunk_x001547F8 *ck);
    int (*getNumData)(SfdSj_x001547F8 *sj, int id);
} SfdSjVtbl_x001547F8;
struct SfdSj_x001547F8 {
    SfdSjVtbl_x001547F8 *vtbl;
};
typedef struct AdxfPtInfo_x001547F8 AdxfPtInfo_x001547F8;
typedef void (*CvFsErrFn_x001547F8)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x001547F8)(CvFsErrFn_x001547F8 func, void *obj);
typedef int (*CvFsPathFn_x001547F8)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x001547F8)(void);
typedef int (*CvFsOpenFn_x001547F8)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x001547F8)(int fd);
typedef int (*CvFsFdIntFn_x001547F8)(int fd);
typedef int (*CvFsSeekFn_x001547F8)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x001547F8)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x001547F8)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x001547F8)(void);
typedef int (*CvFsLoadDirInfoFn_x001547F8)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x001547F8)(const char *path, int arg);
typedef int (*CvFsOptFn2_x001547F8)(int fd, int code, int arg);
typedef struct CvFsVtbl_x001547F8 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x001547F8 entry_err_func;
    CvFsPathFn_x001547F8 get_file_size;
    CvFsGetFreeSizeFn_x001547F8 get_free_size;
    CvFsOpenFn_x001547F8 open;
    CvFsFdFn_x001547F8 close_x001547F8;
    CvFsSeekFn_x001547F8 seek;
    CvFsFdIntFn_x001547F8 tell;
    CvFsXferFn_x001547F8 req_rd;
    CvFsXferFn_x001547F8 req_wr;
    CvFsFdFn_x001547F8 stop_tr;
    CvFsFdIntFn_x001547F8 get_stat;
    CvFsFdIntFn_x001547F8 get_sct_len;
    CvFsSetSctLenFn_x001547F8 set_sct_len;
    CvFsFdIntFn_x001547F8 get_num_tr;
    CvFsPathFn_x001547F8 change_dir;
    CvFsPathFn_x001547F8 is_exist_file;
    CvFsGetNumFilesFn_x001547F8 get_num_files;
    CvFsLoadDirInfoFn_x001547F8 load_dir_info;
    CvFsFdIntFn_x001547F8 get_max_byte_rate;
    CvFsPathFn_x001547F8 make_dir;
    CvFsPathFn_x001547F8 remove_dir;
    CvFsPathFn_x001547F8 delete_file;
    CvFsGetFileSizeExFn_x001547F8 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x001547F8 opt_fn2;
} CvFsVtbl_x001547F8;
typedef struct CvFsHandle_x001547F8 {
    CvFsVtbl_x001547F8 *vtbl;
    int fd;
} CvFsHandle_x001547F8;
extern CvFsVtbl_x001547F8 *addDevice_x001547F8(char *devname, CvFsVtbl_x001547F8 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x001547F8 {
    signed char used;
    signed char stat_x001547F8;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x001547F8 *sj;
    CvFsHandle_x001547F8 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x001547F8 rdck;
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
} AdxStmObj_x001547F8;
extern void ADXSTM_EntryEosFunc_x001547F8(AdxStmObj_x001547F8 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
struct stat_x001547F8;
int close_x001547F8(int fd) __asm__("close");
struct AdxfPtInfo_x001547F8 {
    AdxfPtInfo_x001547F8 *next;
    int size;
    int nfile;
    unsigned short nfile16;
    signed char f14;
    signed char type;
    char fname[256];
    void *dir;
    int base;
    unsigned int top;
};
int adxf_LoadPtBothNw_x001547F8(int ptid, int afsid, int flid, const char *fname, void *dir, AdxfPtInfo_x001547F8 *ptinfo, void *tmpbuf, int tbsize, int type) __asm__("func_001548B0");
int adxf_LoadPtBothNw_x001547F8(int ptid, int afsid, int flid, const char *fname, void *dir, AdxfPtInfo_x001547F8 *ptinfo,
                 void *tmpbuf, int tbsize, int type) __asm__("func_001548B0");
int func_001547F8_x001547F8(int ptid, int afsid, int flid, AdxfPtInfo_x001547F8 *ptinfo, void *tmpbuf, int tbsize) __asm__("func_001547F8");
/* ADXF_LoadPtFromAfsNwEx: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_001547F8_x001547F8(int ptid, int afsid, int flid, AdxfPtInfo_x001547F8 *ptinfo, void *tmpbuf, int tbsize) {
    return adxf_LoadPtBothNw_x001547F8(ptid, afsid, flid, 0, 0, ptinfo, tmpbuf, tbsize, 0);
}
typedef struct SfdSj_x00154830 SfdSj_x00154830;
typedef struct SfdSjChunk_x00154830 {
    char *data;
    int len;
} SfdSjChunk_x00154830;
typedef struct SfdSjVtbl_x00154830 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00154830 *sj);
    int (*getUuid)(SfdSj_x00154830 *sj);
    void (*reset)(SfdSj_x00154830 *sj);
    void (*getChunk)(SfdSj_x00154830 *sj, int id, int n, SfdSjChunk_x00154830 *ck);
    void (*ungetChunk)(SfdSj_x00154830 *sj, int id, SfdSjChunk_x00154830 *ck);
    void (*putChunk)(SfdSj_x00154830 *sj, int id, SfdSjChunk_x00154830 *ck);
    int (*getNumData)(SfdSj_x00154830 *sj, int id);
} SfdSjVtbl_x00154830;
struct SfdSj_x00154830 {
    SfdSjVtbl_x00154830 *vtbl;
};
typedef struct AdxfPtInfo_x00154830 AdxfPtInfo_x00154830;
typedef void (*CvFsErrFn_x00154830)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00154830)(CvFsErrFn_x00154830 func, void *obj);
typedef int (*CvFsPathFn_x00154830)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00154830)(void);
typedef int (*CvFsOpenFn_x00154830)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00154830)(int fd);
typedef int (*CvFsFdIntFn_x00154830)(int fd);
typedef int (*CvFsSeekFn_x00154830)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00154830)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00154830)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00154830)(void);
typedef int (*CvFsLoadDirInfoFn_x00154830)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00154830)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00154830)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00154830 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00154830 entry_err_func;
    CvFsPathFn_x00154830 get_file_size;
    CvFsGetFreeSizeFn_x00154830 get_free_size;
    CvFsOpenFn_x00154830 open;
    CvFsFdFn_x00154830 close_x00154830;
    CvFsSeekFn_x00154830 seek;
    CvFsFdIntFn_x00154830 tell;
    CvFsXferFn_x00154830 req_rd;
    CvFsXferFn_x00154830 req_wr;
    CvFsFdFn_x00154830 stop_tr;
    CvFsFdIntFn_x00154830 get_stat;
    CvFsFdIntFn_x00154830 get_sct_len;
    CvFsSetSctLenFn_x00154830 set_sct_len;
    CvFsFdIntFn_x00154830 get_num_tr;
    CvFsPathFn_x00154830 change_dir;
    CvFsPathFn_x00154830 is_exist_file;
    CvFsGetNumFilesFn_x00154830 get_num_files;
    CvFsLoadDirInfoFn_x00154830 load_dir_info;
    CvFsFdIntFn_x00154830 get_max_byte_rate;
    CvFsPathFn_x00154830 make_dir;
    CvFsPathFn_x00154830 remove_dir;
    CvFsPathFn_x00154830 delete_file;
    CvFsGetFileSizeExFn_x00154830 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00154830 opt_fn2;
} CvFsVtbl_x00154830;
typedef struct CvFsHandle_x00154830 {
    CvFsVtbl_x00154830 *vtbl;
    int fd;
} CvFsHandle_x00154830;
extern CvFsVtbl_x00154830 *addDevice_x00154830(char *devname, CvFsVtbl_x00154830 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00154830 {
    signed char used;
    signed char stat_x00154830;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00154830 *sj;
    CvFsHandle_x00154830 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00154830 rdck;
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
} AdxStmObj_x00154830;
extern void ADXSTM_EntryEosFunc_x00154830(AdxStmObj_x00154830 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
struct stat_x00154830;
int close_x00154830(int fd) __asm__("close");
struct AdxfPtInfo_x00154830 {
    AdxfPtInfo_x00154830 *next;
    int size;
    int nfile;
    unsigned short nfile16;
    signed char f14;
    signed char type;
    char fname[256];
    void *dir;
    int base;
    unsigned int top;
};
int adxf_LoadPtBothNw_x00154830(int ptid, int afsid, int flid, const char *fname, void *dir, AdxfPtInfo_x00154830 *ptinfo, void *tmpbuf, int tbsize, int type) __asm__("func_001548B0");
int adxf_LoadPtBothNw_x00154830(int ptid, int afsid, int flid, const char *fname, void *dir, AdxfPtInfo_x00154830 *ptinfo,
                 void *tmpbuf, int tbsize, int type) __asm__("func_001548B0");
int func_00154830_x00154830(int ptid, const char *fname, void *dir, AdxfPtInfo_x00154830 *ptinfo, void *tmpbuf, int tbsize) __asm__("func_00154830");
/* ADXF_LoadPtFmgLongNwEx: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00154830_x00154830(int ptid, const char *fname, void *dir, AdxfPtInfo_x00154830 *ptinfo, void *tmpbuf, int tbsize) {
    return adxf_LoadPtBothNw_x00154830(ptid, 0, 0, fname, dir, ptinfo, tmpbuf, tbsize, 1);
}
typedef struct SfdSj_x00154878 SfdSj_x00154878;
typedef struct SfdSjChunk_x00154878 {
    char *data;
    int len;
} SfdSjChunk_x00154878;
typedef struct SfdSjVtbl_x00154878 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00154878 *sj);
    int (*getUuid)(SfdSj_x00154878 *sj);
    void (*reset)(SfdSj_x00154878 *sj);
    void (*getChunk)(SfdSj_x00154878 *sj, int id, int n, SfdSjChunk_x00154878 *ck);
    void (*ungetChunk)(SfdSj_x00154878 *sj, int id, SfdSjChunk_x00154878 *ck);
    void (*putChunk)(SfdSj_x00154878 *sj, int id, SfdSjChunk_x00154878 *ck);
    int (*getNumData)(SfdSj_x00154878 *sj, int id);
} SfdSjVtbl_x00154878;
struct SfdSj_x00154878 {
    SfdSjVtbl_x00154878 *vtbl;
};
typedef struct AdxfPtInfo_x00154878 AdxfPtInfo_x00154878;
typedef void (*CvFsErrFn_x00154878)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00154878)(CvFsErrFn_x00154878 func, void *obj);
typedef int (*CvFsPathFn_x00154878)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00154878)(void);
typedef int (*CvFsOpenFn_x00154878)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00154878)(int fd);
typedef int (*CvFsFdIntFn_x00154878)(int fd);
typedef int (*CvFsSeekFn_x00154878)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00154878)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00154878)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00154878)(void);
typedef int (*CvFsLoadDirInfoFn_x00154878)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00154878)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00154878)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00154878 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00154878 entry_err_func;
    CvFsPathFn_x00154878 get_file_size;
    CvFsGetFreeSizeFn_x00154878 get_free_size;
    CvFsOpenFn_x00154878 open;
    CvFsFdFn_x00154878 close_x00154878;
    CvFsSeekFn_x00154878 seek;
    CvFsFdIntFn_x00154878 tell;
    CvFsXferFn_x00154878 req_rd;
    CvFsXferFn_x00154878 req_wr;
    CvFsFdFn_x00154878 stop_tr;
    CvFsFdIntFn_x00154878 get_stat;
    CvFsFdIntFn_x00154878 get_sct_len;
    CvFsSetSctLenFn_x00154878 set_sct_len;
    CvFsFdIntFn_x00154878 get_num_tr;
    CvFsPathFn_x00154878 change_dir;
    CvFsPathFn_x00154878 is_exist_file;
    CvFsGetNumFilesFn_x00154878 get_num_files;
    CvFsLoadDirInfoFn_x00154878 load_dir_info;
    CvFsFdIntFn_x00154878 get_max_byte_rate;
    CvFsPathFn_x00154878 make_dir;
    CvFsPathFn_x00154878 remove_dir;
    CvFsPathFn_x00154878 delete_file;
    CvFsGetFileSizeExFn_x00154878 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00154878 opt_fn2;
} CvFsVtbl_x00154878;
typedef struct CvFsHandle_x00154878 {
    CvFsVtbl_x00154878 *vtbl;
    int fd;
} CvFsHandle_x00154878;
extern CvFsVtbl_x00154878 *addDevice_x00154878(char *devname, CvFsVtbl_x00154878 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00154878 {
    signed char used;
    signed char stat_x00154878;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00154878 *sj;
    CvFsHandle_x00154878 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00154878 rdck;
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
} AdxStmObj_x00154878;
extern void ADXSTM_EntryEosFunc_x00154878(AdxStmObj_x00154878 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
struct stat_x00154878;
int close_x00154878(int fd) __asm__("close");
struct AdxfPtInfo_x00154878 {
    AdxfPtInfo_x00154878 *next;
    int size;
    int nfile;
    unsigned short nfile16;
    signed char f14;
    signed char type;
    char fname[256];
    void *dir;
    int base;
    unsigned int top;
};
int adxf_LoadPtBothNw_x00154878(int ptid, int afsid, int flid, const char *fname, void *dir, AdxfPtInfo_x00154878 *ptinfo, void *tmpbuf, int tbsize, int type) __asm__("func_001548B0");
int adxf_LoadPtBothNw_x00154878(int ptid, int afsid, int flid, const char *fname, void *dir, AdxfPtInfo_x00154878 *ptinfo,
                 void *tmpbuf, int tbsize, int type) __asm__("func_001548B0");
int func_00154878_x00154878(int ptid, int afsid, int flid, AdxfPtInfo_x00154878 *ptinfo, void *tmpbuf, int tbsize) __asm__("func_00154878");
/* ADXF_LoadPtFromAfsFmgLongNwEx: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int func_00154878_x00154878(int ptid, int afsid, int flid, AdxfPtInfo_x00154878 *ptinfo, void *tmpbuf, int tbsize) {
    return adxf_LoadPtBothNw_x00154878(ptid, afsid, flid, 0, 0, ptinfo, tmpbuf, tbsize, 1);
}
typedef struct Pt_48B0_x001548B0 { struct Pt_48B0_x001548B0 *next; int size; int nfile; unsigned short nentry; signed char type; signed char rev; char fname[256]; void *curdir; int ofst; int top; } Pt_48B0_x001548B0;
extern Pt_48B0_x001548B0 *D_00402550_x001548B0[256] __asm__("D_00402550");
extern int D_00402A7C_x001548B0 __asm__("D_00402A7C");
extern void *D_00402A80_x001548B0 __asm__("D_00402A80");
extern int D_00402A84_x001548B0 __asm__("D_00402A84");
extern void *D_00402A88_x001548B0 __asm__("D_00402A88");
extern int D_00402A8C_x001548B0 __asm__("D_00402A8C");
extern char D_004605C0_x001548B0[] __asm__("D_004605C0");
extern char D_004605F0_x001548B0[] __asm__("D_004605F0");
extern char D_00460618_x001548B0[] __asm__("D_00460618");
extern char D_00460648_x001548B0[] __asm__("D_00460648");
int ADXERR_CallErrFunc1_x001548B0(char *) __asm__("ADXERR_CallErrFunc1");
int adxf_ChkPrmPt_x001548B0(int, void *) __asm__("adxf_ChkPrmPt");
void *memset_x001548B0(void *, int, unsigned int) __asm__("memset");
void *func_00155290_x001548B0(int, int) __asm__("func_00155290");
int func_00155E40_x001548B0(int, int, char *, void **, int *, int *) __asm__("func_00155E40");
void *func_00155118_x001548B0(char *, void *) __asm__("func_00155118");
char *func_00128040_x001548B0(char *, char *, int) __asm__("func_00128040");
int ADXF_ReadNw_x001548B0(void *, int, void *) __asm__("ADXF_ReadNw");
void fn_8004FC94_x001548B0(void *) __asm__("fn_8004FC94");
int func_001548B0_x001548B0(int ptid, int arg1, int arg2, char *fname, void *dir, Pt_48B0_x001548B0 *ptinfo, void *tmpbuf, int tbsize, int rev) __asm__("func_001548B0");
int func_001548B0_x001548B0(int ptid, int arg1, int arg2, char *fname, void *dir, Pt_48B0_x001548B0 *ptinfo, void *tmpbuf, int tbsize, int rev)
{
    int ofst;
    int fnsct;
    int err;

    if (tmpbuf == 0) {
        ADXERR_CallErrFunc1_x001548B0(D_004605C0_x001548B0);
        return -3;
    }
    if (tbsize <= 0) {
        ADXERR_CallErrFunc1_x001548B0(D_004605F0_x001548B0);
        return -3;
    }
    err = adxf_ChkPrmPt_x001548B0(ptid, ptinfo);
    if (err < 0) {
        return err;
    }
    if (D_00402A84_x001548B0 >= 0) {
        ADXERR_CallErrFunc1_x001548B0(D_00460618_x001548B0);
        return -1;
    }
    D_00402A84_x001548B0 = ptid;
    D_00402A7C_x001548B0 = 0;
    memset_x001548B0(ptinfo, 0, sizeof(Pt_48B0_x001548B0));
    D_00402550_x001548B0[ptid] = ptinfo;
    ptinfo->next = 0;
    if (fname == 0) {
        D_00402A80_x001548B0 = func_00155290_x001548B0(arg1, arg2);
        if (D_00402A80_x001548B0 == 0) {
            ADXERR_CallErrFunc1_x001548B0(D_00460648_x001548B0);
            return -1;
        }
        err = func_00155E40_x001548B0(arg1, arg2, ptinfo->fname, &dir, &ofst, &fnsct);
        if (err < 0) {
            return err;
        }
        ptinfo->ofst = ofst;
    } else {
        D_00402A80_x001548B0 = func_00155118_x001548B0(fname, dir);
        if (D_00402A80_x001548B0 == 0) {
            ADXERR_CallErrFunc1_x001548B0(D_00460648_x001548B0);
            return -1;
        }
        func_00128040_x001548B0(ptinfo->fname, fname, 256);
    }
    ptinfo->type = 0;
    ptinfo->rev = rev;
    ptinfo->curdir = dir;
    D_00402A88_x001548B0 = tmpbuf;
    D_00402A8C_x001548B0 = tbsize / 2048;
    err = ADXF_ReadNw_x001548B0(D_00402A80_x001548B0, D_00402A8C_x001548B0, D_00402A88_x001548B0);
    if (err < 0) {
        fn_8004FC94_x001548B0(D_00402A80_x001548B0);
        return err;
    }
    ptinfo->nfile = 0;
    return 0;
}
void func_00154AB0(void) {
    func_001553A0(D_00402A80);
    D_00402A80 = 0;
    D_00402A84 = -1;
    D_00402A7C = 0;
    D_00402A8C = 0;
}
void func_00154B00(void) {
    if ((D_00402A80 != 0) && (D_00402A84 >= 0)) {
        if (ADXF_GetStat(D_00402A80) != 1) {
            ADXF_Stop(D_00402A80);
        }
        func_00154AB0();
    }
}
void func_00154B68(void) {
    ADXF_GetPtStat();
}
INCLUDE_ASM("asm/nonmatchings/cri/adx_0014EF28", ADXF_GetPtStat);
extern char adxf_pt_info_tbl_x00154F60[] __asm__("D_00402550");
typedef struct {
    int next;
    int size;
    int nfile;
    unsigned short nfile16;
    unsigned char added;
    char pad_0f[1];
    char fname[256];
    void *dir;
    short fsct[2];
} AdxfPtInfo_x00154F60;
int func_00154F60_x00154F60(int ptid) __asm__("func_00154F60");
/* adxf_get_pt_rec_size: from https://github.com/new-coke/rez-decomp (src/cri/adxf.c, MIT); ee-gcc 2.96 -O2 -G0 */
int func_00154F60_x00154F60(int ptid)
{
    return ((AdxfPtInfo_x00154F60 **)adxf_pt_info_tbl_x00154F60)[ptid]->size;
}
s8 *func_00154F78(void) {
    s32 var_a1;
    s8 *temp_v0;
    s8 *var_a3;

    var_a3 = NULL;
    var_a1 = 0;
    if (lbl_80186B68 == 0) {
        var_a3 = &lbl_80186B68;
    } else {
loop_2:
        var_a1 += 1;
        if (var_a1 < 0x10) {
            temp_v0 = (var_a1 * 0x44) + &lbl_80186B68;
            if (*temp_v0 == 0) {
                var_a3 = temp_v0;
            } else {
                goto loop_2;
            }
        }
    }
    return var_a3;
}
typedef struct SfdSj_x00154FD0 SfdSj_x00154FD0;
typedef struct SfdSjChunk_x00154FD0 {
    char *data;
    int len;
} SfdSjChunk_x00154FD0;
typedef struct SfdSjVtbl_x00154FD0 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00154FD0 *sj);
    int (*getUuid)(SfdSj_x00154FD0 *sj);
    void (*reset)(SfdSj_x00154FD0 *sj);
    void (*getChunk)(SfdSj_x00154FD0 *sj, int id, int n, SfdSjChunk_x00154FD0 *ck);
    void (*ungetChunk)(SfdSj_x00154FD0 *sj, int id, SfdSjChunk_x00154FD0 *ck);
    void (*putChunk)(SfdSj_x00154FD0 *sj, int id, SfdSjChunk_x00154FD0 *ck);
    int (*getNumData)(SfdSj_x00154FD0 *sj, int id);
} SfdSjVtbl_x00154FD0;
struct SfdSj_x00154FD0 {
    SfdSjVtbl_x00154FD0 *vtbl;
};
typedef struct AdxfHandle_x00154FD0 AdxfHandle_x00154FD0;
typedef void (*CvFsErrFn_x00154FD0)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00154FD0)(CvFsErrFn_x00154FD0 func, void *obj);
typedef int (*CvFsPathFn_x00154FD0)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00154FD0)(void);
typedef int (*CvFsOpenFn_x00154FD0)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00154FD0)(int fd);
typedef int (*CvFsFdIntFn_x00154FD0)(int fd);
typedef int (*CvFsSeekFn_x00154FD0)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00154FD0)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00154FD0)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00154FD0)(void);
typedef int (*CvFsLoadDirInfoFn_x00154FD0)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00154FD0)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00154FD0)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00154FD0 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00154FD0 entry_err_func;
    CvFsPathFn_x00154FD0 get_file_size;
    CvFsGetFreeSizeFn_x00154FD0 get_free_size;
    CvFsOpenFn_x00154FD0 open;
    CvFsFdFn_x00154FD0 close_x00154FD0;
    CvFsSeekFn_x00154FD0 seek;
    CvFsFdIntFn_x00154FD0 tell;
    CvFsXferFn_x00154FD0 req_rd;
    CvFsXferFn_x00154FD0 req_wr;
    CvFsFdFn_x00154FD0 stop_tr;
    CvFsFdIntFn_x00154FD0 get_stat;
    CvFsFdIntFn_x00154FD0 get_sct_len;
    CvFsSetSctLenFn_x00154FD0 set_sct_len;
    CvFsFdIntFn_x00154FD0 get_num_tr;
    CvFsPathFn_x00154FD0 change_dir;
    CvFsPathFn_x00154FD0 is_exist_file;
    CvFsGetNumFilesFn_x00154FD0 get_num_files;
    CvFsLoadDirInfoFn_x00154FD0 load_dir_info;
    CvFsFdIntFn_x00154FD0 get_max_byte_rate;
    CvFsPathFn_x00154FD0 make_dir;
    CvFsPathFn_x00154FD0 remove_dir;
    CvFsPathFn_x00154FD0 delete_file;
    CvFsGetFileSizeExFn_x00154FD0 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00154FD0 opt_fn2;
} CvFsVtbl_x00154FD0;
typedef struct CvFsHandle_x00154FD0 {
    CvFsVtbl_x00154FD0 *vtbl;
    int fd;
} CvFsHandle_x00154FD0;
extern CvFsVtbl_x00154FD0 *addDevice_x00154FD0(char *devname, CvFsVtbl_x00154FD0 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00154FD0 {
    signed char used;
    signed char stat_x00154FD0;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00154FD0 *sj;
    CvFsHandle_x00154FD0 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00154FD0 rdck;
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
} AdxStmObj_x00154FD0;
AdxStmObj_x00154FD0 *ADXSTM_Create_x00154FD0(SfdSj_x00154FD0 *sj, int maxsct) __asm__("func_0015CAE8");
extern void ADXSTM_EntryEosFunc_x00154FD0(AdxStmObj_x00154FD0 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
void ADXERR_CallErrFunc1_x00154FD0(const char *msg) __asm__("ADXERR_CallErrFunc1");
struct stat_x00154FD0;
int close_x00154FD0(int fd) __asm__("close");
struct AdxfHandle_x00154FD0 {
    signed char used;
    signed char stat_x00154FD0;
    signed char sjflag;
    signed char stopnw;
    AdxStmObj_x00154FD0 *stm;
    SfdSj_x00154FD0 *sj;
    int fsize_sct;
    int fsize_byte;
    int ofst;
    int rqsct_ofst;
    int rqsct;
    int rdsct;
    void *buf;
    int bsize;
    int rqrdsct;
    int skpsct;
    void *dir;
    const char *fname;
    int stm_ofst;
    int stm_nsct;
};
AdxfHandle_x00154FD0 *adxf_AllocAdxFs_x00154FD0(void) __asm__("func_00154F78");
extern char ext_str0_x00154FD0[] __asm__("D_004607A8");
extern char ext_str1_x00154FD0[] __asm__("D_00460770");
AdxfHandle_x00154FD0 *adxf_CreateAdxFs_x00154FD0(void) __asm__("adxf_CreateAdxFs");
/* adxf_CreateAdxFs_x00154FD0: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
AdxfHandle_x00154FD0 *adxf_CreateAdxFs_x00154FD0(void) {
    AdxfHandle_x00154FD0 *adxf;
    void *stm;
    adxf = adxf_AllocAdxFs_x00154FD0();
    if (adxf == 0) {
        ADXERR_CallErrFunc1_x00154FD0(ext_str1_x00154FD0);
        return 0;
    }
    stm = ADXSTM_Create_x00154FD0(0, 256);
    adxf->stm = stm;
    if (stm == 0) {
        ADXERR_CallErrFunc1_x00154FD0(ext_str0_x00154FD0);
        return 0;
    }
    adxf->stat_x00154FD0 = 1;
    adxf->rqsct_ofst = 0;
    adxf->rqsct = 0;
    adxf->rdsct = 0;
    adxf->sjflag = 0;
    adxf->sj = 0;
    adxf->stopnw = 0;
    adxf->rqrdsct = 512;
    adxf->used = 1;
    return adxf;
}
typedef struct SfdSj_x00155068 SfdSj_x00155068;
typedef struct SfdSjChunk_x00155068 {
    char *data;
    int len;
} SfdSjChunk_x00155068;
typedef struct SfdSjVtbl_x00155068 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00155068 *sj);
    int (*getUuid)(SfdSj_x00155068 *sj);
    void (*reset)(SfdSj_x00155068 *sj);
    void (*getChunk)(SfdSj_x00155068 *sj, int id, int n, SfdSjChunk_x00155068 *ck);
    void (*ungetChunk)(SfdSj_x00155068 *sj, int id, SfdSjChunk_x00155068 *ck);
    void (*putChunk)(SfdSj_x00155068 *sj, int id, SfdSjChunk_x00155068 *ck);
    int (*getNumData)(SfdSj_x00155068 *sj, int id);
} SfdSjVtbl_x00155068;
struct SfdSj_x00155068 {
    SfdSjVtbl_x00155068 *vtbl;
};
typedef struct AdxfHandle_x00155068 AdxfHandle_x00155068;
typedef void (*CvFsErrFn_x00155068)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00155068)(CvFsErrFn_x00155068 func, void *obj);
typedef int (*CvFsPathFn_x00155068)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00155068)(void);
typedef int (*CvFsOpenFn_x00155068)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00155068)(int fd);
typedef int (*CvFsFdIntFn_x00155068)(int fd);
typedef int (*CvFsSeekFn_x00155068)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00155068)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00155068)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00155068)(void);
typedef int (*CvFsLoadDirInfoFn_x00155068)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00155068)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00155068)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00155068 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00155068 entry_err_func;
    CvFsPathFn_x00155068 get_file_size;
    CvFsGetFreeSizeFn_x00155068 get_free_size;
    CvFsOpenFn_x00155068 open;
    CvFsFdFn_x00155068 close_x00155068;
    CvFsSeekFn_x00155068 seek;
    CvFsFdIntFn_x00155068 tell;
    CvFsXferFn_x00155068 req_rd;
    CvFsXferFn_x00155068 req_wr;
    CvFsFdFn_x00155068 stop_tr;
    CvFsFdIntFn_x00155068 get_stat;
    CvFsFdIntFn_x00155068 get_sct_len;
    CvFsSetSctLenFn_x00155068 set_sct_len;
    CvFsFdIntFn_x00155068 get_num_tr;
    CvFsPathFn_x00155068 change_dir;
    CvFsPathFn_x00155068 is_exist_file;
    CvFsGetNumFilesFn_x00155068 get_num_files;
    CvFsLoadDirInfoFn_x00155068 load_dir_info;
    CvFsFdIntFn_x00155068 get_max_byte_rate;
    CvFsPathFn_x00155068 make_dir;
    CvFsPathFn_x00155068 remove_dir;
    CvFsPathFn_x00155068 delete_file;
    CvFsGetFileSizeExFn_x00155068 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00155068 opt_fn2;
} CvFsVtbl_x00155068;
typedef struct CvFsHandle_x00155068 {
    CvFsVtbl_x00155068 *vtbl;
    int fd;
} CvFsHandle_x00155068;
extern CvFsVtbl_x00155068 *addDevice_x00155068(char *devname, CvFsVtbl_x00155068 *(*get_if)(void)) __asm__("addDevice");
typedef struct AdxStmObj_x00155068 {
    signed char used;
    signed char stat_x00155068;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00155068 *sj;
    CvFsHandle_x00155068 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00155068 rdck;
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
} AdxStmObj_x00155068;
void ADXSTM_BindFile_x00155068(AdxStmObj_x00155068 *stm, const char *fname, void *dir, int ofst, int nsct) __asm__("func_0015CC00");
void ADXSTM_ReleaseFile_x00155068(AdxStmObj_x00155068 *stm) __asm__("func_0015CC78");
int ADXSTM_GetStat_x00155068(AdxStmObj_x00155068 *stm) __asm__("func_0015CCD0");
extern void ADXSTM_EntryEosFunc_x00155068(AdxStmObj_x00155068 *stm, void (*func)(void *obj), void *obj) __asm__("ADXSTM_EntryEosFunc");
int ADXSTM_GetFileLen_x00155068(AdxStmObj_x00155068 *stm) __asm__("func_0015D4D0");
int ADXSTM_GetFileSct_x00155068(AdxStmObj_x00155068 *stm) __asm__("func_0015D4D8");
void ADXERR_CallErrFunc1_x00155068(const char *msg) __asm__("ADXERR_CallErrFunc1");
struct stat_x00155068;
int close_x00155068(int fd) __asm__("close");
struct AdxfHandle_x00155068 {
    signed char used;
    signed char stat_x00155068;
    signed char sjflag;
    signed char stopnw;
    AdxStmObj_x00155068 *stm;
    SfdSj_x00155068 *sj;
    int fsize_sct;
    int fsize_byte;
    int ofst;
    int rqsct_ofst;
    int rqsct;
    int rdsct;
    void *buf;
    int bsize;
    int rqrdsct;
    int skpsct;
    void *dir;
    const char *fname;
    int stm_ofst;
    int stm_nsct;
};
extern char ext_str0_x00155068[] __asm__("D_004607E0");
int ADXF_Open_x00155068(AdxfHandle_x00155068 *adxf, const char *fname, void *dir) __asm__("ADXF_Open");
/* adxf_SetFileInfoEx: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxf.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
int ADXF_Open_x00155068(AdxfHandle_x00155068 *adxf, const char *fname, void *dir) {
    int size;
    if (fname == 0) {
        ADXERR_CallErrFunc1_x00155068(ext_str0_x00155068);
        return -1;
    }
    adxf->dir = dir;
    adxf->fname = fname;
    adxf->ofst = 0;
    ADXSTM_BindFile_x00155068(adxf->stm, fname, dir, 0, 0xfffff);
    if (ADXSTM_GetStat_x00155068(adxf->stm) == 4) {
        ADXSTM_ReleaseFile_x00155068(adxf->stm);
        return -1;
    }
    adxf->fsize_byte = ADXSTM_GetFileLen_x00155068(adxf->stm);
    size = ADXSTM_GetFileSct_x00155068(adxf->stm);
    adxf->stm_ofst = 0;
    adxf->fsize_sct = size;
    adxf->stm_nsct = size;
    return 0;
}
typedef int s32_x00155118;
typedef s32_x00155118 intptr_t_x00155118;
typedef unsigned char Uint8_x00155118;
typedef char Sint8_x00155118;
typedef unsigned short Uint16_x00155118;
typedef unsigned int Uint32_x00155118;
typedef signed int Sint32_x00155118;
typedef char Char8_x00155118;
typedef struct _UUID_x00155118 {
    Uint32_x00155118 Data1;
    Uint16_x00155118 Data2;
    Uint16_x00155118 Data3;
    Uint8_x00155118 Data4[8];
} UUID_x00155118;
typedef struct {
        Sint8_x00155118 *data;
        Sint32_x00155118 len;
} SJCK_x00155118;
typedef struct {
        struct _sj_vtbl_x00155118 *vtbl;
} SJ_OBJ_x00155118;
typedef SJ_OBJ_x00155118 *SJ_x00155118;
typedef struct _sj_vtbl_x00155118 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00155118 sj);
        UUID_x00155118 *(*GetUuid)(SJ_x00155118 sj);
        void (*Reset)(SJ_x00155118 sj);
        void (*GetChunk)(SJ_x00155118 sj, Sint32_x00155118 id, Sint32_x00155118 nbyte, SJCK_x00155118 *ck);
        void (*UngetChunk)(SJ_x00155118 sj, Sint32_x00155118 id, SJCK_x00155118 *ck);
        void (*PutChunk)(SJ_x00155118 sj, Sint32_x00155118 id, SJCK_x00155118 *ck);
        Sint32_x00155118 (*GetNumData)(SJ_x00155118 sj, Sint32_x00155118 id);
        Sint32_x00155118 (*IsGetChunk)(SJ_x00155118 sj, Sint32_x00155118 id, Sint32_x00155118 nbyte, Sint32_x00155118 *rbyte);
        void (*EntryErrFunc)(SJ_x00155118 sj,
                                        void (*func)(void *obj, Sint32_x00155118 ecode), void *obj);
} SJ_IF_x00155118;
extern int* sceCdCallback_x00155118(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00155118 unk0;
    Sint8_x00155118 stat;
    Sint8_x00155118 read_flg;
    Sint8_x00155118 unk3;
    SJ_x00155118 sj;
    void* cvfs;
    Sint32_x00155118 unkC;
    Sint32_x00155118 file_len;
    Sint32_x00155118 file_sct;
    Sint32_x00155118 unk18;
    Sint32_x00155118 unk1C;
    Sint32_x00155118 unk20;
    SJCK_x00155118 unk24;
    Sint32_x00155118 req_rd_size;
    Sint32_x00155118 eos;
    Uint32_x00155118 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00155118 unk40;
    Sint8_x00155118 pause;
    Sint8_x00155118 unk45;
    Sint8_x00155118 unk46;
    Sint8_x00155118 unk47;
    Sint8_x00155118 unk48;
    Sint8_x00155118 unk49;
    char pad4A[6];
    const Char8_x00155118* fname;
    void* dir;
    Sint32_x00155118 cur_ofst;
    Uint32_x00155118 unk5C;
} ADXSTM_OBJ_x00155118;
typedef ADXSTM_OBJ_x00155118* ADXSTM_x00155118;
typedef struct _adx_fs_x00155118 {
    Sint8_x00155118 used;
    Sint8_x00155118 stat;
    Sint8_x00155118 sjflag;
    Sint8_x00155118 stopnw_flg;
    ADXSTM_x00155118 stm;
    SJ_x00155118 sj;
    Sint32_x00155118 fnsct;
    Sint32_x00155118 fsize;
    Sint32_x00155118 skpos;
    Sint32_x00155118 rdstpos;
    Sint32_x00155118 rqsct;
    Sint32_x00155118 rdsct;
    Sint8_x00155118 *buf;
    Sint32_x00155118 bsize;
    Sint32_x00155118 rqrdsct;
    Sint32_x00155118 ofst;
    void *dir;
    const Char8_x00155118 *unk38;
    Sint32_x00155118 unk3C;
    Sint32_x00155118 unk40;
} ADX_FS_x00155118;
typedef ADX_FS_x00155118 *ADXF_x00155118;
void ADXF_Close_x00155118(ADXF_x00155118 adxf) __asm__("func_001553A0");
void adxf_SetCmdHstry_x00155118(Sint32_x00155118 ncall, Sint32_x00155118 fg, intptr_t_x00155118 ptid, intptr_t_x00155118 flid, intptr_t_x00155118 type) __asm__("func_00154548");
ADXF_x00155118 adxf_CreateAdxFs_x00155118() __asm__("adxf_CreateAdxFs");
void ADXF_Close_x00155118(ADXF_x00155118 adxf) __asm__("func_001553A0");
void adxf_SetCmdHstry_x00155118(Sint32_x00155118 cmdid, Sint32_x00155118 fg, intptr_t_x00155118 prm_0, intptr_t_x00155118 prm_1, intptr_t_x00155118 prm_2) __asm__("func_00154548");
ADXF_x00155118 adxf_CreateAdxFs_x00155118() __asm__("adxf_CreateAdxFs");
Sint32_x00155118 adxf_SetFileInfoEx_x00155118(ADXF_x00155118 adxf, Char8_x00155118* fname, void* dir) __asm__("ADXF_Open");
void ADXF_Close_x00155118(ADXF_x00155118 adxf) __asm__("func_001553A0");
ADXF_x00155118 func_00155118_x00155118(Char8_x00155118* fname, void* atr) __asm__("func_00155118");
/* ADXF_Open: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
ADXF_x00155118 func_00155118_x00155118(Char8_x00155118* fname, void* atr) {
    ADXF_x00155118 adxf;
    adxf_SetCmdHstry_x00155118((1), 0, (intptr_t_x00155118)fname, (intptr_t_x00155118)atr, -1);
    adxf = adxf_CreateAdxFs_x00155118();
    if (adxf != 0) {
        if (adxf_SetFileInfoEx_x00155118(adxf, fname, atr) < 0) {
            ADXF_Close_x00155118(adxf);
            adxf = 0;
        }
    }
    adxf_SetCmdHstry_x00155118((1), 1, (intptr_t_x00155118)fname, (intptr_t_x00155118)atr, -1);
    return adxf;
}
/* padding for ee-gcc (scripts/func_insert.py, moved_pad) */
extern int m253810;
extern int m253811;
extern int m253812;
typedef unsigned char Uint8_x001551B8;
typedef char Sint8_x001551B8;
typedef unsigned short Uint16_x001551B8;
typedef unsigned int Uint32_x001551B8;
typedef signed int Sint32_x001551B8;
typedef char Char8_x001551B8;
typedef struct _UUID_x001551B8 {
    Uint32_x001551B8 Data1;
    Uint16_x001551B8 Data2;
    Uint16_x001551B8 Data3;
    Uint8_x001551B8 Data4[8];
} UUID_x001551B8;
typedef struct {
        Sint8_x001551B8 *data;
        Sint32_x001551B8 len;
} SJCK_x001551B8;
typedef struct {
        struct _sj_vtbl_x001551B8 *vtbl;
} SJ_OBJ_x001551B8;
typedef SJ_OBJ_x001551B8 *SJ_x001551B8;
typedef struct _sj_vtbl_x001551B8 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x001551B8 sj);
        UUID_x001551B8 *(*GetUuid)(SJ_x001551B8 sj);
        void (*Reset)(SJ_x001551B8 sj);
        void (*GetChunk)(SJ_x001551B8 sj, Sint32_x001551B8 id, Sint32_x001551B8 nbyte, SJCK_x001551B8 *ck);
        void (*UngetChunk)(SJ_x001551B8 sj, Sint32_x001551B8 id, SJCK_x001551B8 *ck);
        void (*PutChunk)(SJ_x001551B8 sj, Sint32_x001551B8 id, SJCK_x001551B8 *ck);
        Sint32_x001551B8 (*GetNumData)(SJ_x001551B8 sj, Sint32_x001551B8 id);
        Sint32_x001551B8 (*IsGetChunk)(SJ_x001551B8 sj, Sint32_x001551B8 id, Sint32_x001551B8 nbyte, Sint32_x001551B8 *rbyte);
        void (*EntryErrFunc)(SJ_x001551B8 sj,
                                        void (*func)(void *obj, Sint32_x001551B8 ecode), void *obj);
} SJ_IF_x001551B8;
extern int* sceCdCallback_x001551B8(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x001551B8 unk0;
    Sint8_x001551B8 stat;
    Sint8_x001551B8 read_flg;
    Sint8_x001551B8 unk3;
    SJ_x001551B8 sj;
    void* cvfs;
    Sint32_x001551B8 unkC;
    Sint32_x001551B8 file_len;
    Sint32_x001551B8 file_sct;
    Sint32_x001551B8 unk18;
    Sint32_x001551B8 unk1C;
    Sint32_x001551B8 unk20;
    SJCK_x001551B8 unk24;
    Sint32_x001551B8 req_rd_size;
    Sint32_x001551B8 eos;
    Uint32_x001551B8 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x001551B8 unk40;
    Sint8_x001551B8 pause;
    Sint8_x001551B8 unk45;
    Sint8_x001551B8 unk46;
    Sint8_x001551B8 unk47;
    Sint8_x001551B8 unk48;
    Sint8_x001551B8 unk49;
    char pad4A[6];
    const Char8_x001551B8* fname;
    void* dir;
    Sint32_x001551B8 cur_ofst;
    Uint32_x001551B8 unk5C;
} ADXSTM_OBJ_x001551B8;
typedef ADXSTM_OBJ_x001551B8* ADXSTM_x001551B8;
typedef struct _adx_fs_x001551B8 {
    Sint8_x001551B8 used;
    Sint8_x001551B8 stat;
    Sint8_x001551B8 sjflag;
    Sint8_x001551B8 stopnw_flg;
    ADXSTM_x001551B8 stm;
    SJ_x001551B8 sj;
    Sint32_x001551B8 fnsct;
    Sint32_x001551B8 fsize;
    Sint32_x001551B8 skpos;
    Sint32_x001551B8 rdstpos;
    Sint32_x001551B8 rqsct;
    Sint32_x001551B8 rdsct;
    Sint8_x001551B8 *buf;
    Sint32_x001551B8 bsize;
    Sint32_x001551B8 rqrdsct;
    Sint32_x001551B8 ofst;
    void *dir;
    const Char8_x001551B8 *unk38;
    Sint32_x001551B8 unk3C;
    Sint32_x001551B8 unk40;
} ADX_FS_x001551B8;
Sint32_x001551B8 ADXF_GetFnameRangeEx_x001551B8(Sint32_x001551B8 ptid, Sint32_x001551B8 flid, Char8_x001551B8 *fname, void **dir, Sint32_x001551B8 *ofst, Sint32_x001551B8 *fnsct) __asm__("func_00155E40");
Char8_x001551B8* ADXF_GetFnameFromPt_x001551B8(Sint32_x001551B8) __asm__("func_00155F98");
Sint32_x001551B8 ADXSTM_GetStat_x001551B8(ADXSTM_x001551B8 stm) __asm__("func_0015CCD0");
void ADXSTM_BindFile_x001551B8(ADXSTM_x001551B8 stm, const Char8_x001551B8* fname, void* dir, Sint32_x001551B8 arg3, Sint32_x001551B8 arg4) __asm__("func_0015CC00");
void ADXSTM_ReleaseFile_x001551B8(ADXSTM_x001551B8 stm) __asm__("func_0015CC78");
Sint32_x001551B8 ADXF_GetFnameRangeEx_x001551B8(Sint32_x001551B8 ptid, Sint32_x001551B8 flid, Char8_x001551B8* fname, void** dir, Sint32_x001551B8* ofst, Sint32_x001551B8* fnsct) __asm__("func_00155E40");
Char8_x001551B8* ADXF_GetFnameFromPt_x001551B8(Sint32_x001551B8 ptid) __asm__("func_00155F98");
Sint32_x001551B8 func_001551B8_x001551B8(ADX_FS_x001551B8* adxf, Sint32_x001551B8 ptid, Sint32_x001551B8 flid) __asm__("func_001551B8");
/* adxf_SetAfsFileInfo: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
Sint32_x001551B8 func_001551B8_x001551B8(ADX_FS_x001551B8* adxf, Sint32_x001551B8 ptid, Sint32_x001551B8 flid) {
    Char8_x001551B8 fname[256];
    void* dir;
    Sint32_x001551B8 ofst;
    Sint32_x001551B8 fnsct;
    if (ADXF_GetFnameRangeEx_x001551B8(ptid, flid, fname, &dir, &ofst, &fnsct) < 0) {
        return (-3);
    }
    adxf->ofst = ofst;
    adxf->dir = dir;
    adxf->unk38 = ADXF_GetFnameFromPt_x001551B8(ptid);
    adxf->skpos = 0;
    adxf->unk40 = fnsct;
    adxf->unk3C = ofst;
    ADXSTM_BindFile_x001551B8(adxf->stm, adxf->unk38, adxf->dir, adxf->unk3C, adxf->unk40);
    if (ADXSTM_GetStat_x001551B8(adxf->stm) == 4) {
        ADXSTM_ReleaseFile_x001551B8(adxf->stm);
        return (-1);
    }
    adxf->fnsct = fnsct;
    adxf->fsize = fnsct << 11;
    return (0);
}
typedef int s32_x00155290;
typedef s32_x00155290 intptr_t_x00155290;
typedef unsigned char Uint8_x00155290;
typedef char Sint8_x00155290;
typedef unsigned short Uint16_x00155290;
typedef unsigned int Uint32_x00155290;
typedef signed int Sint32_x00155290;
typedef char Char8_x00155290;
typedef struct _UUID_x00155290 {
    Uint32_x00155290 Data1;
    Uint16_x00155290 Data2;
    Uint16_x00155290 Data3;
    Uint8_x00155290 Data4[8];
} UUID_x00155290;
typedef struct {
        Sint8_x00155290 *data;
        Sint32_x00155290 len;
} SJCK_x00155290;
typedef struct {
        struct _sj_vtbl_x00155290 *vtbl;
} SJ_OBJ_x00155290;
typedef SJ_OBJ_x00155290 *SJ_x00155290;
typedef struct _sj_vtbl_x00155290 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00155290 sj);
        UUID_x00155290 *(*GetUuid)(SJ_x00155290 sj);
        void (*Reset)(SJ_x00155290 sj);
        void (*GetChunk)(SJ_x00155290 sj, Sint32_x00155290 id, Sint32_x00155290 nbyte, SJCK_x00155290 *ck);
        void (*UngetChunk)(SJ_x00155290 sj, Sint32_x00155290 id, SJCK_x00155290 *ck);
        void (*PutChunk)(SJ_x00155290 sj, Sint32_x00155290 id, SJCK_x00155290 *ck);
        Sint32_x00155290 (*GetNumData)(SJ_x00155290 sj, Sint32_x00155290 id);
        Sint32_x00155290 (*IsGetChunk)(SJ_x00155290 sj, Sint32_x00155290 id, Sint32_x00155290 nbyte, Sint32_x00155290 *rbyte);
        void (*EntryErrFunc)(SJ_x00155290 sj,
                                        void (*func)(void *obj, Sint32_x00155290 ecode), void *obj);
} SJ_IF_x00155290;
extern int* sceCdCallback_x00155290(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00155290 unk0;
    Sint8_x00155290 stat;
    Sint8_x00155290 read_flg;
    Sint8_x00155290 unk3;
    SJ_x00155290 sj;
    void* cvfs;
    Sint32_x00155290 unkC;
    Sint32_x00155290 file_len;
    Sint32_x00155290 file_sct;
    Sint32_x00155290 unk18;
    Sint32_x00155290 unk1C;
    Sint32_x00155290 unk20;
    SJCK_x00155290 unk24;
    Sint32_x00155290 req_rd_size;
    Sint32_x00155290 eos;
    Uint32_x00155290 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00155290 unk40;
    Sint8_x00155290 pause;
    Sint8_x00155290 unk45;
    Sint8_x00155290 unk46;
    Sint8_x00155290 unk47;
    Sint8_x00155290 unk48;
    Sint8_x00155290 unk49;
    char pad4A[6];
    const Char8_x00155290* fname;
    void* dir;
    Sint32_x00155290 cur_ofst;
    Uint32_x00155290 unk5C;
} ADXSTM_OBJ_x00155290;
typedef ADXSTM_OBJ_x00155290* ADXSTM_x00155290;
typedef struct _adx_fs_x00155290 {
    Sint8_x00155290 used;
    Sint8_x00155290 stat;
    Sint8_x00155290 sjflag;
    Sint8_x00155290 stopnw_flg;
    ADXSTM_x00155290 stm;
    SJ_x00155290 sj;
    Sint32_x00155290 fnsct;
    Sint32_x00155290 fsize;
    Sint32_x00155290 skpos;
    Sint32_x00155290 rdstpos;
    Sint32_x00155290 rqsct;
    Sint32_x00155290 rdsct;
    Sint8_x00155290 *buf;
    Sint32_x00155290 bsize;
    Sint32_x00155290 rqrdsct;
    Sint32_x00155290 ofst;
    void *dir;
    const Char8_x00155290 *unk38;
    Sint32_x00155290 unk3C;
    Sint32_x00155290 unk40;
} ADX_FS_x00155290;
typedef ADX_FS_x00155290 *ADXF_x00155290;
void ADXF_Close_x00155290(ADXF_x00155290 adxf) __asm__("func_001553A0");
void adxf_SetCmdHstry_x00155290(Sint32_x00155290 ncall, Sint32_x00155290 fg, intptr_t_x00155290 ptid, intptr_t_x00155290 flid, intptr_t_x00155290 type) __asm__("func_00154548");
ADXF_x00155290 adxf_CreateAdxFs_x00155290() __asm__("adxf_CreateAdxFs");
Sint32_x00155290 adxf_SetAfsFileInfo_x00155290(ADXF_x00155290 adxf, Sint32_x00155290 ptid, Sint32_x00155290 flid) __asm__("func_001551B8");
void ADXF_Close_x00155290(ADXF_x00155290 adxf) __asm__("func_001553A0");
void adxf_SetCmdHstry_x00155290(Sint32_x00155290 cmdid, Sint32_x00155290 fg, intptr_t_x00155290 prm_0, intptr_t_x00155290 prm_1, intptr_t_x00155290 prm_2) __asm__("func_00154548");
ADXF_x00155290 adxf_CreateAdxFs_x00155290() __asm__("adxf_CreateAdxFs");
Sint32_x00155290 adxf_SetAfsFileInfo_x00155290(ADX_FS_x00155290* adxf, Sint32_x00155290 ptid, Sint32_x00155290 flid) __asm__("func_001551B8");
void ADXF_Close_x00155290(ADXF_x00155290 adxf) __asm__("func_001553A0");
ADXF_x00155290 func_00155290_x00155290(Sint32_x00155290 ptid, Sint32_x00155290 flid) __asm__("func_00155290");
/* ADXF_OpenAfs: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
ADXF_x00155290 func_00155290_x00155290(Sint32_x00155290 ptid, Sint32_x00155290 flid) {
    ADXF_x00155290 adxf;
    adxf_SetCmdHstry_x00155290((2), 0, (intptr_t_x00155290)ptid, (intptr_t_x00155290)flid, -1);
    adxf = adxf_CreateAdxFs_x00155290();
    if ((adxf != 0) && (adxf_SetAfsFileInfo_x00155290(adxf, ptid, flid) < 0)) {
        ADXF_Close_x00155290(adxf);
        adxf = 0;
    }
    adxf_SetCmdHstry_x00155290((2), 1, (intptr_t_x00155290)ptid, (intptr_t_x00155290)flid, -1);
    return adxf;
}
typedef unsigned char Uint8_x00155330;
typedef char Sint8_x00155330;
typedef unsigned short Uint16_x00155330;
typedef unsigned int Uint32_x00155330;
typedef signed int Sint32_x00155330;
typedef char Char8_x00155330;
typedef struct _UUID_x00155330 {
    Uint32_x00155330 Data1;
    Uint16_x00155330 Data2;
    Uint16_x00155330 Data3;
    Uint8_x00155330 Data4[8];
} UUID_x00155330;
typedef struct {
        Sint8_x00155330 *data;
        Sint32_x00155330 len;
} SJCK_x00155330;
typedef struct {
        struct _sj_vtbl_x00155330 *vtbl;
} SJ_OBJ_x00155330;
typedef SJ_OBJ_x00155330 *SJ_x00155330;
typedef struct _sj_vtbl_x00155330 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x00155330 sj);
        UUID_x00155330 *(*GetUuid)(SJ_x00155330 sj);
        void (*Reset)(SJ_x00155330 sj);
        void (*GetChunk)(SJ_x00155330 sj, Sint32_x00155330 id, Sint32_x00155330 nbyte, SJCK_x00155330 *ck);
        void (*UngetChunk)(SJ_x00155330 sj, Sint32_x00155330 id, SJCK_x00155330 *ck);
        void (*PutChunk)(SJ_x00155330 sj, Sint32_x00155330 id, SJCK_x00155330 *ck);
        Sint32_x00155330 (*GetNumData)(SJ_x00155330 sj, Sint32_x00155330 id);
        Sint32_x00155330 (*IsGetChunk)(SJ_x00155330 sj, Sint32_x00155330 id, Sint32_x00155330 nbyte, Sint32_x00155330 *rbyte);
        void (*EntryErrFunc)(SJ_x00155330 sj,
                                        void (*func)(void *obj, Sint32_x00155330 ecode), void *obj);
} SJ_IF_x00155330;
extern int* sceCdCallback_x00155330(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x00155330 unk0;
    Sint8_x00155330 stat;
    Sint8_x00155330 read_flg;
    Sint8_x00155330 unk3;
    SJ_x00155330 sj;
    void* cvfs;
    Sint32_x00155330 unkC;
    Sint32_x00155330 file_len;
    Sint32_x00155330 file_sct;
    Sint32_x00155330 unk18;
    Sint32_x00155330 unk1C;
    Sint32_x00155330 unk20;
    SJCK_x00155330 unk24;
    Sint32_x00155330 req_rd_size;
    Sint32_x00155330 eos;
    Uint32_x00155330 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x00155330 unk40;
    Sint8_x00155330 pause;
    Sint8_x00155330 unk45;
    Sint8_x00155330 unk46;
    Sint8_x00155330 unk47;
    Sint8_x00155330 unk48;
    Sint8_x00155330 unk49;
    char pad4A[6];
    const Char8_x00155330* fname;
    void* dir;
    Sint32_x00155330 cur_ofst;
    Uint32_x00155330 unk5C;
} ADXSTM_OBJ_x00155330;
typedef ADXSTM_OBJ_x00155330* ADXSTM_x00155330;
void ADXF_Ocbi_x00155330(Sint8_x00155330* buf, Sint32_x00155330 bsize) __asm__("func_00154378");
typedef struct _adx_fs_x00155330 {
    Sint8_x00155330 used;
    Sint8_x00155330 stat;
    Sint8_x00155330 sjflag;
    Sint8_x00155330 stopnw_flg;
    ADXSTM_x00155330 stm;
    SJ_x00155330 sj;
    Sint32_x00155330 fnsct;
    Sint32_x00155330 fsize;
    Sint32_x00155330 skpos;
    Sint32_x00155330 rdstpos;
    Sint32_x00155330 rqsct;
    Sint32_x00155330 rdsct;
    Sint8_x00155330 *buf;
    Sint32_x00155330 bsize;
    Sint32_x00155330 rqrdsct;
    Sint32_x00155330 ofst;
    void *dir;
    const Char8_x00155330 *unk38;
    Sint32_x00155330 unk3C;
    Sint32_x00155330 unk40;
} ADX_FS_x00155330;
typedef ADX_FS_x00155330 *ADXF_x00155330;
extern Sint32_x00155330 adxf_ocbi_fg_x00155330 __asm__("D_00402950");
void func_00155330_x00155330(ADXF_x00155330 adxf) __asm__("func_00155330");
/* adxf_CloseSjStm: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_00155330_x00155330(ADXF_x00155330 adxf) {
    SJ_x00155330 sj;
    if ((adxf->sj == 0) || (adxf->sjflag != 0)) {
        return;
    }
    if (adxf_ocbi_fg_x00155330 == 1) {
        ADXF_Ocbi_x00155330(adxf->buf, adxf->bsize);
    }
    sj = adxf->sj;
    adxf->sj = 0;
    (*(sj)->vtbl->Destroy)(sj);
}
typedef unsigned int size_t_x001553A0;
typedef int s32_x001553A0;
typedef s32_x001553A0 intptr_t_x001553A0;
typedef unsigned char Uint8_x001553A0;
typedef char Sint8_x001553A0;
typedef unsigned short Uint16_x001553A0;
typedef unsigned int Uint32_x001553A0;
typedef signed int Sint32_x001553A0;
typedef char Char8_x001553A0;
typedef struct _UUID_x001553A0 {
    Uint32_x001553A0 Data1;
    Uint16_x001553A0 Data2;
    Uint16_x001553A0 Data3;
    Uint8_x001553A0 Data4[8];
} UUID_x001553A0;
typedef struct {
        Sint8_x001553A0 *data;
        Sint32_x001553A0 len;
} SJCK_x001553A0;
typedef struct {
        struct _sj_vtbl_x001553A0 *vtbl;
} SJ_OBJ_x001553A0;
typedef SJ_OBJ_x001553A0 *SJ_x001553A0;
typedef struct _sj_vtbl_x001553A0 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x001553A0 sj);
        UUID_x001553A0 *(*GetUuid)(SJ_x001553A0 sj);
        void (*Reset)(SJ_x001553A0 sj);
        void (*GetChunk)(SJ_x001553A0 sj, Sint32_x001553A0 id, Sint32_x001553A0 nbyte, SJCK_x001553A0 *ck);
        void (*UngetChunk)(SJ_x001553A0 sj, Sint32_x001553A0 id, SJCK_x001553A0 *ck);
        void (*PutChunk)(SJ_x001553A0 sj, Sint32_x001553A0 id, SJCK_x001553A0 *ck);
        Sint32_x001553A0 (*GetNumData)(SJ_x001553A0 sj, Sint32_x001553A0 id);
        Sint32_x001553A0 (*IsGetChunk)(SJ_x001553A0 sj, Sint32_x001553A0 id, Sint32_x001553A0 nbyte, Sint32_x001553A0 *rbyte);
        void (*EntryErrFunc)(SJ_x001553A0 sj,
                                        void (*func)(void *obj, Sint32_x001553A0 ecode), void *obj);
} SJ_IF_x001553A0;
extern int* sceCdCallback_x001553A0(void (*func)(int)) __asm__("sceCdCallback");
typedef struct {
    Sint8_x001553A0 unk0;
    Sint8_x001553A0 stat;
    Sint8_x001553A0 read_flg;
    Sint8_x001553A0 unk3;
    SJ_x001553A0 sj;
    void* cvfs;
    Sint32_x001553A0 unkC;
    Sint32_x001553A0 file_len;
    Sint32_x001553A0 file_sct;
    Sint32_x001553A0 unk18;
    Sint32_x001553A0 unk1C;
    Sint32_x001553A0 unk20;
    SJCK_x001553A0 unk24;
    Sint32_x001553A0 req_rd_size;
    Sint32_x001553A0 eos;
    Uint32_x001553A0 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x001553A0 unk40;
    Sint8_x001553A0 pause;
    Sint8_x001553A0 unk45;
    Sint8_x001553A0 unk46;
    Sint8_x001553A0 unk47;
    Sint8_x001553A0 unk48;
    Sint8_x001553A0 unk49;
    char pad4A[6];
    const Char8_x001553A0* fname;
    void* dir;
    Sint32_x001553A0 cur_ofst;
    Uint32_x001553A0 unk5C;
} ADXSTM_OBJ_x001553A0;
typedef ADXSTM_OBJ_x001553A0* ADXSTM_x001553A0;
typedef struct _adx_fs_x001553A0 {
    Sint8_x001553A0 used;
    Sint8_x001553A0 stat;
    Sint8_x001553A0 sjflag;
    Sint8_x001553A0 stopnw_flg;
    ADXSTM_x001553A0 stm;
    SJ_x001553A0 sj;
    Sint32_x001553A0 fnsct;
    Sint32_x001553A0 fsize;
    Sint32_x001553A0 skpos;
    Sint32_x001553A0 rdstpos;
    Sint32_x001553A0 rqsct;
    Sint32_x001553A0 rdsct;
    Sint8_x001553A0 *buf;
    Sint32_x001553A0 bsize;
    Sint32_x001553A0 rqrdsct;
    Sint32_x001553A0 ofst;
    void *dir;
    const Char8_x001553A0 *unk38;
    Sint32_x001553A0 unk3C;
    Sint32_x001553A0 unk40;
} ADX_FS_x001553A0;
typedef ADX_FS_x001553A0 *ADXF_x001553A0;
Sint32_x001553A0 ADXF_Stop_x001553A0(ADXF_x001553A0 adxf) __asm__("ADXF_Stop");
void adxf_SetCmdHstry_x001553A0(Sint32_x001553A0 ncall, Sint32_x001553A0 fg, intptr_t_x001553A0 ptid, intptr_t_x001553A0 flid, intptr_t_x001553A0 type) __asm__("func_00154548");
void ADXSTM_ReleaseFile_x001553A0(ADXSTM_x001553A0 stm) __asm__("func_0015CC78");
void ADXSTM_Destroy_x001553A0(ADXSTM_x001553A0 stm) __asm__("func_0015CB30");
extern void* memset_x001553A0(void* s, int c, size_t_x001553A0 n) __asm__("memset");
void adxf_SetCmdHstry_x001553A0(Sint32_x001553A0 cmdid, Sint32_x001553A0 fg, intptr_t_x001553A0 prm_0, intptr_t_x001553A0 prm_1, intptr_t_x001553A0 prm_2) __asm__("func_00154548");
Sint32_x001553A0 ADXF_Stop_x001553A0(ADXF_x001553A0 adxf) __asm__("ADXF_Stop");
void fn_8004FC94_x001553A0(ADXF_x001553A0 adxf) __asm__("fn_8004FC94");
/* ADXF_Close: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_fs.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void fn_8004FC94_x001553A0(ADXF_x001553A0 adxf) {
    ADXSTM_x001553A0 stm;
    adxf_SetCmdHstry_x001553A0((3), 0, (intptr_t_x001553A0)adxf, -1, -1);
    if (adxf == 0) {
        return;
    }
    if (adxf->stat == 2) {
        ADXF_Stop_x001553A0(adxf);
    }
    stm = adxf->stm;
    if (stm != 0) {
        adxf->used = 0;
        adxf->stm = 0;
        ADXSTM_ReleaseFile_x001553A0(stm);
        ADXSTM_Destroy_x001553A0(stm);
    }
    memset_x001553A0(adxf, 0, sizeof(ADX_FS_x001553A0));
    adxf_SetCmdHstry_x001553A0((3), 1, (intptr_t_x001553A0)adxf, -1, -1);
}
