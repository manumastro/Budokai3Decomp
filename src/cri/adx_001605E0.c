#include "common.h"

typedef int s32_x001605E0;
typedef s32_x001605E0 ptrdiff_t_x001605E0;
typedef unsigned char Uint8_x001605E0;
typedef char Sint8_x001605E0;
typedef unsigned short Uint16_x001605E0;
typedef signed short Sint16_x001605E0;
typedef unsigned int Uint32_x001605E0;
typedef signed int Sint32_x001605E0;
typedef Sint32_x001605E0 Bool_x001605E0;
typedef char Char8_x001605E0;
typedef struct _UUID_x001605E0 {
    Uint32_x001605E0 Data1;
    Uint16_x001605E0 Data2;
    Uint16_x001605E0 Data3;
    Uint8_x001605E0 Data4[8];
} UUID_x001605E0;
typedef struct {
        Sint8_x001605E0 *data;
        Sint32_x001605E0 len;
} SJCK_x001605E0;
typedef struct {
        struct _sj_vtbl_x001605E0 *vtbl;
} SJ_OBJ_x001605E0;
typedef SJ_OBJ_x001605E0 *SJ_x001605E0;
typedef struct _sj_vtbl_x001605E0 {
        void (*QueryInterface)();
        void (*AddRef)();
        void (*Release)();
        void (*Destroy)(SJ_x001605E0 sj);
        UUID_x001605E0 *(*GetUuid)(SJ_x001605E0 sj);
        void (*Reset)(SJ_x001605E0 sj);
        void (*GetChunk)(SJ_x001605E0 sj, Sint32_x001605E0 id, Sint32_x001605E0 nbyte, SJCK_x001605E0 *ck);
        void (*UngetChunk)(SJ_x001605E0 sj, Sint32_x001605E0 id, SJCK_x001605E0 *ck);
        void (*PutChunk)(SJ_x001605E0 sj, Sint32_x001605E0 id, SJCK_x001605E0 *ck);
        Sint32_x001605E0 (*GetNumData)(SJ_x001605E0 sj, Sint32_x001605E0 id);
        Sint32_x001605E0 (*IsGetChunk)(SJ_x001605E0 sj, Sint32_x001605E0 id, Sint32_x001605E0 nbyte, Sint32_x001605E0 *rbyte);
        void (*EntryErrFunc)(SJ_x001605E0 sj,
                                        void (*func)(void *obj, Sint32_x001605E0 ecode), void *obj);
} SJ_IF_x001605E0;
extern int* sceCdCallback_x001605E0(void (*func)(int)) __asm__("sceCdCallback");
extern int* sceCdPOffCallback_x001605E0(void (*func)(void*), void* addr) __asm__("sceCdPOffCallback");
typedef struct {
    unsigned int data;
    unsigned int addr;
    unsigned int size;
    unsigned int mode;
} sceSifDmaData_x001605E0;
typedef struct {
               Sint16_x001605E0 unk0;
               Sint16_x001605E0 unk2;
               Sint16_x001605E0 unk4;
               Sint16_x001605E0 unk6;
} ADXPD_OBJ_SUB_x001605E0;
typedef struct {
               Sint32_x001605E0 used;
               Sint32_x001605E0 unk4;
               Sint32_x001605E0 mode;
               Sint32_x001605E0 stat;
               Sint32_x001605E0 num_blk;
               Sint32_x001605E0 unk14;
               Sint32_x001605E0 unk18;
               Sint32_x001605E0 unk1C;
               Sint32_x001605E0 unk20;
               Sint32_x001605E0 unk24;
               ADXPD_OBJ_SUB_x001605E0 unk28;
               Sint16_x001605E0 unk30;
               Sint16_x001605E0 unk32;
               Sint16_x001605E0 unk34;
               Sint16_x001605E0 unk36;
               Sint16_x001605E0 unk38;
               Sint16_x001605E0 unk3A;
} ADXPD_OBJ_x001605E0;
typedef ADXPD_OBJ_x001605E0* ADXPD_x001605E0;
typedef struct {
    char pad0[0x10];
} ADX_UNK_x001605E0;
typedef struct {
               Sint32_x001605E0 unk0;
               Sint32_x001605E0 unk4;
               Sint32_x001605E0 unk8;
               Sint32_x001605E0 unkC;
               Sint32_x001605E0 unk10;
               void* unk14;
               Sint32_x001605E0 unk18;
               Sint32_x001605E0 unk1C;
               Sint32_x001605E0 unk20;
               Sint32_x001605E0 unk24;
               Sint32_x001605E0 unk28;
} ADXB_UNK_x001605E0;
typedef struct {
               Sint16_x001605E0 unk0;
               Sint16_x001605E0 unk2;
               Sint32_x001605E0 stat;
               ADXPD_x001605E0 adxpd;
               Sint8_x001605E0 encoding_type;
               Sint8_x001605E0 sample_bitdepth;
               Sint8_x001605E0 channel_count;
               Sint8_x001605E0 block_size;
               Sint32_x001605E0 samples_per_block;
               Sint32_x001605E0 sample_rate;
               Sint32_x001605E0 total_samples;
               Sint16_x001605E0 unk1C;
               char pad1E[2];
               Sint32_x001605E0 unk20;
               Sint16_x001605E0 unk24;
               Sint16_x001605E0 unk26;
               Sint32_x001605E0 unk28;
               Sint32_x001605E0 unk2C;
               Sint32_x001605E0 unk30;
               Sint32_x001605E0 unk34;
               Sint32_x001605E0 unk38;
               void* unk3C;
               Sint32_x001605E0 unk40;
               Sint32_x001605E0 unk44;
               ADXB_UNK_x001605E0 unk48;
               Sint32_x001605E0 unk74;
               void* (*get_wr)(void*, ptrdiff_t_x001605E0*, Sint32_x001605E0*, Sint32_x001605E0*);
               void* object;
               void (*add_wr)(void*, Sint32_x001605E0, Sint32_x001605E0);
               Sint32_x001605E0 unk84;
               Sint32_x001605E0 unk88;
               Sint32_x001605E0 unk8C;
               Sint32_x001605E0 dec_num_sample;
               Sint32_x001605E0 dec_data_len;
               Sint16_x001605E0 format;
               Sint16_x001605E0 unk9A;
               Sint16_x001605E0 unk9C;
               Sint16_x001605E0 unk9E;
               Sint16_x001605E0 unkA0;
               char padA2[0xE];
               Sint32_x001605E0 unkB0;
               Sint32_x001605E0 ahx_dec_samples;
               Sint32_x001605E0 ahx_dec_frames;
               Sint32_x001605E0 unkBC;
               Sint32_x001605E0 ac3_dec_samples;
               Sint32_x001605E0 ac3_dec_frames;
               Sint32_x001605E0 unkC8;
               ADX_UNK_x001605E0 unkCC;
               Sint16_x001605E0 unkDC;
               Sint16_x001605E0 unkDE[2];
               char padE2[2];
               Sint32_x001605E0 unkE4;
               char padE8[8];
} ADXB_OBJ_x001605E0;
typedef ADXB_OBJ_x001605E0* ADXB_x001605E0;
typedef struct {
    Sint8_x001605E0 used;
    Sint8_x001605E0 state;
    Sint8_x001605E0 maxnch;
    Sint8_x001605E0 unk3;
    ADXB_x001605E0 adxb;
    SJ_x001605E0 sji;
    SJ_x001605E0 sjo[2];
    SJCK_x001605E0 unk14;
    SJCK_x001605E0 chunks[2];
    Sint32_x001605E0 unk2C;
    Sint32_x001605E0 unk30;
    Sint32_x001605E0 unk34;
    Sint32_x001605E0 unk38;
    Sint32_x001605E0 trap_num_samples;
    Sint32_x001605E0 trap_count;
    Sint32_x001605E0 trap_dt_len;
    void (*trap_func)(void*);
    void* trap_obj;
    void (*flt_func)(void*, Sint32_x001605E0, Sint8_x001605E0*, Sint32_x001605E0);
    void* flt_obj;
    Sint8_x001605E0 unk58[0x40];
    Sint32_x001605E0 unk98;
    Sint32_x001605E0 lnkflg;
} ADXSJD_OBJ_x001605E0;
typedef ADXSJD_OBJ_x001605E0* ADXSJD_x001605E0;
typedef struct {
    Sint32_x001605E0 unk0;
    SJ_x001605E0 sj;
} SJX_UNK_0_x001605E0;
typedef struct {
    Sint8_x001605E0 used;
    Sint8_x001605E0 unk1;
    Sint16_x001605E0 unk2;
    SJ_x001605E0 sj;
    void* unk8;
    Sint32_x001605E0 unkC;
    SJX_UNK_0_x001605E0* unk10;
} SJX_OBJ_x001605E0;
typedef SJX_OBJ_x001605E0* SJX_x001605E0;
typedef struct {
    Sint8_x001605E0 used;
    char pad1[3];
    void* unk4;
    SJ_x001605E0 unk8;
    SJX_x001605E0 unkC;
    SJCK_x001605E0 chunk;
} PS2PSJ_OBJ_x001605E0;
typedef PS2PSJ_OBJ_x001605E0* PS2PSJ_x001605E0;
typedef struct {
               Sint8_x001605E0 unk0;
               Sint8_x001605E0 unk1;
               Sint8_x001605E0 unk2;
               SJ_x001605E0 unk4;
               SJ_x001605E0 unk8;
               SJCK_x001605E0 unkC;
               SJCK_x001605E0 unk14;
               sceSifDmaData_x001605E0 dma_data;
               Sint32_x001605E0 unk2C;
               Sint32_x001605E0 unk30;
               Sint32_x001605E0 unk34;
               Sint32_x001605E0 unk38;
               Sint32_x001605E0 unk3C;
} DTR_OBJ_x001605E0;
typedef DTR_OBJ_x001605E0* DTR_x001605E0;
typedef struct {
    Sint8_x001605E0 used;
    Sint32_x001605E0 maxnch;
    PS2PSJ_x001605E0 psj[2];
    DTR_x001605E0 dtr[2];
    SJ_x001605E0 sjo[2];
    void* unk20;
    Sint32_x001605E0 unk24;
    Sint32_x001605E0 unk28;
    Sint32_x001605E0 unk2C;
    Sint8_x001605E0 unk30;
    Sint8_x001605E0 unk31;
    Sint8_x001605E0 num_chan;
    Sint8_x001605E0 unk33;
    Sint32_x001605E0 sfreq;
    Sint32_x001605E0 unk38;
    Sint32_x001605E0 out_vol;
    Sint32_x001605E0 unk40;
    Sint32_x001605E0 pan[2];
    Sint32_x001605E0 unk4C[2];
    Sint32_x001605E0 unk54;
    Sint32_x001605E0 unk58;
    Sint8_x001605E0 unk5C;
    Sint8_x001605E0 unk5D;
    Sint8_x001605E0 unk5E;
    Sint8_x001605E0 unk5F;
    char pad60[4];
} ADXRNA_OBJ_x001605E0;
typedef ADXRNA_OBJ_x001605E0* ADXRNA_x001605E0;
typedef struct {
    Sint8_x001605E0 unk0;
    Sint8_x001605E0 stat;
    Sint8_x001605E0 read_flg;
    Sint8_x001605E0 unk3;
    SJ_x001605E0 sj;
    void* cvfs;
    Sint32_x001605E0 unkC;
    Sint32_x001605E0 file_len;
    Sint32_x001605E0 file_sct;
    Sint32_x001605E0 unk18;
    Sint32_x001605E0 unk1C;
    Sint32_x001605E0 unk20;
    SJCK_x001605E0 unk24;
    Sint32_x001605E0 req_rd_size;
    Sint32_x001605E0 eos;
    Uint32_x001605E0 unk34;
    void (*eos_callback)(void*);
    void* eos_callback_context;
    Sint32_x001605E0 unk40;
    Sint8_x001605E0 pause;
    Sint8_x001605E0 unk45;
    Sint8_x001605E0 unk46;
    Sint8_x001605E0 unk47;
    Sint8_x001605E0 unk48;
    Sint8_x001605E0 unk49;
    char pad4A[6];
    const Char8_x001605E0* fname;
    void* dir;
    Sint32_x001605E0 cur_ofst;
    Uint32_x001605E0 unk5C;
} ADXSTM_OBJ_x001605E0;
typedef ADXSTM_OBJ_x001605E0* ADXSTM_x001605E0;
typedef struct _adx_talk_x001605E0 {
                   Sint8_x001605E0 used;
                   Sint8_x001605E0 stat;
                   Sint8_x001605E0 pmode;
                   Sint8_x001605E0 maxnch;
                   ADXSJD_x001605E0 sjd;
                   ADXSTM_x001605E0 stm;
                   ADXRNA_x001605E0 rna;
                   SJ_x001605E0 sjf;
                   SJ_x001605E0 sji;
                   SJ_x001605E0 sjo[(2)];
                   Sint8_x001605E0 *ibuf;
                   Sint32_x001605E0 ibuflen;
                   Sint32_x001605E0 ibufxlen;
                   Sint16_x001605E0 *obuf;
                   Sint32_x001605E0 obufsize;
                   Sint32_x001605E0 obufdist;
                   Sint32_x001605E0 svrfreq;
                   Sint16_x001605E0 maxsct;
                   Sint16_x001605E0 minsct;
                   Sint16_x001605E0 outvol;
                   Sint16_x001605E0 outpan[(2)];
                   Sint16_x001605E0 unk46;
                   Sint32_x001605E0 maxdecsmpl;
                   Sint32_x001605E0 lpcnt;
                   Sint32_x001605E0 lp_skiplen;
                   Sint32_x001605E0 trp;
                   Sint32_x001605E0 wpos;
                   Sint32_x001605E0 mofst;
                   Sint16_x001605E0 ercode;
                   Sint32_x001605E0 edecpos;
                   Sint16_x001605E0 edeccnt;
                   Sint16_x001605E0 eshrtcnt;
                   Sint8_x001605E0 lpflg;
                   Sint8_x001605E0 autorcvr;
                   Sint8_x001605E0 fltmode;
                   Sint8_x001605E0 execflag;
                   Sint8_x001605E0 pstwait_flag;
                   Sint8_x001605E0 pstready_flag;
                   Sint8_x001605E0 pause_flag;
                   void *amp;
                   SJ_x001605E0 ampsji[(2)];
                   SJ_x001605E0 ampsjo[(2)];
                   Sint32_x001605E0 time_ofst;
                   Sint32_x001605E0 lesct;
                   Sint32_x001605E0 trpnsmpl;
                   void *lsc;
                   Sint8_x001605E0 lnkflg;
                   Sint8_x001605E0 rsv;
                   Sint16_x001605E0 rsv2;
                   Uint32_x001605E0 tvofst;
                   Uint32_x001605E0 svcnt;
                   Uint32_x001605E0 decofst;
                   Sint32_x001605E0 flush_nsmpl;
                   Sint8_x001605E0 unkAC;
                   Sint8_x001605E0 padAD[1];
               Char8_x001605E0* unkB0;
               Sint32_x001605E0 padB4;
               Sint32_x001605E0 padB8;
               Sint32_x001605E0 padBC;
               Sint32_x001605E0 padC0;
} ADX_TALK_x001605E0;
typedef ADX_TALK_x001605E0 *ADXT_x001605E0;
extern void ADXT_EntryErrFunc_x001605E0(void (*func)(void *obj, Sint8_x001605E0 *msg), void *obj) __asm__("ADXT_EntryErrFunc");
extern void ADXT_EntryFltFunc_x001605E0(ADXT_x001605E0 adxt,
                void (*f)(void *obj, Sint32_x001605E0 ch, void *data, Sint32_x001605E0 dtlen), void *obj) __asm__("ADXT_EntryFltFunc");
extern void ADXM_SetCbUsrVsync_x001605E0(Bool_x001605E0 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrVsync");
extern void ADXM_SetCbUsrIdle_x001605E0(Bool_x001605E0 (*func)(void *obj), void *obj) __asm__("ADXM_SetCbUsrIdle");
extern void ADXM_SetCbErr_x001605E0(void (*fn)(void *obj, Char8_x001605E0 *emsg), void *obj) __asm__("ADXM_SetCbErr");
extern void ADXM_SetCbSleepMwIdle_x001605E0(void (*fn)(void *), void *obj) __asm__("ADXM_SetCbSleepMwIdle");
extern void ADXRNA_EntryErrFunc_x001605E0(void (*)(void*, Char8_x001605E0*), void*) __asm__("ADXRNA_EntryErrFunc");
void ADXRNA_SetOutPan_x001605E0(ADXRNA_x001605E0 rna, Sint32_x001605E0 channel, Sint32_x001605E0 pan) __asm__("func_001589A8");
extern void ADXSJD_EntryTrapFunc_x001605E0(ADXSJD_x001605E0 sjd, void (*func)(void*), void* obj) __asm__("ADXSJD_EntryTrapFunc");
Sint32_x001605E0 ADXSJD_GetNumChan_x001605E0(ADXSJD_x001605E0 sjd) __asm__("func_00159DC8");
Sint16_x001605E0 ADXSJD_GetDefPan_x001605E0(ADXSJD_x001605E0 sjd, Sint32_x001605E0 arg1) __asm__("func_00159F70");
void func_001605E0_x001605E0(ADXT_x001605E0 adxt) __asm__("func_001605E0");
/* adxt_set_outpan: from https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/adx_tsvr.c, AGPL-3.0-only); ee-gcc 2.96 -O2 -G0 */
void func_001605E0_x001605E0(ADXT_x001605E0 adxt) {
    Sint32_x001605E0 i;
    Sint32_x001605E0 num_chan;
    Sint32_x001605E0 def_pan[2];
    num_chan = ADXSJD_GetNumChan_x001605E0(adxt->sjd);
    for (i = 0; i < 2; i++) {
        def_pan[i] = ADXSJD_GetDefPan_x001605E0(adxt->sjd, i);
    }
    if (num_chan == 1) {
        if (adxt->outpan[0] == -0x80) {
            if (def_pan[0] == -0x80) {
                ADXRNA_SetOutPan_x001605E0(adxt->rna, 0, 0);
            } else {
                goto lbl1;
            lbl2:
                ADXRNA_SetOutPan_x001605E0(adxt->rna, 0, adxt->outpan[0]);
            }
        } else {
            if (def_pan[0] == -0x80) {
                goto lbl2;
            lbl1:
                ADXRNA_SetOutPan_x001605E0(adxt->rna, 0, def_pan[0]);
            } else {
                ADXRNA_SetOutPan_x001605E0(adxt->rna, 0, (Sint16_x001605E0)(adxt->outpan[0] & 0xFFFF) + def_pan[0]);
            }
        }
    } else {
        if (adxt->outpan[0] == -0x80) {
            if (def_pan[0] == -0x80) {
                ADXRNA_SetOutPan_x001605E0(adxt->rna, 0, -0xF);
            } else {
                goto lbl3;
            lbl4:
                ADXRNA_SetOutPan_x001605E0(adxt->rna, 0, adxt->outpan[0]);
            }
        } else {
            if (def_pan[0] == -0x80) {
                goto lbl4;
            lbl3:
                ADXRNA_SetOutPan_x001605E0(adxt->rna, 0, def_pan[0]);
            } else {
                ADXRNA_SetOutPan_x001605E0(adxt->rna, 0, adxt->outpan[0] + def_pan[0]);
            }
        }
        if (adxt->outpan[1] == -0x80) {
            if (def_pan[1] == -0x80) {
                ADXRNA_SetOutPan_x001605E0(adxt->rna, 1, 0xF);
            } else {
                goto lbl5;
            lbl6:
                ADXRNA_SetOutPan_x001605E0(adxt->rna, 1, adxt->outpan[1]);
            }
        } else {
            if (def_pan[1] == -0x80) {
                goto lbl6;
            lbl5:
                ADXRNA_SetOutPan_x001605E0(adxt->rna, 1, def_pan[1]);
            } else {
                ADXRNA_SetOutPan_x001605E0(adxt->rna, 1, (Sint16_x001605E0)(adxt->outpan[1] & 0xFFFF) + def_pan[1]);
            }
        }
    }
}
typedef unsigned char Uint8_x001607A8;
typedef signed char Sint8_x001607A8;
typedef signed short Sint16_x001607A8;
typedef unsigned int Uint32_x001607A8;
typedef signed int Sint32_x001607A8;
typedef char Char8_x001607A8;
typedef struct SJ_OBJ_x001607A8 *SJ_x001607A8;
typedef struct {
        Uint8_x001607A8 *data;
        Sint32_x001607A8 len;
} SJCK_x001607A8;
typedef struct {
        Uint8_x001607A8 data[16];
} SJUUID_x001607A8;
typedef struct {
        void *QueryInterface;
        void *AddRef;
        void *Release;
        void (*Destroy)(SJ_x001607A8 sj);
        const SJUUID_x001607A8 *(*GetUuid)(SJ_x001607A8 sj);
        void (*Reset)(SJ_x001607A8 sj);
        void (*GetChunk)(SJ_x001607A8 sj, Sint32_x001607A8 id, Sint32_x001607A8 nbyte, SJCK_x001607A8 *ck);
        void (*UngetChunk)(SJ_x001607A8 sj, Sint32_x001607A8 id, SJCK_x001607A8 *ck);
        void (*PutChunk)(SJ_x001607A8 sj, Sint32_x001607A8 id, SJCK_x001607A8 *ck);
        Sint32_x001607A8 (*GetNumData)(SJ_x001607A8 sj, Sint32_x001607A8 id);
        Sint32_x001607A8 (*IsGetChunk)(SJ_x001607A8 sj, Sint32_x001607A8 id, Sint32_x001607A8 nbyte, Sint32_x001607A8 *rbyte);
        void (*EntryErrFunc)(SJ_x001607A8 sj, void (*func)(void *obj, Char8_x001607A8 *msg), void *obj);
} SJ_IF_x001607A8;
struct SJ_OBJ_x001607A8 {
        SJ_IF_x001607A8 *vtbl;
};
void SJ_SplitChunk_x001607A8(SJCK_x001607A8 *src, Sint32_x001607A8 n, SJCK_x001607A8 *a, SJCK_x001607A8 *b) __asm__("func_0016F050");
typedef struct {
        Sint8_x001607A8 used;
        Sint8_x001607A8 stat;
        Sint8_x001607A8 mode;
        Sint8_x001607A8 maxnch;
        void *sjd;
        void *stm;
        void *rna;
        SJ_x001607A8 sjf;
        SJ_x001607A8 sji;
        SJ_x001607A8 sjo[2];
        Uint8_x001607A8 *ibuf;
        Sint32_x001607A8 ibufsize;
        Sint32_x001607A8 ibufxsize;
        Uint8_x001607A8 *obuf;
        Sint32_x001607A8 obufsize;
        Sint32_x001607A8 obufstride;
        Sint32_x001607A8 svrfreq;
        Sint16_x001607A8 ibuf_nsct;
        Sint16_x001607A8 reload_nsct;
        Sint16_x001607A8 outvol;
        Sint16_x001607A8 outpan[2];
        Sint16_x001607A8 outbal;
        Sint32_x001607A8 maxdecsmpl;
        Sint32_x001607A8 lpcnt;
        Sint32_x001607A8 lpendmod;
        Sint32_x001607A8 x54;
        Sint32_x001607A8 x58;
        Sint32_x001607A8 x5c;
        Sint16_x001607A8 errcode;
        Sint16_x001607A8 x62;
        Sint32_x001607A8 x64;
        Sint16_x001607A8 x68;
        Sint16_x001607A8 x6a;
        Sint8_x001607A8 lpsw;
        Sint8_x001607A8 autorcvr;
        Sint8_x001607A8 x6e;
        Sint8_x001607A8 x6f;
        Sint8_x001607A8 pausesw;
        Sint8_x001607A8 x71;
        Sint8_x001607A8 x72;
        Sint8_x001607A8 x73;
        void *amp;
        SJ_x001607A8 sjx[2];
        SJ_x001607A8 sjy[2];
        Sint32_x001607A8 timeofst;
        Sint32_x001607A8 lpendsct;
        Sint32_x001607A8 trapnsmpl;
        void *lsc;
        Sint8_x001607A8 lnksw;
        Uint8_x001607A8 pad99[0x9C - 0x99];
        Uint32_x001607A8 x9c;
        Sint32_x001607A8 startvsync;
        Sint32_x001607A8 decsmpl;
        Sint32_x001607A8 flush_nsmpl;
        Sint8_x001607A8 stmstart;
        Sint8_x001607A8 ainf_sw;
        Sint16_x001607A8 rsv4;
        Uint8_x001607A8 *wkend;
        void *stm_fname;
        void *stm_dir;
        Sint32_x001607A8 stm_ofst;
        Sint32_x001607A8 stm_nsct;
        Uint8_x001607A8 padC4[0xC8 - 0xC4];
} ADXT_OBJ_x001607A8;
typedef ADXT_OBJ_x001607A8 *ADXT_x001607A8;
extern Sint32_x001607A8 ADXSJD_GetStat_x001607A8(void *sjd) __asm__("func_00158D98");
extern void ADXSJD_SetMaxDecSmpl_x001607A8(void *sjd, Sint32_x001607A8 nsmpl) __asm__("func_00158DF0");
extern void ADXSJD_SetTrapNumSmpl_x001607A8(void *sjd, Sint32_x001607A8 nsmpl) __asm__("func_00159D68");
extern void ADXSJD_SetTrapDtLen_x001607A8(void *sjd, Sint32_x001607A8 len) __asm__("func_00159D88");
extern void ADXSJD_SetTrapCnt_x001607A8(void *sjd, Sint32_x001607A8 cnt) __asm__("func_00159D78");
extern Sint32_x001607A8 ADXSJD_GetTotalNumSmpl_x001607A8(void *sjd) __asm__("func_00159E28");
extern Sint32_x001607A8 ADXSJD_GetDecNumSmpl_x001607A8(void *sjd) __asm__("func_00159C78");
extern void ADXSJD_Stop_x001607A8(void *sjd) __asm__("func_00158E90");
extern void ADXSJD_Start_x001607A8(void *sjd) __asm__("func_00158E60");
extern void func_004ce858_x001607A8(void *sjd) __asm__("func_001598E8");
extern Sint32_x001607A8 ADX_DecodeFooter_x001607A8(Uint8_x001607A8 *data, Sint32_x001607A8 len, Sint16_x001607A8 *ofst) __asm__("func_00152F70");
extern Sint32_x001607A8 ADX_ScanInfoCode_x001607A8(Uint8_x001607A8 *data, Sint32_x001607A8 len, Sint16_x001607A8 *ofst) __asm__("func_00152698");
extern void ADXT_SetLnkSw_x001607A8(ADXT_x001607A8 adxt, Sint32_x001607A8 sw) __asm__("func_0015FB70");
extern void (*adxt_enddecinfo_cbfn_x001607A8)(ADXT_x001607A8 adxt, Sint32_x001607A8 sfreq, Sint32_x001607A8 nch, Sint32_x001607A8 nsmpl) __asm__("adxt_enddecinfo_cbfn");
void func_001607A8_x001607A8(void *obj) __asm__("func_001607A8");
/* adxt_nlp_trap_entry: from https://github.com/Raikaru/Persona4-Decompilation (src/cri/re4/adx_tsvr.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
void func_001607A8_x001607A8(void *obj)
{
        ADXT_x001607A8 p;
        void *sjd;
        SJ_x001607A8 sji;
        SJCK_x001607A8 ck;
        SJCK_x001607A8 ck3;
        SJCK_x001607A8 ck2;
        SJCK_x001607A8 ck4;
        Sint16_x001607A8 ofst;
        Sint16_x001607A8 ofst2;
        Sint32_x001607A8 ofst1;
        Sint32_x001607A8 n1;
        Sint32_x001607A8 n2;
        Sint32_x001607A8 ofst2v;
        register Sint32_x001607A8 t;
        Sint32_x001607A8 z;
        p = obj;
        sjd = p->sjd;
        sji = p->sji;
        if (p->lnksw == 0) {
                return;
        }
        ofst2 = 0;
        (*(sji)->vtbl->GetChunk)(sji, 1, 0x7FFFFFFF, &ck);
        (*(sji)->vtbl->GetChunk)(sji, 1, 0x7FFFFFFF, &ck2);
        if (ADX_DecodeFooter_x001607A8(ck.data, ck.len, &ofst) != 0) {
                ADXT_SetLnkSw_x001607A8(p, 0);
                (*(sji)->vtbl->UngetChunk)(sji, 1, &ck2);
                (*(sji)->vtbl->UngetChunk)(sji, 1, &ck);
                return;
        }
        ofst1 = ofst;
        n1 = ADX_ScanInfoCode_x001607A8(ck.data + ofst1, ck.len - ofst1, &ofst);
        if (n1 == 0) {
                n2 = -1;
        } else {
                n2 = ADX_ScanInfoCode_x001607A8(ck2.data, ck2.len, &ofst2);
        }
        t = ofst;
        z = 0;
        if (z != 0) {
                ofst1 = t + 4;
        }
        ofst1 += t;
        ofst2v = ofst2;
        if (n1 != 0 && n2 != 0) {
                (*(sji)->vtbl->UngetChunk)(sji, 1, &ck2);
                (*(sji)->vtbl->UngetChunk)(sji, 1, &ck);
                ADXT_SetLnkSw_x001607A8(p, 0);
                return;
        }
        if (n1 == 0) {
                (*(sji)->vtbl->UngetChunk)(sji, 1, &ck2);
                SJ_SplitChunk_x001607A8(&ck, ofst1, &ck, &ck3);
                (*(sji)->vtbl->PutChunk)(sji, 0, &ck);
                (*(sji)->vtbl->UngetChunk)(sji, 1, &ck3);
        } else {
                (*(sji)->vtbl->PutChunk)(sji, 0, &ck);
                SJ_SplitChunk_x001607A8(&ck2, ofst2v, &ck2, &ck4);
                (*(sji)->vtbl->PutChunk)(sji, 0, &ck2);
                (*(sji)->vtbl->UngetChunk)(sji, 1, &ck4);
        }
        p->decsmpl += ADXSJD_GetDecNumSmpl_x001607A8(sjd);
        ADXSJD_Stop_x001607A8(sjd);
        ADXSJD_Start_x001607A8(sjd);
        func_004ce858_x001607A8(sjd);
        if (ADXSJD_GetStat_x001607A8(sjd) != 2) {
                ADXT_SetLnkSw_x001607A8(p, 0);
                return;
        }
        ADXSJD_SetMaxDecSmpl_x001607A8(sjd, p->maxdecsmpl);
        ADXSJD_SetTrapNumSmpl_x001607A8(sjd, ADXSJD_GetTotalNumSmpl_x001607A8(sjd));
        ADXSJD_SetTrapDtLen_x001607A8(sjd, 0);
        ADXSJD_SetTrapCnt_x001607A8(sjd, 0);
}
typedef struct SfdSj_x00160A90 SfdSj_x00160A90;
typedef struct SfdSjChunk_x00160A90 {
    char *data;
    int len;
} SfdSjChunk_x00160A90;
typedef struct SfdSjVtbl_x00160A90 {
    void *queryInterface;
    void *addRef;
    void *release;
    void (*destroy)(SfdSj_x00160A90 *sj);
    int (*getUuid)(SfdSj_x00160A90 *sj);
    void (*reset)(SfdSj_x00160A90 *sj);
    void (*getChunk)(SfdSj_x00160A90 *sj, int id, int n, SfdSjChunk_x00160A90 *ck);
    void (*ungetChunk)(SfdSj_x00160A90 *sj, int id, SfdSjChunk_x00160A90 *ck);
    void (*putChunk)(SfdSj_x00160A90 *sj, int id, SfdSjChunk_x00160A90 *ck);
    int (*getNumData)(SfdSj_x00160A90 *sj, int id);
} SfdSjVtbl_x00160A90;
struct SfdSj_x00160A90 {
    SfdSjVtbl_x00160A90 *vtbl;
};
typedef struct SjxObj_x00160A90 SjxObj_x00160A90;
typedef struct LscStm_x00160A90 {
    int id;
    const char *fname;
    int fname_sum;
    void *dir;
    int ofst;
    int nsct;
    int stat;
    int rdsct;
} LscStm_x00160A90;
typedef struct LscObj_x00160A90 {
    signed char used;
    signed char stat;
    signed char reading;
    signed char loop;
    signed char pause;
    char rsv1;
    short rsv2;
    SfdSj_x00160A90 *sj;
    SfdSjChunk_x00160A90 ck;
    int flow_min;
    int flow_max;
    int wpos;
    int rpos;
    int nstm;
    void *stm;
    int stm_size;
    int reqsct;
    int errcnt;
    LscStm_x00160A90 stms[16];
} LscObj_x00160A90;
typedef struct AdxPdObj_x00160A90 {
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
} AdxPdObj_x00160A90;
typedef struct AdxDecPara_x00160A90 {
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
} AdxDecPara_x00160A90;
enum {
    ADXB_FORMAT_ADX_x00160A90 = 0,
    ADXB_FORMAT_WAV_x00160A90 = 1,
    ADXB_FORMAT_SPSD_x00160A90 = 2,
    ADXB_FORMAT_AIFF_x00160A90 = 3,
    ADXB_FORMAT_AU_x00160A90 = 4,
    ADXB_FORMAT_AHX_x00160A90 = 10,
    ADXB_FORMAT_AC3_x00160A90 = 15
};
struct Pl2Enc_x00160A90;
typedef struct AdxbObj_x00160A90 AdxbObj_x00160A90;
typedef short *(*AdxbGetWrFunc_x00160A90)(void *obj, int *wpos, int *room, int *rest);
typedef void (*AdxbAddWrFunc_x00160A90)(void *obj, int nbyte, int nsmpl);
struct AdxbObj_x00160A90 {
    short used;
    short hdcdflag;
    int stat;
    AdxPdObj_x00160A90 *xpd;
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
    AdxDecPara_x00160A90 dp;
    AdxbGetWrFunc_x00160A90 getwrfunc;
    void *getwrobj;
    AdxbAddWrFunc_x00160A90 addwrfunc;
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
    struct Pl2Enc_x00160A90 *pl2;
    int pl2_x;
    int pl2_y;
    int cb_ndeclen;
    int f248;
    void (*decfunc)(void *context, int count, int bytes);
    void *decobj;
};
extern void ADXB_EntryDecFunc_x00160A90(AdxbObj_x00160A90 *adxb, void (*func)(void *obj, int nsmpl, int nbyte), void *obj) __asm__("ADXB_EntryDecFunc");
enum AdxSjdStat_x00160A90 {
    ADXSJD_STAT_STOP_x00160A90 = 0,
    ADXSJD_STAT_DECHDR_x00160A90 = 1,
    ADXSJD_STAT_DECODE_x00160A90 = 2,
    ADXSJD_STAT_DECEND_x00160A90 = 3,
    ADXSJD_STAT_ERROR_x00160A90 = 4
};
typedef struct AdxSjdObj_x00160A90 {
    signed char used;
    signed char stat;
    signed char maxnch;
    signed char empty_end;
    AdxbObj_x00160A90 *adxb;
    SfdSj_x00160A90 *sji;
    SfdSj_x00160A90 *sjo[2];
    SfdSjChunk_x00160A90 cki;
    SfdSjChunk_x00160A90 cko[2];
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
} AdxSjdObj_x00160A90;
char ADXSJD_GetStat_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("func_00158D98");
void ADXSJD_SetMaxDecSmpl_x00160A90(AdxSjdObj_x00160A90 *sjd, int nsmpl) __asm__("func_00158DF0");
extern void ADXSJD_EntryFltFunc_x00160A90(AdxSjdObj_x00160A90 *sjd, void (*func)(void *obj, int ch, char *data, int len), void *obj) __asm__("ADXSJD_EntryFltFunc");
extern void ADXSJD_EntryTrapFunc_x00160A90(AdxSjdObj_x00160A90 *sjd, void (*func)(void *obj), void *obj) __asm__("func_00159D58");
void ADXSJD_SetTrapNumSmpl_x00160A90(AdxSjdObj_x00160A90 *sjd, int nsmpl) __asm__("func_00159D68");
void ADXSJD_SetTrapCnt_x00160A90(AdxSjdObj_x00160A90 *sjd, int cnt) __asm__("func_00159D78");
void ADXSJD_SetTrapDtLen_x00160A90(AdxSjdObj_x00160A90 *sjd, int len) __asm__("func_00159D88");
int ADXSJD_GetFormat_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("func_00159D98");
int ADXSJD_GetSfreq_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("ADXSJD_GetSfreq");
int ADXSJD_GetNumChan_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("func_00159DC8");
int ADXSJD_GetOutBps_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("func_00159DE0");
int ADXSJD_GetBlkSmpl_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("func_00159DF8");
int ADXSJD_GetTotalNumSmpl_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("func_00159E28");
int ADXSJD_GetNumLoop_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("func_00159E58");
int ADXSJD_GetLpStartPos_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("func_00159E88");
int ADXSJD_GetLpEndPos_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("func_00159ED0");
int ADXSJD_GetLpEndOfst_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("func_00159EE8");
short ADXSJD_GetDefOutVol_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("func_00159F18");
char *ADXSJD_GetSpsdInfo_x00160A90(AdxSjdObj_x00160A90 *sjd) __asm__("func_0015A050");
typedef void (*CvFsErrFn_x00160A90)(void *obj, const char *msg, int code);
typedef void (*CvFsEntryErrFuncFn_x00160A90)(CvFsErrFn_x00160A90 func, void *obj);
typedef int (*CvFsPathFn_x00160A90)(const char *path);
typedef int (*CvFsGetFreeSizeFn_x00160A90)(void);
typedef int (*CvFsOpenFn_x00160A90)(const char *fname, void *atr, int rw);
typedef void (*CvFsFdFn_x00160A90)(int fd);
typedef int (*CvFsFdIntFn_x00160A90)(int fd);
typedef int (*CvFsSeekFn_x00160A90)(int fd, int offset, int origin);
typedef int (*CvFsXferFn_x00160A90)(int fd, int nsct, void *buf);
typedef void (*CvFsSetSctLenFn_x00160A90)(int fd, int len);
typedef int (*CvFsGetNumFilesFn_x00160A90)(void);
typedef int (*CvFsLoadDirInfoFn_x00160A90)(const char *path, void *work, int nfile);
typedef int (*CvFsGetFileSizeExFn_x00160A90)(const char *path, int arg);
typedef int (*CvFsOptFn2_x00160A90)(int fd, int code, int arg);
typedef struct CvFsVtbl_x00160A90 {
    void (*exec_server)(void);
    CvFsEntryErrFuncFn_x00160A90 entry_err_func;
    CvFsPathFn_x00160A90 get_file_size;
    CvFsGetFreeSizeFn_x00160A90 get_free_size;
    CvFsOpenFn_x00160A90 open;
    CvFsFdFn_x00160A90 close;
    CvFsSeekFn_x00160A90 seek;
    CvFsFdIntFn_x00160A90 tell;
    CvFsXferFn_x00160A90 req_rd;
    CvFsXferFn_x00160A90 req_wr;
    CvFsFdFn_x00160A90 stop_tr;
    CvFsFdIntFn_x00160A90 get_stat;
    CvFsFdIntFn_x00160A90 get_sct_len;
    CvFsSetSctLenFn_x00160A90 set_sct_len;
    CvFsFdIntFn_x00160A90 get_num_tr;
    CvFsPathFn_x00160A90 change_dir;
    CvFsPathFn_x00160A90 is_exist_file;
    CvFsGetNumFilesFn_x00160A90 get_num_files;
    CvFsLoadDirInfoFn_x00160A90 load_dir_info;
    CvFsFdIntFn_x00160A90 get_max_byte_rate;
    CvFsPathFn_x00160A90 make_dir;
    CvFsPathFn_x00160A90 remove_dir;
    CvFsPathFn_x00160A90 delete_file;
    CvFsGetFileSizeExFn_x00160A90 get_file_size_ex;
    int (*opt_fn1)();
    CvFsOptFn2_x00160A90 opt_fn2;
} CvFsVtbl_x00160A90;
typedef struct CvFsHandle_x00160A90 {
    CvFsVtbl_x00160A90 *vtbl;
    int fd;
} CvFsHandle_x00160A90;
extern CvFsVtbl_x00160A90 *addDevice_x00160A90(char *devname, CvFsVtbl_x00160A90 *(*get_if)(void)) __asm__("addDevice");
enum AdxStmStat_x00160A90 {
    ADXSTM_STAT_STOP_x00160A90 = 1,
    ADXSTM_STAT_READ_x00160A90 = 2,
    ADXSTM_STAT_READEND_x00160A90 = 3,
    ADXSTM_STAT_ERROR_x00160A90 = 4
};
typedef struct AdxStmObj_x00160A90 {
    signed char used;
    signed char stat;
    signed char rdflg;
    signed char rtrycnt;
    SfdSj_x00160A90 *sj;
    CvFsHandle_x00160A90 *fd;
    int fofst;
    int fsize;
    int fsctsz;
    int maxrdsz;
    int minrdsz;
    int rdsct;
    SfdSjChunk_x00160A90 rdck;
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
} AdxStmObj_x00160A90;
int ADXSTM_GetStat_x00160A90(AdxStmObj_x00160A90 *stm) __asm__("func_0015CCD0");
extern void ADXSTM_EntryEosFunc_x00160A90(AdxStmObj_x00160A90 *stm, void (*func)(void *obj), void *obj) __asm__("func_0015CE88");
void ADXSTM_SetEos_x00160A90(AdxStmObj_x00160A90 *stm, int eos) __asm__("func_0015CE98");
typedef struct AdxAmpObj_x00160A90 AdxAmpObj_x00160A90;
void ADXAMP_SetSfreq_x00160A90(AdxAmpObj_x00160A90 *amp, int sfreq) __asm__("func_0014EC20");
typedef struct DtrObj_x00160A90 DtrObj_x00160A90;
typedef struct Ps2RnaPsj_x00160A90 {
    char used;
    void *sjrmt;
    SfdSj_x00160A90 *sjuni;
    SjxObj_x00160A90 *sjx;
    SfdSjChunk_x00160A90 ck;
} Ps2RnaPsj_x00160A90;
typedef struct Ps2Rna_x00160A90 {
    signed char used;
    int maxnch;
    Ps2RnaPsj_x00160A90 *psj[2];
    DtrObj_x00160A90 *dtr[2];
    SfdSj_x00160A90 *sjo[2];
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
} Ps2Rna_x00160A90;
enum AdxtStat_x00160A90 {
    ADXT_STAT_STOP_x00160A90 = 0,
    ADXT_STAT_DECINFO_x00160A90 = 1,
    ADXT_STAT_PREP_x00160A90 = 2,
    ADXT_STAT_PLAYING_x00160A90 = 3,
    ADXT_STAT_DECEND_x00160A90 = 4,
    ADXT_STAT_PLAYEND_x00160A90 = 5,
    ADXT_STAT_ERROR_x00160A90 = 6
};
enum AdxtPmode_x00160A90 {
    ADXT_PMODE_FNAME_x00160A90 = 0,
    ADXT_PMODE_AFS_x00160A90 = 1,
    ADXT_PMODE_MEM_x00160A90 = 2,
    ADXT_PMODE_SJ_x00160A90 = 3,
    ADXT_PMODE_SLFILE_x00160A90 = 4
};
typedef struct AdxtObj_x00160A90 {
    signed char used;
    signed char stat;
    signed char pmode;
    signed char maxnch;
    AdxSjdObj_x00160A90 *sjd;
    AdxStmObj_x00160A90 *stm;
    Ps2Rna_x00160A90 *rna;
    SfdSj_x00160A90 *sjf;
    SfdSj_x00160A90 *sji;
    SfdSj_x00160A90 *sjo[2];
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
    AdxAmpObj_x00160A90 *amp;
    SfdSj_x00160A90 *ampsji[2];
    SfdSj_x00160A90 *ampsjo[2];
    int time_ofst;
    int lesct;
    int trpnsmpl;
    LscObj_x00160A90 *lsc;
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
} AdxtObj_x00160A90;
typedef void (*AdxtDecInfoFunc_x00160A90)(AdxtObj_x00160A90 *adxt, int sfreq, int nch, int total_nsmpl);
void adxt_start_stm_x00160A90(AdxtObj_x00160A90 *adxt, char *fname, void *dir, int ofst, int nsct) __asm__("func_0015E4F8");
void ADXT_Stop_x00160A90(AdxtObj_x00160A90 *adxt) __asm__("ADXT_Stop");
void ADXT_SetTranspose_x00160A90(AdxtObj_x00160A90 *adxt, int fxch, int fxlev) __asm__("func_0015F9E8");
void ADXT_GetTranspose_x00160A90(AdxtObj_x00160A90 *adxt, int *fxch, int *fxlev) __asm__("func_0015F9F0");
void ADXERR_CallErrFunc2_x00160A90(const char *code, const char *msg) __asm__("func_00154178");
void ADXERR_ItoA2_x00160A90(int value, int extra, char *text, int size) __asm__("func_001542F0");
void ADXRNA_SetTransSw_x00160A90(Ps2Rna_x00160A90 *rna, int sw) __asm__("func_00158880");
void ADXRNA_SetNumChan_x00160A90(Ps2Rna_x00160A90 *rna, int nch) __asm__("func_00158960");
void ADXRNA_SetSfreq_x00160A90(Ps2Rna_x00160A90 *rna, int sfreq) __asm__("func_00158978");
void ADXRNA_SetOutVol_x00160A90(Ps2Rna_x00160A90 *rna, int vol) __asm__("func_00158990");
void ADXRNA_SetBitPerSmpl_x00160A90(Ps2Rna_x00160A90 *rna, int bps) __asm__("func_001589D8");
void ADXRNA_SetTotalNumSmpl_x00160A90(Ps2Rna_x00160A90 *rna, int nsmpl) __asm__("func_00158AC0");
int ADXRNA_SetStmHdInfo_x00160A90(Ps2Rna_x00160A90 *rna, char *info) __asm__("func_00158AD0");
extern AdxtDecInfoFunc_x00160A90 adxt_decinfo_func_x00160A90 __asm__("lbl_801A66E8");
void adxt_trap_entry_lps_x00160A90(void *obj) __asm__("func_00160300");
void adxt_eos_entry_x00160A90(void *obj) __asm__("func_00160550");
void adxt_set_outpan_x00160A90(AdxtObj_x00160A90 *adxt) __asm__("func_001605E0");
void adxt_nlp_trap_entry_x00160A90(void *obj) __asm__("func_001607A8");
extern char ext_str0_x00160A90[] __asm__("D_00462110");
void adxt_stat_decinfo_x00160A90(AdxtObj_x00160A90 *adxt) __asm__("adxt_stat_decinfo");
/* adxt_stat_decinfo_x00160A90: from https://github.com/crashbashash/DW4_Decomp (src/cri/adxtsvr.c, decompiled src/: no licence granted by the repository (its tools are CC0-1.0)); ee-gcc 2.96 -O2 -G0 */
void adxt_stat_decinfo_x00160A90(AdxtObj_x00160A90 *adxt)
{
    char nchstr[32];
    AdxSjdObj_x00160A90 *sjd;
    int sctlen;
    int fxch;
    int fxlev;
    int sfreq;
    int nch;
    int total_nsmpl;
    int nloop;
    int lpeofst;
    int blkbytes;
    sctlen = 2048;
    fxch = 0;
    sjd = adxt->sjd;
    fxlev = 0;
    adxt->pad_nsmpl = 0;
    if ((adxt->pmode == ADXT_PMODE_FNAME_x00160A90 || adxt->pmode == ADXT_PMODE_AFS_x00160A90) && adxt->stm_req == 1) {
        if (ADXSTM_GetStat_x00160A90(adxt->stm) == ADXSTM_STAT_READ_x00160A90) {
            return;
        }
        if (adxt->sjf != 0) {
            adxt->sjf->vtbl->reset(adxt->sjf);
        }
        adxt_start_stm_x00160A90(adxt, adxt->fname, adxt->dir, adxt->ofst, adxt->nsct);
        adxt->stm_req = 0;
    }
    if (ADXSJD_GetStat_x00160A90(sjd) != ADXSJD_STAT_DECODE_x00160A90) {
        return;
    }
    nch = ADXSJD_GetNumChan_x00160A90(sjd);
    if (adxt->maxnch < nch) {
        ADXERR_ItoA2_x00160A90(nch, adxt->maxnch, nchstr, 16);
        ADXERR_CallErrFunc2_x00160A90(ext_str0_x00160A90, nchstr);
        ADXT_Stop_x00160A90(adxt);
        return;
    }
    sfreq = ADXSJD_GetSfreq_x00160A90(sjd);
    nloop = ADXSJD_GetNumLoop_x00160A90(sjd);
    if (nloop > 0) {
        adxt->maxdecsmpl = (sfreq / adxt->svrfreq) * 3;
    } else {
        adxt->maxdecsmpl = (sfreq / adxt->svrfreq) * 3 / 2;
    }
    blkbytes = ADXSJD_GetBlkSmpl_x00160A90(sjd) * 2;
    adxt->maxdecsmpl = ((adxt->maxdecsmpl + blkbytes) / blkbytes) * blkbytes;
    ADXSJD_SetMaxDecSmpl_x00160A90(sjd, adxt->maxdecsmpl);
    if (nloop > 0) {
        if (adxt->pmode == ADXT_PMODE_MEM_x00160A90) {
            adxt->lp_skiplen = 0;
        } else {
            lpeofst = ADXSJD_GetLpEndOfst_x00160A90(sjd);
            adxt->lp_skiplen = sctlen - lpeofst % sctlen;
            adxt->lp_skiplen = adxt->lp_skiplen % sctlen;
            adxt->lesct = (lpeofst + sctlen - 1) / sctlen;
            ADXSTM_SetEos_x00160A90(adxt->stm, adxt->lesct);
            ADXSTM_EntryEosFunc_x00160A90(adxt->stm, adxt_eos_entry_x00160A90, adxt);
        }
        ADXSJD_GetLpEndPos_x00160A90(sjd);
        adxt->trpnsmpl = ADXSJD_GetLpStartPos_x00160A90(sjd);
        ADXSJD_SetTrapNumSmpl_x00160A90(sjd, adxt->trpnsmpl);
        ADXSJD_SetTrapDtLen_x00160A90(sjd, 0);
        ADXSJD_SetTrapCnt_x00160A90(sjd, 0);
        ADXSJD_EntryTrapFunc_x00160A90(sjd, adxt_trap_entry_lps_x00160A90, adxt);
    } else {
        if (adxt->stm != 0) {
            ADXSTM_SetEos_x00160A90(adxt->stm, 0x7fffffff);
        }
        ADXSJD_SetTrapNumSmpl_x00160A90(sjd, ADXSJD_GetTotalNumSmpl_x00160A90(sjd));
        ADXSJD_SetTrapDtLen_x00160A90(sjd, 0);
        ADXSJD_SetTrapCnt_x00160A90(sjd, 0);
        ADXSJD_EntryTrapFunc_x00160A90(sjd, adxt_nlp_trap_entry_x00160A90, adxt);
    }
    sfreq = ADXSJD_GetSfreq_x00160A90(sjd);
    nch = ADXSJD_GetNumChan_x00160A90(sjd);
    total_nsmpl = ADXSJD_GetTotalNumSmpl_x00160A90(sjd);
    ADXRNA_SetBitPerSmpl_x00160A90(adxt->rna, ADXSJD_GetOutBps_x00160A90(sjd));
    ADXRNA_SetSfreq_x00160A90(adxt->rna, sfreq);
    ADXRNA_SetNumChan_x00160A90(adxt->rna, nch);
    ADXRNA_SetTotalNumSmpl_x00160A90(adxt->rna, total_nsmpl);
    ADXRNA_SetOutVol_x00160A90(adxt->rna, adxt->outvol + ADXSJD_GetDefOutVol_x00160A90(adxt->sjd));
    ADXT_GetTranspose_x00160A90(adxt, &fxch, &fxlev);
    if (fxch != 0 || fxlev != 0) {
        ADXT_SetTranspose_x00160A90(adxt, fxch, fxlev);
    }
    adxt_set_outpan_x00160A90(adxt);
    if (adxt->amp != 0) {
        ADXAMP_SetSfreq_x00160A90(adxt->amp, sfreq);
    }
    if (ADXSJD_GetFormat_x00160A90(sjd) == ADXB_FORMAT_SPSD_x00160A90) {
        ADXRNA_SetStmHdInfo_x00160A90(adxt->rna, ADXSJD_GetSpsdInfo_x00160A90(sjd));
    }
    ADXRNA_SetTransSw_x00160A90(adxt->rna, 1);
    if (adxt_decinfo_func_x00160A90 != 0) {
        adxt_decinfo_func_x00160A90(adxt, sfreq, nch, total_nsmpl);
    }
    adxt->stat = ADXT_STAT_PREP_x00160A90;
}
