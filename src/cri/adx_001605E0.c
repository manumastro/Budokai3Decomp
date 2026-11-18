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
INCLUDE_ASM("asm/nonmatchings/cri/adx_001605E0", func_001607A8);
INCLUDE_ASM("asm/nonmatchings/cri/adx_001605E0", adxt_stat_decinfo);
